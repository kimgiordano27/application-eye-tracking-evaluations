/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures.PinchPoseUpdatedEventArgs$$.ctor
ENTRY_POINT: 05984398
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Hands_XRCommonHandGestures_PinchPoseUpdatedEventArgs___ctor(void)

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
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  uint uVar28;
  long lVar29;
  int iVar30;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint uVar31;
  uint unaff_w22;
  long lVar32;
  uint unaff_w23;
  long lVar33;
  long lVar34;
  long lVar35;
  char cVar36;
  byte bVar37;
  int unaff_w26;
  uint unaff_w28;
  uint uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 in_stack_00000030;
  uint uStack0000000000000044;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
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
  undefined8 in_stack_000003f0;
  undefined4 in_stack_0000071c;
  long in_stack_00000758;
  undefined4 in_stack_0000076c;
  int in_stack_00000864;
  long in_stack_00000868;
  byte in_stack_00000978;
  byte in_stack_00000979;
  byte in_stack_0000097a;
  byte in_stack_0000097b;
  byte in_stack_0000097c;
  int in_stack_00000980;
  int in_stack_00000984;
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
  
  uVar18 = FUN_059282c8();
  if ((uVar18 & 1) == 0) {
    uStack0000000000000064 = FUN_059282d8();
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((in_stack_00000978 & 1) == 0)) {
    cVar36 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar36 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_05986378;
  uVar11 = FUN_059c1cb4();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05986378;
  uVar12 = FUN_059a99b0(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05986378;
  bVar8 = unaff_w21 != 0;
  uVar13 = FUN_0595c330(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar36 == '\0' && !bVar8) {
    cVar36 = '\0';
    uVar14 = 0;
  }
  else {
    iVar16 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar14 = FUN_05983644();
    uVar14 = (uint)(iVar16 == 2) | uVar14 ^ 1;
  }
  uVar14 = (uint)(in_stack_0000097a | in_stack_00000979) |
           in_stack_00000088 | uVar14 | uStack0000000000000064;
  if ((in_stack_00000080._4_4_ & uVar14 & 1) != 0) {
    uVar14 = in_stack_0000097a & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar36 == '\0') {
    if (((uint)(unaff_w21 == 0) & (uStack0000000000000064 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
      bVar9 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar9 = false;
    }
  }
  else {
    lVar29 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar29 == 0) goto LAB_05986378;
    iVar16 = in_stack_00000984 + -1;
    iVar30 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar30 = 300;
    }
    if (499 < iVar16) {
      iVar16 = 500;
    }
    if ((in_stack_00000978 & 1) != 0) {
      iVar30 = iVar16;
    }
    *(int *)(lVar29 + 0x10) = iVar30;
    if (iVar30 < 500) {
      *(undefined1 *)(lVar29 + 0xd8) = 0;
      bVar9 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar9 = true;
    }
  }
  uVar28 = (uint)(cVar4 != '\0');
  uVar38 = uVar14 | uVar28;
  uVar15 = FUN_05986760();
  if ((in_stack_00000080 & 0x100000000) == 0) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar3 = in_stack_00000070._4_4_;
  if ((bVar10 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(unaff_x20 + 0x1e0) != '\x01' || ((uint)(bVar9 || bVar8) & (uVar38 ^ 1)) != 0)) {
    uVar3 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
  uVar15 = (unaff_w23 | unaff_w22 | uVar15) & (in_stack_00000088 ^ 1);
  uStack0000000000000044 = unaff_w28;
  uVar18 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
  uVar5 = uVar15 | uVar3;
  iVar16 = FUN_05c9729c(0);
  puVar6 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar16 == 0x15) {
    uVar31 = uVar5;
    if ((uVar18 & 1) == 0) {
      uVar31 = uVar15;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar31 = uVar5;
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
    uVar31 = uVar5;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar31 = uVar3 | uVar31;
  }
  uVar18 = FUN_05c972ec(0);
  uVar15 = uVar3 | uVar31;
  uVar5 = uVar15;
  if ((uVar18 & 1) == 0) {
    uVar5 = uVar31;
  }
  FUN_05c72cdc(&stack0x00000940,0,0);
  FUN_05c72cf8(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05986378;
  plVar21 = (long *)(unaff_x19 + 0x228);
  FUN_059c4ca0(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (in_stack_00000058 == 0) goto LAB_05986378;
    iVar16 = thunk_FUN_05c42700(in_stack_00000058,0);
    puVar7 = PTR_DAT_0631ec68;
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&stack0x000003d0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar18 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0), (uVar18 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05986378;
    uVar3 = uVar15 & iVar16 != 1;
    puVar26 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar20 = FUN_058572fc(&stack0x000005f0,0);
      *puVar26 = uVar20;
      thunk_FUN_02bb0e9c(puVar26,uVar20);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_05cac718(&stack0x000005c0,&stack0x00000590,0);
      if ((uVar18 & 1) != 0) {
        FUN_058573cc(puVar26,&stack0x00000560,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar20 = FUN_058572fc(&stack0x00000530,0);
      *puVar1 = uVar20;
      thunk_FUN_02bb0e9c(puVar1,uVar20);
    }
    else {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
      if ((uVar18 & 1) != 0) {
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
      uVar20 = *puVar26;
    }
    else {
      if (*plVar21 == 0) goto LAB_05986378;
      uVar20 = FUN_059c48ac(*plVar21,0);
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar20;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
    lVar29 = 0x248;
    if ((uVar15 & 1) == 0) {
      lVar29 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar29);
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0317392c(*(long *)(unaff_x20 + 0x230),&stack0x00000868,
                      *(undefined8 *)
                       Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__),
        in_stack_00000868 == 0)) || (plVar19 = (long *)FUN_0597fbe8(), plVar19 == (long *)0x0))
    goto LAB_05986378;
    if (*plVar19 != *(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar19);
    }
    lVar29 = *plVar21;
    if (lVar29 != plVar19[0x45]) {
      if (lVar29 == 0) goto LAB_05986378;
      FUN_059c4858(lVar29,0);
      *plVar21 = plVar19[0x45];
      thunk_FUN_02bb0e9c(plVar21);
      lVar29 = *plVar21;
    }
    if (lVar29 == 0) goto LAB_05986378;
    uVar20 = FUN_059c48ac(lVar29,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar20;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230,uVar20);
    *(long *)(unaff_x19 + 0x240) = plVar19[0x48];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
    *(long *)(unaff_x19 + 600) = plVar19[0x4b];
    thunk_FUN_02bb0e9c(unaff_x19 + 600);
    *(long *)(unaff_x19 + 0x260) = plVar19[0x4c];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x260);
    uVar15 = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000088 & 1) == 0) {
    if (*plVar21 == 0) goto LAB_05986378;
    uVar20 = FUN_059c48ac(*plVar21,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar20;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar20);
  }
  cVar36 = *(char *)(unaff_x20 + 0x191);
  FUN_0591c4b0();
  iVar16 = FUN_05c9729c(0);
  if (iVar16 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000078 == 0) goto LAB_05986378;
    FUN_05cbdf2c(in_stack_00000078,&stack0x00000470,&stack0x00000440,0);
  }
  puVar6 = Method_System_Array_Reverse<int>__;
  lVar32 = *(long *)(unaff_x19 + 0x108);
  lVar29 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar29 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar29 = *(long *)puVar6;
  }
  puVar26 = *(undefined8 **)(lVar29 + 0xb8);
  lVar33 = puVar26[1];
  if (lVar33 == 0) {
    if (*(int *)(lVar29 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar26 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    }
    uVar20 = *puVar26;
    lVar33 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar33,uVar20,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar21 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar21 = lVar33;
    thunk_FUN_02bb0e9c(plVar21,lVar33);
  }
  if (lVar32 == 0) goto LAB_05986378;
  lVar29 = FUN_037a6b94(lVar32,lVar33,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((uVar11 & 1) != 0) {
    FUN_05920d64();
  }
  if ((uVar12 & 1) != 0) {
    FUN_05920d64();
  }
  uVar11 = (uint)(cVar36 != '\0' | in_stack_0000097b) & (in_stack_00000088 ^ 1);
  if ((uVar14 & 1) == 0 && uVar28 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar8) {
      bVar10 = in_stack_00000978 & 1;
    }
    else {
      bVar10 = 1;
    }
  }
  else {
    bVar10 = 0;
  }
  lVar32 = *(long *)(unaff_x19 + 0xe8);
  uVar15 = uVar15 & bVar10 != 0;
  if (lVar32 != 0) {
    uVar12 = FUN_059282d8();
    uVar18 = FUN_058fe174(lVar32,uVar12 & 1,0);
    if ((uVar18 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      uVar38 = in_stack_00000864 == 1 | uVar38;
      uVar18 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar18 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar15 = 0;
        uVar11 = 0;
        uVar38 = 0;
        in_stack_00000050._4_4_ = 0;
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
  if ((in_stack_00000080 & 0x100000000) == 0) {
    bVar10 = 0;
  }
  else {
    lVar32 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar32 == 0) goto LAB_05986378;
    if ((*(char *)(lVar32 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar32,0);
    }
    bVar10 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar10 != 0 || ((uVar38 & 1) != 0 || uVar15 != 0)) {
    if (((in_stack_00000080._4_4_ | uVar38 ^ 0xffffffff) & 1) == 0) {
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
    lVar32 = *(long *)(unaff_x19 + 0x268);
    if ((lVar32 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(lVar32 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
    FUN_05cb2938(in_stack_00000078,0);
  }
  if ((in_stack_00000080 & 0x100000000) == 0) {
    if ((in_stack_00000048 & 0x100000000) != 0) {
LAB_05984fa8:
      bVar8 = false;
      plVar21 = (long *)(unaff_x19 + 0x278);
      puVar26 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar20 = *puVar26;
      if (bVar8) {
        lVar32 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar32 == 0) goto LAB_05986378;
        uVar17 = FUN_059a158c(lVar32,0);
        uVar17 = FUN_059a1698(lVar32,uVar17,0);
        FUN_05c726ac(&stack0x000007f0,uVar17,0);
        lVar32 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar32 == 0) goto LAB_05986378;
        uVar17 = FUN_059a158c(lVar32,0);
        FUN_059a327c(lVar32,&stack0x00000390,uVar17,0);
      }
      else {
        uVar17 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar17,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar21,&stack0x000007f0,0,1,1,uVar20,0);
      }
      if ((*plVar21 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar21 + 0x58),&stack0x00000360,0);
      puVar6 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar32 = *(long *)puVar6;
      if (*(int *)(lVar32 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar32 = *(long *)puVar6;
      }
      if (**(long **)(lVar32 + 0xb8) == 0) goto LAB_05986378;
      plVar19 = (long *)(**(long **)(lVar32 + 0xb8) + 0x10);
      *plVar19 = in_stack_00000078;
      thunk_FUN_02bb0e9c(plVar19,in_stack_00000078);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar6 + 0xb8),in_stack_00000988,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*plVar21 == 0) goto LAB_05986378;
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
    uVar12 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((in_stack_00000048._4_4_ | uVar12) & 1) != 0) {
      if ((uVar12 & 1) == 0) goto LAB_05984fa8;
      lVar32 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar32 == 0) goto LAB_05986378;
      lVar33 = *(long *)(lVar32 + 0x30);
      uVar12 = FUN_059a158c(lVar32,0);
      if (lVar33 == 0) goto LAB_05986378;
      if (*(uint *)(lVar33 + 0x18) <= uVar12) goto LAB_05986388;
      plVar21 = (long *)(lVar33 + (long)(int)uVar12 * 8 + 0x20);
      if (*plVar21 == 0) goto LAB_05986378;
      bVar8 = true;
      puVar26 = (undefined8 *)(*plVar21 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar6 = Method_System_Array_Resize<object>__;
  if ((uVar38 & 1) != 0) {
    if ((in_stack_0000097a & 1) == 0) {
      if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar32 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar32 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar32 = *(long *)puVar6;
        if ((in_stack_00000080 & 0x100000000) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar32 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar32 == 0) goto LAB_05986378;
        lVar33 = *(long *)(lVar32 + 0x30);
        uVar12 = FUN_059a1568(lVar32,0);
        if (lVar33 == 0) goto LAB_05986378;
        if (*(uint *)(lVar33 + 0x18) <= uVar12) goto LAB_05986388;
        plVar21 = (long *)(lVar33 + (long)(int)uVar12 * 8 + 0x20);
        if (*plVar21 == 0) goto LAB_05986378;
        puVar26 = (undefined8 *)(*plVar21 + 0x58);
      }
      else {
        if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar21 = (long *)(unaff_x19 + 0x270);
        puVar26 = (undefined8 *)(*(long *)(lVar32 + 0xb8) + 0x18);
      }
      uVar20 = *puVar26;
      if ((in_stack_00000080 & 0x100000000) == 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar17,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar21,&stack0x000007b0,0,1,1,uVar20,0);
      }
      else {
        lVar32 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar32 == 0) goto LAB_05986378;
        uVar17 = FUN_059a1568(lVar32,0);
        uVar17 = FUN_059a1698(lVar32,uVar17,0);
        FUN_05c726ac(&stack0x000007b0,uVar17,0);
        lVar32 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar32 == 0) goto LAB_05986378;
        uVar17 = FUN_059a1568(lVar32,0);
        FUN_059a327c(lVar32,&stack0x000002f0,uVar17,0);
      }
      if ((*plVar21 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar21 + 0x58),&stack0x000002c0,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar21 == 0) goto LAB_05986378;
        FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
      FUN_05cb2938(in_stack_00000078,0);
      if ((in_stack_00000080 & 0x100000000) == 0) {
        lVar32 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000030._4_4_ == 0) {
          if (lVar32 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar32,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar32 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar32,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar12 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar18 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar33 = *(long *)(unaff_x19 + 0x150);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar32 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar18 & 1) == 0) {
        if (in_stack_00000030._4_4_ != 0) {
          if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x30), lVar32 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_05986388;
          if (lVar33 == 0) goto LAB_05986378;
          uVar25 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar22 = *(undefined8 *)(lVar32 + (long)(int)uVar12 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x30), lVar32 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_05986388;
        if (lVar33 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar33,uVar20,*(undefined8 *)(lVar32 + (long)(int)uVar12 * 8 + 0x20),0);
      }
      else {
        if ((lVar32 == 0) || (lVar34 = *(long *)(lVar32 + 0x30), lVar34 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar34 + 0x18) <= uVar12) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar22 = *(undefined8 *)(lVar34 + (long)(int)uVar12 * 8 + 0x20);
        uVar12 = FUN_059a158c(lVar32,0);
        if (*(uint *)(lVar34 + 0x18) <= uVar12) goto LAB_05986388;
        if (lVar33 == 0) goto LAB_05986378;
        uVar25 = *(undefined8 *)(lVar34 + (long)(int)uVar12 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar33,uVar20,uVar22,uVar25,0);
      }
      puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < in_stack_00000980 - 0xfbU) {
        lVar32 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar32 == 0) goto LAB_05986378;
        puVar26 = (undefined8 *)(lVar32 + 0xb8);
        *puVar26 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        thunk_FUN_02bb0e9c(puVar26);
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
  if ((in_stack_00000050._4_4_ & 1) != 0) {
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
  uVar18 = FUN_057f0fbc(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar18 & 1) != 0) {
    FUN_05920d64();
  }
  cVar36 = *(char *)(unaff_x20 + 0x1e0);
  if ((in_stack_00000080 & 0x100000000) == 0) {
    uVar17 = 2;
    if ((uVar11 & 1) == 0) {
      uVar17 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000998) {
      uVar2 = uVar17;
    }
    iVar16 = 0;
    if ((uVar15 == 0 && (uVar11 & 1) == 0) && cVar36 != '\0') {
      iVar16 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
    uVar18 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar18 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar16 = 0;
      }
    }
    uVar12 = 0;
    if (1 < in_stack_00000998) {
      uVar12 = uVar15;
    }
    if (uVar12 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar18 = FUN_0596ade4(0);
      if ((uVar18 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar11 & 1) == 0) {
          if (iVar16 == 0) {
            iVar16 = 2;
          }
          else if (iVar16 == 3) {
            iVar16 = 1;
          }
        }
      }
    }
    if (in_stack_00000070._4_4_ == 0) {
      lVar32 = *(long *)(unaff_x19 + 0x198);
      if (lVar32 == 0) goto LAB_05986378;
    }
    else {
      lVar32 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar32 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar32,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar32,uVar2,0,0);
    FUN_05914d8c(lVar32,iVar16,0);
    puVar6 = Method_System_Array_Reverse<int>__;
    lVar34 = *(long *)(unaff_x19 + 0x108);
    lVar33 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar33 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar33 = *(long *)puVar6;
    }
    puVar26 = *(undefined8 **)(lVar33 + 0xb8);
    lVar35 = puVar26[2];
    if (lVar35 == 0) {
      if (*(int *)(lVar33 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar26 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar20 = *puVar26;
      lVar35 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar35,uVar20,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar21 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar21 = lVar35;
      thunk_FUN_02bb0e9c(plVar21,lVar35);
    }
    if (lVar34 == 0) goto LAB_05986378;
    lVar33 = FUN_037a6b94(lVar34,lVar35,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar33 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000058 == 0) goto LAB_05986378;
      iVar16 = FUN_05c407c0(in_stack_00000058,0);
      if (iVar16 == 4) goto LAB_059859c0;
      uVar17 = 1;
    }
    else {
LAB_059859c0:
      uVar17 = 0;
    }
    uVar18 = FUN_05c97ba0(0);
    if ((uVar18 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar32,uVar17,0);
    }
    FUN_05920d64();
  }
  else {
    lVar32 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar32 == 0) goto LAB_05986378;
    if ((*(char *)(lVar32 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar32,0);
    }
    FUN_05986f8c();
  }
  if (in_stack_00000058 == 0) goto LAB_05986378;
  iVar16 = FUN_05c407c0(in_stack_00000058,0);
  if ((iVar16 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar20 = FUN_05c580a0(0);
    puVar6 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar18 = FUN_05c8c45c(uVar20,0,0);
    if ((uVar18 & 1) == 0) {
      uVar18 = FUN_0317392c(in_stack_00000058,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar18 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar20 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar6);
        }
        uVar18 = FUN_05c8c45c(uVar20,0,0);
        if ((uVar18 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (uVar15 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar38 & 1) == 0) {
      uVar18 = FUN_05c977c4(0);
      uVar20 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar18 & 1) == 0) {
        uVar22 = FUN_05c69330(0);
      }
      else {
        uVar22 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar20,uVar22,0);
    }
  }
  else if ((((in_stack_00000080 & 0x100000000) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) ||
          ((in_stack_00000978 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar32 = FUN_05993404(0);
    if (lVar32 == 0) goto LAB_05986378;
    uVar17 = *(undefined4 *)(lVar32 + 0x48);
    FUN_059b478c(uVar17,&stack0x00000720,&stack0x0000071c,0);
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
                 *(undefined8 *)(unaff_x19 + 0x280),uVar17,0);
    FUN_05920d64();
  }
  if ((in_stack_0000097c & 1) != 0) {
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
  if ((uVar13 & 1) != 0) {
    FUN_05920d64();
  }
  uVar11 = 0;
  if (cVar36 != '\0') {
    uVar11 = 3;
  }
  uVar12 = (uint)(cVar36 == '\0');
  if (in_stack_00000998 < 2) {
    uVar12 = 1;
  }
  if (uVar15 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar11 = 0, 1 < in_stack_00000998)
       ) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_0596ade4(0);
      uVar11 = uVar11 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),((uVar12 | in_stack_00000088) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar11,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar18 = FUN_059285dc();
  uVar23 = FUN_059283a4();
  if (((uVar18 & 1) != 0) && ((uVar23 & 1) != 0)) {
    lVar32 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar32 == 0) goto LAB_05986378;
    FUN_05934854(lVar32);
    FUN_05920d64();
  }
  bVar8 = cVar36 == '\0';
  bVar9 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar8 || ((uStack0000000000000044 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar24 = FUN_05928964(), (uVar24 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar10 = 0;
joined_r0x05985f3c:
    if (!bVar9 || bVar8) goto LAB_05985f40;
LAB_05985f60:
    bVar37 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar10 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar10 = 1;
    if (bVar9 && !bVar8) goto LAB_05985f60;
LAB_05985f40:
    bVar37 = lVar29 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar11 = uVar11 ^ 1;
  }
  plVar21 = (long *)(unaff_x19 + 0x230);
  plVar19 = (long *)(unaff_x19 + 0x240);
  if (unaff_w26 == 0) {
    if (cVar36 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar17 = FUN_05c7228c(&stack0x00000990,0);
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
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,in_stack_00000990,in_stack_00000994,uVar17,0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar36 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar21,0,plVar19,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar21,bVar37,plVar19,
                 &stack0x00000760,unaff_x19 + 0x288,bVar10 & 1);
    FUN_05920d64();
  }
  lVar32 = *plVar21;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar11 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar10 & 1) == 0) && (((unaff_w26 == 0 || (lVar29 != 0)) || (bVar9 && !bVar8)))) {
    lVar29 = *plVar21;
    if (lVar29 == 0) goto LAB_05986378;
    uVar25 = *(undefined8 *)(lVar29 + 0x30);
    uVar22 = *(undefined8 *)(lVar29 + 0x28);
    uVar40 = *(undefined8 *)(lVar29 + 0x40);
    uVar39 = *(undefined8 *)(lVar29 + 0x38);
    uVar20 = *(undefined8 *)(lVar29 + 0x48);
    lVar29 = *(long *)(unaff_x19 + 600);
    if (lVar29 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar29 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar29 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar29 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar29 + 0x38);
    uVar27 = *(undefined8 *)(lVar29 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar27;
    in_stack_00000160 = uVar22;
    in_stack_00000168 = uVar25;
    in_stack_00000170 = uVar39;
    in_stack_00000178 = uVar40;
    in_stack_00000180 = uVar20;
    uVar24 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar24 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar32,0);
      FUN_05920d64();
    }
  }
  if (((uVar18 & 1) != 0) && ((uVar23 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar18 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar18 & 1) == 0) {
      return;
    }
    lVar29 = *plVar19;
    if (lVar29 != 0) {
      uVar25 = *(undefined8 *)(lVar29 + 0x30);
      uVar22 = *(undefined8 *)(lVar29 + 0x28);
      uVar40 = *(undefined8 *)(lVar29 + 0x40);
      uVar39 = *(undefined8 *)(lVar29 + 0x38);
      uVar20 = *(undefined8 *)(lVar29 + 0x48);
      lVar29 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar29 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar29 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar29 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar29 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar29 + 0x50);
        uVar27 = *(undefined8 *)(lVar29 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar27;
        in_stack_000000c0 = uVar22;
        in_stack_000000c8 = uVar25;
        in_stack_000000d0 = uVar39;
        in_stack_000000d8 = uVar40;
        in_stack_000000e0 = uVar20;
        uVar18 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar18 & 1) != 0) {
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


