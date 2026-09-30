/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.SetEnabled
ENTRY_POINT: 06dff568
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_SetEnabled
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long in_x9;
  long lVar2;
  uint in_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  if ((uint)param_1 < in_w10) {
    lVar2 = *(long *)(in_x9 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar2 + 0x18) <= (uint)param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar2 = lVar2 + param_1 * 0x18;
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    uVar1 = 1;
    *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
  }
  else {
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_06dff5e8();
    uVar1 = 0;
  }
  return uVar1;
}


