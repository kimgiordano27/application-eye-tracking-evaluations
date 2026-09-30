/*
FUNCTION_NAME: FUN_03595448
ENTRY_POINT: 03595448
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03595448(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_03cbdf88;
  if ((DAT_0412e093 & 1) == 0) {
    FUN_01ab69ac(Fusion_ReflectionUtils_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d0f450);
    FUN_01ab69ac(Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass31_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    DAT_0412e093 = 1;
  }
  local_38 = 0;
  local_30 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_036d35a8(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_1 != 0) {
    uVar3 = FUN_036d3364(param_1,0);
    puVar2 = OVRPlugin_Sizef_TypeInfo;
    lVar5 = *(long *)OVRPlugin_Sizef_TypeInfo;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 != 0) {
      local_28 = CONCAT44(local_28._4_4_,uVar3);
      uVar4 = FUN_0219f8b8(lVar5,&local_28,&local_30,*(undefined8 *)PTR_DAT_03d0f450);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_035955fc;
        local_28 = local_30;
        uVar4 = FUN_0219f8b8(lVar5,&local_28,&local_38,
                             *(undefined8 *)Fusion_ReflectionUtils_<>c_TypeInfo);
        if ((uVar4 & 1) != 0) {
          if (local_38 == 0) goto LAB_035955fc;
          iVar1 = *(int *)(local_38 + 0x30) + -1;
          *(int *)(local_38 + 0x30) = iVar1;
          if (iVar1 < 1) {
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
            if (lVar5 == 0) goto LAB_035955fc;
            FUN_01b5f01c(lVar5,local_38,
                         *(undefined8 *)
                          Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass31_0_TypeInfo);
          }
        }
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar2;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x20) = 1;
      return;
    }
  }
LAB_035955fc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


