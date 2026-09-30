/*
FUNCTION_NAME: UnityEngine.Animator$$PlayInFixedTime
ENTRY_POINT: 035569cc
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


void UnityEngine_Animator__PlayInFixedTime
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,ulong param_5)

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
  long lVar14;
  ulong uVar15;
  char cVar16;
  long lVar17;
  code *pcVar18;
  undefined8 in_x9;
  int in_w10;
  long lVar19;
  long lVar20;
  long lVar21;
  long *unaff_x19;
  int *unaff_x20;
  long *plVar22;
  long unaff_x22;
  undefined8 uVar23;
  long unaff_x23;
  long lVar24;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_s14;
  float fVar36;
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
  undefined8 in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
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
  
code_r0x035569cc:
  if (in_w10 < (int)in_stack_00000160) goto LAB_03556a04;
  if (((int)unaff_x19[0x5c] == 5) &&
     (*(int *)(param_1 + unaff_x24 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x67]))
  goto LAB_03556a04;
  bVar1 = true;
LAB_03556a08:
  uVar12 = (uint)in_x9;
  uVar11 = (uint)in_stack_00000150;
  if ((in_stack_00000110._4_4_ & 1) == 0) {
    if (in_stack_00000168._4_4_ == 0xd) goto LAB_035569b4;
    if ((in_stack_00000168._4_4_ & 0xfffe) == 10) goto LAB_035569b4;
    if ((int)uVar11 < (int)unaff_w25) goto LAB_035569b4;
    if (!bVar1) goto LAB_035569b4;
    if (unaff_w25 == uVar11) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
      if ((uVar13 & 1) != 0) goto LAB_035569b4;
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar14 = *(long *)puVar7;
    }
    unaff_x22 = 0x178;
    if ((*unaff_x28 == 0) || (param_1 = *(long *)(*unaff_x28 + 0x38), param_1 == 0))
    goto LAB_035574b8;
    uVar12 = (uint)*(undefined8 *)(param_1 + 0x18);
    if (uVar12 <= unaff_w25) goto LAB_035575f4;
    lVar14 = *(long *)(lVar14 + 0xb8);
    lVar20 = param_1 + unaff_x24 * 0x178;
    in_stack_000017b8 = *(undefined8 *)(lVar20 + 0x184);
    in_stack_000017b0 = *(undefined8 *)(lVar20 + 0x17c);
    fStack00000000000000d8 = *(float *)(lVar14 + 0x1598);
    fStack00000000000000dc = *(float *)(lVar14 + 0x159c);
    in_stack_000017c0 = *(float *)(lVar20 + 0x18c);
    in_stack_000000c8 = *(float *)(lVar14 + 0x15a0);
    fStack00000000000000d0 = *(float *)(lVar14 + 0x15a4);
    uStack00000000000000c0 = 0;
  }
  if (unaff_w25 < uVar12) {
    param_1 = param_1 + unaff_x24 * unaff_x22;
    fVar28 = *(float *)(param_1 + 0x128);
    fVar33 = *(float *)(param_1 + 0x188);
    uVar23 = *(undefined8 *)(param_1 + 0x17c);
    fVar36 = *(float *)(param_1 + 0x184);
    uVar27 = *(undefined8 *)(param_1 + 0x184);
    fVar35 = *(float *)(param_1 + 0x18c);
    fVar30 = *(float *)(param_1 + 0x11c);
    fVar29 = *(float *)(param_1 + 0x148);
    fVar32 = *(float *)(param_1 + 0x150);
    in_stack_00000178 = uVar23;
    fStack0000000000000180 = fVar36;
    fStack0000000000000184 = fVar33;
    in_stack_00000188 = fVar35;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar13 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar14 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar14);
      }
      fVar28 = fVar28 + (float)in_stack_000017b8;
      param_4 = (ulong)(uint)fVar28;
      fVar30 = fVar30 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar32 = fVar32 - in_stack_000017c0;
      param_3 = (ulong)(uint)fVar32;
      fVar29 = fVar29 + (float)((ulong)in_stack_000017b8 >> 0x20);
      param_5 = (ulong)(uint)fVar29;
      if (fVar30 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar30;
      }
      if (fVar32 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar32;
      }
      if (in_stack_000000c8 <= fVar28) {
        in_stack_000000c8 = fVar28;
      }
      if (fStack00000000000000d0 <= fVar29) {
        fStack00000000000000d0 = fVar29;
      }
    }
    else {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar14);
      }
      fVar30 = (fVar30 + (in_stack_000000c8 - (float)in_stack_000017b8)) * 0.5;
      param_5 = (ulong)(uint)fVar30;
      if (fVar32 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar32;
      }
      param_3 = (ulong)(uint)fStack00000000000000dc;
      param_4 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar29) {
        fStack00000000000000d0 = fVar29;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,param_4);
      fStack00000000000000dc = fVar32 - fVar35;
      in_stack_000000c8 = fVar28 + fVar36;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar29 + fVar33;
      fStack00000000000000d8 = fVar30;
      in_stack_000017b0 = uVar23;
      in_stack_000017b8 = uVar27;
      in_stack_000017c0 = fVar35;
    }
    unaff_x22 = 0x178;
    uVar12 = in_stack_00000160;
    if ((((*unaff_x20 == 1) || (unaff_w25 == (uint)in_stack_000000e0)) ||
        ((int)uVar11 <= (int)unaff_w25)) || (!bVar1)) {
      param_4 = (ulong)uStack00000000000000c0;
      param_3 = (ulong)(uint)fStack00000000000000dc;
      param_5 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,param_4);
      in_stack_00000110._4_4_ = 0;
      unaff_w25 = uStack000000000000015c;
    }
    else {
      in_stack_00000110._4_4_ = 1;
      unaff_w25 = uStack000000000000015c;
    }
LAB_03556d04:
    puVar7 = OVRPlugin_Media_TypeInfo;
    iVar10 = *unaff_x20;
    uStack000000000000015c = unaff_w25 + 1;
    unaff_x27 = unaff_x27 + 0x178;
    iStack0000000000000128 = iStack0000000000000128 + 1;
    if (iVar10 <= (int)unaff_w25) {
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_035574b8;
      *(int *)(lVar14 + 0x18) = iVar10;
      lVar20 = unaff_x19[0xd4];
      *(uint *)(lVar14 + 0x2c) = uVar12 + 1;
      if (iVar10 < 1 || iStack00000000000000d4 == 0) {
        iStack00000000000000d4 = 1;
      }
      *(int *)(lVar14 + 0x1c) = (int)lVar20;
      *(int *)(lVar14 + 0x24) = iStack00000000000000d4;
      *(int *)(lVar14 + 0x30) = (int)unaff_x19[0x96] + 1;
      if (((int)unaff_x19[99] != 0xff) ||
         (uVar13 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar13 & 1) == 0)) goto LAB_03554724;
      lVar14 = unaff_x19[0xdf];
      if (lVar14 != 0) {
        (**(code **)(lVar14 + 0x18))
                  (*(undefined8 *)(lVar14 + 0x40),*unaff_x28,*(undefined8 *)(lVar14 + 0x28));
      }
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar10 = FUN_03911ee4(unaff_x19[0xe5],0);
      if (iVar10 != 0x19) {
        lVar14 = unaff_x19[0xe5];
        if (lVar14 == 0) goto LAB_035574b8;
        uVar11 = FUN_03911ee4(lVar14,0);
        FUN_03911f20(lVar14,uVar11 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar14 = *(long *)(*unaff_x28 + 0x60), lVar14 == 0))
        goto LAB_035574b8;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035575f4;
        FUN_03596b20(lVar14 + 0x20,1,0);
      }
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x30),0);
      if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x48),0);
      if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x50),0);
      if ((unaff_x19[0x6d] == 0) || (lVar14 = *(long *)(unaff_x19[0x6d] + 0x60), lVar14 == 0))
      goto LAB_035574b8;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_035575f4;
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar14 + 0x58),0);
      if (unaff_x19[0x74] == 0) goto LAB_035574b8;
      FUN_036aa280(unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar27 = FUN_0390ef60(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_035574b8;
      uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_035574b8;
      lVar24 = 0;
      lVar20 = 0;
      goto LAB_03557110;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w25) goto LAB_035575f4;
    if ((*unaff_x28 == 0) || (lVar14 = *(long *)(*unaff_x28 + 0x50), lVar14 == 0))
    goto LAB_035574b8;
    unaff_x24 = (long)(int)unaff_w25;
    lVar20 = unaff_x23 + unaff_x24 * unaff_x22;
    in_stack_00000160 = *(uint *)(lVar20 + 100);
    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
    lVar17 = (long)(int)in_stack_00000160;
    lVar14 = lVar14 + lVar17 * unaff_x29;
    lVar24 = *(long *)(lVar20 + 0x38);
    uVar3 = *(ushort *)(lVar20 + 0x20);
    uVar5 = *(uint *)(lVar14 + 0x3c);
    in_stack_000000e0 = (long)(int)uVar5;
    uVar11 = *(uint *)(lVar14 + 0x68);
    iVar2 = *(int *)(lVar14 + 0x20);
    iVar10 = *(int *)(lVar14 + 0x28);
    iVar9 = *(int *)(lVar14 + 0x2c);
    uVar6 = *(uint *)(lVar14 + 0x40);
    in_stack_00000150 = (long)(int)uVar6;
    fVar32 = *(float *)(lVar14 + 0x4c);
    fVar33 = *(float *)(lVar14 + 0x54);
    fVar30 = *(float *)(lVar14 + 0x58);
    fVar31 = *(float *)(lVar14 + 0x5c);
    fVar35 = *(float *)(lVar14 + 0x60);
    fVar36 = *(float *)(lVar14 + 0x6c);
    fVar34 = *(float *)(lVar14 + 0x70);
    fVar28 = *(float *)(lVar14 + 0x74);
    fVar29 = *(float *)(lVar14 + 0x78);
    in_stack_00000168._4_4_ = (uint)uVar3;
    if ((int)uVar11 < 9) {
      switch(uVar11) {
      case 1:
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_000000f8._4_4_ = fVar35 + 0.0;
        }
        else {
          in_stack_000000f8._4_4_ = 0.0 - fVar30;
        }
        break;
      case 2:
LAB_03555018:
        in_stack_000000f8._4_4_ = (fVar35 + fVar31 * 0.5) - fVar30 * 0.5;
        break;
      default:
        goto switchD_03554f58_caseD_3;
      case 4:
        in_stack_000000f8._4_4_ = (fVar31 + fVar35) - fVar30;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar31 + fVar35;
        }
        break;
      case 8:
        goto switchD_03554f58_caseD_8;
      }
LAB_03555088:
      in_stack_000000e8 = 0;
    }
    else if (uVar11 == 0x10) {
switchD_03554f58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
          if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b8cc4(uVar4,0);
          if ((uVar13 & 1) == 0) {
            bVar1 = (int)in_stack_00000160 < (int)unaff_x19[0x95];
          }
          else {
            bVar1 = false;
          }
          if ((fVar30 <= fVar31) && (!bVar1 && uVar11 >> 4 == 0)) {
            in_stack_000000f8._4_4_ = fVar35;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar31 + fVar35;
            }
            goto LAB_03555088;
          }
          if (((uStack000000000000015c == 1) || (in_stack_00000160 != uVar12)) ||
             (unaff_w25 == *(uint *)((long)unaff_x19 + 0x324))) {
            in_stack_000000f8._4_4_ = fVar35;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000f8._4_4_ = fVar31 + fVar35;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000028 = FUN_026b97f8(in_stack_00000168._4_4_,0);
            in_stack_000000e8 = 0;
          }
          else {
            cVar16 = (char)unaff_x19[0x1e];
            fVar35 = -fVar30;
            if (cVar16 != '\0') {
              fVar35 = fVar30;
            }
            if (*(uint *)(in_stack_000000f0 + 0x18) <= uVar5) goto LAB_035575f4;
            iVar9 = (int)*(char *)(in_stack_000000f0 + in_stack_000000e0 * 0x178 + 0x194) +
                    (-iVar2 - (uStack0000000000000028 & 1)) + iVar9 + -1;
            if (iVar9 < 1) {
              fVar30 = 1.0;
              iVar9 = 1;
            }
            else {
              fVar30 = *(float *)((long)unaff_x19 + 0x2dc);
            }
            if (in_stack_00000168._4_4_ == 9) {
LAB_03556e74:
              fVar30 = 1.0 - fVar30;
            }
            else {
              if (in_stack_00000168._4_4_ != 0xa0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
                cVar16 = (char)unaff_x19[0x1e];
                if ((uVar13 & 1) != 0) goto LAB_03556e74;
              }
              iVar9 = (iVar2 - (~uStack0000000000000028 & 1)) + iVar10;
            }
            fVar30 = ((fVar31 + fVar35) * fVar30) / (float)iVar9;
            if (cVar16 == '\0') {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar30;
              in_stack_000000e8 =
                   CONCAT44((float)((ulong)in_stack_000000e8 >> 0x20) + 0.0,
                            (float)in_stack_000000e8 + 0.0);
            }
            else {
              in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar30;
            }
          }
        }
      }
      else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
    }
    else if (uVar11 == 0x20) {
      fVar30 = fVar36 + fVar28;
      goto LAB_03555018;
    }
switchD_03554f58_caseD_3:
    uVar11 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar11 <= unaff_w25) goto LAB_035575f4;
    lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar31 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
    fVar30 = (float)in_stack_000000b8 + (float)in_stack_000000e8;
    fVar35 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)((ulong)in_stack_000000e8 >> 0x20);
    if (*(char *)(lVar14 + 0x194) == '\0') goto LAB_03555938;
    iVar10 = *(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x2c);
    if (iVar10 != 0) goto LAB_0355574c;
    fVar25 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000160,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
    case 0:
      lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar20 + 0x84) = 0;
      *(undefined4 *)(lVar20 + 0xac) = 0;
      *(undefined4 *)(lVar20 + 0xd4) = 0x3f800000;
      fVar25 = 1.0;
      break;
    case 1:
      fVar29 = *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
        lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar28 = (in_stack_000000f8._4_4_ + fVar29) - *(float *)(in_stack_00000080 + 0x230);
        fVar29 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
        goto LAB_035551cc;
      }
      lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar28 = fVar28 - fVar36;
      *(float *)(lVar20 + 0x84) = fVar25 + (fVar29 - fVar36) / fVar28;
      *(float *)(lVar20 + 0xac) = fVar25 + (*(float *)(lVar20 + 0x98) - fVar36) / fVar28;
      *(float *)(lVar20 + 0xd4) = fVar25 + (*(float *)(lVar20 + 0xc0) - fVar36) / fVar28;
      fVar25 = fVar25 + (*(float *)(lVar20 + 0xe8) - fVar36) / fVar28;
      break;
    case 2:
      lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      fVar28 = (in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0x70)) -
               *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
      *(float *)(lVar20 + 0x84) = fVar25 + fVar28 / fVar29;
      *(float *)(lVar20 + 0xac) =
           fVar25 + ((in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0x98)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      *(float *)(lVar20 + 0xd4) =
           fVar25 + ((in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0xc0)) -
                    *(float *)(in_stack_00000080 + 0x230)) /
                    (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
      fVar25 = fVar25 + ((in_stack_000000f8._4_4_ + *(float *)(lVar20 + 0xe8)) -
                        *(float *)(in_stack_00000080 + 0x230)) /
                        (*(float *)(in_stack_00000080 + 0x238) -
                        *(float *)(in_stack_00000080 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x62]) {
      case 0:
        lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(undefined4 *)(lVar20 + 0x88) = 0;
        *(undefined4 *)(lVar20 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar20 + 0xd8) = 0;
        *(undefined4 *)(lVar20 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar29 = fVar29 - fVar34;
        fVar28 = fVar25 + (*(float *)(lVar20 + 0x74) - fVar34) / fVar29;
        fVar29 = fVar25 + (*(float *)(lVar20 + 0x9c) - fVar34) / fVar29;
        *(float *)(lVar20 + 0x88) = fVar28;
        *(float *)(lVar20 + 0xb0) = fVar29;
        *(float *)(lVar20 + 0xd8) = fVar28;
        *(float *)(lVar20 + 0x100) = fVar29;
        break;
      case 2:
        lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar28 = fVar25 + (*(float *)(lVar20 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                          (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
        *(float *)(lVar20 + 0x88) = fVar28;
        fVar29 = *(float *)(unaff_x19 + 0x9c);
        fVar36 = *(float *)(unaff_x19 + 0x9d);
        *(float *)(lVar20 + 0xd8) = fVar28;
        fVar28 = fVar25 + (*(float *)(lVar20 + 0x9c) - fVar29) / (fVar36 - fVar29);
        *(float *)(lVar20 + 0xb0) = fVar28;
        *(float *)(lVar20 + 0x100) = fVar28;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar11 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
      }
      if (uVar11 <= unaff_w25) goto LAB_035575f4;
      lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar28 = *(float *)(lVar20 + 0x15c);
      fVar29 = (1.0 - (*(float *)(lVar20 + 0x88) + *(float *)(lVar20 + 0xb0)) * fVar28) * 0.5;
      fVar36 = fVar25 + *(float *)(lVar20 + 0x88) * fVar28 + fVar29;
      fVar25 = fVar25 + fVar29 + *(float *)(lVar20 + 0xb0) * fVar28;
      *(float *)(lVar20 + 0x84) = fVar36;
      *(float *)(lVar20 + 0xac) = fVar36;
      *(float *)(lVar20 + 0xd4) = fVar25;
      break;
    default:
      goto switchD_0355512c_default;
    }
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = fVar25;
switchD_0355512c_default:
    switch((int)unaff_x19[0x62]) {
    case 0:
      if (uVar11 <= unaff_w25) goto LAB_035575f4;
      lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
      *(undefined4 *)(lVar20 + 0x88) = 0;
      *(undefined4 *)(lVar20 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar20 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar20 + 0x100) = 0;
      break;
    case 1:
      if (unaff_w25 < uVar11) {
        lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
        fVar32 = fVar32 - fVar33;
        fVar28 = (*(float *)(lVar20 + 0x74) - fVar33) / fVar32;
        fVar32 = (*(float *)(lVar20 + 0x9c) - fVar33) / fVar32;
        *(float *)(lVar20 + 0x88) = fVar28;
        goto UnityEngine_Animator__set_stabilizeFeet;
      }
      goto LAB_035575f4;
    case 2:
      if (uVar11 <= unaff_w25) goto LAB_035575f4;
      lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar28 = (*(float *)(lVar20 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar20 + 0x88) = fVar28;
      fVar32 = (*(float *)(lVar20 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
               (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
      *(float *)(lVar20 + 0xb0) = fVar32;
      *(float *)(lVar20 + 0xd8) = fVar32;
      *(float *)(lVar20 + 0x100) = fVar28;
      break;
    case 3:
      if (uVar11 <= unaff_w25) goto LAB_035575f4;
      lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
      fVar29 = *(float *)(lVar20 + 0x15c);
      fVar32 = (1.0 - (*(float *)(lVar20 + 0x84) + *(float *)(lVar20 + 0xd4)) / fVar29) * 0.5;
      fVar28 = *(float *)(lVar20 + 0x84) / fVar29 + fVar32;
      fVar32 = fVar32 + *(float *)(lVar20 + 0xd4) / fVar29;
      *(float *)(lVar20 + 0x88) = fVar28;
      *(float *)(lVar20 + 0xb0) = fVar32;
      *(float *)(lVar20 + 0x100) = fVar28;
      *(float *)(lVar20 + 0xd8) = fVar32;
    }
    if (uVar11 <= unaff_w25) goto LAB_035575f4;
    lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
    unaff_s14 = *(float *)(lVar20 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    if ((*(char *)(lVar20 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_000000f0 + unaff_x24 * 0x178 + 400) & 1) != 0)) {
      unaff_s14 = -unaff_s14;
    }
    fVar28 = in_stack_00000050._4_4_;
    if (((in_stack_00000058 == 2) || (fVar28 = fStack0000000000000034, in_stack_00000058 == 1)) ||
       (fVar28 = fStack000000000000002c, in_stack_00000058 == 0)) {
      unaff_s14 = fVar28 * unaff_s14;
    }
    lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
    fVar32 = *(float *)(lVar20 + 0x88);
    fVar29 = *(float *)(lVar20 + 0x84);
    fVar28 = -2.1474836e+09;
    if (fVar29 != INFINITY) {
      fVar28 = (float)(int)fVar29;
    }
    fVar36 = *(float *)(lVar20 + 0xd4);
    fVar34 = *(float *)(lVar20 + 0xd8);
    fVar33 = -2.1474836e+09;
    if (fVar32 != INFINITY) {
      fVar33 = (float)(int)fVar32;
    }
    uVar26 = FUN_03591d3c(fVar29 - fVar28,fVar32 - fVar33);
    *(undefined4 *)(lVar20 + 0x84) = uVar26;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
    fVar34 = fVar34 - fVar33;
    *(float *)(lVar20 + 0x88) = unaff_s14;
    uVar26 = FUN_03591d3c(fVar29 - fVar28,fVar34);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xac) = uVar26;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
    fVar36 = fVar36 - fVar28;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xb0) = unaff_s14;
    fVar28 = (float)FUN_03591d3c(fVar36,fVar34);
    *(float *)(lVar20 + 0xd4) = fVar28;
    if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25) goto LAB_035575f4;
    *(float *)(lVar20 + 0xd8) = unaff_s14;
    uVar26 = FUN_03591d3c(fVar36,fVar32 - fVar33);
    *(undefined4 *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0xfc) = uVar26;
    uVar11 = (uint)*(undefined8 *)(in_stack_000000f0 + 0x18);
    if (uVar11 <= unaff_w25) goto LAB_035575f4;
    *(float *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x100) = unaff_s14;
    unaff_x20 = in_stack_00000048;
LAB_0355574c:
    if (((int)unaff_w25 < (int)unaff_x19[0x65]) &&
       (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
        if (uVar11 <= unaff_w25) goto LAB_035575f4;
        lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
        *(ulong *)(lVar14 + 0x70) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0x70) >> 0x20),
                      fVar31 + (float)*(undefined8 *)(lVar14 + 0x70));
        *(float *)(lVar14 + 0x78) = fVar35 + *(float *)(lVar14 + 0x78);
        *(ulong *)(lVar14 + 0x98) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0x98) >> 0x20),
                      fVar31 + (float)*(undefined8 *)(lVar14 + 0x98));
        *(float *)(lVar14 + 0xa0) = fVar35 + *(float *)(lVar14 + 0xa0);
        *(ulong *)(lVar14 + 0xc0) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0xc0) >> 0x20),
                      fVar31 + (float)*(undefined8 *)(lVar14 + 0xc0));
        *(float *)(lVar14 + 200) = fVar35 + *(float *)(lVar14 + 200);
        *(ulong *)(lVar14 + 0xe8) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0xe8) >> 0x20),
                      fVar31 + (float)*(undefined8 *)(lVar14 + 0xe8));
        *(float *)(lVar14 + 0xf0) = fVar35 + *(float *)(lVar14 + 0xf0);
        goto UnityEngine_Animator__GetAnimatorClipInfoCount;
      }
      if (((int)in_stack_00000160 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
        if (unaff_w25 < uVar11) {
          if (*(int *)(in_stack_000000f0 + unaff_x24 * 0x178 + 0x68) == iStack0000000000000030) {
            lVar14 = in_stack_000000f0 + unaff_x24 * 0x178;
            *(ulong *)(lVar14 + 0x70) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0x70) >> 0x20),
                          fVar31 + (float)*(undefined8 *)(lVar14 + 0x70));
            *(float *)(lVar14 + 0x78) = fVar35 + *(float *)(lVar14 + 0x78);
            *(ulong *)(lVar14 + 0x98) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0x98) >> 0x20),
                          fVar31 + (float)*(undefined8 *)(lVar14 + 0x98));
            *(float *)(lVar14 + 0xa0) = fVar35 + *(float *)(lVar14 + 0xa0);
            *(ulong *)(lVar14 + 0xc0) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0xc0) >> 0x20),
                          fVar31 + (float)*(undefined8 *)(lVar14 + 0xc0));
            *(float *)(lVar14 + 200) = fVar35 + *(float *)(lVar14 + 200);
            *(ulong *)(lVar14 + 0xe8) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0xe8) >> 0x20),
                          fVar31 + (float)*(undefined8 *)(lVar14 + 0xe8));
            *(float *)(lVar14 + 0xf0) = fVar35 + *(float *)(lVar14 + 0xf0);
            goto UnityEngine_Animator__GetAnimatorClipInfoCount;
          }
          goto UnityEngine_Animator__GetAnimatorTransitionInfo;
        }
        goto LAB_035575f4;
      }
    }
UnityEngine_Animator__GetAnimatorTransitionInfo:
    if (uVar11 <= unaff_w25) goto LAB_035575f4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
      uVar11 = *(uint *)(in_stack_000000f0 + 0x18);
    }
    puVar7 = PTR_DAT_03cbded8;
    uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar20 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    *(undefined4 *)(lVar20 + 0x78) = uVar26;
    if (uVar11 <= unaff_w25) goto LAB_035575f4;
    uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    lVar20 = in_stack_000000f0 + unaff_x24 * 0x178;
    *(undefined8 *)(lVar20 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar20 + 0xa0) = uVar26;
    uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar20 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar20 + 200) = uVar26;
    uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar20 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar20 + 0xf0) = uVar26;
    *(undefined1 *)(lVar14 + 0x194) = 0;
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
    if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar14 = lVar14 + unaff_x24 * 0x178;
    uVar27 = *(undefined8 *)(lVar14 + 0x11c);
    *(undefined8 *)(lVar14 + 0x11c) =
         CONCAT44(fVar30 + (float)((ulong)uVar27 >> 0x20),fVar31 + (float)uVar27);
    *(float *)(lVar14 + 0x124) = fVar35 + *(float *)(lVar14 + 0x124);
    if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar14 = lVar14 + unaff_x24 * 0x178;
    *(ulong *)(lVar14 + 0x110) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0x110) >> 0x20),
                  fVar31 + (float)*(undefined8 *)(lVar14 + 0x110));
    *(float *)(lVar14 + 0x118) = fVar35 + *(float *)(lVar14 + 0x118);
    if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar14 = lVar14 + unaff_x24 * 0x178;
    *(ulong *)(lVar14 + 0x128) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar14 + 0x128) >> 0x20),
                  fVar31 + (float)*(undefined8 *)(lVar14 + 0x128));
    *(float *)(lVar14 + 0x130) = fVar35 + *(float *)(lVar14 + 0x130);
    if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
    lVar14 = lVar14 + unaff_x24 * 0x178;
    *(float *)(lVar14 + 0x134) = fVar31 + *(float *)(lVar14 + 0x134);
    *(ulong *)(lVar14 + 0x138) =
         CONCAT44(fVar35 + (float)((ulong)*(undefined8 *)(lVar14 + 0x138) >> 0x20),
                  fVar30 + (float)*(undefined8 *)(lVar14 + 0x138));
    lVar14 = *in_stack_00000170;
    if ((lVar14 == 0) || (lVar20 = *(long *)(lVar14 + 0x38), lVar20 == 0)) goto LAB_035574b8;
    uVar11 = *(uint *)(lVar20 + 0x18);
    if (uVar11 <= unaff_w25) goto LAB_035575f4;
    lVar19 = lVar20 + unaff_x24 * 0x178;
    param_3 = CONCAT44(fVar31 + (float)((ulong)*(undefined8 *)(lVar19 + 0x140) >> 0x20),
                       fVar31 + (float)*(undefined8 *)(lVar19 + 0x140));
    fVar28 = fVar30 + *(float *)(lVar19 + 0x150);
    param_4 = (ulong)(uint)fVar28;
    param_5 = CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar19 + 0x148) >> 0x20),
                       fVar30 + (float)*(undefined8 *)(lVar19 + 0x148));
    *(float *)(lVar19 + 0x150) = fVar28;
    *(ulong *)(lVar19 + 0x140) = param_3;
    *(ulong *)(lVar19 + 0x148) = param_5;
    if (in_stack_00000160 == uVar12) {
      uVar11 = *unaff_x20 - 1;
      if (unaff_w25 == uVar11) goto LAB_03555b44;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x50);
      if (lVar14 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar19 = (long)(int)uVar12;
      lVar21 = lVar14 + lVar19 * 0x5c;
      param_5 = (ulong)(uint)*(float *)(lVar21 + 0x58);
      fVar28 = fVar30 + *(float *)(lVar21 + 0x54);
      param_3 = (ulong)(uint)fVar28;
      fVar32 = fVar31 + *(float *)(lVar21 + 0x58);
      param_4 = (ulong)(uint)fVar32;
      *(ulong *)(lVar21 + 0x4c) =
           CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar21 + 0x4c) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar21 + 0x4c));
      *(float *)(lVar21 + 0x54) = fVar28;
      *(float *)(lVar21 + 0x58) = fVar32;
      if (uVar11 <= *(uint *)(lVar21 + 0x34)) goto LAB_035575f4;
      uVar26 = *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar21 + 0x34) * 0x178 + 0x11c);
      lVar14 = lVar14 + lVar19 * 0x5c;
      *(float *)(lVar14 + 0x70) = fVar28;
      *(undefined4 *)(lVar14 + 0x6c) = uVar26;
      lVar14 = *in_stack_00000170;
      if ((lVar14 == 0) || (lVar20 = *(long *)(lVar14 + 0x50), lVar20 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_035574b8;
      uVar11 = *(uint *)(lVar20 + lVar19 * 0x5c + 0x40);
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar20 = lVar20 + lVar19 * 0x5c;
      *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar14 + (long)(int)uVar11 * 0x178 + 0x128);
      *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x4c);
      uVar11 = *unaff_x20 - 1;
LAB_03555b44:
      if (unaff_w25 == uVar11) {
        lVar14 = *in_stack_00000170;
        if ((lVar14 == 0) || (lVar20 = *(long *)(lVar14 + 0x50), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar19 = lVar20 + lVar17 * 0x5c;
        param_5 = (ulong)(uint)*(float *)(lVar19 + 0x58);
        param_3 = CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                           fVar30 + (float)*(undefined8 *)(lVar19 + 0x4c));
        fVar28 = fVar30 + *(float *)(lVar19 + 0x54);
        fVar31 = fVar31 + *(float *)(lVar19 + 0x58);
        param_4 = (ulong)(uint)fVar31;
        *(ulong *)(lVar19 + 0x4c) = param_3;
        *(float *)(lVar19 + 0x54) = fVar28;
        *(float *)(lVar19 + 0x58) = fVar31;
        lVar14 = *(long *)(lVar14 + 0x38);
        if (lVar14 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar19 + 0x34)) goto LAB_035575f4;
        uVar26 = *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c);
        lVar20 = lVar20 + lVar17 * 0x5c;
        *(float *)(lVar20 + 0x70) = fVar28;
        *(undefined4 *)(lVar20 + 0x6c) = uVar26;
        lVar14 = *in_stack_00000170;
        if ((lVar14 == 0) || (lVar20 = *(long *)(lVar14 + 0x50), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar14 = *(long *)(lVar14 + 0x38);
        if (lVar14 == 0) goto LAB_035574b8;
        uVar11 = *(uint *)(lVar20 + lVar17 * 0x5c + 0x40);
        if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_035575f4;
        lVar20 = lVar20 + lVar17 * 0x5c;
        *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar14 + (long)(int)uVar11 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x4c);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b82c4(in_stack_00000168._4_4_,0);
    if (((((uVar13 & 1) == 0) && (1 < in_stack_00000168._4_4_ - 0x2010)) &&
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
        uVar13 = FUN_026b81f8(in_stack_00000168._4_4_,0);
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
          if (((in_stack_00000168._4_4_ != 0x200b) && ((uVar13 & 1) == 0)) && (*unaff_x20 != 1))
          goto LAB_0355686c;
        }
      }
      else if (((uStack000000000000015c != 1) &&
               ((int)unaff_w25 < (int)(*(uint *)(in_stack_000000f0 + 0x18) - 1))) &&
              (((int)unaff_w25 < *unaff_x20 &&
               ((in_stack_00000168._4_4_ == 0x2019 || (in_stack_00000168._4_4_ == 0x27)))))) {
        if (*(uint *)(in_stack_000000f0 + 0x18) <= unaff_w25 - 1) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b82c4(uVar4,0);
        if ((uVar13 & 1) != 0) {
          if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(in_stack_000000f0 + unaff_x27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b82c4(uVar4,0);
          if ((uVar13 & 1) != 0) goto LAB_03555d68;
        }
      }
      if (unaff_w25 == *unaff_x20 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b82c4(in_stack_00000168._4_4_,0);
        iVar10 = iStack0000000000000128;
        if ((uVar13 & 1) == 0) goto LAB_03556070;
      }
      else {
LAB_03556070:
        iVar10 = unaff_w25 - 1;
      }
      lVar14 = *in_stack_00000170;
      if (lVar14 == 0) goto LAB_035574b8;
      lVar20 = *(long *)(lVar14 + 0x40);
      if (lVar20 == 0) goto LAB_035574b8;
      uVar11 = *(uint *)(lVar14 + 0x24);
      iVar9 = *(int *)(lVar20 + 0x18);
      if (iVar9 < (int)(uVar11 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar14 + 0x40),iVar9 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo)
        ;
        lVar14 = *in_stack_00000170;
        if (lVar14 == 0) goto LAB_035574b8;
      }
      lVar14 = *(long *)(lVar14 + 0x40);
      if (lVar14 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar14 = lVar14 + (long)(int)uVar11 * 0x18;
      *(long **)(lVar14 + 0x20) = unaff_x19;
      *(uint *)(lVar14 + 0x28) = uStack0000000000000158;
      *(int *)(lVar14 + 0x2c) = iVar10;
      *(uint *)(lVar14 + 0x30) = (iVar10 - uStack0000000000000158) + 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar14 = unaff_x19[0x6d];
      if (lVar14 == 0) goto LAB_035574b8;
      lVar20 = *(long *)(lVar14 + 0x50);
      *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
      if (lVar20 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
      lVar20 = lVar20 + lVar17 * 0x5c;
      uStack000000000000011c = 0;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
    }
    else {
      if ((uStack000000000000011c & 1) == 0) {
        uStack0000000000000158 = unaff_w25;
      }
      if (unaff_w25 == *unaff_x20 - 1U) {
        lVar14 = *in_stack_00000170;
        if (lVar14 == 0) goto LAB_035574b8;
        lVar20 = *(long *)(lVar14 + 0x40);
        if (lVar20 == 0) goto LAB_035574b8;
        uVar11 = *(uint *)(lVar14 + 0x24);
        iVar10 = *(int *)(lVar20 + 0x18);
        if (iVar10 < (int)(uVar11 + 1)) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff025c((long *)(lVar14 + 0x40),iVar10 + 1,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
          lVar14 = *in_stack_00000170;
          if (lVar14 == 0) goto LAB_035574b8;
        }
        lVar14 = *(long *)(lVar14 + 0x40);
        if (lVar14 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_035575f4;
        lVar14 = lVar14 + (long)(int)uVar11 * 0x18;
        *(long **)(lVar14 + 0x20) = unaff_x19;
        *(uint *)(lVar14 + 0x28) = uStack0000000000000158;
        *(uint *)(lVar14 + 0x2c) = unaff_w25;
        *(uint *)(lVar14 + 0x30) = uStack000000000000015c - uStack0000000000000158;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar14 = unaff_x19[0x6d];
        if (lVar14 == 0) goto LAB_035574b8;
        lVar20 = *(long *)(lVar14 + 0x50);
        *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
        if (lVar20 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= in_stack_00000160) goto LAB_035575f4;
        lVar20 = lVar20 + lVar17 * 0x5c;
        iStack00000000000000d4 = iStack00000000000000d4 + 1;
        *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
      }
LAB_03555d68:
      uStack000000000000011c = 1;
    }
LAB_03555d70:
    unaff_x22 = 0x178;
    if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0))
    goto LAB_035574b8;
    uVar11 = *(uint *)(lVar14 + 0x18);
    if (uVar11 <= unaff_w25) goto LAB_035575f4;
    if ((*(byte *)(lVar14 + unaff_x24 * 0x178 + 400) >> 2 & 1) == 0) {
      if ((uStack0000000000000118 & 1) == 0) {
LAB_03556254:
        uStack0000000000000118 = 0;
      }
      else {
LAB_03555da0:
        if (uVar11 <= unaff_w25 - 1) goto LAB_035575f4;
        lVar20 = *unaff_x19;
        uVar11 = *(uint *)(lVar14 + unaff_x27 + -0x330);
        uVar26 = *(undefined4 *)(lVar14 + unaff_x27 + -0x2f8);
LAB_035562ec:
        pcVar18 = *(code **)(lVar20 + 0x8d8);
LAB_035562f4:
        param_5 = (ulong)uVar11;
        param_3 = (ulong)(uint)fStack0000000000000070;
        param_4 = (ulong)uStack0000000000000074;
        (*pcVar18)(in_stack_00000078,param_3,param_4,param_5,fStack0000000000000104,0,
                   in_stack_00000088._4_4_,uVar26);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *(long *)puVar7;
        }
LAB_03556348:
        uStack0000000000000118 = 0;
        unaff_s15 = 0.0;
        fStack0000000000000104 = *(float *)(*(long *)(lVar14 + 0xb8) + 0x15a8);
        fStack0000000000000100 = 0.0;
      }
    }
    else {
      lVar14 = lVar14 + unaff_x24 * 0x178;
      iVar10 = *(int *)(lVar14 + 0x68);
      *(undefined4 *)(lVar14 + 0x16c) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) ||
          ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
         (((int)unaff_x19[0x5c] == 5 && (iVar10 + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
      if ((in_stack_00000168._4_4_ != 0x200b) && ((uVar13 & 1) == 0)) {
        lVar14 = *in_stack_00000170;
        if ((lVar14 == 0) || (lVar20 = *(long *)(lVar14 + 0x38), lVar20 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
        fVar28 = *(float *)(lVar20 + unaff_x24 * 0x178 + 0x160);
        if (unaff_s15 <= fVar28) {
          unaff_s15 = fVar28;
        }
        if (fStack0000000000000100 <= ABS(unaff_s14)) {
          fStack0000000000000100 = ABS(unaff_s14);
        }
        if (iVar10 != in_stack_00000068._4_4_) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *in_stack_00000170;
            if (lVar14 == 0) goto LAB_035574b8;
            lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          else {
            lVar20 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          fStack0000000000000104 = *(float *)(lVar20 + 0x15a8);
        }
        lVar14 = *(long *)(lVar14 + 0x38);
        if (lVar14 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
        if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
        fVar32 = *(float *)(lVar14 + unaff_x24 * 0x178 + 0x14c);
        fVar28 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
        fVar32 = fVar32 + unaff_s15 * fVar28;
        if (fVar32 <= fStack0000000000000104) {
          fStack0000000000000104 = fVar32;
        }
        param_3 = (ulong)(uint)fStack0000000000000104;
        in_stack_00000068._4_4_ = iVar10;
      }
      if ((uStack0000000000000118 & 1) == 0) {
        uStack0000000000000118 = 0;
        if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
            ((int)uVar6 < (int)unaff_w25)) || ((bool)(bVar1 ^ 1))) goto LAB_03556364;
        if (unaff_w25 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar13 & 1) != 0) goto LAB_03556254;
        }
        if ((*in_stack_00000170 == 0) ||
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
        lVar14 = lVar14 + unaff_x24 * 0x178;
        in_stack_00000088._4_4_ = *(float *)(lVar14 + 0x160);
        in_stack_00000078 = *(uint *)(lVar14 + 0x11c);
        param_4 = (ulong)in_stack_00000078;
        bVar8 = unaff_s15 != 0.0;
        fVar28 = in_stack_00000088._4_4_;
        if (bVar8) {
          fVar28 = unaff_s15;
        }
        unaff_s15 = fVar28;
        in_stack_00000090 = *(undefined4 *)(lVar14 + 0x168);
        uStack0000000000000074 = 0;
        fVar28 = unaff_s14;
        if (bVar8) {
          fVar28 = fStack0000000000000100;
        }
        param_3 = (ulong)(uint)fVar28;
        fStack0000000000000070 = fStack0000000000000104;
        fStack0000000000000100 = fVar28;
      }
      if (*unaff_x20 == 1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 != 0)) {
          if (unaff_w25 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + unaff_x24 * 0x178;
            lVar20 = *unaff_x19;
            uVar11 = *(uint *)(lVar14 + 0x128);
            uVar26 = *(undefined4 *)(lVar14 + 0x160);
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
        uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 != 0)) {
          lVar20 = unaff_x24;
          uVar11 = unaff_w25;
          if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
            lVar20 = in_stack_00000150;
            uVar11 = uVar6;
          }
          if (uVar11 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + lVar20 * 0x178;
            uVar11 = *(uint *)(lVar14 + 0x128);
            uVar26 = *(undefined4 *)(lVar14 + 0x160);
            pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
            goto LAB_035562f4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 != 0)) {
          uVar11 = *(uint *)(lVar14 + 0x18);
          goto LAB_03555da0;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < *unaff_x20 + -1) {
        if ((*in_stack_00000170 == 0) ||
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar14 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        uVar13 = FUN_03567ad8(in_stack_00000090,*(undefined4 *)(lVar14 + unaff_x27),0);
        if ((uVar13 & 1) == 0) {
          if ((*in_stack_00000170 != 0) &&
             (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 != 0)) {
            if (unaff_w25 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + unaff_x24 * 0x178;
              param_5 = (ulong)*(uint *)(lVar14 + 0x128);
              param_4 = (ulong)uStack0000000000000074;
              param_3 = (ulong)(uint)fStack0000000000000070;
              (**(code **)(*unaff_x19 + 0x8d8))
                        (in_stack_00000078,param_3,param_4,param_5,fStack0000000000000104,0,
                         in_stack_00000088._4_4_,*(undefined4 *)(lVar14 + 0x160));
              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar14 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *(long *)puVar7;
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
    if ((*in_stack_00000170 == 0) || (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
    unaff_x29 = 0x5c;
    if (lVar24 == 0) goto LAB_035574b8;
    uVar11 = *(uint *)(lVar14 + unaff_x24 * 0x178 + 400);
    fVar28 = (float)FUN_03776a30(lVar24 + 0x50,0);
    if ((uVar11 >> 6 & 1) == 0) {
      if ((uStack000000000000012c & 1) != 0) {
        if ((*in_stack_00000170 == 0) ||
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w25 - 1) goto LAB_035575f4;
        uVar11 = *(uint *)(lVar14 + unaff_x27 + -0x330);
        fVar30 = *(float *)(lVar14 + unaff_x27 + -0x30c);
        pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
        param_5 = (ulong)uVar11;
        param_3 = (ulong)(uint)fStack000000000000009c;
        param_4 = (ulong)uStack0000000000000098;
        (*pcVar18)(in_stack_000000a0,param_3,param_4,param_5,in_stack_000000a8 * fVar28 + fVar30,0,
                   in_stack_000000a8,in_stack_000000a8);
      }
LAB_03556948:
      uStack000000000000012c = 0;
    }
    else {
      lVar14 = *in_stack_00000170;
      if ((lVar14 == 0) || (lVar20 = *(long *)(lVar14 + 0x38), lVar20 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto LAB_035575f4;
      *(undefined4 *)(lVar20 + unaff_x24 * 0x178 + 0x174) = in_stack_000017c4;
      if ((((int)unaff_x19[0x65] < (int)unaff_w25) ||
          ((int)unaff_x19[0x66] < (int)in_stack_00000160)) ||
         (((int)unaff_x19[0x5c] == 5 &&
          (*(int *)(lVar20 + unaff_x24 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((in_stack_00000168._4_4_ == 0xd) || ((in_stack_00000168._4_4_ & 0xfffe) == 10)) ||
          ((int)uVar6 < (int)unaff_w25)) || ((uStack000000000000012c & 1) != 0 || !bVar1)) {
LAB_035564e8:
        if ((uStack000000000000012c & 1) == 0) goto LAB_03556948;
      }
      else {
        if (unaff_w25 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b97f8(in_stack_00000168._4_4_,0);
          if ((uVar13 & 1) != 0) goto LAB_035564e8;
          lVar14 = *in_stack_00000170;
          if (lVar14 == 0) goto LAB_035574b8;
        }
        lVar14 = *(long *)(lVar14 + 0x38);
        if (lVar14 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w25) goto LAB_035575f4;
        lVar14 = lVar14 + unaff_x24 * 0x178;
        in_stack_00000040 = *(float *)(lVar14 + 0x60);
        in_stack_00000038 = *(float *)(lVar14 + 0x14c);
        param_3 = (ulong)(uint)in_stack_00000038;
        in_stack_000000a0 = *(uint *)(lVar14 + 0x11c);
        param_4 = (ulong)in_stack_000000a0;
        in_stack_000000a8 = *(float *)(lVar14 + 0x160);
        fStack000000000000009c = fVar28 * in_stack_000000a8 + in_stack_00000038;
        uStack0000000000000098 = 0;
      }
      iVar10 = *unaff_x20;
      if (iVar10 == 1) {
LAB_03556628:
        if ((*in_stack_00000170 != 0) &&
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 != 0)) {
          if (unaff_w25 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + unaff_x24 * 0x178;
            lVar20 = *unaff_x19;
            uVar11 = *(uint *)(lVar14 + 0x128);
            fVar30 = *(float *)(lVar14 + 0x14c);
LAB_03556654:
            pcVar18 = *(code **)(lVar20 + 0x8d8);
            goto LAB_03556914;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      lVar14 = in_stack_00000150;
      if (unaff_w25 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b63d8(in_stack_00000168._4_4_,0);
        if ((*in_stack_00000170 != 0) &&
           (lVar20 = *(long *)(*in_stack_00000170 + 0x38), lVar20 != 0)) {
          uVar11 = *(uint *)(lVar20 + 0x18);
          if (in_stack_00000168._4_4_ == 0x200b || (uVar13 & 1) != 0) {
            if (uVar11 <= uVar6) goto LAB_035575f4;
          }
          else {
FUN_035568e8:
            lVar14 = unaff_x24;
            if (uVar11 <= unaff_w25) goto LAB_035575f4;
          }
LAB_035568f0:
          lVar20 = lVar20 + lVar14 * 0x178;
          fVar30 = *(float *)(lVar20 + 0x14c);
          uVar11 = *(uint *)(lVar20 + 0x128);
          pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035574b8;
      }
      if ((int)unaff_w25 < iVar10) {
        lVar20 = *in_stack_00000170;
        if ((lVar20 != 0) && (lVar17 = *(long *)(lVar20 + 0x38), lVar17 != 0)) {
          if (uStack000000000000015c < *(uint *)(lVar17 + 0x18)) {
            if (*(float *)(lVar17 + unaff_x27 + -0x108) == in_stack_00000040) {
              fVar32 = *(float *)(lVar17 + unaff_x27 + -0x1c);
              if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              param_3 = (ulong)(uint)in_stack_00000038;
              uVar13 = FUN_03567bac(fVar30 + fVar32,param_3,0);
              if ((uVar13 & 1) != 0) {
                iVar10 = *unaff_x20;
                goto LAB_03556744;
              }
              lVar20 = *in_stack_00000170;
              if (lVar20 == 0) goto LAB_035574b8;
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (lVar20 != 0) {
              uVar11 = *(uint *)(lVar20 + 0x18);
              if ((int)unaff_w25 <= (int)uVar6) goto FUN_035568e8;
              if (uVar6 < uVar11) goto LAB_035568f0;
              goto LAB_035575f4;
            }
            goto LAB_035574b8;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_03556744:
      if ((int)unaff_w25 < iVar10) {
        iVar10 = FUN_036d3364(lVar24,0);
        if (*(uint *)(in_stack_000000f0 + 0x18) <= uStack000000000000015c) goto LAB_035575f4;
        lVar14 = *(long *)(in_stack_000000f0 + unaff_x27 + -0x130);
        if (lVar14 == 0) goto LAB_035574b8;
        iVar9 = FUN_036d3364(lVar14,0);
        if (iVar10 != iVar9) goto LAB_03556628;
      }
      if (!bVar1) {
        if ((*in_stack_00000170 != 0) &&
           (lVar14 = *(long *)(*in_stack_00000170 + 0x38), lVar14 != 0)) {
          if (unaff_w25 - 1 < *(uint *)(lVar14 + 0x18)) {
            lVar20 = *unaff_x19;
            uVar11 = *(uint *)(lVar14 + unaff_x27 + -0x330);
            fVar30 = *(float *)(lVar14 + unaff_x27 + -0x30c);
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
    in_x9 = *(undefined8 *)(param_1 + 0x18);
    if ((uint)in_x9 <= unaff_w25) goto LAB_035575f4;
    unaff_x23 = in_stack_000000f0;
    unaff_x28 = in_stack_00000170;
    if ((*(byte *)(param_1 + unaff_x24 * 0x178 + 0x191) >> 1 & 1) != 0) goto LAB_035569bc;
    if (in_stack_00000110._4_4_ != 0) {
      param_4 = (ulong)uStack00000000000000c0;
      param_3 = (ulong)(uint)fStack00000000000000dc;
      param_5 = (ulong)(uint)in_stack_000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,param_3,param_4,param_5,fStack00000000000000d0,param_4);
    }
LAB_035569b4:
    in_stack_00000110._4_4_ = 0;
    unaff_w25 = uStack000000000000015c;
    uVar12 = in_stack_00000160;
    goto LAB_03556d04;
  }
  goto LAB_035575f4;
LAB_035569bc:
  if ((int)unaff_w25 <= (int)unaff_x19[0x65]) goto code_r0x035569c8;
LAB_03556a04:
  bVar1 = false;
  goto LAB_03556a08;
code_r0x035569c8:
  in_w10 = (int)unaff_x19[0x66];
  goto code_r0x035569cc;
  while( true ) {
    lVar14 = *unaff_x28;
    lVar20 = lVar20 + 1;
    lVar24 = lVar24 + 0x50;
    if (lVar14 == 0) break;
LAB_03557110:
    uVar13 = lVar20 + 1;
    if ((long)*(int *)(lVar14 + 0x34) <= (long)uVar13) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar14 = *(long *)(lVar14 + 0x60);
    if (lVar14 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
    FUN_03596a20(lVar14 + lVar24 + 0x70,0);
    lVar14 = unaff_x19[0xe1];
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
    uVar23 = *(undefined8 *)(lVar14 + lVar20 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_036d35a8(uVar23,0,0);
    if ((uVar15 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x28 == 0) || (lVar14 = *(long *)(*unaff_x28 + 0x60), lVar14 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar13) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar14 + lVar24 + 0x70,1,0);
      }
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = UnityEngine_Material__GetColorArray(lVar14,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar14 == 0) break;
      FUN_036a460c(lVar14,*(undefined8 *)(lVar17 + lVar24 + 0x80),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = UnityEngine_Material__GetColorArray(lVar14,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar14 == 0) break;
      FUN_036a4810(lVar14,*(undefined8 *)(lVar17 + lVar24 + 0x98),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = UnityEngine_Material__GetColorArray(lVar14,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar14 == 0) break;
      FUN_036a48bc(lVar14,*(undefined8 *)(lVar17 + lVar24 + 0xa0),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = UnityEngine_Material__GetColorArray(lVar14,0);
      if ((*unaff_x28 == 0) || (lVar17 = *(long *)(*unaff_x28 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      if (lVar14 == 0) break;
      FUN_036a4e24(lVar14,*(undefined8 *)(lVar17 + lVar24 + 0xa8),0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = UnityEngine_Material__GetColorArray(lVar14,0), lVar14 == 0))
      break;
      FUN_036aa280(lVar14,0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_037b514c(lVar14,0);
      lVar17 = unaff_x19[0xe1];
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + lVar20 * 8 + 0x28);
      if ((lVar17 == 0) || (uVar23 = UnityEngine_Material__GetColorArray(lVar17,0), lVar14 == 0))
      break;
      FUN_0390f3a4(lVar14,uVar23,0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = FUN_037b514c(lVar14,0), lVar14 == 0)) break;
      FUN_0390eec8(uVar27,param_3,param_4,param_5,lVar14,0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar14 = *(long *)(lVar14 + lVar20 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = FUN_037b514c(lVar14,0), lVar14 == 0)) break;
      FUN_0390ed78(lVar14,uVar11 & 1,0);
      lVar14 = unaff_x19[0xe1];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_035575f4;
      plVar22 = *(long **)(lVar14 + lVar20 * 8 + 0x28);
      uVar12 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar22 == (long *)0x0) break;
      (**(code **)(*plVar22 + 0x2c8))(plVar22,uVar12 & 1,*(undefined8 *)(*plVar22 + 0x2d0));
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


