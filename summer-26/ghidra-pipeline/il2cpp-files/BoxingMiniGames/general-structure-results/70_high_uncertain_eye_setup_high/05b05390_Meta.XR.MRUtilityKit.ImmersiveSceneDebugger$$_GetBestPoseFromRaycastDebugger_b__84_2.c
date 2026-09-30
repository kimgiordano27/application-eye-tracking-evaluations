/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetBestPoseFromRaycastDebugger>b__84_2
ENTRY_POINT: 05b05390
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetBestPoseFromRaycastDebugger>b__84_2
               (long param_1,undefined8 param_2,long param_3)

{
  uint in_w9;
  undefined4 in_register_0000404c;
  uint in_w10;
  
  if ((in_w9 <= in_w10) &&
     (*(long *)(*(long *)(param_1 + 200) + CONCAT44(in_register_0000404c,in_w9) * 8 + -8) == param_3
     )) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


