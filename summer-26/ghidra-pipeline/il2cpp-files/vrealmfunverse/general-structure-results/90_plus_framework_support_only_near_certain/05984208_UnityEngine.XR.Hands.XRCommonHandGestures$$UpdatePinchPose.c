/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures$$UpdatePinchPose
ENTRY_POINT: 05984208
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


void UnityEngine_XR_Hands_XRCommonHandGestures__UpdatePinchPose(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  uint uVar31;
  int iVar32;
  long unaff_x19;
  long unaff_x20;
  char cVar33;
  int unaff_w21;
  uint uVar34;
  uint unaff_w22;
  long lVar35;
  uint unaff_w23;
  long lVar36;
  long lVar37;
  long lVar38;
  char cVar39;
  uint unaff_w25;
  byte bVar40;
  uint uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  int iStack0000000000000034;
  uint uStack000000000000004c;
  uint uStack0000000000000054;
  long in_stack_00000058;
  uint uStack0000000000000064;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
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
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059841fc with catch @ 0598420c
                        */
  if (in_stack_000009d0 == 0) goto LAB_05986378;
  FUN_059282c8();
  auVar44 = FUN_059864e0();
  uVar26 = auVar44._0_8_;
  lVar20 = *(long *)(unaff_x19 + 0x2a0);
  bVar10 = auVar44[2];
  iStack0000000000000034 = unaff_w21;
  uStack000000000000004c = unaff_w25;
  if (lVar20 != 0) {
    *(byte *)(lVar20 + 0x14) = (byte)unaff_w25 & 1;
    *(undefined4 *)(lVar20 + 0x10) = in_stack_00000988;
    *(byte *)(lVar20 + 0x17) = bVar10 & 1;
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
        uVar21 = FUN_0472eaf4(&stack0x000008a0,*(undefined8 *)puVar6);
        if ((uVar21 & 1) == 0) goto LAB_05984314;
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
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar11 = uVar11 & 1;
  }
  if (in_stack_000009d0 == 0) goto LAB_05986378;
  if (*(char *)(in_stack_000009d0 + 0x10) == '\0') {
    uVar12 = 0;
    uVar13 = 0;
    if (uVar11 == 0) goto LAB_0598437c;
LAB_0598436c:
    cVar33 = *(char *)(unaff_x20 + 0x192);
  }
  else {
    uVar12 = FUN_0595e6d4(unaff_x19 + 0x310,0);
    uVar13 = uVar12;
    if (uVar11 != 0) goto LAB_0598436c;
LAB_0598437c:
    uVar12 = uVar13;
    cVar33 = '\0';
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uStack0000000000000054 = 0;
  }
  else {
    uStack0000000000000054 = FUN_0595e6d4(unaff_x19 + 0x310,0);
  }
  uVar21 = FUN_059282c8();
  if ((uVar21 & 1) == 0) {
    uStack0000000000000064 = FUN_059282d8();
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar26 & 1) == 0)) {
    cVar39 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar39 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05986378;
  uVar13 = FUN_059c1cb4();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05986378;
  uVar14 = FUN_059a99b0(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05986378;
  bVar8 = cVar33 != '\0';
  uVar15 = FUN_0595c330(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar39 == '\0' && !bVar8) {
    cVar39 = '\0';
    uVar16 = 0;
  }
  else {
    iVar18 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_05983644();
    uVar16 = (uint)(iVar18 == 2) | uVar16 ^ 1;
  }
  uVar16 = (uint)(byte)(bVar10 | auVar44[1]) | in_stack_00000088 | uVar16 | uStack0000000000000064;
  if ((in_stack_00000080._4_4_ & uVar16 & 1) != 0) {
    uVar16 = bVar10 & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar39 == '\0') {
    if (((uint)(cVar33 == '\0') & (uStack0000000000000064 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
      bVar9 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar9 = false;
    }
  }
  else {
    lVar20 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar20 == 0) goto LAB_05986378;
    iVar18 = auVar44._12_4_ + -1;
    iVar32 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar32 = 300;
    }
    if (499 < iVar18) {
      iVar18 = 500;
    }
    if ((uVar26 & 1) != 0) {
      iVar32 = iVar18;
    }
    *(int *)(lVar20 + 0x10) = iVar32;
    if (iVar32 < 500) {
      *(undefined1 *)(lVar20 + 0xd8) = 0;
      bVar9 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar9 = true;
    }
  }
  uVar31 = (uint)(cVar4 != '\0');
  uVar41 = uVar16 | uVar31;
  uVar17 = FUN_05986760();
  if ((in_stack_00000080 & 0x100000000) == 0) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar3 = in_stack_00000070._4_4_;
  if ((bVar10 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(unaff_x20 + 0x1e0) != '\x01' || ((uint)(bVar9 || bVar8) & (uVar41 ^ 1)) != 0)) {
    uVar3 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
  uVar17 = (unaff_w23 | unaff_w22 | uVar17) & (in_stack_00000088 ^ 1);
  uVar21 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
  uVar5 = uVar17 | uVar3;
  iVar18 = FUN_05c9729c(0);
  puVar6 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar18 == 0x15) {
    uVar34 = uVar5;
    if ((uVar21 & 1) == 0) {
      uVar34 = uVar17;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar34 = uVar5;
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
    uVar34 = uVar5;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar34 = uVar3 | uVar34;
  }
  uVar21 = FUN_05c972ec(0);
  uVar17 = uVar3 | uVar34;
  uVar5 = uVar17;
  if ((uVar21 & 1) == 0) {
    uVar5 = uVar34;
  }
  FUN_05c72cdc(&stack0x00000940,0,0);
  FUN_05c72cf8(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05986378;
  plVar24 = (long *)(unaff_x19 + 0x228);
  FUN_059c4ca0(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (in_stack_00000058 == 0) goto LAB_05986378;
    iVar18 = thunk_FUN_05c42700(in_stack_00000058,0);
    puVar7 = PTR_DAT_0631ec68;
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&stack0x000003d0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar21 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0), (uVar21 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05986378;
    uVar3 = uVar17 & iVar18 != 1;
    puVar29 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar23 = FUN_058572fc(&stack0x000005f0,0);
      *puVar29 = uVar23;
      thunk_FUN_02bb0e9c(puVar29,uVar23);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar21 = FUN_05cac718(&stack0x000005c0,&stack0x00000590,0);
      if ((uVar21 & 1) != 0) {
        FUN_058573cc(puVar29,&stack0x00000560,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar23 = FUN_058572fc(&stack0x00000530,0);
      *puVar1 = uVar23;
      thunk_FUN_02bb0e9c(puVar1,uVar23);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar21 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
      if ((uVar21 & 1) != 0) {
        FUN_058573cc(puVar1,&stack0x000004a0,0);
      }
    }
    if (uVar3 != 0) {
      FUN_05986958();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05986378;
    bVar10 = (byte)uVar3 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar10;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar10;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar10;
    if ((uVar5 & 1) == 0) {
      uVar23 = *puVar29;
    }
    else {
      if (*plVar24 == 0) goto LAB_05986378;
      uVar23 = FUN_059c48ac(*plVar24,0);
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar23;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
    lVar20 = 0x248;
    if ((uVar17 & 1) == 0) {
      lVar20 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar20);
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0317392c(*(long *)(unaff_x20 + 0x230),&stack0x00000868,
                      *(undefined8 *)
                       Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__),
        in_stack_00000868 == 0)) || (plVar22 = (long *)FUN_0597fbe8(), plVar22 == (long *)0x0))
    goto LAB_05986378;
    if (*plVar22 != *(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar22);
    }
    lVar20 = *plVar24;
    if (lVar20 != plVar22[0x45]) {
      if (lVar20 == 0) goto LAB_05986378;
      FUN_059c4858(lVar20,0);
      *plVar24 = plVar22[0x45];
      thunk_FUN_02bb0e9c(plVar24);
      lVar20 = *plVar24;
    }
    if (lVar20 == 0) goto LAB_05986378;
    uVar23 = FUN_059c48ac(lVar20,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar23;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230,uVar23);
    *(long *)(unaff_x19 + 0x240) = plVar22[0x48];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
    *(long *)(unaff_x19 + 600) = plVar22[0x4b];
    thunk_FUN_02bb0e9c(unaff_x19 + 600);
    *(long *)(unaff_x19 + 0x260) = plVar22[0x4c];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x260);
    uVar17 = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000088 & 1) == 0) {
    if (*plVar24 == 0) goto LAB_05986378;
    uVar23 = FUN_059c48ac(*plVar24,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar23;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar23);
  }
  cVar33 = *(char *)(unaff_x20 + 0x191);
  FUN_0591c4b0();
  iVar18 = FUN_05c9729c(0);
  if (iVar18 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000078 == 0) goto LAB_05986378;
    FUN_05cbdf2c(in_stack_00000078,&stack0x00000470,&stack0x00000440,0);
  }
  puVar6 = Method_System_Array_Reverse<int>__;
  lVar35 = *(long *)(unaff_x19 + 0x108);
  lVar20 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *(long *)puVar6;
  }
  puVar29 = *(undefined8 **)(lVar20 + 0xb8);
  lVar36 = puVar29[1];
  if (lVar36 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar29 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    }
    uVar23 = *puVar29;
    lVar36 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar36,uVar23,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar24 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar24 = lVar36;
    thunk_FUN_02bb0e9c(plVar24,lVar36);
  }
  if (lVar35 == 0) goto LAB_05986378;
  lVar20 = FUN_037a6b94(lVar35,lVar36,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((uVar13 & 1) != 0) {
    FUN_05920d64();
  }
  if ((uVar14 & 1) != 0) {
    FUN_05920d64();
  }
  uVar13 = (uint)(byte)(cVar33 != '\0' | auVar44[3]) & (in_stack_00000088 ^ 1);
  if ((uVar16 & 1) == 0 && uVar31 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar8) {
      bVar10 = auVar44[0] & 1;
    }
    else {
      bVar10 = 1;
    }
  }
  else {
    bVar10 = 0;
  }
  lVar35 = *(long *)(unaff_x19 + 0xe8);
  uVar17 = uVar17 & bVar10 != 0;
  if (lVar35 != 0) {
    uVar14 = FUN_059282d8();
    uVar21 = FUN_058fe174(lVar35,uVar14 & 1,0);
    if ((uVar21 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar41 = in_stack_00000864 == 1 | uVar41;
      uVar21 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar21 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar17 = 0;
        uVar13 = 0;
        uVar41 = 0;
        uStack0000000000000054 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        bVar10 = FUN_058fdc40(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar10 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar18 = auVar44._8_4_;
  if ((in_stack_00000080 & 0x100000000) == 0) {
    bVar10 = 0;
  }
  else {
    lVar35 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar35 == 0) goto LAB_05986378;
    if ((*(char *)(lVar35 + 0x15) != '\0') &&
       ((iVar18 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar35,0);
    }
    bVar10 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar10 != 0 || ((uVar41 & 1) != 0 || uVar17 != 0)) {
    if (((in_stack_00000080._4_4_ | uVar41 ^ 0xffffffff) & 1) == 0) {
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
    lVar35 = *(long *)(unaff_x19 + 0x268);
    if ((lVar35 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(lVar35 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
    FUN_05cb2938(in_stack_00000078,0);
  }
  if ((in_stack_00000080 & 0x100000000) == 0) {
    if ((uStack000000000000004c & 1) != 0) {
LAB_05984fa8:
      bVar8 = false;
      plVar24 = (long *)(unaff_x19 + 0x278);
      puVar29 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar23 = *puVar29;
      if (bVar8) {
        lVar35 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar35 == 0) goto LAB_05986378;
        uVar19 = FUN_059a158c(lVar35,0);
        uVar19 = FUN_059a1698(lVar35,uVar19,0);
        FUN_05c726ac(&stack0x000007f0,uVar19,0);
        lVar35 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar35 == 0) goto LAB_05986378;
        uVar19 = FUN_059a158c(lVar35,0);
        FUN_059a327c(lVar35,&stack0x00000390,uVar19,0);
      }
      else {
        uVar19 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar19,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar24,&stack0x000007f0,0,1,1,uVar23,0);
      }
      if ((*plVar24 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar24 + 0x58),&stack0x00000360,0);
      puVar6 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar35 = *(long *)puVar6;
      if (*(int *)(lVar35 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar35 = *(long *)puVar6;
      }
      if (**(long **)(lVar35 + 0xb8) == 0) goto LAB_05986378;
      plVar22 = (long *)(**(long **)(lVar35 + 0xb8) + 0x10);
      *plVar22 = in_stack_00000078;
      thunk_FUN_02bb0e9c(plVar22,in_stack_00000078);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar6 + 0xb8),in_stack_00000988,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*plVar24 == 0) goto LAB_05986378;
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
    uVar14 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((uStack000000000000004c | uVar14) & 1) != 0) {
      if ((uVar14 & 1) == 0) goto LAB_05984fa8;
      lVar35 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar35 == 0) goto LAB_05986378;
      lVar36 = *(long *)(lVar35 + 0x30);
      uVar14 = FUN_059a158c(lVar35,0);
      if (lVar36 == 0) goto LAB_05986378;
      if (*(uint *)(lVar36 + 0x18) <= uVar14) goto LAB_05986388;
      plVar24 = (long *)(lVar36 + (long)(int)uVar14 * 8 + 0x20);
      if (*plVar24 == 0) goto LAB_05986378;
      bVar8 = true;
      puVar29 = (undefined8 *)(*plVar24 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar6 = Method_System_Array_Resize<object>__;
  if ((uVar41 & 1) != 0) {
    if ((uVar26 & 0x10000) == 0) {
      if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar35 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar35 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar35 = *(long *)puVar6;
        if ((in_stack_00000080 & 0x100000000) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar35 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar35 == 0) goto LAB_05986378;
        lVar36 = *(long *)(lVar35 + 0x30);
        uVar14 = FUN_059a1568(lVar35,0);
        if (lVar36 == 0) goto LAB_05986378;
        if (*(uint *)(lVar36 + 0x18) <= uVar14) goto LAB_05986388;
        plVar24 = (long *)(lVar36 + (long)(int)uVar14 * 8 + 0x20);
        if (*plVar24 == 0) goto LAB_05986378;
        puVar29 = (undefined8 *)(*plVar24 + 0x58);
      }
      else {
        if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar24 = (long *)(unaff_x19 + 0x270);
        puVar29 = (undefined8 *)(*(long *)(lVar35 + 0xb8) + 0x18);
      }
      uVar23 = *puVar29;
      if ((in_stack_00000080 & 0x100000000) == 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar19 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar19,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar24,&stack0x000007b0,0,1,1,uVar23,0);
      }
      else {
        lVar35 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar35 == 0) goto LAB_05986378;
        uVar19 = FUN_059a1568(lVar35,0);
        uVar19 = FUN_059a1698(lVar35,uVar19,0);
        FUN_05c726ac(&stack0x000007b0,uVar19,0);
        lVar35 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar35 == 0) goto LAB_05986378;
        uVar19 = FUN_059a1568(lVar35,0);
        FUN_059a327c(lVar35,&stack0x000002f0,uVar19,0);
      }
      if ((*plVar24 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar24 + 0x58),&stack0x000002c0,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar24 == 0) goto LAB_05986378;
        FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
      FUN_05cb2938(in_stack_00000078,0);
      if ((in_stack_00000080 & 0x100000000) == 0) {
        lVar35 = *(long *)(unaff_x19 + 0x150);
        if (iStack0000000000000034 == 0) {
          if (lVar35 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar35,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar35 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar35,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar14 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar21 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar36 = *(long *)(unaff_x19 + 0x150);
      uVar23 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar35 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar21 & 1) == 0) {
        if (iStack0000000000000034 != 0) {
          if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x30), lVar35 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_05986388;
          if (lVar36 == 0) goto LAB_05986378;
          uVar28 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar25 = *(undefined8 *)(lVar35 + (long)(int)uVar14 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x30), lVar35 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_05986388;
        if (lVar36 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar36,uVar23,*(undefined8 *)(lVar35 + (long)(int)uVar14 * 8 + 0x20),0);
      }
      else {
        if ((lVar35 == 0) || (lVar37 = *(long *)(lVar35 + 0x30), lVar37 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar37 + 0x18) <= uVar14) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar25 = *(undefined8 *)(lVar37 + (long)(int)uVar14 * 8 + 0x20);
        uVar14 = FUN_059a158c(lVar35,0);
        if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_05986388;
        if (lVar36 == 0) goto LAB_05986378;
        uVar28 = *(undefined8 *)(lVar37 + (long)(int)uVar14 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar36,uVar23,uVar25,uVar28,0);
      }
      puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < iVar18 - 0xfbU) {
        lVar35 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar35 == 0) goto LAB_05986378;
        puVar29 = (undefined8 *)(lVar35 + 0xb8);
        *puVar29 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        thunk_FUN_02bb0e9c(puVar29);
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
  uVar21 = FUN_057f0fbc(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar21 & 1) != 0) {
    FUN_05920d64();
  }
  cVar33 = *(char *)(unaff_x20 + 0x1e0);
  if ((in_stack_00000080 & 0x100000000) == 0) {
    uVar19 = 2;
    if ((uVar13 & 1) == 0) {
      uVar19 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000998) {
      uVar2 = uVar19;
    }
    iVar18 = 0;
    if ((uVar17 == 0 && (uVar13 & 1) == 0) && cVar33 != '\0') {
      iVar18 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
    uVar21 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar21 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar18 = 0;
      }
    }
    uVar14 = 0;
    if (1 < in_stack_00000998) {
      uVar14 = uVar17;
    }
    if (uVar14 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar21 = FUN_0596ade4(0);
      if ((uVar21 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar13 & 1) == 0) {
          if (iVar18 == 0) {
            iVar18 = 2;
          }
          else if (iVar18 == 3) {
            iVar18 = 1;
          }
        }
      }
    }
    if (in_stack_00000070._4_4_ == 0) {
      lVar35 = *(long *)(unaff_x19 + 0x198);
      if (lVar35 == 0) goto LAB_05986378;
    }
    else {
      lVar35 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar35 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar35,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar35,uVar2,0,0);
    FUN_05914d8c(lVar35,iVar18,0);
    puVar6 = Method_System_Array_Reverse<int>__;
    lVar37 = *(long *)(unaff_x19 + 0x108);
    lVar36 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar36 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar36 = *(long *)puVar6;
    }
    puVar29 = *(undefined8 **)(lVar36 + 0xb8);
    lVar38 = puVar29[2];
    if (lVar38 == 0) {
      if (*(int *)(lVar36 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar29 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar23 = *puVar29;
      lVar38 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar38,uVar23,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar24 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar24 = lVar38;
      thunk_FUN_02bb0e9c(plVar24,lVar38);
    }
    if (lVar37 == 0) goto LAB_05986378;
    lVar36 = FUN_037a6b94(lVar37,lVar38,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar36 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000058 == 0) goto LAB_05986378;
      iVar18 = FUN_05c407c0(in_stack_00000058,0);
      if (iVar18 == 4) goto LAB_059859c0;
      uVar19 = 1;
    }
    else {
LAB_059859c0:
      uVar19 = 0;
    }
    uVar21 = FUN_05c97ba0(0);
    if ((uVar21 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar35,uVar19,0);
    }
    FUN_05920d64();
  }
  else {
    lVar35 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar35 == 0) goto LAB_05986378;
    if ((*(char *)(lVar35 + 0x15) != '\0') &&
       ((iVar18 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar35,0);
    }
    FUN_05986f8c();
  }
  if (in_stack_00000058 == 0) goto LAB_05986378;
  iVar18 = FUN_05c407c0(in_stack_00000058,0);
  if ((iVar18 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar23 = FUN_05c580a0(0);
    puVar6 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar21 = FUN_05c8c45c(uVar23,0,0);
    if ((uVar21 & 1) == 0) {
      uVar21 = FUN_0317392c(in_stack_00000058,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar21 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar23 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar6);
        }
        uVar21 = FUN_05c8c45c(uVar23,0,0);
        if ((uVar21 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (uVar17 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar41 & 1) == 0) {
      uVar21 = FUN_05c977c4(0);
      uVar23 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar21 & 1) == 0) {
        uVar25 = FUN_05c69330(0);
      }
      else {
        uVar25 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar23,uVar25,0);
    }
  }
  else if ((((in_stack_00000080 & 0x100000000) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) ||
          ((uVar26 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar35 = FUN_05993404(0);
    if (lVar35 == 0) goto LAB_05986378;
    uVar19 = *(undefined4 *)(lVar35 + 0x48);
    FUN_059b478c(uVar19,&stack0x00000720,&stack0x0000071c,0);
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
                 *(undefined8 *)(unaff_x19 + 0x280),uVar19,0);
    FUN_05920d64();
  }
  if ((uVar26 & 0x100000000) != 0) {
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
  if ((uVar15 & 1) != 0) {
    FUN_05920d64();
  }
  uVar13 = 0;
  if (cVar33 != '\0') {
    uVar13 = 3;
  }
  uVar14 = (uint)(cVar33 == '\0');
  if (in_stack_00000998 < 2) {
    uVar14 = 1;
  }
  if (uVar17 != 0) {
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
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),((uVar14 | in_stack_00000088) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar13,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar26 = FUN_059285dc();
  uVar21 = FUN_059283a4();
  if (((uVar26 & 1) != 0) && ((uVar21 & 1) != 0)) {
    lVar35 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar35 == 0) goto LAB_05986378;
    FUN_05934854(lVar35);
    FUN_05920d64();
  }
  bVar8 = cVar33 == '\0';
  bVar9 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar8 || ((uVar12 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar27 = FUN_05928964(), (uVar27 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar10 = 0;
joined_r0x05985f3c:
    if (!bVar9 || bVar8) goto LAB_05985f40;
LAB_05985f60:
    bVar40 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar10 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar10 = 1;
    if (bVar9 && !bVar8) goto LAB_05985f60;
LAB_05985f40:
    bVar40 = lVar20 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar13 = uVar13 ^ 1;
  }
  plVar24 = (long *)(unaff_x19 + 0x230);
  plVar22 = (long *)(unaff_x19 + 0x240);
  if (uVar11 == 0) {
    if (cVar33 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar19 = FUN_05c7228c(&stack0x00000990,0);
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
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,in_stack_00000990,in_stack_00000994,uVar19,0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar33 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar24,0,plVar22,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar24,bVar40,plVar22,
                 &stack0x00000760,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05920d64();
  }
  lVar35 = *plVar24;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar13 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar10 & 1) == 0) && (((uVar11 == 0 || (lVar20 != 0)) || (bVar9 && !bVar8)))) {
    lVar20 = *plVar24;
    if (lVar20 == 0) goto LAB_05986378;
    uVar28 = *(undefined8 *)(lVar20 + 0x30);
    uVar25 = *(undefined8 *)(lVar20 + 0x28);
    uVar43 = *(undefined8 *)(lVar20 + 0x40);
    uVar42 = *(undefined8 *)(lVar20 + 0x38);
    uVar23 = *(undefined8 *)(lVar20 + 0x48);
    lVar20 = *(long *)(unaff_x19 + 600);
    if (lVar20 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar20 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar20 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar20 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar20 + 0x38);
    uVar30 = *(undefined8 *)(lVar20 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar30;
    in_stack_00000160 = uVar25;
    in_stack_00000168 = uVar28;
    in_stack_00000170 = uVar42;
    in_stack_00000178 = uVar43;
    in_stack_00000180 = uVar23;
    uVar27 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar27 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar35,0);
      FUN_05920d64();
    }
  }
  if (((uVar26 & 1) != 0) && ((uVar21 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar26 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar26 & 1) == 0) {
      return;
    }
    lVar20 = *plVar22;
    if (lVar20 != 0) {
      uVar28 = *(undefined8 *)(lVar20 + 0x30);
      uVar25 = *(undefined8 *)(lVar20 + 0x28);
      uVar43 = *(undefined8 *)(lVar20 + 0x40);
      uVar42 = *(undefined8 *)(lVar20 + 0x38);
      uVar23 = *(undefined8 *)(lVar20 + 0x48);
      lVar20 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar20 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar20 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar20 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar20 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar20 + 0x50);
        uVar30 = *(undefined8 *)(lVar20 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar30;
        in_stack_000000c0 = uVar25;
        in_stack_000000c8 = uVar28;
        in_stack_000000d0 = uVar42;
        in_stack_000000d8 = uVar43;
        in_stack_000000e0 = uVar23;
        uVar26 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar26 & 1) != 0) {
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


