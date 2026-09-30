/*
FUNCTION_NAME: FUN_05c2ac8c
ENTRY_POINT: 05c2ac8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05c2ac8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_06dc27bc & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0eb58);
    DAT_06dc27bc = 1;
  }
  FUN_05c2ae88(param_1,param_2,param_3);
  *(undefined8 *)(param_1 + 0x90) = param_4;
  LeanTween__value((undefined8 *)(param_1 + 0x90),param_4);
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    bVar3 = UnityWebSocketSharp_Ext__GetCookies(*(long *)(param_3 + 0x10),0);
    lVar6 = *(long *)(param_3 + 0x10);
    *(byte *)(param_1 + 0x61) = bVar3 & 1;
    if (lVar6 != 0) {
      bVar2 = false;
      if (*(char *)(lVar6 + 0xe0) != '\0') {
        bVar2 = *(long *)(param_3 + 0x28) == 0;
      }
      *(bool *)(param_1 + 0x62) = bVar2;
      if (((bVar2 == false) && (((bVar3 ^ 1) & 1) == 0)) && (*(long *)(param_3 + 0x28) == 0)) {
        uVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0eb58);
        FUN_0549bcb4(uVar4,0);
        *(undefined8 *)(param_1 + 0x58) = uVar4;
        LeanTween__value((undefined8 *)(param_1 + 0x58),uVar4);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x98);
        if (param_5 == 0) {
          uVar5 = FUN_05508414(0,0,0);
          uVar4 = 0;
          if ((uVar5 & 1) == 0) {
            return;
          }
        }
        else {
          uVar5 = FUN_05508414(*(undefined8 *)(param_5 + 0x50),0,0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          uVar4 = *(undefined8 *)(param_5 + 0x50);
        }
        puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
        lVar6 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar6 = *(long *)puVar1;
        }
        uVar5 = FUN_05508414(uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x98) = 0;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


