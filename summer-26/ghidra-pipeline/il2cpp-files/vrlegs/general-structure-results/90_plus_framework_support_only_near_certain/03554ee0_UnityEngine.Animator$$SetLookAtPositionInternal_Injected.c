/*
FUNCTION_NAME: UnityEngine.Animator$$SetLookAtPositionInternal_Injected
ENTRY_POINT: 03554ee0
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


void UnityEngine_Animator__SetLookAtPositionInternal_Injected(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  uint in_w8;
  long lVar12;
  long lVar13;
  long in_x9;
  code *pcVar14;
  long in_x11;
  long lVar15;
  long in_x12;
  ulong in_x13;
  float in_w14;
  long in_x15;
  long *unaff_x19;
  int *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar16;
  long *plVar17;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w27;
  long lVar18;
  int unaff_w29;
  uint uVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  float fVar25;
  uint uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
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
  long lStack0000000000000108;
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  long in_stack_00000120;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  long lStack0000000000000150;
  uint uStack0000000000000158;
  uint uStack000000000000015c;
  ulong uStack0000000000000160;
  float fStack000000000000016c;
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
  
  uStack0000000000000160 = unaff_x21;
code_r0x03554ee0:
  lStack0000000000000150 = (long)*(int *)(in_x9 + 0x40);
  fVar25 = *(float *)(in_x9 + 0x4c);
  fVar28 = *(float *)(in_x9 + 0x54);
  fVar32 = *(float *)(in_x9 + 0x58);
  fVar33 = *(float *)(in_x9 + 0x5c);
  fVar30 = *(float *)(in_x9 + 0x60);
  fVar31 = *(float *)(in_x9 + 0x6c);
  fVar35 = *(float *)(in_x9 + 0x70);
  fVar34 = *(float *)(in_x9 + 0x74);
  fVar29 = *(float *)(in_x9 + 0x78);
  uVar26 = (uint)uStack0000000000000160;
  uVar7 = (uint)in_stack_000000e0;
  uStack0000000000000160 = in_x13;
  lStack0000000000000108 = in_x11;
  fStack000000000000016c = in_w14;
  if ((int)unaff_w22 < 9) {
    switch(unaff_w22) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar30 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar32;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar30 + fVar33 * 0.5) - fVar32 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar33 + fVar30) - fVar32;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar33 + fVar30;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (unaff_w22 == 0x10) {
switchD_03554f58_caseD_8:
    if ((int)in_w14 < 0xad) {
      if ((in_w14 != 4.2039e-45) && (in_w14 != 1.4013e-44)) {
LAB_03554fac:
        if (in_w8 <= uVar7) goto LAB_035575f4;
        uVar1 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * in_x12 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_026b8cc4(uVar1,0);
        fVar21 = fStack000000000000016c;
        if ((uVar9 & 1) == 0) {
          bVar4 = (int)(uint)uStack0000000000000160 < (int)unaff_x19[0x95];
        }
        else {
          bVar4 = false;
        }
        if ((fVar32 <= fVar33) && (!bVar4 && unaff_w22 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar30;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar33 + fVar30;
          }
          goto LAB_03555088;
        }
        if (((uStack000000000000015c == 1) || ((uint)uStack0000000000000160 != uVar26)) ||
           (unaff_w25 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar30;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar33 + fVar30;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000028 = FUN_026b97f8(fVar21,0);
          in_stack_000000e8 = 0;
        }
        else {
          cVar11 = (char)unaff_x19[0x1e];
          fVar30 = -fVar32;
          if (cVar11 != '\0') {
            fVar30 = fVar32;
          }
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar7) goto LAB_035575f4;
          iVar6 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                  (-unaff_w27 - (uStack0000000000000028 & 1)) + unaff_w23 + -1;
          if (iVar6 < 1) {
            fVar32 = 1.0;
            iVar6 = 1;
          }
          else {
            fVar32 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (fStack000000000000016c == 1.26117e-44) {
LAB_03556e74:
            fVar32 = 1.0 - fVar32;
          }
          else {
            if (fStack000000000000016c != 2.24208e-43) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_026b97f8(fVar21,0);
              cVar11 = (char)unaff_x19[0x1e];
              if ((uVar9 & 1) != 0) goto LAB_03556e74;
            }
            iVar6 = (unaff_w27 - (~uStack0000000000000028 & 1)) + unaff_w29;
          }
          fVar32 = ((fVar33 + fVar30) * fVar32) / (float)iVar6;
          if (cVar11 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar32;
            in_stack_000000e8 =
                 CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                          (float)in_stack_000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar32;
          }
        }
      }
    }
    else if (((in_w14 != 2.42425e-43) && (in_w14 != 1.14949e-41)) && (in_w14 != 1.1614e-41))
    goto LAB_03554fac;
  }
  else if (unaff_w22 == 0x20) {
    fVar32 = fVar31 + fVar34;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar19 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar19 <= unaff_w25) goto LAB_035575f4;
  lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar33 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar32 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar30 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  uVar20 = (uint)uStack0000000000000160;
  if (*(char *)(lVar18 + 0x194) == '\0') goto LAB_03555938;
  iVar6 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
  if (iVar6 != 0) goto LAB_0355574c;
  fVar21 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar20,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar12 + 0x84) = 0;
    *(undefined4 *)(lVar12 + 0xac) = 0;
    *(undefined4 *)(lVar12 + 0xd4) = 0x3f800000;
    fVar21 = 1.0;
    break;
  case 1:
    fVar29 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar34 = (in_stack_000000f8._4_4_ + fVar29) - *(float *)(in_stack_00000080 + 0x230);
      fVar29 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar34 = fVar34 - fVar31;
    *(float *)(lVar12 + 0x84) = fVar21 + (fVar29 - fVar31) / fVar34;
    *(float *)(lVar12 + 0xac) = fVar21 + (*(float *)(lVar12 + 0x98) - fVar31) / fVar34;
    *(float *)(lVar12 + 0xd4) = fVar21 + (*(float *)(lVar12 + 0xc0) - fVar31) / fVar34;
    fVar21 = fVar21 + (*(float *)(lVar12 + 0xe8) - fVar31) / fVar34;
    break;
  case 2:
    lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar29 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar34 = (in_stack_000000f8._4_4_ + *(float *)(lVar12 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar12 + 0x84) = fVar21 + fVar34 / fVar29;
    *(float *)(lVar12 + 0xac) =
         fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar12 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar12 + 0xd4) =
         fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar12 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar21 = fVar21 + ((in_stack_000000f8._4_4_ + *(float *)(lVar12 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar12 + 0x88) = 0;
      *(undefined4 *)(lVar12 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0xd8) = 0;
      *(undefined4 *)(lVar12 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = fVar29 - fVar35;
      fVar34 = fVar21 + (*(float *)(lVar12 + 0x74) - fVar35) / fVar29;
      fVar29 = fVar21 + (*(float *)(lVar12 + 0x9c) - fVar35) / fVar29;
      *(float *)(lVar12 + 0x88) = fVar34;
      *(float *)(lVar12 + 0xb0) = fVar29;
      *(float *)(lVar12 + 0xd8) = fVar34;
      *(float *)(lVar12 + 0x100) = fVar29;
      break;
    case 2:
      lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar34 = fVar21 + (*(float *)(lVar12 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar12 + 0x88) = fVar34;
      fVar29 = *(float *)(unaff_x19 + 0x9c);
      fVar31 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar12 + 0xd8) = fVar34;
      fVar34 = fVar21 + (*(float *)(lVar12 + 0x9c) - fVar29) / (fVar31 - fVar29);
      *(float *)(lVar12 + 0xb0) = fVar34;
      *(float *)(lVar12 + 0x100) = fVar34;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar19 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar19 <= unaff_w25) goto LAB_035575f4;
    lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar34 = *(float *)(lVar12 + 0x15c);
    fVar29 = (1.0 - (*(float *)(lVar12 + 0x88) + *(float *)(lVar12 + 0xb0)) * fVar34) * 0.5;
    fVar31 = fVar21 + *(float *)(lVar12 + 0x88) * fVar34 + fVar29;
    fVar21 = fVar21 + fVar29 + *(float *)(lVar12 + 0xb0) * fVar34;
    *(float *)(lVar12 + 0x84) = fVar31;
    *(float *)(lVar12 + 0xac) = fVar31;
    *(float *)(lVar12 + 0xd4) = fVar21;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar21;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar19 <= unaff_w25) goto LAB_035575f4;
    lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined4 *)(lVar12 + 0x88) = 0;
    *(undefined4 *)(lVar12 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w25 < uVar19) {
      lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar25 = fVar25 - fVar28;
      fVar34 = (*(float *)(lVar12 + 0x74) - fVar28) / fVar25;
      fVar25 = (*(float *)(lVar12 + 0x9c) - fVar28) / fVar25;
      *(float *)(lVar12 + 0x88) = fVar34;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar19 <= unaff_w25) goto LAB_035575f4;
    lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar34 = (*(float *)(lVar12 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar12 + 0x88) = fVar34;
    fVar25 = (*(float *)(lVar12 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar12 + 0xb0) = fVar25;
    *(float *)(lVar12 + 0xd8) = fVar25;
    *(float *)(lVar12 + 0x100) = fVar34;
    break;
  case 3:
    if (uVar19 <= unaff_w25) goto LAB_035575f4;
    lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar29 = *(float *)(lVar12 + 0x15c);
    fVar25 = (1.0 - (*(float *)(lVar12 + 0x84) + *(float *)(lVar12 + 0xd4)) / fVar29) * 0.5;
    fVar34 = *(float *)(lVar12 + 0x84) / fVar29 + fVar25;
    fVar25 = fVar25 + *(float *)(lVar12 + 0xd4) / fVar29;
    *(float *)(lVar12 + 0x88) = fVar34;
    *(float *)(lVar12 + 0xb0) = fVar25;
    *(float *)(lVar12 + 0x100) = fVar34;
    *(float *)(lVar12 + 0xd8) = fVar25;
  }
  if (uVar19 <= unaff_w25) goto LAB_035575f4;
  lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
  unaff_s14 = *(float *)(lVar12 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar12 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar34 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar34 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar34 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar34 * unaff_s14;
  }
  lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
  fVar25 = *(float *)(lVar12 + 0x88);
  fVar29 = *(float *)(lVar12 + 0x84);
  fVar34 = -2.1474836e+09;
  if (fVar29 != INFINITY) {
    fVar34 = (float)(int)fVar29;
  }
  fVar31 = *(float *)(lVar12 + 0xd4);
  fVar35 = *(float *)(lVar12 + 0xd8);
  fVar28 = -2.1474836e+09;
  if (fVar25 != INFINITY) {
    fVar28 = (float)(int)fVar25;
  }
  uVar22 = FUN_03591d3c(fVar29 - fVar34,fVar25 - fVar28);
  *(undefined4 *)(lVar12 + 0x84) = uVar22;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar35 = fVar35 - fVar28;
  *(float *)(lVar12 + 0x88) = unaff_s14;
  uVar22 = FUN_03591d3c(fVar29 - fVar34,fVar35);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar22;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar31 = fVar31 - fVar34;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
  fVar34 = (float)FUN_03591d3c(fVar31,fVar35);
  *(float *)(lVar12 + 0xd4) = fVar34;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  *(float *)(lVar12 + 0xd8) = unaff_s14;
  uVar22 = FUN_03591d3c(fVar31,fVar25 - fVar28);
  *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar22;
  uVar19 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar19 <= unaff_w25) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  if (((int)unaff_w25 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uStack0000000000000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar19 <= unaff_w25) goto LAB_035575f4;
      lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(ulong *)(lVar18 + 0x70) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                    fVar33 + (float)*(undefined8 *)(lVar18 + 0x70));
      *(float *)(lVar18 + 0x78) = fVar30 + *(float *)(lVar18 + 0x78);
      *(ulong *)(lVar18 + 0x98) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                    fVar33 + (float)*(undefined8 *)(lVar18 + 0x98));
      *(float *)(lVar18 + 0xa0) = fVar30 + *(float *)(lVar18 + 0xa0);
      *(ulong *)(lVar18 + 0xc0) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                    fVar33 + (float)*(undefined8 *)(lVar18 + 0xc0));
      *(float *)(lVar18 + 200) = fVar30 + *(float *)(lVar18 + 200);
      *(ulong *)(lVar18 + 0xe8) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                    fVar33 + (float)*(undefined8 *)(lVar18 + 0xe8));
      *(float *)(lVar18 + 0xf0) = fVar30 + *(float *)(lVar18 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uStack0000000000000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w25 < uVar19) {
        if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar18 = in_stack_000000f0 + unaff_x24 * 0x178;
          *(ulong *)(lVar18 + 0x70) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar18 + 0x70));
          *(float *)(lVar18 + 0x78) = fVar30 + *(float *)(lVar18 + 0x78);
          *(ulong *)(lVar18 + 0x98) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar18 + 0x98));
          *(float *)(lVar18 + 0xa0) = fVar30 + *(float *)(lVar18 + 0xa0);
          *(ulong *)(lVar18 + 0xc0) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar18 + 0xc0));
          *(float *)(lVar18 + 200) = fVar30 + *(float *)(lVar18 + 200);
          *(ulong *)(lVar18 + 0xe8) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar18 + 0xe8));
          *(float *)(lVar18 + 0xf0) = fVar30 + *(float *)(lVar18 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar19 <= unaff_w25) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar19 = *(uint *)(in_stack_000000f0 + 0x18);
  }
  puVar2 = PTR_DAT_03cbded8;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar12 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar12 + 0x78) = uVar22;
  if (uVar19 <= unaff_w25) goto LAB_035575f4;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
  *(undefined8 *)(lVar12 + 0x98) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(lVar12 + 0xa0) = uVar22;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  *(undefined8 *)(lVar12 + 0xc0) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(lVar12 + 200) = uVar22;
  uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  *(undefined8 *)(lVar12 + 0xe8) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(lVar12 + 0xf0) = uVar22;
  *(undefined1 *)(lVar18 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  uVar20 = (uint)uStack0000000000000160;
  if (iVar6 == 0) {
    pcVar14 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar14)();
  }
  else if (iVar6 == 1) {
    pcVar14 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  uVar23 = *(undefined8 *)(lVar18 + 0x11c);
  *(undefined8 *)(lVar18 + 0x11c) =
       CONCAT44(fVar32 + (float)((ulong)uVar23 >> 0x20),fVar33 + (float)uVar23);
  *(float *)(lVar18 + 0x124) = fVar30 + *(float *)(lVar18 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  *(ulong *)(lVar18 + 0x110) =
       CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0x110) >> 0x20),
                fVar33 + (float)*(undefined8 *)(lVar18 + 0x110));
  *(float *)(lVar18 + 0x118) = fVar30 + *(float *)(lVar18 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  *(ulong *)(lVar18 + 0x128) =
       CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar18 + 0x128) >> 0x20),
                fVar33 + (float)*(undefined8 *)(lVar18 + 0x128));
  *(float *)(lVar18 + 0x130) = fVar30 + *(float *)(lVar18 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + unaff_x24 * 0x178;
  *(float *)(lVar18 + 0x134) = fVar33 + *(float *)(lVar18 + 0x134);
  *(ulong *)(lVar18 + 0x138) =
       CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar18 + 0x138) >> 0x20),
                fVar32 + (float)*(undefined8 *)(lVar18 + 0x138));
  lVar18 = *in_stack_00000170;
  if ((lVar18 == 0) || (lVar12 = *(long *)(lVar18 + 0x38), lVar12 == 0)) goto LAB_035574b8;
  uVar19 = *(uint *)(lVar12 + 0x18);
  if (uVar19 <= unaff_w25) goto LAB_035575f4;
  lVar15 = lVar12 + unaff_x24 * 0x178;
  uVar9 = CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar15 + 0x140) >> 0x20),
                   fVar33 + (float)*(undefined8 *)(lVar15 + 0x140));
  fVar34 = fVar32 + *(float *)(lVar15 + 0x150);
  uVar24 = (ulong)(uint)fVar34;
  uVar27 = CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar15 + 0x148) >> 0x20),
                    fVar32 + (float)*(undefined8 *)(lVar15 + 0x148));
  *(float *)(lVar15 + 0x150) = fVar34;
  *(ulong *)(lVar15 + 0x140) = uVar9;
  *(ulong *)(lVar15 + 0x148) = uVar27;
  if (uVar20 == uVar26) {
    uVar26 = *unaff_x20 - 1;
    if (unaff_w25 == uVar26) goto LAB_03555b44;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x50);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
    lVar15 = (long)(int)uVar26;
    lVar13 = lVar18 + lVar15 * 0x5c;
    uVar27 = (ulong)(uint)*(float *)(lVar13 + 0x58);
    fVar34 = fVar32 + *(float *)(lVar13 + 0x54);
    uVar9 = (ulong)(uint)fVar34;
    fVar25 = fVar33 + *(float *)(lVar13 + 0x58);
    uVar24 = (ulong)(uint)fVar25;
    *(ulong *)(lVar13 + 0x4c) =
         CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar13 + 0x4c) >> 0x20),
                  fVar32 + (float)*(undefined8 *)(lVar13 + 0x4c));
    *(float *)(lVar13 + 0x54) = fVar34;
    *(float *)(lVar13 + 0x58) = fVar25;
    if (uVar19 <= *(uint *)(lVar13 + 0x34)) goto LAB_035575f4;
    uVar22 = *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar13 + 0x34) * 0x178 + 0x11c);
    lVar18 = lVar18 + lVar15 * 0x5c;
    *(float *)(lVar18 + 0x70) = fVar34;
    *(undefined4 *)(lVar18 + 0x6c) = uVar22;
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar12 = *(long *)(lVar18 + 0x50), lVar12 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar12 + 0x18) <= uVar26) goto LAB_035575f4;
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto LAB_035574b8;
    uVar26 = *(uint *)(lVar12 + lVar15 * 0x5c + 0x40);
    if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
    lVar12 = lVar12 + lVar15 * 0x5c;
    *(undefined4 *)(lVar12 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar26 * 0x178 + 0x128);
    *(undefined4 *)(lVar12 + 0x78) = *(undefined4 *)(lVar12 + 0x4c);
    uVar26 = *unaff_x20 - 1;
LAB_03555b44:
    if (unaff_w25 == uVar26) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar12 = *(long *)(lVar18 + 0x50), lVar12 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar15 = lVar12 + in_x15 * 0x5c;
      uVar27 = (ulong)(uint)*(float *)(lVar15 + 0x58);
      uVar9 = CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar15 + 0x4c) >> 0x20),
                       fVar32 + (float)*(undefined8 *)(lVar15 + 0x4c));
      fVar34 = fVar32 + *(float *)(lVar15 + 0x54);
      fVar33 = fVar33 + *(float *)(lVar15 + 0x58);
      uVar24 = (ulong)(uint)fVar33;
      *(ulong *)(lVar15 + 0x4c) = uVar9;
      *(float *)(lVar15 + 0x54) = fVar34;
      *(float *)(lVar15 + 0x58) = fVar33;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar15 + 0x34)) goto LAB_035575f4;
      uVar22 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar15 + 0x34) * 0x178 + 0x11c);
      lVar12 = lVar12 + in_x15 * 0x5c;
      *(float *)(lVar12 + 0x70) = fVar34;
      *(undefined4 *)(lVar12 + 0x6c) = uVar22;
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar12 = *(long *)(lVar18 + 0x50), lVar12 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      uVar26 = *(uint *)(lVar12 + in_x15 * 0x5c + 0x40);
      if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
      lVar12 = lVar12 + in_x15 * 0x5c;
      *(undefined4 *)(lVar12 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar26 * 0x178 + 0x128);
      *(undefined4 *)(lVar12 + 0x78) = *(undefined4 *)(lVar12 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  fVar34 = fStack000000000000016c;
  uVar8 = FUN_026b82c4(fStack000000000000016c,0);
  if (((((uVar8 & 1) == 0) && (1 < (int)fVar34 - 0x2010U)) && (fVar34 != 2.42425e-43)) &&
     (fVar34 != 6.30584e-44)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (uStack000000000000015c != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_026b81f8(fStack000000000000016c,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar34 = fStack000000000000016c;
        uVar8 = FUN_026b63d8(fStack000000000000016c,0);
        if (((fVar34 != 1.14949e-41) && ((uVar8 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    else if (((uStack000000000000015c != 1) &&
             ((int)unaff_w25 < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
            (((int)unaff_w25 < *unaff_x20 &&
             ((fStack000000000000016c == 1.15145e-41 || (fStack000000000000016c == 5.46506e-44))))))
    {
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
      uVar1 = *(undefined2 *)(in_stack_000000f0 + in_stack_00000120 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_026b82c4(uVar1,0);
      if ((uVar8 & 1) != 0) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar1 = *(undefined2 *)(in_stack_000000f0 + in_stack_00000120 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b82c4(uVar1,0);
        if ((uVar8 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_026b82c4(fStack000000000000016c,0);
      iVar6 = iStack0000000000000128;
      if ((uVar8 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar6 = uStack000000000000015c - 2;
    }
    lVar18 = *in_stack_00000170;
    if (lVar18 == 0) goto LAB_035574b8;
    lVar12 = *(long *)(lVar18 + 0x40);
    if (lVar12 == 0) goto LAB_035574b8;
    uVar26 = *(uint *)(lVar18 + 0x24);
    iVar5 = *(int *)(lVar12 + 0x18);
    if (iVar5 < (int)(uVar26 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar18 + 0x40),iVar5 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
    }
    lVar18 = *(long *)(lVar18 + 0x40);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
    lVar18 = lVar18 + (long)(int)uVar26 * 0x18;
    *(long **)(lVar18 + 0x20) = unaff_x19;
    *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
    *(int *)(lVar18 + 0x2c) = iVar6;
    *(uint *)(lVar18 + 0x30) = (iVar6 - uStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar18 = unaff_x19[0x6d];
    if (lVar18 == 0) goto LAB_035574b8;
    lVar12 = *(long *)(lVar18 + 0x50);
    *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
    if (lVar12 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_035575f4;
    lVar12 = lVar12 + in_x15 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      uStack0000000000000158 = unaff_w25;
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar12 = *(long *)(lVar18 + 0x40);
      if (lVar12 == 0) goto LAB_035574b8;
      uVar26 = *(uint *)(lVar18 + 0x24);
      iVar6 = *(int *)(lVar12 + 0x18);
      if (iVar6 < (int)(uVar26 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar18 + 0x40),iVar6 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_035575f4;
      lVar18 = lVar18 + (long)(int)uVar26 * 0x18;
      *(long **)(lVar18 + 0x20) = unaff_x19;
      *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
      *(uint *)(lVar18 + 0x2c) = unaff_w25;
      *(uint *)(lVar18 + 0x30) = uStack000000000000015c - uStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = unaff_x19[0x6d];
      if (lVar18 == 0) goto LAB_035574b8;
      lVar12 = *(long *)(lVar18 + 0x50);
      *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      if (lVar12 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar12 = lVar12 + in_x15 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  uVar26 = *(uint *)(lVar18 + 0x18);
  if (uVar26 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar18 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar26 <= uStack000000000000015c - 2) goto LAB_035575f4;
      lVar12 = *unaff_x19;
      uVar26 = *(uint *)(lVar18 + in_stack_00000120 + -0x330);
      uVar22 = *(undefined4 *)(lVar18 + in_stack_00000120 + -0x2f8);
LAB_035562ec:
      pcVar14 = *(code **)(lVar12 + 0x8d8);
LAB_035562f4:
      uVar27 = (ulong)uVar26;
      uVar9 = (ulong)(uint)fStack0000000000000070;
      uVar24 = (ulong)uStack0000000000000074;
      (*pcVar14)(in_stack_00000078,uVar9,uVar24,uVar27,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar22);
      puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar2;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar18 = lVar18 + unaff_x24 * 0x178;
    iVar6 = *(int *)(lVar18 + 0x68);
    *(undefined4 *)(lVar18 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar6 + 1 != (int)unaff_x19[0x67])))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar34 = fStack000000000000016c;
    uVar8 = FUN_026b63d8(fStack000000000000016c,0);
    if ((fVar34 != 1.14949e-41) && ((uVar8 & 1) == 0)) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar12 = *(long *)(lVar18 + 0x38), lVar12 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w25) goto LAB_035575f4;
      fVar34 = *(float *)(lVar12 + unaff_x24 * 0x178 + 0x160);
      if (unaff_s15 <= fVar34) {
        unaff_s15 = fVar34;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar6 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *in_stack_00000170;
          if (lVar18 == 0) goto LAB_035574b8;
          lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar12 + 0x15a8);
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar25 = *(float *)(lVar18 + unaff_x24 * 0x178 + 0x14c);
      fVar34 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar25 = fVar25 + unaff_s15 * fVar34;
      if (fVar25 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar25;
      }
      uVar9 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar6;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((fStack000000000000016c == 1.82169e-44) ||
           (((uint)fStack000000000000016c & 0xfffe) == 10)) ||
          ((int)(uint)lStack0000000000000150 < (int)unaff_w25)) || ((bool)(bVar4 ^ 1)))
      goto LAB_03556364;
      if (unaff_w25 == (uint)lStack0000000000000150) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b97f8(fStack000000000000016c,0);
        if ((uVar8 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar18 = lVar18 + unaff_x24 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar18 + 0x160);
      in_stack_00000078 = *(uint *)(lVar18 + 0x11c);
      uVar24 = (ulong)in_stack_00000078;
      bVar3 = unaff_s15 != 0.0;
      fVar34 = in_stack_00000088._4_4_;
      if (bVar3) {
        fVar34 = unaff_s15;
      }
      unaff_s15 = fVar34;
      in_stack_00000090 = *(undefined4 *)(lVar18 + 0x168);
      uStack0000000000000074 = 0;
      fVar34 = unaff_s14;
      if (bVar3) {
        fVar34 = fStack0000000000000100;
      }
      uVar9 = (ulong)(uint)fVar34;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar34;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + unaff_x24 * 0x178;
        lVar12 = *unaff_x19;
        uVar26 = *(uint *)(lVar18 + 0x128);
        uVar22 = *(undefined4 *)(lVar18 + 0x160);
        goto LAB_035562ec;
      }
      goto LAB_035575f4;
    }
    if ((unaff_w25 == uVar7) || ((int)lStack0000000000000150 <= (int)unaff_w25)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      bVar4 = fStack000000000000016c == 1.14949e-41;
      uVar9 = FUN_026b63d8(fStack000000000000016c,0);
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      lVar12 = unaff_x24;
      uVar26 = unaff_w25;
      if (bVar4 || (uVar9 & 1) != 0) {
        lVar12 = lStack0000000000000150;
        uVar26 = (uint)lStack0000000000000150;
      }
      if (uVar26 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + lVar12 * 0x178;
        uVar26 = *(uint *)(lVar18 + 0x128);
        uVar22 = *(undefined4 *)(lVar18 + 0x160);
        pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_035562f4;
      }
      goto LAB_035575f4;
    }
    if (!bVar4) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        uVar26 = *(uint *)(lVar18 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      uVar8 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar18 + in_stack_00000120),0);
      if ((uVar8 & 1) == 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0)) goto LAB_035574b8;
        if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + unaff_x24 * 0x178;
          uVar27 = (ulong)*(uint *)(lVar18 + 0x128);
          uVar24 = (ulong)uStack0000000000000074;
          uVar9 = (ulong)(uint)fStack0000000000000070;
          (**(code **)(*unaff_x19 + 0x8d8))
                    (in_stack_00000078,uVar9,uVar24,uVar27,fStack0000000000000104,0,
                     in_stack_00000088._4_4_,*(undefined4 *)(lVar18 + 0x160));
          puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar18 = *(long *)puVar2;
          }
          goto LAB_03556348;
        }
        goto LAB_035575f4;
      }
    }
    uStack0000000000000118 = 1;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  if (lStack0000000000000108 == 0) goto LAB_035574b8;
  uVar26 = *(uint *)(lVar18 + unaff_x24 * 0x178 + 400);
  fVar34 = (float)FUN_03776a30(lStack0000000000000108 + 0x50,0);
  if ((uVar26 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c - 2) goto LAB_035575f4;
      uVar26 = *(uint *)(lVar18 + in_stack_00000120 + -0x330);
      fVar32 = *(float *)(lVar18 + in_stack_00000120 + -0x30c);
      pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar27 = (ulong)uVar26;
      uVar9 = (ulong)(uint)fStack000000000000009c;
      uVar24 = (ulong)uStack0000000000000098;
      (*pcVar14)(in_stack_000000a0,uVar9,uVar24,uVar27,in_stack_000000a8 * fVar34 + fVar32,0,
                 in_stack_000000a8,in_stack_000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar12 = *(long *)(lVar18 + 0x38), lVar12 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(undefined4 *)(lVar12 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) ||
        ((int)unaff_x19[0x66] < (int)uStack0000000000000160)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar12 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((fStack000000000000016c == 1.82169e-44) || (((uint)fStack000000000000016c & 0xfffe) == 10)
         ) || ((int)(uint)lStack0000000000000150 < (int)unaff_w25)) ||
       ((uStack000000000000012c & 1) != 0 || !bVar4)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (unaff_w25 == (uint)lStack0000000000000150) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b97f8(fStack000000000000016c,0);
        if ((uVar8 & 1) != 0) goto LAB_035564e8;
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar18 = lVar18 + unaff_x24 * 0x178;
      in_stack_00000040 = *(float *)(lVar18 + 0x60);
      in_stack_00000038 = *(float *)(lVar18 + 0x14c);
      uVar9 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar18 + 0x11c);
      uVar24 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar18 + 0x160);
      fStack000000000000009c = fVar34 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar6 = *unaff_x20;
    if (iVar6 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + unaff_x24 * 0x178;
        lVar12 = *unaff_x19;
        uVar26 = *(uint *)(lVar18 + 0x128);
        fVar32 = *(float *)(lVar18 + 0x14c);
LAB_03556654:
        pcVar14 = *(code **)(lVar12 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035575f4;
    }
    if (unaff_w25 == uVar7) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar32 = fStack000000000000016c;
      uVar9 = FUN_026b63d8(fStack000000000000016c,0);
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      uVar26 = *(uint *)(lVar18 + 0x18);
      if (fVar32 == 1.14949e-41 || (uVar9 & 1) != 0) {
        lVar12 = lStack0000000000000150;
        if (uVar26 <= (uint)lStack0000000000000150) goto LAB_035575f4;
      }
      else {
FUN_035568e8:
        lVar12 = unaff_x24;
        if (uVar26 <= unaff_w25) goto LAB_035575f4;
      }
LAB_035568f0:
      lVar18 = lVar18 + lVar12 * 0x178;
      fVar32 = *(float *)(lVar18 + 0x14c);
      uVar26 = *(uint *)(lVar18 + 0x128);
      pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
      goto LAB_03556914;
    }
    if ((int)unaff_w25 < iVar6) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar12 = *(long *)(lVar18 + 0x38), lVar12 == 0)) goto LAB_035574b8;
      if (uStack000000000000015c < *(uint *)(lVar12 + 0x18)) {
        if (*(float *)(lVar12 + in_stack_00000120 + -0x108) == in_stack_00000040) {
          fVar25 = *(float *)(lVar12 + in_stack_00000120 + -0x1c);
          if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = (ulong)(uint)in_stack_00000038;
          uVar8 = FUN_03567bac(fVar32 + fVar25,uVar9,0);
          if ((uVar8 & 1) != 0) {
            iVar6 = *unaff_x20;
            goto LAB_03556744;
          }
          lVar18 = *in_stack_00000170;
          if (lVar18 == 0) goto LAB_035574b8;
        }
        lVar18 = *(long *)(lVar18 + 0x38);
        if (lVar18 == 0) goto LAB_035574b8;
        uVar26 = *(uint *)(lVar18 + 0x18);
        if ((int)unaff_w25 <= (int)(uint)lStack0000000000000150) goto FUN_035568e8;
        lVar12 = lStack0000000000000150;
        if ((uint)lStack0000000000000150 < uVar26) goto LAB_035568f0;
      }
      goto LAB_035575f4;
    }
LAB_03556744:
    if ((int)unaff_w25 < iVar6) {
      iVar6 = FUN_036d3364(lStack0000000000000108,0);
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      lVar18 = *(long *)(in_stack_000000f0 + in_stack_00000120 + -0x130);
      if (lVar18 == 0) goto LAB_035574b8;
      iVar5 = FUN_036d3364(lVar18,0);
      if (iVar6 != iVar5) goto LAB_03556628;
    }
    if (!bVar4) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (uStack000000000000015c - 2 < *(uint *)(lVar18 + 0x18)) {
        lVar12 = *unaff_x19;
        uVar26 = *(uint *)(lVar18 + in_stack_00000120 + -0x330);
        fVar32 = *(float *)(lVar18 + in_stack_00000120 + -0x30c);
        goto LAB_03556654;
      }
      goto LAB_035575f4;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  uVar26 = (uint)*(undefined8 *)(lVar18 + 0x18);
  if (uVar26 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar18 + unaff_x24 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar24 = (ulong)uStack00000000000000c0;
      uVar9 = (ulong)(uint)fStack00000000000000dc;
      uVar27 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar9,uVar24,uVar27,fStack00000000000000d0,uVar24);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) ||
        ((int)unaff_x19[0x66] < (int)uStack0000000000000160)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar18 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((in_stack_00000110._4_4_ & 1) == 0) {
      if ((((fStack000000000000016c == 1.82169e-44) ||
           (((uint)fStack000000000000016c & 0xfffe) == 10)) ||
          ((int)(uint)lStack0000000000000150 < (int)unaff_w25)) || (!bVar4)) goto LAB_035569b4;
      if (unaff_w25 == (uint)lStack0000000000000150) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b97f8(fStack000000000000016c,0);
        if ((uVar8 & 1) != 0) goto LAB_035569b4;
      }
      puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar12 = *(long *)puVar2;
      }
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      uVar26 = (uint)*(undefined8 *)(lVar18 + 0x18);
      if (uVar26 <= unaff_w25) goto LAB_035575f4;
      lVar12 = *(long *)(lVar12 + 0xb8);
      lVar15 = lVar18 + unaff_x24 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar15 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar15 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar12 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar12 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar15 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar12 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar12 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar26 <= unaff_w25) goto LAB_035575f4;
    lVar18 = lVar18 + unaff_x24 * 0x178;
    fStack000000000000016c = *(float *)(lVar18 + 0x128);
    fVar29 = *(float *)(lVar18 + 0x188);
    uVar16 = *(undefined8 *)(lVar18 + 0x17c);
    fVar30 = *(float *)(lVar18 + 0x184);
    uVar23 = *(undefined8 *)(lVar18 + 0x184);
    fVar28 = *(float *)(lVar18 + 0x18c);
    fVar32 = *(float *)(lVar18 + 0x11c);
    fVar25 = *(float *)(lVar18 + 0x148);
    fVar34 = *(float *)(lVar18 + 0x150);
    in_stack_00000178 = uVar16;
    fStack0000000000000180 = fVar30;
    fStack0000000000000184 = fVar29;
    in_stack_00000188 = fVar28;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar9 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
      }
      fVar29 = fStack000000000000016c + (float)in_stack_000017b8;
      uVar24 = (ulong)(uint)fVar29;
      fVar32 = fVar32 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar34 = fVar34 - in_stack_000017c0;
      uVar9 = (ulong)(uint)fVar34;
      fVar25 = fVar25 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar27 = (ulong)(uint)fVar25;
      if (fVar32 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar32;
      }
      if (fVar34 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar34;
      }
      if (in_stack_000000c8 <= fVar29) {
        in_stack_000000c8 = fVar29;
      }
      if (fStack00000000000000d0 <= fVar25) {
        fStack00000000000000d0 = fVar25;
      }
    }
    else {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
      }
      fVar32 = (fVar32 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar27 = (ulong)(uint)fVar32;
      if (fVar34 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar34;
      }
      uVar9 = (ulong)(uint)fStack00000000000000dc;
      uVar24 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar25) {
        fStack00000000000000d0 = fVar25;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar9,uVar24,uVar27,fStack00000000000000d0,uVar24);
      fStack00000000000000dc = fVar34 - fVar28;
      in_stack_000000c8 = fStack000000000000016c + fVar30;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar25 + fVar29;
      fStack00000000000000d8 = fVar32;
      in_stack_000017b0 = uVar16;
      in_stack_000017b8 = uVar23;
      in_stack_000017c0 = fVar28;
    }
    if (((*unaff_x20 == 1) || (unaff_w25 == uVar7)) ||
       (((int)lStack0000000000000150 <= (int)unaff_w25 || (!bVar4)))) {
      uVar24 = (ulong)uStack00000000000000c0;
      uVar9 = (ulong)(uint)fStack00000000000000dc;
      uVar27 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar9,uVar24,uVar27,fStack00000000000000d0,uVar24);
      in_stack_00000110._4_4_ = 0;
    }
    else {
      in_stack_00000110._4_4_ = 1;
    }
  }
  puVar2 = OVRPlugin_Media_TypeInfo;
  iVar6 = *unaff_x20;
  in_stack_00000120 = in_stack_00000120 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  if (iVar6 <= (int)uStack000000000000015c) {
    lVar18 = *in_stack_00000170;
    if (lVar18 == 0) goto LAB_035574b8;
    *(int *)(lVar18 + 0x18) = iVar6;
    lVar12 = unaff_x19[0xd4];
    *(int *)(lVar18 + 0x2c) = (int)uStack0000000000000160 + 1;
    if (iVar6 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar18 + 0x1c) = (int)lVar12;
    *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar8 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar8 & 1) == 0)) goto LAB_03554724;
    lVar18 = unaff_x19[0xdf];
    if (lVar18 != 0) {
      (**(code **)(lVar18 + 0x18))
                (*(undefined8 *)(lVar18 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar18 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar6 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar6 != 0x19) {
      lVar18 = unaff_x19[0xe5];
      if (lVar18 == 0) goto LAB_035574b8;
      uVar7 = FUN_03911ee4(lVar18,0);
      FUN_03911f20(lVar18,uVar7 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar18 + 0x20,1,0);
    }
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar18 + 0x18) != 0) {
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar18 + 0x18) != 0) {
        if (unaff_x19[0x74] == 0) goto LAB_035574b8;
        FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x48),0);
        if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
        goto LAB_035574b8;
        if (*(int *)(lVar18 + 0x18) != 0) {
          if (unaff_x19[0x74] == 0) goto LAB_035574b8;
          FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x50),0);
          if ((unaff_x19[0x6d] == 0) || (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 == 0))
          goto LAB_035574b8;
          if (*(int *)(lVar18 + 0x18) != 0) {
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x58),0);
            if (unaff_x19[0x74] == 0) goto LAB_035574b8;
            FUN_036aa280(unaff_x19[0x74],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            uVar23 = FUN_0390ef60(unaff_x19[0xe4],0);
            if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
            uVar7 = FUN_0390ed3c(unaff_x19[0xe4],0);
            lVar18 = *in_stack_00000170;
            if (lVar18 == 0) goto LAB_035574b8;
            lVar15 = 0;
            lVar12 = 0;
            goto LAB_03557110;
          }
        }
      }
    }
    goto LAB_035575f4;
  }
  in_w8 = *(uint *)(in_stack_000000f0 + 0x18);
  if (in_w8 <= uStack000000000000015c) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x50), lVar18 == 0))
  goto LAB_035574b8;
  unaff_x24 = (long)(int)uStack000000000000015c;
  lVar12 = in_stack_000000f0 + unaff_x24 * 0x178;
  uVar7 = *(uint *)(lVar12 + 100);
  in_x13 = (ulong)uVar7;
  in_x12 = 0x178;
  if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_035575f4;
  in_x15 = (long)(int)uVar7;
  in_x9 = lVar18 + in_x15 * 0x5c;
  in_x11 = *(long *)(lVar12 + 0x38);
  in_w14 = (float)(uint)*(ushort *)(lVar12 + 0x20);
  in_stack_000000e0 = (long)*(int *)(in_x9 + 0x3c);
  unaff_w22 = *(uint *)(in_x9 + 0x68);
  unaff_w27 = *(int *)(in_x9 + 0x20);
  unaff_w29 = *(int *)(in_x9 + 0x28);
  unaff_w23 = *(int *)(in_x9 + 0x2c);
  unaff_w25 = uStack000000000000015c;
  uStack000000000000015c = uStack000000000000015c + 1;
  goto code_r0x03554ee0;
  while( true ) {
    lVar18 = *in_stack_00000170;
    lVar12 = lVar12 + 1;
    lVar15 = lVar15 + 0x50;
    if (lVar18 == 0) break;
LAB_03557110:
    uVar8 = lVar12 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar8) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
    FUN_03596a20(lVar18 + lVar15 + 0x70,0);
    lVar18 = unaff_x19[0xe1];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
    uVar16 = *(undefined8 *)(lVar18 + lVar12 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_036d35a8(uVar16,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar8) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar18 + lVar15 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a460c(lVar18,*(undefined8 *)(lVar13 + lVar15 + 0x80),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4810(lVar18,*(undefined8 *)(lVar13 + lVar15 + 0x98),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a48bc(lVar18,*(undefined8 *)(lVar13 + lVar15 + 0xa0),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*in_stack_00000170 == 0) || (lVar13 = *(long *)(*in_stack_00000170 + 0x60), lVar13 == 0))
      break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4e24(lVar18,*(undefined8 *)(lVar13 + lVar15 + 0xa8),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0), lVar18 == 0))
      break;
      FUN_036aa280(lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_037b514c(lVar18,0);
      lVar13 = unaff_x19[0xe1];
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar13 = *(long *)(lVar13 + lVar12 * 8 + 0x28);
      if ((lVar13 == 0) || (uVar16 = UnityEngine_Material__GetColorArray(lVar13,0), lVar18 == 0))
      break;
      FUN_0390f3a4(lVar18,uVar16,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390eec8(uVar23,uVar9,uVar24,uVar27,lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar12 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390ed78(lVar18,uVar7 & 1,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_035575f4;
      plVar17 = *(long **)(lVar18 + lVar12 * 8 + 0x28);
      uVar26 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar17 == (long *)0x0) break;
      (**(code **)(*plVar17 + 0x2c8))(plVar17,uVar26 & 1,*(undefined8 *)(*plVar17 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


