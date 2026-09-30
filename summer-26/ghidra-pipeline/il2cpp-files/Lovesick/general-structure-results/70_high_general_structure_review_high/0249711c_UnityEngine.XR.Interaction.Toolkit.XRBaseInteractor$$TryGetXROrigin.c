/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor$$TryGetXROrigin
ENTRY_POINT: 0249711c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__TryGetXROrigin
               (long param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               undefined1 param_6 [16],float param_7)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long in_x11;
  long lVar19;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar20;
  long *plVar21;
  uint uVar22;
  undefined8 unaff_x22;
  uint unaff_w23;
  long unaff_x25;
  long unaff_x27;
  uint unaff_w29;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  ulong uVar28;
  float fVar29;
  uint uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_s15;
  uint uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  int iStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  int in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  undefined4 uStack0000000000000058;
  float fStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  float in_stack_00000088;
  undefined8 in_stack_00000090;
  float in_stack_00000098;
  uint uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  long in_stack_000000d8;
  long in_stack_000000e0;
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  uint uStack00000000000000f0;
  uint uStack00000000000000f4;
  long in_stack_000000f8;
  float in_stack_00000100;
  undefined8 in_stack_00000110;
  long in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  uint in_stack_00000138;
  uint in_stack_00000140;
  int *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined4 in_stack_000017a4;
  
code_r0x0249711c:
  fVar23 = (param_2 - param_7) / param_4;
  param_4 = (param_3 - param_7) / param_4;
  *(float *)(param_1 + 0x88) = fVar23;
LAB_02497174:
  *(float *)(param_1 + 0xb0) = param_4;
  *(float *)(param_1 + 0xd8) = param_4;
  *(float *)(param_1 + 0x100) = fVar23;
  uVar30 = in_stack_00000130._4_4_;
  do {
    in_stack_00000130._4_4_ = uVar30;
    if ((uint)unaff_x22 <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar15 = in_x11 + unaff_x27 * 0x178;
    fVar23 = *(float *)(lVar15 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar15 + 0x5c) == '\0') &&
       ((*(byte *)(in_x11 + unaff_x27 * 0x178 + 400) & 1) != 0)) {
      fVar23 = -fVar23;
    }
    fVar26 = in_stack_00000038;
    if (((in_stack_00000040 == 2) || (fVar26 = fStack0000000000000028, in_stack_00000040 == 1)) ||
       (fVar26 = fStack0000000000000024, in_stack_00000040 == 0)) {
      fVar23 = fVar26 * fVar23;
    }
    lVar15 = in_x11 + unaff_x27 * 0x178;
    fVar24 = *(float *)(lVar15 + 0x88);
    fVar29 = *(float *)(lVar15 + 0x84);
    fVar26 = -2.1474836e+09;
    if (fVar29 != INFINITY) {
      fVar26 = (float)(int)fVar29;
    }
    fVar33 = *(float *)(lVar15 + 0xd4);
    fVar34 = *(float *)(lVar15 + 0xd8);
    fVar32 = -2.1474836e+09;
    if (fVar24 != INFINITY) {
      fVar32 = (float)(int)fVar24;
    }
    uVar25 = FUN_024e0374(fVar29 - fVar26,fVar24 - fVar32);
    *(undefined4 *)(lVar15 + 0x84) = uVar25;
    if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar34 = fVar34 - fVar32;
    *(float *)(lVar15 + 0x88) = fVar23;
    uVar25 = FUN_024e0374(fVar29 - fVar26,fVar34);
    *(undefined4 *)(in_x11 + unaff_x27 * 0x178 + 0xac) = uVar25;
    if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar33 = fVar33 - fVar26;
    *(float *)(in_x11 + unaff_x27 * 0x178 + 0xb0) = fVar23;
    fVar26 = (float)FUN_024e0374(fVar33,fVar34);
    *(float *)(lVar15 + 0xd4) = fVar26;
    if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar15 + 0xd8) = fVar23;
    uVar25 = FUN_024e0374(fVar33,fVar24 - fVar32);
    *(undefined4 *)(in_x11 + unaff_x27 * 0x178 + 0xfc) = uVar25;
    unaff_x22 = *(undefined8 *)(in_x11 + 0x18);
    if ((uint)unaff_x22 <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(in_x11 + unaff_x27 * 0x178 + 0x100) = fVar23;
    uVar30 = in_stack_00000130._4_4_;
    do {
      in_stack_00000130._4_4_ = uVar30;
      uVar22 = (uint)unaff_x22;
      uVar10 = unaff_w20;
      uVar30 = in_stack_00000130._4_4_;
      if (((int)unaff_x19[100] <= (int)unaff_w23) ||
         (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
      fVar24 = (float)((ulong)in_stack_00000110 >> 0x20);
      fVar26 = (float)in_stack_00000110;
      if (((int)in_stack_00000140 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
        if (uVar22 <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = in_x11 + unaff_x27 * 0x178;
        *(ulong *)(lVar15 + 0x70) =
             CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                      in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0x70));
        *(float *)(lVar15 + 0x78) = fVar24 + *(float *)(lVar15 + 0x78);
        if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = in_x11 + unaff_x27 * 0x178;
        *(ulong *)(lVar15 + 0x98) =
             CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                      in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0x98));
        *(float *)(lVar15 + 0xa0) = fVar24 + *(float *)(lVar15 + 0xa0);
        if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = in_x11 + unaff_x27 * 0x178;
        *(ulong *)(lVar15 + 0xc0) =
             CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0xc0) >> 0x20),
                      in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0xc0));
        *(float *)(lVar15 + 200) = fVar24 + *(float *)(lVar15 + 200);
        if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = in_x11 + unaff_x27 * 0x178;
        *(ulong *)(lVar15 + 0xe8) =
             CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20),
                      in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0xe8));
        *(float *)(lVar15 + 0xf0) = fVar24 + *(float *)(lVar15 + 0xf0);
        if (iStack0000000000000048 == 0) goto LAB_02497668;
LAB_02497598:
        if (iStack0000000000000048 == 1) {
          pcVar18 = *(code **)(*unaff_x19 + 0x8f8);
          goto LAB_02497674;
        }
      }
      else {
        if (((int)in_stack_00000140 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
          if (uVar22 <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (*(int *)(in_x11 + unaff_x27 * 0x178 + 0x68) != iStack000000000000002c)
          goto LAB_02497490;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          *(ulong *)(lVar15 + 0x70) =
               CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                        in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0x70));
          *(float *)(lVar15 + 0x78) = fVar24 + *(float *)(lVar15 + 0x78);
          if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          *(ulong *)(lVar15 + 0x98) =
               CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                        in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0x98));
          *(float *)(lVar15 + 0xa0) = fVar24 + *(float *)(lVar15 + 0xa0);
          if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          *(ulong *)(lVar15 + 0xc0) =
               CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0xc0) >> 0x20),
                        in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0xc0));
          *(float *)(lVar15 + 200) = fVar24 + *(float *)(lVar15 + 200);
          if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          *(ulong *)(lVar15 + 0xe8) =
               CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20),
                        in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0xe8));
          *(float *)(lVar15 + 0xf0) = fVar24 + *(float *)(lVar15 + 0xf0);
        }
        else {
LAB_02497490:
          if (uVar22 <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
            in_x11 = in_stack_00000128;
          }
          puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          uVar25 = *(undefined4 *)
                    (*(undefined8 **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8) + 1);
          *(undefined8 *)(lVar15 + 0x70) =
               **(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8);
          *(undefined4 *)(lVar15 + 0x78) = uVar25;
          if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar15 + 0x98) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar15 + 0xa0) = uVar25;
          if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar15 + 0xc0) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar15 + 200) = uVar25;
          if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = in_x11 + unaff_x27 * 0x178;
          uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar15 + 0xe8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar15 + 0xf0) = uVar25;
          if (*(uint *)(in_x11 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(undefined1 *)(unaff_x25 + 0x194) = 0;
        }
        if (iStack0000000000000048 != 0) goto LAB_02497598;
LAB_02497668:
        pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
        (*pcVar18)();
      }
      do {
        unaff_w20 = in_stack_00000140;
        in_stack_00000130._4_4_ = uVar30;
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = lVar15 + unaff_x27 * 0x178;
        uVar27 = *(undefined8 *)(lVar15 + 0x11c);
        fVar26 = (float)in_stack_00000110;
        fVar24 = (float)((ulong)in_stack_00000110 >> 0x20);
        *(undefined8 *)(lVar15 + 0x11c) =
             CONCAT44(fVar26 + (float)((ulong)uVar27 >> 0x20),in_stack_00000100 + (float)uVar27);
        *(float *)(lVar15 + 0x124) = fVar24 + *(float *)(lVar15 + 0x124);
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = lVar15 + unaff_x27 * 0x178;
        *(ulong *)(lVar15 + 0x110) =
             CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0x110) >> 0x20),
                      in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0x110));
        *(float *)(lVar15 + 0x118) = fVar24 + *(float *)(lVar15 + 0x118);
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = lVar15 + unaff_x27 * 0x178;
        *(ulong *)(lVar15 + 0x128) =
             CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar15 + 0x128) >> 0x20),
                      in_stack_00000100 + (float)*(undefined8 *)(lVar15 + 0x128));
        *(float *)(lVar15 + 0x130) = fVar24 + *(float *)(lVar15 + 0x130);
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar15 = lVar15 + unaff_x27 * 0x178;
        *(float *)(lVar15 + 0x134) = in_stack_00000100 + *(float *)(lVar15 + 0x134);
        *(ulong *)(lVar15 + 0x138) =
             CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar15 + 0x138) >> 0x20),
                      fVar26 + (float)*(undefined8 *)(lVar15 + 0x138));
        lVar15 = *in_stack_00000150;
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x38), lVar16 == 0)) goto LAB_0249920c;
        uVar30 = *(uint *)(lVar16 + 0x18);
        if (uVar30 <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar19 = lVar16 + unaff_x27 * 0x178;
        uVar11 = CONCAT44(in_stack_00000100 +
                          (float)((ulong)*(undefined8 *)(lVar19 + 0x140) >> 0x20),
                          in_stack_00000100 + (float)*(undefined8 *)(lVar19 + 0x140));
        fVar24 = fVar26 + *(float *)(lVar19 + 0x150);
        uVar28 = (ulong)(uint)fVar24;
        uVar31 = CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar19 + 0x148) >> 0x20),
                          fVar26 + (float)*(undefined8 *)(lVar19 + 0x148));
        *(ulong *)(lVar19 + 0x140) = uVar11;
        *(ulong *)(lVar19 + 0x148) = uVar31;
        *(float *)(lVar19 + 0x150) = fVar24;
        if (unaff_w20 == uVar10) {
          uVar30 = *in_stack_00000148 - 1;
          if (unaff_w23 == uVar30) goto LAB_0249788c;
        }
        else {
          lVar15 = *(long *)(lVar15 + 0x50);
          if (lVar15 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar15 + 0x18) <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar19 = (long)(int)uVar10;
          lVar17 = lVar15 + lVar19 * 0x5c;
          uVar31 = (ulong)(uint)*(float *)(lVar17 + 0x58);
          fVar24 = fVar26 + *(float *)(lVar17 + 0x54);
          uVar11 = (ulong)(uint)fVar24;
          fVar29 = in_stack_00000100 + *(float *)(lVar17 + 0x58);
          uVar28 = (ulong)(uint)fVar29;
          *(ulong *)(lVar17 + 0x4c) =
               CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                        fVar26 + (float)*(undefined8 *)(lVar17 + 0x4c));
          *(float *)(lVar17 + 0x54) = fVar24;
          *(float *)(lVar17 + 0x58) = fVar29;
          if (uVar30 <= *(uint *)(lVar17 + 0x34))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar25 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar17 + 0x34) * 0x178 + 0x11c);
          lVar15 = lVar15 + lVar19 * 0x5c;
          *(float *)(lVar15 + 0x70) = fVar24;
          *(undefined4 *)(lVar15 + 0x6c) = uVar25;
          lVar15 = *in_stack_00000150;
          if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar16 + 0x18) <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = *(long *)(lVar15 + 0x38);
          if (lVar15 == 0) goto LAB_0249920c;
          uVar30 = *(uint *)(lVar16 + lVar19 * 0x5c + 0x40);
          if (*(uint *)(lVar15 + 0x18) <= uVar30)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar16 = lVar16 + lVar19 * 0x5c;
          *(undefined4 *)(lVar16 + 0x74) =
               *(undefined4 *)(lVar15 + (long)(int)uVar30 * 0x178 + 0x128);
          *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
          uVar30 = *in_stack_00000148 - 1;
LAB_0249788c:
          if (unaff_w23 == uVar30) {
            lVar15 = *in_stack_00000150;
            if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar16 + 0x18) <= unaff_w20)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar19 = lVar16 + in_stack_000000f8 * 0x5c;
            uVar31 = (ulong)(uint)*(float *)(lVar19 + 0x58);
            uVar11 = CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                              fVar26 + (float)*(undefined8 *)(lVar19 + 0x4c));
            fVar24 = fVar26 + *(float *)(lVar19 + 0x54);
            in_stack_00000100 = in_stack_00000100 + *(float *)(lVar19 + 0x58);
            uVar28 = (ulong)(uint)in_stack_00000100;
            *(ulong *)(lVar19 + 0x4c) = uVar11;
            *(float *)(lVar19 + 0x54) = fVar24;
            *(float *)(lVar19 + 0x58) = in_stack_00000100;
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar19 + 0x34))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar25 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c);
            lVar16 = lVar16 + in_stack_000000f8 * 0x5c;
            *(float *)(lVar16 + 0x70) = fVar24;
            *(undefined4 *)(lVar16 + 0x6c) = uVar25;
            lVar15 = *in_stack_00000150;
            if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar16 + 0x18) <= unaff_w20)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_0249920c;
            uVar30 = *(uint *)(lVar16 + in_stack_000000f8 * 0x5c + 0x40);
            if (*(uint *)(lVar15 + 0x18) <= uVar30)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar16 = lVar16 + in_stack_000000f8 * 0x5c;
            *(undefined4 *)(lVar16 + 0x74) =
                 *(undefined4 *)(lVar15 + (long)(int)uVar30 * 0x178 + 0x128);
            *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
          }
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016f9468(in_stack_00000138,0);
        if (((((uVar12 & 1) == 0) && (1 < in_stack_00000138 - 0x2010)) &&
            (in_stack_00000138 != 0xad)) && (in_stack_00000138 != 0x2d)) {
          if ((uStack00000000000000e8 & 1) == 0) {
            if (in_stack_00000130._4_4_ != 1) {
LAB_024985a0:
              uStack00000000000000e8 = 0;
              goto LAB_02497aac;
            }
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016f93a0(in_stack_00000138,0);
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_016f68bc(in_stack_00000138,0);
              if (((in_stack_00000138 != 0x200b) && ((uVar12 & 1) == 0)) &&
                 (*in_stack_00000148 != 1)) goto LAB_024985a0;
            }
          }
          else if (((in_stack_00000130._4_4_ != 1) &&
                   ((int)unaff_w23 < (int)(*(uint *)(in_stack_00000128 + 0x18) - 1))) &&
                  (((int)unaff_w23 < *in_stack_00000148 &&
                   ((in_stack_00000138 == 0x2019 || (in_stack_00000138 == 0x27)))))) {
            if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_ - 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(in_stack_00000128 + in_stack_000000e0 + -0x438);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016f9468(uVar4,0);
            if ((uVar12 & 1) != 0) {
              if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar4 = *(undefined2 *)(in_stack_00000128 + in_stack_000000e0 + -0x148);
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_016f9468(uVar4,0);
              if ((uVar12 & 1) != 0) goto LAB_02497aa4;
            }
          }
          if (unaff_w23 == *in_stack_00000148 - 1U) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016f9468(in_stack_00000138,0);
            iVar9 = iStack00000000000000d4;
            if ((uVar12 & 1) == 0) goto LAB_02497de0;
          }
          else {
LAB_02497de0:
            iVar9 = in_stack_00000130._4_4_ - 2;
          }
          lVar15 = *in_stack_00000150;
          if (lVar15 == 0) goto LAB_0249920c;
          lVar16 = *(long *)(lVar15 + 0x40);
          if (lVar16 == 0) goto LAB_0249920c;
          uVar30 = *(uint *)(lVar15 + 0x24);
          iVar8 = *(int *)(lVar16 + 0x18);
          if (iVar8 < (int)(uVar30 + 1)) {
            if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01147b84((long *)(lVar15 + 0x40),iVar8 + 1,
                         *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
            lVar15 = *in_stack_00000150;
            if (lVar15 == 0) goto LAB_0249920c;
          }
          lVar16 = *(long *)(lVar15 + 0x40);
          if (lVar16 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar16 + 0x18) <= uVar30)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar16 = lVar16 + (long)(int)uVar30 * 0x18;
          *(uint *)(lVar16 + 0x28) = unaff_w29;
          *(int *)(lVar16 + 0x2c) = iVar9;
          *(uint *)(lVar16 + 0x30) = (iVar9 - unaff_w29) + 1;
          *(long **)(lVar16 + 0x20) = unaff_x19;
          lVar16 = *(long *)(lVar15 + 0x50);
          *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
          if (lVar16 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar16 + 0x18) <= unaff_w20)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar16 = lVar16 + in_stack_000000f8 * 0x5c;
          uStack00000000000000e8 = 0;
          iStack00000000000000ac = iStack00000000000000ac + 1;
          *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
        }
        else {
          if ((uStack00000000000000e8 & 1) == 0) {
            unaff_w29 = unaff_w23;
          }
          if (unaff_w23 == *in_stack_00000148 - 1U) {
            lVar15 = *in_stack_00000150;
            if (lVar15 == 0) goto LAB_0249920c;
            lVar16 = *(long *)(lVar15 + 0x40);
            if (lVar16 == 0) goto LAB_0249920c;
            uVar30 = *(uint *)(lVar15 + 0x24);
            iVar9 = *(int *)(lVar16 + 0x18);
            if (iVar9 < (int)(uVar30 + 1)) {
              if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01147b84((long *)(lVar15 + 0x40),iVar9 + 1,
                           *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
              lVar15 = *in_stack_00000150;
              if (lVar15 == 0) goto LAB_0249920c;
            }
            lVar16 = *(long *)(lVar15 + 0x40);
            if (lVar16 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar16 + 0x18) <= uVar30)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar16 = lVar16 + (long)(int)uVar30 * 0x18;
            *(uint *)(lVar16 + 0x28) = unaff_w29;
            *(uint *)(lVar16 + 0x2c) = unaff_w23;
            *(long **)(lVar16 + 0x20) = unaff_x19;
            *(uint *)(lVar16 + 0x30) = in_stack_00000130._4_4_ - unaff_w29;
            lVar16 = *(long *)(lVar15 + 0x50);
            *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
            if (lVar16 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar16 + 0x18) <= unaff_w20)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar16 = lVar16 + in_stack_000000f8 * 0x5c;
            iStack00000000000000ac = iStack00000000000000ac + 1;
            *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
          }
LAB_02497aa4:
          uStack00000000000000e8 = 1;
        }
LAB_02497aac:
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
        uVar30 = *(uint *)(lVar15 + 0x18);
        if (uVar30 <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar10 = (uint)in_stack_000000b8;
        uVar22 = (uint)in_stack_00000120;
        if ((*(byte *)(lVar15 + unaff_x27 * 0x178 + 400) >> 2 & 1) == 0) {
          if ((uStack00000000000000f4 & 1) == 0) {
LAB_02497fc4:
            uStack00000000000000f4 = 0;
          }
          else {
LAB_02497adc:
            if (uVar30 <= in_stack_00000130._4_4_ - 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar16 = *unaff_x19;
            uVar30 = *(uint *)(lVar15 + in_stack_000000e0 + -0x330);
            uVar25 = *(undefined4 *)(lVar15 + in_stack_000000e0 + -0x2f8);
LAB_0249805c:
            pcVar18 = *(code **)(lVar16 + 0x908);
LAB_02498064:
            uVar31 = (ulong)uVar30;
            uVar11 = (ulong)(uint)fStack0000000000000050;
            uVar28 = (ulong)uStack0000000000000054;
            (*pcVar18)(uStack0000000000000058,uVar11,uVar28,uVar31,fStack00000000000000d0,0,
                       fStack000000000000005c,uVar25);
            puVar5 = System_Threading_Mutex_TypeInfo;
            lVar15 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar15 = *(long *)puVar5;
            }
LAB_024980b4:
            uStack00000000000000f4 = 0;
            unaff_s15 = 0.0;
            fStack00000000000000d0 = *(float *)(*(long *)(lVar15 + 0xb8) + 0x15a8);
            fStack00000000000000cc = 0.0;
          }
        }
        else {
          lVar15 = lVar15 + unaff_x27 * 0x178;
          iVar9 = *(int *)(lVar15 + 0x68);
          *(undefined4 *)(lVar15 + 0x16c) = in_stack_000017a4;
          if ((((int)unaff_x19[100] < (int)unaff_w23) || ((int)unaff_x19[0x65] < (int)unaff_w20)) ||
             (((int)unaff_x19[0x5b] == 5 && (iVar9 + 1 != (int)unaff_x19[0x66])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_016f68bc(in_stack_00000138,0);
          if ((in_stack_00000138 != 0x200b) && ((uVar12 & 1) == 0)) {
            lVar15 = *in_stack_00000150;
            if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x38), lVar16 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar16 + 0x18) <= unaff_w23)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar24 = *(float *)(lVar16 + unaff_x27 * 0x178 + 0x160);
            if (unaff_s15 <= fVar24) {
              unaff_s15 = fVar24;
            }
            if (fStack00000000000000cc <= ABS(fVar23)) {
              fStack00000000000000cc = ABS(fVar23);
            }
            if (iVar9 != iStack000000000000004c) {
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *in_stack_00000150;
                if (lVar15 == 0) goto LAB_0249920c;
                lVar16 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              else {
                lVar16 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              fStack00000000000000d0 = *(float *)(lVar16 + 0x15a8);
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
            fVar29 = *(float *)(lVar15 + unaff_x27 * 0x178 + 0x14c);
            fVar24 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
            fVar29 = fVar29 + unaff_s15 * fVar24;
            if (fVar29 <= fStack00000000000000d0) {
              fStack00000000000000d0 = fVar29;
            }
            uVar11 = (ulong)(uint)fStack00000000000000d0;
            iStack000000000000004c = iVar9;
          }
          if ((uStack00000000000000f4 & 1) == 0) {
            uStack00000000000000f4 = 0;
            if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
                ((int)uVar22 < (int)unaff_w23)) || ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
            if (unaff_w23 == uVar22) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_016fa418(in_stack_00000138,0);
              if ((uVar12 & 1) != 0) goto LAB_02497fc4;
            }
            if ((*in_stack_00000150 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar15 = lVar15 + unaff_x27 * 0x178;
            fStack000000000000005c = *(float *)(lVar15 + 0x160);
            uStack0000000000000058 = *(undefined4 *)(lVar15 + 0x11c);
            bVar7 = unaff_s15 != 0.0;
            fVar24 = fStack000000000000005c;
            if (bVar7) {
              fVar24 = unaff_s15;
            }
            unaff_s15 = fVar24;
            in_stack_00000060 = *(undefined4 *)(lVar15 + 0x168);
            uStack0000000000000054 = 0;
            fVar24 = fVar23;
            if (bVar7) {
              fVar24 = fStack00000000000000cc;
            }
            uVar11 = (ulong)(uint)fVar24;
            fStack0000000000000050 = fStack00000000000000d0;
            fStack00000000000000cc = fVar24;
          }
          if (*in_stack_00000148 == 1) {
            if ((*in_stack_00000150 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
              if (unaff_w23 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + unaff_x27 * 0x178;
                lVar16 = *unaff_x19;
                uVar30 = *(uint *)(lVar15 + 0x128);
                uVar25 = *(undefined4 *)(lVar15 + 0x160);
                goto LAB_0249805c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          if ((unaff_w23 == uVar10) || ((int)uVar22 <= (int)unaff_w23)) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f68bc(in_stack_00000138,0);
            if ((*in_stack_00000150 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
              if (in_stack_00000138 == 0x200b || (uVar11 & 1) != 0) {
                lVar16 = in_stack_00000120;
                if (*(uint *)(lVar15 + 0x18) <= uVar22)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              else {
                lVar16 = unaff_x27;
                if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              lVar15 = lVar15 + lVar16 * 0x178;
              uVar30 = *(uint *)(lVar15 + 0x128);
              uVar25 = *(undefined4 *)(lVar15 + 0x160);
              pcVar18 = *(code **)(*unaff_x19 + 0x908);
              goto LAB_02498064;
            }
            goto LAB_0249920c;
          }
          if (!bVar1) {
            if ((*in_stack_00000150 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
              uVar30 = *(uint *)(lVar15 + 0x18);
              goto LAB_02497adc;
            }
            goto LAB_0249920c;
          }
          if ((int)unaff_w23 < *in_stack_00000148 + -1) {
            if ((*in_stack_00000150 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar12 = FUN_024a9e4c(in_stack_00000060,*(undefined4 *)(lVar15 + in_stack_000000e0),0);
            if ((uVar12 & 1) == 0) {
              if ((*in_stack_00000150 != 0) &&
                 (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
                if (unaff_w23 < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = lVar15 + unaff_x27 * 0x178;
                  uVar31 = (ulong)*(uint *)(lVar15 + 0x128);
                  uVar28 = (ulong)uStack0000000000000054;
                  uVar11 = (ulong)(uint)fStack0000000000000050;
                  (**(code **)(*unaff_x19 + 0x908))
                            (uStack0000000000000058,uVar11,uVar28,uVar31,fStack00000000000000d0,0,
                             fStack000000000000005c,*(undefined4 *)(lVar15 + 0x160));
                  puVar5 = System_Threading_Mutex_TypeInfo;
                  lVar15 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar15 = *(long *)puVar5;
                  }
                  goto LAB_024980b4;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
          }
          uStack00000000000000f4 = 1;
        }
LAB_024980d0:
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (in_stack_000000d8 == 0) goto LAB_0249920c;
        uVar30 = *(uint *)(lVar15 + unaff_x27 * 0x178 + 400);
        fVar24 = (float)FUN_026fd1f0(in_stack_000000d8 + 0x50,0);
        if ((uVar30 >> 6 & 1) == 0) {
          if ((uStack00000000000000f0 & 1) != 0) {
            if ((*in_stack_00000150 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000130._4_4_ - 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar30 = *(uint *)(lVar15 + in_stack_000000e0 + -0x330);
            pcVar18 = *(code **)(*unaff_x19 + 0x908);
            fVar26 = in_stack_00000088 * fVar24 + *(float *)(lVar15 + in_stack_000000e0 + -0x30c);
LAB_02498648:
            uVar31 = (ulong)uVar30;
            uVar11 = (ulong)(uint)in_stack_00000078._4_4_;
            uVar28 = (ulong)in_stack_00000068._4_4_;
            (*pcVar18)(in_stack_00000080,uVar11,uVar28,uVar31,fVar26,0,in_stack_00000088,
                       in_stack_00000088);
          }
LAB_0249867c:
          uStack00000000000000f0 = 0;
        }
        else {
          lVar15 = *in_stack_00000150;
          if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x38), lVar16 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar16 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(undefined4 *)(lVar16 + unaff_x27 * 0x178 + 0x174) = in_stack_000017a4;
          if ((((int)unaff_x19[100] < (int)unaff_w23) || ((int)unaff_x19[0x65] < (int)unaff_w20)) ||
             (((int)unaff_x19[0x5b] == 5 &&
              (*(int *)(lVar16 + unaff_x27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
              ((int)uVar22 < (int)unaff_w23)) || ((uStack00000000000000f0 & 1) != 0 || !bVar1)) {
LAB_02498228:
            if ((uStack00000000000000f0 & 1) == 0) goto LAB_0249867c;
          }
          else {
            if (unaff_w23 == uVar22) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_016fa418(in_stack_00000138,0);
              if ((uVar12 & 1) != 0) goto LAB_02498228;
              lVar15 = *in_stack_00000150;
              if (lVar15 == 0) goto LAB_0249920c;
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w23)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar15 = lVar15 + unaff_x27 * 0x178;
            fStack0000000000000034 = *(float *)(lVar15 + 0x60);
            in_stack_00000088 = *(float *)(lVar15 + 0x160);
            fStack0000000000000030 = *(float *)(lVar15 + 0x14c);
            uVar11 = (ulong)(uint)fStack0000000000000030;
            in_stack_00000080 = *(undefined4 *)(lVar15 + 0x11c);
            in_stack_00000078._4_4_ = fVar24 * in_stack_00000088 + fStack0000000000000030;
            in_stack_00000068._4_4_ = 0;
          }
          iVar9 = *in_stack_00000148;
          if (iVar9 == 1) {
LAB_024983ac:
            if ((*in_stack_00000150 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
              if (unaff_w23 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + unaff_x27 * 0x178;
                lVar16 = *unaff_x19;
                uVar30 = *(uint *)(lVar15 + 0x128);
                fVar26 = *(float *)(lVar15 + 0x14c);
LAB_024983d8:
                pcVar18 = *(code **)(lVar16 + 0x908);
FUN_02498644:
                fVar26 = fVar24 * in_stack_00000088 + fVar26;
                goto LAB_02498648;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          if (unaff_w23 == uVar10) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f68bc(in_stack_00000138,0);
            if ((*in_stack_00000150 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
              uVar30 = *(uint *)(lVar15 + 0x18);
              if (in_stack_00000138 == 0x200b || (uVar11 & 1) != 0) {
                if (uVar30 <= uVar22)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              else {
LAB_02498620:
                in_stack_00000120 = unaff_x27;
                if (uVar30 <= unaff_w23)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
LAB_02498628:
              lVar15 = lVar15 + in_stack_00000120 * 0x178;
              fVar26 = *(float *)(lVar15 + 0x14c);
              uVar30 = *(uint *)(lVar15 + 0x128);
              pcVar18 = *(code **)(*unaff_x19 + 0x908);
              goto FUN_02498644;
            }
            goto LAB_0249920c;
          }
          if ((int)unaff_w23 < iVar9) {
            lVar15 = *in_stack_00000150;
            if ((lVar15 != 0) && (lVar16 = *(long *)(lVar15 + 0x38), lVar16 != 0)) {
              if (in_stack_00000130._4_4_ < *(uint *)(lVar16 + 0x18)) {
                if (*(float *)(lVar16 + in_stack_000000e0 + -0x108) == fStack0000000000000034) {
                  fVar29 = *(float *)(lVar16 + in_stack_000000e0 + -0x1c);
                  if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar11 = (ulong)(uint)fStack0000000000000030;
                  uVar12 = FUN_024aa280(fVar26 + fVar29,uVar11,0);
                  if ((uVar12 & 1) != 0) {
                    iVar9 = *in_stack_00000148;
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                    ;
                  }
                  lVar15 = *in_stack_00000150;
                  if (lVar15 == 0) goto LAB_0249920c;
                }
                lVar15 = *(long *)(lVar15 + 0x38);
                if (lVar15 != 0) {
                  uVar30 = *(uint *)(lVar15 + 0x18);
                  if ((int)unaff_w23 <= (int)uVar22) goto LAB_02498620;
                  if (uVar22 < uVar30) goto LAB_02498628;
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
                goto LAB_0249920c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }

          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
          :
          if ((int)unaff_w23 < iVar9) {
            iVar9 = FUN_02681c0c(in_stack_000000d8,0);
            if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar15 = *(long *)(in_stack_00000128 + in_stack_000000e0 + -0x130);
            if (lVar15 == 0) goto LAB_0249920c;
            iVar8 = FUN_02681c0c(lVar15,0);
            if (iVar9 != iVar8) goto LAB_024983ac;
          }
          if (!bVar1) {
            if ((*in_stack_00000150 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
              if (in_stack_00000130._4_4_ - 2 < *(uint *)(lVar15 + 0x18)) {
                lVar16 = *unaff_x19;
                uVar30 = *(uint *)(lVar15 + in_stack_000000e0 + -0x330);
                fVar26 = *(float *)(lVar15 + in_stack_000000e0 + -0x30c);
                goto LAB_024983d8;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          uStack00000000000000f0 = 1;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
        uVar30 = (uint)*(undefined8 *)(lVar15 + 0x18);
        if (uVar30 <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*(byte *)(lVar15 + unaff_x27 * 0x178 + 0x191) >> 1 & 1) == 0) {
          if ((uStack00000000000000ec & 1) != 0) {
            uVar28 = (ulong)uStack00000000000000a0;
            uVar31 = (ulong)(uint)fStack00000000000000a4;
            uVar11 = (ulong)(uint)fStack00000000000000b4;
            (**(code **)(*unaff_x19 + 0x918))
                      (fStack00000000000000b0,uVar11,uVar28,uVar31,fStack00000000000000a8,uVar28);
          }
LAB_024986e8:
          uStack00000000000000ec = 0;
        }
        else {
          if ((((int)unaff_x19[100] < (int)unaff_w23) || ((int)unaff_x19[0x65] < (int)unaff_w20)) ||
             (((int)unaff_x19[0x5b] == 5 &&
              (*(int *)(lVar15 + unaff_x27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((uStack00000000000000ec & 1) == 0) {
            if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
                ((int)uVar22 < (int)unaff_w23)) || (!bVar1)) goto LAB_024986e8;
            if (unaff_w23 == uVar22) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_016fa418(in_stack_00000138,0);
              if ((uVar12 & 1) != 0) goto LAB_024986e8;
            }
            puVar5 = System_Threading_Mutex_TypeInfo;
            lVar16 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar16 = *(long *)puVar5;
            }
            if ((*in_stack_00000150 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_0249920c;
            uVar30 = (uint)*(undefined8 *)(lVar15 + 0x18);
            if (uVar30 <= unaff_w23)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar16 = *(long *)(lVar16 + 0xb8);
            lVar19 = lVar15 + unaff_x27 * 0x178;
            in_stack_00001798 = *(undefined8 *)(lVar19 + 0x184);
            in_stack_00001790 = *(undefined8 *)(lVar19 + 0x17c);
            fStack00000000000000b0 = *(float *)(lVar16 + 0x1598);
            in_stack_000017a0 = *(float *)(lVar19 + 0x18c);
            fStack00000000000000b4 = *(float *)(lVar16 + 0x159c);
            fStack00000000000000a4 = *(float *)(lVar16 + 0x15a0);
            fStack00000000000000a8 = *(float *)(lVar16 + 0x15a4);
            uStack00000000000000a0 = 0;
          }
          if (uVar30 <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar15 = lVar15 + unaff_x27 * 0x178;
          fVar33 = *(float *)(lVar15 + 0x188);
          uVar20 = *(undefined8 *)(lVar15 + 0x17c);
          fVar35 = *(float *)(lVar15 + 0x184);
          uVar27 = *(undefined8 *)(lVar15 + 0x184);
          fVar34 = *(float *)(lVar15 + 0x18c);
          fVar26 = *(float *)(lVar15 + 0x11c);
          fVar29 = *(float *)(lVar15 + 0x128);
          fVar32 = *(float *)(lVar15 + 0x148);
          fVar24 = *(float *)(lVar15 + 0x150);
          in_stack_00000158 = uVar20;
          fStack0000000000000160 = fVar35;
          fStack0000000000000164 = fVar33;
          in_stack_00000168 = fVar34;
          in_stack_00000170 = in_stack_00001790;
          in_stack_00000178 = in_stack_00001798;
          in_stack_00000180 = in_stack_000017a0;
          uVar11 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
          lVar15 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
          if ((uVar11 & 1) == 0) {
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar15);
            }
            fVar26 = fVar26 - (float)((ulong)in_stack_00001790 >> 0x20);
            if (fVar26 <= fStack00000000000000b0) {
              fStack00000000000000b0 = fVar26;
            }
            fVar24 = fVar24 - in_stack_000017a0;
            uVar11 = (ulong)(uint)fVar24;
            fVar29 = fVar29 + (float)in_stack_00001798;
            uVar28 = (ulong)(uint)fVar29;
            if (fVar24 <= fStack00000000000000b4) {
              fStack00000000000000b4 = fVar24;
            }
            fVar32 = fVar32 + (float)((ulong)in_stack_00001798 >> 0x20);
            uVar31 = (ulong)(uint)fVar32;
            if (fStack00000000000000a4 <= fVar29) {
              fStack00000000000000a4 = fVar29;
            }
            if (fStack00000000000000a8 <= fVar32) {
              fStack00000000000000a8 = fVar32;
            }
          }
          else {
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar15);
            }
            fVar26 = (fVar26 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
            uVar31 = (ulong)(uint)fVar26;
            if (fVar24 <= fStack00000000000000b4) {
              fStack00000000000000b4 = fVar24;
            }
            uVar11 = (ulong)(uint)fStack00000000000000b4;
            uVar28 = (ulong)uStack00000000000000a0;
            if (fStack00000000000000a8 <= fVar32) {
              fStack00000000000000a8 = fVar32;
            }
            (**(code **)(*unaff_x19 + 0x918))
                      (fStack00000000000000b0,uVar11,uVar28,uVar31,fStack00000000000000a8,uVar28);
            fStack00000000000000b4 = fVar24 - fVar34;
            fStack00000000000000a4 = fVar29 + fVar35;
            uStack00000000000000a0 = 0;
            fStack00000000000000a8 = fVar32 + fVar33;
            fStack00000000000000b0 = fVar26;
            in_stack_00001790 = uVar20;
            in_stack_00001798 = uVar27;
            in_stack_000017a0 = fVar34;
          }
          if (((*in_stack_00000148 == 1) || (unaff_w23 == uVar10)) ||
             (((int)uVar22 <= (int)unaff_w23 || (!bVar1)))) {
            uVar28 = (ulong)uStack00000000000000a0;
            uVar31 = (ulong)(uint)fStack00000000000000a4;
            uVar11 = (ulong)(uint)fStack00000000000000b4;
            (**(code **)(*unaff_x19 + 0x918))
                      (fStack00000000000000b0,uVar11,uVar28,uVar31,fStack00000000000000a8,uVar28);
            uStack00000000000000ec = 0;
          }
          else {
            uStack00000000000000ec = 1;
          }
        }
        puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        puVar5 = PTR_DAT_033ed410;
        iVar9 = *in_stack_00000148;
        uVar30 = in_stack_00000130._4_4_ + 1;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        in_stack_000000e0 = in_stack_000000e0 + 0x178;
        if (iVar9 <= (int)in_stack_00000130._4_4_) {
          lVar15 = *in_stack_00000150;
          if (lVar15 == 0) goto LAB_0249920c;
          *(int *)(lVar15 + 0x18) = iVar9;
          lVar16 = unaff_x19[0xd3];
          *(uint *)(lVar15 + 0x2c) = unaff_w20 + 1;
          iVar8 = iStack00000000000000ac;
          if (iVar9 < 1) {
            iVar8 = 1;
          }
          if (iStack00000000000000ac == 0) {
            iVar8 = 1;
          }
          *(int *)(lVar15 + 0x1c) = (int)lVar16;
          *(int *)(lVar15 + 0x24) = iVar8;
          *(int *)(lVar15 + 0x30) = (int)unaff_x19[0x95] + 1;
          if (((int)unaff_x19[0x62] != 0xff) ||
             (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0)) goto LAB_02496098;
          lVar15 = unaff_x19[0xde];
          if (lVar15 != 0) {
            (**(code **)(lVar15 + 0x18))
                      (*(undefined8 *)(lVar15 + 0x40),*in_stack_00000150,
                       *(undefined8 *)(lVar15 + 0x28));
          }
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          iVar9 = FUN_02859dc4(unaff_x19[0xe4],0);
          if (iVar9 != 0x19) {
            lVar15 = unaff_x19[0xe4];
            if (lVar15 == 0) goto LAB_0249920c;
            uVar30 = FUN_02859dc4(lVar15,0);
            FUN_02859e00(lVar15,uVar30 | 0x19,0);
          }
          if (*(int *)((long)unaff_x19 + 0x314) != 0) {
            if ((*in_stack_00000150 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000150 + 0x60), lVar15 == 0)) goto LAB_0249920c;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (*(int *)(lVar15 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            FUN_024e8000(lVar15 + 0x20,1,0);
          }
          if (unaff_x19[0x73] == 0) goto LAB_0249920c;
          UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                    (unaff_x19[0x73],0);
          if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
          goto LAB_0249920c;
          if (*(int *)(lVar15 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (unaff_x19[0x73] == 0) goto LAB_0249920c;
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x30),0);
          if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
          goto LAB_0249920c;
          if (*(int *)(lVar15 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (unaff_x19[0x73] == 0) goto LAB_0249920c;
          FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x48),0);
          if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
          goto LAB_0249920c;
          if (*(int *)(lVar15 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (unaff_x19[0x73] == 0) goto LAB_0249920c;
          FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x50),0);
          if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
          goto LAB_0249920c;
          if (*(int *)(lVar15 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (unaff_x19[0x73] == 0) goto LAB_0249920c;
          FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x58),0);
          if (unaff_x19[0x73] == 0) goto LAB_0249920c;
          FUN_0266ed90(unaff_x19[0x73],0);
          if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
          if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
          uVar27 = FUN_02858bac(unaff_x19[0xe3],0);
          if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
          uVar30 = FUN_02858a14(unaff_x19[0xe3],0);
          lVar15 = *in_stack_00000150;
          if (lVar15 == 0) goto LAB_0249920c;
          lVar19 = 0;
          lVar16 = 0;
          goto LAB_02498e6c;
        }
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x50), lVar15 == 0)) goto LAB_0249920c;
        unaff_x27 = (long)(int)in_stack_00000130._4_4_;
        lVar16 = in_stack_00000128 + unaff_x27 * 0x178;
        in_stack_00000140 = *(uint *)(lVar16 + 100);
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000140)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        in_stack_000000d8 = *(long *)(lVar16 + 0x38);
        uVar3 = *(ushort *)(lVar16 + 0x20);
        in_stack_000000f8 = (long)(int)in_stack_00000140;
        lVar15 = lVar15 + in_stack_000000f8 * 0x5c;
        uVar22 = *(uint *)(lVar15 + 0x3c);
        in_stack_000000b8 = (long)(int)uVar22;
        iVar9 = *(int *)(lVar15 + 0x28);
        iVar8 = *(int *)(lVar15 + 0x2c);
        in_stack_00000120 = (long)*(int *)(lVar15 + 0x40);
        uVar10 = *(uint *)(lVar15 + 0x68);
        fVar34 = *(float *)(lVar15 + 0x5c);
        fVar36 = *(float *)(lVar15 + 0x60);
        iVar2 = *(int *)(lVar15 + 0x20);
        param_4 = *(float *)(lVar15 + 0x4c);
        param_7 = *(float *)(lVar15 + 0x54);
        fVar26 = *(float *)(lVar15 + 0x58);
        fVar33 = *(float *)(lVar15 + 0x6c);
        fVar32 = *(float *)(lVar15 + 0x70);
        fVar24 = *(float *)(lVar15 + 0x74);
        fVar29 = *(float *)(lVar15 + 0x78);
        fVar35 = fVar34 + fVar36;
        in_stack_00000138 = (uint)uVar3;
        if ((int)uVar10 < 9) {
          switch(uVar10) {
          case 1:
            if ((char)unaff_x19[0x1d] == '\0') {
              fStack00000000000000c8 = fVar36 + 0.0;
            }
            else {
              fStack00000000000000c8 = 0.0 - fVar26;
            }
            break;
          case 2:
LAB_02496c1c:
            fStack00000000000000c8 = (fVar36 + fVar34 * 0.5) - fVar26 * 0.5;
            break;
          default:
            goto switchD_02496b58_caseD_3;
          case 4:
            fStack00000000000000c8 = fVar35 - fVar26;
            if ((char)unaff_x19[0x1d] != '\0') {
              fStack00000000000000c8 = fVar35;
            }
            break;
          case 8:
            goto switchD_02496b58_caseD_8;
          }
LAB_02496c90:
          in_stack_000000c0 = 0;
        }
        else if (uVar10 == 0x10) {
switchD_02496b58_caseD_8:
          if (uVar3 < 0xad) {
            if ((in_stack_00000138 != 3) && (in_stack_00000138 != 10)) goto LAB_02496bac;
          }
          else if ((in_stack_00000138 != 0xad) &&
                  ((in_stack_00000138 != 0x200b && (in_stack_00000138 != 0x2060)))) {
LAB_02496bac:
            if (*(uint *)(in_stack_00000128 + 0x18) <= uVar22)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(in_stack_00000128 + in_stack_000000b8 * 0x178 + 0x20);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f9f84(uVar4,0);
            if ((uVar11 & 1) == 0) {
              bVar1 = (int)in_stack_00000140 < (int)unaff_x19[0x94];
            }
            else {
              bVar1 = false;
            }
            if ((fVar26 <= fVar34) && (!bVar1 && (uVar10 >> 4 & 1) == 0)) {
              fStack00000000000000c8 = fVar36;
              if ((char)unaff_x19[0x1d] != '\0') {
                fStack00000000000000c8 = fVar35;
              }
              goto LAB_02496c90;
            }
            if (((uVar30 == 1) || (in_stack_00000140 != unaff_w20)) ||
               (in_stack_00000130._4_4_ == *(uint *)((long)unaff_x19 + 0x31c))) {
              fStack00000000000000c8 = fVar36;
              if ((char)unaff_x19[0x1d] != '\0') {
                fStack00000000000000c8 = fVar35;
              }
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uStack0000000000000020 = FUN_016fa418(uVar3,0);
              in_stack_000000c0 = 0;
            }
            else {
              cVar14 = (char)unaff_x19[0x1d];
              fVar35 = -fVar26;
              if (cVar14 != '\0') {
                fVar35 = fVar26;
              }
              if (*(uint *)(in_stack_00000128 + 0x18) <= uVar22)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar26 = 1.0;
              iVar8 = (int)*(char *)(in_stack_00000128 + in_stack_000000b8 * 0x178 + 0x194) +
                      (-iVar2 - (uStack0000000000000020 & 1)) + iVar8 + -1;
              if (0 < iVar8) {
                fVar26 = *(float *)((long)unaff_x19 + 0x2d4);
              }
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              if (in_stack_00000138 == 9) {
LAB_02498bb8:
                fVar26 = 1.0 - fVar26;
              }
              else {
                if (in_stack_00000138 != 0xa0) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar11 = FUN_016fa418(uVar3,0);
                  cVar14 = (char)unaff_x19[0x1d];
                  if ((uVar11 & 1) != 0) goto LAB_02498bb8;
                }
                iVar8 = (iVar2 - (~uStack0000000000000020 & 1)) + iVar9;
              }
              fVar26 = ((fVar34 + fVar35) * fVar26) / (float)iVar8;
              if (cVar14 == '\0') {
                fStack00000000000000c8 = fStack00000000000000c8 + fVar26;
                in_stack_000000c0 =
                     CONCAT44((float)((ulong)in_stack_000000c0 >> 0x20) + 0.0,
                              (float)in_stack_000000c0 + 0.0);
              }
              else {
                fStack00000000000000c8 = fStack00000000000000c8 - fVar26;
              }
            }
          }
        }
        else if (uVar10 == 0x20) {
          fVar26 = fVar33 + fVar24;
          goto LAB_02496c1c;
        }
switchD_02496b58_caseD_3:
        unaff_x22 = *(undefined8 *)(in_stack_00000128 + 0x18);
        if ((uint)unaff_x22 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        unaff_x25 = in_stack_00000128 + unaff_x27 * 0x178;
        in_stack_00000100 = in_stack_00000098 + fStack00000000000000c8;
        in_stack_00000110 =
             CONCAT44((float)((ulong)in_stack_00000090 >> 0x20) +
                      (float)((ulong)in_stack_000000c0 >> 0x20),
                      (float)in_stack_00000090 + (float)in_stack_000000c0);
        unaff_w23 = in_stack_00000130._4_4_;
        uVar10 = unaff_w20;
      } while (*(char *)(unaff_x25 + 0x194) == '\0');
      iStack0000000000000048 = *(int *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x2c);
      in_x11 = in_stack_00000128;
    } while (iStack0000000000000048 != 0);
    fVar23 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)in_stack_00000140,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
      *(undefined4 *)(lVar15 + 0x84) = 0;
      *(undefined4 *)(lVar15 + 0xac) = 0;
      *(undefined4 *)(lVar15 + 0xd4) = 0x3f800000;
      fVar23 = 1.0;
      break;
    case 1:
      fVar26 = *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar26 = (fStack00000000000000c8 + fVar26) - *(float *)(in_stack_00000070 + 0x230);
        fVar24 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar24 = fVar24 - fVar33;
      *(float *)(lVar15 + 0x84) = fVar23 + (fVar26 - fVar33) / fVar24;
      *(float *)(lVar15 + 0xac) = fVar23 + (*(float *)(lVar15 + 0x98) - fVar33) / fVar24;
      *(float *)(lVar15 + 0xd4) = fVar23 + (*(float *)(lVar15 + 0xc0) - fVar33) / fVar24;
      fVar23 = fVar23 + (*(float *)(lVar15 + 0xe8) - fVar33) / fVar24;
      break;
    case 2:
      lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar24 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar26 = (fStack00000000000000c8 + *(float *)(lVar15 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar15 + 0x84) = fVar23 + fVar26 / fVar24;
      *(float *)(lVar15 + 0xac) =
           fVar23 + ((fStack00000000000000c8 + *(float *)(lVar15 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar15 + 0xd4) =
           fVar23 + ((fStack00000000000000c8 + *(float *)(lVar15 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar23 = fVar23 + ((fStack00000000000000c8 + *(float *)(lVar15 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
        *(undefined4 *)(lVar15 + 0x88) = 0;
        *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar15 + 0xd8) = 0;
        *(undefined4 *)(lVar15 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar29 = fVar29 - fVar32;
        fVar26 = fVar23 + (*(float *)(lVar15 + 0x74) - fVar32) / fVar29;
        fVar24 = fVar23 + (*(float *)(lVar15 + 0x9c) - fVar32) / fVar29;
        *(float *)(lVar15 + 0x88) = fVar26;
        *(float *)(lVar15 + 0xb0) = fVar24;
        *(float *)(lVar15 + 0xd8) = fVar26;
        *(float *)(lVar15 + 0x100) = fVar24;
        break;
      case 2:
        lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar26 = fVar23 + (*(float *)(lVar15 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar15 + 0x88) = fVar26;
        fVar24 = *(float *)(unaff_x19 + 0x9b);
        fVar29 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar15 + 0xd8) = fVar26;
        fVar26 = fVar23 + (*(float *)(lVar15 + 0x9c) - fVar24) / (fVar29 - fVar24);
        *(float *)(lVar15 + 0xb0) = fVar26;
        *(float *)(lVar15 + 0x100) = fVar26;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        unaff_x22 = *(undefined8 *)(in_stack_00000128 + 0x18);
      }
      if ((uint)unaff_x22 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar26 = *(float *)(lVar15 + 0x15c);
      fVar24 = (1.0 - (*(float *)(lVar15 + 0x88) + *(float *)(lVar15 + 0xb0)) * fVar26) * 0.5;
      fVar29 = fVar23 + *(float *)(lVar15 + 0x88) * fVar26 + fVar24;
      fVar23 = fVar23 + fVar24 + *(float *)(lVar15 + 0xb0) * fVar26;
      *(float *)(lVar15 + 0x84) = fVar29;
      *(float *)(lVar15 + 0xac) = fVar29;
      *(float *)(lVar15 + 0xd4) = fVar23;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xfc) = fVar23;
switchD_02496d4c_default:
    uVar10 = (uint)unaff_x22;
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar10 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
      *(undefined4 *)(lVar15 + 0x88) = 0;
      *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar15 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar15 + 0x100) = 0;
      break;
    case 1:
      if (uVar10 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      param_1 = in_stack_00000128 + unaff_x27 * 0x178;
      param_2 = *(float *)(param_1 + 0x74);
      param_3 = *(float *)(param_1 + 0x9c);
      param_4 = param_4 - param_7;
      in_stack_00000130._4_4_ = uVar30;
      goto code_r0x0249711c;
    case 2:
      goto switchD_024970dc_caseD_2;
    case 3:
      if (uVar10 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar24 = *(float *)(lVar15 + 0x15c);
      fVar26 = (1.0 - (*(float *)(lVar15 + 0x84) + *(float *)(lVar15 + 0xd4)) / fVar24) * 0.5;
      fVar23 = *(float *)(lVar15 + 0x84) / fVar24 + fVar26;
      fVar26 = fVar26 + *(float *)(lVar15 + 0xd4) / fVar24;
      *(float *)(lVar15 + 0x88) = fVar23;
      *(float *)(lVar15 + 0xb0) = fVar26;
      *(float *)(lVar15 + 0x100) = fVar23;
      *(float *)(lVar15 + 0xd8) = fVar26;
    }
  } while( true );
switchD_024970dc_caseD_2:
  if (uVar10 <= in_stack_00000130._4_4_)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  param_1 = in_stack_00000128 + unaff_x27 * 0x178;
  fVar23 = (*(float *)(param_1 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
           (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
  *(float *)(param_1 + 0x88) = fVar23;
  param_4 = (*(float *)(param_1 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
            (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
  in_stack_00000130._4_4_ = uVar30;
  goto LAB_02497174;
  while( true ) {
    lVar15 = *in_stack_00000150;
    lVar16 = lVar16 + 1;
    lVar19 = lVar19 + 0x50;
    if (lVar15 == 0) break;
LAB_02498e6c:
    uVar12 = lVar16 + 1;
    if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar12) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x60);
    if (lVar15 == 0) break;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7ecc(lVar15 + lVar19 + 0x70,0);
    lVar15 = unaff_x19[0xe0];
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar20 = *(undefined8 *)(lVar15 + lVar16 * 8 + 0x28);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_0268b4e0(uVar20,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x60), lVar15 == 0)) break;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar12) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        FUN_024e8000(lVar15 + lVar19 + 0x70,1,0);
      }
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024f0144(lVar15,0);
      if ((*in_stack_00000150 == 0) || (lVar17 = *(long *)(*in_stack_00000150 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar15 == 0) break;
      FUN_0266b9c4(lVar15,*(undefined8 *)(lVar17 + lVar19 + 0x80),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024f0144(lVar15,0);
      if ((*in_stack_00000150 == 0) || (lVar17 = *(long *)(*in_stack_00000150 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar15 == 0) break;
      FUN_0266bbc8(lVar15,*(undefined8 *)(lVar17 + lVar19 + 0x98),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024f0144(lVar15,0);
      if ((*in_stack_00000150 == 0) || (lVar17 = *(long *)(*in_stack_00000150 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar15 == 0) break;
      FUN_0266bc74(lVar15,*(undefined8 *)(lVar17 + lVar19 + 0xa0),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024f0144(lVar15,0);
      if ((*in_stack_00000150 == 0) || (lVar17 = *(long *)(*in_stack_00000150 + 0x60), lVar17 == 0))
      break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar15 == 0) break;
      FUN_0266c1dc(lVar15,*(undefined8 *)(lVar17 + lVar19 + 0xa8),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_024f0144(lVar15,0), lVar15 == 0)) break;
      FUN_0266ed90(lVar15,0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_02738ef4(lVar15,0);
      lVar17 = unaff_x19[0xe0];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar17 = *(long *)(lVar17 + lVar16 * 8 + 0x28);
      if ((lVar17 == 0) || (uVar20 = FUN_024f0144(lVar17,0), lVar15 == 0)) break;
      FUN_02858f1c(lVar15,uVar20,0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_02738ef4(lVar15,0), lVar15 == 0)) break;
      FUN_02858b14(uVar27,uVar11,uVar28,uVar31,lVar15,0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_02738ef4(lVar15,0), lVar15 == 0)) break;
      FUN_02858a50(lVar15,uVar30 & 1,0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      plVar21 = *(long **)(lVar15 + lVar16 * 8 + 0x28);
      uVar10 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar21 == (long *)0x0) break;
      (**(code **)(*plVar21 + 0x2c8))(plVar21,uVar10 & 1,*(undefined8 *)(*plVar21 + 0x2d0));
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


