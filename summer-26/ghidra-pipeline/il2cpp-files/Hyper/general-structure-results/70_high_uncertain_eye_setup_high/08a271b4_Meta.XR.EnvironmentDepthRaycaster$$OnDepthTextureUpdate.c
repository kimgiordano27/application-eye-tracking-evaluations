/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDepthTextureUpdate
ENTRY_POINT: 08a271b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__OnDepthTextureUpdate(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x08a271cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),param_2 & 1,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


