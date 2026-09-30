/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.DFA$$UnpackEncodedString
ENTRY_POINT: 06369948
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_17;telemetry_or_network_hits_15;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_Antlr3_Runtime_DFA__UnpackEncodedString(float param_1,float param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined4 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined4 in_stack_00000380;
  
  thunk_FUN_066a3f40((float)unaff_w26 / (float)unaff_w24,param_1 / param_2);
  uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062e014c(uVar8,*(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var,0,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
               *(undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var,0,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
               *(undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var,0,0);
  if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
  iVar2 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x2c);
  if (iVar2 == 1) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar6 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar6 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsResult_var;
    }
  }
  else if (iVar2 == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar6 = (undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar6 = (undefined8 *)PlayFab_ProgressionModels_UpdateStatisticsResponse_var;
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
    puVar6 = (undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      puVar6 = (undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataResult_var;
    }
  }
  FUN_062e014c(uVar8,*puVar6,1,0);
  if (*(long *)(unaff_x20 + 0xd8) == 0) goto LAB_06369f24;
  uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
  uVar4 = FUN_0668fd58(*(long *)(unaff_x20 + 0xd8),0);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x29);
  }
  FUN_062e014c(uVar8,*unaff_x28,uVar4 & 1,0);
  if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
  iVar2 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x18);
  uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    if (iVar2 != 0) goto LAB_06369b2c;
LAB_06369b88:
    FUN_062e014c(uVar8,*(undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_var,
                 0,0);
    if (*(long *)(unaff_x19 + 0x188) == 0) goto LAB_06369f24;
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x188) + 0x1c);
    if (iVar2 == 2) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_062e014c(uVar8,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
      uVar7 = 1;
    }
    else {
      if (iVar2 == 1) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_062e014c(uVar8,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
        uVar7 = 0;
        uVar8 = 1;
        puVar6 = (undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var;
        puVar9 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
        goto LAB_06369c8c;
      }
      if (iVar2 != 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d0e378);
        uVar8 = thunk_FUN_02ef1808();
        FUN_0555fdd4(uVar8,0);
        uVar5 = thunk_FUN_02f239f0(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_var);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar8,uVar5);
      }
      uVar8 = *(undefined8 *)(unaff_x19 + 0xf8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_062e014c(uVar8,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,1,0);
      uVar7 = 0;
    }
    uVar8 = 0;
    puVar6 = (undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var;
    puVar9 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
  }
  else {
    if (iVar2 == 0) goto LAB_06369b88;
LAB_06369b2c:
    FUN_062e014c(uVar8,*(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var,0,0);
    FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
                 *(undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var,0,0);
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = (undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
    puVar9 = (undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardEntriesRequest_var;
  }
LAB_06369c8c:
  puVar3 = UnityEngine_ExecuteInEditMode_var;
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),*puVar6,uVar8,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),*puVar9,uVar7,0);
  FUN_066b5c2c(&stack0x00000310,0,0);
  lVar1 = unaff_x19 + 0x150;
  *(ulong *)(unaff_x19 + 0x158) = CONCAT44((int)((ulong)in_stack_00000358 >> 0x20),1);
  *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000350;
  *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000368;
  *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000360;
  *(undefined4 *)(unaff_x19 + 0x180) = in_stack_00000380;
  *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000378;
  *(undefined8 *)(unaff_x19 + 0x170) = in_stack_00000370;
  iVar2 = 0;
  if (unaff_w25 != 0) {
    iVar2 = *(int *)(unaff_x19 + 0x150) / unaff_w25;
  }
  *(int *)(unaff_x19 + 0x150) = iVar2;
  iVar2 = 0;
  if (unaff_w25 != 0) {
    iVar2 = *(int *)(unaff_x19 + 0x154) / unaff_w25;
  }
  *(int *)(unaff_x19 + 0x154) = iVar2;
  if ((*(char *)(unaff_x19 + 0xe8) == '\0') || (*(int *)(unaff_x19 + 0x130) < 1)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x10;
  }
  FUN_066b5ce4(lVar1,uVar8,0);
  lVar10 = *(long *)(unaff_x19 + 0x128);
  if (lVar10 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_06369f28:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    FUN_06369f60(0,lVar10 + 0x20,lVar1,1,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_UpdateUserDataResult_var);
    lVar10 = *(long *)(unaff_x19 + 0x128);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_06369f28;
      FUN_06369f60(0,lVar10 + 0x28,lVar1,1,1,0,1,
                   *(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataRequest_var);
      lVar10 = *(long *)(unaff_x19 + 0x128);
      if (lVar10 != 0) {
        if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_06369f28;
        FUN_06369f60(0,lVar10 + 0x30,lVar1,1,1,0,1,
                     *(undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_var
                    );
        *(ulong *)(unaff_x19 + 0x150) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x150) >> 0x20) * unaff_w25,
                      (int)*(undefined8 *)(unaff_x19 + 0x150) * unaff_w25);
        FUN_066b5ce4(lVar1,(ulong)*(byte *)(unaff_x19 + 0xe8) << 4,0);
        lVar10 = *(long *)(unaff_x19 + 0x128);
        if (lVar10 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_06369f28;
          FUN_06369f60(0,lVar10 + 0x38,lVar1,1,1,0,1,
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


