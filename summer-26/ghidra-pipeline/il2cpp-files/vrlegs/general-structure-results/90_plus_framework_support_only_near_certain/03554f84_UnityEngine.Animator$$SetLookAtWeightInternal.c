/*
FUNCTION_NAME: UnityEngine.Animator$$SetLookAtWeightInternal
ENTRY_POINT: 03554f84
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


void UnityEngine_Animator__SetLookAtWeightInternal(void)

{
  bool bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  uint in_w8;
  long lVar13;
  long lVar14;
  uint in_w9;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  long in_x12;
  uint in_w14;
  long in_x15;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar18;
  long *plVar19;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w27;
  long lVar20;
  int unaff_w29;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  ulong uVar28;
  float in_s3;
  float fVar29;
  uint uVar30;
  ulong uVar31;
  float in_s4;
  float in_s5;
  float unaff_s8;
  float fVar32;
  float unaff_s9;
  float unaff_s10;
  float fVar33;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar34;
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
  
code_r0x03554f84:
  uVar30 = uStack000000000000015c;
  uVar8 = unaff_w21;
  if (in_w14 == in_w9) goto switchD_03554f58_caseD_3;
  if (in_w14 == 0x2060) goto switchD_03554f58_caseD_3;
LAB_03554fac:
  if ((uint)in_stack_000000e0 < in_w8) {
    uVar3 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * in_x12 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_026b8cc4(uVar3,0);
    if ((uVar9 & 1) == 0) {
      bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
    }
    else {
      bVar1 = false;
    }
    uVar30 = uStack000000000000015c;
    if ((unaff_s10 <= unaff_s11) && (!bVar1 && unaff_w22 >> 4 == 0)) {
      in_stack_000000f8._4_4_ = unaff_s8;
      if ((char)unaff_x19[0x1e] == '\0') goto LAB_03555088;
      in_stack_000000f8._4_4_ = unaff_s11 + unaff_s8;
      goto LAB_03555088;
    }
    uVar8 = unaff_w21;
    if (((uStack000000000000015c == 1) || (in_stack_00000160 != unaff_w21)) ||
       (unaff_w25 == *(uint *)((long)unaff_x19 + 0x324))) {
      in_stack_000000f8._4_4_ = unaff_s8;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = unaff_s11 + unaff_s8;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
      in_stack_000000e8 = 0;
    }
    else {
      cVar12 = (char)unaff_x19[0x1e];
      fVar24 = -unaff_s10;
      if (cVar12 != '\0') {
        fVar24 = unaff_s10;
      }
      if (*(uint *)(in_stack_000000f0 + 0x18) <= (uint)in_stack_000000e0) goto LAB_035575f4;
      iVar7 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
              (-unaff_w27 - (uStack0000000000000028 & 1)) + unaff_w23 + -1;
      if (iVar7 < 1) {
        fVar25 = 1.0;
        iVar7 = 1;
      }
      else {
        fVar25 = *(float *)((long)unaff_x19 + 0x2dc);
      }
      if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
        fVar25 = 1.0 - fVar25;
      }
      else {
        if (in_stack_00000168._4_4_ != 0xa0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          cVar12 = (char)unaff_x19[0x1e];
          if ((uVar9 & 1) != 0) goto LAB_03556e74;
        }
        iVar7 = (unaff_w27 - (~uStack0000000000000028 & 1)) + unaff_w29;
      }
      fVar24 = ((unaff_s11 + fVar24) * fVar25) / (float)iVar7;
      if (cVar12 == '\0') {
        in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar24;
        in_stack_000000e8 =
             CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,(float)in_stack_000000e8 + 0.0
                     );
      }
      else {
        in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar24;
      }
    }
switchD_03554f58_caseD_3:
    unaff_w21 = in_stack_00000160;
    uStack000000000000015c = uVar30;
    uVar30 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar26 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar24 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar25 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar20 + 0x194) == '\0') goto LAB_03555938;
    iVar7 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
    if (iVar7 != 0) goto LAB_0355574c;
    fVar21 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)unaff_w21,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar13 + 0x84) = 0;
      *(undefined4 *)(lVar13 + 0xac) = 0;
      *(undefined4 *)(lVar13 + 0xd4) = 0x3f800000;
      fVar21 = 1.0;
      break;
    case 1:
      fVar22 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar22 = (in_stack_000000f8._4_4_ + fVar22) - *(float *)(in_stack_00000080 + 0x230);
        fVar29 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = unaff_s12 - unaff_s9;
      *(float *)(lVar13 + 0x84) = fVar21 + (fVar22 - unaff_s9) / fVar29;
      *(float *)(lVar13 + 0xac) = fVar21 + (*(float *)(lVar13 + 0x98) - unaff_s9) / fVar29;
      *(float *)(lVar13 + 0xd4) = fVar21 + (*(float *)(lVar13 + 0xc0) - unaff_s9) / fVar29;
      fVar21 = fVar21 + (*(float *)(lVar13 + 0xe8) - unaff_s9) / fVar29;
      break;
    case 2:
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar22 = (in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar13 + 0x84) = fVar21 + fVar22 / fVar29;
      *(float *)(lVar13 + 0xac) =
           fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar13 + 0xd4) =
           fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar21 = fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar13 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(undefined4 *)(lVar13 + 0x88) = 0;
        *(undefined4 *)(lVar13 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar13 + 0xd8) = 0;
        *(undefined4 *)(lVar13 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar22 = fVar21 + (*(float *)(lVar13 + 0x74) - unaff_s13) / (in_s5 - unaff_s13);
        fVar29 = fVar21 + (*(float *)(lVar13 + 0x9c) - unaff_s13) / (in_s5 - unaff_s13);
        *(float *)(lVar13 + 0x88) = fVar22;
        *(float *)(lVar13 + 0xb0) = fVar29;
        *(float *)(lVar13 + 0xd8) = fVar22;
        *(float *)(lVar13 + 0x100) = fVar29;
        break;
      case 2:
        lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar22 = fVar21 + (*(float *)(lVar13 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar13 + 0x88) = fVar22;
        fVar29 = *(float *)(unaff_x19 + 0x9c);
        fVar34 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar13 + 0xd8) = fVar22;
        fVar22 = fVar21 + (*(float *)(lVar13 + 0x9c) - fVar29) / (fVar34 - fVar29);
        *(float *)(lVar13 + 0xb0) = fVar22;
        *(float *)(lVar13 + 0x100) = fVar22;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar30 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
      }
      if (uVar30 <= unaff_w25) goto LAB_035575f4;
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar22 = *(float *)(lVar13 + 0x15c);
      fVar29 = (1.0 - (*(float *)(lVar13 + 0x88) + *(float *)(lVar13 + 0xb0)) * fVar22) * 0.5;
      fVar34 = fVar21 + *(float *)(lVar13 + 0x88) * fVar22 + fVar29;
      fVar21 = fVar21 + fVar29 + *(float *)(lVar13 + 0xb0) * fVar22;
      *(float *)(lVar13 + 0x84) = fVar34;
      *(float *)(lVar13 + 0xac) = fVar34;
      *(float *)(lVar13 + 0xd4) = fVar21;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar21;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar30 <= unaff_w25) goto LAB_035575f4;
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar13 + 0x88) = 0;
      *(undefined4 *)(lVar13 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar13 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar13 + 0x100) = 0;
      break;
    case 1:
      if (unaff_w25 < uVar30) {
        lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar21 = (*(float *)(lVar13 + 0x74) - in_s4) / (in_s3 - in_s4);
        fVar22 = (*(float *)(lVar13 + 0x9c) - in_s4) / (in_s3 - in_s4);
        *(float *)(lVar13 + 0x88) = fVar21;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar30 <= unaff_w25) goto LAB_035575f4;
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar21 = (*(float *)(lVar13 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar13 + 0x88) = fVar21;
      fVar22 = (*(float *)(lVar13 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar13 + 0xb0) = fVar22;
      *(float *)(lVar13 + 0xd8) = fVar22;
      *(float *)(lVar13 + 0x100) = fVar21;
      break;
    case 3:
      if (uVar30 <= unaff_w25) goto LAB_035575f4;
      lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = *(float *)(lVar13 + 0x15c);
      fVar22 = (1.0 - (*(float *)(lVar13 + 0x84) + *(float *)(lVar13 + 0xd4)) / fVar29) * 0.5;
      fVar21 = *(float *)(lVar13 + 0x84) / fVar29 + fVar22;
      fVar22 = fVar22 + *(float *)(lVar13 + 0xd4) / fVar29;
      *(float *)(lVar13 + 0x88) = fVar21;
      *(float *)(lVar13 + 0xb0) = fVar22;
      *(float *)(lVar13 + 0x100) = fVar21;
      *(float *)(lVar13 + 0xd8) = fVar22;
    }
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
    unaff_s14 = *(float *)(lVar13 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar13 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    fVar21 = in_stack_00000050._4_4_;
    if (((in_stack_00000058 == 2) || (fVar21 = fStack0000000000000034, in_stack_00000058 == 1)) ||
       (fVar21 = fStack000000000000002c, in_stack_00000058 == 0)) {
      unaff_s14 = fVar21 * unaff_s14;
    }
    lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar22 = *(float *)(lVar13 + 0x88);
    fVar29 = *(float *)(lVar13 + 0x84);
    fVar21 = -2.1474836e+09;
    if (fVar29 != INFINITY) {
      fVar21 = (float)(int)fVar29;
    }
    fVar32 = *(float *)(lVar13 + 0xd4);
    fVar33 = *(float *)(lVar13 + 0xd8);
    fVar34 = -2.1474836e+09;
    if (fVar22 != INFINITY) {
      fVar34 = (float)(int)fVar22;
    }
    uVar23 = FUN_03591d3c(fVar29 - fVar21,fVar22 - fVar34);
    *(undefined4 *)(lVar13 + 0x84) = uVar23;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
    fVar33 = fVar33 - fVar34;
    *(float *)(lVar13 + 0x88) = unaff_s14;
    uVar23 = FUN_03591d3c(fVar29 - fVar21,fVar33);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar23;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
    fVar32 = fVar32 - fVar21;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
    fVar21 = (float)FUN_03591d3c(fVar32,fVar33);
    *(float *)(lVar13 + 0xd4) = fVar21;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(float *)(lVar13 + 0xd8) = unaff_s14;
    uVar23 = FUN_03591d3c(fVar32,fVar22 - fVar34);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar23;
    uVar30 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
    unaff_x20 = in_stack_00000048;
LAB_0355574c:
    if (((int)unaff_w25 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)unaff_w21 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar30 <= unaff_w25) goto LAB_035575f4;
        lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(ulong *)(lVar20 + 0x70) =
             CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x70) >> 0x20),
                      fVar26 + (float)*(undefined8 *)(lVar20 + 0x70));
        *(float *)(lVar20 + 0x78) = fVar25 + *(float *)(lVar20 + 0x78);
        *(ulong *)(lVar20 + 0x98) =
             CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x98) >> 0x20),
                      fVar26 + (float)*(undefined8 *)(lVar20 + 0x98));
        *(float *)(lVar20 + 0xa0) = fVar25 + *(float *)(lVar20 + 0xa0);
        *(ulong *)(lVar20 + 0xc0) =
             CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0xc0) >> 0x20),
                      fVar26 + (float)*(undefined8 *)(lVar20 + 0xc0));
        *(float *)(lVar20 + 200) = fVar25 + *(float *)(lVar20 + 200);
        *(ulong *)(lVar20 + 0xe8) =
             CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0xe8) >> 0x20),
                      fVar26 + (float)*(undefined8 *)(lVar20 + 0xe8));
        *(float *)(lVar20 + 0xf0) = fVar25 + *(float *)(lVar20 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)unaff_w21 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (unaff_w25 < uVar30) {
          if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
            lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(ulong *)(lVar20 + 0x70) =
                 CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x70) >> 0x20),
                          fVar26 + (float)*(undefined8 *)(lVar20 + 0x70));
            *(float *)(lVar20 + 0x78) = fVar25 + *(float *)(lVar20 + 0x78);
            *(ulong *)(lVar20 + 0x98) =
                 CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x98) >> 0x20),
                          fVar26 + (float)*(undefined8 *)(lVar20 + 0x98));
            *(float *)(lVar20 + 0xa0) = fVar25 + *(float *)(lVar20 + 0xa0);
            *(ulong *)(lVar20 + 0xc0) =
                 CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0xc0) >> 0x20),
                          fVar26 + (float)*(undefined8 *)(lVar20 + 0xc0));
            *(float *)(lVar20 + 200) = fVar25 + *(float *)(lVar20 + 200);
            *(ulong *)(lVar20 + 0xe8) =
                 CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0xe8) >> 0x20),
                          fVar26 + (float)*(undefined8 *)(lVar20 + 0xe8));
            *(float *)(lVar20 + 0xf0) = fVar25 + *(float *)(lVar20 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar30 = *(uint *)(in_stack_000000f0 + 0x18);
    }
    puVar4 = PTR_DAT_03cbded8;
    uVar23 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar13 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar13 + 0x78) = uVar23;
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    uVar23 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
    lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar13 + 0x98) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    *(undefined4 *)(lVar13 + 0xa0) = uVar23;
    uVar23 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
    *(undefined8 *)(lVar13 + 0xc0) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    *(undefined4 *)(lVar13 + 200) = uVar23;
    uVar23 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
    *(undefined8 *)(lVar13 + 0xe8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    *(undefined4 *)(lVar13 + 0xf0) = uVar23;
    *(undefined1 *)(lVar20 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
    if (iVar7 == 0) {
      pcVar16 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
      (*pcVar16)();
    }
    else if (iVar7 == 1) {
      pcVar16 = *(code **)(*unaff_x19 + 0x8c8);
      goto LAB_0355591c;
    }
LAB_03555938:
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar20 = lVar20 + unaff_x24 * 0x178;
    uVar27 = *(undefined8 *)(lVar20 + 0x11c);
    *(undefined8 *)(lVar20 + 0x11c) =
         CONCAT44(fVar24 + (float)((ulong)uVar27 >> 0x20),fVar26 + (float)uVar27);
    *(float *)(lVar20 + 0x124) = fVar25 + *(float *)(lVar20 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar20 = lVar20 + unaff_x24 * 0x178;
    *(ulong *)(lVar20 + 0x110) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x110) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar20 + 0x110));
    *(float *)(lVar20 + 0x118) = fVar25 + *(float *)(lVar20 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar20 = lVar20 + unaff_x24 * 0x178;
    *(ulong *)(lVar20 + 0x128) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x128) >> 0x20),
                  fVar26 + (float)*(undefined8 *)(lVar20 + 0x128));
    *(float *)(lVar20 + 0x130) = fVar25 + *(float *)(lVar20 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar20 = lVar20 + unaff_x24 * 0x178;
    *(float *)(lVar20 + 0x134) = fVar26 + *(float *)(lVar20 + 0x134);
    *(ulong *)(lVar20 + 0x138) =
         CONCAT44(fVar25 + (float)((ulong)*(undefined8 *)(lVar20 + 0x138) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar20 + 0x138));
    lVar20 = *in_stack_00000170;
    if ((lVar20 == 0) || (lVar13 = *(long *)(lVar20 + 0x38), lVar13 == 0)) goto LAB_035574b8;
    uVar30 = *(uint *)(lVar13 + 0x18);
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    lVar17 = lVar13 + unaff_x24 * 0x178;
    uVar9 = CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar17 + 0x140) >> 0x20),
                     fVar26 + (float)*(undefined8 *)(lVar17 + 0x140));
    fVar25 = fVar24 + *(float *)(lVar17 + 0x150);
    uVar28 = (ulong)(uint)fVar25;
    uVar31 = CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar17 + 0x148) >> 0x20),
                      fVar24 + (float)*(undefined8 *)(lVar17 + 0x148));
    *(float *)(lVar17 + 0x150) = fVar25;
    *(ulong *)(lVar17 + 0x140) = uVar9;
    *(ulong *)(lVar17 + 0x148) = uVar31;
    if (unaff_w21 == uVar8) {
      uVar30 = *unaff_x20 - 1;
      if (unaff_w25 == uVar30) goto LAB_03555b44;
    }
    else {
      lVar20 = *(long *)(lVar20 + 0x50);
      if (lVar20 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar17 = (long)(int)uVar8;
      lVar14 = lVar20 + lVar17 * 0x5c;
      uVar31 = (ulong)(uint)*(float *)(lVar14 + 0x58);
      fVar25 = fVar24 + *(float *)(lVar14 + 0x54);
      uVar9 = (ulong)(uint)fVar25;
      fVar21 = fVar26 + *(float *)(lVar14 + 0x58);
      uVar28 = (ulong)(uint)fVar21;
      *(ulong *)(lVar14 + 0x4c) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar14 + 0x4c) >> 0x20),
                    fVar24 + (float)*(undefined8 *)(lVar14 + 0x4c));
      *(float *)(lVar14 + 0x54) = fVar25;
      *(float *)(lVar14 + 0x58) = fVar21;
      if (uVar30 <= *(uint *)(lVar14 + 0x34)) goto LAB_035575f4;
      uVar23 = *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar14 + 0x34) * 0x178 + 0x11c);
      lVar20 = lVar20 + lVar17 * 0x5c;
      *(float *)(lVar20 + 0x70) = fVar25;
      *(undefined4 *)(lVar20 + 0x6c) = uVar23;
      lVar20 = *in_stack_00000170;
      if ((lVar20 == 0) || (lVar13 = *(long *)(lVar20 + 0x50), lVar13 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_035574b8;
      uVar30 = *(uint *)(lVar13 + lVar17 * 0x5c + 0x40);
      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar13 = lVar13 + lVar17 * 0x5c;
      *(undefined4 *)(lVar13 + 0x74) = *(undefined4 *)(lVar20 + (long)(int)uVar30 * 0x178 + 0x128);
      *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar13 + 0x4c);
      uVar30 = *unaff_x20 - 1;
LAB_03555b44:
      if (unaff_w25 == uVar30) {
        lVar20 = *in_stack_00000170;
        if ((lVar20 == 0) || (lVar13 = *(long *)(lVar20 + 0x50), lVar13 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_035575f4;
        lVar17 = lVar13 + in_x15 * 0x5c;
        uVar31 = (ulong)(uint)*(float *)(lVar17 + 0x58);
        uVar9 = CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar17 + 0x4c) >> 0x20),
                         fVar24 + (float)*(undefined8 *)(lVar17 + 0x4c));
        fVar25 = fVar24 + *(float *)(lVar17 + 0x54);
        fVar26 = fVar26 + *(float *)(lVar17 + 0x58);
        uVar28 = (ulong)(uint)fVar26;
        *(ulong *)(lVar17 + 0x4c) = uVar9;
        *(float *)(lVar17 + 0x54) = fVar25;
        *(float *)(lVar17 + 0x58) = fVar26;
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(lVar17 + 0x34)) goto LAB_035575f4;
        uVar23 = *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar17 + 0x34) * 0x178 + 0x11c);
        lVar13 = lVar13 + in_x15 * 0x5c;
        *(float *)(lVar13 + 0x70) = fVar25;
        *(undefined4 *)(lVar13 + 0x6c) = uVar23;
        lVar20 = *in_stack_00000170;
        if ((lVar20 == 0) || (lVar13 = *(long *)(lVar20 + 0x50), lVar13 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_035575f4;
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        uVar30 = *(uint *)(lVar13 + in_x15 * 0x5c + 0x40);
        if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_035575f4;
        lVar13 = lVar13 + in_x15 * 0x5c;
        *(undefined4 *)(lVar13 + 0x74) = *(undefined4 *)(lVar20 + (long)(int)uVar30 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar13 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b82c4(in_stack_00000168._4_4_,0);
    if (((((uVar10 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
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
        uVar10 = FUN_026b81f8(in_stack_00000168._4_4_,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
          if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar10 & 1) == 0)) && (*unaff_x20 != 1))
          goto LAB_0355686c;
        }
      }
      else if (((uStack000000000000015c != 1) &&
               ((int)unaff_w25 < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
              (((int)unaff_w25 < *unaff_x20 &&
               ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
        uVar3 = *(undefined2 *)(in_stack_000000f0 + in_stack_00000120 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b82c4(uVar3,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          uVar3 = *(undefined2 *)(in_stack_000000f0 + in_stack_00000120 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b82c4(uVar3,0);
          if ((uVar10 & 1) != 0) goto LAB_03555d68;
        }
      }
      if (unaff_w25 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b82c4(in_stack_00000168._4_4_,0);
        iVar7 = iStack0000000000000128;
        if ((uVar10 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar7 = uStack000000000000015c - 2;
      }
      lVar20 = *in_stack_00000170;
      if (lVar20 == 0) goto LAB_035574b8;
      lVar13 = *(long *)(lVar20 + 0x40);
      if (lVar13 == 0) goto LAB_035574b8;
      uVar30 = *(uint *)(lVar20 + 0x24);
      iVar6 = *(int *)(lVar13 + 0x18);
      if (iVar6 < (int)(uVar30 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar20 + 0x40),iVar6 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar20 = *in_stack_00000170;
        if (lVar20 == 0) goto LAB_035574b8;
      }
      lVar20 = *(long *)(lVar20 + 0x40);
      if (lVar20 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar20 = lVar20 + (long)(int)uVar30 * 0x18;
      *(long **)(lVar20 + 0x20) = unaff_x19;
      *(uint *)(lVar20 + 0x28) = uStack0000000000000158;
      *(int *)(lVar20 + 0x2c) = iVar7;
      *(uint *)(lVar20 + 0x30) = (iVar7 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar20 = unaff_x19[0x6d];
      if (lVar20 == 0) goto LAB_035574b8;
      lVar13 = *(long *)(lVar20 + 0x50);
      *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
      if (lVar13 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_035575f4;
      lVar13 = lVar13 + in_x15 * 0x5c;
      uStack000000000000011c = 0;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
    }
    else {
      if ((uStack000000000000011c & 1) == 0) {
        uStack0000000000000158 = unaff_w25;
      }
      if (unaff_w25 == *unaff_x20 - 1U) {
        lVar20 = *in_stack_00000170;
        if (lVar20 == 0) goto LAB_035574b8;
        lVar13 = *(long *)(lVar20 + 0x40);
        if (lVar13 == 0) goto LAB_035574b8;
        uVar30 = *(uint *)(lVar20 + 0x24);
        iVar7 = *(int *)(lVar13 + 0x18);
        if (iVar7 < (int)(uVar30 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar20 + 0x40),iVar7 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar20 = *in_stack_00000170;
          if (lVar20 == 0) goto LAB_035574b8;
        }
        lVar20 = *(long *)(lVar20 + 0x40);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_035575f4;
        lVar20 = lVar20 + (long)(int)uVar30 * 0x18;
        *(long **)(lVar20 + 0x20) = unaff_x19;
        *(uint *)(lVar20 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar20 + 0x2c) = unaff_w25;
        *(uint *)(lVar20 + 0x30) = uStack000000000000015c - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar20 = unaff_x19[0x6d];
        if (lVar20 == 0) goto LAB_035574b8;
        lVar13 = *(long *)(lVar20 + 0x50);
        *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
        if (lVar13 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w21) goto LAB_035575f4;
        lVar13 = lVar13 + in_x15 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
      }
LAB_03555d68:
      uStack000000000000011c = 1;
    }
LAB_03555d70:
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    uVar30 = *(uint *)(lVar20 + 0x18);
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    uVar15 = (uint)in_stack_000000e0;
    uVar8 = (uint)in_stack_00000150;
    if ((*(byte *)(lVar20 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
      if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
        uStack0000000000000118 = 0;
      }
      else {
LAB_03555da0:
        if (uVar30 <= uStack000000000000015c - 2) goto LAB_035575f4;
        lVar13 = *unaff_x19;
        uVar30 = *(uint *)(lVar20 + in_stack_00000120 + -0x330);
        uVar23 = *(undefined4 *)(lVar20 + in_stack_00000120 + -0x2f8);
LAB_035562ec:
        pcVar16 = *(code **)(lVar13 + 0x8d8);
LAB_035562f4:
        uVar31 = (ulong)uVar30;
        uVar9 = (ulong)(uint)fStack0000000000000070;
        uVar28 = (ulong)uStack0000000000000074;
        (*pcVar16)(in_stack_00000078,uVar9,uVar28,uVar31,fStack0000000000000104,0,
                   in_stack_00000088._4_4_,uVar23);
        puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar20 = *(long *)puVar4;
        }
LAB_03556348:
        uStack0000000000000118 = 0;
        unaff_s15 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar20 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
    }
    else {
      lVar20 = lVar20 + unaff_x24 * 0x178;
      iVar7 = *(int *)(lVar20 + 0x68);
      *(undefined4 *)(lVar20 + 0x16c) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar7 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar10 & 1) == 0)) {
        lVar20 = *in_stack_00000170;
        if ((lVar20 == 0) || (lVar13 = *(long *)(lVar20 + 0x38), lVar13 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar13 + 0x18) <= unaff_w25) goto LAB_035575f4;
        fVar25 = *(float *)(lVar13 + unaff_x24 * 0x178 + 0x160);
        if (unaff_s15 <= fVar25) {
          unaff_s15 = fVar25;
        }
        if (fStack0000000000000100 <= ABS(unaff_s14)) {
          fStack0000000000000100 = ABS(unaff_s14);
        }
        if (iVar7 != in_stack_00000068._4_4_) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar20 = *in_stack_00000170;
            if (lVar20 == 0) goto LAB_035574b8;
            lVar13 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar13 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar13 + 0x15a8);
        }
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar26 = *(float *)(lVar20 + unaff_x24 * 0x178 + 0x14c);
        fVar25 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar26 = fVar26 + unaff_s15 * fVar25;
        if (fVar26 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar26;
        }
        uVar9 = (ulong)(uint)fStack0000000000000104;
        in_stack_00000068._4_4_ = iVar7;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        uStack0000000000000118 = 0;
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar8 < (int)unaff_w25)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (unaff_w25 == uVar8) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar10 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
        lVar20 = lVar20 + unaff_x24 * 0x178;
        in_stack_00000088._4_4_ = *(float *)(lVar20 + 0x160);
        in_stack_00000078 = *(uint *)(lVar20 + 0x11c);
        uVar28 = (ulong)in_stack_00000078;
        bVar5 = unaff_s15 != 0.0;
        fVar25 = in_stack_00000088._4_4_;
        if (bVar5) {
          fVar25 = unaff_s15;
        }
        unaff_s15 = fVar25;
        in_stack_00000090 = *(undefined4 *)(lVar20 + 0x168);
        uStack0000000000000074 = 0;
        fVar25 = unaff_s14;
        if (bVar5) {
          fVar25 = fStack0000000000000100;
        }
        uVar9 = (ulong)(uint)fVar25;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar25;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          if (unaff_w25 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + unaff_x24 * 0x178;
            lVar13 = *unaff_x19;
            uVar30 = *(uint *)(lVar20 + 0x128);
            uVar23 = *(undefined4 *)(lVar20 + 0x160);
            goto LAB_035562ec;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if ((unaff_w25 == uVar15) || ((int)uVar8 <= (int)unaff_w25)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          lVar13 = unaff_x24;
          uVar30 = unaff_w25;
          if (in_stack_00000168._4_4_ == 0x200b || (uVar9 & 1) != 0) {
            lVar13 = in_stack_00000150;
            uVar30 = uVar8;
          }
          if (uVar30 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + lVar13 * 0x178;
            uVar30 = *(uint *)(lVar20 + 0x128);
            uVar23 = *(undefined4 *)(lVar20 + 0x160);
            pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          uVar30 = *(uint *)(lVar20 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar10 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar20 + in_stack_00000120),0);
        if ((uVar10 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
            if (unaff_w25 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + unaff_x24 * 0x178;
              uVar31 = (ulong)*(uint *)(lVar20 + 0x128);
              uVar28 = (ulong)uStack0000000000000074;
              uVar9 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (in_stack_00000078,uVar9,uVar28,uVar31,fStack0000000000000104,0,
                         in_stack_00000088._4_4_,*(undefined4 *)(lVar20 + 0x160));
              puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar20 = *(long *)puVar4;
              }
              goto LAB_03556348;
            }
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
      }
      uStack0000000000000118 = 1;
    }
LAB_03556364:
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
    if (in_stack_00000108 == 0) goto LAB_035574b8;
    uVar30 = *(uint *)(lVar20 + unaff_x24 * 0x178 + 400);
    fVar25 = (float)FUN_03776a30(in_stack_00000108 + 0x50,0);
    if ((uVar30 >> 6 & 1) == 0) {
      if ((uStack000000000000012c & 1) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
        uVar30 = *(uint *)(lVar20 + in_stack_00000120 + -0x330);
        fVar24 = *(float *)(lVar20 + in_stack_00000120 + -0x30c);
        pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        uVar31 = (ulong)uVar30;
        uVar9 = (ulong)(uint)fStack000000000000009c;
        uVar28 = (ulong)uStack0000000000000098;
        (*pcVar16)(in_stack_000000a0,uVar9,uVar28,uVar31,in_stack_000000a8 * fVar25 + fVar24,0,
                   in_stack_000000a8,in_stack_000000a8);
      }
LAB_03556948:
      uStack000000000000012c = 0;
    }
    else {
      lVar20 = *in_stack_00000170;
      if ((lVar20 == 0) || (lVar13 = *(long *)(lVar20 + 0x38), lVar13 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w25) goto LAB_035575f4;
      *(undefined4 *)(lVar13 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar13 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar8 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
        if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
      }
      else {
        if (unaff_w25 == uVar8) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar10 & 1) != 0) goto LAB_035564e8;
          lVar20 = *in_stack_00000170;
          if (lVar20 == 0) goto LAB_035574b8;
        }
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
        lVar20 = lVar20 + unaff_x24 * 0x178;
        in_stack_00000040 = *(float *)(lVar20 + 0x60);
        in_stack_00000038 = *(float *)(lVar20 + 0x14c);
        uVar9 = (ulong)(uint)in_stack_00000038;
        in_stack_000000a0 = *(uint *)(lVar20 + 0x11c);
        uVar28 = (ulong)in_stack_000000a0;
        in_stack_000000a8 = *(float *)(lVar20 + 0x160);
        fStack000000000000009c = fVar25 * in_stack_000000a8 + in_stack_00000038;
        uStack0000000000000098 = 0;
      }
      iVar7 = *unaff_x20;
      if (iVar7 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          if (unaff_w25 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + unaff_x24 * 0x178;
            lVar13 = *unaff_x19;
            uVar30 = *(uint *)(lVar20 + 0x128);
            fVar24 = *(float *)(lVar20 + 0x14c);
LAB_03556654:
            pcVar16 = *(code **)(lVar13 + 0x8d8);
            goto LAB_03556914;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (unaff_w25 == uVar15) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          uVar30 = *(uint *)(lVar20 + 0x18);
          if (in_stack_00000168._4_4_ == 0x200b || (uVar9 & 1) != 0) {
            if (uVar30 <= uVar8) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            in_stack_00000150 = unaff_x24;
            if (uVar30 <= unaff_w25) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar20 = lVar20 + in_stack_00000150 * 0x178;
          fVar24 = *(float *)(lVar20 + 0x14c);
          uVar30 = *(uint *)(lVar20 + 0x128);
          pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < iVar7) {
        lVar20 = *in_stack_00000170;
        if ((lVar20 != 0) && (lVar13 = *(long *)(lVar20 + 0x38), lVar13 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar13 + 0x18)) {
            if (*(float *)(lVar13 + in_stack_00000120 + -0x108) == in_stack_00000040) {
              fVar26 = *(float *)(lVar13 + in_stack_00000120 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = (ulong)(uint)in_stack_00000038;
              uVar10 = FUN_03567bac(fVar24 + fVar26,uVar9,0);
              if ((uVar10 & 1) != 0) {
                iVar7 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar20 = *in_stack_00000170;
              if (lVar20 == 0) goto LAB_035574b8;
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (lVar20 != 0) {
              uVar30 = *(uint *)(lVar20 + 0x18);
              if ((int)unaff_w25 <= (int)uVar8) goto FUN_035568e8;
              if (uVar8 < uVar30) goto LAB_035568f0;
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_03556744:
      if ((int)unaff_w25 < iVar7) {
        iVar7 = FUN_036d3364(in_stack_00000108,0);
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar20 = *(long *)(in_stack_000000f0 + in_stack_00000120 + -0x130);
        if (lVar20 == 0) goto LAB_035574b8;
        iVar6 = FUN_036d3364(lVar20,0);
        if (iVar7 != iVar6) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          if (uStack000000000000015c - 2 < *(uint *)(lVar20 + 0x18)) {
            lVar13 = *unaff_x19;
            uVar30 = *(uint *)(lVar20 + in_stack_00000120 + -0x330);
            fVar24 = *(float *)(lVar20 + in_stack_00000120 + -0x30c);
            goto LAB_03556654;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      uStack000000000000012c = 1;
    }
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0))
    goto LAB_035574b8;
    uVar30 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if (uVar30 <= unaff_w25) goto LAB_035575f4;
    if ((*(byte *)(lVar20 + unaff_x24 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if ((in_stack_00000110._4_4_ & 1) != 0) {
        uVar28 = (ulong)uStack00000000000000c0;
        uVar9 = (ulong)(uint)fStack00000000000000dc;
        uVar31 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar9,uVar28,uVar31,fStack00000000000000d0,uVar28);
      }
LAB_035569b4:
      in_stack_00000110._4_4_ = 0;
    }
    else {
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)unaff_w21)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar20 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((in_stack_00000110._4_4_ & 1) == 0) {
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar8 < (int)unaff_w25)) || (!bVar1)) goto LAB_035569b4;
        if (unaff_w25 == uVar8) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar10 & 1) != 0) goto LAB_035569b4;
        }
        puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar4;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        uVar30 = (uint)*(undefined8 *)(lVar20 + 0x18);
        if (uVar30 <= unaff_w25) goto LAB_035575f4;
        lVar13 = *(long *)(lVar13 + 0xb8);
        lVar17 = lVar20 + unaff_x24 * 0x178;
        in_stack_000017b8 = *(undefined8 *)(lVar17 + 0x184);
        in_stack_000017b0 = *(undefined8 *)(lVar17 + 0x17c);
        fStack00000000000000d8 = *(float *)(lVar13 + 0x1598);
        fStack00000000000000dc = *(float *)(lVar13 + 0x159c);
        in_stack_000017c0 = *(float *)(lVar17 + 0x18c);
        in_stack_000000c8 = *(float *)(lVar13 + 0x15a0);
        fStack00000000000000d0 = *(float *)(lVar13 + 0x15a4);
        uStack00000000000000c0 = 0;
      }
      if (uVar30 <= unaff_w25) goto LAB_035575f4;
      lVar20 = lVar20 + unaff_x24 * 0x178;
      fVar25 = *(float *)(lVar20 + 0x128);
      fVar22 = *(float *)(lVar20 + 0x188);
      uVar18 = *(undefined8 *)(lVar20 + 0x17c);
      fVar34 = *(float *)(lVar20 + 0x184);
      uVar27 = *(undefined8 *)(lVar20 + 0x184);
      fVar29 = *(float *)(lVar20 + 0x18c);
      fVar24 = *(float *)(lVar20 + 0x11c);
      fVar21 = *(float *)(lVar20 + 0x148);
      fVar26 = *(float *)(lVar20 + 0x150);
      in_stack_00000178 = uVar18;
      fStack0000000000000180 = fVar34;
      fStack0000000000000184 = fVar22;
      in_stack_00000188 = fVar29;
      in_stack_00000190 = in_stack_000017b0;
      in_stack_00000198 = in_stack_000017b8;
      in_stack_000001a0 = in_stack_000017c0;
      uVar9 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
      lVar20 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar9 & 1) == 0) {
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
        }
        fVar25 = fVar25 + (float)in_stack_000017b8;
        uVar28 = (ulong)(uint)fVar25;
        fVar24 = fVar24 - (float)((ulong)in_stack_000017b0 >> 0x20);
        fVar26 = fVar26 - in_stack_000017c0;
        uVar9 = (ulong)(uint)fVar26;
        fVar21 = fVar21 + (float)((ulong)in_stack_000017b8 >> 0x20);
        uVar31 = (ulong)(uint)fVar21;
        if (fVar24 <= fStack00000000000000d8) {
          fStack00000000000000d8 = fVar24;
        }
        if (fVar26 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar26;
        }
        if (in_stack_000000c8 <= fVar25) {
          in_stack_000000c8 = fVar25;
        }
        if (fStack00000000000000d0 <= fVar21) {
          fStack00000000000000d0 = fVar21;
        }
      }
      else {
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar20);
        }
        fVar24 = (fVar24 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
        uVar31 = (ulong)(uint)fVar24;
        if (fVar26 <= fStack00000000000000dc) {
          fStack00000000000000dc = fVar26;
        }
        uVar9 = (ulong)(uint)fStack00000000000000dc;
        uVar28 = (ulong)uStack00000000000000c0;
        if (fStack00000000000000d0 <= fVar21) {
          fStack00000000000000d0 = fVar21;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar9,uVar28,uVar31,fStack00000000000000d0,uVar28);
        fStack00000000000000dc = fVar26 - fVar29;
        in_stack_000000c8 = fVar25 + fVar34;
        uStack00000000000000c0 = 0;
        fStack00000000000000d0 = fVar21 + fVar22;
        fStack00000000000000d8 = fVar24;
        in_stack_000017b0 = uVar18;
        in_stack_000017b8 = uVar27;
        in_stack_000017c0 = fVar29;
      }
      if (((*unaff_x20 == 1) || (unaff_w25 == uVar15)) ||
         (((int)uVar8 <= (int)unaff_w25 || (!bVar1)))) {
        uVar28 = (ulong)uStack00000000000000c0;
        uVar9 = (ulong)(uint)fStack00000000000000dc;
        uVar31 = (ulong)(uint)in_stack_000000c8;
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000d8,uVar9,uVar28,uVar31,fStack00000000000000d0,uVar28);
        in_stack_00000110._4_4_ = 0;
      }
      else {
        in_stack_00000110._4_4_ = 1;
      }
    }
    puVar4 = OVRPlugin_Media_TypeInfo;
    iVar7 = *unaff_x20;
    uVar30 = uStack000000000000015c + 1;
    in_stack_00000120 = in_stack_00000120 + 0x178;
    iStack0000000000000128 = iStack0000000000000128 + 1;
    if (iVar7 <= (int)uStack000000000000015c) {
      lVar20 = *in_stack_00000170;
      if (lVar20 == 0) goto LAB_035574b8;
      *(int *)(lVar20 + 0x18) = iVar7;
      lVar13 = unaff_x19[0xd4];
      *(uint *)(lVar20 + 0x2c) = unaff_w21 + 1;
      if (iVar7 < 1 || iStack00000000000000d4 == 0) {
        iStack00000000000000d4 = 1;
      }
      *(int *)(lVar20 + 0x1c) = (int)lVar13;
      *(int *)(lVar20 + 0x24) = iStack00000000000000d4;
      *(int *)(lVar20 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar10 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar10 & 1) == 0)) goto LAB_03554724;
      lVar20 = unaff_x19[0xdf];
      if (lVar20 != 0) {
        (**(code **)(lVar20 + 0x18))
                  (*(undefined8 *)(lVar20 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar20 + 0x28))
        ;
      }
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar7 = FUN_03911ee4(unaff_x19[0xe5],0);
      if (iVar7 != 0x19) {
        lVar20 = unaff_x19[0xe5];
        if (lVar20 == 0) goto LAB_035574b8;
        uVar30 = FUN_03911ee4(lVar20,0);
        FUN_03911f20(lVar20,uVar30 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
        FUN_03596b20(lVar20 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar20 = *(long *)(unaff_x19[0x6d] + 0x60), lVar20 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar20 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa280(unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar27 = FUN_0390ef60(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar30 = FUN_0390ed3c(unaff_x19[0xe4],0);
      lVar20 = *in_stack_00000170;
      if (lVar20 == 0) goto LAB_035574b8;
      lVar17 = 0;
      lVar13 = 0;
      goto LAB_03557110;
    }
    in_w8 = *(uint *)(in_stack_000000f0 + 0x18);
    if (in_w8 <= uStack000000000000015c) goto LAB_035575f4;
    if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x50), lVar20 == 0))
    goto LAB_035574b8;
    unaff_x24 = (long)(int)uStack000000000000015c;
    lVar13 = in_stack_000000f0 + unaff_x24 * 0x178;
    in_stack_00000160 = *(uint *)(lVar13 + 100);
    in_x12 = 0x178;
    if (*(uint *)(lVar20 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    in_x15 = (long)(int)in_stack_00000160;
    lVar20 = lVar20 + in_x15 * 0x5c;
    in_stack_00000108 = *(long *)(lVar13 + 0x38);
    uVar2 = *(ushort *)(lVar13 + 0x20);
    in_w14 = (uint)uVar2;
    in_stack_000000e0 = (long)*(int *)(lVar20 + 0x3c);
    unaff_w22 = *(uint *)(lVar20 + 0x68);
    unaff_w27 = *(int *)(lVar20 + 0x20);
    unaff_w29 = *(int *)(lVar20 + 0x28);
    unaff_w23 = *(int *)(lVar20 + 0x2c);
    in_stack_00000150 = (long)*(int *)(lVar20 + 0x40);
    in_s3 = *(float *)(lVar20 + 0x4c);
    in_s4 = *(float *)(lVar20 + 0x54);
    unaff_s10 = *(float *)(lVar20 + 0x58);
    unaff_s11 = *(float *)(lVar20 + 0x5c);
    unaff_s8 = *(float *)(lVar20 + 0x60);
    unaff_s9 = *(float *)(lVar20 + 0x6c);
    unaff_s13 = *(float *)(lVar20 + 0x70);
    unaff_s12 = *(float *)(lVar20 + 0x74);
    in_s5 = *(float *)(lVar20 + 0x78);
    in_stack_00000168._4_4_ = (uint)uVar2;
    unaff_w25 = uStack000000000000015c;
    uVar8 = unaff_w21;
    if ((int)unaff_w22 < 9) {
      switch(unaff_w22) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = unaff_s8 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - unaff_s10;
        }
        break;
      case 2:
        goto LAB_03555018;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (unaff_s11 + unaff_s8) - unaff_s10;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = unaff_s11 + unaff_s8;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      uStack000000000000015c = uVar30;
      in_stack_000000e8 = 0;
      uVar30 = uStack000000000000015c;
      uVar8 = unaff_w21;
      goto switchD_03554f58_caseD_3;
    }
    if (unaff_w22 != 0x10) {
      if (unaff_w22 == 0x20) {
        unaff_s10 = unaff_s9 + unaff_s12;
LAB_03555018:
        in_stack_000000f8._4_4_ = (unaff_s8 + unaff_s11 * 0.5) - unaff_s10 * 0.5;
        goto LAB_03555088;
      }
      goto switchD_03554f58_caseD_3;
    }
switchD_03554f58_caseD_8:
    uStack000000000000015c = uVar30;
    if (0xac < uVar2) {
      if (uVar2 != 0xad) {
        in_w9 = 0x200b;
        goto code_r0x03554f84;
      }
      goto switchD_03554f58_caseD_3;
    }
    if ((uVar2 == 3) || (uVar2 == 10)) goto switchD_03554f58_caseD_3;
    goto LAB_03554fac;
  }
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
  while( true ) {
    lVar20 = *in_stack_00000170;
    lVar13 = lVar13 + 1;
    lVar17 = lVar17 + 0x50;
    if (lVar20 == 0) break;
LAB_03557110:
    uVar10 = lVar13 + 1;
    if ((long)*(int *)(lVar20 + 0x34) <= (long)uVar10) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar20 = *(long *)(lVar20 + 0x60);
    if (lVar20 == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
    FUN_03596a20(lVar20 + lVar17 + 0x70,0);
    lVar20 = unaff_x19[0xe1];
    if (lVar20 == 0) break;
    if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
    uVar18 = *(undefined8 *)(lVar20 + lVar13 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_036d35a8(uVar18,0,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0)) break;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
        FUN_03596b20(lVar20 + lVar17 + 0x70,1,0);
      }
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if (lVar20 == 0) break;
      lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
      if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar20 == 0) break;
      FUN_036a460c(lVar20,*(undefined8 *)(lVar14 + lVar17 + 0x80),0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if (lVar20 == 0) break;
      lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
      if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar20 == 0) break;
      FUN_036a4810(lVar20,*(undefined8 *)(lVar14 + lVar17 + 0x98),0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if (lVar20 == 0) break;
      lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
      if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar20 == 0) break;
      FUN_036a48bc(lVar20,*(undefined8 *)(lVar14 + lVar17 + 0xa0),0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if (lVar20 == 0) break;
      lVar20 = UnityEngine_Material__GetColorArray(lVar20,0);
      if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x60), lVar14 == 0))
      break;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_035575f4;
      if (lVar20 == 0) break;
      FUN_036a4e24(lVar20,*(undefined8 *)(lVar14 + lVar17 + 0xa8),0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if ((lVar20 == 0) || (lVar20 = UnityEngine_Material__GetColorArray(lVar20,0), lVar20 == 0))
      break;
      FUN_036aa280(lVar20,0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if (lVar20 == 0) break;
      lVar20 = FUN_037b514c(lVar20,0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar13 * 8 + 0x28);
      if ((lVar14 == 0) || (uVar18 = UnityEngine_Material__GetColorArray(lVar14,0), lVar20 == 0))
      break;
      FUN_0390f3a4(lVar20,uVar18,0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if ((lVar20 == 0) || (lVar20 = FUN_037b514c(lVar20,0), lVar20 == 0)) break;
      FUN_0390eec8(uVar27,uVar9,uVar28,uVar31,lVar20,0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar13 * 8 + 0x28);
      if ((lVar20 == 0) || (lVar20 = FUN_037b514c(lVar20,0), lVar20 == 0)) break;
      FUN_0390ed78(lVar20,uVar30 & 1,0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto LAB_035575f4;
      plVar19 = *(long **)(lVar20 + lVar13 * 8 + 0x28);
      uVar8 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar19 == (long *)0x0) break;
      (**(code **)(*plVar19 + 0x2c8))(plVar19,uVar8 & 1,*(undefined8 *)(*plVar19 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


