/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$OnDisable
ENTRY_POINT: 08a2a5b4
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


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__OnDisable(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if ((DAT_0b32c331 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac16618);
    DAT_0b32c331 = 1;
  }
  lVar3 = FUN_08a28878(param_1);
  puVar1 = PTR_DAT_0ac16618;
  if (param_2 != 0) {
    in_stack_00000018 = 0;
    FUN_06fc9c54(*(undefined4 *)(param_2 + 0x20),&stack0x00000018,*(undefined8 *)PTR_DAT_0ac16618);
    if (lVar3 != 0) {
      FUN_089bbfdc(lVar3,in_stack_00000018,0);
      lVar3 = FUN_08a28878(param_1);
      in_stack_00000008 = 0;
      FUN_06fc9c54(*(undefined4 *)(param_2 + 0x24),&stack0x00000008,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_089bc044(lVar3,in_stack_00000008,0);
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 != 0) {
          uVar2 = Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
                            (param_1,param_2);
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),param_2,uVar2 & 1,*(undefined8 *)(lVar3 + 0x28));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


