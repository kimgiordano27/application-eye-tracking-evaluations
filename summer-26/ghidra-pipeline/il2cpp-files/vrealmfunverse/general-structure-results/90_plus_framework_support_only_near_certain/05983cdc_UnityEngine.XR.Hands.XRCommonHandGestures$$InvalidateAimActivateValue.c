/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures$$InvalidateAimActivateValue
ENTRY_POINT: 05983cdc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05984770) */
/* WARNING: Removing unreachable block (ram,0x05984778) */
/* WARNING: Removing unreachable block (ram,0x05986380) */
/* WARNING: Removing unreachable block (ram,0x05984794) */
/* WARNING: Removing unreachable block (ram,0x059847a4) */
/* WARNING: Removing unreachable block (ram,0x059847a8) */
/* WARNING: Removing unreachable block (ram,0x059847c4) */
/* WARNING: Removing unreachable block (ram,0x059847c8) */
/* WARNING: Removing unreachable block (ram,0x05985a98) */
/* WARNING: Removing unreachable block (ram,0x05985ab0) */
/* WARNING: Removing unreachable block (ram,0x05985ab8) */

void UnityEngine_XR_Hands_XRCommonHandGestures__InvalidateAimActivateValue(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  int iVar43;
  long unaff_x19;
  char cVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  char cVar49;
  uint uVar50;
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
  undefined4 in_stack_00000988;
  uint in_stack_0000098c;
  
                    /* try { // try from 05983ce8 to 05a83cf3 has its CatchHandler @ 05983d20 */
                    /* try { // try from 05983cf4 to 05a83d13 has its CatchHandler @ 05983b64 */
                    /* try { // try from 05983d14 to 05a83d17 has its CatchHandler @ 05983d24 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05983cd4 with catch @ 05983d18
                       try { // try from 05983d18 to 05a83d3f has its CatchHandler @ 05983b64 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05983ca8 with catch @ 05983d1c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05983c8c with catch @ 05983d20
                       catch(type#1 @ 05fbf508) { ... } // from try @ 05983ce8 with catch @ 05983d20
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05983c44 with catch @ 05983d24
                       catch(type#1 @ 05fbf508) { ... } // from try @ 05983d14 with catch @ 05983d24
                        */
                    /* try { // try from 05983d40 to 05a83d43 has its CatchHandler @ 05983d5c */
                    /* try { // try from 05983d44 to 05a83d5f has its CatchHandler @ 05983b64 */
                    /* catch() { ... } // from try @ 05983d40 with catch @ 05983d5c */
                    /* try { // try from 05983d60 to 05a83d67 has its CatchHandler @ 05983d70 */
                    /* try { // try from 05983d68 to 05a83d73 has its CatchHandler @ 05983b64 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05983d60 with catch @ 05983d70
                        */
  if (param_1 == 0) goto LAB_05986378;
  lVar24 = FUN_0590661c(param_1,*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__
                       );
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
  lVar25 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
  uVar26 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
  uVar27 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__
                       );
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_05986378;
  lVar28 = FUN_0590661c(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         Method_System_ValueTuple<NavigationDeviceType,_EventModifiers>__ctor__);
  if ((*(long *)(unaff_x19 + 0x298) == 0) ||
     (FUN_059af50c(*(long *)(unaff_x19 + 0x298),lVar24,lVar25,uVar26,0), lVar25 == 0))
  goto LAB_05986378;
  uVar2 = *(undefined4 *)(lVar25 + 0x128);
  uVar52 = *(undefined8 *)(lVar25 + 0x100);
  uVar36 = *(ulong *)(lVar25 + 0xf8);
  uVar55 = *(undefined8 *)(lVar25 + 0x110);
  uVar53 = *(undefined8 *)(lVar25 + 0x108);
  uVar57 = *(undefined8 *)(lVar25 + 0x120);
  uVar39 = *(undefined8 *)(lVar25 + 0x118);
  lVar46 = *(long *)(lVar25 + 0xd8);
  if (lVar24 == 0) goto LAB_05986378;
  lVar29 = FUN_05928c6c(lVar24,0);
  lVar47 = *(long *)(unaff_x19 + 0xe8);
  if (lVar47 != 0) {
    uVar12 = FUN_059282d8(lVar25,0);
    uVar30 = FUN_058fe174(lVar47,uVar12 & 1,0);
    if ((uVar30 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar30 = thunk_FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar25 + 0x1e0),0);
      if ((uVar30 & 1) != 0) {
        uVar13 = *(undefined4 *)(lVar25 + 0x160);
        uVar3 = *(undefined4 *)(lVar25 + 0x164);
        if (*(int *)(*(long *)Method_Pico_Platform_Task<SendInvitesResult>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_058fe1f4(&stack0x00000900,uVar13,uVar3,0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        uVar31 = FUN_058fdbb4(*(long *)(unaff_x19 + 0xe8),0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
        }
        FUN_0596c2d0(0,uVar31,&stack0x00000900,0,0,1,
                     *(undefined8 *)Method_System_Array_Sort<string>__,0);
        uVar13 = FUN_059816e8();
        FUN_058fe238(&stack0x000008c0,uVar13,*(undefined4 *)(lVar25 + 0x160),
                     *(undefined4 *)(lVar25 + 0x164),0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        uVar31 = FUN_058fdbbc(*(long *)(unaff_x19 + 0xe8),0);
        FUN_0596c2d0(0,uVar31,&stack0x000008c0,0,0,1,
                     *(undefined8 *)Method_System_Array_Reverse<object>__,0);
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar30 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar25 + 0x1e0),0);
      if ((uVar30 & 1) != 0) {
        lVar47 = *(long *)(unaff_x19 + 0xe8);
        if ((((lVar47 == 0) || (*(long *)(lVar47 + 0x90) == 0)) ||
            (lVar41 = *(long *)(*(long *)(lVar47 + 0x90) + 0x30), lVar41 == 0)) ||
           ((*(long *)(lVar47 + 0x30) == 0 ||
            (FUN_0593812c(*(long *)(lVar47 + 0x30),lVar25,*(undefined4 *)(lVar41 + 0x18),0),
            *(long *)(unaff_x19 + 0xe8) == 0)))) goto LAB_05986378;
        FUN_05920d64();
      }
    }
  }
  puVar7 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
  if (*(int *)(lVar25 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar10 = FUN_0598353c();
  lVar47 = *(long *)puVar7;
  *(byte *)(unaff_x19 + 0x140) = bVar10 & 1;
  if (*(int *)(lVar47 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar30 = FUN_059834ac(lVar25);
  if ((uVar30 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollerVisibility>_set_defaultValue__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0591c4b0();
    FUN_05920d64();
    goto LAB_059840d8;
  }
  uVar12 = FUN_059282d8(lVar25,0);
  uVar30 = UnityEngine_XR_Hands_XRCommonHandGestures_PinchValueUpdatedEventArgs__TryGetPinchValue();
  if (((uVar30 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar12 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_06312d60 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar30 = FUN_05c3f0a0(0);
    if ((uVar30 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = FUN_0598161c();
    }
  }
  else {
    uVar14 = 1;
  }
  uVar31 = FUN_05983924();
  FUN_05986424(uVar31,lVar25);
  bVar10 = FUN_05967808();
  bVar11 = FUN_05983764();
  bVar10 = (bVar11 ^ 1) & bVar10;
  uVar15 = FUN_059815f0();
  bVar9 = false;
  uVar42 = 0;
  if (((bVar10 & 1) != 0) && ((uVar15 & 1) == 0)) {
    uVar42 = in_stack_0000098c;
    if (in_stack_0000098c == 0) {
      bVar9 = true;
    }
    else {
      if (in_stack_0000098c != 1) {
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar26 = thunk_FUN_02b79644();
        FUN_04cf6044(uVar26,0);
        uVar27 = thunk_FUN_02ba3594(Method_System_Array_Sort<Camera>__);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar26,uVar27);
      }
      bVar9 = false;
    }
  }
  FUN_05928964(lVar25,0);
  if (lVar28 == 0) goto LAB_05986378;
  FUN_059282c8(lVar25,0);
  auVar58 = FUN_059864e0();
  uVar30 = auVar58._0_8_;
  lVar47 = *(long *)(unaff_x19 + 0x2a0);
  bVar11 = auVar58[2];
  if (lVar47 != 0) {
    *(byte *)(lVar47 + 0x14) = bVar10 & 1;
    *(undefined4 *)(lVar47 + 0x10) = in_stack_00000988;
    *(byte *)(lVar47 + 0x17) = bVar11 & 1;
    FUN_059a2d6c(lVar47,uVar26,0);
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
        uVar32 = FUN_0472eaf4(&stack0x000008a0,*(undefined8 *)puVar7);
        if ((uVar32 & 1) == 0) goto LAB_05984314;
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
  if (*(char *)(lVar25 + 0x1ac) == '\0') {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar16 = uVar16 & 1;
  }
  if (lVar28 == 0) goto LAB_05986378;
  if (*(char *)(lVar28 + 0x10) == '\0') {
    uVar17 = 0;
    uVar18 = 0;
    if (uVar16 != 0) goto LAB_0598436c;
LAB_0598437c:
    uVar17 = uVar18;
    cVar44 = '\0';
  }
  else {
    uVar17 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar18 = uVar17;
    if (uVar16 == 0) goto LAB_0598437c;
LAB_0598436c:
    cVar44 = *(char *)(lVar25 + 0x192);
  }
  if (*(char *)(lVar25 + 0x1ac) == '\0') {
    uStack0000000000000054 = 0;
  }
  else {
    uStack0000000000000054 = FUN_0595e6d4(unaff_x19 + 0x310,0);
  }
  uVar32 = FUN_059282c8(lVar25,0);
  if ((uVar32 & 1) == 0) {
    uStack0000000000000064 = FUN_059282d8(lVar25,0);
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(lVar25 + 400) == '\0') && ((uVar30 & 1) == 0)) {
    cVar49 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar49 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05986378;
  uVar18 = FUN_059c1cb4(*(long *)(unaff_x19 + 0x168),lVar24,lVar25,uVar26,uVar27,0);
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05986378;
  uVar19 = FUN_059a99b0(*(long *)(unaff_x19 + 0x170),lVar24,lVar25,uVar26,uVar27,0);
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05986378;
  bVar8 = cVar44 != '\0';
  uVar20 = FUN_0595c330(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar49 == '\0' && !bVar8) {
    cVar49 = '\0';
    uVar21 = 0;
  }
  else {
    iVar23 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar21 = FUN_05983644(lVar25);
    uVar21 = (uint)(iVar23 == 2) | uVar21 ^ 1;
  }
  uVar21 = (uint)(byte)(bVar11 | auVar58[1]) | uVar12 | uVar21 | uStack0000000000000064;
  if ((uVar15 & uVar21 & 1) != 0) {
    uVar21 = bVar11 & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar49 == '\0') {
    if (((uint)(cVar44 == '\0') & (uStack0000000000000064 ^ 1)) == 0) {
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
    iVar23 = auVar58._12_4_ + -1;
    iVar43 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar43 = 300;
    }
    if (499 < iVar23) {
      iVar23 = 500;
    }
    if ((uVar30 & 1) != 0) {
      iVar43 = iVar23;
    }
    *(int *)(lVar24 + 0x10) = iVar43;
    if (iVar43 < 500) {
      *(undefined1 *)(lVar24 + 0xd8) = 0;
      bVar5 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar5 = true;
    }
  }
  uVar40 = (uint)(cVar4 != '\0');
  uVar51 = uVar21 | uVar40;
  uVar22 = FUN_05986760();
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar50 = uVar42;
  if ((bVar11 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(lVar25 + 0x1e0) != '\x01' || ((uint)(bVar5 || bVar8) & (uVar51 ^ 1)) != 0)) {
    uVar50 = 1;
  }
  if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_05986378;
  uVar14 = (uVar14 | (uint)uVar31 | uVar22) & (uVar12 ^ 1);
  uVar32 = FUN_057ec748(*(long *)(lVar25 + 0x1a0),0);
  uVar22 = uVar14 | uVar50;
  iVar23 = FUN_05c9729c(0);
  puVar7 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar23 == 0x15) {
    uVar45 = uVar22;
    if ((uVar32 & 1) == 0) {
      uVar45 = uVar14;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar45 = uVar22;
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
    uVar45 = uVar22;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar45 = uVar50 | uVar45;
  }
  uVar32 = FUN_05c972ec(0);
  uVar50 = uVar50 | uVar45;
  uVar14 = uVar50;
  if ((uVar32 & 1) == 0) {
    uVar14 = uVar45;
  }
  FUN_05c72cdc(&stack0x00000940,0,0);
  FUN_05c72cf8(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05986378;
  FUN_059c4ca0(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(lVar25 + 0xe8) != 0) {
    if (*(long *)(lVar25 + 0x230) != 0) {
      FUN_0317392c(*(long *)(lVar25 + 0x230),&stack0x00000868,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
    }
    goto LAB_05986378;
  }
  if (lVar46 == 0) goto LAB_05986378;
  iVar23 = thunk_FUN_05c42700(lVar46,0);
  puVar6 = PTR_DAT_0631ec68;
  if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05cac198(&stack0x000003d0,2,0);
  if ((*(long *)(lVar25 + 0x1a0) == 0) ||
     ((uVar32 = FUN_057ec748(*(long *)(lVar25 + 0x1a0),0), (uVar32 & 1) != 0 &&
      (*(long *)(lVar25 + 0x1a0) == 0)))) goto LAB_05986378;
  uVar22 = uVar50 & iVar23 != 1;
  puVar37 = (undefined8 *)(unaff_x19 + 600);
  if (*(long *)(unaff_x19 + 600) == 0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar26 = FUN_058572fc(&stack0x000005f0,0);
    *puVar37 = uVar26;
    thunk_FUN_02bb0e9c(puVar37,uVar26);
  }
  else {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar32 = FUN_05cac718(&stack0x000005c0,&stack0x00000590,0);
    if ((uVar32 & 1) != 0) {
      FUN_058573cc(puVar37,&stack0x00000560,0);
    }
  }
  puVar1 = (undefined8 *)(unaff_x19 + 0x260);
  if (*(long *)(unaff_x19 + 0x260) == 0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar26 = FUN_058572fc(&stack0x00000530,0);
    *puVar1 = uVar26;
    thunk_FUN_02bb0e9c(puVar1,uVar26);
  }
  else {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar32 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
    if ((uVar32 & 1) != 0) {
      FUN_058573cc(puVar1,&stack0x000004a0,0);
    }
  }
  if (uVar22 != 0) {
    FUN_05986958();
  }
  if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05986378;
  bVar11 = (byte)uVar22 ^ 1;
  *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar11;
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar11;
  if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05986378;
  *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar11;
  if ((uVar14 & 1) == 0) {
    uVar26 = *puVar37;
  }
  else {
    lVar24 = *(long *)(unaff_x19 + 0x228);
    if (lVar24 == 0) goto LAB_05986378;
    uVar26 = FUN_059c48ac(lVar24,0);
  }
  *(undefined8 *)(unaff_x19 + 0x230) = uVar26;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
  lVar24 = 0x248;
  if ((uVar50 & 1) == 0) {
    lVar24 = 0x260;
  }
  *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar24);
  thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar12 & 1) == 0) {
    lVar24 = *(long *)(unaff_x19 + 0x228);
    if (lVar24 == 0) goto LAB_05986378;
    uVar26 = FUN_059c48ac(lVar24,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar26);
  }
  cVar44 = *(char *)(lVar25 + 0x191);
  FUN_0591c4b0();
  iVar23 = FUN_05c9729c(0);
  if (iVar23 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (lVar29 == 0) goto LAB_05986378;
    FUN_05cbdf2c(lVar29,&stack0x00000470,&stack0x00000440,0);
  }
  puVar7 = Method_System_Array_Reverse<int>__;
  lVar28 = *(long *)(unaff_x19 + 0x108);
  lVar24 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar24 = *(long *)puVar7;
  }
  puVar37 = *(undefined8 **)(lVar24 + 0xb8);
  lVar47 = puVar37[1];
  if (lVar47 == 0) {
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar37 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar26 = *puVar37;
    lVar47 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar47,uVar26,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar33 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar33 = lVar47;
    thunk_FUN_02bb0e9c(plVar33,lVar47);
  }
  if (lVar28 == 0) goto LAB_05986378;
  lVar24 = FUN_037a6b94(lVar28,lVar47,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((uVar18 & 1) != 0) {
    FUN_05920d64();
  }
  if ((uVar19 & 1) != 0) {
    FUN_05920d64();
  }
  uVar14 = (uint)(byte)(cVar44 != '\0' | auVar58[3]) & (uVar12 ^ 1);
  if ((uVar21 & 1) == 0 && uVar40 == 0) {
    if (*(char *)(lVar25 + 400) == '\0' && !bVar8) {
      bVar11 = auVar58[0] & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    bVar11 = 0;
  }
  lVar28 = *(long *)(unaff_x19 + 0xe8);
  uVar50 = uVar50 & bVar11 != 0;
  if (lVar28 != 0) {
    uVar18 = FUN_059282d8(lVar25,0);
    uVar32 = FUN_058fe174(lVar28,uVar18 & 1,0);
    if ((uVar32 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar32 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar32 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar50 = 0;
        uVar14 = 0;
        uVar51 = 0;
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
  if (*(long *)(lVar25 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(lVar25 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar23 = auVar58._8_4_;
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    lVar28 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar28 == 0) goto LAB_05986378;
    if ((*(char *)(lVar28 + 0x15) != '\0') &&
       ((iVar23 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar28,0);
    }
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar11 != 0 || ((uVar51 & 1) != 0 || uVar50 != 0)) {
    if (((uVar15 | uVar51 ^ 0xffffffff) & 1) == 0) {
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
    lVar28 = *(long *)(unaff_x19 + 0x268);
    if ((lVar28 == 0) || (lVar29 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(lVar29,*(undefined8 *)(lVar28 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8,lVar29,0);
    FUN_05cb2938(lVar29,0);
  }
  if ((uVar15 & 1) == 0) {
    if ((bVar10 & 1) != 0) {
LAB_05984fa8:
      bVar8 = false;
      plVar33 = (long *)(unaff_x19 + 0x278);
      puVar37 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar26 = *puVar37;
      if (bVar8) {
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_05986378;
        uVar13 = FUN_059a158c(lVar28,0);
        uVar13 = FUN_059a1698(lVar28,uVar13,0);
        FUN_05c726ac(&stack0x000007f0,uVar13,0);
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_05986378;
        uVar13 = FUN_059a158c(lVar28,0);
        FUN_059a327c(lVar28,&stack0x00000390,uVar13,0);
      }
      else {
        uVar13 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar13,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar33,&stack0x000007f0,0,1,1,uVar26,0);
      }
      if ((*plVar33 == 0) || (lVar29 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(lVar29,*(undefined8 *)(*plVar33 + 0x58),&stack0x00000360,0);
      puVar7 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar28 = *(long *)puVar7;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar28 = *(long *)puVar7;
      }
      if (**(long **)(lVar28 + 0xb8) == 0) goto LAB_05986378;
      plVar34 = (long *)(**(long **)(lVar28 + 0xb8) + 0x10);
      *plVar34 = lVar29;
      thunk_FUN_02bb0e9c(plVar34,lVar29);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar7 + 0xb8),in_stack_00000988,0);
      if ((uVar15 & 1) != 0) {
        if (*plVar33 == 0) goto LAB_05986378;
        FUN_05cbe6a0(lVar29,*(undefined8 *)Method_System_Array_Reverse<Vector2>__,&stack0x00000330,0
                    );
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,lVar29,0);
      FUN_05cb2938(lVar29,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    bVar11 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar10 | bVar11) & 1) != 0) {
      if ((bVar11 & 1) == 0) goto LAB_05984fa8;
      lVar28 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar28 == 0) goto LAB_05986378;
      lVar47 = *(long *)(lVar28 + 0x30);
      uVar18 = FUN_059a158c(lVar28,0);
      if (lVar47 == 0) goto LAB_05986378;
      if (*(uint *)(lVar47 + 0x18) <= uVar18) goto LAB_05986388;
      plVar33 = (long *)(lVar47 + (long)(int)uVar18 * 8 + 0x20);
      if (*plVar33 == 0) goto LAB_05986378;
      bVar8 = true;
      puVar37 = (undefined8 *)(*plVar33 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar7 = Method_System_Array_Resize<object>__;
  if ((uVar51 & 1) != 0) {
    if ((uVar30 & 0x10000) == 0) {
      if ((uVar15 & 1) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar28 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar28 = *(long *)puVar7;
        if ((uVar15 & 1) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar33 = (long *)(unaff_x19 + 0x270);
        puVar37 = (undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x18);
      }
      else {
        if ((uVar15 & 1) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_05986378;
        lVar47 = *(long *)(lVar28 + 0x30);
        uVar18 = FUN_059a1568(lVar28,0);
        if (lVar47 == 0) goto LAB_05986378;
        if (*(uint *)(lVar47 + 0x18) <= uVar18) goto LAB_05986388;
        plVar33 = (long *)(lVar47 + (long)(int)uVar18 * 8 + 0x20);
        if (*plVar33 == 0) goto LAB_05986378;
        puVar37 = (undefined8 *)(*plVar33 + 0x58);
      }
      uVar26 = *puVar37;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar13 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar13,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar33,&stack0x000007b0,0,1,1,uVar26,0);
      }
      else {
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_05986378;
        uVar13 = FUN_059a1568(lVar28,0);
        uVar13 = FUN_059a1698(lVar28,uVar13,0);
        FUN_05c726ac(&stack0x000007b0,uVar13,0);
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_05986378;
        uVar13 = FUN_059a1568(lVar28,0);
        FUN_059a327c(lVar28,&stack0x000002f0,uVar13,0);
      }
      if ((*plVar33 == 0) || (lVar29 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(lVar29,*(undefined8 *)(*plVar33 + 0x58),&stack0x000002c0,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar33 == 0) goto LAB_05986378;
        FUN_05cbe6a0(lVar29,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,lVar29,0);
      FUN_05cb2938(lVar29,0);
      if ((uVar15 & 1) == 0) {
        lVar28 = *(long *)(unaff_x19 + 0x150);
        if (bVar9) {
          if (lVar28 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar28,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar28 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar28,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar18 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar32 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar47 = *(long *)(unaff_x19 + 0x150);
      uVar26 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar28 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar32 & 1) == 0) {
        if (bVar9) {
          if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x30), lVar28 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar28 + 0x18) <= uVar18) goto LAB_05986388;
          if (lVar47 == 0) goto LAB_05986378;
          uVar31 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar27 = *(undefined8 *)(lVar28 + (long)(int)uVar18 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x30), lVar28 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar28 + 0x18) <= uVar18) goto LAB_05986388;
        if (lVar47 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar47,uVar26,*(undefined8 *)(lVar28 + (long)(int)uVar18 * 8 + 0x20),0);
      }
      else {
        if ((lVar28 == 0) || (lVar41 = *(long *)(lVar28 + 0x30), lVar41 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar41 + 0x18) <= uVar18) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar27 = *(undefined8 *)(lVar41 + (long)(int)uVar18 * 8 + 0x20);
        uVar18 = FUN_059a158c(lVar28,0);
        if (*(uint *)(lVar41 + 0x18) <= uVar18) goto LAB_05986388;
        if (lVar47 == 0) goto LAB_05986378;
        uVar31 = *(undefined8 *)(lVar41 + (long)(int)uVar18 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar47,uVar26,uVar27,uVar31,0);
      }
      puVar7 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < iVar23 - 0xfbU) {
        lVar28 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar28 == 0) goto LAB_05986378;
        puVar37 = (undefined8 *)(lVar28 + 0xb8);
        *puVar37 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        thunk_FUN_02bb0e9c(puVar37);
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
    FUN_0596c2d0(0,unaff_x19 + 0x330,&stack0x00000770,0,1,0,
                 *(undefined8 *)Method_System_Array_Sort<float>__,0);
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05986378;
    FUN_059b2460(*(long *)(unaff_x19 + 0x310),&stack0x00000760,0);
    FUN_05920d64();
  }
  if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_05986378;
  uVar32 = FUN_057f0fbc(*(long *)(lVar25 + 0x1a0),0);
  if ((uVar32 & 1) != 0) {
    FUN_05920d64();
  }
  cVar44 = *(char *)(lVar25 + 0x1e0);
  iVar43 = (int)uVar52;
  if ((uVar15 & 1) == 0) {
    uVar13 = 2;
    if ((uVar14 & 1) == 0) {
      uVar13 = 0;
    }
    uVar3 = 0;
    if (1 < iVar43) {
      uVar3 = uVar13;
    }
    iVar23 = 0;
    if ((uVar50 == 0 && (uVar14 & 1) == 0) && cVar44 != '\0') {
      iVar23 = 3;
    }
    if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_05986378;
    uVar32 = FUN_057ec748(*(long *)(lVar25 + 0x1a0),0);
    if ((uVar32 & 1) != 0) {
      if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(lVar25 + 0x1a0) + 0x28) != '\0') {
        iVar23 = 0;
      }
    }
    uVar18 = 0;
    if (1 < iVar43) {
      uVar18 = uVar50;
    }
    if (uVar18 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar32 = FUN_0596ade4(0);
      if ((uVar32 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar14 & 1) == 0) {
          if (iVar23 == 0) {
            iVar23 = 2;
          }
          else if (iVar23 == 3) {
            iVar23 = 1;
          }
        }
      }
    }
    if (uVar42 == 0) {
      lVar28 = *(long *)(unaff_x19 + 0x198);
      if (lVar28 == 0) goto LAB_05986378;
    }
    else {
      lVar28 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar28 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar28,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar28,uVar3,0,0);
    FUN_05914d8c(lVar28,iVar23,0);
    puVar7 = Method_System_Array_Reverse<int>__;
    lVar41 = *(long *)(unaff_x19 + 0x108);
    lVar47 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar47 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar47 = *(long *)puVar7;
    }
    puVar37 = *(undefined8 **)(lVar47 + 0xb8);
    lVar48 = puVar37[2];
    if (lVar48 == 0) {
      if (*(int *)(lVar47 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar37 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar26 = *puVar37;
      lVar48 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar48,uVar26,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar33 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar33 = lVar48;
      thunk_FUN_02bb0e9c(plVar33,lVar48);
    }
    if (lVar41 == 0) goto LAB_05986378;
    lVar47 = FUN_037a6b94(lVar41,lVar48,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar47 == 0) && (*(int *)(lVar25 + 0xe8) == 0)) {
      if (lVar46 == 0) goto LAB_05986378;
      iVar23 = FUN_05c407c0(lVar46,0);
      if (iVar23 == 4) goto LAB_059859c0;
      uVar13 = 1;
    }
    else {
LAB_059859c0:
      uVar13 = 0;
    }
    uVar32 = FUN_05c97ba0(0);
    if ((uVar32 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar28,uVar13,0);
    }
    FUN_05920d64();
  }
  else {
    lVar28 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar28 == 0) goto LAB_05986378;
    if ((*(char *)(lVar28 + 0x15) != '\0') &&
       ((iVar23 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar28,0);
    }
    FUN_05986f8c();
  }
  if (lVar46 == 0) goto LAB_05986378;
  iVar23 = FUN_05c407c0(lVar46,0);
  if ((iVar23 == 1) && (*(int *)(lVar25 + 0xe8) != 1)) {
    uVar26 = FUN_05c580a0(0);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar32 = FUN_05c8c45c(uVar26,0,0);
    if ((uVar32 & 1) == 0) {
      uVar32 = FUN_0317392c(lVar46,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar32 & 1) != 0) goto LAB_05986378;
    }
    else {
      FUN_05920d64();
    }
  }
  if (uVar50 == 0) {
    if (*(int *)(lVar25 + 0xe8) == 0 && (uVar51 & 1) == 0) {
      uVar32 = FUN_05c977c4(0);
      uVar26 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar32 & 1) == 0) {
        uVar27 = FUN_05c69330(0);
      }
      else {
        uVar27 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar26,uVar27,0);
    }
  }
  else if ((((uVar15 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar30 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar28 = FUN_05993404(0);
    if (lVar28 == 0) goto LAB_05986378;
    uVar13 = *(undefined4 *)(lVar28 + 0x48);
    FUN_059b478c(uVar13,&stack0x00000720,&stack0x0000071c,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x280,&stack0x00000720,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
                 ,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05986378;
    FUN_059b482c(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar13,0);
    FUN_05920d64();
  }
  if ((uVar30 & 0x100000000) != 0) {
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
    FUN_0593b4dc(lVar29,lVar25,0);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05986378;
    FUN_05939f18(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05920d64();
  }
  if ((uVar20 & 1) != 0) {
    FUN_05920d64();
  }
  uVar14 = 0;
  if (cVar44 != '\0') {
    uVar14 = 3;
  }
  uVar42 = (uint)(cVar44 == '\0');
  if (iVar43 < 2) {
    uVar42 = 1;
  }
  if (uVar50 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar14 = 0, 1 < iVar43)) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar14 = FUN_0596ade4(0);
      uVar14 = uVar14 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),((uVar42 | uVar12) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar14,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar30 = FUN_059285dc(lVar25,0);
  uVar32 = FUN_059283a4(lVar25,0);
  if (((uVar30 & 1) != 0) && ((uVar32 & 1) != 0)) {
    lVar28 = *(long *)(unaff_x19 + 0x200);
    uVar13 = FUN_059816e8();
    if (lVar28 == 0) goto LAB_05986378;
    FUN_05934854(lVar28,lVar25,uVar13,0);
    FUN_05920d64();
  }
  bVar9 = cVar44 == '\0';
  bVar8 = *(long *)(lVar25 + 0x1b0) != 0;
  if ((bVar9 || ((uVar17 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(lVar25 + 0x1cc) != 1 &&
       ((*(int *)(lVar25 + 0x170) != 1 || (*(int *)(lVar25 + 0x174) == 0)))) &&
      ((uVar35 = FUN_05928964(lVar25,0), (uVar35 & 1) == 0 || (*(float *)(lVar25 + 0x224) <= 0.0))))
     )) {
    bVar10 = 0;
joined_r0x05985f3c:
    if (!bVar8 || bVar9) goto LAB_05985f40;
LAB_05985f60:
    bVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
      bVar10 = 1;
      goto joined_r0x05985f3c;
    }
    bVar10 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
    if (bVar8 && !bVar9) goto LAB_05985f60;
LAB_05985f40:
    bVar11 = lVar24 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar25 + 0x1e0),0);
    uVar12 = uVar12 ^ 1;
  }
  plVar33 = (long *)(unaff_x19 + 0x230);
  plVar34 = (long *)(unaff_x19 + 0x240);
  if (uVar16 == 0) {
    if (cVar44 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar13 = FUN_05c7228c(&stack0x00000990,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__
                        );
    }
    in_stack_00000190 = uVar36;
    in_stack_00000198 = uVar52;
    in_stack_000001a0 = uVar53;
    in_stack_000001a8 = uVar55;
    in_stack_000001b0 = uVar39;
    in_stack_000001b8 = uVar57;
    in_stack_000001c0 = uVar2;
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,uVar36 & 0xffffffff,(int)(uVar36 >> 0x20),uVar13,
                 0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar44 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar33,0,plVar34,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar33,bVar11,plVar34,
                 &stack0x00000760,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05920d64();
  }
  lVar28 = *plVar33;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar12 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(lVar25 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar10 & 1) == 0) && (((uVar16 == 0 || (lVar24 != 0)) || (bVar8 && !bVar9)))) {
    lVar24 = *plVar33;
    if (lVar24 == 0) goto LAB_05986378;
    uVar31 = *(undefined8 *)(lVar24 + 0x30);
    uVar27 = *(undefined8 *)(lVar24 + 0x28);
    uVar56 = *(undefined8 *)(lVar24 + 0x40);
    uVar54 = *(undefined8 *)(lVar24 + 0x38);
    uVar26 = *(undefined8 *)(lVar24 + 0x48);
    lVar24 = *(long *)(unaff_x19 + 600);
    if (lVar24 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar24 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar24 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar24 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar24 + 0x38);
    uVar38 = *(undefined8 *)(lVar24 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar38;
    in_stack_00000160 = uVar27;
    in_stack_00000168 = uVar31;
    in_stack_00000170 = uVar54;
    in_stack_00000178 = uVar56;
    in_stack_00000180 = uVar26;
    uVar35 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar35 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f0 = uVar36;
      in_stack_000000f8 = uVar52;
      in_stack_00000100 = uVar53;
      in_stack_00000108 = uVar55;
      in_stack_00000110 = uVar39;
      in_stack_00000118 = uVar57;
      in_stack_00000120 = uVar2;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar28,0);
      FUN_05920d64();
    }
  }
  if (((uVar30 & 1) != 0) && ((uVar32 & 1) == 0 && *(char *)(lVar25 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(lVar25 + 0x1a0) != 0) {
    uVar36 = FUN_057ec748(*(long *)(lVar25 + 0x1a0),0);
    if ((uVar36 & 1) == 0) {
      return;
    }
    lVar24 = *plVar34;
    if (lVar24 != 0) {
      uVar52 = *(undefined8 *)(lVar24 + 0x30);
      uVar27 = *(undefined8 *)(lVar24 + 0x28);
      uVar55 = *(undefined8 *)(lVar24 + 0x40);
      uVar53 = *(undefined8 *)(lVar24 + 0x38);
      uVar26 = *(undefined8 *)(lVar24 + 0x48);
      lVar24 = *(long *)(lVar25 + 0x1a0);
      if (lVar24 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar24 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar24 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar24 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar24 + 0x50);
        uVar39 = *(undefined8 *)(lVar24 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar39;
        in_stack_000000c0 = uVar27;
        in_stack_000000c8 = uVar52;
        in_stack_000000d0 = uVar53;
        in_stack_000000d8 = uVar55;
        in_stack_000000e0 = uVar26;
        uVar36 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar36 & 1) != 0) {
          return;
        }
        if (*(long *)(lVar25 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(lVar25 + 0x1a0) + 0x28) == '\0') {
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


