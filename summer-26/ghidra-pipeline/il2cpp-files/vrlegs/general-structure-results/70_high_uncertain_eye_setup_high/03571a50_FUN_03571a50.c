/*
FUNCTION_NAME: FUN_03571a50
ENTRY_POINT: 03571a50
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_03571a50(undefined4 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((DAT_0412dfe4 & 1) == 0) {
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    DAT_0412dfe4 = 1;
  }
  local_68 = 0;
  if ((param_2 != 0) && (lVar8 = FUN_0359ad7c(param_2,0), lVar8 != 0)) {
    local_58 = param_1;
    uVar9 = FUN_0219f8b8(lVar8,&local_58,&local_68,
                         *(undefined8 *)
                          UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                        );
    puVar6 = UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
    ;
    puVar5 = OVRPlugin_Size3f_TypeInfo;
    puVar4 = PTR_DAT_03cc8e90;
    puVar3 = PTR_DAT_03cbdf88;
    if ((uVar9 & 1) == 0) {
      if ((((param_3 & 1) != 0) && (lVar8 = *(long *)(param_2 + 0xd8), lVar8 != 0)) &&
         (iVar1 = *(int *)(lVar8 + 0x18), 0 < iVar1)) {
        iVar11 = 0;
        do {
          FUN_02215a88(lVar8,iVar11,&local_58,*(undefined8 *)puVar6);
          lVar2 = CONCAT44(uStack_54,local_58);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_036d35a8(lVar2,0,0);
          if ((uVar9 & 1) == 0) {
            if (lVar2 == 0) goto LAB_03571c30;
            uVar7 = FUN_0355ea04(lVar2,0);
            lVar10 = *(long *)puVar5;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar10);
              lVar10 = *(long *)puVar5;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
            if (lVar10 == 0) goto LAB_03571c30;
            local_58 = uVar7;
            uVar9 = FUN_021e5f08(lVar10,&local_58,*(undefined8 *)puVar4);
            if ((uVar9 & 1) != 0) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              local_68 = FUN_03571a50(param_1,lVar2,1);
              if (local_68 != 0) {
                return local_68;
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar1 != iVar11);
      }
      local_68 = 0;
    }
    return local_68;
  }
LAB_03571c30:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


