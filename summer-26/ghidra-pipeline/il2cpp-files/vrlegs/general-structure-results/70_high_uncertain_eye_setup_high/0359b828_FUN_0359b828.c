/*
FUNCTION_NAME: FUN_0359b828
ENTRY_POINT: 0359b828
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0359b828(long param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long local_68;
  undefined4 local_54;
  
  if ((DAT_0412e0bd & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizei_TypeInfo);
    DAT_0412e0bd = 1;
  }
  puVar4 = UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo;
  puVar3 = OVRPlugin_Sizei_TypeInfo;
  puVar2 = PTR_DAT_03cc8e90;
  puVar1 = PTR_DAT_03cbdf88;
  if (param_1 == 0) {
LAB_0359b9d0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar9 = 0;
    do {
      FUN_02215a88(param_1,iVar9,&local_68,*(undefined8 *)puVar4);
      lVar8 = local_68;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036d35a8(lVar8,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar8 == 0) goto LAB_0359b9d0;
        uVar5 = FUN_036d3364(lVar8,0);
        if (**(long **)(*(long *)puVar3 + 0xb8) == 0) goto LAB_0359b9d0;
        local_54 = uVar5;
        uVar6 = FUN_021e5f08(**(long **)(*(long *)puVar3 + 0xb8),&local_54,*(undefined8 *)puVar2);
        if ((uVar6 & 1) != 0) {
          uVar7 = FUN_0359b9d4(lVar8,param_2,param_3 & 1,param_4);
          lVar8 = *(long *)puVar1;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar8);
          }
          uVar6 = FUN_036cee6c(uVar7,0,0);
          if ((uVar6 & 1) != 0) {
            return uVar7;
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x18));
  }
  *param_4 = 0xffffffff;
  return 0;
}


