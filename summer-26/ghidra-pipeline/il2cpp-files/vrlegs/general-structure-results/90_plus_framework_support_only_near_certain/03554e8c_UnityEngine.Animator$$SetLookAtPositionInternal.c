/*
FUNCTION_NAME: UnityEngine.Animator$$SetLookAtPositionInternal
ENTRY_POINT: 03554e8c
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


void UnityEngine_Animator__SetLookAtPositionInternal(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  uint in_w8;
  long lVar16;
  long in_x9;
  long lVar17;
  code *pcVar18;
  uint in_w10;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar25;
  long *plVar26;
  long unaff_x22;
  long unaff_x23;
  long lVar27;
  uint unaff_w25;
  long unaff_x27;
  long unaff_x29;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  float fVar32;
  uint uVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
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
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  uint in_stack_00000158;
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
  
code_r0x03554e8c:
  if ((in_x9 == 0) || (lVar17 = *(long *)(in_x9 + 0x50), lVar17 == 0)) goto LAB_035574b8;
  lVar27 = (long)(int)unaff_w25;
  lVar19 = unaff_x23 + lVar27 * unaff_x22;
  uVar11 = *(uint *)(lVar19 + 100);
  if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar24 = (long)(int)uVar11;
  lVar17 = lVar17 + lVar24 * unaff_x29;
  lVar20 = *(long *)(lVar19 + 0x38);
  uVar3 = *(ushort *)(lVar19 + 0x20);
  uVar5 = *(uint *)(lVar17 + 0x3c);
  uVar33 = *(uint *)(lVar17 + 0x68);
  iVar2 = *(int *)(lVar17 + 0x20);
  iVar10 = *(int *)(lVar17 + 0x28);
  iVar9 = *(int *)(lVar17 + 0x2c);
  uVar6 = *(uint *)(lVar17 + 0x40);
  lVar19 = (long)(int)uVar6;
  fVar32 = *(float *)(lVar17 + 0x4c);
  fVar35 = *(float *)(lVar17 + 0x54);
  fVar39 = *(float *)(lVar17 + 0x58);
  fVar40 = *(float *)(lVar17 + 0x5c);
  fVar37 = *(float *)(lVar17 + 0x60);
  fVar38 = *(float *)(lVar17 + 0x6c);
  fVar42 = *(float *)(lVar17 + 0x70);
  fVar41 = *(float *)(lVar17 + 0x74);
  fVar36 = *(float *)(lVar17 + 0x78);
  uVar23 = (uint)uVar3;
  if ((int)uVar33 < 9) {
    switch(uVar33) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar37 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar39;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar37 + fVar40 * 0.5) - fVar39 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar40 + fVar37) - fVar39;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar40 + fVar37;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar33 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
        if (in_w8 <= uVar5) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8cc4(uVar4,0);
        if ((uVar13 & 1) == 0) {
          bVar1 = (int)uVar11 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar39 <= fVar40) && (!bVar1 && uVar33 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar37;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar40 + fVar37;
          }
          goto LAB_03555088;
        }
        if (((in_w10 == 1) || (uVar11 != unaff_w21)) ||
           (unaff_w25 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar37;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar40 + fVar37;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000028 = FUN_026b97f8(uVar23,0);
          in_stack_000000e8 = 0;
        }
        else {
          cVar15 = (char)unaff_x19[0x1e];
          fVar37 = -fVar39;
          if (cVar15 != '\0') {
            fVar37 = fVar39;
          }
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
          iVar9 = (int)*(char *)(in_stack_000000f0 + (long)(int)uVar5 * 0x178 + 0x194) +
                  (-iVar2 - (uStack0000000000000028 & 1)) + iVar9 + -1;
          if (iVar9 < 1) {
            fVar39 = 1.0;
            iVar9 = 1;
          }
          else {
            fVar39 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar23 == 9) {
LAB_03556e74:
            fVar39 = 1.0 - fVar39;
          }
          else {
            if (uVar23 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b97f8(uVar23,0);
              cVar15 = (char)unaff_x19[0x1e];
              if ((uVar13 & 1) != 0) goto LAB_03556e74;
            }
            iVar9 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar10;
          }
          fVar39 = ((fVar40 + fVar37) * fVar39) / (float)iVar9;
          if (cVar15 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar39;
            in_stack_000000e8 =
                 CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                          (float)in_stack_000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar39;
          }
        }
      }
    }
    else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar33 == 0x20) {
    fVar39 = fVar38 + fVar41;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar33 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  lVar17 = in_stack_000000f0 + lVar27 * 0x178;
  fVar40 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar39 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar37 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar17 + 0x194) == '\0') goto LAB_03555938;
  iVar10 = *(int *)(in_stack_000000f0 + lVar27 * 0x178 + 0x2c);
  if (iVar10 != 0) goto LAB_0355574c;
  fVar28 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar11,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar16 = in_stack_000000f0 + lVar27 * 0x178;
    *(undefined4 *)(lVar16 + 0x84) = 0;
    *(undefined4 *)(lVar16 + 0xac) = 0;
    *(undefined4 *)(lVar16 + 0xd4) = 0x3f800000;
    fVar28 = 1.0;
    break;
  case 1:
    fVar36 = *(float *)(in_stack_000000f0 + lVar27 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar16 = in_stack_000000f0 + lVar27 * 0x178;
      fVar41 = (in_stack_000000f8._4_4_ + fVar36) - *(float *)(in_stack_00000080 + 0x230);
      fVar36 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar16 = in_stack_000000f0 + lVar27 * 0x178;
    fVar41 = fVar41 - fVar38;
    *(float *)(lVar16 + 0x84) = fVar28 + (fVar36 - fVar38) / fVar41;
    *(float *)(lVar16 + 0xac) = fVar28 + (*(float *)(lVar16 + 0x98) - fVar38) / fVar41;
    *(float *)(lVar16 + 0xd4) = fVar28 + (*(float *)(lVar16 + 0xc0) - fVar38) / fVar41;
    fVar28 = fVar28 + (*(float *)(lVar16 + 0xe8) - fVar38) / fVar41;
    break;
  case 2:
    lVar16 = in_stack_000000f0 + lVar27 * 0x178;
    fVar36 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar41 = (in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar16 + 0x84) = fVar28 + fVar41 / fVar36;
    *(float *)(lVar16 + 0xac) =
         fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar16 + 0xd4) =
         fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar28 = fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar16 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar16 = in_stack_000000f0 + lVar27 * 0x178;
      *(undefined4 *)(lVar16 + 0x88) = 0;
      *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xd8) = 0;
      *(undefined4 *)(lVar16 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar16 = in_stack_000000f0 + lVar27 * 0x178;
      fVar36 = fVar36 - fVar42;
      fVar41 = fVar28 + (*(float *)(lVar16 + 0x74) - fVar42) / fVar36;
      fVar36 = fVar28 + (*(float *)(lVar16 + 0x9c) - fVar42) / fVar36;
      *(float *)(lVar16 + 0x88) = fVar41;
      *(float *)(lVar16 + 0xb0) = fVar36;
      *(float *)(lVar16 + 0xd8) = fVar41;
      *(float *)(lVar16 + 0x100) = fVar36;
      break;
    case 2:
      lVar16 = in_stack_000000f0 + lVar27 * 0x178;
      fVar41 = fVar28 + (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar16 + 0x88) = fVar41;
      fVar36 = *(float *)(unaff_x19 + 0x9c);
      fVar38 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar16 + 0xd8) = fVar41;
      fVar41 = fVar28 + (*(float *)(lVar16 + 0x9c) - fVar36) / (fVar38 - fVar36);
      *(float *)(lVar16 + 0xb0) = fVar41;
      *(float *)(lVar16 + 0x100) = fVar41;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar33 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + lVar27 * 0x178;
    fVar41 = *(float *)(lVar16 + 0x15c);
    fVar36 = (1.0 - (*(float *)(lVar16 + 0x88) + *(float *)(lVar16 + 0xb0)) * fVar41) * 0.5;
    fVar38 = fVar28 + *(float *)(lVar16 + 0x88) * fVar41 + fVar36;
    fVar28 = fVar28 + fVar36 + *(float *)(lVar16 + 0xb0) * fVar41;
    *(float *)(lVar16 + 0x84) = fVar38;
    *(float *)(lVar16 + 0xac) = fVar38;
    *(float *)(lVar16 + 0xd4) = fVar28;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + lVar27 * 0x178 + 0xfc) = fVar28;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + lVar27 * 0x178;
    *(undefined4 *)(lVar16 + 0x88) = 0;
    *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar16 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w25 < uVar33) {
      lVar16 = in_stack_000000f0 + lVar27 * 0x178;
      fVar32 = fVar32 - fVar35;
      fVar41 = (*(float *)(lVar16 + 0x74) - fVar35) / fVar32;
      fVar32 = (*(float *)(lVar16 + 0x9c) - fVar35) / fVar32;
      *(float *)(lVar16 + 0x88) = fVar41;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + lVar27 * 0x178;
    fVar41 = (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar16 + 0x88) = fVar41;
    fVar32 = (*(float *)(lVar16 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar16 + 0xb0) = fVar32;
    *(float *)(lVar16 + 0xd8) = fVar32;
    *(float *)(lVar16 + 0x100) = fVar41;
    break;
  case 3:
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar16 = in_stack_000000f0 + lVar27 * 0x178;
    fVar36 = *(float *)(lVar16 + 0x15c);
    fVar32 = (1.0 - (*(float *)(lVar16 + 0x84) + *(float *)(lVar16 + 0xd4)) / fVar36) * 0.5;
    fVar41 = *(float *)(lVar16 + 0x84) / fVar36 + fVar32;
    fVar32 = fVar32 + *(float *)(lVar16 + 0xd4) / fVar36;
    *(float *)(lVar16 + 0x88) = fVar41;
    *(float *)(lVar16 + 0xb0) = fVar32;
    *(float *)(lVar16 + 0x100) = fVar41;
    *(float *)(lVar16 + 0xd8) = fVar32;
  }
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  lVar16 = in_stack_000000f0 + lVar27 * 0x178;
  unaff_s14 = *(float *)(lVar16 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar16 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + lVar27 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar41 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar41 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar41 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar41 * unaff_s14;
  }
  lVar16 = in_stack_000000f0 + lVar27 * 0x178;
  fVar32 = *(float *)(lVar16 + 0x88);
  fVar36 = *(float *)(lVar16 + 0x84);
  fVar41 = -2.1474836e+09;
  if (fVar36 != INFINITY) {
    fVar41 = (float)(int)fVar36;
  }
  fVar38 = *(float *)(lVar16 + 0xd4);
  fVar42 = *(float *)(lVar16 + 0xd8);
  fVar35 = -2.1474836e+09;
  if (fVar32 != INFINITY) {
    fVar35 = (float)(int)fVar32;
  }
  uVar29 = FUN_03591d3c(fVar36 - fVar41,fVar32 - fVar35);
  *(undefined4 *)(lVar16 + 0x84) = uVar29;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar42 = fVar42 - fVar35;
  *(float *)(lVar16 + 0x88) = unaff_s14;
  uVar29 = FUN_03591d3c(fVar36 - fVar41,fVar42);
  *(undefined4 *)(in_stack_000000f0 + lVar27 * 0x178 + 0xac) = uVar29;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar38 = fVar38 - fVar41;
  *(float *)(in_stack_000000f0 + lVar27 * 0x178 + 0xb0) = unaff_s14;
  fVar41 = (float)FUN_03591d3c(fVar38,fVar42);
  *(float *)(lVar16 + 0xd4) = fVar41;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  *(float *)(lVar16 + 0xd8) = unaff_s14;
  uVar29 = FUN_03591d3c(fVar38,fVar32 - fVar35);
  *(undefined4 *)(in_stack_000000f0 + lVar27 * 0x178 + 0xfc) = uVar29;
  uVar33 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + lVar27 * 0x178 + 0x100) = unaff_s14;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  if (((int)unaff_w25 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar11 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar33 <= unaff_w25) goto LAB_035575f4;
      lVar17 = in_stack_000000f0 + lVar27 * 0x178;
      *(ulong *)(lVar17 + 0x70) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0x70) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar17 + 0x70));
      *(float *)(lVar17 + 0x78) = fVar37 + *(float *)(lVar17 + 0x78);
      *(ulong *)(lVar17 + 0x98) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0x98) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar17 + 0x98));
      *(float *)(lVar17 + 0xa0) = fVar37 + *(float *)(lVar17 + 0xa0);
      *(ulong *)(lVar17 + 0xc0) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0xc0) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar17 + 0xc0));
      *(float *)(lVar17 + 200) = fVar37 + *(float *)(lVar17 + 200);
      *(ulong *)(lVar17 + 0xe8) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0xe8) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar17 + 0xe8));
      *(float *)(lVar17 + 0xf0) = fVar37 + *(float *)(lVar17 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar11 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w25 < uVar33) {
        if (*(int *)(in_stack_000000f0 + lVar27 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar17 = in_stack_000000f0 + lVar27 * 0x178;
          *(ulong *)(lVar17 + 0x70) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0x70) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar17 + 0x70));
          *(float *)(lVar17 + 0x78) = fVar37 + *(float *)(lVar17 + 0x78);
          *(ulong *)(lVar17 + 0x98) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0x98) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar17 + 0x98));
          *(float *)(lVar17 + 0xa0) = fVar37 + *(float *)(lVar17 + 0xa0);
          *(ulong *)(lVar17 + 0xc0) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0xc0) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar17 + 0xc0));
          *(float *)(lVar17 + 200) = fVar37 + *(float *)(lVar17 + 200);
          *(ulong *)(lVar17 + 0xe8) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0xe8) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar17 + 0xe8));
          *(float *)(lVar17 + 0xf0) = fVar37 + *(float *)(lVar17 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar33 = *(uint *)(in_stack_000000f0 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar16 = in_stack_000000f0 + lVar27 * 0x178;
  *(undefined8 *)(lVar16 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar16 + 0x78) = uVar29;
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar16 = in_stack_000000f0 + lVar27 * 0x178;
  *(undefined8 *)(lVar16 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar16 + 0xa0) = uVar29;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar16 + 200) = uVar29;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar16 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar16 + 0xf0) = uVar29;
  *(undefined1 *)(lVar17 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar10 == 0) {
    pcVar18 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar18)();
  }
  else if (iVar10 == 1) {
    pcVar18 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar17 = lVar17 + lVar27 * 0x178;
  uVar30 = *(undefined8 *)(lVar17 + 0x11c);
  *(undefined8 *)(lVar17 + 0x11c) =
       CONCAT44(fVar39 + (float)((ulong)uVar30 >> 0x20),fVar40 + (float)uVar30);
  *(float *)(lVar17 + 0x124) = fVar37 + *(float *)(lVar17 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar17 = lVar17 + lVar27 * 0x178;
  *(ulong *)(lVar17 + 0x110) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0x110) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar17 + 0x110));
  *(float *)(lVar17 + 0x118) = fVar37 + *(float *)(lVar17 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar17 = lVar17 + lVar27 * 0x178;
  *(ulong *)(lVar17 + 0x128) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0x128) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar17 + 0x128));
  *(float *)(lVar17 + 0x130) = fVar37 + *(float *)(lVar17 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar17 = lVar17 + lVar27 * 0x178;
  *(float *)(lVar17 + 0x134) = fVar40 + *(float *)(lVar17 + 0x134);
  *(ulong *)(lVar17 + 0x138) =
       CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar17 + 0x138) >> 0x20),
                fVar39 + (float)*(undefined8 *)(lVar17 + 0x138));
  lVar17 = *in_stack_00000170;
  if ((lVar17 == 0) || (lVar16 = *(long *)(lVar17 + 0x38), lVar16 == 0)) goto LAB_035574b8;
  uVar33 = *(uint *)(lVar16 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  lVar21 = lVar16 + lVar27 * 0x178;
  uVar13 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar21 + 0x140) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar21 + 0x140));
  fVar41 = fVar39 + *(float *)(lVar21 + 0x150);
  uVar31 = (ulong)(uint)fVar41;
  uVar34 = CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar21 + 0x148) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar21 + 0x148));
  *(float *)(lVar21 + 0x150) = fVar41;
  *(ulong *)(lVar21 + 0x140) = uVar13;
  *(ulong *)(lVar21 + 0x148) = uVar34;
  if (uVar11 == unaff_w21) {
    uVar33 = *unaff_x20 - 1;
    if (unaff_w25 == uVar33) goto LAB_03555b44;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x50);
    if (lVar17 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar17 + 0x18) <= unaff_w21) goto LAB_035575f4;
    lVar21 = (long)(int)unaff_w21;
    lVar22 = lVar17 + lVar21 * 0x5c;
    uVar34 = (ulong)(uint)*(float *)(lVar22 + 0x58);
    fVar41 = fVar39 + *(float *)(lVar22 + 0x54);
    uVar13 = (ulong)(uint)fVar41;
    fVar32 = fVar40 + *(float *)(lVar22 + 0x58);
    uVar31 = (ulong)(uint)fVar32;
    *(ulong *)(lVar22 + 0x4c) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20),
                  fVar39 + (float)*(undefined8 *)(lVar22 + 0x4c));
    *(float *)(lVar22 + 0x54) = fVar41;
    *(float *)(lVar22 + 0x58) = fVar32;
    if (uVar33 <= *(uint *)(lVar22 + 0x34)) goto LAB_035575f4;
    uVar29 = *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar22 + 0x34) * 0x178 + 0x11c);
    lVar17 = lVar17 + lVar21 * 0x5c;
    *(float *)(lVar17 + 0x70) = fVar41;
    *(undefined4 *)(lVar17 + 0x6c) = uVar29;
    lVar17 = *in_stack_00000170;
    if ((lVar17 == 0) || (lVar16 = *(long *)(lVar17 + 0x50), lVar16 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_035575f4;
    lVar17 = *(long *)(lVar17 + 0x38);
    if (lVar17 == 0) goto LAB_035574b8;
    uVar33 = *(uint *)(lVar16 + lVar21 * 0x5c + 0x40);
    if (*(uint *)(lVar17 + 0x18) <= uVar33) goto LAB_035575f4;
    lVar16 = lVar16 + lVar21 * 0x5c;
    *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar17 + (long)(int)uVar33 * 0x178 + 0x128);
    *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    uVar33 = *unaff_x20 - 1;
LAB_03555b44:
    if (unaff_w25 == uVar33) {
      lVar17 = *in_stack_00000170;
      if ((lVar17 == 0) || (lVar16 = *(long *)(lVar17 + 0x50), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar21 = lVar16 + lVar24 * 0x5c;
      uVar34 = (ulong)(uint)*(float *)(lVar21 + 0x58);
      uVar13 = CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar21 + 0x4c) >> 0x20),
                        fVar39 + (float)*(undefined8 *)(lVar21 + 0x4c));
      fVar41 = fVar39 + *(float *)(lVar21 + 0x54);
      fVar40 = fVar40 + *(float *)(lVar21 + 0x58);
      uVar31 = (ulong)(uint)fVar40;
      *(ulong *)(lVar21 + 0x4c) = uVar13;
      *(float *)(lVar21 + 0x54) = fVar41;
      *(float *)(lVar21 + 0x58) = fVar40;
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar21 + 0x34)) goto LAB_035575f4;
      uVar29 = *(undefined4 *)(lVar17 + (long)(int)*(uint *)(lVar21 + 0x34) * 0x178 + 0x11c);
      lVar16 = lVar16 + lVar24 * 0x5c;
      *(float *)(lVar16 + 0x70) = fVar41;
      *(undefined4 *)(lVar16 + 0x6c) = uVar29;
      lVar17 = *in_stack_00000170;
      if ((lVar17 == 0) || (lVar16 = *(long *)(lVar17 + 0x50), lVar16 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 == 0) goto LAB_035574b8;
      uVar33 = *(uint *)(lVar16 + lVar24 * 0x5c + 0x40);
      if (*(uint *)(lVar17 + 0x18) <= uVar33) goto LAB_035575f4;
      lVar16 = lVar16 + lVar24 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar17 + (long)(int)uVar33 * 0x178 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar12 = FUN_026b82c4(uVar23,0);
  if (((((uVar12 & 1) == 0) && (1 < uVar23 - 0x2010)) && (uVar23 != 0xad)) && (uVar23 != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (in_w10 != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b81f8(uVar23,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b63d8(uVar23,0);
        if (((uVar23 != 0x200b) && ((uVar12 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    else if (((in_w10 != 1) && ((int)unaff_w25 < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
            (((int)unaff_w25 < *unaff_x20 && ((uVar23 == 0x2019 || (uVar23 == 0x27)))))) {
      if (*(uint *)(in_stack_000000f0 + 0x18) <= in_w10 - 2) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b82c4(uVar4,0);
      if ((uVar12 & 1) != 0) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= in_w10) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b82c4(uVar4,0);
        if ((uVar12 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b82c4(uVar23,0);
      iVar10 = iStack0000000000000128;
      if ((uVar12 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar10 = in_w10 - 2;
    }
    lVar17 = *in_stack_00000170;
    if (lVar17 == 0) goto LAB_035574b8;
    lVar16 = *(long *)(lVar17 + 0x40);
    if (lVar16 == 0) goto LAB_035574b8;
    uVar33 = *(uint *)(lVar17 + 0x24);
    iVar9 = *(int *)(lVar16 + 0x18);
    if (iVar9 < (int)(uVar33 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar17 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar17 = *in_stack_00000170;
      if (lVar17 == 0) goto LAB_035574b8;
    }
    lVar17 = *(long *)(lVar17 + 0x40);
    if (lVar17 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar33) goto LAB_035575f4;
    lVar17 = lVar17 + (long)(int)uVar33 * 0x18;
    *(long **)(lVar17 + 0x20) = unaff_x19;
    *(uint *)(lVar17 + 0x28) = in_stack_00000158;
    *(int *)(lVar17 + 0x2c) = iVar10;
    *(uint *)(lVar17 + 0x30) = (iVar10 - in_stack_00000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar17 = unaff_x19[0x6d];
    if (lVar17 == 0) goto LAB_035574b8;
    lVar16 = *(long *)(lVar17 + 0x50);
    *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
    if (lVar16 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar16 = lVar16 + lVar24 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      in_stack_00000158 = unaff_w25;
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      lVar17 = *in_stack_00000170;
      if (lVar17 == 0) goto LAB_035574b8;
      lVar16 = *(long *)(lVar17 + 0x40);
      if (lVar16 == 0) goto LAB_035574b8;
      uVar33 = *(uint *)(lVar17 + 0x24);
      iVar10 = *(int *)(lVar16 + 0x18);
      if (iVar10 < (int)(uVar33 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar17 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar17 = *in_stack_00000170;
        if (lVar17 == 0) goto LAB_035574b8;
      }
      lVar17 = *(long *)(lVar17 + 0x40);
      if (lVar17 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= uVar33) goto LAB_035575f4;
      lVar17 = lVar17 + (long)(int)uVar33 * 0x18;
      *(long **)(lVar17 + 0x20) = unaff_x19;
      *(uint *)(lVar17 + 0x28) = in_stack_00000158;
      *(uint *)(lVar17 + 0x2c) = unaff_w25;
      *(uint *)(lVar17 + 0x30) = in_w10 - in_stack_00000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar17 = unaff_x19[0x6d];
      if (lVar17 == 0) goto LAB_035574b8;
      lVar16 = *(long *)(lVar17 + 0x50);
      *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
      if (lVar16 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar16 = lVar16 + lVar24 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
  goto LAB_035574b8;
  uVar33 = *(uint *)(lVar17 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar17 + lVar27 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar33 <= in_w10 - 2) goto LAB_035575f4;
      lVar24 = *unaff_x19;
      uVar33 = *(uint *)(lVar17 + unaff_x27 + -0x330);
      uVar29 = *(undefined4 *)(lVar17 + unaff_x27 + -0x2f8);
LAB_035562ec:
      pcVar18 = *(code **)(lVar24 + 0x8d8);
LAB_035562f4:
      uVar34 = (ulong)uVar33;
      uVar13 = (ulong)(uint)fStack0000000000000070;
      uVar31 = (ulong)uStack0000000000000074;
      (*pcVar18)(in_stack_00000078,uVar13,uVar31,uVar34,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar29);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar17 = *(long *)puVar7;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar17 = lVar17 + lVar27 * 0x178;
    iVar10 = *(int *)(lVar17 + 0x68);
    *(undefined4 *)(lVar17 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(uVar23,0);
    if ((uVar23 != 0x200b) && ((uVar12 & 1) == 0)) {
      lVar17 = *in_stack_00000170;
      if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x38), lVar24 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= unaff_w25) goto LAB_035575f4;
      fVar41 = *(float *)(lVar24 + lVar27 * 0x178 + 0x160);
      if (unaff_s15 <= fVar41) {
        unaff_s15 = fVar41;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar10 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *in_stack_00000170;
          if (lVar17 == 0) goto LAB_035574b8;
          lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar24 + 0x15a8);
      }
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar32 = *(float *)(lVar17 + lVar27 * 0x178 + 0x14c);
      fVar41 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar32 = fVar32 + unaff_s15 * fVar41;
      if (fVar32 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar32;
      }
      uVar13 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar10;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((uVar23 == 0xd) || ((uVar23 & 0xfffe) == 10)) || ((int)uVar6 < (int)unaff_w25)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (unaff_w25 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(uVar23,0);
        if ((uVar12 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar17 = lVar17 + lVar27 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar17 + 0x160);
      in_stack_00000078 = *(uint *)(lVar17 + 0x11c);
      uVar31 = (ulong)in_stack_00000078;
      bVar8 = unaff_s15 != 0.0;
      fVar41 = in_stack_00000088._4_4_;
      if (bVar8) {
        fVar41 = unaff_s15;
      }
      unaff_s15 = fVar41;
      in_stack_00000090 = *(undefined4 *)(lVar17 + 0x168);
      uStack0000000000000074 = 0;
      fVar41 = unaff_s14;
      if (bVar8) {
        fVar41 = fStack0000000000000100;
      }
      uVar13 = (ulong)(uint)fVar41;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar41;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + lVar27 * 0x178;
          lVar24 = *unaff_x19;
          uVar33 = *(uint *)(lVar17 + 0x128);
          uVar29 = *(undefined4 *)(lVar17 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((unaff_w25 == uVar5) || ((int)uVar6 <= (int)unaff_w25)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b63d8(uVar23,0);
      if ((*in_stack_00000170 != 0) && (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0))
      {
        lVar24 = lVar27;
        uVar33 = unaff_w25;
        if (uVar23 == 0x200b || (uVar13 & 1) != 0) {
          lVar24 = lVar19;
          uVar33 = uVar6;
        }
        if (uVar33 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + lVar24 * 0x178;
          uVar33 = *(uint *)(lVar17 + 0x128);
          uVar29 = *(undefined4 *)(lVar17 + 0x160);
          pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0))
      {
        uVar33 = *(uint *)(lVar17 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= in_w10) goto LAB_035575f4;
      uVar12 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar17 + unaff_x27),0);
      if ((uVar12 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0)) {
          if (unaff_w25 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + lVar27 * 0x178;
            uVar34 = (ulong)*(uint *)(lVar17 + 0x128);
            uVar31 = (ulong)uStack0000000000000074;
            uVar13 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000078,uVar13,uVar31,uVar34,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar17 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar17 = *(long *)puVar7;
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
  if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
  unaff_x29 = 0x5c;
  if (lVar20 == 0) goto LAB_035574b8;
  uVar33 = *(uint *)(lVar17 + lVar27 * 0x178 + 400);
  fVar41 = (float)FUN_03776a30(lVar20 + 0x50,0);
  if ((uVar33 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= in_w10 - 2) goto LAB_035575f4;
      uVar33 = *(uint *)(lVar17 + unaff_x27 + -0x330);
      fVar39 = *(float *)(lVar17 + unaff_x27 + -0x30c);
      pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar34 = (ulong)uVar33;
      uVar13 = (ulong)(uint)fStack000000000000009c;
      uVar31 = (ulong)uStack0000000000000098;
      (*pcVar18)(in_stack_000000a0,uVar13,uVar31,uVar34,in_stack_000000a8 * fVar41 + fVar39,0,
                 in_stack_000000a8,in_stack_000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar17 = *in_stack_00000170;
    if ((lVar17 == 0) || (lVar24 = *(long *)(lVar17 + 0x38), lVar24 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(undefined4 *)(lVar24 + lVar27 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar24 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar23 == 0xd) || ((uVar23 & 0xfffe) == 10)) || ((int)uVar6 < (int)unaff_w25)) ||
       ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (unaff_w25 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(uVar23,0);
        if ((uVar12 & 1) != 0) goto LAB_035564e8;
        lVar17 = *in_stack_00000170;
        if (lVar17 == 0) goto LAB_035574b8;
      }
      lVar17 = *(long *)(lVar17 + 0x38);
      if (lVar17 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar17 = lVar17 + lVar27 * 0x178;
      in_stack_00000040 = *(float *)(lVar17 + 0x60);
      in_stack_00000038 = *(float *)(lVar17 + 0x14c);
      uVar13 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar17 + 0x11c);
      uVar31 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar17 + 0x160);
      fStack000000000000009c = fVar41 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar10 = *unaff_x20;
    if (iVar10 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + lVar27 * 0x178;
          lVar19 = *unaff_x19;
          uVar33 = *(uint *)(lVar17 + 0x128);
          fVar39 = *(float *)(lVar17 + 0x14c);
LAB_03556654:
          pcVar18 = *(code **)(lVar19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (unaff_w25 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b63d8(uVar23,0);
      if ((*in_stack_00000170 != 0) && (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0))
      {
        uVar33 = *(uint *)(lVar17 + 0x18);
        if (uVar23 == 0x200b || (uVar13 & 1) != 0) {
          if (uVar33 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar19 = lVar27;
          if (uVar33 <= unaff_w25) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar17 = lVar17 + lVar19 * 0x178;
        fVar39 = *(float *)(lVar17 + 0x14c);
        uVar33 = *(uint *)(lVar17 + 0x128);
        pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < iVar10) {
      lVar17 = *in_stack_00000170;
      if ((lVar17 != 0) && (lVar24 = *(long *)(lVar17 + 0x38), lVar24 != 0)) {
        if (*(uint *)(lVar24 + 0x18) <= in_w10) goto LAB_035575f4;
        if (*(float *)(lVar24 + unaff_x27 + -0x108) == in_stack_00000040) {
          fVar32 = *(float *)(lVar24 + unaff_x27 + -0x1c);
          if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = (ulong)(uint)in_stack_00000038;
          uVar12 = FUN_03567bac(fVar39 + fVar32,uVar13,0);
          if ((uVar12 & 1) != 0) {
            iVar10 = *unaff_x20;
            goto LAB_03556744;
          }
          lVar17 = *in_stack_00000170;
          if (lVar17 == 0) goto LAB_035574b8;
        }
        lVar17 = *(long *)(lVar17 + 0x38);
        if (lVar17 != 0) {
          uVar33 = *(uint *)(lVar17 + 0x18);
          if ((int)unaff_w25 <= (int)uVar6) goto FUN_035568e8;
          if (uVar6 < uVar33) goto LAB_035568f0;
          goto LAB_035575f4;
        }
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)unaff_w25 < iVar10) {
      iVar10 = FUN_036d3364(lVar20,0);
      if (*(uint *)(in_stack_000000f0 + 0x18) <= in_w10) goto LAB_035575f4;
      lVar17 = *(long *)(in_stack_000000f0 + unaff_x27 + -0x130);
      if (lVar17 == 0) goto LAB_035574b8;
      iVar9 = FUN_036d3364(lVar17,0);
      if (iVar10 != iVar9) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 != 0))
      {
        if (in_w10 - 2 < *(uint *)(lVar17 + 0x18)) {
          lVar19 = *unaff_x19;
          uVar33 = *(uint *)(lVar17 + unaff_x27 + -0x330);
          fVar39 = *(float *)(lVar17 + unaff_x27 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
  goto LAB_035574b8;
  uVar33 = (uint)*(undefined8 *)(lVar17 + 0x18);
  if (uVar33 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar17 + lVar27 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar31 = (ulong)uStack00000000000000c0;
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      uVar34 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar31,uVar34,fStack00000000000000d0,uVar31);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)uVar11)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar17 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((in_stack_00000110._4_4_ & 1) == 0) {
      if ((((uVar23 == 0xd) || ((uVar23 & 0xfffe) == 10)) || ((int)uVar6 < (int)unaff_w25)) ||
         (!bVar1)) goto LAB_035569b4;
      if (unaff_w25 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b97f8(uVar23,0);
        if ((uVar12 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x38), lVar17 == 0))
      goto LAB_035574b8;
      uVar33 = (uint)*(undefined8 *)(lVar17 + 0x18);
      if (uVar33 <= unaff_w25) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + 0xb8);
      lVar20 = lVar17 + lVar27 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar20 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar20 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar19 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar19 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar20 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar19 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar19 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar33 <= unaff_w25) goto LAB_035575f4;
    lVar17 = lVar17 + lVar27 * 0x178;
    fVar41 = *(float *)(lVar17 + 0x128);
    fVar35 = *(float *)(lVar17 + 0x188);
    uVar25 = *(undefined8 *)(lVar17 + 0x17c);
    fVar38 = *(float *)(lVar17 + 0x184);
    uVar30 = *(undefined8 *)(lVar17 + 0x184);
    fVar37 = *(float *)(lVar17 + 0x18c);
    fVar39 = *(float *)(lVar17 + 0x11c);
    fVar36 = *(float *)(lVar17 + 0x148);
    fVar32 = *(float *)(lVar17 + 0x150);
    in_stack_00000178 = uVar25;
    fStack0000000000000180 = fVar38;
    fStack0000000000000184 = fVar35;
    in_stack_00000188 = fVar37;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar13 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar17 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar17);
      }
      fVar41 = fVar41 + (float)in_stack_000017b8;
      uVar31 = (ulong)(uint)fVar41;
      fVar39 = fVar39 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar32 = fVar32 - in_stack_000017c0;
      uVar13 = (ulong)(uint)fVar32;
      fVar36 = fVar36 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar34 = (ulong)(uint)fVar36;
      if (fVar39 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar39;
      }
      if (fVar32 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar32;
      }
      if (in_stack_000000c8 <= fVar41) {
        in_stack_000000c8 = fVar41;
      }
      if (fStack00000000000000d0 <= fVar36) {
        fStack00000000000000d0 = fVar36;
      }
    }
    else {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar17);
      }
      fVar39 = (fVar39 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar34 = (ulong)(uint)fVar39;
      if (fVar32 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar32;
      }
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      uVar31 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar36) {
        fStack00000000000000d0 = fVar36;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar31,uVar34,fStack00000000000000d0,uVar31);
      fStack00000000000000dc = fVar32 - fVar37;
      in_stack_000000c8 = fVar41 + fVar38;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar36 + fVar35;
      fStack00000000000000d8 = fVar39;
      in_stack_000017b0 = uVar25;
      in_stack_000017b8 = uVar30;
      in_stack_000017c0 = fVar37;
    }
    if (((*unaff_x20 == 1) || (unaff_w25 == uVar5)) || (((int)uVar6 <= (int)unaff_w25 || (!bVar1))))
    {
      uVar31 = (ulong)uStack00000000000000c0;
      uVar13 = (ulong)(uint)fStack00000000000000dc;
      uVar34 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar13,uVar31,uVar34,fStack00000000000000d0,uVar31);
      in_stack_00000110._4_4_ = 0;
    }
    else {
      in_stack_00000110._4_4_ = 1;
    }
  }
  puVar7 = OVRPlugin_Media_TypeInfo;
  unaff_x22 = 0x178;
  iVar10 = *unaff_x20;
  unaff_x27 = unaff_x27 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  if (iVar10 <= (int)in_w10) {
    lVar17 = *in_stack_00000170;
    if (lVar17 == 0) goto LAB_035574b8;
    *(int *)(lVar17 + 0x18) = iVar10;
    lVar19 = unaff_x19[0xd4];
    *(uint *)(lVar17 + 0x2c) = uVar11 + 1;
    if (iVar10 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar17 + 0x1c) = (int)lVar19;
    *(int *)(lVar17 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar17 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0)) goto LAB_03554724;
    lVar17 = unaff_x19[0xdf];
    if (lVar17 != 0) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar17 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar10 != 0x19) {
      lVar17 = unaff_x19[0xe5];
      if (lVar17 == 0) goto LAB_035574b8;
      uVar11 = FUN_03911ee4(lVar17,0);
      FUN_03911f20(lVar17,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar17 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
                if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar17 = *(long *)(unaff_x19[0x6d] + 0x60), lVar17 != 0)) {
                    if (*(int *)(lVar17 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar17 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar30 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar17 = *in_stack_00000170;
                              if (lVar17 != 0) {
                                lVar27 = 0;
                                lVar19 = 0;
                                goto LAB_03557110;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_035574b8;
  }
  in_w8 = *(uint *)(in_stack_000000f0 + 0x18);
  if (in_w8 <= in_w10) goto LAB_035575f4;
  in_x9 = *in_stack_00000170;
  unaff_x23 = in_stack_000000f0;
  unaff_w25 = in_w10;
  in_w10 = in_w10 + 1;
  unaff_w21 = uVar11;
  goto code_r0x03554e8c;
  while( true ) {
    lVar17 = *in_stack_00000170;
    lVar19 = lVar19 + 1;
    lVar27 = lVar27 + 0x50;
    if (lVar17 == 0) break;
LAB_03557110:
    uVar12 = lVar19 + 1;
    if ((long)*(int *)(lVar17 + 0x34) <= (long)uVar12) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar17 = *(long *)(lVar17 + 0x60);
    if (lVar17 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
    FUN_03596a20(lVar17 + lVar27 + 0x70,0);
    lVar17 = unaff_x19[0xe1];
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
    uVar25 = *(undefined8 *)(lVar17 + lVar19 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_036d35a8(uVar25,0,0);
    if ((uVar14 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar12) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar17 + lVar27 + 0x70,1,0);
      }
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a460c(lVar17,*(undefined8 *)(lVar20 + lVar27 + 0x80),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a4810(lVar17,*(undefined8 *)(lVar20 + lVar27 + 0x98),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a48bc(lVar17,*(undefined8 *)(lVar20 + lVar27 + 0xa0),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = UnityEngine_Material__GetColorArray(lVar17,0);
      if ((*in_stack_00000170 == 0) || (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035575f4;
      if (lVar17 == 0) break;
      FUN_036a4e24(lVar17,*(undefined8 *)(lVar20 + lVar27 + 0xa8),0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = UnityEngine_Material__GetColorArray(lVar17,0), lVar17 == 0))
      break;
      FUN_036aa280(lVar17,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if (lVar17 == 0) break;
      lVar17 = FUN_037b514c(lVar17,0);
      lVar20 = unaff_x19[0xe1];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + lVar19 * 8 + 0x28);
      if ((lVar20 == 0) || (uVar25 = UnityEngine_Material__GetColorArray(lVar20,0), lVar17 == 0))
      break;
      FUN_0390f3a4(lVar17,uVar25,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = FUN_037b514c(lVar17,0), lVar17 == 0)) break;
      FUN_0390eec8(uVar30,uVar13,uVar31,uVar34,lVar17,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar19 * 8 + 0x28);
      if ((lVar17 == 0) || (lVar17 = FUN_037b514c(lVar17,0), lVar17 == 0)) break;
      FUN_0390ed78(lVar17,uVar11 & 1,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      plVar26 = *(long **)(lVar17 + lVar19 * 8 + 0x28);
      uVar33 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar26 == (long *)0x0) break;
      (**(code **)(*plVar26 + 0x2c8))(plVar26,uVar33 & 1,*(undefined8 *)(*plVar26 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


