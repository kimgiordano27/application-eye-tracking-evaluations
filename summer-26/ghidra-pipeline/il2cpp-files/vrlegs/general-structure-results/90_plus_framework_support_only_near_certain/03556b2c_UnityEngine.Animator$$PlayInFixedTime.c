/*
FUNCTION_NAME: UnityEngine.Animator$$PlayInFixedTime
ENTRY_POINT: 03556b2c
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


void UnityEngine_Animator__PlayInFixedTime(long param_1,undefined1 param_2 [16],float param_3)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
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
  float in_w9;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  undefined8 uVar24;
  long *plVar25;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar26;
  long lVar27;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float unaff_s9;
  float fVar39;
  float fVar40;
  float fVar41;
  float unaff_s12;
  float fVar42;
  float unaff_s13;
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
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  int iStack0000000000000128;
  uint uStack000000000000012c;
  long in_stack_00000150;
  uint uStack0000000000000158;
  uint uStack000000000000015c;
  uint in_stack_00000160;
  float fStack000000000000016c;
  long *in_stack_00000170;
  undefined8 uStack0000000000000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  float fStack00000000000001a0;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined4 in_stack_000017c4;
  
  uVar24 = param_2._8_8_;
  uVar30 = param_2._0_8_;
  fStack000000000000016c = param_3;
code_r0x03556b2c:
  fVar39 = *(float *)(param_1 + 0x11c);
  fVar37 = *(float *)(param_1 + 0x148);
  fVar41 = *(float *)(param_1 + 0x150);
  uStack0000000000000178 = unaff_x22;
  fStack0000000000000180 = unaff_s14;
  fStack0000000000000184 = unaff_s12;
  fStack0000000000000188 = unaff_s13;
  uStack0000000000000190 = uVar30;
  uStack0000000000000198 = uVar24;
  fStack00000000000001a0 = in_w9;
  uVar14 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
  lVar18 = *(long *)OVRPlugin_Mesh_TypeInfo;
  if ((uVar14 & 1) == 0) {
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar18);
    }
    fVar35 = fStack000000000000016c + (float)in_stack_000017b8;
    uVar32 = (ulong)(uint)fVar35;
    fVar39 = fVar39 - (float)((ulong)in_stack_000017b0 >> 0x20);
    fVar41 = fVar41 - in_stack_000017c0;
    uVar14 = (ulong)(uint)fVar41;
    fVar37 = fVar37 + (float)((ulong)in_stack_000017b8 >> 0x20);
    uVar33 = (ulong)(uint)fVar37;
    if (fVar39 <= fStack00000000000000d8) {
      fStack00000000000000d8 = fVar39;
    }
    if (fVar41 <= fStack00000000000000dc) {
      fStack00000000000000dc = fVar41;
    }
    if (in_stack_000000c8 <= fVar35) {
      in_stack_000000c8 = fVar35;
    }
    uVar30 = in_stack_000017b0;
    uVar24 = in_stack_000017b8;
    in_w9 = in_stack_000017c0;
    if (fStack00000000000000d0 <= fVar37) {
      fStack00000000000000d0 = fVar37;
    }
  }
  else {
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar18);
    }
    fVar39 = (fVar39 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
    uVar33 = (ulong)(uint)fVar39;
    if (fVar41 <= fStack00000000000000dc) {
      fStack00000000000000dc = fVar41;
    }
    uVar14 = (ulong)(uint)fStack00000000000000dc;
    uVar32 = (ulong)uStack00000000000000c0;
    if (fStack00000000000000d0 <= fVar37) {
      fStack00000000000000d0 = fVar37;
    }
    (**(code **)(*unaff_x19 + 0x8e8))
              (fStack00000000000000d8,uVar14,uVar32,uVar33,fStack00000000000000d0,uVar32);
    fStack00000000000000dc = fVar41 - unaff_s13;
    in_stack_000000c8 = fStack000000000000016c + unaff_s14;
    uStack00000000000000c0 = 0;
    fStack00000000000000d0 = fVar37 + unaff_s12;
    fStack00000000000000d8 = fVar39;
    uVar30 = unaff_x22;
    uVar24 = CONCAT44(unaff_s12,unaff_s14);
    in_w9 = unaff_s13;
  }
  uVar12 = in_stack_00000160;
  if ((((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
      ((int)in_stack_00000150 <= (int)unaff_w25)) || ((unaff_w21 & 1) == 0)) {
    uVar32 = (ulong)uStack00000000000000c0;
    uVar14 = (ulong)(uint)fStack00000000000000dc;
    uVar33 = (ulong)(uint)in_stack_000000c8;
    (**(code **)(*unaff_x19 + 0x8e8))
              (fStack00000000000000d8,uVar14,uVar32,uVar33,fStack00000000000000d0,uVar32);
    bVar6 = false;
    unaff_w25 = uStack000000000000015c;
  }
  else {
    bVar6 = true;
    unaff_w25 = uStack000000000000015c;
  }
LAB_03556d04:
  puVar7 = OVRPlugin_Media_TypeInfo;
  iVar11 = *unaff_x20;
  uStack000000000000015c = unaff_w25 + 1;
  unaff_x27 = unaff_x27 + 0x178;
  iStack0000000000000128 = iStack0000000000000128 + 1;
  if (iVar11 <= (int)unaff_w25) {
    lVar18 = *unaff_x28;
    if (lVar18 == 0) goto LAB_035574b8;
    *(int *)(lVar18 + 0x18) = iVar11;
    lVar27 = unaff_x19[0xd4];
    *(uint *)(lVar18 + 0x2c) = uVar12 + 1;
    if (iVar11 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar18 + 0x1c) = (int)lVar27;
    *(int *)(lVar18 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar18 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar15 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar15 & 1) == 0)) goto LAB_03554724;
    lVar18 = unaff_x19[0xdf];
    if (lVar18 != 0) {
      (**(code **)(lVar18 + 0x18))
                (*(undefined8 *)(lVar18 + 0x40),*unaff_x28,*(undefined8 *)(lVar18 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar11 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar11 != 0x19) {
      lVar18 = unaff_x19[0xe5];
      if (lVar18 == 0) goto LAB_035574b8;
      uVar12 = FUN_03911ee4(lVar18,0);
      FUN_03911f20(lVar18,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
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
    uVar30 = FUN_0390ef60(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
    uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
    lVar18 = *unaff_x28;
    if (lVar18 == 0) goto LAB_035574b8;
    lVar26 = 0;
    lVar27 = 0;
    goto LAB_03557110;
  }
  if (*(uint *)(unaff_x23 + 0x18) <= unaff_w25) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x50), lVar18 == 0)) goto LAB_035574b8;
  lVar26 = (long)(int)unaff_w25;
  lVar27 = unaff_x23 + lVar26 * 0x178;
  in_stack_00000160 = *(uint *)(lVar27 + 100);
  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
  lVar23 = (long)(int)in_stack_00000160;
  lVar18 = lVar18 + lVar23 * unaff_x29;
  lVar19 = *(long *)(lVar27 + 0x38);
  uVar2 = *(ushort *)(lVar27 + 0x20);
  uVar4 = *(uint *)(lVar18 + 0x3c);
  in_stack_000000e0 = (long)(int)uVar4;
  uVar13 = *(uint *)(lVar18 + 0x68);
  iVar1 = *(int *)(lVar18 + 0x20);
  iVar11 = *(int *)(lVar18 + 0x28);
  iVar10 = *(int *)(lVar18 + 0x2c);
  uVar5 = *(uint *)(lVar18 + 0x40);
  in_stack_00000150 = (long)(int)uVar5;
  fVar37 = *(float *)(lVar18 + 0x4c);
  fVar34 = *(float *)(lVar18 + 0x54);
  fVar39 = *(float *)(lVar18 + 0x58);
  fVar40 = *(float *)(lVar18 + 0x5c);
  fVar36 = *(float *)(lVar18 + 0x60);
  fVar38 = *(float *)(lVar18 + 0x6c);
  fVar42 = *(float *)(lVar18 + 0x70);
  fVar41 = *(float *)(lVar18 + 0x74);
  fVar35 = *(float *)(lVar18 + 0x78);
  fStack000000000000016c = (float)(uint)uVar2;
  if ((int)uVar13 < 9) {
    switch(uVar13) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar36 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar39;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar36 + fVar40 * 0.5) - fVar39 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar40 + fVar36) - fVar39;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar40 + fVar36;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar13 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar2 < 0xad) {
      if ((uVar2 != 3) && (uVar2 != 10)) {
LAB_03554fac:
        if (*(uint *)(unaff_x23 + 0x18) <= uVar4) goto LAB_035575f4;
        uVar3 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8cc4(uVar3,0);
        fVar28 = fStack000000000000016c;
        if ((uVar14 & 1) == 0) {
          bVar9 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
        }
        else {
          bVar9 = false;
        }
        if ((fVar39 <= fVar40) && (!bVar9 && uVar13 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar36;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar40 + fVar36;
          }
          goto LAB_03555088;
        }
        if (((uStack000000000000015c == 1) || (in_stack_00000160 != uVar12)) ||
           (unaff_w25 == *(uint *)((long)unaff_x19 + 0x324))) {
          in_stack_000000f8._4_4_ = fVar36;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar40 + fVar36;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uStack0000000000000028 = FUN_026b97f8(fVar28,0);
          in_stack_000000e8 = 0;
        }
        else {
          cVar17 = (char)unaff_x19[0x1e];
          fVar36 = -fVar39;
          if (cVar17 != '\0') {
            fVar36 = fVar39;
          }
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar4) goto LAB_035575f4;
          iVar10 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                   (-iVar1 - (uStack0000000000000028 & 1)) + iVar10 + -1;
          if (iVar10 < 1) {
            fVar39 = 1.0;
            iVar10 = 1;
          }
          else {
            fVar39 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (fStack000000000000016c == 1.26117e-44) {
LAB_03556e74:
            fVar39 = 1.0 - fVar39;
          }
          else {
            if (fStack000000000000016c != 2.24208e-43) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar14 = FUN_026b97f8(fVar28,0);
              cVar17 = (char)unaff_x19[0x1e];
              if ((uVar14 & 1) != 0) goto LAB_03556e74;
            }
            iVar10 = (iVar1 - (~uStack0000000000000028 & 1)) + iVar11;
          }
          fVar39 = ((fVar40 + fVar36) * fVar39) / (float)iVar10;
          if (cVar17 == '\0') {
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
    else if (((uVar2 != 0xad) && (uVar2 != 0x200b)) && (uVar2 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar13 == 0x20) {
    fVar39 = fVar38 + fVar41;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar13 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar13 <= unaff_w25) goto LAB_035575f4;
  lVar18 = in_stack_000000f0 + lVar26 * 0x178;
  fVar40 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar39 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
  fVar36 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar18 + 0x194) == '\0') goto LAB_03555938;
  iVar11 = *(int *)(in_stack_000000f0 + lVar26 * 0x178 + 0x2c);
  if (iVar11 != 0) goto LAB_0355574c;
  fVar28 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = in_stack_000000f0 + lVar26 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar28 = 1.0;
    break;
  case 1:
    fVar35 = *(float *)(in_stack_000000f0 + lVar26 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = in_stack_000000f0 + lVar26 * 0x178;
      fVar41 = (in_stack_000000f8._4_4_ + fVar35) - *(float *)(in_stack_00000080 + 0x230);
      fVar35 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar27 = in_stack_000000f0 + lVar26 * 0x178;
    fVar41 = fVar41 - fVar38;
    *(float *)(lVar27 + 0x84) = fVar28 + (fVar35 - fVar38) / fVar41;
    *(float *)(lVar27 + 0xac) = fVar28 + (*(float *)(lVar27 + 0x98) - fVar38) / fVar41;
    *(float *)(lVar27 + 0xd4) = fVar28 + (*(float *)(lVar27 + 0xc0) - fVar38) / fVar41;
    fVar28 = fVar28 + (*(float *)(lVar27 + 0xe8) - fVar38) / fVar41;
    break;
  case 2:
    lVar27 = in_stack_000000f0 + lVar26 * 0x178;
    fVar35 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar41 = (in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar27 + 0x84) = fVar28 + fVar41 / fVar35;
    *(float *)(lVar27 + 0xac) =
         fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar28 = fVar28 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = in_stack_000000f0 + lVar26 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = in_stack_000000f0 + lVar26 * 0x178;
      fVar35 = fVar35 - fVar42;
      fVar41 = fVar28 + (*(float *)(lVar27 + 0x74) - fVar42) / fVar35;
      fVar35 = fVar28 + (*(float *)(lVar27 + 0x9c) - fVar42) / fVar35;
      *(float *)(lVar27 + 0x88) = fVar41;
      *(float *)(lVar27 + 0xb0) = fVar35;
      *(float *)(lVar27 + 0xd8) = fVar41;
      *(float *)(lVar27 + 0x100) = fVar35;
      break;
    case 2:
      lVar27 = in_stack_000000f0 + lVar26 * 0x178;
      fVar41 = fVar28 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar41;
      fVar35 = *(float *)(unaff_x19 + 0x9c);
      fVar38 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar41;
      fVar41 = fVar28 + (*(float *)(lVar27 + 0x9c) - fVar35) / (fVar38 - fVar35);
      *(float *)(lVar27 + 0xb0) = fVar41;
      *(float *)(lVar27 + 0x100) = fVar41;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar13 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    }
    if (uVar13 <= unaff_w25) goto LAB_035575f4;
    lVar27 = in_stack_000000f0 + lVar26 * 0x178;
    fVar41 = *(float *)(lVar27 + 0x15c);
    fVar35 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar41) * 0.5;
    fVar38 = fVar28 + *(float *)(lVar27 + 0x88) * fVar41 + fVar35;
    fVar28 = fVar28 + fVar35 + *(float *)(lVar27 + 0xb0) * fVar41;
    *(float *)(lVar27 + 0x84) = fVar38;
    *(float *)(lVar27 + 0xac) = fVar38;
    *(float *)(lVar27 + 0xd4) = fVar28;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(in_stack_000000f0 + lVar26 * 0x178 + 0xfc) = fVar28;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar13 <= unaff_w25) goto LAB_035575f4;
    lVar27 = in_stack_000000f0 + lVar26 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (unaff_w25 < uVar13) {
      lVar27 = in_stack_000000f0 + lVar26 * 0x178;
      fVar37 = fVar37 - fVar34;
      fVar41 = (*(float *)(lVar27 + 0x74) - fVar34) / fVar37;
      fVar37 = (*(float *)(lVar27 + 0x9c) - fVar34) / fVar37;
      *(float *)(lVar27 + 0x88) = fVar41;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar13 <= unaff_w25) goto LAB_035575f4;
    lVar27 = in_stack_000000f0 + lVar26 * 0x178;
    fVar41 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar41;
    fVar37 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar27 + 0xb0) = fVar37;
    *(float *)(lVar27 + 0xd8) = fVar37;
    *(float *)(lVar27 + 0x100) = fVar41;
    break;
  case 3:
    if (uVar13 <= unaff_w25) goto LAB_035575f4;
    lVar27 = in_stack_000000f0 + lVar26 * 0x178;
    fVar35 = *(float *)(lVar27 + 0x15c);
    fVar37 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar35) * 0.5;
    fVar41 = *(float *)(lVar27 + 0x84) / fVar35 + fVar37;
    fVar37 = fVar37 + *(float *)(lVar27 + 0xd4) / fVar35;
    *(float *)(lVar27 + 0x88) = fVar41;
    *(float *)(lVar27 + 0xb0) = fVar37;
    *(float *)(lVar27 + 0x100) = fVar41;
    *(float *)(lVar27 + 0xd8) = fVar37;
  }
  if (uVar13 <= unaff_w25) goto LAB_035575f4;
  lVar27 = in_stack_000000f0 + lVar26 * 0x178;
  unaff_s9 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') &&
     ((*(byte *)(in_stack_000000f0 + lVar26 * 0x178 + 400) & 1) != 0)) {
    unaff_s9 = -unaff_s9;
  }
  fVar41 = in_stack_00000050._4_4_;
  if (((in_stack_00000058 == 2) || (fVar41 = fStack0000000000000034, in_stack_00000058 == 1)) ||
     (fVar41 = fStack000000000000002c, in_stack_00000058 == 0)) {
    unaff_s9 = fVar41 * unaff_s9;
  }
  lVar27 = in_stack_000000f0 + lVar26 * 0x178;
  fVar37 = *(float *)(lVar27 + 0x88);
  fVar35 = *(float *)(lVar27 + 0x84);
  fVar41 = -2.1474836e+09;
  if (fVar35 != INFINITY) {
    fVar41 = (float)(int)fVar35;
  }
  fVar38 = *(float *)(lVar27 + 0xd4);
  fVar42 = *(float *)(lVar27 + 0xd8);
  fVar34 = -2.1474836e+09;
  if (fVar37 != INFINITY) {
    fVar34 = (float)(int)fVar37;
  }
  uVar29 = FUN_03591d3c(fVar35 - fVar41,fVar37 - fVar34);
  *(undefined4 *)(lVar27 + 0x84) = uVar29;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar42 = fVar42 - fVar34;
  *(float *)(lVar27 + 0x88) = unaff_s9;
  uVar29 = FUN_03591d3c(fVar35 - fVar41,fVar42);
  *(undefined4 *)(in_stack_000000f0 + lVar26 * 0x178 + 0xac) = uVar29;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  fVar38 = fVar38 - fVar41;
  *(float *)(in_stack_000000f0 + lVar26 * 0x178 + 0xb0) = unaff_s9;
  fVar41 = (float)FUN_03591d3c(fVar38,fVar42);
  *(float *)(lVar27 + 0xd4) = fVar41;
  if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
  *(float *)(lVar27 + 0xd8) = unaff_s9;
  uVar29 = FUN_03591d3c(fVar38,fVar37 - fVar34);
  *(undefined4 *)(in_stack_000000f0 + lVar26 * 0x178 + 0xfc) = uVar29;
  uVar13 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
  if (uVar13 <= unaff_w25) goto LAB_035575f4;
  *(float *)(in_stack_000000f0 + lVar26 * 0x178 + 0x100) = unaff_s9;
  unaff_x20 = in_stack_00000048;
LAB_0355574c:
  if (((int)unaff_w25 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar13 <= unaff_w25) goto LAB_035575f4;
      lVar18 = in_stack_000000f0 + lVar26 * 0x178;
      *(ulong *)(lVar18 + 0x70) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0x70));
      *(float *)(lVar18 + 0x78) = fVar36 + *(float *)(lVar18 + 0x78);
      *(ulong *)(lVar18 + 0x98) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0x98));
      *(float *)(lVar18 + 0xa0) = fVar36 + *(float *)(lVar18 + 0xa0);
      *(ulong *)(lVar18 + 0xc0) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0xc0));
      *(float *)(lVar18 + 200) = fVar36 + *(float *)(lVar18 + 200);
      *(ulong *)(lVar18 + 0xe8) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar18 + 0xe8));
      *(float *)(lVar18 + 0xf0) = fVar36 + *(float *)(lVar18 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (unaff_w25 < uVar13) {
        if (*(int *)(in_stack_000000f0 + lVar26 * 0x178 + 0x68) == iStack0000000000000030) {
          lVar18 = in_stack_000000f0 + lVar26 * 0x178;
          *(ulong *)(lVar18 + 0x70) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0x70));
          *(float *)(lVar18 + 0x78) = fVar36 + *(float *)(lVar18 + 0x78);
          *(ulong *)(lVar18 + 0x98) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0x98) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0x98));
          *(float *)(lVar18 + 0xa0) = fVar36 + *(float *)(lVar18 + 0xa0);
          *(ulong *)(lVar18 + 0xc0) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0xc0) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0xc0));
          *(float *)(lVar18 + 200) = fVar36 + *(float *)(lVar18 + 200);
          *(ulong *)(lVar18 + 0xe8) =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0xe8) >> 0x20),
                        fVar40 + (float)*(undefined8 *)(lVar18 + 0xe8));
          *(float *)(lVar18 + 0xf0) = fVar36 + *(float *)(lVar18 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar13 <= unaff_w25) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar13 = *(uint *)(in_stack_000000f0 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar27 = in_stack_000000f0 + lVar26 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar29;
  if (uVar13 <= unaff_w25) goto LAB_035575f4;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar27 = in_stack_000000f0 + lVar26 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar29;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar29;
  uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar29;
  *(undefined1 *)(lVar18 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar11 == 0) {
    pcVar20 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar20)();
  }
  else if (iVar11 == 1) {
    pcVar20 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + lVar26 * 0x178;
  uVar31 = *(undefined8 *)(lVar18 + 0x11c);
  *(undefined8 *)(lVar18 + 0x11c) =
       CONCAT44(fVar39 + (float)((ulong)uVar31 >> 0x20),fVar40 + (float)uVar31);
  *(float *)(lVar18 + 0x124) = fVar36 + *(float *)(lVar18 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + lVar26 * 0x178;
  *(ulong *)(lVar18 + 0x110) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0x110) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar18 + 0x110));
  *(float *)(lVar18 + 0x118) = fVar36 + *(float *)(lVar18 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + lVar26 * 0x178;
  *(ulong *)(lVar18 + 0x128) =
       CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar18 + 0x128) >> 0x20),
                fVar40 + (float)*(undefined8 *)(lVar18 + 0x128));
  *(float *)(lVar18 + 0x130) = fVar36 + *(float *)(lVar18 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  lVar18 = lVar18 + lVar26 * 0x178;
  *(float *)(lVar18 + 0x134) = fVar40 + *(float *)(lVar18 + 0x134);
  *(ulong *)(lVar18 + 0x138) =
       CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(lVar18 + 0x138) >> 0x20),
                fVar39 + (float)*(undefined8 *)(lVar18 + 0x138));
  lVar18 = *in_stack_00000170;
  if ((lVar18 == 0) || (lVar27 = *(long *)(lVar18 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar13 = *(uint *)(lVar27 + 0x18);
  if (uVar13 <= unaff_w25) goto LAB_035575f4;
  lVar21 = lVar27 + lVar26 * 0x178;
  uVar14 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar21 + 0x140) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar21 + 0x140));
  fVar41 = fVar39 + *(float *)(lVar21 + 0x150);
  uVar32 = (ulong)(uint)fVar41;
  uVar33 = CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar21 + 0x148) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar21 + 0x148));
  *(float *)(lVar21 + 0x150) = fVar41;
  *(ulong *)(lVar21 + 0x140) = uVar14;
  *(ulong *)(lVar21 + 0x148) = uVar33;
  if (in_stack_00000160 == uVar12) {
    uVar12 = *unaff_x20 - 1;
    if (unaff_w25 == uVar12) goto LAB_03555b44;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x50);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar21 = (long)(int)uVar12;
    lVar22 = lVar18 + lVar21 * 0x5c;
    uVar33 = (ulong)(uint)*(float *)(lVar22 + 0x58);
    fVar41 = fVar39 + *(float *)(lVar22 + 0x54);
    uVar14 = (ulong)(uint)fVar41;
    fVar37 = fVar40 + *(float *)(lVar22 + 0x58);
    uVar32 = (ulong)(uint)fVar37;
    *(ulong *)(lVar22 + 0x4c) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20),
                  fVar39 + (float)*(undefined8 *)(lVar22 + 0x4c));
    *(float *)(lVar22 + 0x54) = fVar41;
    *(float *)(lVar22 + 0x58) = fVar37;
    if (uVar13 <= *(uint *)(lVar22 + 0x34)) goto LAB_035575f4;
    uVar29 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar22 + 0x34) * 0x178 + 0x11c);
    lVar18 = lVar18 + lVar21 * 0x5c;
    *(float *)(lVar18 + 0x70) = fVar41;
    *(undefined4 *)(lVar18 + 0x6c) = uVar29;
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar27 = *(long *)(lVar18 + 0x50), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar18 = *(long *)(lVar18 + 0x38);
    if (lVar18 == 0) goto LAB_035574b8;
    uVar12 = *(uint *)(lVar27 + lVar21 * 0x5c + 0x40);
    if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar27 = lVar27 + lVar21 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar12 = *unaff_x20 - 1;
LAB_03555b44:
    if (unaff_w25 == uVar12) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar27 = *(long *)(lVar18 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar21 = lVar27 + lVar23 * 0x5c;
      uVar33 = (ulong)(uint)*(float *)(lVar21 + 0x58);
      uVar14 = CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar21 + 0x4c) >> 0x20),
                        fVar39 + (float)*(undefined8 *)(lVar21 + 0x4c));
      fVar41 = fVar39 + *(float *)(lVar21 + 0x54);
      fVar40 = fVar40 + *(float *)(lVar21 + 0x58);
      uVar32 = (ulong)(uint)fVar40;
      *(ulong *)(lVar21 + 0x4c) = uVar14;
      *(float *)(lVar21 + 0x54) = fVar41;
      *(float *)(lVar21 + 0x58) = fVar40;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar21 + 0x34)) goto LAB_035575f4;
      uVar29 = *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar21 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar23 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar41;
      *(undefined4 *)(lVar27 + 0x6c) = uVar29;
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar27 = *(long *)(lVar18 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      uVar12 = *(uint *)(lVar27 + lVar23 * 0x5c + 0x40);
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar27 = lVar27 + lVar23 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  fVar41 = fStack000000000000016c;
  uVar15 = FUN_026b82c4(fStack000000000000016c,0);
  if (((((uVar15 & 1) == 0) && (1 < (int)fVar41 - 0x2010U)) && (fVar41 != 2.42425e-43)) &&
     (fVar41 != 6.30584e-44)) {
    if ((uStack000000000000011c & 1) == 0) {
      if (uStack000000000000015c != 1) {
LAB_0355686c:
        uStack000000000000011c = 0;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b81f8(fStack000000000000016c,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar41 = fStack000000000000016c;
        uVar15 = FUN_026b63d8(fStack000000000000016c,0);
        if (((fVar41 != 1.14949e-41) && ((uVar15 & 1) == 0)) && (*unaff_x20 != 1))
        goto LAB_0355686c;
      }
    }
    else if (((uStack000000000000015c != 1) &&
             ((int)unaff_w25 < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
            (((int)unaff_w25 < *unaff_x20 &&
             ((fStack000000000000016c == 1.15145e-41 || (fStack000000000000016c == 5.46506e-44))))))
    {
      if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25 - 1) goto LAB_035575f4;
      uVar3 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b82c4(uVar3,0);
      if ((uVar15 & 1) != 0) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar3 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b82c4(uVar3,0);
        if ((uVar15 & 1) != 0) goto LAB_03555d68;
      }
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b82c4(fStack000000000000016c,0);
      iVar11 = iStack0000000000000128;
      if ((uVar15 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar11 = unaff_w25 - 1;
    }
    lVar18 = *in_stack_00000170;
    if (lVar18 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar18 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar12 = *(uint *)(lVar18 + 0x24);
    iVar10 = *(int *)(lVar27 + 0x18);
    if (iVar10 < (int)(uVar12 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar18 + 0x40),iVar10 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
    }
    lVar18 = *(long *)(lVar18 + 0x40);
    if (lVar18 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar18 = lVar18 + (long)(int)uVar12 * 0x18;
    *(long **)(lVar18 + 0x20) = unaff_x19;
    *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
    *(int *)(lVar18 + 0x2c) = iVar11;
    *(uint *)(lVar18 + 0x30) = (iVar11 - uStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar18 = unaff_x19[0x6d];
    if (lVar18 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar18 + 0x50);
    *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar27 = lVar27 + lVar23 * 0x5c;
    uStack000000000000011c = 0;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if ((uStack000000000000011c & 1) == 0) {
      uStack0000000000000158 = unaff_w25;
    }
    if (unaff_w25 == *unaff_x20 - 1U) {
      lVar18 = *in_stack_00000170;
      if (lVar18 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar18 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar12 = *(uint *)(lVar18 + 0x24);
      iVar11 = *(int *)(lVar27 + 0x18);
      if (iVar11 < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar18 + 0x40),iVar11 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x40);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar18 = lVar18 + (long)(int)uVar12 * 0x18;
      *(long **)(lVar18 + 0x20) = unaff_x19;
      *(uint *)(lVar18 + 0x28) = uStack0000000000000158;
      *(uint *)(lVar18 + 0x2c) = unaff_w25;
      *(uint *)(lVar18 + 0x30) = uStack000000000000015c - uStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = unaff_x19[0x6d];
      if (lVar18 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar18 + 0x50);
      *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar27 = lVar27 + lVar23 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_03555d68:
    uStack000000000000011c = 1;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
  goto LAB_035574b8;
  uVar12 = *(uint *)(lVar18 + 0x18);
  if (uVar12 <= unaff_w25) goto LAB_035575f4;
  if ((*(byte *)(lVar18 + lVar26 * 0x178 + 400) >> 2 & 1) == 0) {
    if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
      uStack0000000000000118 = 0;
    }
    else {
LAB_03555da0:
      if (uVar12 <= unaff_w25 - 1) goto LAB_035575f4;
      lVar27 = *unaff_x19;
      uVar12 = *(uint *)(lVar18 + unaff_x27 + -0x330);
      uVar29 = *(undefined4 *)(lVar18 + unaff_x27 + -0x2f8);
LAB_035562ec:
      pcVar20 = *(code **)(lVar27 + 0x8d8);
LAB_035562f4:
      uVar33 = (ulong)uVar12;
      uVar14 = (ulong)(uint)fStack0000000000000070;
      uVar32 = (ulong)uStack0000000000000074;
      (*pcVar20)(in_stack_00000078,uVar14,uVar32,uVar33,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar29);
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
    lVar18 = lVar18 + lVar26 * 0x178;
    iVar11 = *(int *)(lVar18 + 0x68);
    *(undefined4 *)(lVar18 + 0x16c) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)in_stack_00000160))
       || (((int)unaff_x19[0x5c] == 5 && (iVar11 + 1 != (int)unaff_x19[0x67])))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar41 = fStack000000000000016c;
    uVar15 = FUN_026b63d8(fStack000000000000016c,0);
    if ((fVar41 != 1.14949e-41) && ((uVar15 & 1) == 0)) {
      lVar18 = *in_stack_00000170;
      if ((lVar18 == 0) || (lVar27 = *(long *)(lVar18 + 0x38), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= unaff_w25) goto LAB_035575f4;
      fVar41 = *(float *)(lVar27 + lVar26 * 0x178 + 0x160);
      if (unaff_s15 <= fVar41) {
        unaff_s15 = fVar41;
      }
      if (fStack0000000000000100 <= ABS(unaff_s9)) {
        fStack0000000000000100 = ABS(unaff_s9);
      }
      if (iVar11 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *in_stack_00000170;
          if (lVar18 == 0) goto LAB_035574b8;
          lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar27 + 0x15a8);
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar37 = *(float *)(lVar18 + lVar26 * 0x178 + 0x14c);
      fVar41 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar37 = fVar37 + unaff_s15 * fVar41;
      if (fVar37 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar37;
      }
      uVar14 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar11;
    }
    if ((uStack0000000000000118 & 1) == 0) {
      uStack0000000000000118 = 0;
      if ((((fStack000000000000016c == 1.82169e-44) ||
           (((uint)fStack000000000000016c & 0xfffe) == 10)) || ((int)uVar5 < (int)unaff_w25)) ||
         ((bool)(bVar9 ^ 1))) goto LAB_03556364;
      if (unaff_w25 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b97f8(fStack000000000000016c,0);
        if ((uVar15 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar18 = lVar18 + lVar26 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar18 + 0x160);
      in_stack_00000078 = *(uint *)(lVar18 + 0x11c);
      uVar32 = (ulong)in_stack_00000078;
      bVar8 = unaff_s15 != 0.0;
      fVar41 = in_stack_00000088._4_4_;
      if (bVar8) {
        fVar41 = unaff_s15;
      }
      unaff_s15 = fVar41;
      in_stack_00000090 = *(undefined4 *)(lVar18 + 0x168);
      uStack0000000000000074 = 0;
      fVar41 = unaff_s9;
      if (bVar8) {
        fVar41 = fStack0000000000000100;
      }
      uVar14 = (ulong)(uint)fVar41;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar41;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + lVar26 * 0x178;
          lVar27 = *unaff_x19;
          uVar12 = *(uint *)(lVar18 + 0x128);
          uVar29 = *(undefined4 *)(lVar18 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((unaff_w25 == uVar4) || ((int)uVar5 <= (int)unaff_w25)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      bVar9 = fStack000000000000016c == 1.14949e-41;
      uVar14 = FUN_026b63d8(fStack000000000000016c,0);
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        lVar27 = lVar26;
        uVar12 = unaff_w25;
        if (bVar9 || (uVar14 & 1) != 0) {
          lVar27 = in_stack_00000150;
          uVar12 = uVar5;
        }
        if (uVar12 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + lVar27 * 0x178;
          uVar12 = *(uint *)(lVar18 + 0x128);
          uVar29 = *(undefined4 *)(lVar18 + 0x160);
          pcVar20 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar9) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        uVar12 = *(uint *)(lVar18 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < *unaff_x20 + -1) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      uVar15 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar18 + unaff_x27),0);
      if ((uVar15 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0)) {
          if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + lVar26 * 0x178;
            uVar33 = (ulong)*(uint *)(lVar18 + 0x128);
            uVar32 = (ulong)uStack0000000000000074;
            uVar14 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (in_stack_00000078,uVar14,uVar32,uVar33,fStack0000000000000104,0,
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
  if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
  unaff_x29 = 0x5c;
  if (lVar19 == 0) goto LAB_035574b8;
  uVar12 = *(uint *)(lVar18 + lVar26 * 0x178 + 400);
  fVar41 = (float)FUN_03776a30(lVar19 + 0x50,0);
  if ((uVar12 >> 6 & 1) == 0) {
    if ((uStack000000000000012c & 1) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w25 - 1) goto LAB_035575f4;
      uVar12 = *(uint *)(lVar18 + unaff_x27 + -0x330);
      fVar39 = *(float *)(lVar18 + unaff_x27 + -0x30c);
      pcVar20 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar33 = (ulong)uVar12;
      uVar14 = (ulong)(uint)fStack000000000000009c;
      uVar32 = (ulong)uStack0000000000000098;
      (*pcVar20)(in_stack_000000a0,uVar14,uVar32,uVar33,in_stack_000000a8 * fVar41 + fVar39,0,
                 in_stack_000000a8,in_stack_000000a8);
    }
LAB_03556948:
    uStack000000000000012c = 0;
  }
  else {
    lVar18 = *in_stack_00000170;
    if ((lVar18 == 0) || (lVar27 = *(long *)(lVar18 + 0x38), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(undefined4 *)(lVar27 + lVar26 * 0x178 + 0x174) = in_stack_000017c4;
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)in_stack_00000160))
       || (((int)unaff_x19[0x5c] == 5 &&
           (*(int *)(lVar27 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((((fStack000000000000016c == 1.82169e-44) || (((uint)fStack000000000000016c & 0xfffe) == 10)
         ) || ((int)uVar5 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar9)) {
LAB_035564e8:
      if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
    }
    else {
      if (unaff_w25 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b97f8(fStack000000000000016c,0);
        if ((uVar15 & 1) != 0) goto LAB_035564e8;
        lVar18 = *in_stack_00000170;
        if (lVar18 == 0) goto LAB_035574b8;
      }
      lVar18 = *(long *)(lVar18 + 0x38);
      if (lVar18 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w25) goto LAB_035575f4;
      lVar18 = lVar18 + lVar26 * 0x178;
      in_stack_00000040 = *(float *)(lVar18 + 0x60);
      in_stack_00000038 = *(float *)(lVar18 + 0x14c);
      uVar14 = (ulong)(uint)in_stack_00000038;
      in_stack_000000a0 = *(uint *)(lVar18 + 0x11c);
      uVar32 = (ulong)in_stack_000000a0;
      in_stack_000000a8 = *(float *)(lVar18 + 0x160);
      fStack000000000000009c = fVar41 * in_stack_000000a8 + in_stack_00000038;
      uStack0000000000000098 = 0;
    }
    iVar11 = *unaff_x20;
    if (iVar11 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        if (unaff_w25 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + lVar26 * 0x178;
          lVar27 = *unaff_x19;
          uVar12 = *(uint *)(lVar18 + 0x128);
          fVar39 = *(float *)(lVar18 + 0x14c);
LAB_03556654:
          pcVar20 = *(code **)(lVar27 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    lVar18 = in_stack_00000150;
    if (unaff_w25 == uVar4) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar39 = fStack000000000000016c;
      uVar14 = FUN_026b63d8(fStack000000000000016c,0);
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        uVar12 = *(uint *)(lVar27 + 0x18);
        if (fVar39 == 1.14949e-41 || (uVar14 & 1) != 0) {
          if (uVar12 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar18 = lVar26;
          if (uVar12 <= unaff_w25) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar27 = lVar27 + lVar18 * 0x178;
        fVar39 = *(float *)(lVar27 + 0x14c);
        uVar12 = *(uint *)(lVar27 + 0x128);
        pcVar20 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)unaff_w25 < iVar11) {
      lVar27 = *in_stack_00000170;
      if ((lVar27 != 0) && (lVar23 = *(long *)(lVar27 + 0x38), lVar23 != 0)) {
        if (uStack000000000000015c < *(uint *)(lVar23 + 0x18)) {
          if (*(float *)(lVar23 + unaff_x27 + -0x108) == in_stack_00000040) {
            fVar37 = *(float *)(lVar23 + unaff_x27 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = (ulong)(uint)in_stack_00000038;
            uVar15 = FUN_03567bac(fVar39 + fVar37,uVar14,0);
            if ((uVar15 & 1) != 0) {
              iVar11 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar27 = *in_stack_00000170;
            if (lVar27 == 0) goto LAB_035574b8;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            uVar12 = *(uint *)(lVar27 + 0x18);
            if ((int)unaff_w25 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar12) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)unaff_w25 < iVar11) {
      iVar11 = FUN_036d3364(lVar19,0);
      if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
      lVar18 = *(long *)(in_stack_000000f0 + unaff_x27 + -0x130);
      if (lVar18 == 0) goto LAB_035574b8;
      iVar10 = FUN_036d3364(lVar18,0);
      if (iVar11 != iVar10) goto LAB_03556628;
    }
    if (!bVar9) {
      if ((*in_stack_00000170 != 0) && (lVar18 = *(long *)(*in_stack_00000170 + 0x38), lVar18 != 0))
      {
        if (unaff_w25 - 1 < *(uint *)(lVar18 + 0x18)) {
          lVar27 = *unaff_x19;
          uVar12 = *(uint *)(lVar18 + unaff_x27 + -0x330);
          fVar39 = *(float *)(lVar18 + unaff_x27 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    uStack000000000000012c = 1;
  }
  if ((*in_stack_00000170 == 0) || (param_1 = *(long *)(*in_stack_00000170 + 0x38), param_1 == 0))
  goto LAB_035574b8;
  uVar12 = (uint)*(undefined8 *)(param_1 + 0x18);
  if (uVar12 <= unaff_w25) goto LAB_035575f4;
  unaff_x23 = in_stack_000000f0;
  unaff_x28 = in_stack_00000170;
  if ((*(byte *)(param_1 + lVar26 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      uVar32 = (ulong)uStack00000000000000c0;
      uVar14 = (ulong)(uint)fStack00000000000000dc;
      uVar33 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar14,uVar32,uVar33,fStack00000000000000d0,uVar32);
    }
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)unaff_w25) || ((int)unaff_x19[0x66] < (int)in_stack_00000160))
       || (((int)unaff_x19[0x5c] == 5 &&
           (*(int *)(param_1 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      unaff_w21 = 0;
    }
    else {
      unaff_w21 = 1;
    }
    if (bVar6) goto LAB_03556af8;
    if ((((fStack000000000000016c != 1.82169e-44) && (((uint)fStack000000000000016c & 0xfffe) != 10)
         ) && ((int)unaff_w25 <= (int)uVar5)) && (unaff_w21 == 1)) {
      if (unaff_w25 != uVar5) goto LAB_03556a74;
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b97f8(fStack000000000000016c,0);
      if ((uVar15 & 1) == 0) goto LAB_03556a74;
    }
  }
  bVar6 = false;
  unaff_w25 = uStack000000000000015c;
  uVar12 = in_stack_00000160;
  goto LAB_03556d04;
LAB_03556a74:
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar18 = *(long *)puVar7;
  }
  if ((*in_stack_00000170 == 0) || (param_1 = *(long *)(*in_stack_00000170 + 0x38), param_1 == 0))
  goto LAB_035574b8;
  uVar12 = (uint)*(undefined8 *)(param_1 + 0x18);
  if (uVar12 <= unaff_w25) goto LAB_035575f4;
  lVar18 = *(long *)(lVar18 + 0xb8);
  lVar27 = param_1 + lVar26 * 0x178;
  uVar24 = *(undefined8 *)(lVar27 + 0x184);
  uVar30 = *(undefined8 *)(lVar27 + 0x17c);
  fStack00000000000000d8 = *(float *)(lVar18 + 0x1598);
  fStack00000000000000dc = *(float *)(lVar18 + 0x159c);
  in_w9 = *(float *)(lVar27 + 0x18c);
  in_stack_000000c8 = *(float *)(lVar18 + 0x15a0);
  fStack00000000000000d0 = *(float *)(lVar18 + 0x15a4);
  uStack00000000000000c0 = 0;
LAB_03556af8:
  if (uVar12 <= unaff_w25) goto LAB_035575f4;
  param_1 = param_1 + lVar26 * 0x178;
  fStack000000000000016c = *(float *)(param_1 + 0x128);
  unaff_s12 = *(float *)(param_1 + 0x188);
  unaff_x22 = *(undefined8 *)(param_1 + 0x17c);
  unaff_s14 = *(float *)(param_1 + 0x184);
  unaff_s13 = *(float *)(param_1 + 0x18c);
  in_stack_000017b0 = uVar30;
  in_stack_000017b8 = uVar24;
  in_stack_000017c0 = in_w9;
  goto code_r0x03556b2c;
  while( true ) {
    lVar18 = *unaff_x28;
    lVar27 = lVar27 + 1;
    lVar26 = lVar26 + 0x50;
    if (lVar18 == 0) break;
LAB_03557110:
    uVar15 = lVar27 + 1;
    if ((long)*(int *)(lVar18 + 0x34) <= (long)uVar15) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
    FUN_03596a20(lVar18 + lVar26 + 0x70,0);
    lVar18 = unaff_x19[0xe1];
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
    uVar24 = *(undefined8 *)(lVar18 + lVar27 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar16 = FUN_036d35a8(uVar24,0,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar18 = *(long *)(*unaff_x28 + 0x60), lVar18 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar15) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar18 + lVar26 + 0x70,1,0);
      }
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a460c(lVar18,*(undefined8 *)(lVar19 + lVar26 + 0x80),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4810(lVar18,*(undefined8 *)(lVar19 + lVar26 + 0x98),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a48bc(lVar18,*(undefined8 *)(lVar19 + lVar26 + 0xa0),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Material__GetColorArray(lVar18,0);
      if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      if (lVar18 == 0) break;
      FUN_036a4e24(lVar18,*(undefined8 *)(lVar19 + lVar26 + 0xa8),0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = UnityEngine_Material__GetColorArray(lVar18,0), lVar18 == 0))
      break;
      FUN_036aa280(lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if (lVar18 == 0) break;
      lVar18 = FUN_037b514c(lVar18,0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + lVar27 * 8 + 0x28);
      if ((lVar19 == 0) || (uVar24 = UnityEngine_Material__GetColorArray(lVar19,0), lVar18 == 0))
      break;
      FUN_0390f3a4(lVar18,uVar24,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390eec8(uVar30,uVar14,uVar32,uVar33,lVar18,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + lVar27 * 8 + 0x28);
      if ((lVar18 == 0) || (lVar18 = FUN_037b514c(lVar18,0), lVar18 == 0)) break;
      FUN_0390ed78(lVar18,uVar12 & 1,0);
      lVar18 = unaff_x19[0xe1];
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_035575f4;
      plVar25 = *(long **)(lVar18 + lVar27 * 8 + 0x28);
      uVar13 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar25 == (long *)0x0) break;
      (**(code **)(*plVar25 + 0x2c8))(plVar25,uVar13 & 1,*(undefined8 *)(*plVar25 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


