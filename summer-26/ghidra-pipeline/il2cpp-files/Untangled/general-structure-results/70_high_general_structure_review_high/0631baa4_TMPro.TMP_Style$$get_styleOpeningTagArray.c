/*
FUNCTION_NAME: TMPro.TMP_Style$$get_styleOpeningTagArray
ENTRY_POINT: 0631baa4
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_9;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void TMPro_TMP_Style__get_styleOpeningTagArray(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined4 extraout_var;
  char cVar21;
  long lVar22;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x22;
  long lVar23;
  uint uVar24;
  long lVar25;
  uint unaff_w27;
  uint unaff_w28;
  undefined8 uVar26;
  uint uStack0000000000000034;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined4 in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_0000029c;
  undefined8 in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000380;
  
  if (*(int *)(**(long **)(param_1 + 0xe20) + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar18 = FUN_066c971c(in_stack_00000380,0,0);
  if ((uVar18 & 1) == 0) {
LAB_0631bb4c:
    uStack0000000000000034 = 0;
  }
  else {
    if (in_stack_00000380 == 0) goto LAB_0631c4e0;
    uVar18 = FUN_066c5c80(in_stack_00000380,0);
    if ((uVar18 & 1) == 0) goto LAB_0631bb4c;
    if (in_stack_00000380 == 0) goto LAB_0631c4e0;
    uVar19 = TMPro_TMP_Text__get_colorGradient(in_stack_00000380,0);
    if (DAT_071bb937 == '\0') {
      FUN_02f07e70(PTR_DAT_06d05d20);
      DAT_071bb937 = '\x01';
    }
    if (((int)uVar19 != **(int **)(*(long *)PTR_DAT_06d05d20 + 0xb8)) ||
       ((int)((ulong)uVar19 >> 0x20) != (*(int **)(*(long *)PTR_DAT_06d05d20 + 0xb8))[1])) {
      if (in_stack_00000380 == 0) goto LAB_0631c4e0;
      uVar17 = TMPro_TMP_Text__get_colorGradient(in_stack_00000380,0);
      *(undefined4 *)in_stack_00000040 = uVar17;
      if (in_stack_00000380 == 0) goto LAB_0631c4e0;
      TMPro_TMP_Text__get_colorGradient(in_stack_00000380,0);
      *(undefined4 *)((long)unaff_x20 + 0xf4) = extraout_var;
      puVar9 = PlayFab_ClientModels_GetUserDataResult_var;
      lVar23 = *(long *)(unaff_x19 + 0x100);
      lVar22 = *(long *)PlayFab_ClientModels_GetUserDataResult_var;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar22 = *(long *)puVar9;
      }
      lVar25 = *(long *)(*(long *)(lVar22 + 0xb8) + 8);
      if (lVar25 == 0) {
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar22 = *(long *)PlayFab_ClientModels_GetUserDataResult_var;
        }
        puVar9 = PlayFab_ClientModels_GetUserDataResult_var;
        uVar19 = **(undefined8 **)(lVar22 + 0xb8);
        lVar25 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_AddonModels_GetTwitchRequest_var);
        FUN_044474e4(lVar25,uVar19,*(undefined8 *)PlayFab_ClientModels_GetUserDataRequest_var,0);
        plVar20 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
        *plVar20 = lVar25;
        thunk_FUN_02f411dc(plVar20,lVar25);
      }
      if (lVar23 == 0) goto LAB_0631c4e0;
      plVar20 = (long *)FUN_03fd1368(lVar23,lVar25,
                                     *(undefined8 *)
                                      PlayFab_ExperimentationModels_GetTreatmentAssignmentRequest_var
                                    );
      if (plVar20 != (long *)0x0) {
        bVar8 = *(byte *)(*(long *)PlayFab_ClientModels_ExecuteCloudScriptResult_var + 0x130);
        if ((bVar8 <= *(byte *)(*plVar20 + 0x130)) &&
           (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar8 * 8 + -8) ==
            *(long *)PlayFab_ClientModels_ExecuteCloudScriptResult_var)) {
          FUN_062f8b78(plVar20,&stack0x00000210,0);
        }
      }
    }
    if (in_stack_00000380 == 0) goto LAB_0631c4e0;
    if (*(int *)(in_stack_00000380 + 0x30) == 2) {
      uVar10 = 1;
    }
    else {
      uVar10 = FUN_062f94e4(in_stack_00000380,0);
      uVar10 = uVar10 & 1;
    }
    uStack0000000000000034 = (uint)(uVar10 != 0);
  }
  puVar9 = PlayFab_ClientModels_GetTitlePublicKeyResult_var;
  uVar18 = FUN_0631aebc();
  lVar22 = *(long *)puVar9;
  lVar23 = *unaff_x20;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar22);
    lVar22 = *(long *)puVar9;
  }
  FUN_062a6cd4(&stack0x000002d8,lVar23,**(undefined8 **)(lVar22 + 0xb8),0);
  FUN_0631b168();
  FUN_062a6cd8(&stack0x000002d8,0);
  if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066f0aec(&stack0x00000388,lVar23,0);
  if (lVar23 == 0) goto LAB_0631c4e0;
  FUN_066e3124(lVar23,0);
  FUN_06346cb8();
  if ((in_stack_00000048 & 0x100000000) != 0) {
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_0631c4e0;
    FUN_063a7dc4(*(long *)(unaff_x19 + 0x220),unaff_x20 + 0x54,&stack0x000002a0,&stack0x0000029c,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x240,&stack0x000002a0,in_stack_0000029c,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_GetUserInventoryResult_var,0);
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_0631c4e0;
    FUN_063a7db0(*(long *)(unaff_x19 + 0x220),&stack0x00000290,0);
    FUN_0634a5ec();
  }
  lVar22 = *(long *)(unaff_x19 + 0x1a8);
  if ((uVar18 & 1) == 0) {
    cVar21 = *(char *)(unaff_x19 + 0x1e8);
  }
  else {
    cVar21 = '\x01';
  }
  if (lVar22 == 0) goto LAB_0631c4e0;
  *(bool *)(lVar22 + 0xf8) = cVar21 != '\0';
  FUN_0633f690(lVar22,in_stack_00000370,in_stack_00000368,0);
  FUN_0634a5ec();
  uVar10 = FUN_0639174c();
  uVar11 = FUN_0638de94();
  if (((uVar10 & 1) != 0) && ((uVar11 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0631c4e0;
    FUN_0635787c();
    FUN_0634a5ec();
  }
  lVar23 = *(long *)(unaff_x19 + 0x100);
  lVar22 = *(long *)PlayFab_ClientModels_GetUserDataResult_var;
  iVar5 = *(int *)((long)unaff_x20 + 0x1c4);
  if (*(int *)(lVar22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar22 = *(long *)PlayFab_ClientModels_GetUserDataResult_var;
  }
  lVar25 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x10);
  if (lVar25 == 0) {
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar22 = *(long *)PlayFab_ClientModels_GetUserDataResult_var;
    }
    puVar9 = PlayFab_ClientModels_GetUserDataResult_var;
    uVar19 = **(undefined8 **)(lVar22 + 0xb8);
    lVar25 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_AddonModels_GetTwitchRequest_var);
    FUN_044474e4(lVar25,uVar19,*(undefined8 *)PlayFab_AddonModels_GetTwitchResponse_var,0);
    plVar20 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
    *plVar20 = lVar25;
    thunk_FUN_02f411dc(plVar20,lVar25);
  }
  if (lVar23 == 0) goto LAB_0631c4e0;
  lVar22 = FUN_03fd1368(lVar23,lVar25,
                        *(undefined8 *)
                         PlayFab_ExperimentationModels_GetTreatmentAssignmentRequest_var);
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_0633054c(*(long *)(unaff_x19 + 0xe0),unaff_x22,0);
    uVar12 = ~uVar12 & 1;
  }
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar18 = FUN_066c971c(in_stack_00000380,0,0);
  if ((uVar18 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    if (in_stack_00000380 == 0) goto LAB_0631c4e0;
    uVar13 = FUN_066c5c80(in_stack_00000380,0);
    uVar13 = uVar13 & 1;
  }
  uVar1 = unaff_w27 & (uint)(unaff_w28 != 0) & (uStack0000000000000034 ^ 0xffffffff) &
          (uint)(iVar5 == 1) & (uVar11 ^ 1);
  uVar2 = unaff_x20[0x35] != 0 & unaff_w28;
  uVar24 = 0;
  if (unaff_w28 != 0) {
    uVar3 = uVar10 & unaff_w28 != 0;
    uVar4 = uVar3 & uVar2 == 0;
    uVar10 = uVar4;
    if (uVar2 != 0) {
      uVar10 = uVar3;
    }
    if ((lVar22 == 0) && (uVar2 == 0)) {
      uVar24 = 0;
      uVar10 = uVar4;
      if (uVar1 == 0) {
        uVar24 = uVar13 ^ 1;
      }
    }
  }
  if (in_stack_00000048._4_4_ != 0) {
    uVar6 = *(undefined4 *)(in_stack_00000040 + 6);
    in_stack_000001e8 = in_stack_00000040[3];
    in_stack_000001e0 = in_stack_00000040[2];
    uVar26 = in_stack_00000040[5];
    uVar19 = in_stack_00000040[4];
    in_stack_000001d8 = in_stack_00000040[1];
    in_stack_000001d0 = *in_stack_00000040;
    lVar23 = unaff_x20[0x1e];
    uVar17 = *(undefined4 *)((long)unaff_x20 + 0xf4);
    uVar14 = FUN_066b576c(in_stack_00000040,0);
    if (*(int *)(*(long *)PlayFab_ExperimentationModels_GetTreatmentAssignmentResult_var + 0xe0) ==
        0) {
      thunk_FUN_02f12b58(*(long *)PlayFab_ExperimentationModels_GetTreatmentAssignmentResult_var);
    }
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000168 = in_stack_000001e8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000170 = uVar19;
    in_stack_00000178 = uVar26;
    in_stack_00000180 = uVar6;
    FUN_0635e3e0(&stack0x00000190,&stack0x00000150,(int)lVar23,uVar17,uVar14,0,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x238,&stack0x00000250,0,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_GetTradeStatusResponse_var,0);
    puVar9 = PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var;
    lVar25 = *(long *)(unaff_x19 + 0x228);
    lVar23 = *(long *)(unaff_x19 + 0x238);
    if (lVar23 == 0) goto LAB_0631c4e0;
    in_stack_00000198 = *(undefined8 *)(lVar23 + 0x30);
    in_stack_00000190 = *(undefined8 *)(lVar23 + 0x28);
    in_stack_000001b0 = *(undefined8 *)(lVar23 + 0x48);
    in_stack_000001a8 = *(undefined8 *)(lVar23 + 0x40);
    in_stack_000001a0 = *(undefined8 *)(lVar23 + 0x38);
    lVar23 = *(long *)PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar23 = *(long *)puVar9;
    }
    lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x10);
    if (lVar23 == 0) goto LAB_0631c4e0;
    in_stack_000000f8 = *(undefined8 *)(lVar23 + 0x30);
    in_stack_000000f0 = *(undefined8 *)(lVar23 + 0x28);
    in_stack_00000108 = *(undefined8 *)(lVar23 + 0x40);
    in_stack_00000100 = *(undefined8 *)(lVar23 + 0x38);
    in_stack_00000110 = *(undefined8 *)(lVar23 + 0x48);
    in_stack_00000128 = in_stack_00000198;
    in_stack_00000120 = in_stack_00000190;
    in_stack_00000138 = in_stack_000001a8;
    in_stack_00000130 = in_stack_000001a0;
    in_stack_00000140 = in_stack_000001b0;
    FUN_066e22c4(&stack0x00000120,&stack0x000000f0,0);
    if (lVar25 == 0) goto LAB_0631c4e0;
    FUN_0635bc80(lVar25,in_stack_00000040,&stack0x00000370,uVar24,&stack0x00000368,&stack0x00000290,
                 &stack0x00000248,uVar1);
    FUN_0634a5ec();
  }
  if (uVar13 != 0) {
    if (in_stack_00000380 == 0) goto LAB_0631c4e0;
    iVar5 = *(int *)(in_stack_00000380 + 0x2c);
    uVar10 = uVar10 & uVar13 != 0;
    if (iVar5 != 0) {
      FUN_0634a5ec();
      if (in_stack_00000380 == 0) goto LAB_0631c4e0;
      uVar10 = uVar10 & iVar5 != 0;
      uVar18 = FUN_062f94e4(in_stack_00000380,0);
      if ((uVar18 & 1) != 0) {
        if (in_stack_00000380 == 0) goto LAB_0631c4e0;
        iVar5 = *(int *)(in_stack_00000380 + 0x24);
        iVar15 = FUN_062f9498(in_stack_00000380,0);
        if (in_stack_00000380 == 0) goto LAB_0631c4e0;
        iVar7 = *(int *)(in_stack_00000380 + 0x28);
        iVar16 = FUN_062f9498(in_stack_00000380,0);
        if (in_stack_00000380 == 0) goto LAB_0631c4e0;
        lVar23 = *(long *)(unaff_x19 + 0x1b8);
        uVar17 = FUN_062f96d8(in_stack_00000380,0);
        if (lVar23 == 0) goto LAB_0631c4e0;
        FUN_06316004(lVar23,in_stack_00000370,iVar15 * iVar5,iVar16 * iVar7,uVar17,unaff_x20,
                     &stack0x00000360);
        FUN_0634a5ec();
      }
    }
  }
  puVar9 = PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var;
  if (uVar1 == 0) {
    uVar12 = uVar10;
    if ((in_stack_00000048._4_4_ != 0) && (uVar12 = in_stack_00000048._4_4_ & uVar10, lVar22 == 0))
    {
      uVar1 = in_stack_00000048._4_4_ & uVar10 & 1;
      uVar10 = uVar2 == 0 & uVar1;
      uVar12 = uVar10;
      if (uVar2 != 0) {
        uVar12 = uVar1;
      }
      if (uVar13 == 0 && uVar2 == 0) goto LAB_0631c324;
    }
    uVar10 = uVar12;
    if (in_stack_00000370 == 0) {
LAB_0631c4e0:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    in_stack_000001d8 = *(undefined8 *)(in_stack_00000370 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(in_stack_00000370 + 0x28);
    uVar19 = *(undefined8 *)(in_stack_00000370 + 0x48);
    in_stack_000001e8 = *(undefined8 *)(in_stack_00000370 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(in_stack_00000370 + 0x38);
    lVar22 = *(long *)PlayFab_MultiplayerModels_GetTitleMultiplayerServersQuotaChangeRequest_var;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar22 = *(long *)puVar9;
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x10);
    if (lVar22 == 0) goto LAB_0631c4e0;
    in_stack_00000098 = *(undefined8 *)(lVar22 + 0x30);
    in_stack_00000090 = *(undefined8 *)(lVar22 + 0x28);
    in_stack_000000a8 = *(undefined8 *)(lVar22 + 0x40);
    in_stack_000000a0 = *(undefined8 *)(lVar22 + 0x38);
    in_stack_000000b0 = *(undefined8 *)(lVar22 + 0x48);
    in_stack_000000c8 = in_stack_000001d8;
    in_stack_000000c0 = in_stack_000001d0;
    in_stack_000000d8 = in_stack_000001e8;
    in_stack_000000d0 = in_stack_000001e0;
    in_stack_000000e0 = uVar19;
    uVar18 = FUN_066e22c4(&stack0x000000c0,&stack0x00000090,0);
    if ((uVar18 & 1) != 0) goto LAB_0631c324;
    in_stack_000001e8 = in_stack_00000040[3];
    in_stack_000001e0 = in_stack_00000040[2];
    in_stack_000001d8 = in_stack_00000040[1];
    in_stack_000001d0 = *in_stack_00000040;
    if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_0631c4e0;
    in_stack_00000050 = in_stack_000001d0;
    in_stack_00000058 = in_stack_000001d8;
    in_stack_00000060 = in_stack_000001e0;
    in_stack_00000068 = in_stack_000001e8;
    in_stack_00000070 = in_stack_00000040[4];
    in_stack_00000078 = in_stack_00000040[5];
    in_stack_00000080 = *(undefined4 *)(in_stack_00000040 + 6);
    FUN_063b04cc(*(long *)(unaff_x19 + 0x1c0),&stack0x00000050,in_stack_00000370,0);
  }
  else {
    if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_0631c4e0;
    FUN_0635bdc8(*(long *)(unaff_x19 + 0x230),&stack0x00000360,lVar22 != 0,uVar12,0);
  }
  FUN_0634a5ec();
LAB_0631c324:
  if ((uVar10 & (uVar11 ^ 1) & 1) != 0) {
    FUN_0634a5ec();
  }
  return;
}


