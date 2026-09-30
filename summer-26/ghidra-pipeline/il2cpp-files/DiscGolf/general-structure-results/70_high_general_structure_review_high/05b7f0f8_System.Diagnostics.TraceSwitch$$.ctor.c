/*
FUNCTION_NAME: System.Diagnostics.TraceSwitch$$.ctor
ENTRY_POINT: 05b7f0f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void System_Diagnostics_TraceSwitch___ctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05b7f0e8 with catch @ 05b7f0f8
                        */
  FUN_0550510c();
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_0297c314();
  FUN_02978e90();
  thunk_FUN_02dfd288(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d>__
                    );
  uVar1 = FUN_05bc0ef0();
  uVar2 = thunk_FUN_02dfd288(PTR_DAT_069fb9d8);
  uVar2 = FUN_02d966a4(uVar2,2);
  FUN_02979e58();
  FUN_02978e90(uVar2,0);
  FUN_02978e90(uVar2,1,uVar1);
  uVar1 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateWebRequestAsync>d__3>__
                            );
  uVar1 = FUN_05bc0ef0(uVar1,uVar2,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar2 = thunk_FUN_02dd3144();
  FUN_05452924(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_set_Item__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar2,uVar1);
}


