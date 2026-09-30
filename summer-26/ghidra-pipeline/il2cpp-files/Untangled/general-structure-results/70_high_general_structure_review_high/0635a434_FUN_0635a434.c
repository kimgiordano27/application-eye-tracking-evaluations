/*
FUNCTION_NAME: FUN_0635a434
ENTRY_POINT: 0635a434
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_12
*/


void FUN_0635a434(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [8];
  long local_68;
  undefined8 local_58;
  
  local_58 = param_1;
  if ((DAT_071cd2cf & 1) == 0) {
    FUN_02f07e70(PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
    FUN_02f07e70(PlayFab_EconomyModels_SubmitItemReviewVoteRequest_var);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PlayFab_DataModels_FinalizeFileUploadsRequest_var);
    FUN_02f07e70(PTR_DAT_06d96a10);
    FUN_02f07e70(PlayFab_EconomyModels_SubmitItemReviewVoteResponse_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_SubscribeToLobbyResourceRequest_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_SubscribeToLobbyResourceResult_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_SubscribeToMatchResourceRequest_var);
    DAT_071cd2cf = 1;
  }
  puVar1 = PTR_DAT_06d01e20;
  local_68 = 0;
  local_70[0] = 0;
  if (param_2 == 0) {
LAB_0635a78c:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x2e0);
  uVar6 = *(undefined8 *)(param_2 + 0x2e8);
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066ca6a0(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066ca6a0(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar9 = param_3[0x1b];
  if (lVar9 == 0) goto LAB_0635a78c;
  uVar4 = FUN_037f26f8(lVar9,&local_68,
                       *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (local_68 == 0) goto LAB_0635a78c;
  lVar10 = *(long *)(local_68 + 0x90);
  if (lVar10 == 0) {
    return;
  }
  iVar2 = FUN_06690168(lVar9,0);
  if (iVar2 == 4) {
    return;
  }
  lVar8 = *param_3;
  uVar6 = FUN_03b59e58(0x1c,*(undefined8 *)PlayFab_DataModels_FinalizeFileUploadsRequest_var);
  uVar6 = FUN_062a6cd4(local_70,lVar8,uVar6,0);
  uVar3 = FUN_06354268(uVar6,param_3 + 3);
  if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066f0aec(&local_58,lVar8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066e3124(lVar8,0);
  if (param_3[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar4 = FUN_06278cf8(param_3[0x32],0);
  if ((uVar4 & 1) != 0) {
    if (param_3[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = FUN_06278e40(param_3[0x32],0);
    if ((uVar4 & 1) != 0) {
      FUN_066e7694(lVar8,*(undefined8 *)PlayFab_MultiplayerModels_SubscribeToLobbyResourceResult_var
                   ,*(undefined8 *)(lVar10 + 0x18),0);
      FUN_066e7694(lVar8,*(undefined8 *)
                          PlayFab_MultiplayerModels_SubscribeToLobbyResourceRequest_var,
                   *(undefined8 *)(lVar10 + 0x10),0);
      goto LAB_0635a6f8;
    }
  }
  lVar5 = *(long *)(lVar10 + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  lVar5 = lVar5 + (long)(int)uVar3 * 0x40;
  uStack_c8 = *(undefined8 *)(lVar5 + 0x48);
  local_d0 = *(undefined8 *)(lVar5 + 0x40);
  uStack_b8 = *(undefined8 *)(lVar5 + 0x58);
  uStack_c0 = *(undefined8 *)(lVar5 + 0x50);
  uStack_e8 = *(undefined8 *)(lVar5 + 0x28);
  local_f0 = *(undefined8 *)(lVar5 + 0x20);
  uStack_d8 = *(undefined8 *)(lVar5 + 0x38);
  uStack_e0 = *(undefined8 *)(lVar5 + 0x30);
  local_b0 = local_f0;
  uStack_a8 = uStack_e8;
  uStack_a0 = uStack_e0;
  uStack_98 = uStack_d8;
  local_90 = local_d0;
  uStack_88 = uStack_c8;
  uStack_80 = uStack_c0;
  uStack_78 = uStack_b8;
  FUN_066e7620(lVar8,*(undefined8 *)PlayFab_MultiplayerModels_SubscribeToMatchResourceRequest_var,
               &local_f0,0);
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  lVar10 = lVar10 + (long)(int)uVar3 * 0x40;
  uStack_148 = *(undefined8 *)(lVar10 + 0x48);
  local_150 = *(undefined8 *)(lVar10 + 0x40);
  uStack_138 = *(undefined8 *)(lVar10 + 0x58);
  uStack_140 = *(undefined8 *)(lVar10 + 0x50);
  uStack_168 = *(undefined8 *)(lVar10 + 0x28);
  local_170 = *(undefined8 *)(lVar10 + 0x20);
  uStack_158 = *(undefined8 *)(lVar10 + 0x38);
  uStack_160 = *(undefined8 *)(lVar10 + 0x30);
  local_130 = local_170;
  uStack_128 = uStack_168;
  uStack_120 = uStack_160;
  uStack_118 = uStack_158;
  local_110 = local_150;
  uStack_108 = uStack_148;
  uStack_100 = uStack_140;
  uStack_f8 = uStack_138;
  FUN_066e7620(lVar8,*(undefined8 *)PlayFab_EconomyModels_SubmitItemReviewVoteResponse_var,
               &local_170,0);
LAB_0635a6f8:
  uVar3 = FUN_0669041c(lVar9,0);
  FUN_06690458(lVar9,uVar3 | 5,0);
  uVar6 = local_58;
  if (*(int *)(*(long *)PlayFab_EconomyModels_SubmitItemReviewVoteRequest_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0635a84c(uVar6,lVar8,param_3);
  FUN_0635aa0c(local_58,param_3);
  FUN_062a6cd8(local_70,0);
  return;
}


