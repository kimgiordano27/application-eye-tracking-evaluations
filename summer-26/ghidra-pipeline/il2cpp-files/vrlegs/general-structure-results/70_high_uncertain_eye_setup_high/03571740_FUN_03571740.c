/*
FUNCTION_NAME: FUN_03571740
ENTRY_POINT: 03571740
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_03571740(undefined4 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_03cbdf88;
  if ((DAT_0412dfe3 & 1) == 0) {
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    DAT_0412dfe3 = 1;
  }
  local_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_036d35a8(param_2,0,0);
  uVar8 = 0;
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar9 = FUN_0359ad7c(param_2,0);
    uVar8 = 0;
    if (lVar9 != 0) {
      local_58 = param_1;
      uVar8 = FUN_0219f8b8(lVar9,&local_58,&local_68,
                           *(undefined8 *)
                            UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                          );
      puVar4 = OVRPlugin_Size3f_TypeInfo;
      if ((uVar8 & 1) != 0) {
        return local_68;
      }
      if ((param_3 & 1) != 0) {
        lVar9 = *(long *)OVRPlugin_Size3f_TypeInfo;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *(long *)puVar4;
        }
        lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar12 == 0) {
          uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
          FUN_021e44d8(uVar10,*(undefined8 *)PTR_DAT_03cc8bb0);
          lVar9 = *(long *)puVar4;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar9 = *(long *)puVar4;
          }
          puVar11 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
          *puVar11 = uVar10;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,uVar10);
        }
        else {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            uVar8 = thunk_FUN_01a58e78();
            lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_03571a4c;
          }
          FUN_021e4d64(lVar12,*(undefined8 *)PTR_DAT_03ccbbf8);
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *(long *)puVar4;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        uVar8 = FUN_0355ea04(param_2,0);
        puVar3 = PTR_DAT_03cc8e90;
        if (lVar9 == 0) goto LAB_03571a4c;
        local_58 = (undefined4)uVar8;
        FUN_021e5f08(lVar9,&local_58,*(undefined8 *)PTR_DAT_03cc8e90);
        puVar5 = 
        UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo;
        lVar9 = *(long *)(param_2 + 0xd8);
        if ((lVar9 != 0) && (iVar1 = *(int *)(lVar9 + 0x18), 0 < iVar1)) {
          iVar14 = 0;
          do {
            FUN_02215a88(lVar9,iVar14,&local_58,*(undefined8 *)puVar5);
            lVar12 = CONCAT44(uStack_54,local_58);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar8 = FUN_036d35a8(lVar12,0,0);
            if ((uVar8 & 1) == 0) {
              if (lVar12 == 0) goto LAB_03571a4c;
              uVar6 = FUN_0355ea04(lVar12,0);
              lVar13 = *(long *)puVar4;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar13);
                lVar13 = *(long *)puVar4;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
              uVar8 = 0;
              if (lVar13 == 0) goto LAB_03571a4c;
              local_58 = uVar6;
              uVar8 = FUN_021e5f08(lVar13,&local_58,*(undefined8 *)puVar3);
              if ((uVar8 & 1) != 0) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                local_68 = FUN_03571a50(param_1,lVar12,1);
                if (local_68 != 0) {
                  return local_68;
                }
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar1 != iVar14);
        }
      }
      return 0;
    }
  }
LAB_03571a4c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c(uVar8);
}


