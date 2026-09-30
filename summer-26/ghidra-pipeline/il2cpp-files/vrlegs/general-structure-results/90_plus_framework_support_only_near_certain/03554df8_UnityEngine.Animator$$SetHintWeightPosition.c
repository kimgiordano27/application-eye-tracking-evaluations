/*
FUNCTION_NAME: UnityEngine.Animator$$SetHintWeightPosition
ENTRY_POINT: 03554df8
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


void UnityEngine_Animator__SetHintWeightPosition(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar27;
  long *plVar28;
  long unaff_x23;
  long lVar29;
  long lVar30;
  long *unaff_x28;
  uint uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  ulong uVar35;
  float fVar36;
  uint uVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  float fStack000000000000008c;
  undefined4 in_stack_00000090;
  uint uStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  undefined8 in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
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
  
  lVar30 = 0x2e0;
  fVar32 = 0.0;
  fVar47 = 0.0;
  fStack00000000000000c8 = fStack00000000000000d8;
  fStack0000000000000104 = *(float *)(*(long *)(**(long **)(param_1 + 0x848) + 0xb8) + 0x15a8);
  fStack00000000000000d0 = fStack00000000000000dc;
  fStack0000000000000070 = fStack00000000000000dc;
  fStack000000000000009c = fStack00000000000000dc;
  fStack00000000000000a0 = fStack00000000000000d8;
  fStack0000000000000100 = 0.0;
  fStack000000000000008c = 0.0;
  fStack0000000000000040 = 0.0;
  fStack00000000000000a8 = 0.0;
  fStack0000000000000038 = 0.0;
  uStack0000000000000074 = uStack00000000000000c0;
  fStack0000000000000078 = fStack00000000000000d8;
  uStack0000000000000098 = uStack00000000000000c0;
  uVar13 = 1;
  uVar37 = 0;
LAB_03554e78:
  uVar8 = uVar13 - 1;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x50), lVar19 == 0)) goto LAB_035574b8;
  lVar29 = (long)(int)uVar8;
  lVar21 = unaff_x23 + lVar29 * 0x178;
  uVar2 = *(uint *)(lVar21 + 100);
  if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_035575f4;
  lVar26 = (long)(int)uVar2;
  lVar19 = lVar19 + lVar26 * 0x5c;
  lVar22 = *(long *)(lVar21 + 0x38);
  uVar4 = *(ushort *)(lVar21 + 0x20);
  uVar6 = *(uint *)(lVar19 + 0x3c);
  uVar31 = *(uint *)(lVar19 + 0x68);
  iVar3 = *(int *)(lVar19 + 0x20);
  iVar12 = *(int *)(lVar19 + 0x28);
  iVar11 = *(int *)(lVar19 + 0x2c);
  uVar7 = *(uint *)(lVar19 + 0x40);
  lVar21 = (long)(int)uVar7;
  fVar36 = *(float *)(lVar19 + 0x4c);
  fVar39 = *(float *)(lVar19 + 0x54);
  fVar43 = *(float *)(lVar19 + 0x58);
  fVar44 = *(float *)(lVar19 + 0x5c);
  fVar41 = *(float *)(lVar19 + 0x60);
  fVar42 = *(float *)(lVar19 + 0x6c);
  fVar46 = *(float *)(lVar19 + 0x70);
  fVar45 = *(float *)(lVar19 + 0x74);
  fVar40 = *(float *)(lVar19 + 0x78);
  uVar25 = (uint)uVar4;
  if ((int)uVar31 < 9) {
    switch(uVar31) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar41 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar43;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar41 + fVar44 * 0.5) - fVar43 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar44 + fVar41) - fVar43;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar44 + fVar41;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar31 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar4 < 0xad) {
      if ((uVar4 != 3) && (uVar4 != 10)) {
LAB_03554fac:
        if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_035575f4;
        uVar5 = *(undefined2 *)(unaff_x23 + (long)(int)uVar6 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b8cc4(uVar5,0);
        if ((uVar15 & 1) == 0) {
          bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar43 <= fVar44) && (!bVar1 && uVar31 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar41;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar44 + fVar41;
          }
          goto LAB_03555088;
        }
        if (((uVar13 == 1) || (uVar2 != uVar37)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar41;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar44 + fVar41;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000028 = FUN_026b97f8(uVar25,0);
          in_stack_000000e8 = 0;
        }
        else {
          cVar17 = (char)unaff_x19[0x1e];
          fVar41 = -fVar43;
          if (cVar17 != '\0') {
            fVar41 = fVar43;
          }
          if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_035575f4;
          iVar11 = (int)*(char *)(unaff_x23 + (long)(int)uVar6 * 0x178 + 0x194) +
                   (-iVar3 - (uStack0000000000000028 & 1)) + iVar11 + -1;
          if (iVar11 < 1) {
            fVar43 = 1.0;
            iVar11 = 1;
          }
          else {
            fVar43 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar25 == 9) {
LAB_03556e74:
            fVar43 = 1.0 - fVar43;
          }
          else {
            if (uVar25 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar15 = FUN_026b97f8(uVar25,0);
              cVar17 = (char)unaff_x19[0x1e];
              if ((uVar15 & 1) != 0) goto LAB_03556e74;
            }
            iVar11 = (iVar3 - (~uStack0000000000000028 & 1)) + iVar12;
          }
          fVar43 = ((fVar44 + fVar41) * fVar43) / (float)iVar11;
          if (cVar17 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar43;
            in_stack_000000e8 =
                 CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                          (float)in_stack_000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar43;
          }
        }
      }
    }
    else if (((uVar4 != 0xad) && (uVar4 != 0x200b)) && (uVar4 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar31 == 0x20) {
    fVar43 = fVar42 + fVar45;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar31 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
  if (uVar31 <= uVar8) goto LAB_035575f4;
  lVar19 = unaff_x23 + lVar29 * 0x178;
  fVar44 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar43 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar41 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar19 + 0x194) == '\0') goto LAB_03555938;
  iVar12 = *(int *)(unaff_x23 + lVar29 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_0355574c;
  fVar32 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar18 = unaff_x23 + lVar29 * 0x178;
    *(undefined4 *)(lVar18 + 0x84) = 0;
    *(undefined4 *)(lVar18 + 0xac) = 0;
    *(undefined4 *)(lVar18 + 0xd4) = 0x3f800000;
    fVar32 = 1.0;
    break;
  case 1:
    fVar40 = *(float *)(unaff_x23 + lVar29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar18 = unaff_x23 + lVar29 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar40) - *(float *)(in_stack_00000080 + 0x230);
      fVar40 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar18 = unaff_x23 + lVar29 * 0x178;
    fVar45 = fVar45 - fVar42;
    *(float *)(lVar18 + 0x84) = fVar32 + (fVar40 - fVar42) / fVar45;
    *(float *)(lVar18 + 0xac) = fVar32 + (*(float *)(lVar18 + 0x98) - fVar42) / fVar45;
    *(float *)(lVar18 + 0xd4) = fVar32 + (*(float *)(lVar18 + 0xc0) - fVar42) / fVar45;
    fVar32 = fVar32 + (*(float *)(lVar18 + 0xe8) - fVar42) / fVar45;
    break;
  case 2:
    lVar18 = unaff_x23 + lVar29 * 0x178;
    fVar40 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar18 + 0x84) = fVar32 + fVar45 / fVar40;
    *(float *)(lVar18 + 0xac) =
         fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar18 + 0xd4) =
         fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar32 = fVar32 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar18 = unaff_x23 + lVar29 * 0x178;
      *(undefined4 *)(lVar18 + 0x88) = 0;
      *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar18 + 0xd8) = 0;
      *(undefined4 *)(lVar18 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar18 = unaff_x23 + lVar29 * 0x178;
      fVar40 = fVar40 - fVar46;
      fVar45 = fVar32 + (*(float *)(lVar18 + 0x74) - fVar46) / fVar40;
      fVar40 = fVar32 + (*(float *)(lVar18 + 0x9c) - fVar46) / fVar40;
      *(float *)(lVar18 + 0x88) = fVar45;
      *(float *)(lVar18 + 0xb0) = fVar40;
      *(float *)(lVar18 + 0xd8) = fVar45;
      *(float *)(lVar18 + 0x100) = fVar40;
      break;
    case 2:
      lVar18 = unaff_x23 + lVar29 * 0x178;
      fVar45 = fVar32 + (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar18 + 0x88) = fVar45;
      fVar40 = *(float *)(unaff_x19 + 0x9c);
      fVar42 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar18 + 0xd8) = fVar45;
      fVar45 = fVar32 + (*(float *)(lVar18 + 0x9c) - fVar40) / (fVar42 - fVar40);
      *(float *)(lVar18 + 0xb0) = fVar45;
      *(float *)(lVar18 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar31 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
    }
    if (uVar31 <= uVar8) goto LAB_035575f4;
    lVar18 = unaff_x23 + lVar29 * 0x178;
    fVar45 = *(float *)(lVar18 + 0x15c);
    fVar40 = (1.0 - (*(float *)(lVar18 + 0x88) + *(float *)(lVar18 + 0xb0)) * fVar45) * 0.5;
    fVar42 = fVar32 + *(float *)(lVar18 + 0x88) * fVar45 + fVar40;
    fVar32 = fVar32 + fVar40 + *(float *)(lVar18 + 0xb0) * fVar45;
    *(float *)(lVar18 + 0x84) = fVar42;
    *(float *)(lVar18 + 0xac) = fVar42;
    *(float *)(lVar18 + 0xd4) = fVar32;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(unaff_x23 + lVar29 * 0x178 + 0xfc) = fVar32;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar31 <= uVar8) goto LAB_035575f4;
    lVar18 = unaff_x23 + lVar29 * 0x178;
    *(undefined4 *)(lVar18 + 0x88) = 0;
    *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0x100) = 0;
    break;
  case 1:
    if (uVar8 < uVar31) {
      lVar18 = unaff_x23 + lVar29 * 0x178;
      fVar36 = fVar36 - fVar39;
      fVar32 = (*(float *)(lVar18 + 0x74) - fVar39) / fVar36;
      fVar36 = (*(float *)(lVar18 + 0x9c) - fVar39) / fVar36;
      *(float *)(lVar18 + 0x88) = fVar32;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar31 <= uVar8) goto LAB_035575f4;
    lVar18 = unaff_x23 + lVar29 * 0x178;
    fVar32 = (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar18 + 0x88) = fVar32;
    fVar36 = (*(float *)(lVar18 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar18 + 0xb0) = fVar36;
    *(float *)(lVar18 + 0xd8) = fVar36;
    *(float *)(lVar18 + 0x100) = fVar32;
    break;
  case 3:
    if (uVar31 <= uVar8) goto LAB_035575f4;
    lVar18 = unaff_x23 + lVar29 * 0x178;
    fVar36 = *(float *)(lVar18 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar18 + 0x84) + *(float *)(lVar18 + 0xd4)) / fVar36) * 0.5;
    fVar32 = *(float *)(lVar18 + 0x84) / fVar36 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar18 + 0xd4) / fVar36;
    *(float *)(lVar18 + 0x88) = fVar32;
    *(float *)(lVar18 + 0xb0) = fVar45;
    *(float *)(lVar18 + 0x100) = fVar32;
    *(float *)(lVar18 + 0xd8) = fVar45;
  }
  if (uVar31 <= uVar8) goto LAB_035575f4;
  lVar18 = unaff_x23 + lVar29 * 0x178;
  fVar32 = *(float *)(lVar18 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar18 + 0x5c) == '\0') && ((*(byte *)(unaff_x23 + lVar29 * 0x178 + 400) & 1) != 0)
     ) {
    fVar32 = -fVar32;
  }
  fVar45 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar45 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar45 = fStack000000000000002c, in_stack_00000058 == 0)) {
    fVar32 = fVar45 * fVar32;
  }
  lVar18 = unaff_x23 + lVar29 * 0x178;
  fVar36 = *(float *)(lVar18 + 0x88);
  fVar40 = *(float *)(lVar18 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar40 != INFINITY) {
    fVar45 = (float)(int)fVar40;
  }
  fVar42 = *(float *)(lVar18 + 0xd4);
  fVar46 = *(float *)(lVar18 + 0xd8);
  fVar39 = -2.1474836e+09;
  if (fVar36 != INFINITY) {
    fVar39 = (float)(int)fVar36;
  }
  uVar33 = FUN_03591d3c(fVar40 - fVar45,fVar36 - fVar39);
  *(undefined4 *)(lVar18 + 0x84) = uVar33;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_035575f4;
  fVar46 = fVar46 - fVar39;
  *(float *)(lVar18 + 0x88) = fVar32;
  uVar33 = FUN_03591d3c(fVar40 - fVar45,fVar46);
  *(undefined4 *)(unaff_x23 + lVar29 * 0x178 + 0xac) = uVar33;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_035575f4;
  fVar42 = fVar42 - fVar45;
  *(float *)(unaff_x23 + lVar29 * 0x178 + 0xb0) = fVar32;
  fVar45 = (float)FUN_03591d3c(fVar42,fVar46);
  *(float *)(lVar18 + 0xd4) = fVar45;
  if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_035575f4;
  *(float *)(lVar18 + 0xd8) = fVar32;
  uVar33 = FUN_03591d3c(fVar42,fVar36 - fVar39);
  *(undefined4 *)(unaff_x23 + lVar29 * 0x178 + 0xfc) = uVar33;
  uVar31 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
  if (uVar31 <= uVar8) goto LAB_035575f4;
  *(float *)(unaff_x23 + lVar29 * 0x178 + 0x100) = fVar32;
LAB_0355574c:
  if (((int)uVar8 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar31 <= uVar8) goto LAB_035575f4;
      lVar19 = unaff_x23 + lVar29 * 0x178;
      *(ulong *)(lVar19 + 0x70) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar19 + 0x70));
      *(float *)(lVar19 + 0x78) = fVar41 + *(float *)(lVar19 + 0x78);
      *(ulong *)(lVar19 + 0x98) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar19 + 0x98));
      *(float *)(lVar19 + 0xa0) = fVar41 + *(float *)(lVar19 + 0xa0);
      *(ulong *)(lVar19 + 0xc0) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar19 + 0xc0));
      *(float *)(lVar19 + 200) = fVar41 + *(float *)(lVar19 + 200);
      *(ulong *)(lVar19 + 0xe8) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar19 + 0xe8));
      *(float *)(lVar19 + 0xf0) = fVar41 + *(float *)(lVar19 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar8 < uVar31) {
        if (*(int *)(unaff_x23 + lVar29 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar19 = unaff_x23 + lVar29 * 0x178;
          *(ulong *)(lVar19 + 0x70) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar19 + 0x70));
          *(float *)(lVar19 + 0x78) = fVar41 + *(float *)(lVar19 + 0x78);
          *(ulong *)(lVar19 + 0x98) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar19 + 0x98));
          *(float *)(lVar19 + 0xa0) = fVar41 + *(float *)(lVar19 + 0xa0);
          *(ulong *)(lVar19 + 0xc0) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar19 + 0xc0));
          *(float *)(lVar19 + 200) = fVar41 + *(float *)(lVar19 + 200);
          *(ulong *)(lVar19 + 0xe8) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar19 + 0xe8));
          *(float *)(lVar19 + 0xf0) = fVar41 + *(float *)(lVar19 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar31 <= uVar8) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar31 = *(uint *)(unaff_x23 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar18 = unaff_x23 + lVar29 * 0x178;
  *(undefined8 *)(lVar18 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar18 + 0x78) = uVar33;
  if (uVar31 <= uVar8) goto LAB_035575f4;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar18 = unaff_x23 + lVar29 * 0x178;
  *(undefined8 *)(lVar18 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar18 + 0xa0) = uVar33;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar18 + 200) = uVar33;
  uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar18 + 0xf0) = uVar33;
  *(undefined1 *)(lVar19 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar12 == 0) {
    pcVar20 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar20)();
  }
  else if (iVar12 == 1) {
    pcVar20 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
  lVar19 = lVar19 + lVar29 * 0x178;
  uVar34 = *(undefined8 *)(lVar19 + 0x11c);
  *(undefined8 *)(lVar19 + 0x11c) =
       CONCAT44(fVar43 + (float)((ulong)uVar34 >> 0x20),fVar44 + (float)uVar34);
  *(float *)(lVar19 + 0x124) = fVar41 + *(float *)(lVar19 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
  lVar19 = lVar19 + lVar29 * 0x178;
  *(ulong *)(lVar19 + 0x110) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0x110) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar19 + 0x110));
  *(float *)(lVar19 + 0x118) = fVar41 + *(float *)(lVar19 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
  lVar19 = lVar19 + lVar29 * 0x178;
  *(ulong *)(lVar19 + 0x128) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar19 + 0x128));
  *(float *)(lVar19 + 0x130) = fVar41 + *(float *)(lVar19 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
  lVar19 = lVar19 + lVar29 * 0x178;
  *(float *)(lVar19 + 0x134) = fVar44 + *(float *)(lVar19 + 0x134);
  *(ulong *)(lVar19 + 0x138) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar19 + 0x138) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar19 + 0x138));
  lVar19 = *in_stack_00000170;
  if ((lVar19 == 0) || (lVar18 = *(long *)(lVar19 + 0x38), lVar18 == 0)) goto LAB_035574b8;
  uVar31 = *(uint *)(lVar18 + 0x18);
  if (uVar31 <= uVar8) goto LAB_035575f4;
  lVar23 = lVar18 + lVar29 * 0x178;
  uVar15 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar23 + 0x140) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar23 + 0x140));
  fVar45 = fVar43 + *(float *)(lVar23 + 0x150);
  uVar35 = (ulong)(uint)fVar45;
  uVar38 = CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0x148) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar23 + 0x148));
  *(float *)(lVar23 + 0x150) = fVar45;
  *(ulong *)(lVar23 + 0x140) = uVar15;
  *(ulong *)(lVar23 + 0x148) = uVar38;
  if (uVar2 == uVar37) {
    uVar37 = *unaff_x20 - 1;
    if (uVar8 == uVar37) goto LAB_03555b44;
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x50);
    if (lVar19 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar19 + 0x18) <= uVar37) goto LAB_035575f4;
    lVar23 = (long)(int)uVar37;
    lVar24 = lVar19 + lVar23 * 0x5c;
    uVar38 = (ulong)(uint)*(float *)(lVar24 + 0x58);
    fVar45 = fVar43 + *(float *)(lVar24 + 0x54);
    uVar15 = (ulong)(uint)fVar45;
    fVar36 = fVar44 + *(float *)(lVar24 + 0x58);
    uVar35 = (ulong)(uint)fVar36;
    *(ulong *)(lVar24 + 0x4c) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar24 + 0x4c) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar24 + 0x4c));
    *(float *)(lVar24 + 0x54) = fVar45;
    *(float *)(lVar24 + 0x58) = fVar36;
    if (uVar31 <= *(uint *)(lVar24 + 0x34)) goto LAB_035575f4;
    uVar33 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar24 + 0x34) * 0x178 + 0x11c);
    lVar19 = lVar19 + lVar23 * 0x5c;
    *(float *)(lVar19 + 0x70) = fVar45;
    *(undefined4 *)(lVar19 + 0x6c) = uVar33;
    lVar19 = *in_stack_00000170;
    if ((lVar19 == 0) || (lVar18 = *(long *)(lVar19 + 0x50), lVar18 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar37) goto LAB_035575f4;
    lVar19 = *(long *)(lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_035574b8;
    uVar37 = *(uint *)(lVar18 + lVar23 * 0x5c + 0x40);
    if (*(uint *)(lVar19 + 0x18) <= uVar37) goto LAB_035575f4;
    lVar18 = lVar18 + lVar23 * 0x5c;
    *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar19 + (long)(int)uVar37 * 0x178 + 0x128);
    *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    uVar37 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar8 == uVar37) {
      lVar19 = *in_stack_00000170;
      if ((lVar19 == 0) || (lVar18 = *(long *)(lVar19 + 0x50), lVar18 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar23 = lVar18 + lVar26 * 0x5c;
      uVar38 = (ulong)(uint)*(float *)(lVar23 + 0x58);
      uVar15 = CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar23 + 0x4c) >> 0x20),
                        fVar43 + (float)*(undefined8 *)(lVar23 + 0x4c));
      fVar45 = fVar43 + *(float *)(lVar23 + 0x54);
      fVar44 = fVar44 + *(float *)(lVar23 + 0x58);
      uVar35 = (ulong)(uint)fVar44;
      *(ulong *)(lVar23 + 0x4c) = uVar15;
      *(float *)(lVar23 + 0x54) = fVar45;
      *(float *)(lVar23 + 0x58) = fVar44;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar23 + 0x34)) goto LAB_035575f4;
      uVar33 = *(undefined4 *)(lVar19 + (long)(int)*(uint *)(lVar23 + 0x34) * 0x178 + 0x11c);
      lVar18 = lVar18 + lVar26 * 0x5c;
      *(float *)(lVar18 + 0x70) = fVar45;
      *(undefined4 *)(lVar18 + 0x6c) = uVar33;
      lVar19 = *in_stack_00000170;
      if ((lVar19 == 0) || (lVar18 = *(long *)(lVar19 + 0x50), lVar18 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_035574b8;
      uVar37 = *(uint *)(lVar18 + lVar26 * 0x5c + 0x40);
      if (*(uint *)(lVar19 + 0x18) <= uVar37) goto LAB_035575f4;
      lVar18 = lVar18 + lVar26 * 0x5c;
      *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar19 + (long)(int)uVar37 * 0x178 + 0x128);
      *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar14 = FUN_026b82c4(uVar25,0);
  if (((((uVar14 & 1) == 0) && (1 < uVar25 - 0x2010)) && (uVar25 != 0xad)) && (uVar25 != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (uVar13 != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b81f8(uVar25,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b63d8(uVar25,0);
        if (((uVar25 != 0x200b) && ((uVar14 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    else if (((uVar13 != 1) && ((int)uVar8 < (int)(*(uint *)(unaff_x23 + 0x18) - 1))) &&
            (((int)uVar8 < *unaff_x20 && ((uVar25 == 0x2019 || (uVar25 == 0x27)))))) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13 - 2) goto LAB_035575f4;
      uVar5 = *(undefined2 *)(unaff_x23 + lVar30 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b82c4(uVar5,0);
      if ((uVar14 & 1) != 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_035575f4;
        uVar5 = *(undefined2 *)(unaff_x23 + lVar30 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b82c4(uVar5,0);
        if ((uVar14 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (uVar8 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b82c4(uVar25,0);
      iVar12 = iStack0000000000000128;
      if ((uVar14 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar12 = uVar13 - 2;
    }
    lVar19 = *in_stack_00000170;
    if (lVar19 == 0) goto LAB_035574b8;
    lVar18 = *(long *)(lVar19 + 0x40);
    if (lVar18 == 0) goto LAB_035574b8;
    uVar37 = *(uint *)(lVar19 + 0x24);
    iVar11 = *(int *)(lVar18 + 0x18);
    if (iVar11 < (int)(uVar37 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar19 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar19 = *in_stack_00000170;
      if (lVar19 == 0) goto LAB_035574b8;
    }
    lVar19 = *(long *)(lVar19 + 0x40);
    if (lVar19 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar19 + 0x18) <= uVar37) goto LAB_035575f4;
    lVar19 = lVar19 + (long)(int)uVar37 * 0x18;
    *(long **)(lVar19 + 0x20) = unaff_x19;
    *(uint *)(lVar19 + 0x28) = in_stack_00000158;
    *(int *)(lVar19 + 0x2c) = iVar12;
    *(uint *)(lVar19 + 0x30) = (iVar12 - in_stack_00000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar19 = unaff_x19[0x6d];
    if (lVar19 == 0) goto LAB_035574b8;
    lVar18 = *(long *)(lVar19 + 0x50);
    *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar18 = lVar18 + lVar26 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      in_stack_00000158 = uVar8;
    }
    if (uVar8 == *unaff_x20 - 1U) {
      lVar19 = *in_stack_00000170;
      if (lVar19 == 0) goto LAB_035574b8;
      lVar18 = *(long *)(lVar19 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      uVar37 = *(uint *)(lVar19 + 0x24);
      iVar12 = *(int *)(lVar18 + 0x18);
      if (iVar12 < (int)(uVar37 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar19 + 0x40),iVar12 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar19 = *in_stack_00000170;
        if (lVar19 == 0) goto LAB_035574b8;
      }
      lVar19 = *(long *)(lVar19 + 0x40);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar37) goto LAB_035575f4;
      lVar19 = lVar19 + (long)(int)uVar37 * 0x18;
      *(long **)(lVar19 + 0x20) = unaff_x19;
      *(uint *)(lVar19 + 0x28) = in_stack_00000158;
      *(uint *)(lVar19 + 0x2c) = uVar8;
      *(uint *)(lVar19 + 0x30) = uVar13 - in_stack_00000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar19 = unaff_x19[0x6d];
      if (lVar19 == 0) goto LAB_035574b8;
      lVar18 = *(long *)(lVar19 + 0x50);
      *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar18 = lVar18 + lVar26 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  uVar37 = *(uint *)(lVar19 + 0x18);
  if (uVar37 <= uVar8) goto LAB_035575f4;
  if ((*(byte *)(lVar19 + lVar29 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar37 <= uVar13 - 2) goto LAB_035575f4;
      lVar26 = *unaff_x19;
      uVar37 = *(uint *)(lVar19 + lVar30 + -0x330);
      uVar33 = *(undefined4 *)(lVar19 + lVar30 + -0x2f8);
LAB_035562ec:
      pcVar20 = *(code **)(lVar26 + 0x8d8);
LAB_035562f4:
      uVar38 = (ulong)uVar37;
      uVar15 = (ulong)(uint)fStack0000000000000070;
      uVar35 = (ulong)uStack0000000000000074;
      (*pcVar20)(fStack0000000000000078,uVar15,uVar35,uVar38,fStack0000000000000104,0,
                 fStack000000000000008c,uVar33);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = *(long *)puVar9;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      fVar47 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar19 = lVar19 + lVar29 * 0x178;
    iVar12 = *(int *)(lVar19 + 0x68);
    *(undefined4 *)(lVar19 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar12 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b63d8(uVar25,0);
    if ((uVar25 != 0x200b) && ((uVar14 & 1) == 0)) {
      lVar19 = *in_stack_00000170;
      if ((lVar19 == 0) || (lVar26 = *(long *)(lVar19 + 0x38), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
      fVar45 = *(float *)(lVar26 + lVar29 * 0x178 + 0x160);
      if (fVar47 <= fVar45) {
        fVar47 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar32)) {
        fStack0000000000000100 = ABS(fVar32);
      }
      if (iVar12 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *in_stack_00000170;
          if (lVar19 == 0) goto LAB_035574b8;
          lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar26 + 0x15a8);
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar36 = *(float *)(lVar19 + lVar29 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar36 = fVar36 + fVar47 * fVar45;
      if (fVar36 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar36;
      }
      uVar15 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar12;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar8 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(uVar25,0);
        if ((uVar14 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar19 = lVar19 + lVar29 * 0x178;
      fStack000000000000008c = *(float *)(lVar19 + 0x160);
      fStack0000000000000078 = *(float *)(lVar19 + 0x11c);
      uVar35 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar47 != 0.0;
      fVar45 = fStack000000000000008c;
      if (bVar10) {
        fVar45 = fVar47;
      }
      fVar47 = fVar45;
      in_stack_00000090 = *(undefined4 *)(lVar19 + 0x168);
      uStack0000000000000074 = 0;
      fVar45 = fVar32;
      if (bVar10) {
        fVar45 = fStack0000000000000100;
      }
      uVar15 = (ulong)(uint)fVar45;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0))
      {
        if (uVar8 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + lVar29 * 0x178;
          lVar26 = *unaff_x19;
          uVar37 = *(uint *)(lVar19 + 0x128);
          uVar33 = *(undefined4 *)(lVar19 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar8 == uVar6) || ((int)uVar7 <= (int)uVar8)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b63d8(uVar25,0);
      if ((*in_stack_00000170 != 0) && (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0))
      {
        lVar26 = lVar29;
        uVar37 = uVar8;
        if (uVar25 == 0x200b || (uVar15 & 1) != 0) {
          lVar26 = lVar21;
          uVar37 = uVar7;
        }
        if (uVar37 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + lVar26 * 0x178;
          uVar37 = *(uint *)(lVar19 + 0x128);
          uVar33 = *(undefined4 *)(lVar19 + 0x160);
          pcVar20 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0))
      {
        uVar37 = *(uint *)(lVar19 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar8 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_035575f4;
      uVar14 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar19 + lVar30),0);
      if ((uVar14 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0)) {
          if (uVar8 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + lVar29 * 0x178;
            uVar38 = (ulong)*(uint *)(lVar19 + 0x128);
            uVar35 = (ulong)uStack0000000000000074;
            uVar15 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar15,uVar35,uVar38,fStack0000000000000104,0,
                       fStack000000000000008c,*(undefined4 *)(lVar19 + 0x160));
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar19 = *(long *)puVar9;
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
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
  if (lVar22 == 0) goto LAB_035574b8;
  uVar37 = *(uint *)(lVar19 + lVar29 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar22 + 0x50,0);
  if ((uVar37 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar13 - 2) goto LAB_035575f4;
      uVar37 = *(uint *)(lVar19 + lVar30 + -0x330);
      fVar43 = *(float *)(lVar19 + lVar30 + -0x30c);
      pcVar20 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar38 = (ulong)uVar37;
      uVar15 = (ulong)(uint)fStack000000000000009c;
      uVar35 = (ulong)uStack0000000000000098;
      (*pcVar20)(fStack00000000000000a0,uVar15,uVar35,uVar38,
                 fStack00000000000000a8 * fVar45 + fVar43,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar19 = *in_stack_00000170;
    if ((lVar19 == 0) || (lVar26 = *(long *)(lVar19 + 0x38), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar8) goto LAB_035575f4;
    *(undefined4 *)(lVar26 + lVar29 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) ||
       ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (uVar8 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(uVar25,0);
        if ((uVar14 & 1) != 0) goto LAB_035564e8;
        lVar19 = *in_stack_00000170;
        if (lVar19 == 0) goto LAB_035574b8;
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_035575f4;
      lVar19 = lVar19 + lVar29 * 0x178;
      fStack0000000000000040 = *(float *)(lVar19 + 0x60);
      fStack0000000000000038 = *(float *)(lVar19 + 0x14c);
      uVar15 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar19 + 0x11c);
      uVar35 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar19 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000038;
      uStack0000000000000098 = 0;
    }
    iVar12 = *unaff_x20;
    if (iVar12 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0))
      {
        if (uVar8 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + lVar29 * 0x178;
          lVar21 = *unaff_x19;
          uVar37 = *(uint *)(lVar19 + 0x128);
          fVar43 = *(float *)(lVar19 + 0x14c);
LAB_03556654:
          pcVar20 = *(code **)(lVar21 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar8 == uVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b63d8(uVar25,0);
      if ((*in_stack_00000170 != 0) && (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0))
      {
        uVar37 = *(uint *)(lVar19 + 0x18);
        if (uVar25 == 0x200b || (uVar15 & 1) != 0) {
          if (uVar37 <= uVar7) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar21 = lVar29;
          if (uVar37 <= uVar8) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar19 = lVar19 + lVar21 * 0x178;
        fVar43 = *(float *)(lVar19 + 0x14c);
        uVar37 = *(uint *)(lVar19 + 0x128);
        pcVar20 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar8 < iVar12) {
      lVar19 = *in_stack_00000170;
      if ((lVar19 != 0) && (lVar26 = *(long *)(lVar19 + 0x38), lVar26 != 0)) {
        if (uVar13 < *(uint *)(lVar26 + 0x18)) {
          if (*(float *)(lVar26 + lVar30 + -0x108) == fStack0000000000000040) {
            fVar36 = *(float *)(lVar26 + lVar30 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = (ulong)(uint)fStack0000000000000038;
            uVar14 = FUN_03567bac(fVar43 + fVar36,uVar15,0);
            if ((uVar14 & 1) != 0) {
              iVar12 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar19 = *in_stack_00000170;
            if (lVar19 == 0) goto LAB_035574b8;
          }
          lVar19 = *(long *)(lVar19 + 0x38);
          if (lVar19 != 0) {
            uVar37 = *(uint *)(lVar19 + 0x18);
            if ((int)uVar8 <= (int)uVar7) goto FUN_035568e8;
            if (uVar7 < uVar37) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar8 < iVar12) {
      iVar12 = FUN_036d3364(lVar22,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar19 = *(long *)(unaff_x23 + lVar30 + -0x130);
      if (lVar19 == 0) goto LAB_035574b8;
      iVar11 = FUN_036d3364(lVar19,0);
      if (iVar12 != iVar11) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0))
      {
        if (uVar13 - 2 < *(uint *)(lVar19 + 0x18)) {
          lVar21 = *unaff_x19;
          uVar37 = *(uint *)(lVar19 + lVar30 + -0x330);
          fVar43 = *(float *)(lVar19 + lVar30 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  uVar37 = (uint)*(undefined8 *)(lVar19 + 0x18);
  if (uVar37 <= uVar8) goto LAB_035575f4;
  if ((*(byte *)(lVar19 + lVar29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((in_stack_00000110._4_4_ & 1) != 0) {
      uVar35 = (ulong)uStack00000000000000c0;
      uVar15 = (ulong)(uint)fStack00000000000000dc;
      uVar38 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar15,uVar35,uVar38,fStack00000000000000d0,uVar35);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar8) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar19 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((in_stack_00000110._4_4_ & 1) == 0) {
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar8)) || (!bVar1))
      goto LAB_035569b4;
      if (uVar8 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b97f8(uVar25,0);
        if ((uVar14 & 1) != 0) goto LAB_035569b4;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar21 = *(long *)puVar9;
      }
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      uVar37 = (uint)*(undefined8 *)(lVar19 + 0x18);
      if (uVar37 <= uVar8) goto LAB_035575f4;
      lVar21 = *(long *)(lVar21 + 0xb8);
      lVar22 = lVar19 + lVar29 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar22 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar22 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar21 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar21 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar22 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar21 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar21 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar37 <= uVar8) goto LAB_035575f4;
    lVar19 = lVar19 + lVar29 * 0x178;
    fVar45 = *(float *)(lVar19 + 0x128);
    fVar39 = *(float *)(lVar19 + 0x188);
    uVar27 = *(undefined8 *)(lVar19 + 0x17c);
    fVar42 = *(float *)(lVar19 + 0x184);
    uVar34 = *(undefined8 *)(lVar19 + 0x184);
    fVar41 = *(float *)(lVar19 + 0x18c);
    fVar43 = *(float *)(lVar19 + 0x11c);
    fVar40 = *(float *)(lVar19 + 0x148);
    fVar36 = *(float *)(lVar19 + 0x150);
    in_stack_00000178 = uVar27;
    fStack0000000000000180 = fVar42;
    fStack0000000000000184 = fVar39;
    in_stack_00000188 = fVar41;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar15 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar19 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar15 & 1) == 0) {
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar19);
      }
      fVar45 = fVar45 + (float)in_stack_000017b8;
      uVar35 = (ulong)(uint)fVar45;
      fVar43 = fVar43 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar36 = fVar36 - in_stack_000017c0;
      uVar15 = (ulong)(uint)fVar36;
      fVar40 = fVar40 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar38 = (ulong)(uint)fVar40;
      if (fVar43 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar43;
      }
      if (fVar36 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar36;
      }
      if (fStack00000000000000c8 <= fVar45) {
        fStack00000000000000c8 = fVar45;
      }
      if (fStack00000000000000d0 <= fVar40) {
        fStack00000000000000d0 = fVar40;
      }
    }
    else {
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar19);
      }
      fVar43 = (fVar43 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar38 = (ulong)(uint)fVar43;
      if (fVar36 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar36;
      }
      uVar15 = (ulong)(uint)fStack00000000000000dc;
      uVar35 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar40) {
        fStack00000000000000d0 = fVar40;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar15,uVar35,uVar38,fStack00000000000000d0,uVar35);
      fStack00000000000000dc = fVar36 - fVar41;
      fStack00000000000000c8 = fVar45 + fVar42;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar40 + fVar39;
      fStack00000000000000d8 = fVar43;
      in_stack_000017b0 = uVar27;
      in_stack_000017b8 = uVar34;
      in_stack_000017c0 = fVar41;
    }
    if (((*unaff_x20 == 1) || (uVar8 == uVar6)) || (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
      uVar35 = (ulong)uStack00000000000000c0;
      uVar15 = (ulong)(uint)fStack00000000000000dc;
      uVar38 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar15,uVar35,uVar38,fStack00000000000000d0,uVar35);
      in_stack_00000110._4_4_ = 0;
    }
    else {
      in_stack_00000110._4_4_ = 1;
    }
  }
  puVar9 = OVRPlugin_Media_TypeInfo;
  iVar12 = *unaff_x20;
  lVar30 = lVar30 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  bVar1 = iVar12 <= (int)uVar13;
  unaff_x28 = in_stack_00000170;
  uVar13 = uVar13 + 1;
  uVar37 = uVar2;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar30 = *in_stack_00000170;
  if (lVar30 != 0) {
    *(int *)(lVar30 + 0x18) = iVar12;
    lVar19 = unaff_x19[0xd4];
    *(uint *)(lVar30 + 0x2c) = uVar2 + 1;
    if (iVar12 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar30 + 0x1c) = (int)lVar19;
    *(int *)(lVar30 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar30 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar14 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar14 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar30 = unaff_x19[0xdf];
    if (lVar30 != 0) {
      (**(code **)(lVar30 + 0x18))
                (*(undefined8 *)(lVar30 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar30 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar12 != 0x19) {
      lVar30 = unaff_x19[0xe5];
      if (lVar30 == 0) goto LAB_035574b8;
      uVar13 = FUN_03911ee4(lVar30,0);
      FUN_03911f20(lVar30,uVar13 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x60), lVar30 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar30 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
        if (*(int *)(lVar30 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
            if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
                if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
                    if (*(int *)(lVar30 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar34 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar13 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar30 = *in_stack_00000170;
                              if (lVar30 != 0) {
                                lVar21 = 0;
                                lVar19 = 0;
                                do {
                                  uVar14 = lVar19 + 1;
                                  if ((long)*(int *)(lVar30 + 0x34) <= (long)uVar14)
                                  goto LAB_03554724;
                                  lVar30 = *(long *)(lVar30 + 0x60);
                                  if (lVar30 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                  FUN_03596a20(lVar30 + lVar21 + 0x70,0);
                                  lVar30 = unaff_x19[0xe1];
                                  if (lVar30 == 0) break;
                                  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                  uVar27 = *(undefined8 *)(lVar30 + lVar19 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar16 = FUN_036d35a8(uVar27,0,0);
                                  if ((uVar16 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar30 = *(long *)(*in_stack_00000170 + 0x60), lVar30 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                      FUN_03596b20(lVar30 + lVar21 + 0x70,1,0);
                                    }
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar29 = *(long *)(*in_stack_00000170 + 0x60), lVar29 == 0))
                                    break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a460c(lVar30,*(undefined8 *)(lVar29 + lVar21 + 0x80),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar29 = *(long *)(*in_stack_00000170 + 0x60), lVar29 == 0))
                                    break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a4810(lVar30,*(undefined8 *)(lVar29 + lVar21 + 0x98),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar29 = *(long *)(*in_stack_00000170 + 0x60), lVar29 == 0))
                                    break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a48bc(lVar30,*(undefined8 *)(lVar29 + lVar21 + 0xa0),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = UnityEngine_Material__GetColorArray(lVar30,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar29 = *(long *)(*in_stack_00000170 + 0x60), lVar29 == 0))
                                    break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
                                    if (lVar30 == 0) break;
                                    FUN_036a4e24(lVar30,*(undefined8 *)(lVar29 + lVar21 + 0xa8),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = UnityEngine_Material__GetColorArray(lVar30,0),
                                       lVar30 == 0)) break;
                                    FUN_036aa280(lVar30,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_037b514c(lVar30,0);
                                    lVar29 = unaff_x19[0xe1];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar29 = *(long *)(lVar29 + lVar19 * 8 + 0x28);
                                    if ((lVar29 == 0) ||
                                       (uVar27 = UnityEngine_Material__GetColorArray(lVar29,0),
                                       lVar30 == 0)) break;
                                    FUN_0390f3a4(lVar30,uVar27,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_037b514c(lVar30,0), lVar30 == 0)) break;
                                    FUN_0390eec8(uVar34,uVar15,uVar35,uVar38,lVar30,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    lVar30 = *(long *)(lVar30 + lVar19 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_037b514c(lVar30,0), lVar30 == 0)) break;
                                    FUN_0390ed78(lVar30,uVar13 & 1,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
                                    plVar28 = *(long **)(lVar30 + lVar19 * 8 + 0x28);
                                    uVar37 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar28 == (long *)0x0) break;
                                    (**(code **)(*plVar28 + 0x2c8))
                                              (plVar28,uVar37 & 1,*(undefined8 *)(*plVar28 + 0x2d0))
                                    ;
                                  }
                                  lVar30 = *in_stack_00000170;
                                  lVar19 = lVar19 + 1;
                                  lVar21 = lVar21 + 0x50;
                                } while (lVar30 != 0);
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


