/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.DFA$$.ctor
ENTRY_POINT: 06369c6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_Antlr3_Runtime_DFA___ctor(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  int unaff_w25;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined4 in_stack_00000380;
  
  FUN_062e014c(param_2,*param_1);
  puVar4 = PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var;
  puVar3 = UnityEngine_ExecuteInEditMode_var;
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),
               *(undefined8 *)PlayFab_MultiplayerModels_UpdateLobbyRequest_var,1,0);
  FUN_062e014c(*(undefined8 *)(unaff_x19 + 0xf8),*(undefined8 *)puVar4,0,0);
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
    uVar5 = 0;
  }
  else {
    uVar5 = 0x10;
  }
  FUN_066b5ce4(lVar1,uVar5,0);
  lVar6 = *(long *)(unaff_x19 + 0x128);
  if (lVar6 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_06369f28:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    FUN_06369f60(0,lVar6 + 0x20,lVar1,1,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_UpdateUserDataResult_var);
    lVar6 = *(long *)(unaff_x19 + 0x128);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06369f28;
      FUN_06369f60(0,lVar6 + 0x28,lVar1,1,1,0,1,
                   *(undefined8 *)PlayFab_ClientModels_UpdateSharedGroupDataRequest_var);
      lVar6 = *(long *)(unaff_x19 + 0x128);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06369f28;
        FUN_06369f60(0,lVar6 + 0x30,lVar1,1,1,0,1,
                     *(undefined8 *)PlayFab_ProgressionModels_UpdateLeaderboardDefinitionRequest_var
                    );
        *(ulong *)(unaff_x19 + 0x150) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x150) >> 0x20) * unaff_w25,
                      (int)*(undefined8 *)(unaff_x19 + 0x150) * unaff_w25);
        FUN_066b5ce4(lVar1,(ulong)*(byte *)(unaff_x19 + 0xe8) << 4,0);
        lVar6 = *(long *)(unaff_x19 + 0x128);
        if (lVar6 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_06369f28;
          FUN_06369f60(0,lVar6 + 0x38,lVar1,1,1,0,1,
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


