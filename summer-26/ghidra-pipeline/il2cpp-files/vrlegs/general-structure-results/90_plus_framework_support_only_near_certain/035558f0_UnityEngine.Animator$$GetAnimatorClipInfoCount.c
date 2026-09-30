/*
FUNCTION_NAME: UnityEngine.Animator$$GetAnimatorClipInfoCount
ENTRY_POINT: 035558f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__GetAnimatorClipInfoCount(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long in_x15;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar21;
  long *plVar22;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x27;
  int unaff_w28;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar28;
  uint uVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  int *in_stack_00000048;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  uint in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  uint in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  long in_stack_00000120;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  float in_stack_00000130;
  undefined8 in_stack_00000140;
  long in_stack_00000150;
  uint uStack0000000000000158;
  uint uStack000000000000015c;
  uint in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined4 in_stack_000017c4;
  ulong uVar27;
  
  lVar18 = unaff_x23;
  uVar9 = unaff_w25;
code_r0x035558f0:
  uVar29 = uStack000000000000015c;
  uVar14 = unaff_w21;
  if (unaff_w28 == 0) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar17)();
  }
  else if (unaff_w28 == 1) {
    pcVar17 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
  do {
    unaff_w21 = in_stack_00000160;
    uStack000000000000015c = uVar29;
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035575f4;
    lVar15 = lVar15 + unaff_x24 * unaff_x22;
    uVar26 = *(undefined8 *)(lVar15 + 0x11c);
    fVar24 = (float)in_stack_00000140;
    fVar25 = (float)((ulong)in_stack_00000140 >> 0x20);
    *(undefined8 *)(lVar15 + 0x11c) =
         CONCAT44(fVar24 + (float)((ulong)uVar26 >> 0x20),in_stack_00000130 + (float)uVar26);
    *(float *)(lVar15 + 0x124) = fVar25 + *(float *)(lVar15 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035575f4;
    lVar15 = lVar15 + unaff_x24 * unaff_x22;
    *(ulong *)(lVar15 + 0x110) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar15 + 0x110) >> 0x20),
                  in_stack_00000130 + (float)*(undefined8 *)(lVar15 + 0x110));
    *(float *)(lVar15 + 0x118) = fVar25 + *(float *)(lVar15 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035575f4;
    lVar15 = lVar15 + unaff_x24 * unaff_x22;
    *(ulong *)(lVar15 + 0x128) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar15 + 0x128) >> 0x20),
                  in_stack_00000130 + (float)*(undefined8 *)(lVar15 + 0x128));
    *(float *)(lVar15 + 0x130) = fVar25 + *(float *)(lVar15 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035575f4;
    lVar15 = lVar15 + unaff_x24 * unaff_x22;
    *(float *)(lVar15 + 0x134) = in_stack_00000130 + *(float *)(lVar15 + 0x134);
    *(ulong *)(lVar15 + 0x138) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar15 + 0x138) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar15 + 0x138));
    lVar15 = *in_stack_00000170;
    if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x38), lVar16 == 0)) goto LAB_035574b8;
    uVar29 = *(uint *)(lVar16 + 0x18);
    if (uVar29 <= uVar9) goto LAB_035575f4;
    lVar19 = lVar16 + unaff_x24 * unaff_x22;
    uVar10 = CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar19 + 0x140) >> 0x20),
                      in_stack_00000130 + (float)*(undefined8 *)(lVar19 + 0x140));
    fVar25 = fVar24 + *(float *)(lVar19 + 0x150);
    uVar27 = (ulong)(uint)fVar25;
    uVar30 = CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar19 + 0x148) >> 0x20),
                      fVar24 + (float)*(undefined8 *)(lVar19 + 0x148));
    *(float *)(lVar19 + 0x150) = fVar25;
    *(ulong *)(lVar19 + 0x140) = uVar10;
    *(ulong *)(lVar19 + 0x148) = uVar30;
    if (unaff_w21 == uVar14) {
      uVar29 = *unaff_x20 - 1;
      if (uVar9 == uVar29) goto LAB_03555b44;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x50);
      if (lVar15 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar19 = (long)(int)uVar14;
      lVar20 = lVar15 + lVar19 * 0x5c;
      uVar30 = (ulong)(uint)*(float *)(lVar20 + 0x58);
      fVar25 = fVar24 + *(float *)(lVar20 + 0x54);
      uVar10 = (ulong)(uint)fVar25;
      fVar28 = in_stack_00000130 + *(float *)(lVar20 + 0x58);
      uVar27 = (ulong)(uint)fVar28;
      *(ulong *)(lVar20 + 0x4c) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                    fVar24 + (float)*(undefined8 *)(lVar20 + 0x4c));
      *(float *)(lVar20 + 0x54) = fVar25;
      *(float *)(lVar20 + 0x58) = fVar28;
      if (uVar29 <= *(uint *)(lVar20 + 0x34)) goto LAB_035575f4;
      uVar33 = *(undefined4 *)(lVar16 + (int)*(uint *)(lVar20 + 0x34) * unaff_x22 + 0x11c);
      lVar15 = lVar15 + lVar19 * 0x5c;
      *(float *)(lVar15 + 0x70) = fVar25;
      *(undefined4 *)(lVar15 + 0x6c) = uVar33;
      lVar15 = *in_stack_00000170;
      if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar15 = *(long *)(lVar15 + 0x38);
      if (lVar15 == 0) goto LAB_035574b8;
      uVar29 = *(uint *)(lVar16 + lVar19 * 0x5c + 0x40);
      if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035575f4;
      lVar16 = lVar16 + lVar19 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar15 + (int)uVar29 * unaff_x22 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      uVar29 = *unaff_x20 - 1;
LAB_03555b44:
      if (uVar9 == uVar29) {
        lVar15 = *in_stack_00000170;
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
        lVar19 = lVar16 + in_x15 * 0x5c;
        uVar30 = (ulong)(uint)*(float *)(lVar19 + 0x58);
        uVar10 = CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                          fVar24 + (float)*(undefined8 *)(lVar19 + 0x4c));
        fVar25 = fVar24 + *(float *)(lVar19 + 0x54);
        in_stack_00000130 = in_stack_00000130 + *(float *)(lVar19 + 0x58);
        uVar27 = (ulong)(uint)in_stack_00000130;
        *(ulong *)(lVar19 + 0x4c) = uVar10;
        *(float *)(lVar19 + 0x54) = fVar25;
        *(float *)(lVar19 + 0x58) = in_stack_00000130;
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar19 + 0x34)) goto LAB_035575f4;
        uVar33 = *(undefined4 *)(lVar15 + (int)*(uint *)(lVar19 + 0x34) * unaff_x22 + 0x11c);
        lVar16 = lVar16 + in_x15 * 0x5c;
        *(float *)(lVar16 + 0x70) = fVar25;
        *(undefined4 *)(lVar16 + 0x6c) = uVar33;
        lVar15 = *in_stack_00000170;
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_035574b8;
        uVar29 = *(uint *)(lVar16 + in_x15 * 0x5c + 0x40);
        if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035575f4;
        lVar16 = lVar16 + in_x15 * 0x5c;
        *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar15 + (int)uVar29 * unaff_x22 + 0x128);
        *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b82c4(in_stack_00000168._4_4_,0);
    if (((((uVar11 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
        (in_stack_00000168._4_4_ != 0xad)) && (in_stack_00000168._4_4_ != 0x2d)) {
      if ((uStack000000000000011c & 1) == 0) {
        if (uStack000000000000015c != 1) {
LAB_0355686c:
          uStack000000000000011c = 0;
          goto LAB_03555d70;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b81f8(in_stack_00000168._4_4_,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
          if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar11 & 1) == 0)) && (*unaff_x20 != 1))
          goto LAB_0355686c;
        }
      }
      else if (((uStack000000000000015c != 1) && ((int)uVar9 < (int)(*(uint *)(lVar18 + 0x18) - 1)))
              && (((int)uVar9 < *unaff_x20 &&
                  ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
        if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar18 + unaff_x27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b82c4(uVar4,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar18 + unaff_x27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b82c4(uVar4,0);
          if ((uVar11 & 1) != 0) goto LAB_03555d68;
        }
      }
      if (uVar9 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b82c4(in_stack_00000168._4_4_,0);
        iVar8 = iStack0000000000000128;
        if ((uVar11 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar8 = uStack000000000000015c - 2;
      }
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar15 = *(long *)(lVar18 + 0x40);
      if (lVar15 == 0) goto LAB_035574b8;
      uVar29 = *(uint *)(lVar18 + 0x24);
      iVar7 = *(int *)(lVar15 + 0x18);
      if (iVar7 < (int)(uVar29 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar18 + 0x40),iVar7 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_035575f4;
      lVar18 = lVar18 + (long)(int)uVar29 * 0x18;
      *(long **)(lVar18 + 0x20) = unaff_x19;
      *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
      *(int *)(lVar18 + 0x2c) = iVar8;
      *(uint *)(lVar18 + 0x30) = (iVar8 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = unaff_x19[0x6d];
      if (lVar18 == 0) goto LAB_035574b8;
      lVar15 = *(long *)(lVar18 + 0x50);
      unaff_x22 = 0x178;
      *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      if (lVar15 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar15 = lVar15 + in_x15 * 0x5c;
      uStack000000000000011c = 0;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
      lVar18 = in_stack_000000f0;
    }
    else {
      if ((uStack000000000000011c & 1) == 0) {
        uStack0000000000000158 = uVar9;
      }
      if (uVar9 == *unaff_x20 - 1U) {
        lVar15 = *in_stack_00000170;
        if (lVar15 == 0) goto LAB_035574b8;
        lVar16 = *(long *)(lVar15 + 0x40);
        if (lVar16 == 0) goto LAB_035574b8;
        uVar29 = *(uint *)(lVar15 + 0x24);
        iVar8 = *(int *)(lVar16 + 0x18);
        if (iVar8 < (int)(uVar29 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar15 + 0x40),iVar8 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar15 = *in_stack_00000170;
          if (lVar15 == 0) goto LAB_035574b8;
        }
        lVar15 = *(long *)(lVar15 + 0x40);
        if (lVar15 == 0) goto LAB_035574b8;
        unaff_x22 = 0x178;
        if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_035575f4;
        lVar15 = lVar15 + (long)(int)uVar29 * 0x18;
        *(long **)(lVar15 + 0x20) = unaff_x19;
        *(uint *)(lVar15 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar15 + 0x2c) = uVar9;
        *(uint *)(lVar15 + 0x30) = uStack000000000000015c - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar15 = unaff_x19[0x6d];
        if (lVar15 == 0) goto LAB_035574b8;
        lVar16 = *(long *)(lVar15 + 0x50);
        *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
        if (lVar16 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
        lVar16 = lVar16 + in_x15 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
      }
LAB_03555d68:
      uStack000000000000011c = 1;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0))
    goto LAB_035574b8;
    uVar29 = *(uint *)(lVar15 + 0x18);
    if (uVar29 <= uVar9) goto LAB_035575f4;
    uVar23 = (uint)in_stack_000000e0;
    uVar14 = (uint)in_stack_00000150;
    if ((*(byte *)(lVar15 + unaff_x24 * unaff_x22 + 400) >> 2 & 1) == 0) {
      if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
        uStack0000000000000118 = 0;
      }
      else {
LAB_03555da0:
        if (uVar29 <= uStack000000000000015c - 2) goto LAB_035575f4;
        lVar16 = *unaff_x19;
        uVar29 = *(uint *)(lVar15 + unaff_x27 + -0x330);
        uVar33 = *(undefined4 *)(lVar15 + unaff_x27 + -0x2f8);
LAB_035562ec:
        pcVar17 = *(code **)(lVar16 + 0x8d8);
LAB_035562f4:
        uVar30 = (ulong)uVar29;
        uVar10 = (ulong)(uint)fStack0000000000000070;
        uVar27 = (ulong)uStack0000000000000074;
        (*pcVar17)(in_stack_00000078,uVar10,uVar27,uVar30,fStack0000000000000104,0,
                   in_stack_00000088._4_4_,uVar33);
        puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar5;
        }
LAB_03556348:
        uStack0000000000000118 = 0;
        unaff_s15 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar15 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
    }
    else {
      lVar15 = lVar15 + unaff_x24 * unaff_x22;
      iVar8 = *(int *)(lVar15 + 0x68);
      *(undefined4 *)(lVar15 + 0x16c) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar9) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar8 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar11 & 1) == 0)) {
        lVar18 = *in_stack_00000170;
        if ((lVar18 == 0) || (lVar15 = *(long *)(lVar18 + 0x38), lVar15 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035575f4;
        fVar25 = *(float *)(lVar15 + unaff_x24 * unaff_x22 + 0x160);
        if (unaff_s15 <= fVar25) {
          unaff_s15 = fVar25;
        }
        if (fStack0000000000000100 <= ABS(unaff_s14)) {
          fStack0000000000000100 = ABS(unaff_s14);
        }
        if (iVar8 != in_stack_00000068._4_4_) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar18 = *in_stack_00000170;
            if (lVar18 == 0) goto LAB_035574b8;
            lVar15 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar15 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar15 + 0x15a8);
        }
        lVar18 = *(long *)(lVar18 + 0x38);
        if (lVar18 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar28 = *(float *)(lVar18 + unaff_x24 * unaff_x22 + 0x14c);
        fVar25 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar28 = fVar28 + unaff_s15 * fVar25;
        if (fVar28 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar28;
        }
        uVar10 = (ulong)(uint)fStack0000000000000104;
        in_stack_00000068._4_4_ = iVar8;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        uStack0000000000000118 = 0;
        lVar18 = in_stack_000000f0;
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar14 < (int)uVar9)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (uVar9 == uVar14) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar11 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_035575f4;
        lVar18 = lVar18 + unaff_x24 * unaff_x22;
        in_stack_00000088._4_4_ = *(float *)(lVar18 + 0x160);
        in_stack_00000078 = *(uint *)(lVar18 + 0x11c);
        uVar27 = (ulong)in_stack_00000078;
        bVar6 = unaff_s15 != 0.0;
        fVar25 = in_stack_00000088._4_4_;
        if (bVar6) {
          fVar25 = unaff_s15;
        }
        unaff_s15 = fVar25;
        in_stack_00000090 = *(undefined4 *)(lVar18 + 0x168);
        uStack0000000000000074 = 0;
        fVar25 = unaff_s14;
        if (bVar6) {
          fVar25 = fStack0000000000000100;
        }
        uVar10 = (ulong)(uint)fVar25;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar25;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
          if (uVar9 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + unaff_x24 * unaff_x22;
            lVar16 = *unaff_x19;
            uVar29 = *(uint *)(lVar18 + 0x128);
            uVar33 = *(undefined4 *)(lVar18 + 0x160);
            lVar18 = in_stack_000000f0;
            goto LAB_035562ec;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if ((uVar9 == uVar23) || ((int)uVar14 <= (int)uVar9)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
          lVar15 = unaff_x24;
          uVar29 = uVar9;
          if (in_stack_00000168._4_4_ == 0x200b || (uVar10 & 1) != 0) {
            lVar15 = in_stack_00000150;
            uVar29 = uVar14;
          }
          if (uVar29 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + lVar15 * unaff_x22;
            uVar29 = *(uint *)(lVar18 + 0x128);
            uVar33 = *(undefined4 *)(lVar18 + 0x160);
            pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
            lVar18 = in_stack_000000f0;
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
          uVar29 = *(uint *)(lVar15 + 0x18);
          lVar18 = in_stack_000000f0;
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar9 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar11 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar18 + unaff_x27),0);
        if ((uVar11 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
            if (uVar9 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + unaff_x24 * unaff_x22;
              uVar30 = (ulong)*(uint *)(lVar18 + 0x128);
              uVar27 = (ulong)uStack0000000000000074;
              uVar10 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (in_stack_00000078,uVar10,uVar27,uVar30,fStack0000000000000104,0,
                         in_stack_00000088._4_4_,*(undefined4 *)(lVar18 + 0x160));
              puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar15 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar18 = in_stack_000000f0;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar15 = *(long *)puVar5;
              }
              goto LAB_03556348;
            }
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
      }
      uStack0000000000000118 = 1;
      lVar18 = in_stack_000000f0;
    }
LAB_03556364:
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035575f4;
    if (in_stack_00000108 == 0) goto LAB_035574b8;
    uVar29 = *(uint *)(lVar15 + unaff_x24 * unaff_x22 + 400);
    fVar25 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
    if ((uVar29 >> 6 & 1) == 0) {
      if ((uStack000000000000012c & 1) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar15 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
        uVar29 = *(uint *)(lVar15 + unaff_x27 + -0x330);
        fVar24 = *(float *)(lVar15 + unaff_x27 + -0x30c);
        pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar30 = (ulong)uVar29;
        uVar10 = (ulong)(uint)fStack000000000000009c;
        uVar27 = (ulong)uStack0000000000000098;
        (*pcVar17)(in_stack_000000a0,uVar10,uVar27,uVar30,in_stack_000000a8 * fVar25 + fVar24,0,
                   in_stack_000000a8,in_stack_000000a8);
      }
LAB_03556948:
      uStack000000000000012c = 0;
    }
    else {
      lVar15 = *in_stack_00000170;
      if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x38), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_035575f4;
      *(undefined4 *)(lVar16 + unaff_x24 * unaff_x22 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)uVar9) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar16 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar14 < (int)uVar9)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
        if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
      }
      else {
        if (uVar9 == uVar14) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar11 & 1) != 0) goto LAB_035564e8;
          lVar15 = *in_stack_00000170;
          if (lVar15 == 0) goto LAB_035574b8;
        }
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_035575f4;
        lVar15 = lVar15 + unaff_x24 * unaff_x22;
        in_stack_00000040 = *(float *)(lVar15 + 0x60);
        in_stack_00000038 = *(float *)(lVar15 + 0x14c);
        uVar10 = (ulong)(uint)in_stack_00000038;
        in_stack_000000a0 = *(uint *)(lVar15 + 0x11c);
        uVar27 = (ulong)in_stack_000000a0;
        in_stack_000000a8 = *(float *)(lVar15 + 0x160);
        fStack000000000000009c = fVar25 * in_stack_000000a8 + in_stack_00000038;
        uStack0000000000000098 = 0;
      }
      iVar8 = *unaff_x20;
      if (iVar8 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
          if (uVar9 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + unaff_x24 * unaff_x22;
            lVar16 = *unaff_x19;
            uVar29 = *(uint *)(lVar15 + 0x128);
            fVar24 = *(float *)(lVar15 + 0x14c);
LAB_03556654:
            pcVar17 = *(code **)(lVar16 + 0x8d8);
            goto LAB_03556914;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (uVar9 == uVar23) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
          uVar29 = *(uint *)(lVar15 + 0x18);
          if (in_stack_00000168._4_4_ == 0x200b || (uVar10 & 1) != 0) {
            if (uVar29 <= uVar14) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            in_stack_00000150 = unaff_x24;
            if (uVar29 <= uVar9) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar15 = lVar15 + in_stack_00000150 * unaff_x22;
          fVar24 = *(float *)(lVar15 + 0x14c);
          uVar29 = *(uint *)(lVar15 + 0x128);
          pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)uVar9 < iVar8) {
        lVar15 = *in_stack_00000170;
        if ((lVar15 != 0) && (lVar16 = *(long *)(lVar15 + 0x38), lVar16 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar16 + 0x18)) {
            if (*(float *)(lVar16 + unaff_x27 + -0x108) == in_stack_00000040) {
              fVar28 = *(float *)(lVar16 + unaff_x27 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar10 = (ulong)(uint)in_stack_00000038;
              uVar11 = FUN_03567bac(fVar24 + fVar28,uVar10,0);
              if ((uVar11 & 1) != 0) {
                iVar8 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar15 = *in_stack_00000170;
              if (lVar15 == 0) goto LAB_035574b8;
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 != 0) {
              uVar29 = *(uint *)(lVar15 + 0x18);
              if ((int)uVar9 <= (int)uVar14) goto FUN_035568e8;
              if (uVar14 < uVar29) goto LAB_035568f0;
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_03556744:
      if ((int)uVar9 < iVar8) {
        iVar8 = FUN_036d3364(in_stack_00000108,0);
        if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar15 = *(long *)(lVar18 + in_stack_00000120 + -0x130);
        if (lVar15 == 0) goto LAB_035574b8;
        iVar7 = FUN_036d3364(lVar15,0);
        unaff_x27 = in_stack_00000120;
        if (iVar8 != iVar7) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 != 0)) {
          if (uStack000000000000015c - 2 < *(uint *)(lVar15 + 0x18)) {
            lVar16 = *unaff_x19;
            uVar29 = *(uint *)(lVar15 + unaff_x27 + -0x330);
            fVar24 = *(float *)(lVar15 + unaff_x27 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      uStack000000000000012c = 1;
    }
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0))
    goto LAB_035574b8;
    uVar29 = (uint)*(undefined8 *)(lVar15 + 0x18);
    if (uVar29 <= uVar9) goto LAB_035575f4;
    if ((*(byte *)(lVar15 + unaff_x24 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
      if ((in_stack_00000110._4_4_ & 1) != 0) {
        uVar27 = (ulong)uStack00000000000000c0;
        uVar10 = (ulong)(uint)fStack00000000000000dc;
        uVar30 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar10,uVar27,uVar30,fStack00000000000000d0,uVar27);
      }
LAB_035569b4:
      in_stack_00000110._4_4_ = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)uVar9) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar15 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((in_stack_00000110._4_4_ & 1) == 0) {
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar14 < (int)uVar9)) || (!bVar1)) goto LAB_035569b4;
        if (uVar9 == uVar14) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar11 & 1) != 0) goto LAB_035569b4;
        }
        puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *(long *)puVar5;
        }
        unaff_x22 = 0x178;
        if ((*in_stack_00000170 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000170 + 0x38), lVar15 == 0)) goto LAB_035574b8;
        uVar29 = (uint)*(undefined8 *)(lVar15 + 0x18);
        if (uVar29 <= uVar9) goto LAB_035575f4;
        lVar16 = *(long *)(lVar16 + 0xb8);
        lVar19 = lVar15 + unaff_x24 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar19 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar19 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar16 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar16 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar19 + 0x18c);
        in_stack_000000c8 = *(float *)(lVar16 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar16 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar29 <= uVar9) goto LAB_035575f4;
      lVar15 = lVar15 + unaff_x24 * unaff_x22;
      fVar25 = *(float *)(lVar15 + 0x128);
      fVar31 = *(float *)(lVar15 + 0x188);
      uVar21 = *(undefined8 *)(lVar15 + 0x17c);
      fVar35 = *(float *)(lVar15 + 0x184);
      uVar26 = *(undefined8 *)(lVar15 + 0x184);
      fVar34 = *(float *)(lVar15 + 0x18c);
      fVar24 = *(float *)(lVar15 + 0x11c);
      fVar32 = *(float *)(lVar15 + 0x148);
      fVar28 = *(float *)(lVar15 + 0x150);
      in_stack_00000178 = uVar21;
      fStack0000000000000180 = fVar35;
      fStack0000000000000184 = fVar31;
      in_stack_00000188 = fVar34;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar10 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar15 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar15);
        }
        fVar25 = fVar25 + (float)in_stack_000017b8;
        uVar27 = (ulong)(uint)fVar25;
        fVar24 = fVar24 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar28 = fVar28 - in_stack_000017c0;
        uVar10 = (ulong)(uint)fVar28;
        fVar32 = fVar32 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar30 = (ulong)(uint)fVar32;
        if (fVar24 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar24;
        }
        if (fVar28 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar28;
        }
        if (in_stack_000000c8 <= fVar25) {
          in_stack_000000c8 = fVar25;
        }
        if (fStack00000000000000d0 <= fVar32) {
          fStack00000000000000d0 = fVar32;
        }
      }
      else {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar15);
        }
        fVar24 = (fVar24 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar30 = (ulong)(uint)fVar24;
        if (fVar28 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar28;
        }
        uVar10 = (ulong)(uint)fStack00000000000000dc;
        uVar27 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar32) {
          fStack00000000000000d0 = fVar32;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar10,uVar27,uVar30,fStack00000000000000d0,uVar27);
        fStack00000000000000dc = fVar28 - fVar34;
        in_stack_000000c8 = fVar25 + fVar35;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar32 + fVar31;
        fStack00000000000000d8 = fVar24;
        in_stack_000017b0 = uVar21;
        in_stack_000017b8 = uVar26;
        in_stack_000017c0 = fVar34;
      }
      unaff_x22 = 0x178;
      if (((*unaff_x20 == 1) || (uVar9 == uVar23)) || (((int)uVar14 <= (int)uVar9 || (!bVar1)))) {
        uVar27 = (ulong)uStack00000000000000c0;
        uVar10 = (ulong)(uint)fStack00000000000000dc;
        uVar30 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar10,uVar27,uVar30,fStack00000000000000d0,uVar27);
        in_stack_00000110._4_4_ = 0;
      }
      else {
        in_stack_00000110._4_4_ = 1;
      }
    }
    puVar5 = OVRPlugin_Media_TypeInfo;
    iVar8 = *unaff_x20;
    uVar29 = uStack000000000000015c + 1;
    unaff_x27 = unaff_x27 + 0x178;
    iStack0000000000000128 = iStack0000000000000128 + 1;
    if (iVar8 <= (int)uStack000000000000015c) {
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      *(int *)(lVar18 + 0x18) = iVar8;
      lVar15 = unaff_x19[0xd4];
      *(uint *)(lVar18 + 0x2c) = unaff_w21 + 1;
      if (iVar8 < 1 || iStack00000000000000d4 == 0) {
        iStack00000000000000d4 = 1;
      }
      *(int *)(lVar18 + 0x1c) = (int)lVar15;
      *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
      *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_03554724;
      lVar18 = unaff_x19[0xdf];
      if (lVar18 != 0) {
        (**(code **)(lVar18 + 0x18))
                  (*(undefined8 *)(lVar18 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar18 + 0x28))
        ;
      }
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar8 = FUN_03911ee4(unaff_x19[0xe5],0);
      if (iVar8 != 0x19) {
        lVar18 = unaff_x19[0xe5];
        if (lVar18 == 0) goto LAB_035574b8;
        uVar9 = FUN_03911ee4(lVar18,0);
        FUN_03911f20(lVar18,uVar9 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
        FUN_03596b20(lVar18 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa280(unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar26 = FUN_0390ef60(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar9 = FUN_0390ed3c(unaff_x19[0xe4],0);
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar16 = 0;
      lVar15 = 0;
      goto LAB_03557110;
    }
    if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
    if ((*in_stack_00000170 == 0) || (lVar15 = *(long *)(*in_stack_00000170 + 0x50), lVar15 == 0))
    goto LAB_035574b8;
    unaff_x24 = (long)(int)uStack000000000000015c;
    lVar16 = lVar18 + unaff_x24 * unaff_x22;
    in_stack_00000160 = *(uint *)(lVar16 + 100);
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    in_x15 = (long)(int)in_stack_00000160;
    lVar15 = lVar15 + in_x15 * 0x5c;
    in_stack_00000108 = *(long *)(lVar16 + 0x38);
    uVar3 = *(ushort *)(lVar16 + 0x20);
    uVar14 = *(uint *)(lVar15 + 0x3c);
    in_stack_000000e0 = (long)(int)uVar14;
    uVar9 = *(uint *)(lVar15 + 0x68);
    iVar2 = *(int *)(lVar15 + 0x20);
    iVar8 = *(int *)(lVar15 + 0x28);
    iVar7 = *(int *)(lVar15 + 0x2c);
    in_stack_00000150 = (long)*(int *)(lVar15 + 0x40);
    fVar28 = *(float *)(lVar15 + 0x4c);
    fVar31 = *(float *)(lVar15 + 0x54);
    fVar24 = *(float *)(lVar15 + 0x58);
    fVar36 = *(float *)(lVar15 + 0x5c);
    fVar34 = *(float *)(lVar15 + 0x60);
    fVar35 = *(float *)(lVar15 + 0x6c);
    fVar37 = *(float *)(lVar15 + 0x70);
    fVar25 = *(float *)(lVar15 + 0x74);
    fVar32 = *(float *)(lVar15 + 0x78);
    in_stack_00000168._4_4_ = (uint)uVar3;
    if ((int)uVar9 < 9) {
      switch(uVar9) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar34 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar24;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar34 + fVar36 * 0.5) - fVar24 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar36 + fVar34) - fVar24;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar36 + fVar34;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar9 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
          if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b8cc4(uVar4,0);
          if ((uVar10 & 1) == 0) {
            bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar24 <= fVar36) && (!bVar1 && uVar9 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar34;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar36 + fVar34;
            }
            goto LAB_03555088;
          }
          if (((uVar29 == 1) || (in_stack_00000160 != unaff_w21)) ||
             (uStack000000000000015c == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar34;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar36 + fVar34;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar13 = (char)unaff_x19[0x1e];
            fVar34 = -fVar24;
            if (cVar13 != '\0') {
              fVar34 = fVar24;
            }
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar14) goto LAB_035575f4;
            iVar7 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                    (-iVar2 - (uStack0000000000000028 & 1)) + iVar7 + -1;
            if (iVar7 < 1) {
              fVar24 = 1.0;
              iVar7 = 1;
            }
            else {
              fVar24 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
              fVar24 = 1.0 - fVar24;
            }
            else {
              if (in_stack_00000168._4_4_ != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                cVar13 = (char)unaff_x19[0x1e];
                if ((uVar10 & 1) != 0) goto LAB_03556e74;
              }
              iVar7 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar8;
            }
            fVar24 = ((fVar36 + fVar34) * fVar24) / (float)iVar7;
            if (cVar13 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar24;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar24;
            }
          }
        }
      }
      else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar9 == 0x20) {
      fVar24 = fVar35 + fVar25;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar23 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
    unaff_x22 = 0x178;
    lVar15 = in_stack_000000f0 + unaff_x24 * 0x178;
    in_stack_00000130 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar24 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar34 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    in_stack_00000140 = CONCAT44(fVar34,fVar24);
    lVar18 = in_stack_000000f0;
    uVar9 = uStack000000000000015c;
    in_stack_00000120 = unaff_x27;
    uVar14 = unaff_w21;
  } while (*(char *)(lVar15 + 0x194) == '\0');
  unaff_w28 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
  if (unaff_w28 != 0) goto LAB_0355574c;
  fVar36 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar18 + 0x84) = 0;
    *(undefined4 *)(lVar18 + 0xac) = 0;
    *(undefined4 *)(lVar18 + 0xd4) = 0x3f800000;
    fVar36 = 1.0;
    break;
  case 1:
    fVar32 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = (in_stack_000000f8._4_4_ + fVar32) - *(float *)(in_stack_00000080 + 0x230);
      fVar32 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar25 = fVar25 - fVar35;
    *(float *)(lVar18 + 0x84) = fVar36 + (fVar32 - fVar35) / fVar25;
    *(float *)(lVar18 + 0xac) = fVar36 + (*(float *)(lVar18 + 0x98) - fVar35) / fVar25;
    *(float *)(lVar18 + 0xd4) = fVar36 + (*(float *)(lVar18 + 0xc0) - fVar35) / fVar25;
    fVar36 = fVar36 + (*(float *)(lVar18 + 0xe8) - fVar35) / fVar25;
    break;
  case 2:
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar32 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar25 = (in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar18 + 0x84) = fVar36 + fVar25 / fVar32;
    *(float *)(lVar18 + 0xac) =
         fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar18 + 0xd4) =
         fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar36 = fVar36 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar18 + 0x88) = 0;
      *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar18 + 0xd8) = 0;
      *(undefined4 *)(lVar18 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar32 = fVar32 - fVar37;
      fVar25 = fVar36 + (*(float *)(lVar18 + 0x74) - fVar37) / fVar32;
      fVar32 = fVar36 + (*(float *)(lVar18 + 0x9c) - fVar37) / fVar32;
      *(float *)(lVar18 + 0x88) = fVar25;
      *(float *)(lVar18 + 0xb0) = fVar32;
      *(float *)(lVar18 + 0xd8) = fVar25;
      *(float *)(lVar18 + 0x100) = fVar32;
      break;
    case 2:
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = fVar36 + (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar18 + 0x88) = fVar25;
      fVar32 = *(float *)(unaff_x19 + 0x9c);
      fVar35 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar18 + 0xd8) = fVar25;
      fVar25 = fVar36 + (*(float *)(lVar18 + 0x9c) - fVar32) / (fVar35 - fVar32);
      *(float *)(lVar18 + 0xb0) = fVar25;
      *(float *)(lVar18 + 0x100) = fVar25;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar23 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar25 = *(float *)(lVar18 + 0x15c);
    fVar32 = (1.0 - (*(float *)(lVar18 + 0x88) + *(float *)(lVar18 + 0xb0)) * fVar25) * 0.5;
    fVar35 = fVar36 + *(float *)(lVar18 + 0x88) * fVar25 + fVar32;
    fVar36 = fVar36 + fVar32 + *(float *)(lVar18 + 0xb0) * fVar25;
    *(float *)(lVar18 + 0x84) = fVar35;
    *(float *)(lVar18 + 0xac) = fVar35;
    *(float *)(lVar18 + 0xd4) = fVar36;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar36;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar18 + 0x88) = 0;
    *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0x100) = 0;
    break;
  case 1:
    if (uStack000000000000015c < uVar23) {
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar28 = fVar28 - fVar31;
      fVar25 = (*(float *)(lVar18 + 0x74) - fVar31) / fVar28;
      fVar28 = (*(float *)(lVar18 + 0x9c) - fVar31) / fVar28;
      *(float *)(lVar18 + 0x88) = fVar25;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar25 = (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar18 + 0x88) = fVar25;
    fVar28 = (*(float *)(lVar18 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar18 + 0xb0) = fVar28;
    *(float *)(lVar18 + 0xd8) = fVar28;
    *(float *)(lVar18 + 0x100) = fVar25;
    break;
  case 3:
    if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar32 = *(float *)(lVar18 + 0x15c);
    fVar28 = (1.0 - (*(float *)(lVar18 + 0x84) + *(float *)(lVar18 + 0xd4)) / fVar32) * 0.5;
    fVar25 = *(float *)(lVar18 + 0x84) / fVar32 + fVar28;
    fVar28 = fVar28 + *(float *)(lVar18 + 0xd4) / fVar32;
    *(float *)(lVar18 + 0x88) = fVar25;
    *(float *)(lVar18 + 0xb0) = fVar28;
    *(float *)(lVar18 + 0x100) = fVar25;
    *(float *)(lVar18 + 0xd8) = fVar28;
  }
  if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
  lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
  unaff_s14 = *(float *)(lVar18 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar18 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar25 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar25 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar25 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar25 * unaff_s14;
  }
  lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar28 = *(float *)(lVar18 + 0x88);
  fVar32 = *(float *)(lVar18 + 0x84);
  fVar25 = -2.1474836e+09;
  if (fVar32 != INFINITY) {
    fVar25 = (float)(int)fVar32;
  }
  fVar35 = *(float *)(lVar18 + 0xd4);
  fVar36 = *(float *)(lVar18 + 0xd8);
  fVar31 = -2.1474836e+09;
  if (fVar28 != INFINITY) {
    fVar31 = (float)(int)fVar28;
  }
  uVar33 = FUN_03591d3c(fVar32 - fVar25,fVar28 - fVar31);
  *(undefined4 *)(lVar18 + 0x84) = uVar33;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  fVar36 = fVar36 - fVar31;
  *(float *)(lVar18 + 0x88) = unaff_s14;
  uVar33 = FUN_03591d3c(fVar32 - fVar25,fVar36);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar33;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  fVar35 = fVar35 - fVar25;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
  fVar25 = (float)FUN_03591d3c(fVar35,fVar36);
  *(float *)(lVar18 + 0xd4) = fVar25;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
  *(float *)(lVar18 + 0xd8) = unaff_s14;
  uVar33 = FUN_03591d3c(fVar35,fVar28 - fVar31);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar33;
  uVar23 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  unaff_x22 = 0x178;
  if (((int)uStack000000000000015c < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(ulong *)(lVar18 + 0x70) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0x70));
      *(float *)(lVar18 + 0x78) = fVar34 + *(float *)(lVar18 + 0x78);
      *(ulong *)(lVar18 + 0x98) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0x98));
      *(float *)(lVar18 + 0xa0) = fVar34 + *(float *)(lVar18 + 0xa0);
      *(ulong *)(lVar18 + 0xc0) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0xc0));
      *(float *)(lVar18 + 200) = fVar34 + *(float *)(lVar18 + 200);
      *(ulong *)(lVar18 + 0xe8) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0xe8));
      *(float *)(lVar18 + 0xf0) = fVar34 + *(float *)(lVar18 + 0xf0);
      lVar18 = in_stack_000000f0;
      uStack000000000000015c = uVar29;
      goto code_r0x035558f0;
    }
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
      if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) != iStack0000000000000030)
      goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(ulong *)(lVar18 + 0x70) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0x70));
      *(float *)(lVar18 + 0x78) = fVar34 + *(float *)(lVar18 + 0x78);
      *(ulong *)(lVar18 + 0x98) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0x98));
      *(float *)(lVar18 + 0xa0) = fVar34 + *(float *)(lVar18 + 0xa0);
      *(ulong *)(lVar18 + 0xc0) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0xc0));
      *(float *)(lVar18 + 200) = fVar34 + *(float *)(lVar18 + 200);
      *(ulong *)(lVar18 + 0xe8) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                    in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0xe8));
      *(float *)(lVar18 + 0xf0) = fVar34 + *(float *)(lVar18 + 0xf0);
      lVar18 = in_stack_000000f0;
      uStack000000000000015c = uVar29;
      goto code_r0x035558f0;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar23 = *(uint *)(in_stack_000000f0 + 0x18);
  }
  puVar5 = PTR_DAT_03cbded8;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar18 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar18 + 0x78) = uVar33;
  if (uVar23 <= uStack000000000000015c) goto LAB_035575f4;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
  lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar18 + 0x98) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  *(undefined4 *)(lVar18 + 0xa0) = uVar33;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xc0) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  *(undefined4 *)(lVar18 + 200) = uVar33;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xe8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  *(undefined4 *)(lVar18 + 0xf0) = uVar33;
  *(undefined1 *)(lVar15 + 0x194) = 0;
  lVar18 = in_stack_000000f0;
  uStack000000000000015c = uVar29;
  goto code_r0x035558f0;
  while( true ) {
    lVar18 = *in_stack_00000170;
    lVar15 = lVar15 + 1;
    lVar16 = lVar16 + 0x50;
    if (lVar18 == 0) break;
LAB_03557110:
    uVar11 = lVar15 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar11) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
    FUN_03596a20(lVar18 + lVar16 + 0x70,0);
    lVar18 = unaff_x19[0xe1];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
    uVar21 = *(undefined8 *)(lVar18 + lVar15 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_036d35a8(uVar21,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar11) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar18 + lVar16 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      break;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a460c(lVar18,*(undefined8 *)(lVar19 + lVar16 + 0x80),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      break;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4810(lVar18,*(undefined8 *)(lVar19 + lVar16 + 0x98),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      break;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a48bc(lVar18,*(undefined8 *)(lVar19 + lVar16 + 0xa0),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      break;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4e24(lVar18,*(undefined8 *)(lVar19 + lVar16 + 0xa8),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0), lVar18 == 0))
      break;
      FUN_036aa280(lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_037b514c(lVar18,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar15 * 8 + 0x28);
      if ((lVar19 == 0) || (uVar21 = UnityEngine_Material__GetColorArray(lVar19,0), lVar18 == 0))
      break;
      FUN_0390f3a4(lVar18,uVar21,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390eec8(uVar26,uVar10,uVar27,uVar30,lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar15 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390ed78(lVar18,uVar9 & 1,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      plVar22 = *(long **)(lVar18 + lVar15 * 8 + 0x28);
      uVar29 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar22 == (long *)0x0) break;
      (**(code **)(*plVar22 + 0x2c8))(plVar22,uVar29 & 1,*(undefined8 *)(*plVar22 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


