/*
FUNCTION_NAME: Analytics.<FinishGameUpload>d__14$$System.IDisposable.Dispose
ENTRY_POINT: 01f2f090
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Analytics_<FinishGameUpload>d__14__System_IDisposable_Dispose
               (undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = thunk_FUN_03152714(param_2,*param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*unaff_x21 != 0) {
    FUN_03d1381c(*unaff_x21,*(undefined8 *)(unaff_x19 + 0x88),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


