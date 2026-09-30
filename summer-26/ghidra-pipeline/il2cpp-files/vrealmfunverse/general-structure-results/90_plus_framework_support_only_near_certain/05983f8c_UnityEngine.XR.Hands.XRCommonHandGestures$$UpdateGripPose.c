/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures$$UpdateGripPose
ENTRY_POINT: 05983f8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5
*/


void UnityEngine_XR_Hands_XRCommonHandGestures__UpdateGripPose(void)

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
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  uint uVar37;
  int iVar38;
  long unaff_x19;
  long unaff_x20;
  char cVar39;
  long unaff_x21;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  char cVar44;
  uint uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  uint uStack0000000000000054;
  uint uStack0000000000000064;
  long in_stack_00000078;
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
  
                    /* try { // try from 05983f8c to 05a83fa7 has its CatchHandler @ 05983dac */
  uVar12 = FUN_059816e8();
                    /* catch() { ... } // from try @ 05983f88 with catch @ 05983fa4 */
                    /* try { // try from 05983fa8 to 05a83faf has its CatchHandler @ 05983fb8 */
  FUN_058fe238(&stack0x000008c0,uVar12,*(undefined4 *)(unaff_x20 + 0x160),
               *(undefined4 *)(unaff_x20 + 0x164),0);
                    /* try { // try from 05983fb0 to 05a83fbb has its CatchHandler @ 05983dac */
  if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05983fa8 with catch @ 05983fb8
                        */
  uVar26 = FUN_058fdbbc(*(long *)(unaff_x19 + 0xe8),0);
  FUN_0596c2d0(0,uVar26,&stack0x000008c0,0,0,1,*(undefined8 *)Method_System_Array_Reverse<object>__,
               0);
  if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
  uVar27 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
  if ((uVar27 & 1) != 0) {
    lVar34 = *(long *)(unaff_x19 + 0xe8);
    if ((((lVar34 == 0) || (*(long *)(lVar34 + 0x90) == 0)) ||
        (*(long *)(*(long *)(lVar34 + 0x90) + 0x30) == 0)) ||
       ((*(long *)(lVar34 + 0x30) == 0 || (FUN_0593812c(), *(long *)(unaff_x19 + 0xe8) == 0))))
    goto LAB_05986378;
    FUN_05920d64();
  }
  puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
  if (*(int *)(unaff_x20 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar10 = FUN_0598353c();
  lVar34 = *(long *)puVar6;
  *(byte *)(unaff_x19 + 0x140) = bVar10 & 1;
  if (*(int *)(lVar34 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar27 = FUN_059834ac();
  if ((uVar27 & 1) != 0) {
                    /* try { // try from 05984098 to 05a8413b has its CatchHandler @ 05984098
                       catch() { ... } // from try @ 05984098 with catch @ 05984098
                       catch() { ... } // from try @ 05984160 with catch @ 05984098
                       catch() { ... } // from try @ 059841b4 with catch @ 05984098
                       catch() { ... } // from try @ 059841e0 with catch @ 05984098
                       catch() { ... } // from try @ 05984204 with catch @ 05984098 */
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollerVisibility>_set_defaultValue__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0591c4b0();
    FUN_05920d64();
    goto LAB_059840d8;
  }
  uVar13 = FUN_059282d8();
  uVar27 = UnityEngine_XR_Hands_XRCommonHandGestures_PinchValueUpdatedEventArgs__TryGetPinchValue();
  if (((uVar27 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar13 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_06312d60 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar27 = FUN_05c3f0a0(0);
    if ((uVar27 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = FUN_0598161c();
    }
  }
  else {
    uVar14 = 1;
  }
  uVar15 = FUN_05983924();
  FUN_05986424();
  bVar10 = FUN_05967808();
  bVar11 = FUN_05983764();
  bVar10 = (bVar11 ^ 1) & bVar10;
  uVar16 = FUN_059815f0();
  bVar9 = false;
  uVar25 = 0;
  if (((bVar10 & 1) != 0) && ((uVar16 & 1) == 0)) {
    uVar25 = in_stack_0000098c;
    if (in_stack_0000098c == 0) {
      bVar9 = true;
    }
    else {
      if (in_stack_0000098c != 1) {
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar26 = thunk_FUN_02b79644();
        FUN_04cf6044(uVar26,0);
        uVar31 = thunk_FUN_02ba3594(Method_System_Array_Sort<Camera>__);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar26,uVar31);
      }
      bVar9 = false;
    }
  }
  FUN_05928964();
  if (in_stack_000009d0 == 0) goto LAB_05986378;
  FUN_059282c8();
  auVar48 = FUN_059864e0();
  uVar27 = auVar48._0_8_;
  lVar34 = *(long *)(unaff_x19 + 0x2a0);
  bVar11 = auVar48[2];
  if (lVar34 != 0) {
    *(byte *)(lVar34 + 0x14) = bVar10 & 1;
    *(undefined4 *)(lVar34 + 0x10) = in_stack_00000988;
    *(byte *)(lVar34 + 0x17) = bVar11 & 1;
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
        uVar28 = FUN_0472eaf4(&stack0x000008a0,*(undefined8 *)puVar6);
        if ((uVar28 & 1) == 0) goto LAB_05984314;
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
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar17 = uVar17 & 1;
  }
  if (in_stack_000009d0 == 0) goto LAB_05986378;
  if (*(char *)(in_stack_000009d0 + 0x10) == '\0') {
    uVar18 = 0;
    uVar19 = 0;
    if (uVar17 == 0) goto LAB_0598437c;
LAB_0598436c:
    cVar39 = *(char *)(unaff_x20 + 0x192);
  }
  else {
    uVar18 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar19 = uVar18;
    if (uVar17 != 0) goto LAB_0598436c;
LAB_0598437c:
    uVar18 = uVar19;
    cVar39 = '\0';
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uStack0000000000000054 = 0;
  }
  else {
    uStack0000000000000054 = FUN_0595e6d4(unaff_x19 + 0x310,0);
  }
  uVar28 = FUN_059282c8();
  if ((uVar28 & 1) == 0) {
    uStack0000000000000064 = FUN_059282d8();
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar27 & 1) == 0)) {
    cVar44 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar44 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05986378;
  uVar19 = FUN_059c1cb4();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05986378;
  uVar20 = FUN_059a99b0(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05986378;
  bVar8 = cVar39 != '\0';
  uVar21 = FUN_0595c330(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar44 == '\0' && !bVar8) {
    cVar44 = '\0';
    uVar22 = 0;
  }
  else {
    iVar24 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar22 = FUN_05983644();
    uVar22 = (uint)(iVar24 == 2) | uVar22 ^ 1;
  }
  uVar22 = (uint)(byte)(bVar11 | auVar48[1]) | uVar13 | uVar22 | uStack0000000000000064;
  if ((uVar16 & uVar22 & 1) != 0) {
    uVar22 = bVar11 & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar44 == '\0') {
    if (((uint)(cVar39 == '\0') & (uStack0000000000000064 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
      bVar5 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    lVar34 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar34 == 0) goto LAB_05986378;
    iVar24 = auVar48._12_4_ + -1;
    iVar38 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar38 = 300;
    }
    if (499 < iVar24) {
      iVar24 = 500;
    }
    if ((uVar27 & 1) != 0) {
      iVar38 = iVar24;
    }
    *(int *)(lVar34 + 0x10) = iVar38;
    if (iVar38 < 500) {
      *(undefined1 *)(lVar34 + 0xd8) = 0;
      bVar5 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar5 = true;
    }
  }
  uVar37 = (uint)(cVar4 != '\0');
  uVar45 = uVar22 | uVar37;
  uVar23 = FUN_05986760();
  if ((uVar16 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar3 = uVar25;
  if ((bVar11 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(unaff_x20 + 0x1e0) != '\x01' || ((uint)(bVar5 || bVar8) & (uVar45 ^ 1)) != 0)) {
    uVar3 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
  uVar14 = (uVar14 | uVar15 | uVar23) & (uVar13 ^ 1);
  uVar28 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
  uVar15 = uVar14 | uVar3;
  iVar24 = FUN_05c9729c(0);
  puVar6 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar24 == 0x15) {
    uVar23 = uVar15;
    if ((uVar28 & 1) == 0) {
      uVar23 = uVar14;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar23 = uVar15;
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
    uVar23 = uVar15;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar23 = uVar3 | uVar23;
  }
  uVar28 = FUN_05c972ec(0);
  uVar14 = uVar3 | uVar23;
  uVar15 = uVar14;
  if ((uVar28 & 1) == 0) {
    uVar15 = uVar23;
  }
  FUN_05c72cdc(&stack0x00000940,0,0);
  FUN_05c72cf8(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05986378;
  plVar30 = (long *)(unaff_x19 + 0x228);
  FUN_059c4ca0(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (unaff_x21 == 0) goto LAB_05986378;
    iVar24 = thunk_FUN_05c42700(unaff_x21,0);
    puVar7 = PTR_DAT_0631ec68;
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&stack0x000003d0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar28 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0), (uVar28 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05986378;
    uVar23 = uVar14 & iVar24 != 1;
    puVar35 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar26 = FUN_058572fc(&stack0x000005f0,0);
      *puVar35 = uVar26;
      thunk_FUN_02bb0e9c(puVar35,uVar26);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar28 = FUN_05cac718(&stack0x000005c0,&stack0x00000590,0);
      if ((uVar28 & 1) != 0) {
        FUN_058573cc(puVar35,&stack0x00000560,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar26 = FUN_058572fc(&stack0x00000530,0);
      *puVar1 = uVar26;
      thunk_FUN_02bb0e9c(puVar1,uVar26);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar28 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
      if ((uVar28 & 1) != 0) {
        FUN_058573cc(puVar1,&stack0x000004a0,0);
      }
    }
    if (uVar23 != 0) {
      FUN_05986958();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05986378;
    bVar11 = (byte)uVar23 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar11;
    if ((uVar15 & 1) == 0) {
      uVar26 = *puVar35;
    }
    else {
      if (*plVar30 == 0) goto LAB_05986378;
      uVar26 = FUN_059c48ac(*plVar30,0);
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar26;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
    lVar34 = 0x248;
    if ((uVar14 & 1) == 0) {
      lVar34 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar34);
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0317392c(*(long *)(unaff_x20 + 0x230),&stack0x00000868,
                      *(undefined8 *)
                       Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__),
        in_stack_00000868 == 0)) || (plVar29 = (long *)FUN_0597fbe8(), plVar29 == (long *)0x0))
    goto LAB_05986378;
    if (*plVar29 != *(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar29);
    }
    lVar34 = *plVar30;
    if (lVar34 != plVar29[0x45]) {
      if (lVar34 == 0) goto LAB_05986378;
      FUN_059c4858(lVar34,0);
      *plVar30 = plVar29[0x45];
      thunk_FUN_02bb0e9c(plVar30);
      lVar34 = *plVar30;
    }
    if (lVar34 == 0) goto LAB_05986378;
    uVar26 = FUN_059c48ac(lVar34,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar26;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230,uVar26);
    *(long *)(unaff_x19 + 0x240) = plVar29[0x48];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
    *(long *)(unaff_x19 + 600) = plVar29[0x4b];
    thunk_FUN_02bb0e9c(unaff_x19 + 600);
    *(long *)(unaff_x19 + 0x260) = plVar29[0x4c];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x260);
    uVar14 = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar13 & 1) == 0) {
    if (*plVar30 == 0) goto LAB_05986378;
    uVar26 = FUN_059c48ac(*plVar30,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar26);
  }
  cVar39 = *(char *)(unaff_x20 + 0x191);
  FUN_0591c4b0();
  iVar24 = FUN_05c9729c(0);
  if (iVar24 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000078 == 0) goto LAB_05986378;
    FUN_05cbdf2c(in_stack_00000078,&stack0x00000470,&stack0x00000440,0);
  }
  puVar6 = Method_System_Array_Reverse<int>__;
  lVar40 = *(long *)(unaff_x19 + 0x108);
  lVar34 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar34 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar34 = *(long *)puVar6;
  }
  puVar35 = *(undefined8 **)(lVar34 + 0xb8);
  lVar41 = puVar35[1];
  if (lVar41 == 0) {
    if (*(int *)(lVar34 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar35 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    }
    uVar26 = *puVar35;
    lVar41 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar41,uVar26,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar30 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar30 = lVar41;
    thunk_FUN_02bb0e9c(plVar30,lVar41);
  }
  if (lVar40 == 0) goto LAB_05986378;
  lVar34 = FUN_037a6b94(lVar40,lVar41,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((uVar19 & 1) != 0) {
    FUN_05920d64();
  }
  if ((uVar20 & 1) != 0) {
    FUN_05920d64();
  }
  uVar15 = (uint)(byte)(cVar39 != '\0' | auVar48[3]) & (uVar13 ^ 1);
  if ((uVar22 & 1) == 0 && uVar37 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar8) {
      bVar11 = auVar48[0] & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    bVar11 = 0;
  }
  lVar40 = *(long *)(unaff_x19 + 0xe8);
  uVar14 = uVar14 & bVar11 != 0;
  if (lVar40 != 0) {
    uVar19 = FUN_059282d8();
    uVar28 = FUN_058fe174(lVar40,uVar19 & 1,0);
    if ((uVar28 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar45 = in_stack_00000864 == 1 | uVar45;
      uVar28 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar28 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar14 = 0;
        uVar15 = 0;
        uVar45 = 0;
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
  iVar24 = auVar48._8_4_;
  if ((uVar16 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    lVar40 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar40 == 0) goto LAB_05986378;
    if ((*(char *)(lVar40 + 0x15) != '\0') &&
       ((iVar24 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar40,0);
    }
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar11 != 0 || ((uVar45 & 1) != 0 || uVar14 != 0)) {
    if (((uVar16 | uVar45 ^ 0xffffffff) & 1) == 0) {
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
    lVar40 = *(long *)(unaff_x19 + 0x268);
    if ((lVar40 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(lVar40 + 0x58),&stack0x00000410,0);
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
      plVar30 = (long *)(unaff_x19 + 0x278);
      puVar35 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar26 = *puVar35;
      if (bVar8) {
        lVar40 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar40 == 0) goto LAB_05986378;
        uVar12 = FUN_059a158c(lVar40,0);
        uVar12 = FUN_059a1698(lVar40,uVar12,0);
        FUN_05c726ac(&stack0x000007f0,uVar12,0);
        lVar40 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar40 == 0) goto LAB_05986378;
        uVar12 = FUN_059a158c(lVar40,0);
        FUN_059a327c(lVar40,&stack0x00000390,uVar12,0);
      }
      else {
        uVar12 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar12,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar30,&stack0x000007f0,0,1,1,uVar26,0);
      }
      if ((*plVar30 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar30 + 0x58),&stack0x00000360,0);
      puVar6 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar40 = *(long *)puVar6;
      if (*(int *)(lVar40 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar40 = *(long *)puVar6;
      }
      if (**(long **)(lVar40 + 0xb8) == 0) goto LAB_05986378;
      plVar29 = (long *)(**(long **)(lVar40 + 0xb8) + 0x10);
      *plVar29 = in_stack_00000078;
      thunk_FUN_02bb0e9c(plVar29,in_stack_00000078);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar6 + 0xb8),in_stack_00000988,0);
      if ((uVar16 & 1) != 0) {
        if (*plVar30 == 0) goto LAB_05986378;
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
      lVar40 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar40 == 0) goto LAB_05986378;
      lVar41 = *(long *)(lVar40 + 0x30);
      uVar19 = FUN_059a158c(lVar40,0);
      if (lVar41 == 0) goto LAB_05986378;
      if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_05986388;
      plVar30 = (long *)(lVar41 + (long)(int)uVar19 * 8 + 0x20);
      if (*plVar30 == 0) goto LAB_05986378;
      bVar8 = true;
      puVar35 = (undefined8 *)(*plVar30 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar6 = Method_System_Array_Resize<object>__;
  if ((uVar45 & 1) != 0) {
    if ((uVar27 & 0x10000) == 0) {
      if ((uVar16 & 1) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar40 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar40 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar40 = *(long *)puVar6;
        if ((uVar16 & 1) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar40 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar40 == 0) goto LAB_05986378;
        lVar41 = *(long *)(lVar40 + 0x30);
        uVar19 = FUN_059a1568(lVar40,0);
        if (lVar41 == 0) goto LAB_05986378;
        if (*(uint *)(lVar41 + 0x18) <= uVar19) goto LAB_05986388;
        plVar30 = (long *)(lVar41 + (long)(int)uVar19 * 8 + 0x20);
        if (*plVar30 == 0) goto LAB_05986378;
        puVar35 = (undefined8 *)(*plVar30 + 0x58);
      }
      else {
        if ((uVar16 & 1) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar30 = (long *)(unaff_x19 + 0x270);
        puVar35 = (undefined8 *)(*(long *)(lVar40 + 0xb8) + 0x18);
      }
      uVar26 = *puVar35;
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar12,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar30,&stack0x000007b0,0,1,1,uVar26,0);
      }
      else {
        lVar40 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar40 == 0) goto LAB_05986378;
        uVar12 = FUN_059a1568(lVar40,0);
        uVar12 = FUN_059a1698(lVar40,uVar12,0);
        FUN_05c726ac(&stack0x000007b0,uVar12,0);
        lVar40 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar40 == 0) goto LAB_05986378;
        uVar12 = FUN_059a1568(lVar40,0);
        FUN_059a327c(lVar40,&stack0x000002f0,uVar12,0);
      }
      if ((*plVar30 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar30 + 0x58),&stack0x000002c0,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar30 == 0) goto LAB_05986378;
        FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
      FUN_05cb2938(in_stack_00000078,0);
      if ((uVar16 & 1) == 0) {
        lVar40 = *(long *)(unaff_x19 + 0x150);
        if (bVar9) {
          if (lVar40 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar40,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar40 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar40,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar19 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar28 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar41 = *(long *)(unaff_x19 + 0x150);
      uVar26 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar40 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar28 & 1) == 0) {
        if (bVar9) {
          if ((lVar40 == 0) || (lVar40 = *(long *)(lVar40 + 0x30), lVar40 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar40 + 0x18) <= uVar19) goto LAB_05986388;
          if (lVar41 == 0) goto LAB_05986378;
          uVar33 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar31 = *(undefined8 *)(lVar40 + (long)(int)uVar19 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar40 == 0) || (lVar40 = *(long *)(lVar40 + 0x30), lVar40 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar40 + 0x18) <= uVar19) goto LAB_05986388;
        if (lVar41 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar41,uVar26,*(undefined8 *)(lVar40 + (long)(int)uVar19 * 8 + 0x20),0);
      }
      else {
        if ((lVar40 == 0) || (lVar42 = *(long *)(lVar40 + 0x30), lVar42 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar42 + 0x18) <= uVar19) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar31 = *(undefined8 *)(lVar42 + (long)(int)uVar19 * 8 + 0x20);
        uVar19 = FUN_059a158c(lVar40,0);
        if (*(uint *)(lVar42 + 0x18) <= uVar19) goto LAB_05986388;
        if (lVar41 == 0) goto LAB_05986378;
        uVar33 = *(undefined8 *)(lVar42 + (long)(int)uVar19 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar41,uVar26,uVar31,uVar33,0);
      }
      puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < iVar24 - 0xfbU) {
        lVar40 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar40 == 0) goto LAB_05986378;
        puVar35 = (undefined8 *)(lVar40 + 0xb8);
        *puVar35 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        thunk_FUN_02bb0e9c(puVar35);
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
  uVar28 = FUN_057f0fbc(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar28 & 1) != 0) {
    FUN_05920d64();
  }
  cVar39 = *(char *)(unaff_x20 + 0x1e0);
  if ((uVar16 & 1) == 0) {
    uVar12 = 2;
    if ((uVar15 & 1) == 0) {
      uVar12 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000998) {
      uVar2 = uVar12;
    }
    iVar24 = 0;
    if ((uVar14 == 0 && (uVar15 & 1) == 0) && cVar39 != '\0') {
      iVar24 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
    uVar28 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar28 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar24 = 0;
      }
    }
    uVar19 = 0;
    if (1 < in_stack_00000998) {
      uVar19 = uVar14;
    }
    if (uVar19 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar28 = FUN_0596ade4(0);
      if ((uVar28 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar15 & 1) == 0) {
          if (iVar24 == 0) {
            iVar24 = 2;
          }
          else if (iVar24 == 3) {
            iVar24 = 1;
          }
        }
      }
    }
    if (uVar25 == 0) {
      lVar40 = *(long *)(unaff_x19 + 0x198);
      if (lVar40 == 0) goto LAB_05986378;
    }
    else {
      lVar40 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar40 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar40,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar40,uVar2,0,0);
    FUN_05914d8c(lVar40,iVar24,0);
    puVar6 = Method_System_Array_Reverse<int>__;
    lVar42 = *(long *)(unaff_x19 + 0x108);
    lVar41 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar41 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar41 = *(long *)puVar6;
    }
    puVar35 = *(undefined8 **)(lVar41 + 0xb8);
    lVar43 = puVar35[2];
    if (lVar43 == 0) {
      if (*(int *)(lVar41 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar35 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar26 = *puVar35;
      lVar43 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar43,uVar26,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar30 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar30 = lVar43;
      thunk_FUN_02bb0e9c(plVar30,lVar43);
    }
    if (lVar42 == 0) goto LAB_05986378;
    lVar41 = FUN_037a6b94(lVar42,lVar43,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar41 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x21 == 0) goto LAB_05986378;
      iVar24 = FUN_05c407c0(unaff_x21,0);
      if (iVar24 == 4) goto LAB_059859c0;
      uVar12 = 1;
    }
    else {
LAB_059859c0:
      uVar12 = 0;
    }
    uVar28 = FUN_05c97ba0(0);
    if ((uVar28 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar40,uVar12,0);
    }
    FUN_05920d64();
  }
  else {
    lVar40 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar40 == 0) goto LAB_05986378;
    if ((*(char *)(lVar40 + 0x15) != '\0') &&
       ((iVar24 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar40,0);
    }
    FUN_05986f8c();
  }
  if (unaff_x21 == 0) goto LAB_05986378;
  iVar24 = FUN_05c407c0(unaff_x21,0);
  if ((iVar24 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar26 = FUN_05c580a0(0);
    puVar6 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar28 = FUN_05c8c45c(uVar26,0,0);
    if ((uVar28 & 1) == 0) {
      uVar28 = FUN_0317392c(unaff_x21,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar28 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar26 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar6);
        }
        uVar28 = FUN_05c8c45c(uVar26,0,0);
        if ((uVar28 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (uVar14 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar45 & 1) == 0) {
      uVar28 = FUN_05c977c4(0);
      uVar26 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar28 & 1) == 0) {
        uVar31 = FUN_05c69330(0);
      }
      else {
        uVar31 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar26,uVar31,0);
    }
  }
  else if ((((uVar16 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar27 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uVar15 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar40 = FUN_05993404(0);
    if (lVar40 == 0) goto LAB_05986378;
    uVar12 = *(undefined4 *)(lVar40 + 0x48);
    FUN_059b478c(uVar12,&stack0x00000720,&stack0x0000071c,0);
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
                 *(undefined8 *)(unaff_x19 + 0x280),uVar12,0);
    FUN_05920d64();
  }
  if ((uVar27 & 0x100000000) != 0) {
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
  if ((uVar21 & 1) != 0) {
    FUN_05920d64();
  }
  uVar25 = 0;
  if (cVar39 != '\0') {
    uVar25 = 3;
  }
  uVar15 = (uint)(cVar39 == '\0');
  if (in_stack_00000998 < 2) {
    uVar15 = 1;
  }
  if (uVar14 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar25 = 0, 1 < in_stack_00000998)
       ) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar25 = FUN_0596ade4(0);
      uVar25 = uVar25 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),((uVar15 | uVar13) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar25,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar27 = FUN_059285dc();
  uVar28 = FUN_059283a4();
  if (((uVar27 & 1) != 0) && ((uVar28 & 1) != 0)) {
    lVar40 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar40 == 0) goto LAB_05986378;
    FUN_05934854(lVar40);
    FUN_05920d64();
  }
  bVar9 = cVar39 == '\0';
  bVar8 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar9 || ((uVar18 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar32 = FUN_05928964(), (uVar32 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
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
    bVar11 = lVar34 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar13 = uVar13 ^ 1;
  }
  plVar30 = (long *)(unaff_x19 + 0x230);
  plVar29 = (long *)(unaff_x19 + 0x240);
  if (uVar17 == 0) {
    if (cVar39 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar12 = FUN_05c7228c(&stack0x00000990,0);
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
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,in_stack_00000990,in_stack_00000994,uVar12,0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar39 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar30,0,plVar29,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar30,bVar11,plVar29,
                 &stack0x00000760,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05920d64();
  }
  lVar40 = *plVar30;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar13 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar10 & 1) == 0) && (((uVar17 == 0 || (lVar34 != 0)) || (bVar8 && !bVar9)))) {
    lVar34 = *plVar30;
    if (lVar34 == 0) goto LAB_05986378;
    uVar33 = *(undefined8 *)(lVar34 + 0x30);
    uVar31 = *(undefined8 *)(lVar34 + 0x28);
    uVar47 = *(undefined8 *)(lVar34 + 0x40);
    uVar46 = *(undefined8 *)(lVar34 + 0x38);
    uVar26 = *(undefined8 *)(lVar34 + 0x48);
    lVar34 = *(long *)(unaff_x19 + 600);
    if (lVar34 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar34 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar34 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar34 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar34 + 0x38);
    uVar36 = *(undefined8 *)(lVar34 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar36;
    in_stack_00000160 = uVar31;
    in_stack_00000168 = uVar33;
    in_stack_00000170 = uVar46;
    in_stack_00000178 = uVar47;
    in_stack_00000180 = uVar26;
    uVar32 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar32 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar40,0);
      FUN_05920d64();
    }
  }
  if (((uVar27 & 1) != 0) && ((uVar28 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar27 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar27 & 1) == 0) {
      return;
    }
    lVar34 = *plVar29;
    if (lVar34 != 0) {
      uVar33 = *(undefined8 *)(lVar34 + 0x30);
      uVar31 = *(undefined8 *)(lVar34 + 0x28);
      uVar47 = *(undefined8 *)(lVar34 + 0x40);
      uVar46 = *(undefined8 *)(lVar34 + 0x38);
      uVar26 = *(undefined8 *)(lVar34 + 0x48);
      lVar34 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar34 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar34 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar34 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar34 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar34 + 0x50);
        uVar36 = *(undefined8 *)(lVar34 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar36;
        in_stack_000000c0 = uVar31;
        in_stack_000000c8 = uVar33;
        in_stack_000000d0 = uVar46;
        in_stack_000000d8 = uVar47;
        in_stack_000000e0 = uVar26;
        uVar27 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar27 & 1) != 0) {
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


