/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveAnchorRemovedCallback
ENTRY_POINT: 08a2ab2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveAnchorRemovedCallback(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (unaff_x21 != 0) {
    FUN_089bbfdc();
    lVar1 = FUN_08a28878();
    if (lVar1 != 0) {
      lVar1 = FUN_089bc758(lVar1,0);
      in_stack_00000008 = 0;
      FUN_06fc9c54(*(undefined4 *)(unaff_x19 + 0x24),&stack0x00000008,*unaff_x22);
      if (lVar1 != 0) {
        FUN_089bc044(lVar1,in_stack_00000008,0);
        lVar1 = *(long *)(unaff_x20 + 0x38);
        if (lVar1 != 0) {
          Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
                    ();
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


