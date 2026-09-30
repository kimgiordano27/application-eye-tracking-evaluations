/*
FUNCTION_NAME: UnityEngine.Animator$$SetTarget
ENTRY_POINT: 03556cd4
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


void UnityEngine_Animator__SetTarget
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar27;
  long *plVar28;
  long unaff_x22;
  long unaff_x23;
  long lVar29;
  uint unaff_w24;
  long lVar30;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  float fVar34;
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
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  uint in_stack_00000158;
  uint in_stack_00000160;
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
  
code_r0x03556cd4:
  uVar14 = (ulong)(uint)fStack00000000000000dc;
  uVar35 = (ulong)(uint)in_stack_000000c8;
  (**(code **)(param_1 + 0x8e8))
            (fStack00000000000000d8,uVar14,param_4,uVar35,fStack00000000000000d0,param_4);
  bVar7 = false;
  uVar13 = unaff_w24;
  uVar12 = in_stack_00000160;
LAB_03556d04:
  puVar8 = OVRPlugin_Media_TypeInfo;
  iVar11 = *unaff_x20;
  unaff_w24 = uVar13 + 1;
  unaff_x27 = unaff_x27 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  if (iVar11 <= (int)uVar13) {
    lVar22 = *unaff_x28;
    if (lVar22 == 0) goto LAB_035574b8;
    *(int *)(lVar22 + 0x18) = iVar11;
    lVar30 = unaff_x19[0xd4];
    *(uint *)(lVar22 + 0x2c) = uVar12 + 1;
    if (iVar11 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar30;
    *(int *)(lVar22 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar15 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar15 & 1) == 0)) goto LAB_03554724;
    lVar22 = unaff_x19[0xdf];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*unaff_x28,*(undefined8 *)(lVar22 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar11 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar11 != 0x19) {
      lVar22 = unaff_x19[0xe5];
      if (lVar22 == 0) goto LAB_035574b8;
      uVar12 = FUN_03911ee4(lVar22,0);
      FUN_03911f20(lVar22,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x30),0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x48),0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x50),0);
    if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x60), lVar22 == 0))
    goto LAB_035574b8;
    if (*(int *)(lVar22 + 0x18) == 0) goto LAB_035575f4;
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar22 + 0x58),0);
    if (unaff_x19[0x74] == 0) goto LAB_035574b8;
    FUN_036aa280(unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar33 = FUN_0390ef60(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
    lVar22 = *unaff_x28;
    if (lVar22 == 0) goto LAB_035574b8;
    lVar29 = 0;
    lVar30 = 0;
    goto LAB_03557110;
  }
  if (*(uint *)(unaff_x23 + 0x18) <= uVar13) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar22 = *(long *)(*unaff_x28 + 0x50), lVar22 == 0)) goto LAB_035574b8;
  lVar29 = (long)(int)uVar13;
  lVar30 = unaff_x23 + lVar29 * unaff_x22;
  in_stack_00000160 = *(uint *)(lVar30 + 100);
  if (*(uint *)(lVar22 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
  lVar26 = (long)(int)in_stack_00000160;
  lVar22 = lVar22 + lVar26 * unaff_x29;
  lVar19 = *(long *)(lVar30 + 0x38);
  uVar3 = *(ushort *)(lVar30 + 0x20);
  uVar5 = *(uint *)(lVar22 + 0x3c);
  uVar20 = *(uint *)(lVar22 + 0x68);
  iVar2 = *(int *)(lVar22 + 0x20);
  iVar11 = *(int *)(lVar22 + 0x28);
  iVar10 = *(int *)(lVar22 + 0x2c);
  uVar6 = *(uint *)(lVar22 + 0x40);
  lVar30 = (long)(int)uVar6;
  fVar34 = *(float *)(lVar22 + 0x4c);
  fVar36 = *(float *)(lVar22 + 0x54);
  fVar40 = *(float *)(lVar22 + 0x58);
  fVar41 = *(float *)(lVar22 + 0x5c);
  fVar38 = *(float *)(lVar22 + 0x60);
  fVar39 = *(float *)(lVar22 + 0x6c);
  fVar43 = *(float *)(lVar22 + 0x70);
  fVar42 = *(float *)(lVar22 + 0x74);
  fVar37 = *(float *)(lVar22 + 0x78);
  uVar25 = (uint)uVar3;
  if ((int)uVar20 < 9) {
    switch(uVar20) {
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
  else if (uVar20 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
        if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8cc4(uVar4,0);
        if ((uVar14 & 1) == 0) {
          bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar40 <= fVar41) && (!bVar1 && uVar20 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar38;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar41 + fVar38;
          }
          goto LAB_03555088;
        }
        if (((unaff_w24 == 1) || (in_stack_00000160 != uVar12)) ||
           (uVar13 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar38;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar41 + fVar38;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000028 = FUN_026b97f8(uVar25,0);
          in_stack_000000e8 = 0;
        }
        else {
          cVar17 = (char)unaff_x19[0x1e];
          fVar38 = -fVar40;
          if (cVar17 != '\0') {
            fVar38 = fVar40;
          }
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
          iVar10 = (int)*(char *)(in_stack_000000f0 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000028 & 1)) + iVar10 + -1;
          if (iVar10 < 1) {
            fVar40 = 1.0;
            iVar10 = 1;
          }
          else {
            fVar40 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar25 == 9) {
LAB_03556e74:
            fVar40 = 1.0 - fVar40;
          }
          else {
            if (uVar25 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b97f8(uVar25,0);
              cVar17 = (char)unaff_x19[0x1e];
              if ((uVar14 & 1) != 0) goto LAB_03556e74;
            }
            iVar10 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar11;
          }
          fVar40 = ((fVar41 + fVar38) * fVar40) / (float)iVar10;
          if (cVar17 == '\0') {
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
  else if (uVar20 == 0x20) {
    fVar40 = fVar39 + fVar42;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar20 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar20 <= uVar13) goto LAB_035575f4;
  lVar22 = in_stack_000000f0 + lVar29 * 0x178;
  fVar41 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar40 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar38 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar22 + 0x194) == '\0') goto LAB_03555938;
  iVar11 = *(int *)(in_stack_000000f0 + lVar29 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0355574c;
  fVar31 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar18 = in_stack_000000f0 + lVar29 * 0x178;
    *(undefined4 *)(lVar18 + 0x84) = 0;
    *(undefined4 *)(lVar18 + 0xac) = 0;
    *(undefined4 *)(lVar18 + 0xd4) = 0x3f800000;
    fVar31 = 1.0;
    break;
  case 1:
    fVar37 = *(float *)(in_stack_000000f0 + lVar29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar18 = in_stack_000000f0 + lVar29 * 0x178;
      fVar42 = (in_stack_000000f8._4_4_ + fVar37) - *(float *)(in_stack_00000080 + 0x230);
      fVar37 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar18 = in_stack_000000f0 + lVar29 * 0x178;
    fVar42 = fVar42 - fVar39;
    *(float *)(lVar18 + 0x84) = fVar31 + (fVar37 - fVar39) / fVar42;
    *(float *)(lVar18 + 0xac) = fVar31 + (*(float *)(lVar18 + 0x98) - fVar39) / fVar42;
    *(float *)(lVar18 + 0xd4) = fVar31 + (*(float *)(lVar18 + 0xc0) - fVar39) / fVar42;
    fVar31 = fVar31 + (*(float *)(lVar18 + 0xe8) - fVar39) / fVar42;
    break;
  case 2:
    lVar18 = in_stack_000000f0 + lVar29 * 0x178;
    fVar37 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar42 = (in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar18 + 0x84) = fVar31 + fVar42 / fVar37;
    *(float *)(lVar18 + 0xac) =
         fVar31 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar18 + 0xd4) =
         fVar31 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar31 = fVar31 + ((in_stack_000000f8._4_4_ + *(float *)(lVar18 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar18 = in_stack_000000f0 + lVar29 * 0x178;
      *(undefined4 *)(lVar18 + 0x88) = 0;
      *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar18 + 0xd8) = 0;
      *(undefined4 *)(lVar18 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar18 = in_stack_000000f0 + lVar29 * 0x178;
      fVar37 = fVar37 - fVar43;
      fVar42 = fVar31 + (*(float *)(lVar18 + 0x74) - fVar43) / fVar37;
      fVar37 = fVar31 + (*(float *)(lVar18 + 0x9c) - fVar43) / fVar37;
      *(float *)(lVar18 + 0x88) = fVar42;
      *(float *)(lVar18 + 0xb0) = fVar37;
      *(float *)(lVar18 + 0xd8) = fVar42;
      *(float *)(lVar18 + 0x100) = fVar37;
      break;
    case 2:
      lVar18 = in_stack_000000f0 + lVar29 * 0x178;
      fVar42 = fVar31 + (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar18 + 0x88) = fVar42;
      fVar37 = *(float *)(unaff_x19 + 0x9c);
      fVar39 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar18 + 0xd8) = fVar42;
      fVar42 = fVar31 + (*(float *)(lVar18 + 0x9c) - fVar37) / (fVar39 - fVar37);
      *(float *)(lVar18 + 0xb0) = fVar42;
      *(float *)(lVar18 + 0x100) = fVar42;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar20 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar20 <= uVar13) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + lVar29 * 0x178;
    fVar42 = *(float *)(lVar18 + 0x15c);
    fVar37 = (1.0 - (*(float *)(lVar18 + 0x88) + *(float *)(lVar18 + 0xb0)) * fVar42) * 0.5;
    fVar39 = fVar31 + *(float *)(lVar18 + 0x88) * fVar42 + fVar37;
    fVar31 = fVar31 + fVar37 + *(float *)(lVar18 + 0xb0) * fVar42;
    *(float *)(lVar18 + 0x84) = fVar39;
    *(float *)(lVar18 + 0xac) = fVar39;
    *(float *)(lVar18 + 0xd4) = fVar31;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + lVar29 * 0x178 + 0xfc) = fVar31;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar20 <= uVar13) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + lVar29 * 0x178;
    *(undefined4 *)(lVar18 + 0x88) = 0;
    *(undefined4 *)(lVar18 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar18 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar20) {
      lVar18 = in_stack_000000f0 + lVar29 * 0x178;
      fVar34 = fVar34 - fVar36;
      fVar42 = (*(float *)(lVar18 + 0x74) - fVar36) / fVar34;
      fVar34 = (*(float *)(lVar18 + 0x9c) - fVar36) / fVar34;
      *(float *)(lVar18 + 0x88) = fVar42;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar20 <= uVar13) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + lVar29 * 0x178;
    fVar42 = (*(float *)(lVar18 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar18 + 0x88) = fVar42;
    fVar34 = (*(float *)(lVar18 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar18 + 0xb0) = fVar34;
    *(float *)(lVar18 + 0xd8) = fVar34;
    *(float *)(lVar18 + 0x100) = fVar42;
    break;
  case 3:
    if (uVar20 <= uVar13) goto LAB_035575f4;
    lVar18 = in_stack_000000f0 + lVar29 * 0x178;
    fVar37 = *(float *)(lVar18 + 0x15c);
    fVar34 = (1.0 - (*(float *)(lVar18 + 0x84) + *(float *)(lVar18 + 0xd4)) / fVar37) * 0.5;
    fVar42 = *(float *)(lVar18 + 0x84) / fVar37 + fVar34;
    fVar34 = fVar34 + *(float *)(lVar18 + 0xd4) / fVar37;
    *(float *)(lVar18 + 0x88) = fVar42;
    *(float *)(lVar18 + 0xb0) = fVar34;
    *(float *)(lVar18 + 0x100) = fVar42;
    *(float *)(lVar18 + 0xd8) = fVar34;
  }
  if (uVar20 <= uVar13) goto LAB_035575f4;
  lVar18 = in_stack_000000f0 + lVar29 * 0x178;
  unaff_s14 = *(float *)(lVar18 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar18 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + lVar29 * 0x178 + 400) & 1) != 0)) {
    unaff_s14 = -unaff_s14;
  }
  fVar42 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar42 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar42 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s14 = fVar42 * unaff_s14;
  }
  lVar18 = in_stack_000000f0 + lVar29 * 0x178;
  fVar34 = *(float *)(lVar18 + 0x88);
  fVar37 = *(float *)(lVar18 + 0x84);
  fVar42 = -2.1474836e+09;
  if (fVar37 != INFINITY) {
    fVar42 = (float)(int)fVar37;
  }
  fVar39 = *(float *)(lVar18 + 0xd4);
  fVar43 = *(float *)(lVar18 + 0xd8);
  fVar36 = -2.1474836e+09;
  if (fVar34 != INFINITY) {
    fVar36 = (float)(int)fVar34;
  }
  uVar32 = FUN_03591d3c(fVar37 - fVar42,fVar34 - fVar36);
  *(undefined4 *)(lVar18 + 0x84) = uVar32;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar43 = fVar43 - fVar36;
  *(float *)(lVar18 + 0x88) = unaff_s14;
  uVar32 = FUN_03591d3c(fVar37 - fVar42,fVar43);
  *(undefined4 *)(in_stack_000000f0 + lVar29 * 0x178 + 0xac) = uVar32;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar39 = fVar39 - fVar42;
  *(float *)(in_stack_000000f0 + lVar29 * 0x178 + 0xb0) = unaff_s14;
  fVar42 = (float)FUN_03591d3c(fVar39,fVar43);
  *(float *)(lVar18 + 0xd4) = fVar42;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar13) goto LAB_035575f4;
  *(float *)(lVar18 + 0xd8) = unaff_s14;
  uVar32 = FUN_03591d3c(fVar39,fVar34 - fVar36);
  *(undefined4 *)(in_stack_000000f0 + lVar29 * 0x178 + 0xfc) = uVar32;
  uVar20 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar20 <= uVar13) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + lVar29 * 0x178 + 0x100) = unaff_s14;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  if (((int)uVar13 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar20 <= uVar13) goto LAB_035575f4;
      lVar22 = in_stack_000000f0 + lVar29 * 0x178;
      *(ulong *)(lVar22 + 0x70) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x70) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar22 + 0x70));
      *(float *)(lVar22 + 0x78) = fVar38 + *(float *)(lVar22 + 0x78);
      *(ulong *)(lVar22 + 0x98) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x98) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar22 + 0x98));
      *(float *)(lVar22 + 0xa0) = fVar38 + *(float *)(lVar22 + 0xa0);
      *(ulong *)(lVar22 + 0xc0) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar22 + 0xc0));
      *(float *)(lVar22 + 200) = fVar38 + *(float *)(lVar22 + 200);
      *(ulong *)(lVar22 + 0xe8) =
           CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0xe8) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar22 + 0xe8));
      *(float *)(lVar22 + 0xf0) = fVar38 + *(float *)(lVar22 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar13 < uVar20) {
        if (*(int *)(in_stack_000000f0 + lVar29 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar22 = in_stack_000000f0 + lVar29 * 0x178;
          *(ulong *)(lVar22 + 0x70) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x70) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar22 + 0x70));
          *(float *)(lVar22 + 0x78) = fVar38 + *(float *)(lVar22 + 0x78);
          *(ulong *)(lVar22 + 0x98) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x98) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar22 + 0x98));
          *(float *)(lVar22 + 0xa0) = fVar38 + *(float *)(lVar22 + 0xa0);
          *(ulong *)(lVar22 + 0xc0) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar22 + 0xc0));
          *(float *)(lVar22 + 200) = fVar38 + *(float *)(lVar22 + 200);
          *(ulong *)(lVar22 + 0xe8) =
               CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0xe8) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar22 + 0xe8));
          *(float *)(lVar22 + 0xf0) = fVar38 + *(float *)(lVar22 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar20 <= uVar13) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar20 = *(uint *)(in_stack_000000f0 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar18 = in_stack_000000f0 + lVar29 * 0x178;
  *(undefined8 *)(lVar18 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar18 + 0x78) = uVar32;
  if (uVar20 <= uVar13) goto LAB_035575f4;
  uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar18 = in_stack_000000f0 + lVar29 * 0x178;
  *(undefined8 *)(lVar18 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar18 + 0xa0) = uVar32;
  uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar18 + 200) = uVar32;
  uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar18 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar18 + 0xf0) = uVar32;
  *(undefined1 *)(lVar22 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar11 == 0) {
    pcVar21 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar21)();
  }
  else if (iVar11 == 1) {
    pcVar21 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar22 = lVar22 + lVar29 * 0x178;
  uVar33 = *(undefined8 *)(lVar22 + 0x11c);
  *(undefined8 *)(lVar22 + 0x11c) =
       CONCAT44(fVar40 + (float)((ulong)uVar33 >> 0x20),fVar41 + (float)uVar33);
  *(float *)(lVar22 + 0x124) = fVar38 + *(float *)(lVar22 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar22 = lVar22 + lVar29 * 0x178;
  *(ulong *)(lVar22 + 0x110) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x110) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar22 + 0x110));
  *(float *)(lVar22 + 0x118) = fVar38 + *(float *)(lVar22 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar22 = lVar22 + lVar29 * 0x178;
  *(ulong *)(lVar22 + 0x128) =
       CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x128) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar22 + 0x128));
  *(float *)(lVar22 + 0x130) = fVar38 + *(float *)(lVar22 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar22 = lVar22 + lVar29 * 0x178;
  *(float *)(lVar22 + 0x134) = fVar41 + *(float *)(lVar22 + 0x134);
  *(ulong *)(lVar22 + 0x138) =
       CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar22 + 0x138) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar22 + 0x138));
  lVar22 = *in_stack_00000170;
  if ((lVar22 == 0) || (lVar18 = *(long *)(lVar22 + 0x38), lVar18 == 0)) goto LAB_035574b8;
  uVar20 = *(uint *)(lVar18 + 0x18);
  if (uVar20 <= uVar13) goto LAB_035575f4;
  lVar23 = lVar18 + lVar29 * 0x178;
  uVar14 = CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar23 + 0x140) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar23 + 0x140));
  fVar42 = fVar40 + *(float *)(lVar23 + 0x150);
  param_4 = (ulong)(uint)fVar42;
  uVar35 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0x148) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar23 + 0x148));
  *(float *)(lVar23 + 0x150) = fVar42;
  *(ulong *)(lVar23 + 0x140) = uVar14;
  *(ulong *)(lVar23 + 0x148) = uVar35;
  if (in_stack_00000160 == uVar12) {
    uVar12 = *unaff_x20 - 1;
    if (uVar13 == uVar12) goto LAB_03555b44;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar23 = (long)(int)uVar12;
    lVar24 = lVar22 + lVar23 * 0x5c;
    uVar35 = (ulong)(uint)*(float *)(lVar24 + 0x58);
    fVar42 = fVar40 + *(float *)(lVar24 + 0x54);
    uVar14 = (ulong)(uint)fVar42;
    fVar34 = fVar41 + *(float *)(lVar24 + 0x58);
    param_4 = (ulong)(uint)fVar34;
    *(ulong *)(lVar24 + 0x4c) =
         CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar24 + 0x4c) >> 0x20),
                  fVar40 + (float)*(undefined8 *)(lVar24 + 0x4c));
    *(float *)(lVar24 + 0x54) = fVar42;
    *(float *)(lVar24 + 0x58) = fVar34;
    if (uVar20 <= *(uint *)(lVar24 + 0x34)) goto LAB_035575f4;
    uVar32 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar24 + 0x34) * 0x178 + 0x11c);
    lVar22 = lVar22 + lVar23 * 0x5c;
    *(float *)(lVar22 + 0x70) = fVar42;
    *(undefined4 *)(lVar22 + 0x6c) = uVar32;
    lVar22 = *in_stack_00000170;
    if ((lVar22 == 0) || (lVar18 = *(long *)(lVar22 + 0x50), lVar18 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_035574b8;
    uVar12 = *(uint *)(lVar18 + lVar23 * 0x5c + 0x40);
    if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar18 = lVar18 + lVar23 * 0x5c;
    *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar22 + (long)(int)uVar12 * 0x178 + 0x128);
    *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    uVar12 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar13 == uVar12) {
      lVar22 = *in_stack_00000170;
      if ((lVar22 == 0) || (lVar18 = *(long *)(lVar22 + 0x50), lVar18 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar23 = lVar18 + lVar26 * 0x5c;
      uVar35 = (ulong)(uint)*(float *)(lVar23 + 0x58);
      uVar14 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar23 + 0x4c) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar23 + 0x4c));
      fVar42 = fVar40 + *(float *)(lVar23 + 0x54);
      fVar41 = fVar41 + *(float *)(lVar23 + 0x58);
      param_4 = (ulong)(uint)fVar41;
      *(ulong *)(lVar23 + 0x4c) = uVar14;
      *(float *)(lVar23 + 0x54) = fVar42;
      *(float *)(lVar23 + 0x58) = fVar41;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(lVar23 + 0x34)) goto LAB_035575f4;
      uVar32 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar23 + 0x34) * 0x178 + 0x11c);
      lVar18 = lVar18 + lVar26 * 0x5c;
      *(float *)(lVar18 + 0x70) = fVar42;
      *(undefined4 *)(lVar18 + 0x6c) = uVar32;
      lVar22 = *in_stack_00000170;
      if ((lVar22 == 0) || (lVar18 = *(long *)(lVar22 + 0x50), lVar18 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      uVar12 = *(uint *)(lVar18 + lVar26 * 0x5c + 0x40);
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar18 = lVar18 + lVar26 * 0x5c;
      *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(lVar22 + (long)(int)uVar12 * 0x178 + 0x128);
      *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar18 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar15 = FUN_026b82c4(uVar25,0);
  if (((((uVar15 & 1) == 0) && (1 < uVar25 - 0x2010)) && (uVar25 != 0xad)) && (uVar25 != 0x2d)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (unaff_w24 != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b81f8(uVar25,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b63d8(uVar25,0);
        if (((uVar25 != 0x200b) && ((uVar15 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    else if (((unaff_w24 != 1) && ((int)uVar13 < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
            (((int)uVar13 < *unaff_x20 && ((uVar25 == 0x2019 || (uVar25 == 0x27)))))) {
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar13 - 1) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b82c4(uVar4,0);
      if ((uVar15 & 1) != 0) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w24) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b82c4(uVar4,0);
        if ((uVar15 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (uVar13 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b82c4(uVar25,0);
      iVar11 = iStack0000000000000128;
      if ((uVar15 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar11 = uVar13 - 1;
    }
    lVar22 = *in_stack_00000170;
    if (lVar22 == 0) goto LAB_035574b8;
    lVar18 = *(long *)(lVar22 + 0x40);
    if (lVar18 == 0) goto LAB_035574b8;
    uVar12 = *(uint *)(lVar22 + 0x24);
    iVar10 = *(int *)(lVar18 + 0x18);
    if (iVar10 < (int)(uVar12 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar22 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar22 = *in_stack_00000170;
      if (lVar22 == 0) goto LAB_035574b8;
    }
    lVar22 = *(long *)(lVar22 + 0x40);
    if (lVar22 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar22 = lVar22 + (long)(int)uVar12 * 0x18;
    *(long **)(lVar22 + 0x20) = unaff_x19;
    *(uint *)(lVar22 + 0x28) = in_stack_00000158;
    *(int *)(lVar22 + 0x2c) = iVar11;
    *(uint *)(lVar22 + 0x30) = (iVar11 - in_stack_00000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar22 = unaff_x19[0x6d];
    if (lVar22 == 0) goto LAB_035574b8;
    lVar18 = *(long *)(lVar22 + 0x50);
    *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar18 = lVar18 + lVar26 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      in_stack_00000158 = uVar13;
    }
    if (uVar13 == *unaff_x20 - 1U) {
      lVar22 = *in_stack_00000170;
      if (lVar22 == 0) goto LAB_035574b8;
      lVar18 = *(long *)(lVar22 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      uVar12 = *(uint *)(lVar22 + 0x24);
      iVar11 = *(int *)(lVar18 + 0x18);
      if (iVar11 < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar22 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar22 = *in_stack_00000170;
        if (lVar22 == 0) goto LAB_035574b8;
      }
      lVar22 = *(long *)(lVar22 + 0x40);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar22 = lVar22 + (long)(int)uVar12 * 0x18;
      *(long **)(lVar22 + 0x20) = unaff_x19;
      *(uint *)(lVar22 + 0x28) = in_stack_00000158;
      *(uint *)(lVar22 + 0x2c) = uVar13;
      *(uint *)(lVar22 + 0x30) = unaff_w24 - in_stack_00000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar22 = unaff_x19[0x6d];
      if (lVar22 == 0) goto LAB_035574b8;
      lVar18 = *(long *)(lVar22 + 0x50);
      *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar18 = lVar18 + lVar26 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  unaff_x22 = 0x178;
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  uVar12 = *(uint *)(lVar22 + 0x18);
  if (uVar12 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar22 + lVar29 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar12 <= uVar13 - 1) goto LAB_035575f4;
      lVar26 = *unaff_x19;
      uVar12 = *(uint *)(lVar22 + unaff_x27 + -0x330);
      uVar32 = *(undefined4 *)(lVar22 + unaff_x27 + -0x2f8);
LAB_035562ec:
      pcVar21 = *(code **)(lVar26 + 0x8d8);
LAB_035562f4:
      uVar35 = (ulong)uVar12;
      uVar14 = (ulong)(uint)fStack0000000000000070;
      param_4 = (ulong)uStack0000000000000074;
      (*pcVar21)(in_stack_00000078,uVar14,param_4,uVar35,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar32);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar8;
      }
LAB_03556348:
      uStack0000000000000118 = 0;
      unaff_s15 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
  }
  else {
    lVar22 = lVar22 + lVar29 * 0x178;
    iVar11 = *(int *)(lVar22 + 0x68);
    *(undefined4 *)(lVar22 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_026b63d8(uVar25,0);
    if ((uVar25 != 0x200b) && ((uVar15 & 1) == 0)) {
      lVar22 = *in_stack_00000170;
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_035575f4;
      fVar42 = *(float *)(lVar26 + lVar29 * 0x178 + 0x160);
      if (unaff_s15 <= fVar42) {
        unaff_s15 = fVar42;
      }
      if (fStack0000000000000100 <= ABS(unaff_s14)) {
        fStack0000000000000100 = ABS(unaff_s14);
      }
      if (iVar11 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *in_stack_00000170;
          if (lVar22 == 0) goto LAB_035574b8;
          lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar26 + 0x15a8);
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar34 = *(float *)(lVar22 + lVar29 * 0x178 + 0x14c);
      fVar42 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar34 = fVar34 + unaff_s15 * fVar42;
      if (fVar34 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar34;
      }
      uVar14 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar11;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b97f8(uVar25,0);
        if ((uVar15 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar22 = lVar22 + lVar29 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar22 + 0x160);
      in_stack_00000078 = *(uint *)(lVar22 + 0x11c);
      param_4 = (ulong)in_stack_00000078;
      bVar9 = unaff_s15 != 0.0;
      fVar42 = in_stack_00000088._4_4_;
      if (bVar9) {
        fVar42 = unaff_s15;
      }
      unaff_s15 = fVar42;
      in_stack_00000090 = *(undefined4 *)(lVar22 + 0x168);
      uStack0000000000000074 = 0;
      fVar42 = unaff_s14;
      if (bVar9) {
        fVar42 = fStack0000000000000100;
      }
      uVar14 = (ulong)(uint)fVar42;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar42;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        if (uVar13 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + lVar29 * 0x178;
          lVar26 = *unaff_x19;
          uVar12 = *(uint *)(lVar22 + 0x128);
          uVar32 = *(undefined4 *)(lVar22 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar13 == uVar5) || ((int)uVar6 <= (int)uVar13)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b63d8(uVar25,0);
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        lVar26 = lVar29;
        uVar12 = uVar13;
        if (uVar25 == 0x200b || (uVar14 & 1) != 0) {
          lVar26 = lVar30;
          uVar12 = uVar6;
        }
        if (uVar12 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + lVar26 * 0x178;
          uVar12 = *(uint *)(lVar22 + 0x128);
          uVar32 = *(undefined4 *)(lVar22 + 0x160);
          pcVar21 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        uVar12 = *(uint *)(lVar22 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_035575f4;
      uVar15 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar22 + unaff_x27),0);
      if ((uVar15 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0)) {
          if (uVar13 < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + lVar29 * 0x178;
            uVar35 = (ulong)*(uint *)(lVar22 + 0x128);
            param_4 = (ulong)uStack0000000000000074;
            uVar14 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000078,uVar14,param_4,uVar35,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar22 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar22 = *(long *)puVar8;
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
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
  unaff_x29 = 0x5c;
  if (lVar19 == 0) goto LAB_035574b8;
  uVar12 = *(uint *)(lVar22 + lVar29 * 0x178 + 400);
  fVar42 = (float)FUN_03776a30(lVar19 + 0x50,0);
  if ((uVar12 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar13 - 1) goto LAB_035575f4;
      uVar12 = *(uint *)(lVar22 + unaff_x27 + -0x330);
      fVar40 = *(float *)(lVar22 + unaff_x27 + -0x30c);
      pcVar21 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar35 = (ulong)uVar12;
      uVar14 = (ulong)(uint)fStack000000000000009c;
      param_4 = (ulong)uStack0000000000000098;
      (*pcVar21)(in_stack_000000a0,uVar14,param_4,uVar35,in_stack_000000a8 * fVar42 + fVar40,0,
                 in_stack_000000a8,in_stack_000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar22 = *in_stack_00000170;
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_035575f4;
    *(undefined4 *)(lVar26 + lVar29 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
       ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b97f8(uVar25,0);
        if ((uVar15 & 1) != 0) goto LAB_035564e8;
        lVar22 = *in_stack_00000170;
        if (lVar22 == 0) goto LAB_035574b8;
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar22 = lVar22 + lVar29 * 0x178;
      in_stack_00000040 = *(float *)(lVar22 + 0x60);
      in_stack_00000038 = *(float *)(lVar22 + 0x14c);
      uVar14 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar22 + 0x11c);
      param_4 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar22 + 0x160);
      fStack000000000000009c = fVar42 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar11 = *unaff_x20;
    if (iVar11 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        if (uVar13 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + lVar29 * 0x178;
          lVar30 = *unaff_x19;
          uVar12 = *(uint *)(lVar22 + 0x128);
          fVar40 = *(float *)(lVar22 + 0x14c);
LAB_03556654:
          pcVar21 = *(code **)(lVar30 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar13 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_026b63d8(uVar25,0);
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        uVar12 = *(uint *)(lVar22 + 0x18);
        if (uVar25 == 0x200b || (uVar14 & 1) != 0) {
          if (uVar12 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar30 = lVar29;
          if (uVar12 <= uVar13) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar22 = lVar22 + lVar30 * 0x178;
        fVar40 = *(float *)(lVar22 + 0x14c);
        uVar12 = *(uint *)(lVar22 + 0x128);
        pcVar21 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < iVar11) {
      lVar22 = *in_stack_00000170;
      if ((lVar22 != 0) && (lVar26 = *(long *)(lVar22 + 0x38), lVar26 != 0)) {
        if (unaff_w24 < *(uint *)(lVar26 + 0x18)) {
          if (*(float *)(lVar26 + unaff_x27 + -0x108) == in_stack_00000040) {
            fVar34 = *(float *)(lVar26 + unaff_x27 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = (ulong)(uint)in_stack_00000038;
            uVar15 = FUN_03567bac(fVar40 + fVar34,uVar14,0);
            if ((uVar15 & 1) != 0) {
              iVar11 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar22 = *in_stack_00000170;
            if (lVar22 == 0) goto LAB_035574b8;
          }
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 != 0) {
            uVar12 = *(uint *)(lVar22 + 0x18);
            if ((int)uVar13 <= (int)uVar6) goto FUN_035568e8;
            if (uVar6 < uVar12) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar13 < iVar11) {
      iVar11 = FUN_036d3364(lVar19,0);
      if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w24) goto LAB_035575f4;
      lVar22 = *(long *)(in_stack_000000f0 + unaff_x27 + -0x130);
      if (lVar22 == 0) goto LAB_035574b8;
      iVar10 = FUN_036d3364(lVar22,0);
      if (iVar11 != iVar10) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 != 0))
      {
        if (uVar13 - 1 < *(uint *)(lVar22 + 0x18)) {
          lVar30 = *unaff_x19;
          uVar12 = *(uint *)(lVar22 + unaff_x27 + -0x330);
          fVar40 = *(float *)(lVar22 + unaff_x27 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
  goto LAB_035574b8;
  uVar20 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar20 <= uVar13) goto LAB_035575f4;
  unaff_x23 = in_stack_000000f0;
  unaff_x28 = in_stack_00000170;
  uVar12 = in_stack_00000160;
  if ((*(byte *)(lVar22 + lVar29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      param_4 = (ulong)uStack00000000000000c0;
      uVar14 = (ulong)(uint)fStack00000000000000dc;
      uVar35 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar14,param_4,uVar35,fStack00000000000000d0,param_4);
    }
LAB_035569b4:
    bVar7 = false;
    uVar13 = unaff_w24;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar22 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar25 == 0xd) || ((uVar25 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b97f8(uVar25,0);
        if ((uVar15 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar30 = *(long *)puVar8;
      }
      if ((*in_stack_00000170 == 0) || (lVar22 = *(long *)(*in_stack_00000170 + 0x38), lVar22 == 0))
      goto LAB_035574b8;
      uVar20 = (uint)*(undefined8 *)(lVar22 + 0x18);
      if (uVar20 <= uVar13) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + 0xb8);
      lVar19 = lVar22 + lVar29 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar19 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar19 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar30 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar30 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar19 + 0x18c);
      in_stack_000000c8 = *(float *)(lVar30 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar30 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar20 <= uVar13) goto LAB_035575f4;
    lVar22 = lVar22 + lVar29 * 0x178;
    fVar42 = *(float *)(lVar22 + 0x128);
    fVar36 = *(float *)(lVar22 + 0x188);
    uVar27 = *(undefined8 *)(lVar22 + 0x17c);
    fVar39 = *(float *)(lVar22 + 0x184);
    uVar33 = *(undefined8 *)(lVar22 + 0x184);
    fVar38 = *(float *)(lVar22 + 0x18c);
    fVar40 = *(float *)(lVar22 + 0x11c);
    fVar37 = *(float *)(lVar22 + 0x148);
    fVar34 = *(float *)(lVar22 + 0x150);
    in_stack_00000178 = uVar27;
    fStack0000000000000180 = fVar39;
    fStack0000000000000184 = fVar36;
    in_stack_00000188 = fVar38;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar14 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar22 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar14 & 1) == 0) {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar22);
      }
      fVar42 = fVar42 + (float)in_stack_000017b8;
      param_4 = (ulong)(uint)fVar42;
      fVar40 = fVar40 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar34 = fVar34 - in_stack_000017c0;
      uVar14 = (ulong)(uint)fVar34;
      fVar37 = fVar37 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar35 = (ulong)(uint)fVar37;
      if (fVar40 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar40;
      }
      if (fVar34 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar34;
      }
      if (in_stack_000000c8 <= fVar42) {
        in_stack_000000c8 = fVar42;
      }
      if (fStack00000000000000d0 <= fVar37) {
        fStack00000000000000d0 = fVar37;
      }
    }
    else {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar22);
      }
      fVar40 = (fVar40 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar35 = (ulong)(uint)fVar40;
      if (fVar34 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar34;
      }
      uVar14 = (ulong)(uint)fStack00000000000000dc;
      param_4 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar37) {
        fStack00000000000000d0 = fVar37;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar14,param_4,uVar35,fStack00000000000000d0,param_4);
      fStack00000000000000dc = fVar34 - fVar38;
      in_stack_000000c8 = fVar42 + fVar39;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar37 + fVar36;
      fStack00000000000000d8 = fVar40;
      in_stack_000017b0 = uVar27;
      in_stack_000017b8 = uVar33;
      in_stack_000017c0 = fVar38;
    }
    unaff_x22 = 0x178;
    if (((*unaff_x20 == 1) || (uVar13 == uVar5)) || (((int)uVar6 <= (int)uVar13 || (!bVar1))))
    goto LAB_03556ccc;
    bVar7 = true;
    uVar13 = unaff_w24;
  }
  goto LAB_03556d04;
LAB_03556ccc:
  param_1 = *unaff_x19;
  param_4 = (ulong)uStack00000000000000c0;
  goto code_r0x03556cd4;
  while( true ) {
    lVar22 = *unaff_x28;
    lVar30 = lVar30 + 1;
    lVar29 = lVar29 + 0x50;
    if (lVar22 == 0) break;
LAB_03557110:
    uVar15 = lVar30 + 1;
    if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar15) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar22 = *(long *)(lVar22 + 0x60);
    if (lVar22 == 0) break;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
    FUN_03596a20(lVar22 + lVar29 + 0x70,0);
    lVar22 = unaff_x19[0xe1];
    if (lVar22 == 0) break;
    if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
    uVar27 = *(undefined8 *)(lVar22 + lVar30 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036d35a8(uVar27,0,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0)) break;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar15) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar22 + lVar29 + 0x70,1,0);
      }
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a460c(lVar22,*(undefined8 *)(lVar19 + lVar29 + 0x80),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a4810(lVar22,*(undefined8 *)(lVar19 + lVar29 + 0x98),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a48bc(lVar22,*(undefined8 *)(lVar19 + lVar29 + 0xa0),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = UnityEngine_Material__GetColorArray(lVar22,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar22 == 0) break;
      FUN_036a4e24(lVar22,*(undefined8 *)(lVar19 + lVar29 + 0xa8),0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if ((lVar22 == 0) || (lVar22 = UnityEngine_Material__GetColorArray(lVar22,0), lVar22 == 0))
      break;
      FUN_036aa280(lVar22,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if (lVar22 == 0) break;
      lVar22 = FUN_037b514c(lVar22,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar30 * 8 + 0x28);
      if ((lVar19 == 0) || (uVar27 = UnityEngine_Material__GetColorArray(lVar19,0), lVar22 == 0))
      break;
      FUN_0390f3a4(lVar22,uVar27,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if ((lVar22 == 0) || (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
      FUN_0390eec8(uVar33,uVar14,param_4,uVar35,lVar22,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
      if ((lVar22 == 0) || (lVar22 = FUN_037b514c(lVar22,0), lVar22 == 0)) break;
      FUN_0390ed78(lVar22,uVar12 & 1,0);
      lVar22 = unaff_x19[0xe1];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_035575f4;
      plVar28 = *(long **)(lVar22 + lVar30 * 8 + 0x28);
      uVar13 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar28 == (long *)0x0) break;
      (**(code **)(*plVar28 + 0x2c8))(plVar28,uVar13 & 1,*(undefined8 *)(*plVar28 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


