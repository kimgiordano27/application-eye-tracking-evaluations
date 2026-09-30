/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures.GraspValueUpdatedEventArgs$$get_handedness
ENTRY_POINT: 05984924
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Hands_XRCommonHandGestures_GraspValueUpdatedEventArgs__get_handedness(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long lVar22;
  undefined8 *unaff_x23;
  long lVar23;
  long lVar24;
  long lVar25;
  long *unaff_x25;
  byte unaff_w26;
  ulong unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  byte in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  int iStack0000000000000068;
  byte bStack0000000000000070;
  int iStack0000000000000074;
  long in_stack_00000078;
  ulong in_stack_00000080;
  byte in_stack_00000088;
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
  undefined4 in_stack_0000071c;
  long in_stack_00000758;
  undefined4 in_stack_0000076c;
  int in_stack_00000864;
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
  
  FUN_058573cc();
  puVar20 = (undefined8 *)(unaff_x19 + 0x260);
  if (*(long *)(unaff_x19 + 0x260) == 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = FUN_058572fc(&stack0x00000530,0);
    *puVar20 = uVar12;
    thunk_FUN_02bb0e9c(puVar20,uVar12);
  }
  else {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_05cac718(&stack0x00000500,&stack0x000004d0,0);
    if ((uVar11 & 1) != 0) {
      FUN_058573cc(puVar20,&stack0x000004a0,0);
    }
  }
  if (unaff_w21 != 0) {
    FUN_05986958();
  }
  if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_05986378;
  bVar7 = (byte)unaff_w21 ^ 1;
  *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar7;
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar7;
  if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_05986378;
  *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar7;
  if ((unaff_x27 & 1) == 0) {
    uVar12 = *unaff_x23;
  }
  else {
    if (*unaff_x22 == 0) goto LAB_05986378;
    uVar12 = FUN_059c48ac(*unaff_x22,0);
  }
  *(undefined8 *)(unaff_x19 + 0x230) = uVar12;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x230);
  lVar13 = 0x248;
  if ((unaff_w26 & 1) == 0) {
    lVar13 = 0x260;
  }
  *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar13);
  thunk_FUN_02bb0e9c(unaff_x19 + 0x240);
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000088 & 1) == 0) {
    if (*unaff_x22 == 0) goto LAB_05986378;
    uVar12 = FUN_059c48ac(*unaff_x22,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar12;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar12);
  }
  cVar2 = *(char *)(unaff_x20 + 0x191);
  FUN_0591c4b0();
  iVar8 = FUN_05c9729c(0);
  if (iVar8 == 2) {
    FUN_0585539c(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_0585539c(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (in_stack_00000078 == 0) goto LAB_05986378;
    FUN_05cbdf2c(in_stack_00000078,&stack0x00000470,&stack0x00000440,0);
  }
  puVar3 = Method_System_Array_Reverse<int>__;
  lVar22 = *(long *)(unaff_x19 + 0x108);
  lVar13 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar13 = *(long *)puVar3;
  }
  puVar20 = *(undefined8 **)(lVar13 + 0xb8);
  lVar23 = puVar20[1];
  if (lVar23 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar20 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar12 = *puVar20;
    lVar23 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar23,uVar12,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar14 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar14 = lVar23;
    thunk_FUN_02bb0e9c(plVar14,lVar23);
  }
  if (lVar22 == 0) goto LAB_05986378;
  lVar13 = FUN_037a6b94(lVar22,lVar23,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((in_stack_00000050 & 1) != 0) {
    FUN_05920d64();
  }
  if ((_iStack0000000000000068 & 0x100000000) != 0) {
    FUN_05920d64();
  }
  in_stack_00000038 = (cVar2 != '\0' | in_stack_0000097b) & in_stack_00000038;
  if ((_bStack0000000000000070 & 1) == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && unaff_w28 == 0) {
      bVar7 = in_stack_00000978 & 1;
    }
    else {
      bVar7 = 1;
    }
  }
  else {
    bVar7 = 0;
  }
  lVar22 = *(long *)(unaff_x19 + 0xe8);
  bVar7 = unaff_w26 & bVar7 != 0;
  if (lVar22 != 0) {
    uVar9 = FUN_059282d8();
    uVar11 = FUN_058fe174(lVar22,uVar9 & 1,0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
      bStack0000000000000070 = in_stack_00000864 == 1 | bStack0000000000000070;
      uVar11 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar11 & 1) == 0) && ((in_stack_00000060 & 0x100000000) == 0)) {
        bVar7 = 0;
        in_stack_00000038 = 0;
        bStack0000000000000070 = 0;
        in_stack_00000050._4_4_ = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
        bVar6 = FUN_058fdc40(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar6 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  if ((in_stack_00000080 & 0x100000000) == 0) {
    bVar6 = 0;
  }
  else {
    lVar22 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar22 == 0) goto LAB_05986378;
    if ((*(char *)(lVar22 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar22,0);
    }
    bVar6 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar6 != 0 || ((bStack0000000000000070 & 1) != 0 || bVar7 != 0)) {
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
    lVar22 = *(long *)(unaff_x19 + 0x268);
    if ((lVar22 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
    FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(lVar22 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
    FUN_05cb2938(in_stack_00000078,0);
  }
  if ((in_stack_00000080 & 0x100000000) == 0) {
    if ((in_stack_00000048 & 0x100000000) != 0) {
LAB_05984fa8:
      bVar4 = false;
      plVar14 = (long *)(unaff_x19 + 0x278);
      puVar20 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar12 = *puVar20;
      if (bVar4) {
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05986378;
        uVar10 = FUN_059a158c(lVar22,0);
        uVar10 = FUN_059a1698(lVar22,uVar10,0);
        FUN_05c726ac(&stack0x000007f0,uVar10,0);
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05986378;
        uVar10 = FUN_059a158c(lVar22,0);
        FUN_059a327c(lVar22,&stack0x00000390,uVar10,0);
      }
      else {
        uVar10 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar10,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar14,&stack0x000007f0,0,1,1,uVar12,0);
      }
      if ((*plVar14 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar14 + 0x58),&stack0x00000360,0);
      puVar3 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar22 = *(long *)puVar3;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar22 = *(long *)puVar3;
      }
      if (**(long **)(lVar22 + 0xb8) == 0) goto LAB_05986378;
      plVar15 = (long *)(**(long **)(lVar22 + 0xb8) + 0x10);
      *plVar15 = in_stack_00000078;
      thunk_FUN_02bb0e9c(plVar15,in_stack_00000078);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar3 + 0xb8),in_stack_00000988,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*plVar14 == 0) goto LAB_05986378;
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
    uVar9 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((in_stack_00000048._4_4_ | uVar9) & 1) != 0) {
      if ((uVar9 & 1) == 0) goto LAB_05984fa8;
      lVar22 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar22 == 0) goto LAB_05986378;
      lVar23 = *(long *)(lVar22 + 0x30);
      uVar9 = FUN_059a158c(lVar22,0);
      if (lVar23 == 0) goto LAB_05986378;
      if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_05986388;
      plVar14 = (long *)(lVar23 + (long)(int)uVar9 * 8 + 0x20);
      if (*plVar14 == 0) goto LAB_05986378;
      bVar4 = true;
      puVar20 = (undefined8 *)(*plVar14 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar3 = Method_System_Array_Resize<object>__;
  if ((bStack0000000000000070 & 1) != 0) {
    if ((in_stack_00000020 & 0x100000000) == 0) {
      if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar22 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar22 = *(long *)puVar3;
        if ((in_stack_00000080 & 0x100000000) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05986378;
        lVar23 = *(long *)(lVar22 + 0x30);
        uVar9 = FUN_059a1568(lVar22,0);
        if (lVar23 == 0) goto LAB_05986378;
        if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_05986388;
        plVar14 = (long *)(lVar23 + (long)(int)uVar9 * 8 + 0x20);
        if (*plVar14 == 0) goto LAB_05986378;
        puVar20 = (undefined8 *)(*plVar14 + 0x58);
      }
      else {
        if ((in_stack_00000080 & 0x100000000) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar14 = (long *)(unaff_x19 + 0x270);
        puVar20 = (undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x18);
      }
      uVar12 = *puVar20;
      if ((in_stack_00000080 & 0x100000000) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar10,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar14,&stack0x000007b0,0,1,1,uVar12,0);
      }
      else {
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05986378;
        uVar10 = FUN_059a1568(lVar22,0);
        uVar10 = FUN_059a1698(lVar22,uVar10,0);
        FUN_05c726ac(&stack0x000007b0,uVar10,0);
        lVar22 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar22 == 0) goto LAB_05986378;
        uVar10 = FUN_059a1568(lVar22,0);
        FUN_059a327c(lVar22,&stack0x000002f0,uVar10,0);
      }
      if ((*plVar14 == 0) || (in_stack_00000078 == 0)) goto LAB_05986378;
      FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*plVar14 + 0x58),&stack0x000002c0,0);
      if ((in_stack_00000080 & 0x100000000) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar14 == 0) goto LAB_05986378;
        FUN_05cbe6a0(in_stack_00000078,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8,in_stack_00000078,0);
      FUN_05cb2938(in_stack_00000078,0);
      if ((in_stack_00000080 & 0x100000000) == 0) {
        lVar22 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000030._4_4_ == 0) {
          if (lVar22 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar22,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar22 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar22,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar9 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar11 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar23 = *(long *)(unaff_x19 + 0x150);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar22 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar11 & 1) == 0) {
        if (in_stack_00000030._4_4_ != 0) {
          if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x30), lVar22 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_05986388;
          if (lVar23 == 0) goto LAB_05986378;
          uVar19 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar16 = *(undefined8 *)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x30), lVar22 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_05986388;
        if (lVar23 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar23,uVar12,*(undefined8 *)(lVar22 + (long)(int)uVar9 * 8 + 0x20),0);
      }
      else {
        if ((lVar22 == 0) || (lVar24 = *(long *)(lVar22 + 0x30), lVar24 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar24 + 0x18) <= uVar9) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar16 = *(undefined8 *)(lVar24 + (long)(int)uVar9 * 8 + 0x20);
        uVar9 = FUN_059a158c(lVar22,0);
        if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_05986388;
        if (lVar23 == 0) goto LAB_05986378;
        uVar19 = *(undefined8 *)(lVar24 + (long)(int)uVar9 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar23,uVar12,uVar16,uVar19,0);
      }
      puVar3 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < in_stack_00000980 - 0xfbU) {
        lVar22 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar22 == 0) goto LAB_05986378;
        puVar20 = (undefined8 *)(lVar22 + 0xb8);
        *puVar20 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        thunk_FUN_02bb0e9c(puVar20);
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
  uVar11 = FUN_057f0fbc(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar11 & 1) != 0) {
    FUN_05920d64();
  }
  cVar2 = *(char *)(unaff_x20 + 0x1e0);
  if ((in_stack_00000080 & 0x100000000) == 0) {
    uVar10 = 2;
    if ((in_stack_00000038 & 1) == 0) {
      uVar10 = 0;
    }
    uVar1 = 0;
    if (1 < in_stack_00000998) {
      uVar1 = uVar10;
    }
    iVar8 = 0;
    if ((bVar7 == 0 && (in_stack_00000038 & 1) == 0) && cVar2 != '\0') {
      iVar8 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
    uVar11 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar8 = 0;
      }
    }
    bVar6 = 0;
    if (1 < in_stack_00000998) {
      bVar6 = bVar7;
    }
    if (bVar6 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_0596ade4(0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (in_stack_00000038 & 1) == 0) {
          if (iVar8 == 0) {
            iVar8 = 2;
          }
          else if (iVar8 == 3) {
            iVar8 = 1;
          }
        }
      }
    }
    if (iStack0000000000000074 == 0) {
      lVar22 = *(long *)(unaff_x19 + 0x198);
      if (lVar22 == 0) goto LAB_05986378;
    }
    else {
      lVar22 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar22 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar22,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar22,uVar1,0,0);
    FUN_05914d8c(lVar22,iVar8,0);
    puVar3 = Method_System_Array_Reverse<int>__;
    lVar24 = *(long *)(unaff_x19 + 0x108);
    lVar23 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar23 = *(long *)puVar3;
    }
    puVar20 = *(undefined8 **)(lVar23 + 0xb8);
    lVar25 = puVar20[2];
    if (lVar25 == 0) {
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar20 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar12 = *puVar20;
      lVar25 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar25,uVar12,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar14 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar14 = lVar25;
      thunk_FUN_02bb0e9c(plVar14,lVar25);
    }
    if (lVar24 == 0) goto LAB_05986378;
    lVar23 = FUN_037a6b94(lVar24,lVar25,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar23 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000058 == 0) goto LAB_05986378;
      iVar8 = FUN_05c407c0(in_stack_00000058,0);
      if (iVar8 == 4) goto LAB_059859c0;
      uVar10 = 1;
    }
    else {
LAB_059859c0:
      uVar10 = 0;
    }
    uVar11 = FUN_05c97ba0(0);
    if ((uVar11 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar22,uVar10,0);
    }
    FUN_05920d64();
  }
  else {
    lVar22 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar22 == 0) goto LAB_05986378;
    if ((*(char *)(lVar22 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar22,0);
    }
    FUN_05986f8c();
  }
  if (in_stack_00000058 == 0) goto LAB_05986378;
  iVar8 = FUN_05c407c0(in_stack_00000058,0);
  if ((iVar8 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar12 = FUN_05c580a0(0);
    puVar3 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar11 = FUN_05c8c45c(uVar12,0,0);
    if ((uVar11 & 1) == 0) {
      uVar11 = FUN_0317392c(in_stack_00000058,&stack0x00000758,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar11 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar12 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar3);
        }
        uVar11 = FUN_05c8c45c(uVar12,0,0);
        if ((uVar11 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (bVar7 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (bStack0000000000000070 & 1) == 0) {
      uVar11 = FUN_05c977c4(0);
      uVar12 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar11 & 1) == 0) {
        uVar16 = FUN_05c69330(0);
      }
      else {
        uVar16 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar12,uVar16,0);
    }
  }
  else if ((((in_stack_00000080 & 0x100000000) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) ||
          ((in_stack_00000978 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((in_stack_00000038 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar22 = FUN_05993404(0);
    if (lVar22 == 0) goto LAB_05986378;
    uVar10 = *(undefined4 *)(lVar22 + 0x48);
    FUN_059b478c(uVar10,&stack0x00000720,&stack0x0000071c,0);
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
                 *(undefined8 *)(unaff_x19 + 0x280),uVar10,0);
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
  if ((in_stack_00000048 & 1) != 0) {
    FUN_05920d64();
  }
  uVar9 = 0;
  if (cVar2 != '\0') {
    uVar9 = 3;
  }
  if (bVar7 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar9 = 0, 1 < in_stack_00000998))
    {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_0596ade4(0);
      uVar9 = uVar9 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000998 < 2 || cVar2 == '\0') | in_stack_00000088) ^ 0xff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar9,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar11 = FUN_059285dc();
  uVar17 = FUN_059283a4();
  if (((uVar11 & 1) != 0) && ((uVar17 & 1) != 0)) {
    lVar22 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar22 == 0) goto LAB_05986378;
    FUN_05934854(lVar22);
    FUN_05920d64();
  }
  bVar4 = cVar2 == '\0';
  bVar5 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar4 || ((in_stack_00000040._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar18 = FUN_05928964(), (uVar18 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar7 = 0;
joined_r0x05985f3c:
    if (!bVar5 || bVar4) goto LAB_05985f40;
LAB_05985f60:
    bVar6 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar7 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar7 = 1;
    if (bVar5 && !bVar4) goto LAB_05985f60;
LAB_05985f40:
    bVar6 = lVar13 == 0 & (bVar7 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar9 = uVar9 ^ 1;
  }
  plVar14 = (long *)(unaff_x19 + 0x230);
  plVar15 = (long *)(unaff_x19 + 0x240);
  if (iStack0000000000000068 == 0) {
    if (cVar2 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar10 = FUN_05c7228c(&stack0x00000990,0);
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
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,in_stack_00000990,in_stack_00000994,uVar10,0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar2 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar14,0,plVar15,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar14,bVar6,plVar15,
                 &stack0x00000760,unaff_x19 + 0x288,bVar7 & 1);
    FUN_05920d64();
  }
  lVar22 = *plVar14;
  if ((bVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar9 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar7 & 1) == 0) && (((iStack0000000000000068 == 0 || (lVar13 != 0)) || (bVar5 && !bVar4))))
  {
    lVar13 = *plVar14;
    if (lVar13 == 0) goto LAB_05986378;
    uVar19 = *(undefined8 *)(lVar13 + 0x30);
    uVar16 = *(undefined8 *)(lVar13 + 0x28);
    uVar27 = *(undefined8 *)(lVar13 + 0x40);
    uVar26 = *(undefined8 *)(lVar13 + 0x38);
    uVar12 = *(undefined8 *)(lVar13 + 0x48);
    lVar13 = *(long *)(unaff_x19 + 600);
    if (lVar13 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar13 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar13 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar13 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar13 + 0x38);
    uVar21 = *(undefined8 *)(lVar13 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar21;
    in_stack_00000160 = uVar16;
    in_stack_00000168 = uVar19;
    in_stack_00000170 = uVar26;
    in_stack_00000178 = uVar27;
    in_stack_00000180 = uVar12;
    uVar18 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar18 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar22,0);
      FUN_05920d64();
    }
  }
  if (((uVar11 & 1) != 0) && ((uVar17 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar11 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    lVar13 = *plVar15;
    if (lVar13 != 0) {
      uVar19 = *(undefined8 *)(lVar13 + 0x30);
      uVar16 = *(undefined8 *)(lVar13 + 0x28);
      uVar27 = *(undefined8 *)(lVar13 + 0x40);
      uVar26 = *(undefined8 *)(lVar13 + 0x38);
      uVar12 = *(undefined8 *)(lVar13 + 0x48);
      lVar13 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar13 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar13 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar13 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar13 + 0x50);
        uVar21 = *(undefined8 *)(lVar13 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar21;
        in_stack_000000c0 = uVar16;
        in_stack_000000c8 = uVar19;
        in_stack_000000d0 = uVar26;
        in_stack_000000d8 = uVar27;
        in_stack_000000e0 = uVar12;
        uVar11 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar11 & 1) != 0) {
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


