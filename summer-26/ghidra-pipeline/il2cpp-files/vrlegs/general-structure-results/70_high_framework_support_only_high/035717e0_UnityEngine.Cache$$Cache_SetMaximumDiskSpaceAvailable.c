/*
FUNCTION_NAME: UnityEngine.Cache$$Cache_SetMaximumDiskSpaceAvailable
ENTRY_POINT: 035717e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long UnityEngine_Cache__Cache_SetMaximumDiskSpaceAvailable(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 unaff_w19;
  long unaff_x20;
  int iVar13;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x9d8));
  *(undefined1 *)(unaff_x22 + 0xfe3) = 1;
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036d35a8();
  uVar7 = 0;
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (unaff_x20 != 0) {
    lVar8 = FUN_0359ad7c();
    uVar7 = 0;
    if (lVar8 != 0) {
      uStack0000000000000018 = unaff_w19;
      uVar7 = FUN_0219f8b8(lVar8,&stack0x00000018,&stack0x00000008,
                           *(undefined8 *)
                            UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                          );
      puVar3 = OVRPlugin_Size3f_TypeInfo;
      if ((uVar7 & 1) != 0) {
        return in_stack_00000008;
      }
      if ((unaff_x21 & 1) != 0) {
        lVar8 = *(long *)OVRPlugin_Size3f_TypeInfo;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar11 == 0) {
          uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
          FUN_021e44d8(uVar9,*(undefined8 *)PTR_DAT_03cc8bb0);
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *(long *)puVar3;
          }
          puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
          *puVar10 = uVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar9);
        }
        else {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            uVar7 = thunk_FUN_01a58e78();
            lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            if (lVar11 == 0) goto LAB_03571a4c;
          }
          FUN_021e4d64(lVar11,*(undefined8 *)PTR_DAT_03ccbbf8);
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        uVar7 = FUN_0355ea04();
        puVar2 = PTR_DAT_03cc8e90;
        if (lVar8 == 0) goto LAB_03571a4c;
        uStack0000000000000018 = (undefined4)uVar7;
        FUN_021e5f08(lVar8,&stack0x00000018,*(undefined8 *)PTR_DAT_03cc8e90);
        puVar4 = 
        UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo;
        lVar8 = *(long *)(unaff_x20 + 0xd8);
        if ((lVar8 != 0) && (iVar1 = *(int *)(lVar8 + 0x18), 0 < iVar1)) {
          iVar13 = 0;
          do {
            FUN_02215a88(lVar8,iVar13,&stack0x00000018,*(undefined8 *)puVar4);
            lVar11 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = FUN_036d35a8(lVar11,0,0);
            if ((uVar7 & 1) == 0) {
              if (lVar11 == 0) goto LAB_03571a4c;
              uVar5 = FUN_0355ea04(lVar11,0);
              lVar12 = *(long *)puVar3;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar12);
                lVar12 = *(long *)puVar3;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
              uVar7 = 0;
              if (lVar12 == 0) goto LAB_03571a4c;
              uStack0000000000000018 = uVar5;
              uVar7 = FUN_021e5f08(lVar12,&stack0x00000018,*(undefined8 *)puVar2);
              if ((uVar7 & 1) != 0) {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                in_stack_00000008 = FUN_03571a50(unaff_w19,lVar11,1);
                if (in_stack_00000008 != 0) {
                  return in_stack_00000008;
                }
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar1 != iVar13);
        }
      }
      return 0;
    }
  }
LAB_03571a4c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c(uVar7);
}


