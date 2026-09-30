/*
FUNCTION_NAME: FUN_035952f8
ENTRY_POINT: 035952f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_035952f8(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e091 & 1) == 0) {
    FUN_01ab69ac(Fusion_ReflectionUtils_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d0f450);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    DAT_0412e091 = 1;
  }
  local_38 = 0;
  local_30 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_1 != 0) {
    uVar2 = FUN_036d3364(param_1,0);
    puVar1 = OVRPlugin_Sizef_TypeInfo;
    lVar4 = *(long *)OVRPlugin_Sizef_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar4);
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      local_28 = CONCAT44(local_28._4_4_,uVar2);
      uVar3 = FUN_0219f8b8(lVar4,&local_28,&local_30,*(undefined8 *)PTR_DAT_03d0f450);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_03595444;
        local_28 = local_30;
        uVar3 = FUN_0219f8b8(lVar4,&local_28,&local_38,
                             *(undefined8 *)Fusion_ReflectionUtils_<>c_TypeInfo);
        if ((uVar3 & 1) != 0) {
          if (local_38 == 0) goto LAB_03595444;
          *(int *)(local_38 + 0x30) = *(int *)(local_38 + 0x30) + 1;
        }
      }
      return;
    }
  }
LAB_03595444:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


