/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveRemovedRoom
ENTRY_POINT: 08a2a7c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveRemovedRoom(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x618));
  *(undefined1 *)(unaff_x21 + 0x333) = 1;
  lVar2 = FUN_08a28878();
  if ((lVar2 != 0) && (lVar2 = FUN_089bc5e4(lVar2,0), puVar1 = PTR_DAT_0ac16618, unaff_x19 != 0)) {
    in_stack_00000018 = 0;
    FUN_06fc9c54(*(undefined4 *)(unaff_x19 + 0x20),&stack0x00000018,*(undefined8 *)PTR_DAT_0ac16618)
    ;
    if (lVar2 != 0) {
      FUN_089bbf0c(lVar2,in_stack_00000018,0);
      lVar2 = FUN_08a28878();
      if (lVar2 != 0) {
        lVar2 = FUN_089bc5e4(lVar2,0);
        in_stack_00000008 = 0;
        FUN_06fc9c54(*(undefined4 *)(unaff_x19 + 0x24),&stack0x00000008,*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_089bbf74(lVar2,in_stack_00000008,0);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          if (lVar2 != 0) {
            Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
                      ();
            (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


