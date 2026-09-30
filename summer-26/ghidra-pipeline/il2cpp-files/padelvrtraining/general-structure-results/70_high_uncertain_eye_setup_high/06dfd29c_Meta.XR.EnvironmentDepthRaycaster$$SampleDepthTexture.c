/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$SampleDepthTexture
ENTRY_POINT: 06dfd29c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_EnvironmentDepthRaycaster__SampleDepthTexture(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  
  uVar1 = *(uint *)(unaff_x19 + 8);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    memmove((void *)(unaff_x19 + 0x10),(void *)(lVar3 + (long)(int)uVar1 * 0x98 + 0x20),0x98);
    *(uint *)(unaff_x19 + 8) = uVar1 + 1;
    uVar2 = 1;
  }
  else {
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_06dfd318();
    uVar2 = 0;
  }
  return uVar2;
}


