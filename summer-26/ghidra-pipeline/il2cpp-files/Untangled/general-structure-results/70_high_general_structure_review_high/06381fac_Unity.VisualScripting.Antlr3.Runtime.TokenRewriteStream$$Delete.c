/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream$$Delete
ENTRY_POINT: 06381fac
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
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long unaff_x19;
  long unaff_x20;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  uint unaff_w23;
  uint uVar26;
  uint unaff_w24;
  uint unaff_w25;
  undefined8 uVar27;
  undefined8 unaff_x26;
  long lVar28;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000018;
  byte bStack0000000000000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000040;
  int in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000054;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  uint in_stack_00000070;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
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
  lVar21 = *(long *)(unaff_x19 + 0x218);
  iVar11 = (int)((ulong)param_1 >> 0x20) + -1;
  iVar12 = 500;
  if (*(int *)(unaff_x19 + 0x2f0) != 1) {
    iVar12 = 300;
  }
  if (499 < iVar11) {
    iVar11 = 500;
  }
  if ((unaff_x29 & 1) != 0) {
    iVar12 = iVar11;
  }
  if (lVar21 == 0) goto LAB_06383e44;
  *(int *)(lVar21 + 0x10) = iVar12;
  if (iVar12 < 500) {
    *(undefined1 *)(lVar21 + 0x100) = 0;
    *(undefined4 *)(unaff_x19 + 0x2f0) = 0;
  }
  uVar10 = FUN_063840f8();
  bVar9 = *(byte *)(unaff_x20 + 0x1d8);
  iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar11 == 1) {
    uVar13 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    uVar13 = 0;
  }
  if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
  uVar15 = (uint)(unaff_x29 >> 0x18);
  uVar26 = unaff_w24 | unaff_w25;
  uVar4 = bVar9 ^ 1 | (uint)((uStack0000000000000078 | 1) != 0) & (uVar26 ^ 1) |
          in_stack_00000060._4_4_ | uVar13 | (uint)*(byte *)(unaff_x19 + 0x1a5);
  uVar16 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0);
  uVar13 = uVar4;
  if ((uVar16 & 1) == 0) {
    uVar13 = 0;
  }
  uVar13 = uVar13 | (unaff_w23 | uVar15 | (uint)(unaff_x29 >> 0x20) | uVar10) &
                    ~uStack000000000000007c & 1;
  iVar11 = FUN_066d09a8(0);
  puVar6 = PTR_DAT_06d96748;
  if ((iVar11 != 0x15) || (*(char *)(unaff_x19 + 0x314) != '\0')) {
    uVar13 = uVar4 | uVar13 != 0;
  }
  bVar7 = uVar13 != 0;
  if (*(int *)(*(long *)PTR_DAT_06d96748 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062cb610(&stack0x00000530,0);
  if ((float)in_stack_00000550 == 1.0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_062cb610(&stack0x00000530,0);
    if ((float)((ulong)in_stack_00000550 >> 0x20) != 1.0) goto LAB_063821b8;
  }
  else {
LAB_063821b8:
    bVar7 = uVar4 != 0 || bVar7;
  }
  if ((*(char *)(unaff_x19 + 0x1a4) != '\0') || (*(char *)(unaff_x19 + 0x1a5) != '\0')) {
    bVar7 = uVar4 != 0 || bVar7;
  }
  FUN_066b6234(&stack0x00000850,0,0);
  FUN_066b6250(&stack0x00000850,0,0);
  FUN_066b5c2c(&stack0x00000850,0,0);
  if (*(long *)(unaff_x19 + 0x270) == 0) goto LAB_06383e44;
  plVar19 = (long *)(unaff_x19 + 0x270);
  FUN_063b5bac(*(long *)(unaff_x19 + 0x270),&stack0x000004f0,1,0);
  if (*(int *)(unaff_x20 + 0xe0) == 0) {
    if (in_stack_00000040 == 0) goto LAB_06383e44;
    iVar11 = FUN_06691bac(in_stack_00000040,0);
    bVar8 = uVar4 != 0 || bVar7;
    FUN_066e1d9c(&stack0x00000530,2,0);
    if ((*(long *)(unaff_x20 + 400) == 0) ||
       ((uVar16 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0), (uVar16 & 1) != 0 &&
        (*(long *)(unaff_x20 + 400) == 0)))) goto LAB_06383e44;
    puVar23 = (undefined8 *)(unaff_x19 + 0x298);
    if (*(long *)(unaff_x19 + 0x298) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar18 = FUN_062ca98c(&stack0x000004c0,0);
      *puVar23 = uVar18;
      thunk_FUN_02f411dc(puVar23,uVar18);
    }
    else {
      uVar16 = FUN_066e22f4(&stack0x00000490,&stack0x00000460,0);
      if ((uVar16 & 1) != 0) {
        FUN_062caa6c(puVar23,&stack0x00000430,0);
      }
    }
    if (bVar8 && iVar11 != 1) {
      FUN_063842b4();
      iVar12 = FUN_066d09a8(0);
      if (iVar12 == 2) {
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
    bVar2 = uVar4 == 0 && !bVar7 || iVar11 == 1;
    *(bool *)(*(long *)(unaff_x19 + 0x200) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
    *(bool *)(*(long *)(unaff_x19 + 0x230) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_06383e44;
    *(bool *)(*(long *)(unaff_x19 + 0x210) + 0xe0) = bVar2;
    if (*(long *)(unaff_x19 + 0x250) == 0) goto LAB_06383e44;
    *(bool *)(*(long *)(unaff_x19 + 0x250) + 0xe8) = bVar2;
    if (bVar7) {
      if (*plVar19 == 0) goto LAB_06383e44;
      uVar18 = FUN_063b578c(*plVar19,0);
    }
    else {
      uVar18 = *puVar23;
    }
    *(undefined8 *)(unaff_x19 + 0x278) = uVar18;
    thunk_FUN_02f411dc(unaff_x19 + 0x278);
    lVar21 = 0x290;
    if (uVar4 == 0 && !bVar7) {
      lVar21 = 0x298;
    }
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + lVar21);
    thunk_FUN_02f411dc(unaff_x19 + 0x288);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x220) == 0) ||
        (FUN_037f26f8(*(long *)(unaff_x20 + 0x220),&stack0x00000778,
                      *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var),
        in_stack_00000778 == 0)) || (plVar17 = (long *)FUN_0637ea78(), plVar17 == (long *)0x0))
    goto LAB_06383e44;
    if (*plVar17 != *(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar17);
    }
    lVar21 = *plVar19;
    if (lVar21 != plVar17[0x4e]) {
      if (lVar21 == 0) goto LAB_06383e44;
      FUN_063b5738(lVar21,0);
      *plVar19 = plVar17[0x4e];
      thunk_FUN_02f411dc(plVar19);
      lVar21 = *plVar19;
    }
    if (lVar21 == 0) goto LAB_06383e44;
    uVar18 = FUN_063b578c(lVar21,0);
    *(undefined8 *)(unaff_x19 + 0x278) = uVar18;
    thunk_FUN_02f411dc(unaff_x19 + 0x278);
    *(long *)(unaff_x19 + 0x288) = plVar17[0x51];
    thunk_FUN_02f411dc(unaff_x19 + 0x288);
    *(long *)(unaff_x19 + 0x298) = plVar17[0x53];
    thunk_FUN_02f411dc(unaff_x19 + 0x298);
    bVar8 = uVar4 != 0;
  }
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06383e44;
  if ((_uStack0000000000000078 & 0x100000000) == 0 &&
      *(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) != 0) {
    if (*plVar19 == 0) goto LAB_06383e44;
    FUN_063b578c(*plVar19,0);
    FUN_06346f20();
  }
  if (*(char *)(unaff_x20 + 0x188) != '\0') {
    uVar15 = 1;
  }
  FUN_06346cb8();
  puVar6 = UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
  lVar25 = *(long *)(unaff_x19 + 0x100);
  lVar21 = *(long *)
            UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar21 = *(long *)puVar6;
  }
  lVar22 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
  if (lVar22 == 0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar21 = *(long *)puVar6;
    }
    uVar18 = **(undefined8 **)(lVar21 + 0xb8);
    lVar22 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_AddonModels_GetTwitchRequest_var);
    FUN_044474e4(lVar22,uVar18,*(undefined8 *)HVRInputActions_UIActions_var,0);
    plVar19 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *plVar19 = lVar22;
    thunk_FUN_02f411dc(plVar19,lVar22);
  }
  if (lVar25 == 0) goto LAB_06383e44;
  lVar21 = FUN_03fd1368(lVar25,lVar22,
                        *(undefined8 *)
                         PlayFab_ExperimentationModels_GetTreatmentAssignmentRequest_var);
  if ((in_stack_00000028 & 0x100000000) != 0) {
    FUN_0634a5ec();
  }
  if ((in_stack_00000060 & 1) != 0) {
    FUN_0634a5ec();
  }
  uVar15 = uVar15 & ~uStack000000000000007c & 1;
  if ((uVar26 & 1) == 0) {
    uVar10 = (uint)in_stack_00000068 & 1;
    if (uStack0000000000000078 != 0 || *(char *)(unaff_x20 + 0x187) != '\0') {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  bVar7 = uVar15 != 0;
  uVar10 = uVar10 & bVar8;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar16 = FUN_06330850(*(long *)(unaff_x19 + 0xe0),unaff_x26,0), (uVar16 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06383e44;
    FUN_06330890(*(long *)(unaff_x19 + 0xe0),&stack0x00000774,0);
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06383e44;
    uVar26 = uVar26 | in_stack_00000774 == 1;
    uVar16 = FUN_06330474(*(long *)(unaff_x19 + 0xe0),0);
    if (((uVar16 & 1) == 0) && (iStack0000000000000054 == 0)) {
      uVar10 = 0;
      uVar15 = 0;
      uVar26 = 0;
      in_stack_00000030._4_4_ = 0;
      *(undefined1 *)(unaff_x19 + 0x1a5) = 0;
    }
    bVar7 = uVar15 != 0;
    if (*(char *)(unaff_x19 + 0x1a4) != '\0') {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06383e44;
      bVar9 = FUN_063305c8(*(long *)(unaff_x19 + 0xe0),0);
      *(byte *)(unaff_x19 + 0x1a4) = bVar9 & 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_06383e44;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d0) + 0x1a5) = *(undefined1 *)(unaff_x19 + 0x1a5);
  iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar11 == 1) {
    lVar25 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar25 == 0) goto LAB_06383e44;
    if ((*(char *)(lVar25 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0639b278(lVar25,0);
    }
  }
  iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar11 == 1) {
    bVar9 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    bVar9 = 0;
  }
  if (bVar9 != 0 || (uVar26 != 0 || uVar10 != 0)) {
    if ((uVar26 == 0) ||
       (iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset(), iVar11 == 1)) {
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar16 = FUN_0636bc48(0x31,4,0);
      if ((uVar16 & 1) == 0) goto LAB_06382934;
      uVar14 = 0;
      uVar18 = 0x31;
    }
    else {
LAB_06382934:
      uVar18 = 0;
      uVar14 = 0x18;
    }
    FUN_066b5b18(&stack0x00000740,uVar18,0);
    FUN_066b5c2c(&stack0x00000740,uVar14,0);
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
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) != 0) goto LAB_06382a3c;
    }
  }
  else {
LAB_06382a3c:
    plVar19 = (long *)(unaff_x19 + 0x2b8);
    uVar18 = *(undefined8 *)System_Net_HttpWebRequest_AuthorizationState_var;
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) != 0) {
        lVar25 = *(long *)(unaff_x19 + 0x2e0);
        if (lVar25 == 0) goto LAB_06383e44;
        lVar22 = *(long *)(lVar25 + 0x30);
        uVar13 = FUN_06399b84(lVar25,0);
        if (lVar22 == 0) goto LAB_06383e44;
        if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_06383e54;
        plVar19 = (long *)(lVar22 + (long)(int)uVar13 * 8 + 0x20);
        if (*plVar19 == 0) goto LAB_06383e44;
        uVar18 = *(undefined8 *)(*plVar19 + 0x58);
      }
    }
    FUN_066b5c2c(&stack0x00000700,0,0);
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) == 0) goto LAB_06382b5c;
      lVar25 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar25 == 0) goto LAB_06383e44;
      uVar14 = FUN_06399b84(lVar25,0);
      uVar14 = FUN_06399c9c(lVar25,uVar14,0);
    }
    else {
LAB_06382b5c:
      uVar14 = FUN_0636cc8c(in_stack_00000888,0);
    }
    FUN_066b5b18(&stack0x00000700,uVar14,0);
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar20 & 1) == 0) goto LAB_06382c04;
      lVar25 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar25 == 0) goto LAB_06383e44;
      uVar14 = FUN_06399b84(lVar25,0);
      FUN_0639b320(lVar25,&stack0x00000340,uVar14,0);
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
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      if (*plVar19 == 0) goto LAB_06383e44;
      FUN_066e76f4();
    }
    if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&stack0x000008c8);
    FUN_066e3124();
  }
  if ((in_stack_00000070 & uVar26) == 1) {
    uVar18 = *(undefined8 *)UnityEngine_InputSystem_InputActionMap_BindingOverrideListJson_var;
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      lVar25 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar25 == 0) goto LAB_06383e44;
      lVar22 = *(long *)(lVar25 + 0x30);
      uVar13 = FUN_06399b60(lVar25,0);
      if (lVar22 == 0) goto LAB_06383e44;
      if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_06383e54;
      plVar19 = (long *)(lVar22 + (long)(int)uVar13 * 8 + 0x20);
      if (*plVar19 == 0) goto LAB_06383e44;
      uVar18 = *(undefined8 *)(*plVar19 + 0x58);
    }
    else {
      plVar19 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_066b5c2c(&stack0x000006c0,0,0);
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      lVar25 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar25 == 0) goto LAB_06383e44;
      uVar14 = FUN_06399b60(lVar25,0);
      uVar14 = FUN_06399c9c(lVar25,uVar14,0);
    }
    else {
      if (*(int *)(*(long *)UnityEngine_UIElements_FocusController_FocusedElement_var + 0xe0) == 0)
      {
        thunk_FUN_02f12b58();
      }
      uVar14 = FUN_063acd6c(0);
    }
    FUN_066b5b18(&stack0x000006c0,uVar14,0);
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      lVar25 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar25 == 0) goto LAB_06383e44;
      uVar14 = FUN_06399b60(lVar25,0);
      FUN_0639b320(lVar25,&stack0x000002a0,uVar14,0);
    }
    else {
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_06369f60(0,plVar19,&stack0x000006c0,0,1,0,1,uVar18,0);
    }
    if ((*plVar19 == 0) || (unaff_x28 == 0)) goto LAB_06383e44;
    FUN_066e76f4();
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (iVar11 == 1) {
      if (*plVar19 == 0) goto LAB_06383e44;
      FUN_066e76f4();
    }
    if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&stack0x000008c8);
    FUN_066e3124();
  }
  if (uVar26 != 0) {
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (in_stack_00000070 == 0) {
      if (iVar11 == 1) goto LAB_063831a8;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06383e44;
      FUN_063adf00(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar11 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar13 = FUN_06399b60(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06383e44;
      uVar20 = FUN_06399bbc(*(long *)(unaff_x19 + 0x2e0),0);
      lVar25 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar25 == 0) || (lVar22 = *(long *)(lVar25 + 0x30), lVar22 == 0)) goto LAB_06383e44;
      if (*(uint *)(lVar22 + 0x18) <= uVar13) {
LAB_06383e54:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar28 = *(long *)(unaff_x19 + 0x1b8);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar27 = *(undefined8 *)(lVar22 + (long)(int)uVar13 * 8 + 0x20);
      if ((uVar20 & 1) == 0) {
        if (in_stack_00000018._4_4_ == 0) {
          if (lVar28 == 0) goto LAB_06383e44;
          FUN_063ace04(lVar28,uVar18,uVar27,0);
        }
        else {
          if (lVar28 == 0) goto LAB_06383e44;
          FUN_063ace3c(lVar28,uVar18,uVar27,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
      }
      else {
        uVar13 = FUN_06399b84(lVar25,0);
        if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_06383e54;
        if (lVar28 == 0) goto LAB_06383e44;
        FUN_063ace3c(lVar28,uVar18,uVar27,*(undefined8 *)(lVar22 + (long)(int)uVar13 * 8 + 0x20),0);
      }
      puVar6 = PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var;
      if (in_stack_00000048 - 0xdcU < 0x1f) {
        lVar22 = *(long *)(unaff_x19 + 0x1b8);
        lVar25 = *(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar25 = *(long *)puVar6;
        }
        if (lVar22 == 0) goto LAB_06383e44;
        puVar23 = (undefined8 *)(lVar22 + 0xe0);
        *puVar23 = **(undefined8 **)(lVar25 + 0xb8);
        thunk_FUN_02f411dc(puVar23);
      }
    }
    else {
      lVar25 = *(long *)(unaff_x19 + 0x1b8);
      if (in_stack_00000018._4_4_ == 0) {
        if (lVar25 == 0) goto LAB_06383e44;
        FUN_063ace04(lVar25,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
        ;
      }
      else {
        if (lVar25 == 0) goto LAB_06383e44;
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
  bVar9 = *(byte *)(unaff_x20 + 0x1d8);
  iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
  if (iVar11 == 1) {
    lVar25 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar25 == 0) goto LAB_06383e44;
    if ((*(char *)(lVar25 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0639b278(lVar25,0);
    }
    FUN_0638490c();
  }
  else {
    uVar14 = 2;
    if (!bVar7) {
      uVar14 = 0;
    }
    uVar1 = 0;
    if (1 < in_stack_00000898) {
      uVar1 = uVar14;
    }
    iVar11 = 0;
    if ((!bVar7 && uVar10 == 0) && bVar9 != 0) {
      iVar11 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
    uVar20 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0);
    if ((uVar20 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06383e44;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar11 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (uVar10 != 0)) {
      if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar20 = FUN_0636ee28(0);
      if ((uVar20 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
        if (!bVar7 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
          if (iVar11 == 0) {
            iVar11 = 2;
          }
          else if (iVar11 == 3) {
            iVar11 = 1;
          }
        }
      }
    }
    if (in_stack_00000060._4_4_ == 0) {
      lVar25 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar25 = *(long *)(unaff_x19 + 0x208);
      if (lVar25 == 0) goto LAB_06383e44;
      FUN_063ae9bc(lVar25,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar25 == 0) goto LAB_06383e44;
    FUN_0633f170(lVar25,uVar1,0,0);
    FUN_0633f2a8(lVar25,iVar11,0);
    puVar6 = UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
    lVar28 = *(long *)(unaff_x19 + 0x100);
    lVar22 = *(long *)
              UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
    ;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar22 = *(long *)puVar6;
    }
    lVar24 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x10);
    if (lVar24 == 0) {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar22 = *(long *)
                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var
        ;
      }
      puVar6 = 
      UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction_var;
      uVar18 = **(undefined8 **)(lVar22 + 0xb8);
      lVar24 = thunk_FUN_02ef1808(*(undefined8 *)PlayFab_AddonModels_GetTwitchRequest_var);
      FUN_044474e4(lVar24,uVar18,
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                   ,0);
      plVar19 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      *plVar19 = lVar24;
      thunk_FUN_02f411dc(plVar19,lVar24);
    }
    if (lVar28 == 0) goto LAB_06383e44;
    lVar22 = FUN_03fd1368(lVar28,lVar24,
                          *(undefined8 *)
                           PlayFab_ExperimentationModels_GetTreatmentAssignmentRequest_var);
    if ((lVar22 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    uVar20 = FUN_066d1258(0);
    if ((uVar20 & 1) != 0) {
      FUN_0633fbe0(0,0,0,0x3f800000,lVar25,uVar14,0);
    }
    FUN_0634a5ec();
  }
  if (in_stack_00000040 == 0) goto LAB_06383e44;
  iVar11 = FUN_0669039c(in_stack_00000040,0);
  if ((iVar11 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar18 = FUN_066a2058(0);
    puVar6 = PTR_DAT_06d01e20;
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
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar6);
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
  if (uVar10 == 0) {
    if ((uVar26 & 1) == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar20 = FUN_066d0e58(0);
      uVar18 = *(undefined8 *)Unity_VisualScripting_FullSerializer_fsPropertyAttribute_var;
      if ((uVar20 & 1) == 0) {
        uVar27 = FUN_066ae9c8(0);
      }
      else {
        uVar27 = FUN_066ae9f0(0);
      }
      FUN_066a29a8(uVar18,uVar27,0);
    }
  }
  else {
    iVar11 = Unity_VisualScripting_Antlr3_Runtime_CommonTokenStream__Reset();
    if (((iVar11 != 1) || ((in_stack_00000068 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0'))
    {
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
      FUN_063ab144(*(long *)(unaff_x19 + 0x218),*(undefined8 *)(unaff_x19 + 0x288),
                   *(undefined8 *)(unaff_x19 + 0x2a8),0);
      FUN_0634a5ec();
    }
  }
  if (bVar7) {
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar25 = FUN_0638870c(0);
    if (lVar25 == 0) goto LAB_06383e44;
    uVar14 = *(undefined4 *)(lVar25 + 0x50);
    FUN_063a9ca4(uVar14,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)UnityEngine_InputSystem_InputAction_CallbackContext_var,0);
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06383e44;
    FUN_063a9e30(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar14,0);
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
  uVar13 = 0;
  if (bVar9 != 0) {
    uVar13 = 3;
  }
  if (uVar10 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06383e44;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar13 = 0;
      }
      else {
        if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar13 = FUN_0636ee28(0);
        uVar13 = uVar13 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
  FUN_0633f170(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar9,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06383e44;
  FUN_0633f2a8(*(long *)(unaff_x19 + 0x230),uVar13,0);
  FUN_0634a5ec();
  FUN_0634a5ec();
  uVar10 = FUN_0639174c(unaff_x26,0);
  uVar13 = FUN_0638de94(unaff_x26,0);
  if (((uVar10 & 1) != 0) && ((uVar13 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06383e44;
    FUN_0635787c(*(long *)(unaff_x19 + 0x260),unaff_x26,0x18,0);
    FUN_0634a5ec();
  }
  bVar5 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar9;
  if ((bStack0000000000000020 & bVar9) == 0) {
LAB_06383a2c:
    bVar7 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar7 = true;
  }
  else {
    uVar20 = FUN_0638d19c(unaff_x26,0);
    if ((uVar20 & 1) == 0) goto LAB_06383a2c;
    bVar7 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar3 = bVar7 ^ 1;
  if (bVar5 != 0 || lVar21 != 0) {
    bVar3 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar15 = 1;
  }
  else {
    uVar15 = FUN_0633054c(*(long *)(unaff_x19 + 0xe0),unaff_x26,0);
    uVar15 = ~uVar15 & 1;
  }
  plVar19 = (long *)(unaff_x19 + 0x278);
  plVar17 = (long *)(unaff_x19 + 0x288);
  if (iStack0000000000000050 == 0) {
    if (bVar9 == 0) {
      return;
    }
    FUN_063810fc();
  }
  else {
    uVar14 = FUN_066b576c(&stack0x00000890,0);
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
    FUN_0635e3e0(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar14,0,0);
    if (*(int *)(*(long *)UnityEngine_ExecuteInEditMode_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06369f60(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)PlayFab_ClientModels_GetTradeStatusResponse_var,0);
    if (bVar9 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06383e44;
      FUN_0635bc80(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar19,0,plVar17,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06381c40;
    }
    FUN_063810fc();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06383e44;
    FUN_0635bc80(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar19,bVar3,plVar17,
                 &stack0x00000670,unaff_x19 + 0x2c8,bVar7);
    FUN_0634a5ec();
  }
  lVar25 = *plVar19;
  if (bVar7 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06383e44;
    FUN_0635bdc8(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar15,0);
    FUN_0634a5ec();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_0634a5ec();
  }
  if ((bVar7 == false) && (((iStack0000000000000050 == 0 || (lVar21 != 0)) || (bVar5 != 0)))) {
    lVar21 = *plVar19;
    if (lVar21 == 0) goto LAB_06383e44;
    lVar22 = *(long *)(unaff_x19 + 0x298);
    if (lVar22 == 0) goto LAB_06383e44;
    in_stack_00000128 = *(undefined8 *)(lVar22 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar22 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar22 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar22 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar22 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar21 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar21 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar21 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar21 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar21 + 0x48);
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
      FUN_063b04cc(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar25,0);
      FUN_0634a5ec();
    }
  }
  if (((uVar13 | uVar10 ^ 0xffffffff) & 1) == 0) {
    FUN_0634a5ec();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar20 = FUN_06278cf8(*(long *)(unaff_x20 + 400),0);
    if ((uVar20 & 1) == 0) {
      return;
    }
    lVar21 = *plVar17;
    if (lVar21 != 0) {
      lVar25 = *(long *)(unaff_x20 + 400);
      if (lVar25 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar25 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar25 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar25 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar25 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar25 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar21 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar21 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar21 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar21 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar21 + 0x48);
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


