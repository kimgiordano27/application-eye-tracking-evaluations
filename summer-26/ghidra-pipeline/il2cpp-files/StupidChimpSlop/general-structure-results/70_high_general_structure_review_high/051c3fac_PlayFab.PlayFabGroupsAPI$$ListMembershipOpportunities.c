/*
FUNCTION_NAME: PlayFab.PlayFabGroupsAPI$$ListMembershipOpportunities
ENTRY_POINT: 051c3fac
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


uint PlayFab_PlayFabGroupsAPI__ListMembershipOpportunities(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long *unaff_x22;
  undefined4 uStack000000000000000c;
  long lStack0000000000000010;
  undefined2 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  long in_stack_00000028;
  
  puVar2 = ExitGames_Client_Photon_SocketUdp_var;
  uStack0000000000000018 = 0;
  lStack0000000000000010 = 0;
  uStack000000000000000c = 0;
  if (unaff_x22 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0664b8a0 + 0x130);
    if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0664b8a0)
       ) {
      lVar6 = thunk_FUN_02d5dae8();
    }
    else {
      lVar6 = unaff_x22[3];
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar7 = *(long *)puVar2;
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      uVar3 = FUN_0483dd8c(**(long **)(lVar7 + 0xb8),lVar6,&stack0x00000028,
                           *(undefined8 *)
                            PlayFab_ClientModels_UpdatePlayerCustomPropertiesResult_var);
      if ((uVar3 & 1) == 0) {
LAB_051c4364:
        return uVar3 & 1;
      }
      if (in_stack_00000028 != 0) {
        if (*(long *)(in_stack_00000028 + 0x30) == 0) {
          lVar6 = *(long *)(in_stack_00000028 + 0x20);
          if ((lVar6 != 0) &&
             (lVar6 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40)), unaff_x19 != 0)) {
            FUN_051db33c();
            if ((in_stack_00000028 != 0) &&
               ((FUN_051db33c(), lVar6 != 0 && (in_stack_00000028 != 0)))) {
              uStack000000000000001c = *(undefined1 *)(in_stack_00000028 + 0x10);
              uVar8 = FUN_04f73bf4(&stack0x0000001c,0);
              FUN_04e723e0(*(undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var,
                           uVar8,0);
              FUN_051c4384();
              FUN_051d455c();
              goto LAB_051c4364;
            }
          }
        }
        else if (unaff_x19 != 0) {
          FUN_051db33c();
          if (in_stack_00000028 != 0) {
            FUN_051db33c();
            FUN_051d45d0();
            FUN_051d45d0();
            FUN_051d45d8();
            if ((in_stack_00000028 != 0) &&
               (lVar6 = *(long *)(in_stack_00000028 + 0x30), lVar6 != 0)) {
              uStack0000000000000018 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
              iVar4 = FUN_051d45d0();
              lStack0000000000000010 = (long)iVar4;
              FUN_051d45d8();
              if (in_stack_00000028 != 0) {
                uStack000000000000001c = *(undefined1 *)(in_stack_00000028 + 0x10);
                uVar8 = FUN_04f73bf4(&stack0x0000001c,0);
                FUN_04e723e0(*(undefined8 *)PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var,
                             uVar8,0);
                FUN_051c4384();
                FUN_051d45d0();
                FUN_051d45d8();
                iVar5 = FUN_051d45d0();
                if (iVar4 != iVar5) {
                  uVar8 = thunk_FUN_02db45e8(PTR_DAT_06646310);
                  uVar8 = FUN_02d4dd2c(uVar8,6);
                  FUN_0291d7ec();
                  uVar9 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdatePlayerStatisticsResult_var);
                  FUN_0291b630(uVar8,0,uVar9);
                  uVar9 = FUN_050016e8(&stack0x00000010,0);
                  FUN_0291b630(uVar8,1,uVar9);
                  uVar9 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateSharedGroupDataRequest_var);
                  FUN_0291b630(uVar8,2,uVar9);
                  FUN_0291d7ec();
                  uStack000000000000000c = FUN_051d45d0();
                  uVar9 = FUN_05000654(&stack0x0000000c,0);
                  FUN_0291b630(uVar8,3,uVar9);
                  uVar9 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateSharedGroupDataResult_var);
                  FUN_0291b630(uVar8,4,uVar9);
                  uVar9 = FUN_04ffe748(&stack0x00000018,0);
                  FUN_0291b630(uVar8,5,uVar9);
                  uVar8 = FUN_04e80ce4(uVar8,0);
                  thunk_FUN_02db45e8(PTR_DAT_06647b18);
                  uVar9 = thunk_FUN_02d8a638();
                  FUN_0503a078(uVar9,uVar8,0);
                  uVar8 = thunk_FUN_02db45e8(
                                            PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_var
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_02d4ddac(uVar9,uVar8);
                }
                goto LAB_051c4364;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


