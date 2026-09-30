/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 05ac6794
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition(long param_1)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 *unaff_x23;
  
  while( true ) {
    uVar1 = (**(code **)(param_1 + 0x1b8))(unaff_x23[-1],*unaff_x23);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x22 = unaff_x22 + -1;
    unaff_x23 = unaff_x23 + 2;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x22 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    param_1 = *unaff_x21;
  }
  return 0xffffffff;
}


