/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures$$InvalidatePinchValue
ENTRY_POINT: 059845ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Hands_XRCommonHandGestures__InvalidatePinchValue(uint param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int in_w8;
  undefined8 *puVar22;
  undefined8 uVar23;
  long unaff_x19;
  long unaff_x20;
  uint uVar24;
  uint unaff_w22;
  long lVar25;
  uint unaff_w23;
  long lVar26;
  long lVar27;
  long lVar28;
  byte bVar29;
  int unaff_w26;
  uint uVar30;
  uint unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  uint uStack0000000000000044;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  byte bStack0000000000000070;
  uint uStack0000000000000074;
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
  byte in_stack_0000097b;
  byte in_stack_0000097c;
  int in_stack_00000980;
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
  
  uVar12 = uStack0000000000000074;
  if ((*(char *)(unaff_x19 + 0x134) != '\x01' || *(char *)(unaff_x19 + 0x140) != '\0') || in_w8 != 0
     ) {
    uVar12 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
  uVar30 = (unaff_w23 | unaff_w22 | param_1) & (in_stack_00000088 ^ 1);
  uStack0000000000000044 = unaff_w28;
  uVar13 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
  uVar10 = uVar30 | uVar12;
  iVar9 = FUN_05c9729c(0);
  puVar4 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar9 == 0x15) {
    uVar24 = uVar10;
    if ((uVar13 & 1) == 0) {
      uVar24 = uVar30;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar24 = uVar10;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05857e14(&stack0x000003d0,0);
  if ((float)in_stack_000003f0 == 1.0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05857e14(&stack0x000003d0,0);
    if ((float)((ulong)in_stack_000003f0 >> 0x20) != 1.0) goto LAB_05984690;
  }
  else {
LAB_05984690:
    uVar24 = uVar10;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar24 = uVar12 | uVar24;
  }
  uVar13 = FUN_05c972ec(0);
  uVar30 = uVar12 | uVar24;
  uVar10 = uVar30;
  if ((uVar13 & 1) == 0) {
    uVar10 = uVar24;
  }
  FUN_05c72cdc(&stack0x00000940,0,0);
  FUN_05c72cf8(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_05986378;
  plVar17 = (long *)(unaff_x19 + 0x228);
  FUN_059c4ca0(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (in_stack_00000058 == 0) goto LAB_05986378;
    iVar9 = thunk_FUN_05c42700(in_stack_00000058,0);
    puVar5 = PTR_DAT_0631ec68;
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&stack0x000003d0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar13 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0), (uVar13 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_05986378;
    uVar12 = uVar30 & iVar9 != 1;
    puVar22 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_058572fc(&stack0x000005f0,0);
      *puVar22 = uVar16;
      thunk_FUN_02bb0e9c(puVar22,uVar16);
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_05cac718(&stack0x000005c0,&stack0x00000590,0);
      if ((uVar13 & 1) != 0) {
        FUN_058573cc(puVar22,&stack0x00000560,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_058572fc(&stack0x00000530,0);
      *puVar1 = uVar16;
      thunk_FUN_02bb0e9c(puVar1,uVar16);
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
      if ((uVar13 & 1) != 0) {
        FUN_058573cc(puVar1,&stack0x000004a0,0);
      }
    }
    if (uVar12 != 0) {
      FUN_05986958();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05986378;
    bVar8 = (byte)uVar12 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar8;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar8;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar8;
    if ((uVar10 & 1) == 0) {
      uVar16 = *puVar22;
    }
    else {
      if (*plVar17 == 0) goto LAB_05986378;
      uVar16 = FUN_059c48ac(*plVar17,0);
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar16;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
    lVar15 = 0x248;
    if ((uVar30 & 1) == 0) {
      lVar15 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar15);
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_0317392c(*(long *)(unaff_x20 + 0x230),&stack0x00000868,
                      *(undefined8 *)
                       Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__),
        in_stack_00000868 == 0)) || (plVar14 = (long *)FUN_0597fbe8(), plVar14 == (long *)0x0))
    goto LAB_05986378;
    if (*plVar14 != *(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar14);
    }
    lVar15 = *plVar17;
    if (lVar15 != plVar14[0x45]) {
      if (lVar15 == 0) goto LAB_05986378;
      FUN_059c4858(lVar15,0);
      *plVar17 = plVar14[0x45];
      thunk_FUN_02bb0e9c(plVar17);
      lVar15 = *plVar17;
    }
    if (lVar15 == 0) goto LAB_05986378;
    uVar16 = FUN_059c48ac(lVar15,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar16;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x230,uVar16);
    *(long *)(unaff_x19 + 0x240) = plVar14[0x48];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
    *(long *)(unaff_x19 + 600) = plVar14[0x4b];
    thunk_FUN_02bb0e9c(unaff_x19 + 600);
    *(long *)(unaff_x19 + 0x260) = plVar14[0x4c];
    thunk_FUN_02bb0e9c(unaff_x19 + 0x260);
    uVar30 = uVar12;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000088 & 1) == 0) {
    if (*plVar17 == 0) goto LAB_05986378;
    uVar16 = FUN_059c48ac(*plVar17,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar16;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar16);
  }
  cVar3 = *(char *)(unaff_x20 + 0x191);
  FUN_0591c4b0();
  iVar9 = FUN_05c9729c(0);
  if (iVar9 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000078 == 0) goto LAB_05986378;
    FUN_05cbdf2c(in_stack_00000078,&stack0x00000470,&stack0x00000440,0);
  }
  puVar4 = Method_System_Array_Reverse<int>__;
  lVar25 = *(long *)(unaff_x19 + 0x108);
  lVar15 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar15 = *(long *)puVar4;
  }
  puVar22 = *(undefined8 **)(lVar15 + 0xb8);
  lVar26 = puVar22[1];
  if (lVar26 == 0) {
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar22 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar16 = *puVar22;
    lVar26 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar26,uVar16,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar17 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar17 = lVar26;
    thunk_FUN_02bb0e9c(plVar17,lVar26);
  }
  if (lVar25 == 0) goto LAB_05986378;
  lVar15 = FUN_037a6b94(lVar25,lVar26,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((in_stack_00000050 & 1) != 0) {
    FUN_05920d64();
  }
  if ((in_stack_00000068 & 0x100000000) != 0) {
    FUN_05920d64();
  }
  uVar12 = (uint)(cVar3 != '\0' | in_stack_0000097b) & (in_stack_00000088 ^ 1);
  if ((_bStack0000000000000070 & 1) == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && unaff_w29 == 0) {
      bVar8 = in_stack_00000978 & 1;
    }
    else {
      bVar8 = 1;
    }
  }
  else {
    bVar8 = 0;
  }
  lVar25 = *(long *)(unaff_x19 + 0xe8);
  uVar30 = uVar30 & bVar8 != 0;
  if (lVar25 != 0) {
    uVar10 = FUN_059282d8();
    uVar13 = FUN_058fe174(lVar25,uVar10 & 1,0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      bStack0000000000000070 = in_stack_00000864 == 1 | bStack0000000000000070;
      uVar13 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar13 & 1) == 0) && ((in_stack_00000060 & 0x100000000) == 0)) {
        uVar30 = 0;
        uVar12 = 0;
        bStack0000000000000070 = 0;
        in_stack_00000050._4_4_ = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        bVar8 = FUN_058fdc40(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar8 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  if ((in_stack_00000080 & 0x100000000) == 0) {
    bVar8 = 0;
  }
  else {
    lVar25 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar25 == 0) goto LAB_05986378;
    if ((*(char *)(lVar25 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar25,0);
    }
    bVar8 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar8 != 0 || ((bStack0000000000000070 & 1) != 0 || uVar30 != 0)) {
    if (((in_stack_00000080._4_1_ | bStack0000000000000070 ^ 0xff) & 1) == 0) {
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
    lVar25 = *(long *)(unaff_x19 + 0x268);
    if ((lVar25 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(lVar25 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
    FUN_05cb2938(in_stack_00000078,0);
  }
  if ((in_stack_00000080 & 0x100000000) == 0) {
    if ((in_stack_00000048 & 0x100000000) != 0) {
LAB_05984fa8:
      bVar6 = false;
      plVar17 = (long *)(unaff_x19 + 0x278);
      puVar22 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar16 = *puVar22;
      if (bVar6) {
        lVar25 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar25 == 0) goto LAB_05986378;
        uVar11 = FUN_059a158c(lVar25,0);
        uVar11 = FUN_059a1698(lVar25,uVar11,0);
        FUN_05c726ac(&stack0x000007f0,uVar11,0);
        lVar25 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar25 == 0) goto LAB_05986378;
        uVar11 = FUN_059a158c(lVar25,0);
        FUN_059a327c(lVar25,&stack0x00000390,uVar11,0);
      }
      else {
        uVar11 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar11,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar17,&stack0x000007f0,0,1,1,uVar16,0);
      }
      if ((*plVar17 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar17 + 0x58),&stack0x00000360,0);
      puVar4 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar25 = *(long *)puVar4;
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar25 = *(long *)puVar4;
      }
      if (**(long **)(lVar25 + 0xb8) == 0) goto LAB_05986378;
      plVar14 = (long *)(**(long **)(lVar25 + 0xb8) + 0x10);
      *plVar14 = in_stack_00000078;
      thunk_FUN_02bb0e9c(plVar14,in_stack_00000078);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar4 + 0xb8),in_stack_00000988,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*plVar17 == 0) goto LAB_05986378;
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
    uVar10 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((in_stack_00000048._4_4_ | uVar10) & 1) != 0) {
      if ((uVar10 & 1) == 0) goto LAB_05984fa8;
      lVar25 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar25 == 0) goto LAB_05986378;
      lVar26 = *(long *)(lVar25 + 0x30);
      uVar10 = FUN_059a158c(lVar25,0);
      if (lVar26 == 0) goto LAB_05986378;
      if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_05986388;
      plVar17 = (long *)(lVar26 + (long)(int)uVar10 * 8 + 0x20);
      if (*plVar17 == 0) goto LAB_05986378;
      bVar6 = true;
      puVar22 = (undefined8 *)(*plVar17 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar4 = Method_System_Array_Resize<object>__;
  if ((bStack0000000000000070 & 1) != 0) {
    if ((in_stack_00000020 & 0x100000000) == 0) {
      if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar25 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar25 = *(long *)puVar4;
        if ((in_stack_00000080 & 0x100000000) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar25 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar25 == 0) goto LAB_05986378;
        lVar26 = *(long *)(lVar25 + 0x30);
        uVar10 = FUN_059a1568(lVar25,0);
        if (lVar26 == 0) goto LAB_05986378;
        if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_05986388;
        plVar17 = (long *)(lVar26 + (long)(int)uVar10 * 8 + 0x20);
        if (*plVar17 == 0) goto LAB_05986378;
        puVar22 = (undefined8 *)(*plVar17 + 0x58);
      }
      else {
        if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar17 = (long *)(unaff_x19 + 0x270);
        puVar22 = (undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x18);
      }
      uVar16 = *puVar22;
      if ((in_stack_00000080 & 0x100000000) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar11,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar17,&stack0x000007b0,0,1,1,uVar16,0);
      }
      else {
        lVar25 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar25 == 0) goto LAB_05986378;
        uVar11 = FUN_059a1568(lVar25,0);
        uVar11 = FUN_059a1698(lVar25,uVar11,0);
        FUN_05c726ac(&stack0x000007b0,uVar11,0);
        lVar25 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar25 == 0) goto LAB_05986378;
        uVar11 = FUN_059a1568(lVar25,0);
        FUN_059a327c(lVar25,&stack0x000002f0,uVar11,0);
      }
      if ((*plVar17 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar17 + 0x58),&stack0x000002c0,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar17 == 0) goto LAB_05986378;
        FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
      FUN_05cb2938(in_stack_00000078,0);
      if ((in_stack_00000080 & 0x100000000) == 0) {
        lVar25 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000030._4_4_ == 0) {
          if (lVar25 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar25,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar25 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar25,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar10 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar13 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar26 = *(long *)(unaff_x19 + 0x150);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar25 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar13 & 1) == 0) {
        if (in_stack_00000030._4_4_ != 0) {
          if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x30), lVar25 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar25 + 0x18) <= uVar10) goto LAB_05986388;
          if (lVar26 == 0) goto LAB_05986378;
          uVar21 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar18 = *(undefined8 *)(lVar25 + (long)(int)uVar10 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x30), lVar25 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar25 + 0x18) <= uVar10) goto LAB_05986388;
        if (lVar26 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar26,uVar16,*(undefined8 *)(lVar25 + (long)(int)uVar10 * 8 + 0x20),0);
      }
      else {
        if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x30), lVar27 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar27 + 0x18) <= uVar10) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar18 = *(undefined8 *)(lVar27 + (long)(int)uVar10 * 8 + 0x20);
        uVar10 = FUN_059a158c(lVar25,0);
        if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_05986388;
        if (lVar26 == 0) goto LAB_05986378;
        uVar21 = *(undefined8 *)(lVar27 + (long)(int)uVar10 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar26,uVar16,uVar18,uVar21,0);
      }
      puVar4 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < in_stack_00000980 - 0xfbU) {
        lVar25 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar25 == 0) goto LAB_05986378;
        puVar22 = (undefined8 *)(lVar25 + 0xb8);
        *puVar22 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        thunk_FUN_02bb0e9c(puVar22);
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
  uVar13 = FUN_057f0fbc(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar13 & 1) != 0) {
    FUN_05920d64();
  }
  cVar3 = *(char *)(unaff_x20 + 0x1e0);
  if ((in_stack_00000080 & 0x100000000) == 0) {
    uVar11 = 2;
    if ((uVar12 & 1) == 0) {
      uVar11 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000998) {
      uVar2 = uVar11;
    }
    iVar9 = 0;
    if ((uVar30 == 0 && (uVar12 & 1) == 0) && cVar3 != '\0') {
      iVar9 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
    uVar13 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar9 = 0;
      }
    }
    uVar10 = 0;
    if (1 < in_stack_00000998) {
      uVar10 = uVar30;
    }
    if (uVar10 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_0596ade4(0);
      if ((uVar13 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar12 & 1) == 0) {
          if (iVar9 == 0) {
            iVar9 = 2;
          }
          else if (iVar9 == 3) {
            iVar9 = 1;
          }
        }
      }
    }
    if (uStack0000000000000074 == 0) {
      lVar25 = *(long *)(unaff_x19 + 0x198);
      if (lVar25 == 0) goto LAB_05986378;
    }
    else {
      lVar25 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar25 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar25,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar25,uVar2,0,0);
    FUN_05914d8c(lVar25,iVar9,0);
    puVar4 = Method_System_Array_Reverse<int>__;
    lVar27 = *(long *)(unaff_x19 + 0x108);
    lVar26 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar26 = *(long *)puVar4;
    }
    puVar22 = *(undefined8 **)(lVar26 + 0xb8);
    lVar28 = puVar22[2];
    if (lVar28 == 0) {
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar22 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar16 = *puVar22;
      lVar28 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar28,uVar16,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar17 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar17 = lVar28;
      thunk_FUN_02bb0e9c(plVar17,lVar28);
    }
    if (lVar27 == 0) goto LAB_05986378;
    lVar26 = FUN_037a6b94(lVar27,lVar28,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar26 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000058 == 0) goto LAB_05986378;
      iVar9 = FUN_05c407c0(in_stack_00000058,0);
      if (iVar9 == 4) goto LAB_059859c0;
      uVar11 = 1;
    }
    else {
LAB_059859c0:
      uVar11 = 0;
    }
    uVar13 = FUN_05c97ba0(0);
    if ((uVar13 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar25,uVar11,0);
    }
    FUN_05920d64();
  }
  else {
    lVar25 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar25 == 0) goto LAB_05986378;
    if ((*(char *)(lVar25 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar25,0);
    }
    FUN_05986f8c();
  }
  if (in_stack_00000058 == 0) goto LAB_05986378;
  iVar9 = FUN_05c407c0(in_stack_00000058,0);
  if ((iVar9 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar16 = FUN_05c580a0(0);
    puVar4 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar13 = FUN_05c8c45c(uVar16,0,0);
    if ((uVar13 & 1) == 0) {
      uVar13 = FUN_0317392c(in_stack_00000058,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar16 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar4);
        }
        uVar13 = FUN_05c8c45c(uVar16,0,0);
        if ((uVar13 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (uVar30 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (bStack0000000000000070 & 1) == 0) {
      uVar13 = FUN_05c977c4(0);
      uVar16 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar13 & 1) == 0) {
        uVar18 = FUN_05c69330(0);
      }
      else {
        uVar18 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar16,uVar18,0);
    }
  }
  else if ((((in_stack_00000080 & 0x100000000) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) ||
          ((in_stack_00000978 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((uVar12 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar25 = FUN_05993404(0);
    if (lVar25 == 0) goto LAB_05986378;
    uVar11 = *(undefined4 *)(lVar25 + 0x48);
    FUN_059b478c(uVar11,&stack0x00000720,&stack0x0000071c,0);
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
                 *(undefined8 *)(unaff_x19 + 0x280),uVar11,0);
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
  if ((unaff_w27 & 1) != 0) {
    FUN_05920d64();
  }
  uVar12 = 0;
  if (cVar3 != '\0') {
    uVar12 = 3;
  }
  uVar10 = (uint)(cVar3 == '\0');
  if (in_stack_00000998 < 2) {
    uVar10 = 1;
  }
  if (uVar30 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar12 = 0, 1 < in_stack_00000998)
       ) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_0596ade4(0);
      uVar12 = uVar12 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),((uVar10 | in_stack_00000088) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar12,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar13 = FUN_059285dc();
  uVar19 = FUN_059283a4();
  if (((uVar13 & 1) != 0) && ((uVar19 & 1) != 0)) {
    lVar25 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar25 == 0) goto LAB_05986378;
    FUN_05934854(lVar25);
    FUN_05920d64();
  }
  bVar6 = cVar3 == '\0';
  bVar7 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar6 || ((uStack0000000000000044 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar20 = FUN_05928964(), (uVar20 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar8 = 0;
joined_r0x05985f3c:
    if (!bVar7 || bVar6) goto LAB_05985f40;
LAB_05985f60:
    bVar29 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar8 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar8 = 1;
    if (bVar7 && !bVar6) goto LAB_05985f60;
LAB_05985f40:
    bVar29 = lVar15 == 0 & (bVar8 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar12 = uVar12 ^ 1;
  }
  plVar17 = (long *)(unaff_x19 + 0x230);
  plVar14 = (long *)(unaff_x19 + 0x240);
  if (unaff_w26 == 0) {
    if (cVar3 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar11 = FUN_05c7228c(&stack0x00000990,0);
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
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,in_stack_00000990,in_stack_00000994,uVar11,0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar3 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar17,0,plVar14,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar17,bVar29,plVar14,
                 &stack0x00000760,unaff_x19 + 0x288,bVar8 & 1);
    FUN_05920d64();
  }
  lVar25 = *plVar17;
  if ((bVar8 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar12 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar8 & 1) == 0) && (((unaff_w26 == 0 || (lVar15 != 0)) || (bVar7 && !bVar6)))) {
    lVar15 = *plVar17;
    if (lVar15 == 0) goto LAB_05986378;
    uVar21 = *(undefined8 *)(lVar15 + 0x30);
    uVar18 = *(undefined8 *)(lVar15 + 0x28);
    uVar32 = *(undefined8 *)(lVar15 + 0x40);
    uVar31 = *(undefined8 *)(lVar15 + 0x38);
    uVar16 = *(undefined8 *)(lVar15 + 0x48);
    lVar15 = *(long *)(unaff_x19 + 600);
    if (lVar15 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar15 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar15 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar15 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar15 + 0x38);
    uVar23 = *(undefined8 *)(lVar15 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar23;
    in_stack_00000160 = uVar18;
    in_stack_00000168 = uVar21;
    in_stack_00000170 = uVar31;
    in_stack_00000178 = uVar32;
    in_stack_00000180 = uVar16;
    uVar20 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar20 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar25,0);
      FUN_05920d64();
    }
  }
  if (((uVar13 & 1) != 0) && ((uVar19 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar13 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar13 & 1) == 0) {
      return;
    }
    lVar15 = *plVar14;
    if (lVar15 != 0) {
      uVar21 = *(undefined8 *)(lVar15 + 0x30);
      uVar18 = *(undefined8 *)(lVar15 + 0x28);
      uVar32 = *(undefined8 *)(lVar15 + 0x40);
      uVar31 = *(undefined8 *)(lVar15 + 0x38);
      uVar16 = *(undefined8 *)(lVar15 + 0x48);
      lVar15 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar15 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar15 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar15 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar15 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar15 + 0x50);
        uVar23 = *(undefined8 *)(lVar15 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar23;
        in_stack_000000c0 = uVar18;
        in_stack_000000c8 = uVar21;
        in_stack_000000d0 = uVar31;
        in_stack_000000d8 = uVar32;
        in_stack_000000e0 = uVar16;
        uVar13 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar13 & 1) != 0) {
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


