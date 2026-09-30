/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<RayCastDebugger>b__85_2
ENTRY_POINT: 06e1a958
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<RayCastDebugger>b__85_2(long *param_1)

{
  if (*param_1 != 0) {
    if ((int)param_1[1] != *(int *)(*param_1 + 0x2c)) {
      FUN_07199bdc(0);
    }
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


