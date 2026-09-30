/*
FUNCTION_NAME: FUN_053d9db0
ENTRY_POINT: 053d9db0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


undefined8 FUN_053d9db0(long param_1,long *param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_06a5344a & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664a728);
    FUN_02d4dc40(PlayFab_ProgressionModels_ListLeaderboardDefinitionsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_LinkXboxAccountResult_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_MultiplayerModels_ListAssetSummariesRequest_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_InputDevice_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Layouts_InputDeviceBuilder_TypeInfo);
    DAT_06a5344a = 1;
  }
  FUN_053d1434(param_1,param_2);
  puVar1 = PTR_DAT_0664a728;
  if (param_2 != (long *)0x0) {
    lVar14 = *(long *)(param_1 + 0x18);
    uVar6 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar10);
    }
    uVar6 = FUN_053a1490(uVar6,0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = FUN_053c7104(*(long *)(param_1 + 0x10)), lVar14 != 0)) {
      auVar16 = FUN_053e3aa4(lVar14,uVar6,uVar4,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_053c7b8c();
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (FUN_053c872c(*(long *)(param_1 + 0x10),auVar16._0_8_ & 0xffffffff),
           puVar3 = PlayFab_ProgressionModels_ListLeaderboardDefinitionsResponse_TypeInfo,
           puVar2 = PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest_TypeInfo,
           param_3 != (long *)0x0)) {
          lVar10 = *param_3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)PlayFab_ProgressionModels_ListLeaderboardDefinitionsResponse_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_053d9f50;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02d87540(param_3,*(long *)
                                         PlayFab_ProgressionModels_ListLeaderboardDefinitionsResponse_TypeInfo
                                ,1);
LAB_053d9f50:
          uVar5 = (*(code *)*puVar7)(param_3,puVar7[1]);
          lVar10 = FUN_02d4dd2c(*(undefined8 *)puVar2,(ulong)uVar5);
          if (0 < (int)uVar5) {
            uVar11 = 0;
            do {
              lVar14 = *param_3;
              uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar7 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_053d9fd4;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_02d87540(param_3,*(long *)puVar3,0);
LAB_053d9fd4:
              plVar8 = (long *)(*(code *)*puVar7)(param_3,uVar11 & 0xffffffff,puVar7[1]);
              FUN_053d1434(param_1,plVar8);
              if (plVar8 == (long *)0x0) goto LAB_053da1b0;
              lVar15 = *(long *)(param_1 + 0x18);
              uVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
              lVar14 = *(long *)puVar1;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98(lVar14);
              }
              uVar6 = FUN_053a1490(uVar6,0);
              if ((*(long *)(param_1 + 0x10) == 0) ||
                 (uVar4 = FUN_053c7104(*(long *)(param_1 + 0x10)), lVar15 == 0)) goto LAB_053da1b0;
              auVar17 = FUN_053e3aa4(lVar15,uVar6,uVar4,0);
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_053da1b0;
              FUN_053c7b8c();
              if ((*(long *)(param_1 + 0x10) == 0) ||
                 (FUN_053c872c(*(long *)(param_1 + 0x10),auVar17._0_8_ & 0xffffffff), lVar10 == 0))
              goto LAB_053da1b0;
              if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
              *(undefined1 (*) [16])(lVar10 + uVar11 * 0x10 + 0x20) = auVar17;
              thunk_FUN_02dc1ef0(lVar10 + uVar11 * 0x10 + 0x28,0);
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar5);
          }
          lVar15 = *(long *)(param_1 + 0x10);
          lVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if (lVar14 != 0) {
            uVar6 = FUN_0501d38c(lVar14,*(undefined8 *)
                                         UnityEngine_InputSystem_Layouts_InputDeviceBuilder_TypeInfo
                                 ,0x14,0);
            puVar1 = PlayFab_MultiplayerModels_ListAssetSummariesRequest_TypeInfo;
            if (lVar15 != 0) {
              FUN_053cbb58(lVar15,uVar6);
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 0;
              FUN_03945d28(&local_78,auVar16._0_8_,auVar16._8_8_,*(undefined8 *)puVar1);
              lVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
              puVar1 = PlayFab_ClientModels_LinkXboxAccountResult_TypeInfo;
              if (lVar14 != 0) {
                uVar6 = FUN_0501d38c(lVar14,*(undefined8 *)UnityEngine_XR_InputDevice_TypeInfo,0x14,
                                     0);
                uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
                uStack_88 = uStack_70;
                local_90 = local_78;
                local_80 = local_68;
                FUN_053de9e4(uVar9,&local_90,lVar10,uVar6,param_4,0);
                return uVar9;
              }
            }
          }
        }
      }
    }
  }
LAB_053da1b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


