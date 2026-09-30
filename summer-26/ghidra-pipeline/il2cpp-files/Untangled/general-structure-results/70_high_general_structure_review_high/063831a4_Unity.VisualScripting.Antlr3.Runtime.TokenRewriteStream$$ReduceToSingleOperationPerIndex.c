/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream$$ReduceToSingleOperationPerIndex
ENTRY_POINT: 063831a4
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream__ReduceToSingleOperationPerIndex(void)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  long unaff_x20;
  long lVar19;
  uint unaff_w23;
  bool bVar20;
  uint unaff_w28;
  int unaff_w29;
  byte bStack0000000000000020;
  ulong in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  int in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
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
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined4 in_stack_0000062c;
  long in_stack_00000668;
  undefined4 in_stack_0000067c;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000894;
  int in_stack_00000898;
  undefined4 in_stack_0000089c;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  
  FUN_0634a5ec();
  if (*(char *)(unaff_x19 + 0x1a5) != '\0') {
    if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_06383e44;
    FUN_063ab144(*(long *)(unaff_x19 + 0x1c0),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x2a8),0);
    FUN_0634a5ec();
  }
  if ((in_stack_00000030 & 0x100000000) != 0) {
    if (*(long *)(unaff_x19 + 0x350) == 0) goto LAB_06383e44;
    FUN_063a7dc4(*(long *)(unaff_x19 + 0x350),unaff_x20 + 0x2a0,&stack0x00000680,&stack0x0000067c,0)
    ;
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x370,&stack0x00000680,in_stack_0000067c,1,0,0,
                 *(undefined8 *)PlayFab_ClientModels_GetUserInventoryResult_var,0);
    if (*(long *)(unaff_x19 + 0x350) == 0) goto LAB_06383e44;
    FUN_063a7db0(*(long *)(unaff_x19 + 0x350),&stack0x00000670,0);
    FUN_0634a5ec();
  }
  if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
  uVar12 = FUN_0627cbdc(*(long *)(unaff_x20 + 400),0);
  if ((uVar12 & 1) != 0) {
    FUN_0634a5ec();
  }
  bVar4 = *(byte *)(unaff_x20 + 0x1d8);
  iVar7 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar7 == 1) {
    lVar13 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar13 == 0) goto LAB_06383e44;
    if ((*(char *)(lVar13 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0639b278(lVar13,0);
    }
    FUN_0638490c();
  }
  else {
    uVar11 = 2;
    if (unaff_w28 == 0) {
      uVar11 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000898) {
      uVar2 = uVar11;
    }
    iVar7 = 0;
    if ((unaff_w28 == 0 && unaff_w29 == 0) && bVar4 != 0) {
      iVar7 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
    uVar12 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar7 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (unaff_w29 != 0)) {
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar12 = FUN_0636ee28(0);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
        if ((unaff_w28 & 1) == 0 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
          if (iVar7 == 0) {
            iVar7 = 2;
          }
          else if (iVar7 == 3) {
            iVar7 = 1;
          }
        }
      }
    }
    if (in_stack_00000060._4_4_ == 0) {
      lVar13 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar13 = *(long *)(unaff_x19 + 0x208);
      if (lVar13 == 0) goto LAB_06383e44;
      FUN_063ae9bc(lVar13,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar13 == 0) goto LAB_06383e44;
    FUN_0633f170(lVar13,uVar2,0,0);
    FUN_0633f2a8(lVar13,iVar7,0);
    puVar6 = UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
    lVar18 = *(long *)(unaff_x19 + 0x100);
    lVar17 = *(long *)
              UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
    ;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar17 = *(long *)puVar6;
    }
    lVar19 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
    if (lVar19 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar17 = *(long *)
                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
        ;
      }
      puVar6 = 
      UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
      uVar15 = **(undefined8 **)(lVar17 + 0xb8);
      lVar19 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_AddonModels_GetTwitchRequest_var);
      FUN_044474e4(lVar19,uVar15,
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                   ,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      *plVar14 = lVar19;
      thunk_FUN_02f411dc(plVar14,lVar19);
    }
    if (lVar18 == 0) goto LAB_06383e44;
    lVar17 = FUN_03fd1368(lVar18,lVar19,
                          *(undefined8 *)
                           PlayFab_ExperimentationModels_GetTreatmentAssignmentRequest_var);
    if ((lVar17 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    uVar12 = FUN_066d1258(0);
    if ((uVar12 & 1) != 0) {
      FUN_0633fbe0(0,0,0,0x3f800000,lVar13,uVar11,0);
    }
    FUN_0634a5ec();
  }
  if (in_stack_00000040 == 0) goto LAB_06383e44;
  iVar7 = FUN_0669039c(in_stack_00000040,0);
  if ((iVar7 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar15 = FUN_066a2058(0);
    puVar6 = PTR_DAT_06d01e20;
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01e20);
    }
    uVar12 = FUN_066c971c(uVar15,0,0);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_037f26f8(in_stack_00000040,&stack0x00000668,
                            *(undefined8 *)HVRInputActions_RightHandActions_var);
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06383e44;
        uVar15 = FUN_066a64f4(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar6);
        }
        uVar12 = FUN_066c971c(uVar15,0,0);
        if ((uVar12 & 1) != 0) goto LAB_0638359c;
      }
    }
    else {
LAB_0638359c:
      FUN_0634a5ec();
    }
  }
  if (unaff_w29 == 0) {
    if ((unaff_w23 & 1) == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar12 = FUN_066d0e58(0);
      uVar15 = *(undefined8 *)Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var;
      if ((uVar12 & 1) == 0) {
        uVar16 = FUN_066ae9c8(0);
      }
      else {
        uVar16 = FUN_066ae9f0(0);
      }
      FUN_066a29a8(uVar15,uVar16,0);
    }
  }
  else {
    iVar7 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (((iVar7 != 1) || ((in_stack_00000068 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0'))
    {
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
      FUN_063ab144(*(long *)(unaff_x19 + 0x218),*(undefined8 *)(unaff_x19 + 0x288),
                   *(undefined8 *)(unaff_x19 + 0x2a8),0);
      FUN_0634a5ec();
    }
  }
  if (unaff_w28 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar13 = FUN_0638870c(0);
    if (lVar13 == 0) goto LAB_06383e44;
    uVar11 = *(undefined4 *)(lVar13 + 0x50);
    FUN_063a9ca4(uVar11,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)UnityEngine_InputSystem_InputAction_CallbackContext_var,0);
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06383e44;
    FUN_063a9e30(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar11,0);
    FUN_0634a5ec();
  }
  if ((in_stack_00000068 >> 0x28 & 1) != 0) {
    FUN_066b5b18(&stack0x000005f0,0x2e,0);
    FUN_066b5c2c(&stack0x000005f0,0,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x2c8,&stack0x000005f0,0,1,0,1,
                 *(undefined8 *)TMPro_TMP_FontWeightPair_var,0);
    FUN_066b5b18(&stack0x000005b0,0,0);
    FUN_06369f60(0,unaff_x19 + 0x2d0,&stack0x000005b0,0,1,0,1,
                 *(undefined8 *)UnityEngine_UIElements_InlineStyleAccess_InlineRule_var,0);
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_06383e44;
    FUN_0635a328(*(long *)(unaff_x19 + 0x1c8),*(undefined8 *)(unaff_x19 + 0x2c8),
                 *(undefined8 *)(unaff_x19 + 0x2d0),0);
    FUN_0634a5ec();
  }
  if ((_bStack0000000000000020 & 0x100000000) != 0) {
    FUN_0634a5ec();
  }
  uVar8 = 0;
  if (bVar4 != 0) {
    uVar8 = 3;
  }
  if (unaff_w29 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar8 = 0;
      }
      else {
        if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_0636ee28(0);
        uVar8 = uVar8 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
  FUN_0633f170(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar4,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
  FUN_0633f2a8(*(long *)(unaff_x19 + 0x230),uVar8,0);
  FUN_0634a5ec();
  FUN_0634a5ec();
  uVar8 = FUN_0639174c();
  uVar9 = FUN_0638de94();
  if (((uVar8 & 1) != 0) && ((uVar9 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06383e44;
    FUN_0635787c();
    FUN_0634a5ec();
  }
  bVar5 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar4;
  if ((bStack0000000000000020 & bVar4) == 0) {
LAB_06383a2c:
    bVar20 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar20 = true;
  }
  else {
    uVar12 = FUN_0638d19c();
    if ((uVar12 & 1) == 0) goto LAB_06383a2c;
    bVar20 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar3 = bVar20 ^ 1;
  if (bVar5 != 0 || in_stack_00000038 != 0) {
    bVar3 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = FUN_0633054c();
    uVar10 = ~uVar10 & 1;
  }
  plVar14 = (long *)(unaff_x19 + 0x278);
  plVar1 = (long *)(unaff_x19 + 0x288);
  if (in_stack_00000050 == 0) {
    if (bVar4 == 0) {
      return;
    }
    FUN_063810fc();
  }
  else {
    uVar11 = FUN_066b576c(&stack0x00000890,0);
    if (*(int *)(*(long *)PlayFab_ExperimentationModels_GetTreatmentAssignmentResult_var + 0xe0) ==
        0) {
      thunk_FUN_02f12b58(*(long *)PlayFab_ExperimentationModels_GetTreatmentAssignmentResult_var);
    }
    in_stack_00000180 = CONCAT44(in_stack_00000894,in_stack_00000890);
    in_stack_00000188 = CONCAT44(in_stack_0000089c,in_stack_00000898);
    in_stack_00000190 = in_stack_000008a0;
    in_stack_00000198 = in_stack_000008a8;
    in_stack_000001a0 = in_stack_000008b0;
    in_stack_000001a8 = in_stack_000008b8;
    in_stack_000001b0 = in_stack_000008c0;
    FUN_0635e3e0(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar11,0,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_GetTradeStatusResponse_var,0);
    if (bVar4 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06383e44;
      FUN_0635bc80(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar14,0,plVar1,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06381c40;
    }
    FUN_063810fc();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06383e44;
    FUN_0635bc80(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar14,bVar3,plVar1,&stack0x00000670
                 ,unaff_x19 + 0x2c8,bVar20);
    FUN_0634a5ec();
  }
  lVar13 = *plVar14;
  if (bVar20 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06383e44;
    FUN_0635bdc8(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar10,0);
    FUN_0634a5ec();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_0634a5ec();
  }
  if ((bVar20 == false) && (((in_stack_00000050 == 0 || (in_stack_00000038 != 0)) || (bVar5 != 0))))
  {
    lVar17 = *plVar14;
    if (lVar17 == 0) goto LAB_06383e44;
    lVar18 = *(long *)(unaff_x19 + 0x298);
    if (lVar18 == 0) goto LAB_06383e44;
    in_stack_00000128 = *(undefined8 *)(lVar18 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar18 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar18 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar18 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar18 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar17 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar17 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar17 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar17 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar17 + 0x48);
    uVar12 = FUN_066e22c4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar12 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06383e44;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_063b04cc(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar13,0);
      FUN_0634a5ec();
    }
  }
  if (((uVar9 | uVar8 ^ 0xffffffff) & 1) == 0) {
    FUN_0634a5ec();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar12 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      lVar17 = *(long *)(unaff_x20 + 400);
      if (lVar17 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar17 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar17 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar17 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar17 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar17 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar13 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar13 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar13 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar13 + 0x48);
        uVar12 = FUN_066e22c4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar12 & 1) != 0) {
          return;
        }
        if (*(long *)(unaff_x20 + 400) != 0) {
          if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 600) != 0) {
            FUN_063ab144(*(long *)(unaff_x19 + 600),*(undefined8 *)(unaff_x19 + 0x288),
                         *(undefined8 *)(unaff_x19 + 0x298),0);
            if (*(long *)(unaff_x19 + 600) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 600) + 0xf4) = 1;
LAB_06381c40:
              FUN_0634a5ec();
              return;
            }
          }
        }
      }
    }
  }
LAB_06383e44:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


