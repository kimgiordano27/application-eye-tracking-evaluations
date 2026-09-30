/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures$$UpdateGraspValue
ENTRY_POINT: 05983da0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5
*/


void UnityEngine_XR_Hands_XRCommonHandGestures__UpdateGraspValue(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
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
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong uVar34;
  long *plVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  uint uVar42;
  long lVar43;
  int iVar44;
  long unaff_x19;
  char cVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  char cVar50;
  uint uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  uint uStack0000000000000054;
  uint uStack0000000000000064;
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
  ulong in_stack_000000f0;
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
  ulong in_stack_00000190;
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
  
  lVar26 = FUN_0590661c();
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
                    /* try { // try from 05983dac to 05a83e8b has its CatchHandler @ 05983dac
                       catch() { ... } // from try @ 05983dac with catch @ 05983dac
                       catch() { ... } // from try @ 05983f3c with catch @ 05983dac
                       catch() { ... } // from try @ 05983f60 with catch @ 05983dac
                       catch() { ... } // from try @ 05983f8c with catch @ 05983dac
                       catch() { ... } // from try @ 05983fb0 with catch @ 05983dac */
  lVar27 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
  uVar28 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
  uVar29 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__
                       );
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
  lVar30 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_System_ValueTuple<NavigationDeviceType,_EventModifiers>__ctor__);
  if ((*(long *)(unaff_x19 + 0x298) == 0) ||
     (FUN_059af50c(*(long *)(unaff_x19 + 0x298),lVar26,lVar27,uVar28,0), lVar27 == 0))
  goto LAB_05986378;
  uVar3 = *(undefined4 *)(lVar27 + 0x128);
  uVar52 = *(undefined8 *)(lVar27 + 0x100);
  uVar38 = *(ulong *)(lVar27 + 0xf8);
  uVar55 = *(undefined8 *)(lVar27 + 0x110);
  uVar53 = *(undefined8 *)(lVar27 + 0x108);
  uVar57 = *(undefined8 *)(lVar27 + 0x120);
  uVar41 = *(undefined8 *)(lVar27 + 0x118);
  lVar47 = *(long *)(lVar27 + 0xd8);
  if (lVar26 == 0) goto LAB_05986378;
  lVar31 = FUN_05928c6c(lVar26,0);
  lVar48 = *(long *)(unaff_x19 + 0xe8);
  if (lVar48 != 0) {
                    /* try { // try from 05983e8c to 05a83ebb has its CatchHandler @ 05983f6c */
    uVar13 = FUN_059282d8(lVar27,0);
    uVar32 = FUN_058fe174(lVar48,uVar13 & 1,0);
    if ((uVar32 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar32 = thunk_FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
      if ((uVar32 & 1) != 0) {
        uVar14 = *(undefined4 *)(lVar27 + 0x160);
        uVar4 = *(undefined4 *)(lVar27 + 0x164);
        if (*(int *)(*(long *)Method_Pico_Platform_Task<SendInvitesResult>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_058fe1f4(&stack0x00000900,uVar14,uVar4,0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        uVar33 = FUN_058fdbb4(*(long *)(unaff_x19 + 0xe8),0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
        }
        FUN_0596c2d0(0,uVar33,&stack0x00000900,0,0,1,
                     *(undefined8 *)Method_System_Array_Sort<string>__,0);
        uVar14 = FUN_059816e8();
        FUN_058fe238(&stack0x000008c0,uVar14,*(undefined4 *)(lVar27 + 0x160),
                     *(undefined4 *)(lVar27 + 0x164),0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        uVar33 = FUN_058fdbbc(*(long *)(unaff_x19 + 0xe8),0);
        FUN_0596c2d0(0,uVar33,&stack0x000008c0,0,0,1,
                     *(undefined8 *)Method_System_Array_Reverse<object>__,0);
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar32 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
      if ((uVar32 & 1) != 0) {
        lVar48 = *(long *)(unaff_x19 + 0xe8);
        if ((((lVar48 == 0) || (*(long *)(lVar48 + 0x90) == 0)) ||
            (lVar43 = *(long *)(*(long *)(lVar48 + 0x90) + 0x30), lVar43 == 0)) ||
           ((*(long *)(lVar48 + 0x30) == 0 ||
            (FUN_0593812c(*(long *)(lVar48 + 0x30),lVar27,*(undefined4 *)(lVar43 + 0x18),0),
            *(long *)(unaff_x19 + 0xe8) == 0)))) goto LAB_05986378;
        FUN_05920d64();
      }
    }
  }
  puVar7 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
  if (*(int *)(lVar27 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar11 = FUN_0598353c();
  lVar48 = *(long *)puVar7;
  *(byte *)(unaff_x19 + 0x140) = bVar11 & 1;
  if (*(int *)(lVar48 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar32 = FUN_059834ac(lVar27);
  if ((uVar32 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollerVisibility>_set_defaultValue__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0591c4b0();
    FUN_05920d64();
    goto LAB_059840d8;
  }
  uVar13 = FUN_059282d8(lVar27,0);
  uVar32 = UnityEngine_XR_Hands_XRCommonHandGestures_PinchValueUpdatedEventArgs__TryGetPinchValue();
  if (((uVar32 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar13 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_06312d60 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar32 = FUN_05c3f0a0(0);
    if ((uVar32 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_0598161c();
    }
  }
  else {
    uVar15 = 1;
  }
  uVar33 = FUN_05983924();
  FUN_05986424(uVar33,lVar27);
  bVar11 = FUN_05967808();
  bVar12 = FUN_05983764();
  bVar11 = (bVar12 ^ 1) & bVar11;
  uVar16 = FUN_059815f0();
  bVar10 = false;
  uVar25 = 0;
  if (((bVar11 & 1) != 0) && ((uVar16 & 1) == 0)) {
    uVar25 = in_stack_0000098c;
    if (in_stack_0000098c == 0) {
      bVar10 = true;
    }
    else {
      if (in_stack_0000098c != 1) {
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar28 = thunk_FUN_02b79644();
        FUN_04cf6044(uVar28,0);
        uVar29 = thunk_FUN_02ba3594(Method_System_Array_Sort<Camera>__);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar28,uVar29);
      }
      bVar10 = false;
    }
  }
  FUN_05928964(lVar27,0);
  if (lVar30 == 0) goto LAB_05986378;
  FUN_059282c8(lVar27,0);
  auVar58 = FUN_059864e0();
  uVar32 = auVar58._0_8_;
  lVar48 = *(long *)(unaff_x19 + 0x2a0);
  bVar12 = auVar58[2];
  if (lVar48 != 0) {
    *(byte *)(lVar48 + 0x14) = bVar11 & 1;
    *(undefined4 *)(lVar48 + 0x10) = in_stack_00000988;
    *(byte *)(lVar48 + 0x17) = bVar12 & 1;
    FUN_059a2d6c(lVar48,uVar28,0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController__set_twistDeltaRotationAction
              (*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    if (*(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_05986378;
      FUN_037a6fdc(&stack0x000003d0,*(long *)(unaff_x19 + 0x108),
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<FocusExitEventArgs>__ctor__);
      puVar7 = Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_Invoke__;
      do {
        uVar34 = FUN_0472eaf4(&stack0x000008a0,*(undefined8 *)puVar7);
        if ((uVar34 & 1) == 0) goto LAB_05984314;
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
  if (*(char *)(lVar27 + 0x1ac) == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar17 = uVar17 & 1;
  }
  if (lVar30 == 0) goto LAB_05986378;
  if (*(char *)(lVar30 + 0x10) == '\0') {
    uVar18 = 0;
    uVar19 = 0;
    if (uVar17 == 0) goto LAB_0598437c;
LAB_0598436c:
    cVar45 = *(char *)(lVar27 + 0x192);
  }
  else {
    uVar18 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar19 = uVar18;
    if (uVar17 != 0) goto LAB_0598436c;
LAB_0598437c:
    uVar18 = uVar19;
    cVar45 = '\0';
  }
  if (*(char *)(lVar27 + 0x1ac) == '\0') {
    uStack0000000000000054 = 0;
  }
  else {
    uStack0000000000000054 = FUN_0595e6d4(unaff_x19 + 0x310,0);
  }
  uVar34 = FUN_059282c8(lVar27,0);
  if ((uVar34 & 1) == 0) {
    uStack0000000000000064 = FUN_059282d8(lVar27,0);
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(lVar27 + 400) == '\0') && ((uVar32 & 1) == 0)) {
    cVar50 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar50 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05986378;
  uVar19 = FUN_059c1cb4(*(long *)(unaff_x19 + 0x168),lVar26,lVar27,uVar28,uVar29,0);
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05986378;
  uVar20 = FUN_059a99b0(*(long *)(unaff_x19 + 0x170),lVar26,lVar27,uVar28,uVar29,0);
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05986378;
  bVar9 = cVar45 != '\0';
  uVar21 = FUN_0595c330(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar50 == '\0' && !bVar9) {
    cVar50 = '\0';
    uVar22 = 0;
  }
  else {
    iVar24 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar22 = FUN_05983644(lVar27);
    uVar22 = (uint)(iVar24 == 2) | uVar22 ^ 1;
  }
  uVar22 = (uint)(byte)(bVar12 | auVar58[1]) | uVar13 | uVar22 | uStack0000000000000064;
  if ((uVar16 & uVar22 & 1) != 0) {
    uVar22 = bVar12 & 1;
  }
  cVar5 = *(char *)(unaff_x19 + 0x140);
  if (cVar50 == '\0') {
    if (((uint)(cVar45 == '\0') & (uStack0000000000000064 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
      bVar6 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    lVar26 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar26 == 0) goto LAB_05986378;
    iVar24 = auVar58._12_4_ + -1;
    iVar44 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar44 = 300;
    }
    if (499 < iVar24) {
      iVar24 = 500;
    }
    if ((uVar32 & 1) != 0) {
      iVar44 = iVar24;
    }
    *(int *)(lVar26 + 0x10) = iVar44;
    if (iVar44 < 500) {
      *(undefined1 *)(lVar26 + 0xd8) = 0;
      bVar6 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar6 = true;
    }
  }
  uVar42 = (uint)(cVar5 != '\0');
  uVar51 = uVar22 | uVar42;
  uVar23 = FUN_05986760();
  if ((uVar16 & 1) == 0) {
    bVar12 = 0;
  }
  else {
    bVar12 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar2 = uVar25;
  if ((bVar12 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(lVar27 + 0x1e0) != '\x01' || ((uint)(bVar6 || bVar9) & (uVar51 ^ 1)) != 0)) {
    uVar2 = 1;
  }
  if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05986378;
  uVar15 = (uVar15 | (uint)uVar33 | uVar23) & (uVar13 ^ 1);
  uVar34 = FUN_057ec748(*(long *)(lVar27 + 0x1a0),0);
  uVar23 = uVar15 | uVar2;
  iVar24 = FUN_05c9729c(0);
  puVar7 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar24 == 0x15) {
    uVar46 = uVar23;
    if ((uVar34 & 1) == 0) {
      uVar46 = uVar15;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar46 = uVar23;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05857e14(&stack0x000003d0,0);
  if ((float)in_stack_000003f0 == 1.0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05857e14(&stack0x000003d0,0);
    if ((float)((ulong)in_stack_000003f0 >> 0x20) != 1.0) goto LAB_05984690;
  }
  else {
LAB_05984690:
    uVar46 = uVar23;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar46 = uVar2 | uVar46;
  }
  uVar34 = FUN_05c972ec(0);
  uVar15 = uVar2 | uVar46;
  uVar23 = uVar15;
  if ((uVar34 & 1) == 0) {
    uVar23 = uVar46;
  }
  FUN_05c72cdc(&stack0x00000940,0,0);
  FUN_05c72cf8(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05986378;
  plVar36 = (long *)(unaff_x19 + 0x228);
  FUN_059c4ca0(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(lVar27 + 0xe8) == 0) {
    if (lVar47 == 0) goto LAB_05986378;
    iVar24 = thunk_FUN_05c42700(lVar47,0);
    puVar8 = PTR_DAT_0631ec68;
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&stack0x000003d0,2,0);
    if ((*(long *)(lVar27 + 0x1a0) == 0) ||
       ((uVar34 = FUN_057ec748(*(long *)(lVar27 + 0x1a0),0), (uVar34 & 1) != 0 &&
        (*(long *)(lVar27 + 0x1a0) == 0)))) goto LAB_05986378;
    uVar2 = uVar15 & iVar24 != 1;
    puVar39 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar28 = FUN_058572fc(&stack0x000005f0,0);
      *puVar39 = uVar28;
      thunk_FUN_02bb0e9c(puVar39,uVar28);
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar34 = FUN_05cac718(&stack0x000005c0,&stack0x00000590,0);
      if ((uVar34 & 1) != 0) {
        FUN_058573cc(puVar39,&stack0x00000560,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar28 = FUN_058572fc(&stack0x00000530,0);
      *puVar1 = uVar28;
      thunk_FUN_02bb0e9c(puVar1,uVar28);
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar34 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
      if ((uVar34 & 1) != 0) {
        FUN_058573cc(puVar1,&stack0x000004a0,0);
      }
    }
    if (uVar2 != 0) {
      FUN_05986958();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05986378;
    bVar12 = (byte)uVar2 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar12;
    if ((uVar23 & 1) == 0) {
      uVar28 = *puVar39;
    }
    else {
      if (*plVar36 == 0) goto LAB_05986378;
      uVar28 = FUN_059c48ac(*plVar36,0);
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar28;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
    lVar26 = 0x248;
    if ((uVar15 & 1) == 0) {
      lVar26 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar26);
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  }
  else {
    if (((*(long *)(lVar27 + 0x230) == 0) ||
        (FUN_0317392c(*(long *)(lVar27 + 0x230),&stack0x00000868,
                      *(undefined8 *)
                       Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__),
        in_stack_00000868 == 0)) || (plVar35 = (long *)FUN_0597fbe8(), plVar35 == (long *)0x0))
    goto LAB_05986378;
    if (*plVar35 != *(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar35);
    }
    lVar26 = *plVar36;
    if (lVar26 != plVar35[0x45]) {
      if (lVar26 == 0) goto LAB_05986378;
      FUN_059c4858(lVar26,0);
      *plVar36 = plVar35[0x45];
      thunk_FUN_02bb0e9c(plVar36);
      lVar26 = *plVar36;
    }
    if (lVar26 == 0) goto LAB_05986378;
    uVar28 = FUN_059c48ac(lVar26,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar28;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230,uVar28);
    *(long *)(unaff_x19 + 0x240) = plVar35[0x48];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
    *(long *)(unaff_x19 + 600) = plVar35[0x4b];
    thunk_FUN_02bb0e9c(unaff_x19 + 600);
    *(long *)(unaff_x19 + 0x260) = plVar35[0x4c];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x260);
    uVar15 = uVar2;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar13 & 1) == 0) {
    if (*plVar36 == 0) goto LAB_05986378;
    uVar28 = FUN_059c48ac(*plVar36,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar28;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar28);
  }
  cVar45 = *(char *)(lVar27 + 0x191);
  FUN_0591c4b0();
  iVar24 = FUN_05c9729c(0);
  if (iVar24 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (lVar31 == 0) goto LAB_05986378;
    FUN_05cbdf2c(lVar31,&stack0x00000470,&stack0x00000440,0);
  }
  puVar7 = Method_System_Array_Reverse<int>__;
  lVar30 = *(long *)(unaff_x19 + 0x108);
  lVar26 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar26 = *(long *)puVar7;
  }
  puVar39 = *(undefined8 **)(lVar26 + 0xb8);
  lVar48 = puVar39[1];
  if (lVar48 == 0) {
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar39 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar28 = *puVar39;
    lVar48 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar48,uVar28,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar36 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar36 = lVar48;
    thunk_FUN_02bb0e9c(plVar36,lVar48);
  }
  if (lVar30 == 0) goto LAB_05986378;
  lVar26 = FUN_037a6b94(lVar30,lVar48,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((uVar19 & 1) != 0) {
    FUN_05920d64();
  }
  if ((uVar20 & 1) != 0) {
    FUN_05920d64();
  }
  uVar19 = (uint)(byte)(cVar45 != '\0' | auVar58[3]) & (uVar13 ^ 1);
  if ((uVar22 & 1) == 0 && uVar42 == 0) {
    if (*(char *)(lVar27 + 400) == '\0' && !bVar9) {
      bVar12 = auVar58[0] & 1;
    }
    else {
      bVar12 = 1;
    }
  }
  else {
    bVar12 = 0;
  }
  lVar30 = *(long *)(unaff_x19 + 0xe8);
  uVar15 = uVar15 & bVar12 != 0;
  if (lVar30 != 0) {
    uVar20 = FUN_059282d8(lVar27,0);
    uVar34 = FUN_058fe174(lVar30,uVar20 & 1,0);
    if ((uVar34 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar51 = in_stack_00000864 == 1 | uVar51;
      uVar34 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar34 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar15 = 0;
        uVar19 = 0;
        uVar51 = 0;
        uStack0000000000000054 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        bVar12 = FUN_058fdc40(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar12 & 1;
      }
    }
  }
  if (*(long *)(lVar27 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(lVar27 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar24 = auVar58._8_4_;
  if ((uVar16 & 1) == 0) {
    bVar12 = 0;
  }
  else {
    lVar30 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar30 == 0) goto LAB_05986378;
    if ((*(char *)(lVar30 + 0x15) != '\0') &&
       ((iVar24 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar30,0);
    }
    bVar12 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar12 != 0 || ((uVar51 & 1) != 0 || uVar15 != 0)) {
    if (((uVar16 | uVar51 ^ 0xffffffff) & 1) == 0) {
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
    lVar30 = *(long *)(unaff_x19 + 0x268);
    if ((lVar30 == 0) || (lVar31 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(lVar31,*(undefined8 *)(lVar30 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8,lVar31,0);
    FUN_05cb2938(lVar31,0);
  }
  if ((uVar16 & 1) == 0) {
    if ((bVar11 & 1) != 0) {
LAB_05984fa8:
      bVar9 = false;
      plVar36 = (long *)(unaff_x19 + 0x278);
      puVar39 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar28 = *puVar39;
      if (bVar9) {
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05986378;
        uVar14 = FUN_059a158c(lVar30,0);
        uVar14 = FUN_059a1698(lVar30,uVar14,0);
        FUN_05c726ac(&stack0x000007f0,uVar14,0);
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05986378;
        uVar14 = FUN_059a158c(lVar30,0);
        FUN_059a327c(lVar30,&stack0x00000390,uVar14,0);
      }
      else {
        uVar14 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar14,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar36,&stack0x000007f0,0,1,1,uVar28,0);
      }
      if ((*plVar36 == 0) || (lVar31 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(lVar31,*(undefined8 *)(*plVar36 + 0x58),&stack0x00000360,0);
      puVar7 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar30 = *(long *)puVar7;
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar30 = *(long *)puVar7;
      }
      if (**(long **)(lVar30 + 0xb8) == 0) goto LAB_05986378;
      plVar35 = (long *)(**(long **)(lVar30 + 0xb8) + 0x10);
      *plVar35 = lVar31;
      thunk_FUN_02bb0e9c(plVar35,lVar31);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar7 + 0xb8),in_stack_00000988,0);
      if ((uVar16 & 1) != 0) {
        if (*plVar36 == 0) goto LAB_05986378;
        FUN_05cbe6a0(lVar31,*(undefined8 *)Method_System_Array_Reverse<Vector2>__,&stack0x00000330,0
                    );
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,lVar31,0);
      FUN_05cb2938(lVar31,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    bVar12 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar11 | bVar12) & 1) != 0) {
      if ((bVar12 & 1) == 0) goto LAB_05984fa8;
      lVar30 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar30 == 0) goto LAB_05986378;
      lVar48 = *(long *)(lVar30 + 0x30);
      uVar20 = FUN_059a158c(lVar30,0);
      if (lVar48 == 0) goto LAB_05986378;
      if (*(uint *)(lVar48 + 0x18) <= uVar20) goto LAB_05986388;
      plVar36 = (long *)(lVar48 + (long)(int)uVar20 * 8 + 0x20);
      if (*plVar36 == 0) goto LAB_05986378;
      bVar9 = true;
      puVar39 = (undefined8 *)(*plVar36 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar7 = Method_System_Array_Resize<object>__;
  if ((uVar51 & 1) != 0) {
    if ((uVar32 & 0x10000) == 0) {
      if ((uVar16 & 1) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar30 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar30 = *(long *)puVar7;
        if ((uVar16 & 1) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05986378;
        lVar48 = *(long *)(lVar30 + 0x30);
        uVar20 = FUN_059a1568(lVar30,0);
        if (lVar48 == 0) goto LAB_05986378;
        if (*(uint *)(lVar48 + 0x18) <= uVar20) goto LAB_05986388;
        plVar36 = (long *)(lVar48 + (long)(int)uVar20 * 8 + 0x20);
        if (*plVar36 == 0) goto LAB_05986378;
        puVar39 = (undefined8 *)(*plVar36 + 0x58);
      }
      else {
        if ((uVar16 & 1) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar36 = (long *)(unaff_x19 + 0x270);
        puVar39 = (undefined8 *)(*(long *)(lVar30 + 0xb8) + 0x18);
      }
      uVar28 = *puVar39;
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar14,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar36,&stack0x000007b0,0,1,1,uVar28,0);
      }
      else {
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05986378;
        uVar14 = FUN_059a1568(lVar30,0);
        uVar14 = FUN_059a1698(lVar30,uVar14,0);
        FUN_05c726ac(&stack0x000007b0,uVar14,0);
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_05986378;
        uVar14 = FUN_059a1568(lVar30,0);
        FUN_059a327c(lVar30,&stack0x000002f0,uVar14,0);
      }
      if ((*plVar36 == 0) || (lVar31 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(lVar31,*(undefined8 *)(*plVar36 + 0x58),&stack0x000002c0,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar36 == 0) goto LAB_05986378;
        FUN_05cbe6a0(lVar31,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,lVar31,0);
      FUN_05cb2938(lVar31,0);
      if ((uVar16 & 1) == 0) {
        lVar30 = *(long *)(unaff_x19 + 0x150);
        if (bVar10) {
          if (lVar30 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar30,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar30 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar30,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar20 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar34 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar48 = *(long *)(unaff_x19 + 0x150);
      uVar28 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar30 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar34 & 1) == 0) {
        if (bVar10) {
          if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x30), lVar30 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar30 + 0x18) <= uVar20) goto LAB_05986388;
          if (lVar48 == 0) goto LAB_05986378;
          uVar33 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar29 = *(undefined8 *)(lVar30 + (long)(int)uVar20 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x30), lVar30 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar30 + 0x18) <= uVar20) goto LAB_05986388;
        if (lVar48 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar48,uVar28,*(undefined8 *)(lVar30 + (long)(int)uVar20 * 8 + 0x20),0);
      }
      else {
        if ((lVar30 == 0) || (lVar43 = *(long *)(lVar30 + 0x30), lVar43 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar43 + 0x18) <= uVar20) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar29 = *(undefined8 *)(lVar43 + (long)(int)uVar20 * 8 + 0x20);
        uVar20 = FUN_059a158c(lVar30,0);
        if (*(uint *)(lVar43 + 0x18) <= uVar20) goto LAB_05986388;
        if (lVar48 == 0) goto LAB_05986378;
        uVar33 = *(undefined8 *)(lVar43 + (long)(int)uVar20 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar48,uVar28,uVar29,uVar33,0);
      }
      puVar7 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < iVar24 - 0xfbU) {
        lVar30 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar30 == 0) goto LAB_05986378;
        puVar39 = (undefined8 *)(lVar30 + 0xb8);
        *puVar39 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        thunk_FUN_02bb0e9c(puVar39);
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
  if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05986378;
  uVar34 = FUN_057f0fbc(*(long *)(lVar27 + 0x1a0),0);
  if ((uVar34 & 1) != 0) {
    FUN_05920d64();
  }
  cVar45 = *(char *)(lVar27 + 0x1e0);
  iVar44 = (int)uVar52;
  if ((uVar16 & 1) == 0) {
    uVar14 = 2;
    if ((uVar19 & 1) == 0) {
      uVar14 = 0;
    }
    uVar4 = 0;
    if (1 < iVar44) {
      uVar4 = uVar14;
    }
    iVar24 = 0;
    if ((uVar15 == 0 && (uVar19 & 1) == 0) && cVar45 != '\0') {
      iVar24 = 3;
    }
    if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05986378;
    uVar34 = FUN_057ec748(*(long *)(lVar27 + 0x1a0),0);
    if ((uVar34 & 1) != 0) {
      if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(lVar27 + 0x1a0) + 0x28) != '\0') {
        iVar24 = 0;
      }
    }
    uVar20 = 0;
    if (1 < iVar44) {
      uVar20 = uVar15;
    }
    if (uVar20 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar34 = FUN_0596ade4(0);
      if ((uVar34 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar19 & 1) == 0) {
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
      lVar30 = *(long *)(unaff_x19 + 0x198);
      if (lVar30 == 0) goto LAB_05986378;
    }
    else {
      lVar30 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar30 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar30,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar30,uVar4,0,0);
    FUN_05914d8c(lVar30,iVar24,0);
    puVar7 = Method_System_Array_Reverse<int>__;
    lVar43 = *(long *)(unaff_x19 + 0x108);
    lVar48 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar48 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar48 = *(long *)puVar7;
    }
    puVar39 = *(undefined8 **)(lVar48 + 0xb8);
    lVar49 = puVar39[2];
    if (lVar49 == 0) {
      if (*(int *)(lVar48 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar39 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar28 = *puVar39;
      lVar49 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar49,uVar28,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar36 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar36 = lVar49;
      thunk_FUN_02bb0e9c(plVar36,lVar49);
    }
    if (lVar43 == 0) goto LAB_05986378;
    lVar48 = FUN_037a6b94(lVar43,lVar49,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar48 == 0) && (*(int *)(lVar27 + 0xe8) == 0)) {
      if (lVar47 == 0) goto LAB_05986378;
      iVar24 = FUN_05c407c0(lVar47,0);
      if (iVar24 == 4) goto LAB_059859c0;
      uVar14 = 1;
    }
    else {
LAB_059859c0:
      uVar14 = 0;
    }
    uVar34 = FUN_05c97ba0(0);
    if ((uVar34 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar30,uVar14,0);
    }
    FUN_05920d64();
  }
  else {
    lVar30 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar30 == 0) goto LAB_05986378;
    if ((*(char *)(lVar30 + 0x15) != '\0') &&
       ((iVar24 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar30,0);
    }
    FUN_05986f8c();
  }
  if (lVar47 == 0) goto LAB_05986378;
  iVar24 = FUN_05c407c0(lVar47,0);
  if ((iVar24 == 1) && (*(int *)(lVar27 + 0xe8) != 1)) {
    uVar28 = FUN_05c580a0(0);
    puVar7 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar34 = FUN_05c8c45c(uVar28,0,0);
    if ((uVar34 & 1) == 0) {
      uVar34 = FUN_0317392c(lVar47,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar34 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar28 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar7);
        }
        uVar34 = FUN_05c8c45c(uVar28,0,0);
        if ((uVar34 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (uVar15 == 0) {
    if (*(int *)(lVar27 + 0xe8) == 0 && (uVar51 & 1) == 0) {
      uVar34 = FUN_05c977c4(0);
      uVar28 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar34 & 1) == 0) {
        uVar29 = FUN_05c69330(0);
      }
      else {
        uVar29 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar28,uVar29,0);
    }
  }
  else if ((((uVar16 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar32 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uVar19 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar30 = FUN_05993404(0);
    if (lVar30 == 0) goto LAB_05986378;
    uVar14 = *(undefined4 *)(lVar30 + 0x48);
    FUN_059b478c(uVar14,&stack0x00000720,&stack0x0000071c,0);
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
                 *(undefined8 *)(unaff_x19 + 0x280),uVar14,0);
    FUN_05920d64();
  }
  if ((uVar32 & 0x100000000) != 0) {
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
    FUN_0593b4dc(lVar31,lVar27,0);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05986378;
    FUN_05939f18(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05920d64();
  }
  if ((uVar21 & 1) != 0) {
    FUN_05920d64();
  }
  uVar25 = 0;
  if (cVar45 != '\0') {
    uVar25 = 3;
  }
  uVar16 = (uint)(cVar45 == '\0');
  if (iVar44 < 2) {
    uVar16 = 1;
  }
  if (uVar15 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar25 = 0, 1 < iVar44)) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar25 = FUN_0596ade4(0);
      uVar25 = uVar25 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),((uVar16 | uVar13) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar25,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar32 = FUN_059285dc(lVar27,0);
  uVar34 = FUN_059283a4(lVar27,0);
  if (((uVar32 & 1) != 0) && ((uVar34 & 1) != 0)) {
    lVar30 = *(long *)(unaff_x19 + 0x200);
    uVar14 = FUN_059816e8();
    if (lVar30 == 0) goto LAB_05986378;
    FUN_05934854(lVar30,lVar27,uVar14,0);
    FUN_05920d64();
  }
  bVar10 = cVar45 == '\0';
  bVar9 = *(long *)(lVar27 + 0x1b0) != 0;
  if ((bVar10 || ((uVar18 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(lVar27 + 0x1cc) != 1 &&
       ((*(int *)(lVar27 + 0x170) != 1 || (*(int *)(lVar27 + 0x174) == 0)))) &&
      ((uVar37 = FUN_05928964(lVar27,0), (uVar37 & 1) == 0 || (*(float *)(lVar27 + 0x224) <= 0.0))))
     )) {
    bVar11 = 0;
joined_r0x05985f3c:
    if (!bVar9 || bVar10) goto LAB_05985f40;
LAB_05985f60:
    bVar12 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar11 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar11 = 1;
    if (bVar9 && !bVar10) goto LAB_05985f60;
LAB_05985f40:
    bVar12 = lVar26 == 0 & (bVar11 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
    uVar13 = uVar13 ^ 1;
  }
  plVar36 = (long *)(unaff_x19 + 0x230);
  plVar35 = (long *)(unaff_x19 + 0x240);
  if (uVar17 == 0) {
    if (cVar45 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar14 = FUN_05c7228c(&stack0x00000990,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__
                        );
    }
    in_stack_00000190 = uVar38;
    in_stack_00000198 = uVar52;
    in_stack_000001a0 = uVar53;
    in_stack_000001a8 = uVar55;
    in_stack_000001b0 = uVar41;
    in_stack_000001b8 = uVar57;
    in_stack_000001c0 = uVar3;
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,uVar38 & 0xffffffff,(int)(uVar38 >> 0x20),uVar14,
                 0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar45 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar36,0,plVar35,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar36,bVar12,plVar35,
                 &stack0x00000760,unaff_x19 + 0x288,bVar11 & 1);
    FUN_05920d64();
  }
  lVar30 = *plVar36;
  if ((bVar11 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar13 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(lVar27 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar11 & 1) == 0) && (((uVar17 == 0 || (lVar26 != 0)) || (bVar9 && !bVar10)))) {
    lVar26 = *plVar36;
    if (lVar26 == 0) goto LAB_05986378;
    uVar33 = *(undefined8 *)(lVar26 + 0x30);
    uVar29 = *(undefined8 *)(lVar26 + 0x28);
    uVar56 = *(undefined8 *)(lVar26 + 0x40);
    uVar54 = *(undefined8 *)(lVar26 + 0x38);
    uVar28 = *(undefined8 *)(lVar26 + 0x48);
    lVar26 = *(long *)(unaff_x19 + 600);
    if (lVar26 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar26 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar26 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar26 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar26 + 0x38);
    uVar40 = *(undefined8 *)(lVar26 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar40;
    in_stack_00000160 = uVar29;
    in_stack_00000168 = uVar33;
    in_stack_00000170 = uVar54;
    in_stack_00000178 = uVar56;
    in_stack_00000180 = uVar28;
    uVar37 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar37 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f0 = uVar38;
      in_stack_000000f8 = uVar52;
      in_stack_00000100 = uVar53;
      in_stack_00000108 = uVar55;
      in_stack_00000110 = uVar41;
      in_stack_00000118 = uVar57;
      in_stack_00000120 = uVar3;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar30,0);
      FUN_05920d64();
    }
  }
  if (((uVar32 & 1) != 0) && ((uVar34 & 1) == 0 && *(char *)(lVar27 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(lVar27 + 0x1a0) != 0) {
    uVar38 = FUN_057ec748(*(long *)(lVar27 + 0x1a0),0);
    if ((uVar38 & 1) == 0) {
      return;
    }
    lVar26 = *plVar35;
    if (lVar26 != 0) {
      uVar52 = *(undefined8 *)(lVar26 + 0x30);
      uVar29 = *(undefined8 *)(lVar26 + 0x28);
      uVar55 = *(undefined8 *)(lVar26 + 0x40);
      uVar53 = *(undefined8 *)(lVar26 + 0x38);
      uVar28 = *(undefined8 *)(lVar26 + 0x48);
      lVar26 = *(long *)(lVar27 + 0x1a0);
      if (lVar26 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar26 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar26 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar26 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar26 + 0x50);
        uVar41 = *(undefined8 *)(lVar26 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar41;
        in_stack_000000c0 = uVar29;
        in_stack_000000c8 = uVar52;
        in_stack_000000d0 = uVar53;
        in_stack_000000d8 = uVar55;
        in_stack_000000e0 = uVar28;
        uVar38 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar38 & 1) != 0) {
          return;
        }
        if (*(long *)(lVar27 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(lVar27 + 0x1a0) + 0x28) == '\0') {
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


