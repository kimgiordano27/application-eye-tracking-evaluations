/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream$$Delete
ENTRY_POINT: 063820e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11
*/


void Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream__Delete(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  uint in_w8;
  uint in_w13;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  uint unaff_w22;
  long lVar24;
  uint unaff_w23;
  undefined8 uVar25;
  uint unaff_w26;
  long lVar26;
  uint unaff_w27;
  long unaff_x28;
  undefined8 in_stack_00000018;
  byte bStack0000000000000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000040;
  int in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000054;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  uint in_stack_00000070;
  int iStack0000000000000078;
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
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000550;
  undefined4 in_stack_0000062c;
  long in_stack_00000668;
  undefined4 in_stack_0000067c;
  int in_stack_00000774;
  long in_stack_00000778;
  undefined4 in_stack_00000888;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000894;
  int in_stack_00000898;
  undefined4 in_stack_0000089c;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  
  uVar20 = in_stack_00000030;
  uVar13 = unaff_w27 ^ 1 | unaff_w26 & (in_w13 ^ 1) | in_stack_00000060._4_4_ | in_w8 |
           (uint)*(byte *)(unaff_x19 + 0x1a5);
  uVar15 = FUN_06278cf8(param_1,0);
  uVar11 = uVar13;
  if ((uVar15 & 1) == 0) {
    uVar11 = 0;
  }
  uVar11 = uVar11 | unaff_w22;
  iVar9 = FUN_066d09a8(0);
  puVar5 = PTR_DAT_06d96748;
  if ((iVar9 != 0x15) || (*(char *)(unaff_x19 + 0x314) != '\0')) {
    uVar11 = uVar13 | uVar11 != 0;
  }
  bVar6 = uVar11 != 0;
  if (*(int *)(*(long *)PTR_DAT_06d96748 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062cb610(&stack0x00000530,0);
  if ((float)in_stack_00000550 == 1.0) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_062cb610(&stack0x00000530,0);
    if ((float)((ulong)in_stack_00000550 >> 0x20) != 1.0) goto LAB_063821b8;
  }
  else {
LAB_063821b8:
    bVar6 = uVar13 != 0 || bVar6;
  }
  if ((*(char *)(unaff_x19 + 0x1a4) != '\0') || (*(char *)(unaff_x19 + 0x1a5) != '\0')) {
    bVar6 = uVar13 != 0 || bVar6;
  }
  FUN_066b6234(&stack0x00000850,0,0);
  FUN_066b6250(&stack0x00000850,0,0);
  FUN_066b5c2c(&stack0x00000850,0,0);
  if (*(long *)(unaff_x19 + 0x270) == 0) goto LAB_06383e44;
  plVar19 = (long *)(unaff_x19 + 0x270);
  FUN_063b5bac(*(long *)(unaff_x19 + 0x270),&stack0x000004f0,1,0);
  if (*(int *)(unaff_x20 + 0xe0) == 0) {
    if (in_stack_00000040 == 0) goto LAB_06383e44;
    iVar9 = FUN_06691bac(in_stack_00000040,0);
    bVar7 = uVar13 != 0 || bVar6;
    FUN_066e1d9c(&stack0x00000530,2,0);
    if ((*(long *)(unaff_x20 + 400) == 0) ||
       ((uVar15 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0), (uVar15 & 1) != 0 &&
        (*(long *)(unaff_x20 + 400) == 0)))) goto LAB_06383e44;
    puVar22 = (undefined8 *)(unaff_x19 + 0x298);
    if (*(long *)(unaff_x19 + 0x298) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar18 = FUN_062ca98c(&stack0x000004c0,0);
      *puVar22 = uVar18;
      thunk_FUN_02f411dc(puVar22,uVar18);
    }
    else {
      uVar15 = FUN_066e22f4(&stack0x00000490,&stack0x00000460,0);
      if ((uVar15 & 1) != 0) {
        FUN_062caa6c(puVar22,&stack0x00000430,0);
      }
    }
    if (bVar7 && iVar9 != 1) {
      FUN_063842b4();
      iVar10 = FUN_066d09a8(0);
      if (iVar10 == 2) {
        FUN_062c3ff8(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x290),0);
        FUN_062c3ff8(&stack0x00000408,*(undefined8 *)(unaff_x19 + 0x2a0),0);
        in_stack_000001c0 = in_stack_00000408;
        in_stack_000001c8 = in_stack_00000410;
        in_stack_000001d0 = in_stack_00000418;
        in_stack_000001d8 = in_stack_00000420;
        in_stack_000001e0 = in_stack_00000428;
        if (unaff_x28 == 0) goto LAB_06383e44;
        FUN_066e7208();
      }
    }
    if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_06383e44;
    bVar2 = uVar13 == 0 && !bVar6 || iVar9 == 1;
    *(bool *)(*(long *)(unaff_x19 + 0x200) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
    *(bool *)(*(long *)(unaff_x19 + 0x230) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_06383e44;
    *(bool *)(*(long *)(unaff_x19 + 0x210) + 0xe0) = bVar2;
    if (*(long *)(unaff_x19 + 0x250) == 0) goto LAB_06383e44;
    *(bool *)(*(long *)(unaff_x19 + 0x250) + 0xe8) = bVar2;
    if (bVar6) {
      if (*plVar19 == 0) goto LAB_06383e44;
      uVar18 = FUN_063b578c(*plVar19,0);
    }
    else {
      uVar18 = *puVar22;
    }
    *(undefined8 *)(unaff_x19 + 0x278) = uVar18;
    thunk_FUN_02f411dc(unaff_x19 + 0x278);
    lVar17 = 0x290;
    if (uVar13 == 0 && !bVar6) {
      lVar17 = 0x298;
    }
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + lVar17);
    thunk_FUN_02f411dc(unaff_x19 + 0x288);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x220) == 0) ||
        (FUN_037f26f8(*(long *)(unaff_x20 + 0x220),&stack0x00000778,
                      *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var),
        in_stack_00000778 == 0)) || (plVar16 = (long *)FUN_0637ea78(), plVar16 == (long *)0x0))
    goto LAB_06383e44;
    if (*plVar16 != *(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar16);
    }
    lVar17 = *plVar19;
    if (lVar17 != plVar16[0x4e]) {
      if (lVar17 == 0) goto LAB_06383e44;
      FUN_063b5738(lVar17,0);
      *plVar19 = plVar16[0x4e];
      thunk_FUN_02f411dc(plVar19);
      lVar17 = *plVar19;
    }
    if (lVar17 == 0) goto LAB_06383e44;
    uVar18 = FUN_063b578c(lVar17,0);
    *(undefined8 *)(unaff_x19 + 0x278) = uVar18;
    thunk_FUN_02f411dc(unaff_x19 + 0x278);
    *(long *)(unaff_x19 + 0x288) = plVar16[0x51];
    thunk_FUN_02f411dc(unaff_x19 + 0x288);
    *(long *)(unaff_x19 + 0x298) = plVar16[0x53];
    thunk_FUN_02f411dc(unaff_x19 + 0x298);
    bVar7 = uVar13 != 0;
  }
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06383e44;
  if ((_iStack0000000000000078 & 0x100000000) == 0 &&
      *(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) != 0) {
    if (*plVar19 == 0) goto LAB_06383e44;
    FUN_063b578c(*plVar19,0);
    FUN_06346f20();
  }
  if (*(char *)(unaff_x20 + 0x188) != '\0') {
    unaff_w21 = 1;
  }
  FUN_06346cb8();
  puVar5 = UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
  lVar24 = *(long *)(unaff_x19 + 0x100);
  lVar17 = *(long *)
            UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar17 = *(long *)puVar5;
  }
  lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
  if (lVar21 == 0) {
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar17 = *(long *)puVar5;
    }
    uVar18 = **(undefined8 **)(lVar17 + 0xb8);
    lVar21 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_AddonModels_GetTwitchRequest_var);
    FUN_044474e4(lVar21,uVar18,*(undefined8 *)HVRInputActions_UIActions_var,0);
    plVar19 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar19 = lVar21;
    thunk_FUN_02f411dc(plVar19,lVar21);
  }
  if (lVar24 == 0) goto LAB_06383e44;
  lVar17 = FUN_03fd1368(lVar24,lVar21,
                        *(undefined8 *)
                         PlayFab_ExperimentationModels_GetTreatmentAssignmentRequest_var);
  if ((in_stack_00000028 & 0x100000000) != 0) {
    FUN_0634a5ec();
  }
  if ((in_stack_00000060 & 1) != 0) {
    FUN_0634a5ec();
  }
  uVar11 = unaff_w21 & unaff_w23;
  if ((in_w13 & 1) == 0) {
    uVar13 = (uint)in_stack_00000068 & 1;
    if (iStack0000000000000078 != 0 || *(char *)(unaff_x20 + 0x187) != '\0') {
      uVar13 = 1;
    }
  }
  else {
    uVar13 = 0;
  }
  bVar6 = uVar11 != 0;
  uVar13 = uVar13 & bVar7;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar15 = FUN_06330850(*(long *)(unaff_x19 + 0xe0),in_stack_00000058,0), (uVar15 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06383e44;
    FUN_06330890(*(long *)(unaff_x19 + 0xe0),&stack0x00000774,0);
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06383e44;
    in_w13 = in_w13 | in_stack_00000774 == 1;
    uVar15 = FUN_06330474(*(long *)(unaff_x19 + 0xe0),0);
    if (((uVar15 & 1) == 0) && (iStack0000000000000054 == 0)) {
      uVar13 = 0;
      uVar11 = 0;
      in_w13 = 0;
      in_stack_00000030._4_4_ = 0;
      *(undefined1 *)(unaff_x19 + 0x1a5) = 0;
    }
    bVar6 = uVar11 != 0;
    if (*(char *)(unaff_x19 + 0x1a4) != '\0') {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06383e44;
      bVar8 = FUN_063305c8(*(long *)(unaff_x19 + 0xe0),0);
      *(byte *)(unaff_x19 + 0x1a4) = bVar8 & 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_06383e44;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d0) + 0x1a5) = *(undefined1 *)(unaff_x19 + 0x1a5);
  iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar9 == 1) {
    lVar24 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar24 == 0) goto LAB_06383e44;
    if ((*(char *)(lVar24 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0639b278(lVar24,0);
    }
  }
  iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar9 == 1) {
    bVar8 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    bVar8 = 0;
  }
  if (bVar8 != 0 || (in_w13 != 0 || uVar13 != 0)) {
    if ((in_w13 == 0) ||
       (iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset(), iVar9 == 1)) {
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar15 = FUN_0636bc48(0x31,4,0);
      if ((uVar15 & 1) == 0) goto LAB_06382934;
      uVar12 = 0;
      uVar18 = 0x31;
    }
    else {
LAB_06382934:
      uVar18 = 0;
      uVar12 = 0x18;
    }
    FUN_066b5b18(&stack0x00000740,uVar18,0);
    FUN_066b5c2c(&stack0x00000740,uVar12,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,(long *)(unaff_x19 + 0x2a8),&stack0x00000740,0,1,0,1,
                 *(undefined8 *)Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var,0);
    if ((*(long *)(unaff_x19 + 0x2a8) == 0) || (unaff_x28 == 0)) goto LAB_06383e44;
    FUN_066e76f4();
    if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&stack0x000008c8);
    FUN_066e3124();
  }
  if ((uVar20 & 1) == 0) {
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) != 0) goto LAB_06382a3c;
    }
  }
  else {
LAB_06382a3c:
    plVar19 = (long *)(unaff_x19 + 0x2b8);
    uVar18 = *(undefined8 *)System_Net_HttpWebRequest_AuthorizationState_var;
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) != 0) {
        lVar24 = *(long *)(unaff_x19 + 0x2e0);
        if (lVar24 == 0) goto LAB_06383e44;
        lVar21 = *(long *)(lVar24 + 0x30);
        uVar11 = FUN_06399b84(lVar24,0);
        if (lVar21 == 0) goto LAB_06383e44;
        if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_06383e54;
        plVar19 = (long *)(lVar21 + (long)(int)uVar11 * 8 + 0x20);
        if (*plVar19 == 0) goto LAB_06383e44;
        uVar18 = *(undefined8 *)(*plVar19 + 0x58);
      }
    }
    FUN_066b5c2c(&stack0x00000700,0,0);
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) == 0) goto LAB_06382b5c;
      lVar24 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar24 == 0) goto LAB_06383e44;
      uVar12 = FUN_06399b84(lVar24,0);
      uVar12 = FUN_06399c9c(lVar24,uVar12,0);
    }
    else {
LAB_06382b5c:
      uVar12 = FUN_0636cc8c(in_stack_00000888,0);
    }
    FUN_066b5b18(&stack0x00000700,uVar12,0);
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) == 0) goto LAB_06382c04;
      lVar24 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar24 == 0) goto LAB_06383e44;
      uVar12 = FUN_06399b84(lVar24,0);
      FUN_0639b320(lVar24,&stack0x00000340,uVar12,0);
    }
    else {
LAB_06382c04:
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_06369f60(0,plVar19,&stack0x00000700,0,1,0,1,uVar18,0);
    }
    if ((*plVar19 == 0) || (unaff_x28 == 0)) goto LAB_06383e44;
    FUN_066e76f4();
    FUN_0636cb78();
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      if (*plVar19 == 0) goto LAB_06383e44;
      FUN_066e76f4();
    }
    if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&stack0x000008c8);
    FUN_066e3124();
  }
  if ((in_stack_00000070 & in_w13) == 1) {
    uVar18 = *(undefined8 *)UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var;
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      lVar24 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar24 == 0) goto LAB_06383e44;
      lVar21 = *(long *)(lVar24 + 0x30);
      uVar11 = FUN_06399b60(lVar24,0);
      if (lVar21 == 0) goto LAB_06383e44;
      if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_06383e54;
      plVar19 = (long *)(lVar21 + (long)(int)uVar11 * 8 + 0x20);
      if (*plVar19 == 0) goto LAB_06383e44;
      uVar18 = *(undefined8 *)(*plVar19 + 0x58);
    }
    else {
      plVar19 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_066b5c2c(&stack0x000006c0,0,0);
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      lVar24 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar24 == 0) goto LAB_06383e44;
      uVar12 = FUN_06399b60(lVar24,0);
      uVar12 = FUN_06399c9c(lVar24,uVar12,0);
    }
    else {
      if (*(int *)(*(long *)UnityEngine_UIElements_FocusController_FocusedElement_var + 0xe0) == 0)
      {
        thunk_FUN_02f12b58();
      }
      uVar12 = FUN_063acd6c(0);
    }
    FUN_066b5b18(&stack0x000006c0,uVar12,0);
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      lVar24 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar24 == 0) goto LAB_06383e44;
      uVar12 = FUN_06399b60(lVar24,0);
      FUN_0639b320(lVar24,&stack0x000002a0,uVar12,0);
    }
    else {
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_06369f60(0,plVar19,&stack0x000006c0,0,1,0,1,uVar18,0);
    }
    if ((*plVar19 == 0) || (unaff_x28 == 0)) goto LAB_06383e44;
    FUN_066e76f4();
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar9 == 1) {
      if (*plVar19 == 0) goto LAB_06383e44;
      FUN_066e76f4();
    }
    if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&stack0x000008c8);
    FUN_066e3124();
  }
  if (in_w13 != 0) {
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (in_stack_00000070 == 0) {
      if (iVar9 == 1) goto LAB_063831a8;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06383e44;
      FUN_063adf00(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar11 = FUN_06399b60(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      lVar24 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar24 == 0) || (lVar21 = *(long *)(lVar24 + 0x30), lVar21 == 0)) goto LAB_06383e44;
      if (*(uint *)(lVar21 + 0x18) <= uVar11) {
LAB_06383e54:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar26 = *(long *)(unaff_x19 + 0x1b8);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar25 = *(undefined8 *)(lVar21 + (long)(int)uVar11 * 8 + 0x20);
      if ((uVar20 & 1) == 0) {
        if (in_stack_00000018._4_4_ == 0) {
          if (lVar26 == 0) goto LAB_06383e44;
          FUN_063ace04(lVar26,uVar18,uVar25,0);
        }
        else {
          if (lVar26 == 0) goto LAB_06383e44;
          FUN_063ace3c(lVar26,uVar18,uVar25,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
      }
      else {
        uVar11 = FUN_06399b84(lVar24,0);
        if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_06383e54;
        if (lVar26 == 0) goto LAB_06383e44;
        FUN_063ace3c(lVar26,uVar18,uVar25,*(undefined8 *)(lVar21 + (long)(int)uVar11 * 8 + 0x20),0);
      }
      puVar5 = PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var;
      if (in_stack_00000048 - 0xdcU < 0x1f) {
        lVar21 = *(long *)(unaff_x19 + 0x1b8);
        lVar24 = *(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar24 = *(long *)puVar5;
        }
        if (lVar21 == 0) goto LAB_06383e44;
        puVar22 = (undefined8 *)(lVar21 + 0xe0);
        *puVar22 = **(undefined8 **)(lVar24 + 0xb8);
        thunk_FUN_02f411dc(puVar22);
      }
    }
    else {
      lVar24 = *(long *)(unaff_x19 + 0x1b8);
      if (in_stack_00000018._4_4_ == 0) {
        if (lVar24 == 0) goto LAB_06383e44;
        FUN_063ace04(lVar24,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
        ;
      }
      else {
        if (lVar24 == 0) goto LAB_06383e44;
        FUN_063ace3c();
      }
    }
    FUN_0634a5ec();
  }
LAB_063831a8:
  if (*(char *)(unaff_x19 + 0x1a5) != '\0') {
    if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_06383e44;
    FUN_063ab144(*(long *)(unaff_x19 + 0x1c0),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x2a8),0);
    FUN_0634a5ec();
  }
  if ((in_stack_00000030._4_4_ & 1) != 0) {
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
  uVar20 = FUN_0627cbdc(*(long *)(unaff_x20 + 400),0);
  if ((uVar20 & 1) != 0) {
    FUN_0634a5ec();
  }
  bVar8 = *(byte *)(unaff_x20 + 0x1d8);
  iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar9 == 1) {
    lVar24 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar24 == 0) goto LAB_06383e44;
    if ((*(char *)(lVar24 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0639b278(lVar24,0);
    }
    FUN_0638490c();
  }
  else {
    uVar12 = 2;
    if (!bVar6) {
      uVar12 = 0;
    }
    uVar1 = 0;
    if (1 < in_stack_00000898) {
      uVar1 = uVar12;
    }
    iVar9 = 0;
    if ((!bVar6 && uVar13 == 0) && bVar8 != 0) {
      iVar9 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
    uVar20 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0);
    if ((uVar20 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar9 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (uVar13 != 0)) {
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar20 = FUN_0636ee28(0);
      if ((uVar20 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
        if (!bVar6 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
          if (iVar9 == 0) {
            iVar9 = 2;
          }
          else if (iVar9 == 3) {
            iVar9 = 1;
          }
        }
      }
    }
    if (in_stack_00000060._4_4_ == 0) {
      lVar24 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar24 = *(long *)(unaff_x19 + 0x208);
      if (lVar24 == 0) goto LAB_06383e44;
      FUN_063ae9bc(lVar24,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar24 == 0) goto LAB_06383e44;
    FUN_0633f170(lVar24,uVar1,0,0);
    FUN_0633f2a8(lVar24,iVar9,0);
    puVar5 = UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
    lVar26 = *(long *)(unaff_x19 + 0x100);
    lVar21 = *(long *)
              UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
    ;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar21 = *(long *)puVar5;
    }
    lVar23 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x10);
    if (lVar23 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar21 = *(long *)
                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
        ;
      }
      puVar5 = 
      UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
      uVar18 = **(undefined8 **)(lVar21 + 0xb8);
      lVar23 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_AddonModels_GetTwitchRequest_var);
      FUN_044474e4(lVar23,uVar18,
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                   ,0);
      plVar19 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar19 = lVar23;
      thunk_FUN_02f411dc(plVar19,lVar23);
    }
    if (lVar26 == 0) goto LAB_06383e44;
    lVar21 = FUN_03fd1368(lVar26,lVar23,
                          *(undefined8 *)
                           PlayFab_ExperimentationModels_GetTreatmentAssignmentRequest_var);
    if ((lVar21 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
    uVar20 = FUN_066d1258(0);
    if ((uVar20 & 1) != 0) {
      FUN_0633fbe0(0,0,0,0x3f800000,lVar24,uVar12,0);
    }
    FUN_0634a5ec();
  }
  if (in_stack_00000040 == 0) goto LAB_06383e44;
  iVar9 = FUN_0669039c(in_stack_00000040,0);
  if ((iVar9 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar18 = FUN_066a2058(0);
    puVar5 = PTR_DAT_06d01e20;
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01e20);
    }
    uVar20 = FUN_066c971c(uVar18,0,0);
    if ((uVar20 & 1) == 0) {
      uVar20 = FUN_037f26f8(in_stack_00000040,&stack0x00000668,
                            *(undefined8 *)HVRInputActions_RightHandActions_var);
      if ((uVar20 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06383e44;
        uVar18 = FUN_066a64f4(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar5);
        }
        uVar20 = FUN_066c971c(uVar18,0,0);
        if ((uVar20 & 1) != 0) goto LAB_0638359c;
      }
    }
    else {
LAB_0638359c:
      FUN_0634a5ec();
    }
  }
  if (uVar13 == 0) {
    if ((in_w13 & 1) == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar20 = FUN_066d0e58(0);
      uVar18 = *(undefined8 *)Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var;
      if ((uVar20 & 1) == 0) {
        uVar25 = FUN_066ae9c8(0);
      }
      else {
        uVar25 = FUN_066ae9f0(0);
      }
      FUN_066a29a8(uVar18,uVar25,0);
    }
  }
  else {
    iVar9 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (((iVar9 != 1) || ((in_stack_00000068 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0'))
    {
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
      FUN_063ab144(*(long *)(unaff_x19 + 0x218),*(undefined8 *)(unaff_x19 + 0x288),
                   *(undefined8 *)(unaff_x19 + 0x2a8),0);
      FUN_0634a5ec();
    }
  }
  if (bVar6) {
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar24 = FUN_0638870c(0);
    if (lVar24 == 0) goto LAB_06383e44;
    uVar12 = *(undefined4 *)(lVar24 + 0x50);
    FUN_063a9ca4(uVar12,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)UnityEngine_InputSystem_InputAction_CallbackContext_var,0);
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06383e44;
    FUN_063a9e30(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar12,0);
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
  uVar11 = 0;
  if (bVar8 != 0) {
    uVar11 = 3;
  }
  if (uVar13 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar11 = 0;
      }
      else {
        if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar11 = FUN_0636ee28(0);
        uVar11 = uVar11 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
  FUN_0633f170(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar8,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
  FUN_0633f2a8(*(long *)(unaff_x19 + 0x230),uVar11,0);
  FUN_0634a5ec();
  FUN_0634a5ec();
  uVar11 = FUN_0639174c(in_stack_00000058,0);
  uVar13 = FUN_0638de94(in_stack_00000058,0);
  if (((uVar11 & 1) != 0) && ((uVar13 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06383e44;
    FUN_0635787c(*(long *)(unaff_x19 + 0x260),in_stack_00000058,0x18,0);
    FUN_0634a5ec();
  }
  bVar4 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar8;
  if ((bStack0000000000000020 & bVar8) == 0) {
LAB_06383a2c:
    bVar6 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar6 = true;
  }
  else {
    uVar20 = FUN_0638d19c(in_stack_00000058,0);
    if ((uVar20 & 1) == 0) goto LAB_06383a2c;
    bVar6 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar3 = bVar6 ^ 1;
  if (bVar4 != 0 || lVar17 != 0) {
    bVar3 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar14 = 1;
  }
  else {
    uVar14 = FUN_0633054c(*(long *)(unaff_x19 + 0xe0),in_stack_00000058,0);
    uVar14 = ~uVar14 & 1;
  }
  plVar19 = (long *)(unaff_x19 + 0x278);
  plVar16 = (long *)(unaff_x19 + 0x288);
  if (iStack0000000000000050 == 0) {
    if (bVar8 == 0) {
      return;
    }
    FUN_063810fc();
  }
  else {
    uVar12 = FUN_066b576c(&stack0x00000890,0);
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
    FUN_0635e3e0(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar12,0,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_GetTradeStatusResponse_var,0);
    if (bVar8 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06383e44;
      FUN_0635bc80(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar19,0,plVar16,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06381c40;
    }
    FUN_063810fc();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06383e44;
    FUN_0635bc80(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar19,bVar3,plVar16,
                 &stack0x00000670,unaff_x19 + 0x2c8,bVar6);
    FUN_0634a5ec();
  }
  lVar24 = *plVar19;
  if (bVar6 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06383e44;
    FUN_0635bdc8(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar14,0);
    FUN_0634a5ec();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_0634a5ec();
  }
  if ((bVar6 == false) && (((iStack0000000000000050 == 0 || (lVar17 != 0)) || (bVar4 != 0)))) {
    lVar17 = *plVar19;
    if (lVar17 == 0) goto LAB_06383e44;
    lVar21 = *(long *)(unaff_x19 + 0x298);
    if (lVar21 == 0) goto LAB_06383e44;
    in_stack_00000128 = *(undefined8 *)(lVar21 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar21 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar21 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar21 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar21 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar17 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar17 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar17 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar17 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar17 + 0x48);
    uVar20 = FUN_066e22c4(&stack0x00000150,&stack0x00000120,0);
    if ((uVar20 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06383e44;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_063b04cc(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar24,0);
      FUN_0634a5ec();
    }
  }
  if (((uVar13 | uVar11 ^ 0xffffffff) & 1) == 0) {
    FUN_0634a5ec();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar20 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0);
    if ((uVar20 & 1) == 0) {
      return;
    }
    lVar17 = *plVar16;
    if (lVar17 != 0) {
      lVar24 = *(long *)(unaff_x20 + 400);
      if (lVar24 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar24 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar24 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar24 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar24 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar24 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar17 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar17 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar17 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar17 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar17 + 0x48);
        uVar20 = FUN_066e22c4(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar20 & 1) != 0) {
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


