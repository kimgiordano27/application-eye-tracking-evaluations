/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.Raycast
ENTRY_POINT: 05ad09e4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_Raycast
               (long param_1)

{
  long lVar1;
  uint in_w9;
  uint in_w10;
  uint uVar2;
  long in_x11;
  uint in_w12;
  long unaff_x19;
  undefined8 uVar3;
  
  while( true ) {
    uVar2 = in_w12;
    if (in_x11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x11 + 0x18) <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar1 = in_x11 + (long)(int)in_w10 * 0x20;
    if (-1 < *(int *)(lVar1 + 0x20)) break;
    if (in_w9 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_05ad0a24;
    }
    in_x11 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar2 + 1;
    in_w12 = uVar2 + 1;
    in_w10 = uVar2;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  uVar2 = in_w10;
LAB_05ad0a24:
  return uVar2 < in_w9;
}


