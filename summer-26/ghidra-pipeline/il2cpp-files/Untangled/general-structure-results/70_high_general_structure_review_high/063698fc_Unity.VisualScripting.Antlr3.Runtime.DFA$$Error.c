/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.DFA$$Error
ENTRY_POINT: 063698fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_18;telemetry_or_network_hits_15;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_Antlr3_Runtime_DFA__Error(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined4 uVar9;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *unaff_x23;
  int unaff_w25;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined4 in_stack_00000380;
  
  lVar13 = *(long *)(unaff_x19 + 0xf8);
  iVar1 = *(int *)(unaff_x20 + 0x158);
  uVar9 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  iVar4 = (**(code **)(*unaff_x21 + 0x188))();
  iVar2 = *(int *)(unaff_x20 + 0x15c);
  iVar5 = (**(code **)(*unaff_x21 + 0x1a8))();
  if (lVar13 == 0) goto LAB_06369f24;
  thunk_FUN_066a3f40((float)iVar1 / (float)iVar4,(float)iVar2 / (float)iVar5,
                     *(undefined4 *)(unaff_x19 + 0xf0),*(undefined4 *)(unaff_x19 + 0xf4),lVar13,
                     uVar9,0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062e014c(uVar10,*(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var,0,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
               *(undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var,0,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
               *(undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var,0,0);
  if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x2c);
  if (iVar1 == 1) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar8 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar8 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var;
    }
  }
  else if (iVar1 == 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar8 = (undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar8 = (undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var;
    }
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar8 = (undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar8 = (undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var;
    }
  }
  FUN_062e014c(uVar10,*puVar8,1,0);
  if (*(long *)(unaff_x20 + 0xd8) == 0) goto LAB_06369f24;
  uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
  uVar6 = FUN_0668fd58(*(long *)(unaff_x20 + 0xd8),0);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x29);
  }
  FUN_062e014c(uVar10,*unaff_x28,uVar6 & 1,0);
  if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x18);
  uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    if (iVar1 != 0) goto LAB_06369b2c;
LAB_06369b88:
    FUN_062e014c(uVar10,*(undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_var
                 ,0,0);
    if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
    iVar1 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x1c);
    if (iVar1 == 2) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_062e014c(uVar10,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
      uVar9 = 1;
    }
    else {
      if (iVar1 == 1) {
        uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_062e014c(uVar10,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
        uVar9 = 0;
        uVar10 = 1;
        puVar8 = (undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var;
        puVar11 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
        goto LAB_06369c8c;
      }
      if (iVar1 != 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d0e378);
        uVar10 = thunk_FUN_02ef1808();
        FUN_0555fdd4(uVar10,0);
        uVar7 = thunk_FUN_02f239f0(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_var);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar10,uVar7);
      }
      uVar10 = *(undefined8 *)(unaff_x19 + 0xf8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_062e014c(uVar10,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,1,0);
      uVar9 = 0;
    }
    uVar10 = 0;
    puVar8 = (undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var;
    puVar11 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
  }
  else {
    if (iVar1 == 0) goto LAB_06369b88;
LAB_06369b2c:
    FUN_062e014c(uVar10,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
    FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
                 *(undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var,0,0);
    uVar10 = 0;
    uVar9 = 1;
    puVar8 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
    puVar11 = (undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_var;
  }
LAB_06369c8c:
  puVar3 = UnityEngine_ExecuteInEditMode_var;
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),*puVar8,uVar10,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),*puVar11,uVar9,0);
  FUN_066b5c2c(&stack0x00000310,0,0);
  lVar13 = unaff_x19 + 0x150;
  *(ulong *)(unaff_x19 + 0x158) = CONCAT44((int)((ulong)in_stack_00000358 >> 0x20),1);
  *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000350;
  *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000368;
  *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000360;
  *(undefined4 *)(unaff_x19 + 0x180) = in_stack_00000380;
  *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000378;
  *(undefined8 *)(unaff_x19 + 0x170) = in_stack_00000370;
  iVar1 = 0;
  if (unaff_w25 != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x150) / unaff_w25;
  }
  *(int *)(unaff_x19 + 0x150) = iVar1;
  iVar1 = 0;
  if (unaff_w25 != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x154) / unaff_w25;
  }
  *(int *)(unaff_x19 + 0x154) = iVar1;
  if ((*(char *)(unaff_x19 + 0xe8) == '\0') || (*(int *)(unaff_x19 + 0x130) < 1)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x10;
  }
  FUN_066b5ce4(lVar13,uVar10,0);
  lVar12 = *(long *)(unaff_x19 + 0x128);
  if (lVar12 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
LAB_06369f28:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    FUN_06369f60(0,lVar12 + 0x20,lVar13,1,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_UpdateUserDataResult_var);
    lVar12 = *(long *)(unaff_x19 + 0x128);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_06369f28;
      FUN_06369f60(0,lVar12 + 0x28,lVar13,1,1,0,1,
                   *(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataRequest_var);
      lVar12 = *(long *)(unaff_x19 + 0x128);
      if (lVar12 != 0) {
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_06369f28;
        FUN_06369f60(0,lVar12 + 0x30,lVar13,1,1,0,1,
                     *(undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_var
                    );
        *(ulong *)(unaff_x19 + 0x150) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x150) >> 0x20) * unaff_w25,
                      (int)*(undefined8 *)(unaff_x19 + 0x150) * unaff_w25);
        FUN_066b5ce4(lVar13,(ulong)*(byte *)(unaff_x19 + 0xe8) << 4,0);
        lVar12 = *(long *)(unaff_x19 + 0x128);
        if (lVar12 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_06369f28;
          FUN_06369f60(0,lVar12 + 0x38,lVar13,1,1,0,1,
                       *(undefined8 *)PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_var
                      );
          if (*(long *)(unaff_x19 + 0x188) != 0) {
            if (*(char *)(*(long *)(unaff_x19 + 0x188) + 0x15) == '\0') {
              if (*(long *)(unaff_x19 + 0x128) != 0) {
                if (*(uint *)(*(long *)(unaff_x19 + 0x128) + 0x18) < 4) goto LAB_06369f28;
                goto LAB_06369ec8;
              }
            }
            else if (*(long *)(unaff_x19 + 0x148) != 0) {
              FUN_063402a0(*(long *)(unaff_x19 + 0x148),0);
LAB_06369ec8:
              FUN_0633f9d8();
              FUN_0633fbe0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
              return;
            }
          }
        }
      }
    }
  }
LAB_06369f24:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


