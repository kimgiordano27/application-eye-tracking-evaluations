/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDepthTextureUpdate
ENTRY_POINT: 06dfc888
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_EnvironmentDepthRaycaster__OnDepthTextureUpdate(long param_1,long param_2)

{
  long lVar1;
  uint in_w9;
  int unaff_w19;
  undefined8 uVar2;
  
  *(uint *)(param_2 + 0xc) = in_w9;
  if (-1 < (int)in_w9) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar1 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar1 = lVar1 + (ulong)in_w9 * 0x10;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    thunk_FUN_03d1023c(param_2 + 0x18,0);
  }
  return (uint)-unaff_w19 >> 0x1f;
}


