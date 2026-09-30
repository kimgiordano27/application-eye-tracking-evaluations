/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsSupported
ENTRY_POINT: 05ad0994
PROGRAM: vandalizer-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
               (long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_05e229e0(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_05ad0a34;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar4 = uVar2;
      if (uVar1 <= uVar4) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_05ad0a24;
      }
      lVar5 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar4 + 1;
      if (lVar5 == 0) goto LAB_05ad0a34;
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
      uVar2 = uVar4 + 1;
    } while (*(int *)(lVar5 + 0x20) < 0);
    lVar3 = *(long *)(lVar5 + 0x28);
    param_1[3] = *(long *)(lVar5 + 0x30);
    param_1[2] = lVar3;
LAB_05ad0a24:
    return uVar4 < uVar1;
  }
LAB_05ad0a34:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


