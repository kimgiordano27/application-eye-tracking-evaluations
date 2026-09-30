/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures.GripPoseUpdatedEventArgs$$.ctor
ENTRY_POINT: 0598411c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5
*/


void UnityEngine_XR_Hands_XRCommonHandGestures_GripPoseUpdatedEventArgs___ctor(ulong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  long unaff_x19;
  long unaff_x20;
  char cVar35;
  long unaff_x21;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  char cVar40;
  uint uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  uint uStack0000000000000054;
  uint uStack0000000000000064;
  uint uStack0000000000000074;
  long in_stack_00000078;
  uint uStack0000000000000084;
  uint in_stack_00000088;
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
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
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
  long in_stack_000003e0;
  undefined8 in_stack_000003f0;
  undefined4 in_stack_0000071c;
  long in_stack_00000758;
  undefined4 in_stack_0000076c;
  int in_stack_00000864;
  long in_stack_00000868;
  undefined4 in_stack_00000988;
  uint in_stack_0000098c;
  undefined4 in_stack_00000990;
  undefined4 in_stack_00000994;
  int in_stack_00000998;
  undefined4 in_stack_0000099c;
  undefined8 in_stack_000009a0;
  undefined4 in_stack_000009a8;
  undefined4 in_stack_000009ac;
  undefined8 in_stack_000009b0;
  undefined8 in_stack_000009b8;
  undefined4 in_stack_000009c0;
  long in_stack_000009d0;
  
  if (((param_1 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (in_stack_00000088 & 1) != 0)) {
                    /* try { // try from 0598413c to 05a84143 has its CatchHandler @ 059841c0 */
    if (*(int *)(*(long *)PTR_DAT_06312d60 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar23 = FUN_05c3f0a0(0);
    if ((uVar23 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_0598161c();
    }
  }
  else {
    uVar12 = 1;
  }
  uVar13 = FUN_05983924();
  FUN_05986424();
  bVar10 = FUN_05967808();
  bVar11 = FUN_05983764();
  bVar10 = (bVar11 ^ 1) & bVar10;
  uStack0000000000000084 = FUN_059815f0();
  uStack0000000000000074 = 0;
  bVar9 = false;
  if (((bVar10 & 1) != 0) && ((uStack0000000000000084 & 1) == 0)) {
    uStack0000000000000074 = in_stack_0000098c;
    if (in_stack_0000098c == 0) {
      bVar9 = true;
    }
    else {
      if (in_stack_0000098c != 1) {
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar27 = thunk_FUN_02b79644();
        FUN_04cf6044(uVar27,0);
        uVar29 = thunk_FUN_02ba3594(Method_System_Array_Sort<Camera>__);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar27,uVar29);
      }
      bVar9 = false;
    }
  }
  FUN_05928964();
  if (in_stack_000009d0 == 0) goto LAB_05986378;
  FUN_059282c8();
  auVar44 = FUN_059864e0();
  uVar23 = auVar44._0_8_;
  lVar24 = *(long *)(unaff_x19 + 0x2a0);
  bVar11 = auVar44[2];
  if (lVar24 != 0) {
    *(byte *)(lVar24 + 0x14) = bVar10 & 1;
    *(undefined4 *)(lVar24 + 0x10) = in_stack_00000988;
    *(byte *)(lVar24 + 0x17) = bVar11 & 1;
    FUN_059a2d6c();
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController__set_twistDeltaRotationAction
              (*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    if (*(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_05986378;
      FUN_037a6fdc(&stack0x000003d0,*(long *)(unaff_x19 + 0x108),
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<FocusExitEventArgs>__ctor__);
      puVar6 = Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_Invoke__;
      do {
        uVar25 = FUN_0472eaf4(&stack0x000008a0,*(undefined8 *)puVar6);
        if ((uVar25 & 1) == 0) goto LAB_05984314;
        if (in_stack_000003e0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      } while (*(int *)(in_stack_000003e0 + 0x10) - 0xe7U < 0xfffffff5);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_059a2ed0(*(long *)(unaff_x19 + 0x2a0),0);
LAB_05984314:
      FUN_0472eaf0(&stack0x000008a0,
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_AddListener__);
    }
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar14 = uVar14 & 1;
  }
  if (in_stack_000009d0 == 0) goto LAB_05986378;
  if (*(char *)(in_stack_000009d0 + 0x10) == '\0') {
    uVar15 = 0;
    uVar16 = 0;
    if (uVar14 == 0) goto LAB_0598437c;
LAB_0598436c:
    cVar35 = *(char *)(unaff_x20 + 0x192);
  }
  else {
    uVar15 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar16 = uVar15;
    if (uVar14 != 0) goto LAB_0598436c;
LAB_0598437c:
    uVar15 = uVar16;
    cVar35 = '\0';
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uStack0000000000000054 = 0;
  }
  else {
    uStack0000000000000054 = FUN_0595e6d4(unaff_x19 + 0x310,0);
  }
  uVar25 = FUN_059282c8();
  if ((uVar25 & 1) == 0) {
    uStack0000000000000064 = FUN_059282d8();
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar23 & 1) == 0)) {
    cVar40 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar40 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05986378;
  uVar16 = FUN_059c1cb4();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05986378;
  uVar17 = FUN_059a99b0(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05986378;
  bVar8 = cVar35 != '\0';
  uVar18 = FUN_0595c330(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar40 == '\0' && !bVar8) {
    cVar40 = '\0';
    uVar19 = 0;
  }
  else {
    iVar21 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar19 = FUN_05983644();
    uVar19 = (uint)(iVar21 == 2) | uVar19 ^ 1;
  }
  uVar19 = (uint)(byte)(bVar11 | auVar44[1]) | in_stack_00000088 | uVar19 | uStack0000000000000064;
  if ((uStack0000000000000084 & uVar19 & 1) != 0) {
    uVar19 = bVar11 & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar40 == '\0') {
    if (((uint)(cVar35 == '\0') & (uStack0000000000000064 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
      bVar5 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    lVar24 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar24 == 0) goto LAB_05986378;
    iVar21 = auVar44._12_4_ + -1;
    iVar34 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar34 = 300;
    }
    if (499 < iVar21) {
      iVar21 = 500;
    }
    if ((uVar23 & 1) != 0) {
      iVar34 = iVar21;
    }
    *(int *)(lVar24 + 0x10) = iVar34;
    if (iVar34 < 500) {
      *(undefined1 *)(lVar24 + 0xd8) = 0;
      bVar5 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar5 = true;
    }
  }
  uVar33 = (uint)(cVar4 != '\0');
  uVar41 = uVar19 | uVar33;
  uVar20 = FUN_05986760();
  if ((uStack0000000000000084 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar3 = uStack0000000000000074;
  if ((bVar11 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(unaff_x20 + 0x1e0) != '\x01' || ((uint)(bVar5 || bVar8) & (uVar41 ^ 1)) != 0)) {
    uVar3 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
  uVar12 = (uVar12 | uVar13 | uVar20) & (in_stack_00000088 ^ 1);
  uVar25 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
  uVar13 = uVar12 | uVar3;
  iVar21 = FUN_05c9729c(0);
  puVar6 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar21 == 0x15) {
    uVar20 = uVar13;
    if ((uVar25 & 1) == 0) {
      uVar20 = uVar12;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar20 = uVar13;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05857e14(&stack0x000003d0,0);
  if ((float)in_stack_000003f0 == 1.0) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05857e14(&stack0x000003d0,0);
    if ((float)((ulong)in_stack_000003f0 >> 0x20) != 1.0) goto LAB_05984690;
  }
  else {
LAB_05984690:
    uVar20 = uVar13;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar20 = uVar3 | uVar20;
  }
  uVar25 = FUN_05c972ec(0);
  uVar12 = uVar3 | uVar20;
  uVar13 = uVar12;
  if ((uVar25 & 1) == 0) {
    uVar13 = uVar20;
  }
  FUN_05c72cdc(&stack0x00000940,0,0);
  FUN_05c72cf8(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05986378;
  plVar28 = (long *)(unaff_x19 + 0x228);
  FUN_059c4ca0(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (unaff_x21 == 0) goto LAB_05986378;
    iVar21 = thunk_FUN_05c42700(unaff_x21,0);
    puVar7 = PTR_DAT_0631ec68;
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&stack0x000003d0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar25 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0), (uVar25 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05986378;
    uVar20 = uVar12 & iVar21 != 1;
    puVar31 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar27 = FUN_058572fc(&stack0x000005f0,0);
      *puVar31 = uVar27;
      thunk_FUN_02bb0e9c(puVar31,uVar27);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar25 = FUN_05cac718(&stack0x000005c0,&stack0x00000590,0);
      if ((uVar25 & 1) != 0) {
        FUN_058573cc(puVar31,&stack0x00000560,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar27 = FUN_058572fc(&stack0x00000530,0);
      *puVar1 = uVar27;
      thunk_FUN_02bb0e9c(puVar1,uVar27);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar25 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
      if ((uVar25 & 1) != 0) {
        FUN_058573cc(puVar1,&stack0x000004a0,0);
      }
    }
    if (uVar20 != 0) {
      FUN_05986958();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05986378;
    bVar11 = (byte)uVar20 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar11;
    if ((uVar13 & 1) == 0) {
      uVar27 = *puVar31;
    }
    else {
      if (*plVar28 == 0) goto LAB_05986378;
      uVar27 = FUN_059c48ac(*plVar28,0);
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar27;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
    lVar24 = 0x248;
    if ((uVar12 & 1) == 0) {
      lVar24 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar24);
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0317392c(*(long *)(unaff_x20 + 0x230),&stack0x00000868,
                      *(undefined8 *)
                       Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__),
        in_stack_00000868 == 0)) || (plVar26 = (long *)FUN_0597fbe8(), plVar26 == (long *)0x0))
    goto LAB_05986378;
    if (*plVar26 != *(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar26);
    }
    lVar24 = *plVar28;
    if (lVar24 != plVar26[0x45]) {
      if (lVar24 == 0) goto LAB_05986378;
      FUN_059c4858(lVar24,0);
      *plVar28 = plVar26[0x45];
      thunk_FUN_02bb0e9c(plVar28);
      lVar24 = *plVar28;
    }
    if (lVar24 == 0) goto LAB_05986378;
    uVar27 = FUN_059c48ac(lVar24,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar27;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230,uVar27);
    *(long *)(unaff_x19 + 0x240) = plVar26[0x48];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
    *(long *)(unaff_x19 + 600) = plVar26[0x4b];
    thunk_FUN_02bb0e9c(unaff_x19 + 600);
    *(long *)(unaff_x19 + 0x260) = plVar26[0x4c];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x260);
    uVar12 = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000088 & 1) == 0) {
    if (*plVar28 == 0) goto LAB_05986378;
    uVar27 = FUN_059c48ac(*plVar28,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar27;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar27);
  }
  cVar35 = *(char *)(unaff_x20 + 0x191);
  FUN_0591c4b0();
  iVar21 = FUN_05c9729c(0);
  if (iVar21 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000078 == 0) goto LAB_05986378;
    FUN_05cbdf2c(in_stack_00000078,&stack0x00000470,&stack0x00000440,0);
  }
  puVar6 = Method_System_Array_Reverse<int>__;
  lVar36 = *(long *)(unaff_x19 + 0x108);
  lVar24 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar24 = *(long *)puVar6;
  }
  puVar31 = *(undefined8 **)(lVar24 + 0xb8);
  lVar37 = puVar31[1];
  if (lVar37 == 0) {
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar31 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    }
    uVar27 = *puVar31;
    lVar37 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar37,uVar27,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar28 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar28 = lVar37;
    thunk_FUN_02bb0e9c(plVar28,lVar37);
  }
  if (lVar36 == 0) goto LAB_05986378;
  lVar24 = FUN_037a6b94(lVar36,lVar37,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((uVar16 & 1) != 0) {
    FUN_05920d64();
  }
  if ((uVar17 & 1) != 0) {
    FUN_05920d64();
  }
  uVar13 = (uint)(byte)(cVar35 != '\0' | auVar44[3]) & (in_stack_00000088 ^ 1);
  if ((uVar19 & 1) == 0 && uVar33 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar8) {
      bVar11 = auVar44[0] & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    bVar11 = 0;
  }
  lVar36 = *(long *)(unaff_x19 + 0xe8);
  uVar12 = uVar12 & bVar11 != 0;
  uVar16 = uStack0000000000000084;
  if (lVar36 != 0) {
    uVar16 = FUN_059282d8();
    uVar25 = FUN_058fe174(lVar36,uVar16 & 1,0);
    uVar16 = uStack0000000000000084;
    if ((uVar25 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar41 = in_stack_00000864 == 1 | uVar41;
      uVar25 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar25 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar12 = 0;
        uVar13 = 0;
        uVar41 = 0;
        uStack0000000000000054 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        bVar11 = FUN_058fdc40(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar11 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar21 = auVar44._8_4_;
  if ((uVar16 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    lVar36 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar36 == 0) goto LAB_05986378;
    if ((*(char *)(lVar36 + 0x15) != '\0') &&
       ((iVar21 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar36,0);
    }
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar11 != 0 || ((uVar41 & 1) != 0 || uVar12 != 0)) {
    if (((uVar16 | uVar41 ^ 0xffffffff) & 1) == 0) {
      FUN_05c726ac(&stack0x00000830,0,0);
      FUN_059816e8();
    }
    else {
      FUN_05c726ac(&stack0x00000830,0x31,0);
    }
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    }
    FUN_0596c2d0(0,(long *)(unaff_x19 + 0x268),&stack0x00000830,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
                 ,0);
    lVar36 = *(long *)(unaff_x19 + 0x268);
    if ((lVar36 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(lVar36 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
    FUN_05cb2938(in_stack_00000078,0);
  }
  if ((uVar16 & 1) == 0) {
    if ((bVar10 & 1) != 0) {
LAB_05984fa8:
      bVar8 = false;
      plVar28 = (long *)(unaff_x19 + 0x278);
      puVar31 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar27 = *puVar31;
      if (bVar8) {
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05986378;
        uVar22 = FUN_059a158c(lVar36,0);
        uVar22 = FUN_059a1698(lVar36,uVar22,0);
        FUN_05c726ac(&stack0x000007f0,uVar22,0);
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05986378;
        uVar22 = FUN_059a158c(lVar36,0);
        FUN_059a327c(lVar36,&stack0x00000390,uVar22,0);
      }
      else {
        uVar22 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar22,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar28,&stack0x000007f0,0,1,1,uVar27,0);
      }
      if ((*plVar28 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar28 + 0x58),&stack0x00000360,0);
      puVar6 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar36 = *(long *)puVar6;
      if (*(int *)(lVar36 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar36 = *(long *)puVar6;
      }
      if (**(long **)(lVar36 + 0xb8) == 0) goto LAB_05986378;
      plVar26 = (long *)(**(long **)(lVar36 + 0xb8) + 0x10);
      *plVar26 = in_stack_00000078;
      thunk_FUN_02bb0e9c(plVar26,in_stack_00000078);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar6 + 0xb8),in_stack_00000988,0);
      if ((uVar16 & 1) != 0) {
        if (*plVar28 == 0) goto LAB_05986378;
        FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)Method_System_Array_Reverse<Vector2>__,
                     &stack0x00000330,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
      FUN_05cb2938(in_stack_00000078,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    bVar11 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar10 | bVar11) & 1) != 0) {
      if ((bVar11 & 1) == 0) goto LAB_05984fa8;
      lVar36 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar36 == 0) goto LAB_05986378;
      lVar37 = *(long *)(lVar36 + 0x30);
      uVar17 = FUN_059a158c(lVar36,0);
      if (lVar37 == 0) goto LAB_05986378;
      if (*(uint *)(lVar37 + 0x18) <= uVar17) goto LAB_05986388;
      plVar28 = (long *)(lVar37 + (long)(int)uVar17 * 8 + 0x20);
      if (*plVar28 == 0) goto LAB_05986378;
      bVar8 = true;
      puVar31 = (undefined8 *)(*plVar28 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar6 = Method_System_Array_Resize<object>__;
  if ((uVar41 & 1) != 0) {
    if ((uVar23 & 0x10000) == 0) {
      if ((uVar16 & 1) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar36 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar36 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar36 = *(long *)puVar6;
        if ((uVar16 & 1) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05986378;
        lVar37 = *(long *)(lVar36 + 0x30);
        uVar17 = FUN_059a1568(lVar36,0);
        if (lVar37 == 0) goto LAB_05986378;
        if (*(uint *)(lVar37 + 0x18) <= uVar17) goto LAB_05986388;
        plVar28 = (long *)(lVar37 + (long)(int)uVar17 * 8 + 0x20);
        if (*plVar28 == 0) goto LAB_05986378;
        puVar31 = (undefined8 *)(*plVar28 + 0x58);
      }
      else {
        if ((uVar16 & 1) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar28 = (long *)(unaff_x19 + 0x270);
        puVar31 = (undefined8 *)(*(long *)(lVar36 + 0xb8) + 0x18);
      }
      uVar27 = *puVar31;
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar22 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar22,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar28,&stack0x000007b0,0,1,1,uVar27,0);
      }
      else {
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05986378;
        uVar22 = FUN_059a1568(lVar36,0);
        uVar22 = FUN_059a1698(lVar36,uVar22,0);
        FUN_05c726ac(&stack0x000007b0,uVar22,0);
        lVar36 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar36 == 0) goto LAB_05986378;
        uVar22 = FUN_059a1568(lVar36,0);
        FUN_059a327c(lVar36,&stack0x000002f0,uVar22,0);
      }
      if ((*plVar28 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar28 + 0x58),&stack0x000002c0,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar28 == 0) goto LAB_05986378;
        FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
      FUN_05cb2938(in_stack_00000078,0);
      if ((uVar16 & 1) == 0) {
        lVar36 = *(long *)(unaff_x19 + 0x150);
        if (bVar9) {
          if (lVar36 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar36,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar36 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar36,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar17 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar25 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar37 = *(long *)(unaff_x19 + 0x150);
      uVar27 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar36 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar25 & 1) == 0) {
        if (bVar9) {
          if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x30), lVar36 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar36 + 0x18) <= uVar17) goto LAB_05986388;
          if (lVar37 == 0) goto LAB_05986378;
          uVar30 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar29 = *(undefined8 *)(lVar36 + (long)(int)uVar17 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x30), lVar36 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar36 + 0x18) <= uVar17) goto LAB_05986388;
        if (lVar37 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar37,uVar27,*(undefined8 *)(lVar36 + (long)(int)uVar17 * 8 + 0x20),0);
      }
      else {
        if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x30), lVar38 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar38 + 0x18) <= uVar17) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar29 = *(undefined8 *)(lVar38 + (long)(int)uVar17 * 8 + 0x20);
        uVar17 = FUN_059a158c(lVar36,0);
        if (*(uint *)(lVar38 + 0x18) <= uVar17) goto LAB_05986388;
        if (lVar37 == 0) goto LAB_05986378;
        uVar30 = *(undefined8 *)(lVar38 + (long)(int)uVar17 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar37,uVar27,uVar29,uVar30,0);
      }
      puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < iVar21 - 0xfbU) {
        lVar36 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar36 == 0) goto LAB_05986378;
        puVar31 = (undefined8 *)(lVar36 + 0xb8);
        *puVar31 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        thunk_FUN_02bb0e9c(puVar31);
      }
    }
LAB_05985640:
    FUN_05920d64();
  }
LAB_05985650:
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x158),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uStack0000000000000054 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05986378;
    FUN_059b24c4(*(long *)(unaff_x19 + 0x310),&stack0x000009d0,&stack0x00000770,&stack0x0000076c,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x330,&stack0x00000770,in_stack_0000076c,1,0,
                 *(undefined8 *)Method_System_Array_Sort<float>__,0);
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05986378;
    FUN_059b2460(*(long *)(unaff_x19 + 0x310),&stack0x00000760,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
  uVar25 = FUN_057f0fbc(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar25 & 1) != 0) {
    FUN_05920d64();
  }
  cVar35 = *(char *)(unaff_x20 + 0x1e0);
  if ((uVar16 & 1) == 0) {
    uVar22 = 2;
    if ((uVar13 & 1) == 0) {
      uVar22 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000998) {
      uVar2 = uVar22;
    }
    iVar21 = 0;
    if ((uVar12 == 0 && (uVar13 & 1) == 0) && cVar35 != '\0') {
      iVar21 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
    uVar25 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar25 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar21 = 0;
      }
    }
    uVar17 = 0;
    if (1 < in_stack_00000998) {
      uVar17 = uVar12;
    }
    if (uVar17 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar25 = FUN_0596ade4(0);
      if ((uVar25 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar13 & 1) == 0) {
          if (iVar21 == 0) {
            iVar21 = 2;
          }
          else if (iVar21 == 3) {
            iVar21 = 1;
          }
        }
      }
    }
    if (uStack0000000000000074 == 0) {
      lVar36 = *(long *)(unaff_x19 + 0x198);
      if (lVar36 == 0) goto LAB_05986378;
    }
    else {
      lVar36 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar36 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar36,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar36,uVar2,0,0);
    FUN_05914d8c(lVar36,iVar21,0);
    puVar6 = Method_System_Array_Reverse<int>__;
    lVar38 = *(long *)(unaff_x19 + 0x108);
    lVar37 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar37 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar37 = *(long *)puVar6;
    }
    puVar31 = *(undefined8 **)(lVar37 + 0xb8);
    lVar39 = puVar31[2];
    if (lVar39 == 0) {
      if (*(int *)(lVar37 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar31 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar27 = *puVar31;
      lVar39 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar39,uVar27,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar28 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar28 = lVar39;
      thunk_FUN_02bb0e9c(plVar28,lVar39);
      uVar16 = uStack0000000000000084;
    }
    if (lVar38 == 0) goto LAB_05986378;
    lVar37 = FUN_037a6b94(lVar38,lVar39,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar37 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x21 == 0) goto LAB_05986378;
      iVar21 = FUN_05c407c0(unaff_x21,0);
      if (iVar21 == 4) goto LAB_059859c0;
      uVar22 = 1;
    }
    else {
LAB_059859c0:
      uVar22 = 0;
    }
    uVar25 = FUN_05c97ba0(0);
    if ((uVar25 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar36,uVar22,0);
    }
    FUN_05920d64();
  }
  else {
    lVar36 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar36 == 0) goto LAB_05986378;
    if ((*(char *)(lVar36 + 0x15) != '\0') &&
       ((iVar21 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar36,0);
    }
    FUN_05986f8c();
  }
  if (unaff_x21 == 0) goto LAB_05986378;
  iVar21 = FUN_05c407c0(unaff_x21,0);
  if ((iVar21 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar27 = FUN_05c580a0(0);
    puVar6 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar25 = FUN_05c8c45c(uVar27,0,0);
    if ((uVar25 & 1) == 0) {
      uVar25 = FUN_0317392c(unaff_x21,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar25 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar27 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar6);
        }
        uVar25 = FUN_05c8c45c(uVar27,0,0);
        if ((uVar25 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (uVar12 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar41 & 1) == 0) {
      uVar25 = FUN_05c977c4(0);
      uVar27 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar25 & 1) == 0) {
        uVar29 = FUN_05c69330(0);
      }
      else {
        uVar29 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar27,uVar29,0);
    }
  }
  else if ((((uVar16 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar23 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar36 = FUN_05993404(0);
    if (lVar36 == 0) goto LAB_05986378;
    uVar22 = *(undefined4 *)(lVar36 + 0x48);
    FUN_059b478c(uVar22,&stack0x00000720,&stack0x0000071c,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x280,&stack0x00000720,in_stack_0000071c,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
                 ,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05986378;
    FUN_059b482c(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar22,0);
    FUN_05920d64();
  }
  if ((uVar23 & 0x100000000) != 0) {
    FUN_05c726ac(&stack0x000006e0,0x2e,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x288,&stack0x000006e0,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                 ,0);
    FUN_05c726ac(&stack0x000006a0,0,0);
    FUN_0596c2d0(0,unaff_x19 + 0x290,&stack0x000006a0,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
                 ,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0593b4dc(in_stack_00000078);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05986378;
    FUN_05939f18(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05920d64();
  }
  if ((uVar18 & 1) != 0) {
    FUN_05920d64();
  }
  uVar13 = 0;
  if (cVar35 != '\0') {
    uVar13 = 3;
  }
  uVar16 = (uint)(cVar35 == '\0');
  if (in_stack_00000998 < 2) {
    uVar16 = 1;
  }
  if (uVar12 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar13 = 0, 1 < in_stack_00000998)
       ) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_0596ade4(0);
      uVar13 = uVar13 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),((uVar16 | in_stack_00000088) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar13,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar12 = FUN_059285dc();
  uVar23 = FUN_059283a4();
  if (((uVar12 & 1) != 0) && ((uVar23 & 1) != 0)) {
    lVar36 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar36 == 0) goto LAB_05986378;
    FUN_05934854(lVar36);
    FUN_05920d64();
  }
  bVar9 = cVar35 == '\0';
  bVar8 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar9 || ((uVar15 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar25 = FUN_05928964(), (uVar25 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar10 = 0;
joined_r0x05985f3c:
    if (!bVar8 || bVar9) goto LAB_05985f40;
LAB_05985f60:
    bVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar10 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar10 = 1;
    if (bVar8 && !bVar9) goto LAB_05985f60;
LAB_05985f40:
    bVar11 = lVar24 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar13 = uVar13 ^ 1;
  }
  plVar28 = (long *)(unaff_x19 + 0x230);
  plVar26 = (long *)(unaff_x19 + 0x240);
  if (uVar14 == 0) {
    if (cVar35 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uStack0000000000000084 = uVar12;
    uVar22 = FUN_05c7228c(&stack0x00000990,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__
                        );
    }
    in_stack_00000190 = CONCAT44(in_stack_00000994,in_stack_00000990);
    in_stack_00000198 = CONCAT44(in_stack_0000099c,in_stack_00000998);
    in_stack_000001a0 = in_stack_000009a0;
    in_stack_000001a8 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
    in_stack_000001b0 = in_stack_000009b0;
    in_stack_000001b8 = in_stack_000009b8;
    in_stack_000001c0 = in_stack_000009c0;
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,in_stack_00000990,in_stack_00000994,uVar22,0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar35 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar28,0,plVar26,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar28,bVar11,plVar26,
                 &stack0x00000760,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05920d64();
    uVar12 = uStack0000000000000084;
  }
  lVar36 = *plVar28;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar13 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar10 & 1) == 0) && (((uVar14 == 0 || (lVar24 != 0)) || (bVar8 && !bVar9)))) {
    lVar24 = *plVar28;
    if (lVar24 == 0) goto LAB_05986378;
    uVar30 = *(undefined8 *)(lVar24 + 0x30);
    uVar29 = *(undefined8 *)(lVar24 + 0x28);
    uVar43 = *(undefined8 *)(lVar24 + 0x40);
    uVar42 = *(undefined8 *)(lVar24 + 0x38);
    uVar27 = *(undefined8 *)(lVar24 + 0x48);
    lVar24 = *(long *)(unaff_x19 + 600);
    if (lVar24 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar24 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar24 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar24 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar24 + 0x38);
    uVar32 = *(undefined8 *)(lVar24 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar32;
    in_stack_00000160 = uVar29;
    in_stack_00000168 = uVar30;
    in_stack_00000170 = uVar42;
    in_stack_00000178 = uVar43;
    in_stack_00000180 = uVar27;
    uVar25 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar25 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar36,0);
      FUN_05920d64();
    }
  }
  if (((uVar12 & 1) != 0) && ((uVar23 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar23 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar23 & 1) == 0) {
      return;
    }
    lVar24 = *plVar26;
    if (lVar24 != 0) {
      uVar30 = *(undefined8 *)(lVar24 + 0x30);
      uVar29 = *(undefined8 *)(lVar24 + 0x28);
      uVar43 = *(undefined8 *)(lVar24 + 0x40);
      uVar42 = *(undefined8 *)(lVar24 + 0x38);
      uVar27 = *(undefined8 *)(lVar24 + 0x48);
      lVar24 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar24 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar24 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar24 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar24 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar24 + 0x50);
        uVar32 = *(undefined8 *)(lVar24 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar32;
        in_stack_000000c0 = uVar29;
        in_stack_000000c8 = uVar30;
        in_stack_000000d0 = uVar42;
        in_stack_000000d8 = uVar43;
        in_stack_000000e0 = uVar27;
        uVar23 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar23 & 1) != 0) {
          return;
        }
        if (*(long *)(unaff_x20 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 0x1f0) != 0) {
            FUN_059b5afc(*(long *)(unaff_x19 + 0x1f0),*(undefined8 *)(unaff_x19 + 0x240),
                         *(undefined8 *)(unaff_x19 + 0x260),0);
            if (*(long *)(unaff_x19 + 0x1f0) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0xcd) = 1;
LAB_059840d8:
              FUN_05920d64();
              return;
            }
          }
        }
      }
    }
  }
LAB_05986378:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


