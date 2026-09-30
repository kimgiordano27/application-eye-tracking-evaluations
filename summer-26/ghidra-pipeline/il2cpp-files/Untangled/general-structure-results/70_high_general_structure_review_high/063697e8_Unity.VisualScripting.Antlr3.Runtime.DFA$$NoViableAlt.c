/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.DFA$$NoViableAlt
ENTRY_POINT: 063697e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_15;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_Antlr3_Runtime_DFA__NoViableAlt(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x22;
  long lVar14;
  long *unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined4 in_stack_00000380;
  
  if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x10);
  if (iVar1 == 1) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_062e014c(uVar11,*unaff_x24,1,0);
    lVar8 = *unaff_x23;
    lVar14 = *(long *)(unaff_x19 + 0xf8);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar8 = *unaff_x23;
    }
    lVar9 = *(long *)(unaff_x19 + 0x188);
    if ((lVar9 == 0) || (lVar14 == 0)) goto LAB_06369f24;
    uVar19 = *(undefined4 *)(lVar9 + 0x34);
    fVar17 = *(float *)(lVar9 + 0x28);
    fVar16 = *(float *)(lVar9 + 0x20);
    uVar15 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4);
    fVar18 = 1.0 / (float)unaff_w25;
  }
  else {
    if (iVar1 != 0) goto LAB_06369f2c;
    uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_062e014c(uVar11,*unaff_x22,1,0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_06369f24;
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x100) + 0x18);
    iVar1 = *(int *)(unaff_x19 + 0xec) + 1;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    *(int *)(unaff_x19 + 0xec) = iVar1 - iVar4 * iVar2;
    uVar15 = FUN_066c42a0(0);
    *(undefined4 *)(unaff_x19 + 0xf0) = uVar15;
    uVar15 = FUN_066c42a0(0);
    lVar8 = *(long *)(unaff_x19 + 0x100);
    *(undefined4 *)(unaff_x19 + 0xf4) = uVar15;
    if (lVar8 == 0) goto LAB_06369f24;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xec)) goto LAB_06369f28;
    plVar12 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xec) * 8 + 0x20);
    lVar8 = *(long *)(unaff_x19 + 0xf8);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (lVar8 == 0) goto LAB_06369f24;
    FUN_066a34e4(lVar8,*(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10),plVar12,0);
    lVar8 = *(long *)(unaff_x19 + 0x188);
    if (((lVar8 == 0) || (*(long *)(unaff_x19 + 0xf8) == 0)) ||
       (thunk_FUN_066a3f40(*(undefined4 *)(lVar8 + 0x20),*(float *)(lVar8 + 0x28) * 1.5,
                           1.0 / (float)unaff_w25,*(undefined4 *)(lVar8 + 0x34),
                           *(long *)(unaff_x19 + 0xf8),
                           *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 4),0),
       plVar12 == (long *)0x0)) goto LAB_06369f24;
    lVar14 = *(long *)(unaff_x19 + 0xf8);
    iVar1 = *(int *)(unaff_x20 + 0x158);
    uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    iVar4 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
    iVar2 = *(int *)(unaff_x20 + 0x15c);
    iVar5 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
    if (lVar14 == 0) goto LAB_06369f24;
    fVar18 = *(float *)(unaff_x19 + 0xf0);
    uVar19 = *(undefined4 *)(unaff_x19 + 0xf4);
    fVar17 = (float)iVar2 / (float)iVar5;
    fVar16 = (float)iVar1 / (float)iVar4;
  }
  thunk_FUN_066a3f40(fVar16,fVar17,fVar18,uVar19,lVar14,uVar15,0);
  uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062e014c(uVar11,*(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var,0,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
               *(undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var,0,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
               *(undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var,0,0);
  if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x2c);
  if (iVar1 == 1) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar10 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar10 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var;
    }
  }
  else if (iVar1 == 0) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar10 = (undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar10 = (undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var;
    }
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar10 = (undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar10 = (undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var;
    }
  }
  FUN_062e014c(uVar11,*puVar10,1,0);
  if (*(long *)(unaff_x20 + 0xd8) == 0) goto LAB_06369f24;
  uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
  uVar6 = FUN_0668fd58(*(long *)(unaff_x20 + 0xd8),0);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x29);
  }
  FUN_062e014c(uVar11,*unaff_x28,uVar6 & 1,0);
  if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x18);
  uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    if (iVar1 != 0) goto LAB_06369b2c;
LAB_06369b88:
    FUN_062e014c(uVar11,*(undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_var
                 ,0,0);
    if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
    iVar1 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x1c);
    if (iVar1 == 2) {
      uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_062e014c(uVar11,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
      uVar15 = 1;
    }
    else {
      if (iVar1 == 1) {
        uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_062e014c(uVar11,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
        uVar15 = 0;
        uVar11 = 1;
        puVar10 = (undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var;
        puVar13 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
        goto LAB_06369c8c;
      }
      if (iVar1 != 0) {
LAB_06369f2c:
        thunk_FUN_02f239f0(PTR_DAT_06d0e378);
        uVar11 = thunk_FUN_02ef1808();
        FUN_0555fdd4(uVar11,0);
        uVar7 = thunk_FUN_02f239f0(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_var);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar11,uVar7);
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_062e014c(uVar11,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,1,0);
      uVar15 = 0;
    }
    uVar11 = 0;
    puVar10 = (undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var;
    puVar13 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
  }
  else {
    if (iVar1 == 0) goto LAB_06369b88;
LAB_06369b2c:
    FUN_062e014c(uVar11,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
    FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
                 *(undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var,0,0);
    uVar11 = 0;
    uVar15 = 1;
    puVar10 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
    puVar13 = (undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_var;
  }
LAB_06369c8c:
  puVar3 = UnityEngine_ExecuteInEditMode_var;
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),*puVar10,uVar11,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),*puVar13,uVar15,0);
  FUN_066b5c2c(&stack0x00000310,0,0);
  lVar8 = unaff_x19 + 0x150;
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
    uVar11 = 0;
  }
  else {
    uVar11 = 0x10;
  }
  FUN_066b5ce4(lVar8,uVar11,0);
  lVar14 = *(long *)(unaff_x19 + 0x128);
  if (lVar14 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06369f28:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    FUN_06369f60(0,lVar14 + 0x20,lVar8,1,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_UpdateUserDataResult_var);
    lVar14 = *(long *)(unaff_x19 + 0x128);
    if (lVar14 != 0) {
      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_06369f28;
      FUN_06369f60(0,lVar14 + 0x28,lVar8,1,1,0,1,
                   *(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataRequest_var);
      lVar14 = *(long *)(unaff_x19 + 0x128);
      if (lVar14 != 0) {
        if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06369f28;
        FUN_06369f60(0,lVar14 + 0x30,lVar8,1,1,0,1,
                     *(undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_var
                    );
        *(ulong *)(unaff_x19 + 0x150) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x150) >> 0x20) * unaff_w25,
                      (int)*(undefined8 *)(unaff_x19 + 0x150) * unaff_w25);
        FUN_066b5ce4(lVar8,(ulong)*(byte *)(unaff_x19 + 0xe8) << 4,0);
        lVar14 = *(long *)(unaff_x19 + 0x128);
        if (lVar14 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_06369f28;
          FUN_06369f60(0,lVar14 + 0x38,lVar8,1,1,0,1,
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


