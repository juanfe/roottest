{
// Fill out the code of the actual test
#ifndef SECOND_RUN
   gROOT->ProcessLine(".L test_classes.h+");
#endif

#if defined(ClingWorkAroundMissingDynamicScope) && !defined(SECOND_RUN)
#define SECOND_RUN
   gROOT->ProcessLine(".x runBasicTypes.C");
#else

   TJsonEx1* ex1 = new TJsonEx1;
   TJsonEx2* ex2 = new TJsonEx2;
   TJsonEx3* ex3 = new TJsonEx3(5);
   TJsonEx11* ex11 = new TJsonEx11;

   cout << " ====== basic data types TJsonEx1 ===== " << endl;
   cout << TBufferJSON::ConvertToJSON(ex1, gROOT->GetClass("TJsonEx1")) << endl << endl;
   cout << " ====== inheritance from TJsonEx1, TJsonEx11 ===== " << endl;
   cout << TBufferJSON::ConvertToJSON(ex11, gROOT->GetClass("TJsonEx11")) << endl << endl;
   cout << " ====== arrays of basic data types TJsonEx2 ===== " << endl;
   cout << TBufferJSON::ConvertToJSON(ex2, gROOT->GetClass("TJsonEx2")) << endl << endl;
   cout << " ====== dinamin arrays of basic data types TJsonEx3 ===== " << endl;
   cout << TBufferJSON::ConvertToJSON(ex3, gROOT->GetClass("TJsonEx3")) << endl << endl;
   cout << " ============ selected data members ======== " << endl;
   cout << "ex2.fInt = " << TBufferJSON::ConvertToJSON(ex2, gROOT->GetClass("TJsonEx2"), 0, "fInt") << endl;
   cout << "ex3.fChar = " << TBufferJSON::ConvertToJSON(ex3, gROOT->GetClass("TJsonEx3"), 0, "fChar") << endl;
   cout << "ex3.fLong = " << TBufferJSON::ConvertToJSON(ex3, gROOT->GetClass("TJsonEx3"), 0, "fLong") << endl;

   delete ex1;
   delete ex2;
   delete ex3;
   delete ex11;
#endif
#ifdef ClingWorkAroundBrokenUnnamedReturn
   gApplication->Terminate(0);
#else
   return 0;
#endif
}
