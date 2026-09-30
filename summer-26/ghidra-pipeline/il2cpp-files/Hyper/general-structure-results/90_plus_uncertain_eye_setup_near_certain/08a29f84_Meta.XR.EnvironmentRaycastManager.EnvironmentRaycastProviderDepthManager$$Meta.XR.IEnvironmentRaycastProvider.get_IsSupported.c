/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsSupported
ENTRY_POINT: 08a29f84
PROGRAM: Hyper-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_0b32c32e & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac4c7d8);
    DAT_0b32c32e = 1;
  }
  if (((*(long *)(param_1 + 0x68) == param_2) || (*(long *)(param_1 + 0x78) == param_2)) ||
     (*(long *)(param_1 + 0x70) == param_2)) {
    lVar2 = FUN_08a28f34(param_1);
    return lVar2 == param_2;
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_08a2a050;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac4c7d8,0);
LAB_08a2a050:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (param_2 != 0) {
        return *(int *)(param_2 + 0x1c) == 0;
      }
    }
    else if (param_2 != 0) {
      return *(int *)(param_2 + 0x1c) == 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


