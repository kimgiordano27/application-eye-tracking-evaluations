/*
FUNCTION_NAME: UnityEngine.Animator$$SetLookAtPosition
ENTRY_POINT: 03554e4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__SetLookAtPosition
               (undefined1 param_1 [16],undefined1 param_2 [16],uint param_3)

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
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  uint in_w10;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar26;
  long *plVar27;
  long unaff_x22;
  long unaff_x23;
  long lVar28;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  ulong uVar32;
  float fVar33;
  uint uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000068;
  float in_stack_00000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  uint in_stack_000000a0;
  float fStack00000000000000a8;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e8;
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
  
  fStack0000000000000040 = 0.0;
  fStack00000000000000a8 = 0.0;
  fStack0000000000000038 = 0.0;
  uStack0000000000000074 = uStack00000000000000c0;
  uStack0000000000000098 = uStack00000000000000c0;
  uStack0000000000000078 = param_3;
LAB_03554e78:
  uVar11 = in_w10 - 1;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar11) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x50), lVar18 == 0)) goto LAB_035574b8;
  lVar28 = (long)(int)uVar11;
  lVar20 = unaff_x23 + lVar28 * unaff_x22;
  uVar12 = *(uint *)(lVar20 + 100);
  if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar25 = (long)(int)uVar12;
  lVar18 = lVar18 + lVar25 * unaff_x29;
  lVar21 = *(long *)(lVar20 + 0x38);
  uVar3 = *(ushort *)(lVar20 + 0x20);
  uVar5 = *(uint *)(lVar18 + 0x3c);
  uVar34 = *(uint *)(lVar18 + 0x68);
  iVar2 = *(int *)(lVar18 + 0x20);
  iVar10 = *(int *)(lVar18 + 0x28);
  iVar9 = *(int *)(lVar18 + 0x2c);
  uVar6 = *(uint *)(lVar18 + 0x40);
  lVar20 = (long)(int)uVar6;
  fVar33 = *(float *)(lVar18 + 0x4c);
  fVar36 = *(float *)(lVar18 + 0x54);
  fVar40 = *(float *)(lVar18 + 0x58);
  fVar41 = *(float *)(lVar18 + 0x5c);
  fVar38 = *(float *)(lVar18 + 0x60);
  fVar39 = *(float *)(lVar18 + 0x6c);
  fVar43 = *(float *)(lVar18 + 0x70);
  fVar42 = *(float *)(lVar18 + 0x74);
  fVar37 = *(float *)(lVar18 + 0x78);
  uVar24 = (uint)uVar3;
  if ((int)uVar34 < 9) {
    switch(uVar34) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar38 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar40;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar38 + fVar41 * 0.5) - fVar40 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar41 + fVar38) - fVar40;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar41 + fVar38;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar34 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
        if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(unaff_x23 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8cc4(uVar4,0);
        if ((uVar14 & 1) == 0) {
          bVar1 = (int)uVar12 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar40 <= fVar41) && (!bVar1 && uVar34 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar38;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar41 + fVar38;
          }
          goto LAB_03555088;
        }
        if (((in_w10 == 1) || (uVar12 != unaff_w21)) ||
           (uVar11 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar38;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar41 + fVar38;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000028 = FUN_026b97f8(uVar24,0);
          in_stack_000000e8 = 0;
        }
        else {
          cVar16 = (char)unaff_x19[0x1e];
          fVar38 = -fVar40;
          if (cVar16 != '\0') {
            fVar38 = fVar40;
          }
          if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_035575f4;
          iVar9 = (int)*(char *)(unaff_x23 + (long)(int)uVar5 * 0x178 + 0x194) +
                  (-iVar2 - (uStack0000000000000028 & 1)) + iVar9 + -1;
          if (iVar9 < 1) {
            fVar40 = 1.0;
            iVar9 = 1;
          }
          else {
            fVar40 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar24 == 9) {
LAB_03556e74:
            fVar40 = 1.0 - fVar40;
          }
          else {
            if (uVar24 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b97f8(uVar24,0);
              cVar16 = (char)unaff_x19[0x1e];
              if ((uVar14 & 1) != 0) goto LAB_03556e74;
            }
            iVar9 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar10;
          }
          fVar40 = ((fVar41 + fVar38) * fVar40) / (float)iVar9;
          if (cVar16 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar40;
            in_stack_000000e8 =
                 CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                          (float)in_stack_000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar40;
          }
        }
      }
    }
    else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar34 == 0x20) {
    fVar40 = fVar39 + fVar42;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar34 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  lVar18 = unaff_x23 + lVar28 * 0x178;
  fVar41 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar40 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar38 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar18 + 0x194) == '\0') goto LAB_03555938;
  iVar10 = *(int *)(unaff_x23 + lVar28 * 0x178 + 0x2c);
  if (iVar10 != 0) goto LAB_0355574c;
  fVar29 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar12,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar17 = unaff_x23 + lVar28 * 0x178;
    *(undefined4 *)(lVar17 + 0x84) = 0;
    *(undefined4 *)(lVar17 + 0xac) = 0;
    *(undefined4 *)(lVar17 + 0xd4) = 0x3f800000;
    fVar29 = 1.0;
    break;
  case 1:
    fVar37 = *(float *)(unaff_x23 + lVar28 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar17 = unaff_x23 + lVar28 * 0x178;
      fVar42 = (in_stack_000000f8._4_4_ + fVar37) - *(float *)(in_stack_00000080 + 0x230);
      fVar37 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar17 = unaff_x23 + lVar28 * 0x178;
    fVar42 = fVar42 - fVar39;
    *(float *)(lVar17 + 0x84) = fVar29 + (fVar37 - fVar39) / fVar42;
    *(float *)(lVar17 + 0xac) = fVar29 + (*(float *)(lVar17 + 0x98) - fVar39) / fVar42;
    *(float *)(lVar17 + 0xd4) = fVar29 + (*(float *)(lVar17 + 0xc0) - fVar39) / fVar42;
    fVar29 = fVar29 + (*(float *)(lVar17 + 0xe8) - fVar39) / fVar42;
    break;
  case 2:
    lVar17 = unaff_x23 + lVar28 * 0x178;
    fVar37 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar42 = (in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar17 + 0x84) = fVar29 + fVar42 / fVar37;
    *(float *)(lVar17 + 0xac) =
         fVar29 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar17 + 0xd4) =
         fVar29 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar29 = fVar29 + ((in_stack_000000f8._4_4_ + *(float *)(lVar17 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar17 = unaff_x23 + lVar28 * 0x178;
      *(undefined4 *)(lVar17 + 0x88) = 0;
      *(undefined4 *)(lVar17 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar17 + 0xd8) = 0;
      *(undefined4 *)(lVar17 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar17 = unaff_x23 + lVar28 * 0x178;
      fVar37 = fVar37 - fVar43;
      fVar42 = fVar29 + (*(float *)(lVar17 + 0x74) - fVar43) / fVar37;
      fVar37 = fVar29 + (*(float *)(lVar17 + 0x9c) - fVar43) / fVar37;
      *(float *)(lVar17 + 0x88) = fVar42;
      *(float *)(lVar17 + 0xb0) = fVar37;
      *(float *)(lVar17 + 0xd8) = fVar42;
      *(float *)(lVar17 + 0x100) = fVar37;
      break;
    case 2:
      lVar17 = unaff_x23 + lVar28 * 0x178;
      fVar42 = fVar29 + (*(float *)(lVar17 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar17 + 0x88) = fVar42;
      fVar37 = *(float *)(unaff_x19 + 0x9c);
      fVar39 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar17 + 0xd8) = fVar42;
      fVar42 = fVar29 + (*(float *)(lVar17 + 0x9c) - fVar37) / (fVar39 - fVar37);
      *(float *)(lVar17 + 0xb0) = fVar42;
      *(float *)(lVar17 + 0x100) = fVar42;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar34 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
    }
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar17 = unaff_x23 + lVar28 * 0x178;
    fVar42 = *(float *)(lVar17 + 0x15c);
    fVar37 = (1.0 - (*(float *)(lVar17 + 0x88) + *(float *)(lVar17 + 0xb0)) * fVar42) * 0.5;
    fVar39 = fVar29 + *(float *)(lVar17 + 0x88) * fVar42 + fVar37;
    fVar29 = fVar29 + fVar37 + *(float *)(lVar17 + 0xb0) * fVar42;
    *(float *)(lVar17 + 0x84) = fVar39;
    *(float *)(lVar17 + 0xac) = fVar39;
    *(float *)(lVar17 + 0xd4) = fVar29;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(unaff_x23 + lVar28 * 0x178 + 0xfc) = fVar29;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar17 = unaff_x23 + lVar28 * 0x178;
    *(undefined4 *)(lVar17 + 0x88) = 0;
    *(undefined4 *)(lVar17 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar17 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar17 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar34) {
      lVar17 = unaff_x23 + lVar28 * 0x178;
      fVar33 = fVar33 - fVar36;
      fVar42 = (*(float *)(lVar17 + 0x74) - fVar36) / fVar33;
      fVar33 = (*(float *)(lVar17 + 0x9c) - fVar36) / fVar33;
      *(float *)(lVar17 + 0x88) = fVar42;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar17 = unaff_x23 + lVar28 * 0x178;
    fVar42 = (*(float *)(lVar17 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar17 + 0x88) = fVar42;
    fVar33 = (*(float *)(lVar17 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar17 + 0xb0) = fVar33;
    *(float *)(lVar17 + 0xd8) = fVar33;
    *(float *)(lVar17 + 0x100) = fVar42;
    break;
  case 3:
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar17 = unaff_x23 + lVar28 * 0x178;
    fVar37 = *(float *)(lVar17 + 0x15c);
    fVar33 = (1.0 - (*(float *)(lVar17 + 0x84) + *(float *)(lVar17 + 0xd4)) / fVar37) * 0.5;
    fVar42 = *(float *)(lVar17 + 0x84) / fVar37 + fVar33;
    fVar33 = fVar33 + *(float *)(lVar17 + 0xd4) / fVar37;
    *(float *)(lVar17 + 0x88) = fVar42;
    *(float *)(lVar17 + 0xb0) = fVar33;
    *(float *)(lVar17 + 0x100) = fVar42;
    *(float *)(lVar17 + 0xd8) = fVar33;
  }
  if (uVar34 <= uVar11) goto LAB_035575f4;
  lVar17 = unaff_x23 + lVar28 * 0x178;
  unaff_s14 = *(float *)(lVar17 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar17 + 0x5c) == '\0') && ((*(byte *)(unaff_x23 + lVar28 * 0x178 + 400) & 1) != 0)
     ) {
    unaff_s14 = -unaff_s14;
  }
  fVar42 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar42 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar42 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar42 * unaff_s14;
  }
  lVar17 = unaff_x23 + lVar28 * 0x178;
  fVar33 = *(float *)(lVar17 + 0x88);
  fVar37 = *(float *)(lVar17 + 0x84);
  fVar42 = -2.1474836e+09;
  if (fVar37 != INFINITY) {
    fVar42 = (float)(int)fVar37;
  }
  fVar39 = *(float *)(lVar17 + 0xd4);
  fVar43 = *(float *)(lVar17 + 0xd8);
  fVar36 = -2.1474836e+09;
  if (fVar33 != INFINITY) {
    fVar36 = (float)(int)fVar33;
  }
  uVar30 = FUN_03591d3c(fVar37 - fVar42,fVar33 - fVar36);
  *(undefined4 *)(lVar17 + 0x84) = uVar30;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar43 = fVar43 - fVar36;
  *(float *)(lVar17 + 0x88) = unaff_s14;
  uVar30 = FUN_03591d3c(fVar37 - fVar42,fVar43);
  *(undefined4 *)(unaff_x23 + lVar28 * 0x178 + 0xac) = uVar30;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar39 = fVar39 - fVar42;
  *(float *)(unaff_x23 + lVar28 * 0x178 + 0xb0) = unaff_s14;
  fVar42 = (float)FUN_03591d3c(fVar39,fVar43);
  *(float *)(lVar17 + 0xd4) = fVar42;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar11) goto LAB_035575f4;
  *(float *)(lVar17 + 0xd8) = unaff_s14;
  uVar30 = FUN_03591d3c(fVar39,fVar33 - fVar36);
  *(undefined4 *)(unaff_x23 + lVar28 * 0x178 + 0xfc) = uVar30;
  uVar34 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  *(float *)(unaff_x23 + lVar28 * 0x178 + 0x100) = unaff_s14;
LAB_0355574c:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar12 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar34 <= uVar11) goto LAB_035575f4;
      lVar18 = unaff_x23 + lVar28 * 0x178;
      *(ulong *)(lVar18 + 0x70) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar18 + 0x70));
      *(float *)(lVar18 + 0x78) = fVar38 + *(float *)(lVar18 + 0x78);
      *(ulong *)(lVar18 + 0x98) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar18 + 0x98));
      *(float *)(lVar18 + 0xa0) = fVar38 + *(float *)(lVar18 + 0xa0);
      *(ulong *)(lVar18 + 0xc0) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar18 + 0xc0));
      *(float *)(lVar18 + 200) = fVar38 + *(float *)(lVar18 + 200);
      *(ulong *)(lVar18 + 0xe8) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar18 + 0xe8));
      *(float *)(lVar18 + 0xf0) = fVar38 + *(float *)(lVar18 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar12 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar34) {
        if (*(int *)(unaff_x23 + lVar28 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar18 = unaff_x23 + lVar28 * 0x178;
          *(ulong *)(lVar18 + 0x70) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar18 + 0x70));
          *(float *)(lVar18 + 0x78) = fVar38 + *(float *)(lVar18 + 0x78);
          *(ulong *)(lVar18 + 0x98) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar18 + 0x98));
          *(float *)(lVar18 + 0xa0) = fVar38 + *(float *)(lVar18 + 0xa0);
          *(ulong *)(lVar18 + 0xc0) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar18 + 0xc0));
          *(float *)(lVar18 + 200) = fVar38 + *(float *)(lVar18 + 200);
          *(ulong *)(lVar18 + 0xe8) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar18 + 0xe8));
          *(float *)(lVar18 + 0xf0) = fVar38 + *(float *)(lVar18 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar34 <= uVar11) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar34 = *(uint *)(unaff_x23 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar17 = unaff_x23 + lVar28 * 0x178;
  *(undefined8 *)(lVar17 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar17 + 0x78) = uVar30;
  if (uVar34 <= uVar11) goto LAB_035575f4;
  uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar17 = unaff_x23 + lVar28 * 0x178;
  *(undefined8 *)(lVar17 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar17 + 0xa0) = uVar30;
  uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar17 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar17 + 200) = uVar30;
  uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar17 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar17 + 0xf0) = uVar30;
  *(undefined1 *)(lVar18 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar10 == 0) {
    pcVar19 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar19)();
  }
  else if (iVar10 == 1) {
    pcVar19 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar18 = lVar18 + lVar28 * 0x178;
  uVar31 = *(undefined8 *)(lVar18 + 0x11c);
  *(undefined8 *)(lVar18 + 0x11c) =
       CONCAT44(fVar40 + (float)((ulong)uVar31 >> 0x20),fVar41 + (float)uVar31);
  *(float *)(lVar18 + 0x124) = fVar38 + *(float *)(lVar18 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar18 = lVar18 + lVar28 * 0x178;
  *(ulong *)(lVar18 + 0x110) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0x110) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar18 + 0x110));
  *(float *)(lVar18 + 0x118) = fVar38 + *(float *)(lVar18 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar18 = lVar18 + lVar28 * 0x178;
  *(ulong *)(lVar18 + 0x128) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar18 + 0x128) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar18 + 0x128));
  *(float *)(lVar18 + 0x130) = fVar38 + *(float *)(lVar18 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar18 = lVar18 + lVar28 * 0x178;
  *(float *)(lVar18 + 0x134) = fVar41 + *(float *)(lVar18 + 0x134);
  *(ulong *)(lVar18 + 0x138) =
       CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar18 + 0x138) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar18 + 0x138));
  lVar18 = *in_stack_00000170;
  if ((lVar18 == 0) || (lVar17 = *(long *)(lVar18 + 0x38), lVar17 == 0)) goto LAB_035574b8;
  uVar34 = *(uint *)(lVar17 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  lVar22 = lVar17 + lVar28 * 0x178;
  uVar14 = CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar22 + 0x140) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar22 + 0x140));
  fVar42 = fVar40 + *(float *)(lVar22 + 0x150);
  uVar32 = (ulong)(uint)fVar42;
  uVar35 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x148) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar22 + 0x148));
  *(float *)(lVar22 + 0x150) = fVar42;
  *(ulong *)(lVar22 + 0x140) = uVar14;
  *(ulong *)(lVar22 + 0x148) = uVar35;
  if (uVar12 == unaff_w21) {
    uVar34 = *unaff_x20 - 1;
    if (uVar11 == uVar34) goto LAB_03555b44;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x50);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= unaff_w21) goto LAB_035575f4;
    lVar22 = (long)(int)unaff_w21;
    lVar23 = lVar18 + lVar22 * 0x5c;
    uVar35 = (ulong)(uint)*(float *)(lVar23 + 0x58);
    fVar42 = fVar40 + *(float *)(lVar23 + 0x54);
    uVar14 = (ulong)(uint)fVar42;
    fVar33 = fVar41 + *(float *)(lVar23 + 0x58);
    uVar32 = (ulong)(uint)fVar33;
    *(ulong *)(lVar23 + 0x4c) =
         CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0x4c) >> 0x20),
                  fVar40 + (float)*(undefined8 *)(lVar23 + 0x4c));
    *(float *)(lVar23 + 0x54) = fVar42;
    *(float *)(lVar23 + 0x58) = fVar33;
    if (uVar34 <= *(uint *)(lVar23 + 0x34)) goto LAB_035575f4;
    uVar30 = *(undefined4 *)(lVar17 + (long)(int)*(uint *)(lVar23 + 0x34) * 0x178 + 0x11c);
    lVar18 = lVar18 + lVar22 * 0x5c;
    *(float *)(lVar18 + 0x70) = fVar42;
    *(undefined4 *)(lVar18 + 0x6c) = uVar30;
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar17 = *(long *)(lVar18 + 0x50), lVar17 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar17 + 0x18) <= unaff_w21) goto LAB_035575f4;
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto LAB_035574b8;
    uVar34 = *(uint *)(lVar17 + lVar22 * 0x5c + 0x40);
    if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
    lVar17 = lVar17 + lVar22 * 0x5c;
    *(undefined4 *)(lVar17 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar34 * 0x178 + 0x128);
    *(undefined4 *)(lVar17 + 0x78) = *(undefined4 *)(lVar17 + 0x4c);
    uVar34 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar11 == uVar34) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar17 = *(long *)(lVar18 + 0x50), lVar17 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = lVar17 + lVar25 * 0x5c;
      uVar35 = (ulong)(uint)*(float *)(lVar22 + 0x58);
      uVar14 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar22 + 0x4c));
      fVar42 = fVar40 + *(float *)(lVar22 + 0x54);
      fVar41 = fVar41 + *(float *)(lVar22 + 0x58);
      uVar32 = (ulong)(uint)fVar41;
      *(ulong *)(lVar22 + 0x4c) = uVar14;
      *(float *)(lVar22 + 0x54) = fVar42;
      *(float *)(lVar22 + 0x58) = fVar41;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar22 + 0x34)) goto LAB_035575f4;
      uVar30 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar22 + 0x34) * 0x178 + 0x11c);
      lVar17 = lVar17 + lVar25 * 0x5c;
      *(float *)(lVar17 + 0x70) = fVar42;
      *(undefined4 *)(lVar17 + 0x6c) = uVar30;
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar17 = *(long *)(lVar18 + 0x50), lVar17 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      uVar34 = *(uint *)(lVar17 + lVar25 * 0x5c + 0x40);
      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
      lVar17 = lVar17 + lVar25 * 0x5c;
      *(undefined4 *)(lVar17 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar34 * 0x178 + 0x128);
      *(undefined4 *)(lVar17 + 0x78) = *(undefined4 *)(lVar17 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar13 = FUN_026b82c4(uVar24,0);
  if (((((uVar13 & 1) == 0) && (1 < uVar24 - 0x2010)) && (uVar24 != 0xad)) && (uVar24 != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (in_w10 != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b81f8(uVar24,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b63d8(uVar24,0);
        if (((uVar24 != 0x200b) && ((uVar13 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    else if (((in_w10 != 1) && ((int)uVar11 < (int)(*(uint *)(unaff_x23 + 0x18) - 1))) &&
            (((int)uVar11 < *unaff_x20 && ((uVar24 == 0x2019 || (uVar24 == 0x27)))))) {
      if (*(uint *)(unaff_x23 + 0x18) <= in_w10 - 2) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(unaff_x23 + unaff_x27 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b82c4(uVar4,0);
      if ((uVar13 & 1) != 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= in_w10) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(unaff_x23 + unaff_x27 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b82c4(uVar4,0);
        if ((uVar13 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (uVar11 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b82c4(uVar24,0);
      iVar10 = iStack0000000000000128;
      if ((uVar13 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar10 = in_w10 - 2;
    }
    lVar18 = *in_stack_00000170;
    if (lVar18 == 0) goto LAB_035574b8;
    lVar17 = *(long *)(lVar18 + 0x40);
    if (lVar17 == 0) goto LAB_035574b8;
    uVar34 = *(uint *)(lVar18 + 0x24);
    iVar9 = *(int *)(lVar17 + 0x18);
    if (iVar9 < (int)(uVar34 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar18 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
    }
    lVar18 = *(long *)(lVar18 + 0x40);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
    lVar18 = lVar18 + (long)(int)uVar34 * 0x18;
    *(long **)(lVar18 + 0x20) = unaff_x19;
    *(uint *)(lVar18 + 0x28) = in_stack_00000158;
    *(int *)(lVar18 + 0x2c) = iVar10;
    *(uint *)(lVar18 + 0x30) = (iVar10 - in_stack_00000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar18 = unaff_x19[0x6d];
    if (lVar18 == 0) goto LAB_035574b8;
    lVar17 = *(long *)(lVar18 + 0x50);
    *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
    if (lVar17 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar17 = lVar17 + lVar25 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      in_stack_00000158 = uVar11;
    }
    if (uVar11 == *unaff_x20 - 1U) {
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar17 = *(long *)(lVar18 + 0x40);
      if (lVar17 == 0) goto LAB_035574b8;
      uVar34 = *(uint *)(lVar18 + 0x24);
      iVar10 = *(int *)(lVar17 + 0x18);
      if (iVar10 < (int)(uVar34 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar18 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar34) goto LAB_035575f4;
      lVar18 = lVar18 + (long)(int)uVar34 * 0x18;
      *(long **)(lVar18 + 0x20) = unaff_x19;
      *(uint *)(lVar18 + 0x28) = in_stack_00000158;
      *(uint *)(lVar18 + 0x2c) = uVar11;
      *(uint *)(lVar18 + 0x30) = in_w10 - in_stack_00000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = unaff_x19[0x6d];
      if (lVar18 == 0) goto LAB_035574b8;
      lVar17 = *(long *)(lVar18 + 0x50);
      *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      if (lVar17 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar17 = lVar17 + lVar25 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  uVar34 = *(uint *)(lVar18 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar18 + lVar28 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar34 <= in_w10 - 2) goto LAB_035575f4;
      lVar25 = *unaff_x19;
      uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
      uVar30 = *(undefined4 *)(lVar18 + unaff_x27 + -0x2f8);
LAB_035562ec:
      pcVar19 = *(code **)(lVar25 + 0x8d8);
LAB_035562f4:
      uVar35 = (ulong)uVar34;
      uVar14 = (ulong)(uint)in_stack_00000070;
      uVar32 = (ulong)uStack0000000000000074;
      (*pcVar19)(uStack0000000000000078,uVar14,uVar32,uVar35,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar30);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar7;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar18 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar18 = lVar18 + lVar28 * 0x178;
    iVar10 = *(int *)(lVar18 + 0x68);
    *(undefined4 *)(lVar18 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(uVar24,0);
    if ((uVar24 != 0x200b) && ((uVar13 & 1) == 0)) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x38), lVar25 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_035575f4;
      fVar42 = *(float *)(lVar25 + lVar28 * 0x178 + 0x160);
      if (unaff_s15 <= fVar42) {
        unaff_s15 = fVar42;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar10 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *in_stack_00000170;
          if (lVar18 == 0) goto LAB_035574b8;
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar25 + 0x15a8);
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar33 = *(float *)(lVar18 + lVar28 * 0x178 + 0x14c);
      fVar42 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar33 = fVar33 + unaff_s15 * fVar42;
      if (fVar33 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar33;
      }
      uVar14 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar10;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar11 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b97f8(uVar24,0);
        if ((uVar13 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = lVar18 + lVar28 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar18 + 0x160);
      uStack0000000000000078 = *(uint *)(lVar18 + 0x11c);
      uVar32 = (ulong)uStack0000000000000078;
      bVar8 = unaff_s15 != 0.0;
      fVar42 = in_stack_00000088._4_4_;
      if (bVar8) {
        fVar42 = unaff_s15;
      }
      unaff_s15 = fVar42;
      in_stack_00000090 = *(undefined4 *)(lVar18 + 0x168);
      uStack0000000000000074 = 0;
      fVar42 = unaff_s14;
      if (bVar8) {
        fVar42 = fStack0000000000000100;
      }
      uVar14 = (ulong)(uint)fVar42;
      in_stack_00000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar42;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        if (uVar11 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + lVar28 * 0x178;
          lVar25 = *unaff_x19;
          uVar34 = *(uint *)(lVar18 + 0x128);
          uVar30 = *(undefined4 *)(lVar18 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar11 == uVar5) || ((int)uVar6 <= (int)uVar11)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b63d8(uVar24,0);
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        lVar25 = lVar28;
        uVar34 = uVar11;
        if (uVar24 == 0x200b || (uVar14 & 1) != 0) {
          lVar25 = lVar20;
          uVar34 = uVar6;
        }
        if (uVar34 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + lVar25 * 0x178;
          uVar34 = *(uint *)(lVar18 + 0x128);
          uVar30 = *(undefined4 *)(lVar18 + 0x160);
          pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        uVar34 = *(uint *)(lVar18 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= in_w10) goto LAB_035575f4;
      uVar13 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar18 + unaff_x27),0);
      if ((uVar13 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
          if (uVar11 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + lVar28 * 0x178;
            uVar35 = (ulong)*(uint *)(lVar18 + 0x128);
            uVar32 = (ulong)uStack0000000000000074;
            uVar14 = (ulong)(uint)in_stack_00000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (uStack0000000000000078,uVar14,uVar32,uVar35,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar18 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar18 = *(long *)puVar7;
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
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
  unaff_x29 = 0x5c;
  if (lVar21 == 0) goto LAB_035574b8;
  uVar34 = *(uint *)(lVar18 + lVar28 * 0x178 + 400);
  fVar42 = (float)FUN_03776a30(lVar21 + 0x50,0);
  if ((uVar34 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= in_w10 - 2) goto LAB_035575f4;
      uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
      fVar40 = *(float *)(lVar18 + unaff_x27 + -0x30c);
      pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar35 = (ulong)uVar34;
      uVar14 = (ulong)(uint)fStack000000000000009c;
      uVar32 = (ulong)uStack0000000000000098;
      (*pcVar19)(in_stack_000000a0,uVar14,uVar32,uVar35,fStack00000000000000a8 * fVar42 + fVar40,0,
                 fStack00000000000000a8,fStack00000000000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar25 = *(long *)(lVar18 + 0x38), lVar25 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_035575f4;
    *(undefined4 *)(lVar25 + lVar28 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar25 + lVar28 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar11)) ||
       ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (uVar11 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b97f8(uVar24,0);
        if ((uVar13 & 1) != 0) goto LAB_035564e8;
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar18 = lVar18 + lVar28 * 0x178;
      fStack0000000000000040 = *(float *)(lVar18 + 0x60);
      fStack0000000000000038 = *(float *)(lVar18 + 0x14c);
      uVar14 = (ulong)(uint)fStack0000000000000038;
      in_stack_000000a0 = *(uint *)(lVar18 + 0x11c);
      uVar32 = (ulong)in_stack_000000a0;
      fStack00000000000000a8 = *(float *)(lVar18 + 0x160);
      fStack000000000000009c = fVar42 * fStack00000000000000a8 + fStack0000000000000038;
      uStack0000000000000098 = 0;
    }
    iVar10 = *unaff_x20;
    if (iVar10 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        if (uVar11 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + lVar28 * 0x178;
          lVar20 = *unaff_x19;
          uVar34 = *(uint *)(lVar18 + 0x128);
          fVar40 = *(float *)(lVar18 + 0x14c);
LAB_03556654:
          pcVar19 = *(code **)(lVar20 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar11 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b63d8(uVar24,0);
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        uVar34 = *(uint *)(lVar18 + 0x18);
        if (uVar24 == 0x200b || (uVar14 & 1) != 0) {
          if (uVar34 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar20 = lVar28;
          if (uVar34 <= uVar11) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar18 = lVar18 + lVar20 * 0x178;
        fVar40 = *(float *)(lVar18 + 0x14c);
        uVar34 = *(uint *)(lVar18 + 0x128);
        pcVar19 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < iVar10) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 != 0) && (lVar25 = *(long *)(lVar18 + 0x38), lVar25 != 0)) {
        if (in_w10 < *(uint *)(lVar25 + 0x18)) {
          if (*(float *)(lVar25 + unaff_x27 + -0x108) == fStack0000000000000040) {
            fVar33 = *(float *)(lVar25 + unaff_x27 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = (ulong)(uint)fStack0000000000000038;
            uVar13 = FUN_03567bac(fVar40 + fVar33,uVar14,0);
            if ((uVar13 & 1) != 0) {
              iVar10 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar18 = *in_stack_00000170;
            if (lVar18 == 0) goto LAB_035574b8;
          }
          lVar18 = *(long *)(lVar18 + 0x38);
          if (lVar18 != 0) {
            uVar34 = *(uint *)(lVar18 + 0x18);
            if ((int)uVar11 <= (int)uVar6) goto FUN_035568e8;
            if (uVar6 < uVar34) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar11 < iVar10) {
      iVar10 = FUN_036d3364(lVar21,0);
      if (*(uint *)(unaff_x23 + 0x18) <= in_w10) goto LAB_035575f4;
      lVar18 = *(long *)(unaff_x23 + unaff_x27 + -0x130);
      if (lVar18 == 0) goto LAB_035574b8;
      iVar9 = FUN_036d3364(lVar18,0);
      if (iVar10 != iVar9) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        if (in_w10 - 2 < *(uint *)(lVar18 + 0x18)) {
          lVar20 = *unaff_x19;
          uVar34 = *(uint *)(lVar18 + unaff_x27 + -0x330);
          fVar40 = *(float *)(lVar18 + unaff_x27 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  uVar34 = (uint)*(undefined8 *)(lVar18 + 0x18);
  if (uVar34 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar18 + lVar28 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar32 = (ulong)uStack00000000000000c0;
      uVar14 = (ulong)(uint)fStack00000000000000dc;
      uVar35 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar14,uVar32,uVar35,fStack00000000000000d0,uVar32);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar18 + lVar28 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((in_stack_00000110._4_4_ & 1) == 0) {
      if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar11)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar11 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b97f8(uVar24,0);
        if ((uVar13 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      uVar34 = (uint)*(undefined8 *)(lVar18 + 0x18);
      if (uVar34 <= uVar11) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + 0xb8);
      lVar21 = lVar18 + lVar28 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar21 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar21 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar20 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar20 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar21 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar20 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar20 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar34 <= uVar11) goto LAB_035575f4;
    lVar18 = lVar18 + lVar28 * 0x178;
    fVar42 = *(float *)(lVar18 + 0x128);
    fVar36 = *(float *)(lVar18 + 0x188);
    uVar26 = *(undefined8 *)(lVar18 + 0x17c);
    fVar39 = *(float *)(lVar18 + 0x184);
    uVar31 = *(undefined8 *)(lVar18 + 0x184);
    fVar38 = *(float *)(lVar18 + 0x18c);
    fVar40 = *(float *)(lVar18 + 0x11c);
    fVar37 = *(float *)(lVar18 + 0x148);
    fVar33 = *(float *)(lVar18 + 0x150);
    in_stack_00000178 = uVar26;
    fStack0000000000000180 = fVar39;
    fStack0000000000000184 = fVar36;
    in_stack_00000188 = fVar38;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar14 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar14 & 1) == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
      }
      fVar42 = fVar42 + (float)in_stack_000017b8;
      uVar32 = (ulong)(uint)fVar42;
      fVar40 = fVar40 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar33 = fVar33 - in_stack_000017c0;
      uVar14 = (ulong)(uint)fVar33;
      fVar37 = fVar37 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar35 = (ulong)(uint)fVar37;
      if (fVar40 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar40;
      }
      if (fVar33 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar33;
      }
      if (in_stack_000000c8 <= fVar42) {
        in_stack_000000c8 = fVar42;
      }
      if (fStack00000000000000d0 <= fVar37) {
        fStack00000000000000d0 = fVar37;
      }
    }
    else {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
      }
      fVar40 = (fVar40 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar35 = (ulong)(uint)fVar40;
      if (fVar33 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar33;
      }
      uVar14 = (ulong)(uint)fStack00000000000000dc;
      uVar32 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar37) {
        fStack00000000000000d0 = fVar37;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar14,uVar32,uVar35,fStack00000000000000d0,uVar32);
      fStack00000000000000dc = fVar33 - fVar38;
      in_stack_000000c8 = fVar42 + fVar39;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar37 + fVar36;
      fStack00000000000000d8 = fVar40;
      in_stack_000017b0 = uVar26;
      in_stack_000017b8 = uVar31;
      in_stack_000017c0 = fVar38;
    }
    if (((*unaff_x20 == 1) || (uVar11 == uVar5)) || (((int)uVar6 <= (int)uVar11 || (!bVar1)))) {
      uVar32 = (ulong)uStack00000000000000c0;
      uVar14 = (ulong)(uint)fStack00000000000000dc;
      uVar35 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar14,uVar32,uVar35,fStack00000000000000d0,uVar32);
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
  bVar1 = iVar10 <= (int)in_w10;
  unaff_x28 = in_stack_00000170;
  in_w10 = in_w10 + 1;
  unaff_w21 = uVar12;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar18 = *in_stack_00000170;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 0x18) = iVar10;
    lVar20 = unaff_x19[0xd4];
    *(uint *)(lVar18 + 0x2c) = uVar12 + 1;
    if (iVar10 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar18 + 0x1c) = (int)lVar20;
    *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar13 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar13 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = unaff_x19[0xdf];
    if (lVar18 != 0) {
      (**(code **)(lVar18 + 0x18))
                (*(undefined8 *)(lVar18 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar18 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar10 != 0x19) {
      lVar18 = unaff_x19[0xe5];
      if (lVar18 == 0) goto LAB_035574b8;
      uVar11 = FUN_03911ee4(lVar18,0);
      FUN_03911f20(lVar18,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar18 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0)) {
        if (*(int *)(lVar18 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0)) {
            if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0)) {
                if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar18 = *(long *)(unaff_x19[0x6d] + 0x60), lVar18 != 0)) {
                    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar18 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar31 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar18 = *in_stack_00000170;
                              if (lVar18 != 0) {
                                lVar28 = 0;
                                lVar20 = 0;
                                do {
                                  uVar13 = lVar20 + 1;
                                  if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar13)
                                  goto LAB_03554724;
                                  lVar18 = *(long *)(lVar18 + 0x60);
                                  if (lVar18 == 0) break;
                                  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                  FUN_03596a20(lVar18 + lVar28 + 0x70,0);
                                  lVar18 = unaff_x19[0xe1];
                                  if (lVar18 == 0) break;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                  uVar26 = *(undefined8 *)(lVar18 + lVar20 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar15 = FUN_036d35a8(uVar26,0,0);
                                  if ((uVar15 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                      FUN_03596b20(lVar18 + lVar28 + 0x70,1,0);
                                    }
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if (lVar18 == 0) break;
                                    lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_035575f4;
                                    if (lVar18 == 0) break;
                                    FUN_036a460c(lVar18,*(undefined8 *)(lVar21 + lVar28 + 0x80),0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if (lVar18 == 0) break;
                                    lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_035575f4;
                                    if (lVar18 == 0) break;
                                    FUN_036a4810(lVar18,*(undefined8 *)(lVar21 + lVar28 + 0x98),0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if (lVar18 == 0) break;
                                    lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_035575f4;
                                    if (lVar18 == 0) break;
                                    FUN_036a48bc(lVar18,*(undefined8 *)(lVar21 + lVar28 + 0xa0),0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if (lVar18 == 0) break;
                                    lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_035575f4;
                                    if (lVar18 == 0) break;
                                    FUN_036a4e24(lVar18,*(undefined8 *)(lVar21 + lVar28 + 0xa8),0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0),
                                       lVar18 == 0)) break;
                                    FUN_036aa280(lVar18,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if (lVar18 == 0) break;
                                    lVar18 = FUN_037b514c(lVar18,0);
                                    lVar21 = unaff_x19[0xe1];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar21 = *(long *)(lVar21 + lVar20 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (uVar26 = UnityEngine_Material__GetColorArray(lVar21,0),
                                       lVar18 == 0)) break;
                                    FUN_0390f3a4(lVar18,uVar26,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
                                    FUN_0390eec8(uVar31,uVar14,uVar32,uVar35,lVar18,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar20 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
                                    FUN_0390ed78(lVar18,uVar11 & 1,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar13) goto LAB_035575f4;
                                    plVar27 = *(long **)(lVar18 + lVar20 * 8 + 0x28);
                                    uVar12 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar27 == (long *)0x0) break;
                                    (**(code **)(*plVar27 + 0x2c8))
                                              (plVar27,uVar12 & 1,*(undefined8 *)(*plVar27 + 0x2d0))
                                    ;
                                  }
                                  lVar18 = *in_stack_00000170;
                                  lVar20 = lVar20 + 1;
                                  lVar28 = lVar28 + 0x50;
                                } while (lVar18 != 0);
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
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


