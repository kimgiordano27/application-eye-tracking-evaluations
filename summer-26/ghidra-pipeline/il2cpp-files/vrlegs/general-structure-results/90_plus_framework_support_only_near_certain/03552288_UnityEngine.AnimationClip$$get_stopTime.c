/*
FUNCTION_NAME: UnityEngine.AnimationClip$$get_stopTime
ENTRY_POINT: 03552288
PROGRAM: vrlegs-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_AnimationClip__get_stopTime(float param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  float *pfVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar41;
  uint unaff_w22;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar42;
  long unaff_x26;
  uint unaff_w28;
  long lVar43;
  uint unaff_w29;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  ulong uVar52;
  uint uVar53;
  ulong uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float unaff_s8;
  float unaff_s9;
  float fVar58;
  float unaff_s10;
  float fVar59;
  float fVar60;
  float unaff_s12;
  float fVar61;
  float fVar62;
  ulong unaff_d13;
  undefined4 uVar63;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  byte bStack0000000000000070;
  byte bStack0000000000000074;
  float fStack0000000000000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  float in_stack_00000090;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  long *in_stack_000000b8;
  uint uStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  ulong in_stack_000000e8;
  float in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000140;
  float fStack0000000000000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  uint in_stack_000008a0;
  undefined4 in_stack_000008a4;
  undefined8 in_stack_000008a8;
  undefined4 in_stack_000008b0;
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float in_stack_000017d8;
  uint in_stack_000017dc;
  
code_r0x03552288:
  uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9b);
LAB_0355228c:
  uVar13 = (uint)unaff_x26;
  fVar51 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
  if (unaff_w29 != 0xad) {
    in_stack_000000f0 = (float)unaff_d13;
  }
  fVar50 = (float)uVar22;
  if ((0.0 < fVar50) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    unaff_s12 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar14 = *unaff_x20;
  fVar55 = (*(float *)(unaff_x19 + 0x97) - (fVar59 - fVar50)) + unaff_s12;
  iVar17 = (int)unaff_x24;
  if (fStack00000000000000c4 < fVar55) {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    uVar18 = DAT_00d37868;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar56 = *(float *)(unaff_x19 + 0x59);
      if (((fVar56 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar50)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar51 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - fVar55) / (float)(int)unaff_x19[0x95]) /
                 fStack0000000000000058;
        if (fVar51 <= fVar56) {
          fVar51 = fVar56;
        }
        goto LAB_03554b48;
      }
      fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar50 = *(float *)(unaff_x19 + 0x4a);
      uVar22 = (ulong)(uint)fVar50;
      if ((fVar50 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar51 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar51 <= DAT_00d38b84) {
          fVar51 = DAT_00d38b84;
        }
        fVar59 = (fVar55 - fVar51) * 20.0 + 0.5;
        *(float *)((long)unaff_x19 + 0x23c) = fVar55;
        fVar51 = DAT_00d38e60;
        if (fVar59 != INFINITY) {
          fVar51 = (float)(int)fVar59 / 20.0;
        }
        if (fVar51 <= fVar50) {
          fVar51 = fVar50;
        }
        goto LAB_03554658;
      }
    }
    switch((int)unaff_x19[0x5c]) {
    case 1:
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar8;
      }
      lVar30 = *(long *)(lVar27 + 0xb8);
      lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = FUN_01a46ff8(lVar27);
      }
      piVar23 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar23 == 0) goto LAB_03554580;
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar8;
      }
      FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
      iVar12 = FUN_0358c15c();
LAB_035529e8:
      iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
      *(int *)((long)unaff_x19 + 0x494) = iVar15;
      in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
      in_stack_000017a8 = iVar12 - 1;
      in_stack_000017c8 = CONCAT44(0x2026,iVar15);
      goto LAB_03550bd0;
    default:
      goto UnityEngine_AnimationClip__set_wrapMode;
    case 3:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      goto LAB_03552550;
    case 5:
      if ((uVar14 != 0) && (-1 < (int)in_stack_000017a8)) {
        fVar51 = *(float *)(unaff_x19 + 0x99);
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        unaff_w29 = in_stack_000017dc;
        if (fStack00000000000000c4 < fVar51 - fVar59)
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
        uVar22 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        lVar27 = NEON_rev64(uVar22,4);
        unaff_x19[0x99] = lVar27;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_03550bd0;
      }
      *unaff_x20 = 0;
      in_stack_000017a8 = 0xffffffff;
      in_stack_000017c8 = uVar18;
      goto LAB_03550bd0;
    case 6:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      lVar27 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar20 = FUN_036cee6c(lVar27,0,0);
      unaff_w29 = in_stack_000017dc;
      if ((uVar20 & 1) == 0) goto UnityEngine_AnimationClip__get_hasMotionCurves;
      plVar42 = (long *)unaff_x19[0x5d];
      uVar18 = (**(code **)(*unaff_x19 + 0x518))();
      if (plVar42 != (long *)0x0) {
        (**(code **)(*plVar42 + 0x528))(plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x530));
        lVar27 = unaff_x19[0x5d];
        if (lVar27 != 0) {
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 != (long *)0x0) {
            (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
            goto UnityEngine_AnimationClip__get_hasMotionCurves;
          }
        }
      }
    }
    goto LAB_035574b8;
  }
UnityEngine_AnimationClip__set_wrapMode:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  fVar50 = ABS(unaff_s10) + param_1 * (1.0 - fVar51) * in_stack_000000f0;
  fVar59 = 1.0;
  if (unaff_w28 != 0) {
    fVar59 = DAT_00d38acc;
  }
  fVar55 = fVar59 * in_stack_000000f8._4_4_;
  if (fVar55 < fVar50) {
    uVar22 = in_stack_000000e8 & 0xffffffff;
    if (((char)unaff_x19[0x5b] != '\0') && (uVar14 != *(uint *)(unaff_x19 + 0x93))) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar51 = *(float *)(unaff_x19 + 0x9b);
        fVar55 = 0.0;
        if ((0.0 < fVar51) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar55 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar55 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar55 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar27 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar27 == 0) goto LAB_035574b8;
        fVar51 = *(float *)(unaff_x19 + 0x9b);
        fVar55 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar53 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar27 + 0x18) <= uVar53) ||
         (uVar34 = uVar53 - 1, *(uint *)(lVar27 + 0x18) <= uVar34)) goto LAB_035575f4;
      uVar22 = (ulong)(uint)(fVar55 + *(float *)(unaff_x19 + 0x97));
      fVar56 = (fVar55 + *(float *)(unaff_x19 + 0x97) + fVar51) -
               *(float *)(lVar27 + (long)(int)uVar53 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) == 0 &&
           *(short *)(lVar27 + (long)(int)uVar34 * (long)iVar17 + 0x20) == 0xad) &&
         ((fVar56 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
        bStack0000000000000074 = 0;
        *unaff_x20 = uVar34;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        in_stack_000017c8 = CONCAT44(0x2d,uVar34);
        goto LAB_03550bd0;
      }
      if (*(short *)(lVar27 + (long)(int)uVar53 * unaff_x24 + 0x20) == 0xad) {
        bStack0000000000000074 = 1;
        goto LAB_03550bd0;
      }
      if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
        fVar51 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar55 <= fVar51) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
          fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar22 = (ulong)(uint)fVar51;
          fVar55 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar51 <= fVar55) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
          goto LAB_03552d44;
LAB_03557594:
          fVar59 = (fVar51 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar59 <= DAT_00d38b84) {
            fVar59 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar51;
          fVar51 = fVar51 - fVar59;
LAB_03557524:
          fVar59 = fVar51 * 20.0 + 0.5;
          fVar51 = DAT_00d38e60;
          if (fVar59 != INFINITY) {
            fVar51 = (float)(int)fVar59 / 20.0;
          }
          if (fVar51 <= fVar55) {
            fVar51 = fVar55;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar51;
          return;
        }
LAB_03557558:
        fVar56 = fVar50;
        if (0.0 < fVar51) {
          fVar56 = fVar50 / (1.0 - fVar51);
        }
        fVar51 = fVar51 + (fVar50 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar56;
LAB_035574e8:
        if (fVar55 <= fVar51) {
          fVar51 = fVar55;
        }
        *(float *)((long)unaff_x19 + 0x2d4) = fVar51;
        return;
      }
LAB_03552d44:
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar8;
      }
      iVar12 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
      if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack0000000000000070 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
        goto LAB_035574b8;
        uVar53 = *unaff_x20 - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar53) goto LAB_035575f4;
        iStack0000000000000034 = iVar12;
        if (*(short *)(lVar27 + (long)(int)uVar53 * (long)iVar17 + 0x20) == 0xad) {
          bStack0000000000000074 = 0;
          *unaff_x20 = uVar53;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          in_stack_000017c8 = CONCAT44(0x2d,uVar53);
          goto LAB_03550bd0;
        }
      }
      if (fVar56 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
        uVar22 = unaff_d13;
        FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
        bStack0000000000000070 = 1;
        bStack0000000000000074 = 0;
        in_stack_00000068._4_4_ = 1;
        goto LAB_03550bd0;
      }
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
      }
      fVar55 = fStack00000000000000c4;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar55 = *(float *)(unaff_x19 + 0x59);
        if ((fVar55 < *(float *)((long)unaff_x19 + 700)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar51 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar56) / (float)((int)unaff_x19[0x95] + 1)) /
                   fStack0000000000000058;
          if (fVar51 <= fVar55) {
            fVar51 = fVar55;
          }
LAB_03554b48:
          *(float *)((long)unaff_x19 + 700) = fVar51;
          return;
        }
        fVar51 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar51 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_03557558;
        fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar22 = (ulong)(uint)fVar51;
        fVar55 = *(float *)(unaff_x19 + 0x4a);
        if ((fVar55 < fVar51) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_03557594;
      }
      switch((int)unaff_x19[0x5c]) {
      case 0:
      case 2:
      case 4:
        goto switchD_03552ef4_caseD_0;
      case 1:
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar30 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar23 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        if (*piVar23 == 0) {
          bStack0000000000000074 = 0;
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
          goto LAB_03550bd0;
        }
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001008,&stack0x000008a0,0x378);
        iVar12 = FUN_0358c15c();
        bStack0000000000000074 = 0;
        goto LAB_035529e8;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        bStack0000000000000074 = 0;
        unaff_w29 = in_stack_000017dc;
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        uVar22 = unaff_d13;
        FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_03552f38;
      case 6:
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_036cee6c(lVar27,0,0);
        if ((uVar20 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x530));
          lVar27 = unaff_x19[0x5d];
          if (lVar27 == 0) goto LAB_035574b8;
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        bStack0000000000000074 = 0;
        goto LAB_03552b00;
      default:
        bStack0000000000000074 = 0;
        unaff_w29 = in_stack_000017dc;
        goto LAB_03552f54;
      }
    }
    if (((char)unaff_x19[0x47] != '\0') &&
       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
      fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if (fVar51 < fVar55) {
        fVar56 = fVar50 / (1.0 - fVar51);
        if (fVar51 <= 0.0) {
          fVar56 = fVar50;
        }
        fVar51 = fVar51 + (fVar50 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar56;
        goto LAB_035574e8;
      }
      fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar55 = *(float *)(unaff_x19 + 0x4a);
      if (fVar55 < fVar51) {
        fVar59 = (fVar51 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar59 <= DAT_00d38b84) {
          fVar59 = DAT_00d38b84;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar51;
        fVar51 = fVar51 - fVar59;
        goto LAB_03557524;
      }
    }
    iVar12 = (int)unaff_x19[0x5c];
    if (iVar12 == 1) {
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar8;
      }
      lVar30 = *(long *)(lVar27 + 0xb8);
      lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
      if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
        lVar27 = FUN_01a46ff8(lVar27);
      }
      piVar23 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                          *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80)
                                          + 0xa0);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*piVar23 == 0) goto LAB_03554580;
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar8;
      }
      FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
      memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
      goto LAB_035529dc;
    }
    if (iVar12 == 6) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      lVar27 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar20 = FUN_036cee6c(lVar27,0,0);
      if ((uVar20 & 1) == 0) goto LAB_03552b00;
      plVar42 = (long *)unaff_x19[0x5d];
      uVar18 = (**(code **)(*unaff_x19 + 0x518))();
      if (plVar42 == (long *)0x0) goto LAB_035574b8;
      (**(code **)(*plVar42 + 0x528))(plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x530));
      lVar27 = unaff_x19[0x5d];
      if (lVar27 == 0) goto LAB_035574b8;
      *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
      FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
      plVar42 = (long *)unaff_x19[0x5d];
      if (plVar42 == (long *)0x0) goto LAB_035574b8;
      (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
LAB_03552b00:
      in_stack_000017c8 = CONCAT44(3,*unaff_x20);
      goto LAB_03550bd0;
    }
    if (iVar12 == 3) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
LAB_03552550:
      in_stack_000017a8 = FUN_0358c15c();
      unaff_w29 = in_stack_000017dc;
      goto UnityEngine_AnimationClip__get_hasMotionCurves;
    }
  }
LAB_03552f54:
  if (unaff_w29 == 0xad) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *(undefined1 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    unaff_w29 = in_stack_000017dc;
  }
  else {
    if (unaff_w29 == 9) {
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      uVar14 = *unaff_x20;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
      *(undefined1 *)(lVar30 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
      lVar30 = *(long *)(lVar27 + 0x50);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar30 + 0x18)) {
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      goto LAB_035575f4;
    }
    if (*(int *)((long)unaff_x19 + 0x644) == 1) {
      (**(code **)(*unaff_x19 + 0x898))(fVar55,in_stack_000000e8 & 0xffffffff);
    }
    else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
      (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
    }
    uVar14 = *unaff_x20;
    if ((in_stack_00000068._4_4_ & 1) != 0) {
      *(uint *)(in_stack_00000080 + 0x1f0) = uVar14;
    }
    *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
    *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
    if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    in_stack_00000068._4_4_ = 0;
    *(float *)(lVar27 + 0x60) = unaff_s8;
    *(float *)(lVar27 + 100) = unaff_s9;
    unaff_w29 = in_stack_000017dc;
  }
LAB_035530c4:
  if (((int)unaff_x19[0x5c] == 1) && ((unaff_w29 == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar51 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar50 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar27 = unaff_x19[0xca];
    fVar59 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar59 = 1.0;
    }
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
    fVar56 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar27 + 0x2c);
    fVar55 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
    fVar60 = *_fStack00000000000000a8;
    fVar55 = fVar56 * (fVar51 / (float)iVar12) * fVar50 * fVar59 * fVar45 * fVar55;
    fVar51 = *_fStack00000000000000a0;
    if ((unaff_w29 == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar59 = *(float *)(lVar27 + (long)(int)uVar14 * (long)iVar17 + 0x60);
      iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar56 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar27 = unaff_x19[0xca];
      fVar50 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar50 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
      fVar45 = *(float *)((long)unaff_x19 + 0x404);
      fVar46 = *(float *)(lVar27 + 0x2c);
      fVar55 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar60 = *(float *)(lVar27 + 0x60);
      fVar51 = *(float *)(lVar27 + 100);
      fVar55 = fVar45 * (fVar59 / (float)iVar12) * fVar56 * fVar50 * fVar46 * fVar55;
    }
    fVar56 = *(float *)(unaff_x19 + 0x9b);
    fVar59 = 0.0;
    fVar50 = 0.0;
    if ((0.0 < fVar56) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar50 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar46 = *(float *)(unaff_x19 + 0x97);
    fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar27,0);
      fVar59 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar61 = *(float *)(unaff_x19 + 0x6c);
    fVar51 = (fStack000000000000009c - fVar60) - fVar51;
    bVar10 = true;
    if ((fVar61 <= fVar51) && (bVar10 = false, !NAN(fVar61))) {
      bVar10 = fVar61 == -1.0;
    }
    if (!bVar10) {
      fVar51 = fVar61;
    }
    fVar60 = 1.0;
    if (unaff_w28 != 0) {
      fVar60 = DAT_00d38acc;
    }
    if (((fVar46 - (fVar47 - fVar56)) + fVar50 < fStack00000000000000c4) &&
       (ABS(fVar45) + fVar55 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar60 * fVar51)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar27 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar27 + 0x788),0x378);
      FUN_0209b210(lVar27 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar27 = *in_stack_00000170;
  if (lVar27 == 0) goto LAB_035574b8;
  lVar30 = *(long *)(lVar27 + 0x38);
  unaff_d13 = _fStack0000000000000150 & 0xffffffff;
  if (lVar30 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar30 + 100) = uVar14;
  *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x96];
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < unaff_w29 || ((1 << (ulong)(unaff_w29 & 0x1f) & 0x2c00U) == 0)))) {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar27 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
    if (*(int *)(lVar27 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  if (unaff_w29 == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar50 = *(float *)(unaff_x19 + 200);
    fVar59 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar51 = fStack0000000000000150 * fVar51 * fVar59;
    fVar59 = fVar51 * (float)(int)(fVar50 / fVar51);
    uVar22 = (ulong)(uint)fVar59;
    if (fVar59 <= fVar50) {
      fVar59 = fVar50 + fVar51;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar59;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar50 = 1.0;
      }
      else {
        fVar50 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar59 = *(float *)(unaff_x19 + 200);
      fVar55 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] != 0) {
        fVar51 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
        fVar59 = fVar59 + fVar51 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fStack0000000000000150 *
                                   (fStack000000000000012c + fVar50 * fVar55) +
                                   fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
        *(float *)(unaff_x19 + 200) = fVar59;
        goto joined_r0x035535c0;
      }
      goto LAB_035574b8;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fStack0000000000000150 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
    uVar22 = (ulong)(uint)fVar59;
    fVar59 = *(float *)(unaff_x19 + 200) - fVar59;
    *(float *)(unaff_x19 + 200) = fVar59;
    if ((unaff_w29 == 0x200b) || (unaff_w25 != 0)) {
      fVar51 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar22 = (ulong)(uint)fVar51;
      fVar59 = fVar59 - fVar51;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = *(float *)(unaff_x19 + 200);
    fVar59 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                      fStack00000000000000d4 * (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 200) = fVar59;
joined_r0x035535c0:
    if ((unaff_w29 == 0x200b) || (uVar22 = (ulong)(uint)fVar51, unaff_w25 != 0)) {
      fVar51 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar22 = (ulong)(uint)fVar51;
      fVar59 = fVar59 + fVar51;
      goto LAB_03553678;
    }
  }
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  uVar14 = *unaff_x20;
  uVar53 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar53 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar30 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar59;
  uVar34 = unaff_w29;
  in_stack_000017dc = unaff_w29;
  if ((int)unaff_w29 < 0xd) {
    if ((unaff_w29 - 10 < 2) || (unaff_w29 == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((unaff_w23 & unaff_w29 == 0x2d) != 0) || ((float)uVar14 == in_stack_00000088._4_4_))
    goto LAB_0355371c;
  }
  else {
    if (1 < unaff_w29 - 0x2028) {
      if (unaff_w29 != 0xd) goto LAB_03553700;
      uVar22 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar14 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar51 = *(float *)(unaff_x19 + 0x99);
      fVar59 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar51 = fVar51 - fVar59;
      if (((fStack000000000000005c < ABS(fVar51)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar51);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar51;
        *(float *)(unaff_x19 + 0x9b) = fVar51 + *(float *)(unaff_x19 + 0x9b);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar8;
        }
        lVar30 = *(long *)(lVar27 + 0xb8);
        if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar30 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar30 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar27 + 0xb8) + 0x818,0);
          lVar27 = *(long *)(*(long *)puVar8 + 0xb8);
          *(float *)(lVar27 + 0x7bc) = fVar51 + *(float *)(lVar27 + 0x7bc);
          *(float *)(lVar27 + 0x800) = fVar51 + *(float *)(lVar27 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar27 + 0x788),0x378);
          FUN_0209b210(lVar27 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar50 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar59 = *(float *)((long)unaff_x19 + 0x4cc) - fVar50;
    fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar59 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar51 = fVar59;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar51;
    fVar55 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017d4 == '\0') {
      in_stack_000017d8 = fVar51;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017d4 = '\x01';
    }
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
    uVar14 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar43 = unaff_x19[0x93];
    lVar21 = lVar30 + (long)(int)uVar14 * 0x5c;
    *(int *)(lVar21 + 0x34) = (int)lVar43;
    uVar53 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar43 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar53 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar53;
    *(uint *)(lVar21 + 0x38) = uVar53;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar21 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar53 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar21 + 0x40) = iVar12;
    *(int *)(lVar21 + 0x24) = (*(int *)(lVar21 + 0x3c) - *(int *)(lVar21 + 0x34)) + 1;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar53) goto LAB_035575f4;
    uVar63 = *(undefined4 *)(lVar27 + (long)(int)uVar53 * (long)iVar17 + 0x11c);
    lVar30 = lVar30 + (long)(int)uVar14 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar59;
    *(undefined4 *)(lVar30 + 0x6c) = uVar63;
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar55 = fVar55 - fVar50;
    uVar22 = (ulong)(uint)fVar55;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar30 + 0x74) =
         *(undefined4 *)(lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar30 + 0x78) = fVar55;
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar43 = *(long *)(lVar27 + 0x50), lVar43 == 0)) goto LAB_035574b8;
    lVar21 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar30 = lVar43 + lVar21 * 0x5c;
    *(float *)(lVar30 + 0x44) =
         *(float *)(lVar30 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
    *(float *)(lVar30 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar30 + 0x24) == 1) {
      *(int *)(lVar43 + lVar21 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
    lVar37 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar53 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar53 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar30 + lVar37 * unaff_x24 + 0x194) == '\0') &&
       (lVar37 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar53 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar43 = lVar43 + lVar21 * 0x5c;
    fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar51 = -fVar50;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar51 = fVar50;
    }
    *(float *)(lVar43 + 0x58) = *(float *)(lVar30 + lVar37 * unaff_x24 + 0x144) + fVar51;
    *(float *)(lVar43 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar43 + 0x54) = fVar59;
    *(float *)(lVar43 + 0x48) = in_stack_00000060 + (fVar55 - fVar59);
    *(float *)(lVar43 + 0x4c) = fVar55;
    if ((int)unaff_w29 < 0x2d) {
      if (unaff_w29 - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar27 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar12 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar12;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar27 != 0) && (*(long *)(lVar27 + 0x50) != 0)) {
          if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar12) {
            FUN_0358ca18();
            lVar27 = unaff_x19[0x6d];
            if (lVar27 == 0) goto LAB_035574b8;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
              fVar51 = *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
              if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                if ((unaff_w29 == 0x2029) || (fVar59 = 0.0, unaff_w29 == 10)) {
                  fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
                }
                uVar25 = 0;
                fVar59 = fVar51 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                         fStack0000000000000058 *
                         (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                         fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar59) +
                         *(float *)(unaff_x19 + 0x9b);
              }
              else {
                if ((unaff_w29 == 0x2029) || (fVar59 = 0.0, unaff_w29 == 10)) {
                  fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
                }
                uVar25 = 1;
                fVar59 = *(float *)(unaff_x19 + 0x9b) +
                         *(float *)(unaff_x19 + 0x58) +
                         fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar59);
              }
              *(float *)(unaff_x19 + 0x9b) = fVar59;
              *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
              puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar27 = *(long *)puVar8;
              }
              uVar18 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 0x9a) = fVar51;
              uVar22 = NEON_rev64(uVar18,4);
              unaff_x19[0x99] = uVar22;
              *(float *)(unaff_x19 + 200) =
                   *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
              FUN_0358c4f0();
              FUN_0358c4f0();
              *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
              in_stack_00000068._4_4_ = 1;
              bStack0000000000000070 = 1;
              goto LAB_03550bd0;
            }
            goto LAB_035575f4;
          }
        }
        goto LAB_035574b8;
      }
      if (unaff_w29 == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
        in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar34 = 3;
      }
    }
    else if ((unaff_w29 - 0x2028 < 2) || (unaff_w29 == 0x2d)) goto LAB_03553b60;
  }
LAB_03553c8c:
  uVar14 = *unaff_x20;
  if (uVar53 <= uVar14) goto LAB_035575f4;
  if (*(char *)(lVar30 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
    lVar30 = lVar30 + (long)(int)uVar14 * unaff_x24;
    uVar20 = *(ulong *)(lVar30 + 0x11c);
    uVar22 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar22 ^ (uVar22 ^ uVar20) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar20));
    uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
    uVar22 = *(ulong *)(lVar30 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar20 ^ (uVar20 ^ uVar22) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar20));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar27 + 0x58);
    if (lVar30 == 0) goto LAB_035574b8;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar30 + 0x18) < iVar12) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar27 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar27 = *in_stack_00000170;
      if (lVar27 == 0) goto LAB_035574b8;
    }
    lVar30 = *(long *)(lVar27 + 0x58);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar53 = *(uint *)(unaff_x19 + 0x96);
    lVar43 = (long)(int)uVar53;
    uVar14 = *(uint *)(lVar30 + 0x18);
    if (uVar14 <= uVar53) goto LAB_035575f4;
    lVar21 = lVar30 + lVar43 * 0x14;
    fVar59 = *(float *)(lVar21 + 0x30);
    uVar22 = (ulong)(uint)fVar59;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar59 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar51 = fVar59;
    }
    *(float *)(lVar21 + 0x30) = fVar51;
    uVar34 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar34 == 0 && uVar53 == 0) {
      *(uint *)(lVar30 + (ulong)uVar53 * 0x14 + 0x20) = uVar34;
    }
    else {
      uVar44 = uVar34 - 1;
      if (0 < (int)uVar34) {
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= uVar44) goto LAB_035575f4;
        if (uVar53 != *(uint *)(lVar27 + (ulong)uVar44 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar53 - 1 < uVar14) {
            *(uint *)(lVar30 + 0x20 + (long)(int)(uVar53 - 1) * 0x14 + 4) = uVar44;
            *(uint *)(lVar30 + 0x20 + lVar43 * 0x14) = uVar34;
            goto LAB_03553d10;
          }
          goto LAB_035575f4;
        }
      }
      if ((float)uVar34 == in_stack_00000088._4_4_) {
        *(float *)(lVar30 + lVar43 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((unaff_w25 == 0) && (((unaff_w29 != 0x2d && (unaff_w29 != 0x200b)) && (unaff_w29 != 0xad)))) {
    if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
      if (((((0x2bfd < unaff_w29 - 0xac01) && (0xfd < unaff_w29 - 0x1101)) &&
           (0x1d < unaff_w29 - 0xa961)) || (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0)) &&
         ((((0xed < unaff_w29 - 0xff01 && (0x1d < unaff_w29 - 0xfe31)) &&
           (0x717d < unaff_w29 - 0x2e81)) && (0x1fd < unaff_w29 - 0xf901)))) goto LAB_03553f78;
      lVar27 = FUN_035978e8(0);
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_035574b8;
      uVar14 = FUN_0219c130(*(long *)(lVar27 + 0x10),&stack0x000008a0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
        in_stack_000008a0 = unaff_w29;
        if ((uVar14 & 1) == 0) {
LAB_03554270:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          goto LAB_035542a8;
        }
LAB_035541dc:
        if (uVar13 != unaff_w22 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
        if (unaff_w25 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
        goto LAB_0355422c;
      }
      lVar27 = FUN_035978e8(0);
      if (((lVar27 == 0) || (*in_stack_00000170 == 0)) ||
         (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
      if (*(long *)(lVar27 + 0x18) == 0) goto LAB_035574b8;
      in_stack_000008a0 =
           (uint)*(ushort *)(lVar30 + (long)(int)(*unaff_x20 + 1) * (long)iVar17 + 0x20);
      uVar20 = FUN_0219c130(*(long *)(lVar27 + 0x18),&stack0x000008a0,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      if ((uVar14 & 1) != 0) goto LAB_035541dc;
      if ((uVar20 & 1) == 0) goto LAB_03554270;
      if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
      if (unaff_w25 != 0) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
      }
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
    else {
      if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
      if ((bStack0000000000000074 & 1) == 0 && unaff_w29 == 0xad)
      goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
    bStack0000000000000070 = 1;
  }
  else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
    if ((bStack0000000000000070 & 1) != 0) {
      if (unaff_w25 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      goto LAB_0355422c;
    }
LAB_035542a8:
    bStack0000000000000070 = 0;
  }
  else {
    if (((unaff_w29 - 0x2007 < 0x29) &&
        ((1L << ((ulong)(unaff_w29 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
       ((unaff_w29 == 0xa0 || (unaff_w29 == 0x2060)))) goto LAB_03553ef0;
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    bStack0000000000000070 = 0;
    *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
  }
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
LAB_03550bd0:
  in_stack_000000f0 = (float)unaff_d13;
  in_stack_000017a8 = in_stack_000017a8 + 1;
  lVar27 = unaff_x19[0x8f];
  if (lVar27 != 0) {
    if ((int)in_stack_000017a8 < (int)*(uint *)(lVar27 + 0x18)) {
      if (*(uint *)(lVar27 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      unaff_w29 = *(uint *)(lVar27 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
      if (unaff_w29 == 0) goto LAB_0355459c;
      if (5 < in_stack_00000168._4_4_) {
        uVar18 = FUN_0276793c(&stack0x000017dc,0);
        uVar19 = FUN_0276793c(&stack0x000017a8,0);
        uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar19,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367ae18(uVar18,0);
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (unaff_w29 == 0x3c))
      goto code_r0x0355094c;
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar27 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar27 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_035509d4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_0355459c:
    fVar51 = (float)uVar22;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar51 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar59 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar51 < fVar59) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar50 = (*(float *)((long)unaff_x19 + 0x23c) - fVar51) * 0.5;
        if (fVar50 <= DAT_00d38b84) {
          fVar50 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar51;
        fVar50 = (fVar51 + fVar50) * 20.0 + 0.5;
        fVar51 = DAT_00d38e60;
        if (fVar50 != INFINITY) {
          fVar51 = (float)(int)fVar50 / 20.0;
        }
        if (fVar59 <= fVar51) {
          fVar51 = fVar59;
        }
        goto LAB_03554658;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar8 = PTR_DAT_03cbdf88;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar18 = FUN_0276793c(_fStack0000000000000038,0);
      uVar19 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar19,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar18,0);
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017dc == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar27 = *(long *)puVar9;
    }
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
    lVar27 = **(long **)(lVar27 + 0xb8);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar17 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
    goto LAB_035574b8;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
    FUN_035968e8(lVar27 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar12 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    in_stack_000000e8 = *(ulong *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar27 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)in_stack_000000e8;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar12 < 0x401) {
      if (iVar12 == 0x100) {
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_035575f4;
        uVar18 = *(undefined8 *)(lVar27 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000170 + 0x58), lVar30 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar51 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar51 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x2c);
        fVar51 = (0.0 - fVar51) - fStack0000000000000020;
      }
      else if (iVar12 == 0x200) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar27 + 0x24) +
                          (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000170 + 0x58), lVar27 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar27 = lVar27 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar51 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar51 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar12 != 0x400) goto LAB_03554c4c;
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
        uVar18 = *(undefined8 *)(lVar27 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000170 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000170 + 0x58), lVar30 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x20);
        fVar51 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar51);
    }
    else if (iVar12 == 0x800) {
      if (lVar27 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
      fVar51 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar27 + 0x24) +
                            (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar51;
    }
    else {
      if (iVar12 == 0x1000) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar27 + 0x24) +
                            (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          fVar51 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_03554c3c;
        }
        goto LAB_035575f4;
      }
      if (iVar12 == 0x2000) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
        fVar51 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + fVar51);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    uVar18 = FUN_03912334(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar8);
    }
    uVar22 = FUN_036d35a8(uVar18,0,0);
    lVar27 = FUN_0357f060();
    if (lVar27 == 0) goto LAB_035574b8;
    FUN_036df824(lVar27,0);
    *(float *)(unaff_x19 + 0xe2) = fVar51;
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_039117fc(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    fVar59 = (float)FUN_03911954(unaff_x19[0xe5],0);
    uVar63 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar8 = OVRPlugin_Mesh_TypeInfo;
    lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar27 = *(long *)puVar8;
    }
    puVar28 = *(undefined4 **)(lVar27 + 0xb8);
    uVar20 = (ulong)(uint)puVar28[1];
    uVar52 = (ulong)(uint)puVar28[2];
    uVar54 = (ulong)(uint)puVar28[3];
    FUN_035683a4(*puVar28,uVar20,uVar52,uVar54,&stack0x000017b0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar27 = *in_stack_00000170;
    if (lVar27 == 0) goto LAB_035574b8;
    uVar13 = *unaff_x20;
    if ((int)uVar13 < 1) {
      fStack00000000000000d4 = 0.0;
      iVar17 = 0;
      goto LAB_03556f00;
    }
    lVar27 = *(long *)(lVar27 + 0x38);
    fVar51 = ABS(fVar51);
    fVar50 = 1.0;
    if ((uVar22 & 1) == 0) {
      fVar50 = fVar51;
    }
    if (lVar27 == 0) goto LAB_035574b8;
    bVar11 = false;
    bVar7 = false;
    _fStack0000000000000128 = 0;
    bVar10 = false;
    fStack00000000000000d4 = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000158 = 0.0;
    in_stack_00000068._4_4_ = 0;
    lVar30 = 0x2e0;
    fVar56 = 0.0;
    fVar55 = 0.0;
    fStack00000000000000c8 = fStack00000000000000d8;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack00000000000000d0 = fStack00000000000000dc;
    _bStack0000000000000070 = fStack00000000000000dc;
    fStack000000000000009c = fStack00000000000000dc;
    fStack00000000000000a0 = fStack00000000000000d8;
    fStack0000000000000100 = 0.0;
    in_stack_00000088._4_4_ = 0.0;
    fStack0000000000000040 = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000038 = 0.0;
    _bStack0000000000000074 = uStack00000000000000c0;
    fStack0000000000000078 = fStack00000000000000d8;
    fStack0000000000000098 = (float)uStack00000000000000c0;
    uVar14 = 1;
    uVar53 = 0;
    goto LAB_03554e78;
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar20 = FUN_03586568();
  if (((uVar20 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, in_stack_000017dc = unaff_w29,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar43 = (long)(int)uVar13;
  cVar26 = *(char *)(lVar27 + lVar43 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar30 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar13) {
    unaff_w29 = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (unaff_w29 == 0x2026) {
      *(long *)(lVar27 + lVar43 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar13 = *unaff_x20;
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar27 + (long)(int)uVar13 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar13 + 1);
    }
    else if (unaff_w29 == 3) {
      if ((*unaff_x21 == 0) || (lVar21 = FUN_03568ac0(*unaff_x21,0), lVar21 == 0))
      goto LAB_035574b8;
      FUN_0219b634(lVar21,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
      *(ulong *)(lVar27 + lVar43 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar13 = *(uint *)((long)unaff_x19 + 0x494);
      unaff_w23 = 1;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      unaff_w23 = 1;
    }
  }
  else {
    unaff_w23 = 0;
  }
  if (((int)uVar13 < *(int *)((long)unaff_x19 + 0x324)) && (unaff_w29 != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)uVar13 * (long)iVar17;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *unaff_x20 = uVar13 + 1;
    in_stack_000017dc = unaff_w29;
    goto LAB_03550bd0;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar13 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar13 >> 4 & 1) == 0) {
      if ((uVar13 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar13 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(unaff_w29,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b8410(unaff_w29,0);
            unaff_w29 = uVar13 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8070(unaff_w29,0);
        fStack0000000000000158 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b8594(unaff_w29,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b812c(unaff_w29,0);
      fStack0000000000000158 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_026b8410(unaff_w29,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        unaff_w29 = uVar13 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    in_stack_000017dc = unaff_w29;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    uVar14 = *unaff_x20;
    uVar13 = *(uint *)(lVar27 + 0x18);
    if (uVar13 <= uVar14) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar27 = unaff_x19[0x20];
    }
    else {
      lVar30 = unaff_x19[0x8f];
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar30 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar14 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar13 <= uVar14 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar51 = *(float *)(lVar27 + (long)(int)(uVar14 - 1) * (long)iVar17 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar27 = *unaff_x21;
    }
    if (lVar27 == 0) goto LAB_035574b8;
    fVar50 = (float)FUN_03776960(lVar27 + 0x50,0);
    fVar59 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar59 = 1.0;
    }
    fVar56 = 0.0;
    fVar55 = 0.0;
    if ((unaff_w23 & unaff_w29 == 0x2026) == 0) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar55 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar56 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar27 = unaff_x19[0xc9];
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
    fVar60 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar27 + 0x2c);
    in_stack_000000f0 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar61 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar27 = unaff_x19[0x6d];
    if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar59 = ((fStack0000000000000158 * fVar51) / (float)iVar12) * fVar50 * fVar59;
    in_stack_000000f0 = fVar59 * fVar60 * fVar45 * in_stack_000000f0;
    *(float *)(lVar30 + 0x160) = in_stack_000000f0;
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    fVar47 = fVar59 * fVar46 * fVar61 * fVar47;
    if (uVar13 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar30 = unaff_x19[0xe1];
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar30 + 0x10c);
    }
LAB_035514b0:
    fVar51 = 0.0;
    if (unaff_w29 != 3 && unaff_w29 != 0xad) {
      fVar51 = in_stack_000000f0;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar12 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar12 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar27 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar27 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar27,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      in_stack_000017dc = unaff_w29;
      if (lVar27 == 0) goto LAB_03550bd0;
      if (unaff_w29 == 0x3c) {
        unaff_w29 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar43 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar43 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar50 = (float)FUN_03776960(&stack0x00001720,0);
      fVar59 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar59 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar59 = (fVar51 / (float)iVar12) * fVar50 * fVar59;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar56 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar56 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar60 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar27 + 0x20),0);
        fVar45 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        fVar61 = *(float *)(lVar27 + 0x2c);
        fVar46 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar55 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar48 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar57 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar47 = fVar59 * fVar48 * fVar57 * fVar47;
        fVar56 = (fVar51 / (float)iVar12) * fVar50 * fVar56;
        in_stack_000000f0 = fVar56 * (fVar60 / fVar45) * fVar61 * fVar46;
        fVar56 = fVar56 / in_stack_000000f0;
        fVar55 = fVar56 * fVar55;
        fVar51 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar56 = fVar56 * fVar51;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar50 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        fVar60 = *(float *)(lVar27 + 0x2c);
        fVar56 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar56 = 1.0;
        }
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar55 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar61 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar47 = fVar59 * fVar46 * fVar61 * fVar47;
        in_stack_000000f0 = (fVar51 / (float)iVar12) * fVar50 * fVar56 * fVar60 * fVar45;
        fVar56 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar27;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar27);
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 1;
      *(float *)(lVar27 + 0x160) = in_stack_000000f0;
      *(long *)(lVar27 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar43 = *(long *)(lVar27 + 0x38), lVar43 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar43 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar30;
      goto LAB_035514b0;
    }
    lVar27 = *in_stack_00000170;
    fVar47 = 0.0;
    fVar51 = fVar47;
    if (unaff_w29 != 3 && unaff_w29 != 0xad) {
      fVar51 = in_stack_000000f0;
    }
    if (lVar27 == 0) goto LAB_035574b8;
    fVar55 = 0.0;
    fVar56 = 0.0;
  }
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar27 + 0x20) = (short)unaff_w29;
  *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)uVar13 * unaff_x24;
  *(undefined4 *)(lVar27 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar27 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar27 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar27,0);
  puVar8 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((int)unaff_w29 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(unaff_w29,0);
    unaff_w25 = uVar13 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar55;
    fVar50 = 0.0;
    fVar59 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar14 = *unaff_x20;
    uVar13 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar14 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar14 + 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar14 + 1) * (long)iVar17 + 0x30);
      if ((((lVar27 == 0) || (*unaff_x21 == 0)) ||
          (lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0)) ||
         (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar13 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar22 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar63 = 0;
      if ((uVar22 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar55;
        fVar50 = 0.0;
        fVar59 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar63 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar59 = *(float *)(in_stack_000016f8 + 0x14);
        fVar50 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar55);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar14 = *unaff_x20;
    }
    else {
      uVar63 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar55;
      fVar50 = 0.0;
      fVar59 = 0.0;
    }
    if (0 < (int)uVar14) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar14 - 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (ulong)(uVar14 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar27 == 0) || (*unaff_x21 == 0)) ||
         ((lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0 ||
          (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar27 + 0x28) | uVar13 << 0x10;
      uVar22 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar22 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar49 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar59 = (float)FUN_03571cb4(fVar59,fVar50,_fStack0000000000000128 >> 0x20,uVar63,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar49,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar60 = *(float *)(unaff_x19 + 200);
    fVar55 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar60 = fVar60 - fVar51 * fVar55 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar60;
    if ((unaff_w29 == 0x200b) || (unaff_w25 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar60 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar55 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar55 != 0.0) {
    fVar60 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar45 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar55 * 0.5 - fVar51 * (fVar60 * 0.5 + fVar45));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar27 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_036cee6c(lVar27,0,0);
    fVar60 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar22 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar60 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        fVar55 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar45 = *(float *)(*unaff_x21 + 0x1b0);
        fVar60 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar60 = fVar60 * fVar55 * fVar45 * 0.25;
        if (fVar55 < fStack000000000000015c + fVar60) {
          fStack000000000000015c = fVar55 - fVar60;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar27 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_036cee6c(lVar27,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar22 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar22 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        uVar22 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar22 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_035574b8;
          fVar55 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar45 = *(float *)(*unaff_x21 + 0x1a8);
          fVar60 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar60 = fVar60 * fVar55 * fVar45 * 0.25;
          if (fVar55 < fStack000000000000015c + fVar60) {
            fStack000000000000015c = fVar55 - fVar60;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar60 = 0.0;
  }
FUN_03551b84:
  fVar55 = *(float *)(unaff_x19 + 200);
  fVar45 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar55 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar59 + ((fVar45 - fStack000000000000015c) - fVar60));
  fVar59 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar46 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar47 + fVar51 * (fVar50 + fStack000000000000015c + fVar59)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar59 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar59 = fVar46 - fVar51 * (fStack000000000000015c + fStack000000000000015c + fVar59);
  fVar50 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar45 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar60 + fVar60 +
                             fStack000000000000015c + fStack000000000000015c + fVar50);
  in_stack_000000e8 = (ulong)(uint)fVar60;
  fStack0000000000000104 = fVar55;
  fVar50 = fVar45;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar48 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar57 = fVar48 * fVar51 * (fVar60 + fStack000000000000015c + fVar50);
    fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar61 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar46 = fVar46 + 0.0;
    fVar59 = fVar59 + 0.0;
    fVar48 = fVar48 * fVar51 * (((fVar50 - fVar61) - fStack000000000000015c) - fVar60);
    fVar60 = fVar55 + fVar57;
    fVar50 = fVar45 + fVar48;
    fVar61 = (fVar57 - fVar48) * 0.5;
    fVar55 = (fVar55 + fVar48) - fVar61;
    fVar45 = (fVar45 + fVar57) - fVar61;
    fStack0000000000000104 = fVar60 - fVar61;
    fVar50 = fVar50 - fVar61;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar51;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar48 = 0.0;
    fVar57 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar61 = fVar59;
    fVar60 = fVar46;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar58 = (fVar45 + fVar55) * 0.5;
    fVar62 = (fVar59 + fVar46) * 0.5;
    fVar46 = fVar46 - fVar62;
    fStack0000000000000100 = 0.0;
    fVar60 = fVar46;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar58,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar58 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar61 = fVar59 - fVar62;
    fStack0000000000000114 = 0.0;
    fVar59 = fVar61;
    fVar55 = (float)FUN_036bdd2c(fVar55 - fVar58,_fStack0000000000000078,0);
    fVar55 = fVar58 + fVar55;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar59 = fVar62 + fVar59;
    fVar57 = 0.0;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar58,_fStack0000000000000078,0);
    fVar45 = fVar58 + fVar45;
    fVar46 = fVar62 + fVar46;
    fVar57 = fVar57 + 0.0;
    fVar48 = 0.0;
    fVar50 = (float)FUN_036bdd2c(fVar50 - fVar58,_fStack0000000000000078,0);
    fVar50 = fVar58 + fVar50;
    fVar48 = fVar48 + 0.0;
    fVar61 = fVar62 + fVar61;
    fVar60 = fVar62 + fVar60;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar27 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar51;
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x11c) = fVar55;
  *(float *)(lVar27 + 0x120) = fVar59;
  *(float *)(lVar27 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x114) = fVar60;
  *(float *)(lVar27 + 0x110) = fStack0000000000000104;
  *(float *)(lVar27 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x128) = fVar45;
  *(float *)(lVar27 + 300) = fVar46;
  *(float *)(lVar27 + 0x130) = fVar57;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x134) = fVar50;
  *(float *)(lVar27 + 0x138) = fVar61;
  *(float *)(lVar27 + 0x13c) = fVar48;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar13 = *unaff_x20;
  unaff_x26 = (long)(int)uVar13;
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar30 = lVar27 + unaff_x26 * unaff_x24;
  *(int *)(lVar30 + 0x140) = (int)unaff_x19[200];
  fVar46 = *(float *)(unaff_x19 + 0x9b);
  uVar22 = (ulong)(uint)fVar46;
  fVar50 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar30 + 0x15c) = (fVar45 - fVar55) / (fVar60 - fVar59);
  *(float *)(lVar30 + 0x14c) = (fVar47 - fVar46) + fVar50;
  fVar59 = fStack0000000000000128 * fVar51;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar59 = fVar59 / fStack0000000000000158;
    fVar56 = (fVar56 * fVar51) / fStack0000000000000158;
  }
  else {
    fVar56 = fVar56 * fVar51;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w25 == 0) || (uVar13 == unaff_w22)) {
    fVar56 = fVar50 + fVar56;
    fVar59 = fVar50 + fVar59;
    fVar60 = fVar56;
    fVar55 = fVar59;
    if (fVar50 != 0.0) {
      fVar55 = (fVar59 - fVar50) / *(float *)((long)unaff_x19 + 0x404);
      fVar60 = (fVar56 - fVar50) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar55 <= fVar59) {
        fVar55 = fVar59;
      }
      if (fVar56 <= fVar60) {
        fVar60 = fVar56;
      }
    }
    lVar27 = lVar27 + unaff_x26 * unaff_x24;
    fVar50 = fVar55;
    if (fVar55 <= *(float *)(unaff_x19 + 0x99)) {
      fVar50 = *(float *)(unaff_x19 + 0x99);
    }
    fVar45 = fVar60;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar60) {
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
    *(float *)(unaff_x19 + 0x99) = fVar50;
    *(float *)(lVar27 + 0x154) = fVar55;
    *(float *)(lVar27 + 0x158) = fVar60;
    *(float *)(lVar27 + 0x148) = fVar59 - fVar46;
    *(float *)(unaff_x19 + 0x98) = fVar59 - fVar46;
    *(float *)(lVar27 + 0x150) = fVar56 - fVar46;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar56 - fVar46;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar50;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar55 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar51 * fVar55) / fStack0000000000000158;
      uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar50 <= fStack0000000000000158) {
        fVar50 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar50;
    }
    if ((float)uVar22 == 0.0) {
      fVar51 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar59) {
        fVar51 = fVar59;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar51;
    }
  }
  else {
    fVar51 = *(float *)(unaff_x19 + 0x99);
    lVar27 = lVar27 + unaff_x26 * unaff_x24;
    *(float *)(lVar27 + 0x154) = fVar51;
    fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar51 = fVar51 - fVar46;
    *(float *)(lVar27 + 0x148) = fVar51;
    *(float *)(lVar27 + 0x158) = fVar59;
    *(float *)(unaff_x19 + 0x98) = fVar51;
    fVar59 = fVar59 - fVar46;
    *(float *)(lVar27 + 0x150) = fVar59;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar59;
  }
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar30 = lVar30 + (long)(int)uVar14 * unaff_x24;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  in_stack_000017dc = unaff_w29;
  if (((unaff_w29 == 9) ||
      ((((unaff_w25 == 0 && (unaff_w29 != 3)) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0xad)))) ||
     (((unaff_w29 == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar30 + 0x194) = 1;
    pfVar31 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar27 + 0x60);
      pfVar31 = (float *)(lVar27 + 100);
    }
    unaff_s8 = *pfVar33;
    unaff_s9 = *pfVar31;
    fVar51 = *(float *)(unaff_x19 + 0x6c);
    unaff_s10 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - unaff_s8) - unaff_s9;
    bVar10 = true;
    if ((fVar51 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar51))) {
      bVar10 = fVar51 == -1.0;
    }
    if (!bVar10) {
      in_stack_000000f8._4_4_ = fVar51;
    }
    unaff_s12 = 0.0;
    param_1 = 0.0;
    if ((char)unaff_x19[0x1e] != '\0') goto LAB_0355228c;
    param_1 = (float)FUN_03776cb4(&stack0x00001790,0);
    goto code_r0x03552288;
  }
  if (((unaff_w29 & 0xfffffffe) != 10) || ((int)unaff_x19[0x5c] != 6)) goto LAB_03552724;
  fVar59 = (float)uVar22;
  fVar51 = 0.0;
  if ((0.0 < fVar59) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    fVar51 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  uVar22 = (ulong)(uint)fStack00000000000000c4;
  if ((*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar59)) + fVar51 <=
      fStack00000000000000c4) goto LAB_03552724;
  if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
    *(uint *)((long)unaff_x19 + 0x2e4) = uVar14;
  }
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_000017a8 = FUN_0358c15c();
  lVar27 = unaff_x19[0x5d];
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
  }
  uVar20 = FUN_036cee6c(lVar27,0,0);
  if ((uVar20 & 1) != 0) {
    plVar42 = (long *)unaff_x19[0x5d];
    uVar18 = (**(code **)(*unaff_x19 + 0x518))();
    if (plVar42 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar42 + 0x528))(plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x530));
    lVar27 = unaff_x19[0x5d];
    if (lVar27 == 0) goto LAB_035574b8;
    *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
    FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar42 = (long *)unaff_x19[0x5d];
    if (plVar42 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
UnityEngine_AnimationClip__get_hasMotionCurves:
  in_stack_000017c8 = CONCAT44(3,uVar14);
  in_stack_000017dc = unaff_w29;
  goto LAB_03550bd0;
LAB_03552724:
  if ((((0x22 < unaff_w29 - 0x2007) ||
       ((1L << ((ulong)(unaff_w29 - 0x2007) & 0x3f) & 0x600000001U) == 0)) && (1 < unaff_w29 - 10))
     && (unaff_w29 != 0xa0)) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_026b97f8(unaff_w29,0);
    if ((uVar22 & 1) == 0) goto LAB_03552bb8;
  }
  if (((unaff_w29 != 0xad) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0x2060)) {
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
    *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
  }
LAB_03552bb8:
  if (unaff_w29 == 0xa0) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
    *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    unaff_w29 = in_stack_000017dc;
  }
  goto LAB_035530c4;
LAB_03554e78:
  uVar13 = uVar14 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x50), lVar43 == 0))
  goto LAB_035574b8;
  lVar37 = (long)(int)uVar13;
  lVar21 = lVar27 + lVar37 * 0x178;
  uVar34 = *(uint *)(lVar21 + 100);
  if (*(uint *)(lVar43 + 0x18) <= uVar34) goto LAB_035575f4;
  lVar40 = (long)(int)uVar34;
  lVar43 = lVar43 + lVar40 * 0x5c;
  lVar35 = *(long *)(lVar21 + 0x38);
  uVar3 = *(ushort *)(lVar21 + 0x20);
  uVar5 = *(uint *)(lVar43 + 0x3c);
  uVar44 = *(uint *)(lVar43 + 0x68);
  iVar2 = *(int *)(lVar43 + 0x20);
  iVar15 = *(int *)(lVar43 + 0x28);
  iVar16 = *(int *)(lVar43 + 0x2c);
  uVar6 = *(uint *)(lVar43 + 0x40);
  lVar21 = (long)(int)uVar6;
  fVar46 = *(float *)(lVar43 + 0x4c);
  fVar61 = *(float *)(lVar43 + 0x54);
  fVar60 = *(float *)(lVar43 + 0x58);
  fVar58 = *(float *)(lVar43 + 0x5c);
  fVar48 = *(float *)(lVar43 + 0x60);
  fVar57 = *(float *)(lVar43 + 0x6c);
  fVar62 = *(float *)(lVar43 + 0x70);
  fVar45 = *(float *)(lVar43 + 0x74);
  fVar47 = *(float *)(lVar43 + 0x78);
  uVar39 = (uint)uVar3;
  if ((int)uVar44 < 9) {
    switch(uVar44) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar48 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar60;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar48 + fVar58 * 0.5) - fVar60 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar58 + fVar48) - fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar58 + fVar48;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar44 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b8cc4(uVar4,0);
      if ((uVar22 & 1) == 0) {
        bVar1 = (int)uVar34 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 <= fVar58) && (!bVar1 && uVar44 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar48;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar48;
        }
        goto LAB_03555088;
      }
      if (((uVar14 == 1) || (uVar34 != uVar53)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar48;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar48;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar39,0);
        in_stack_000000e8 = 0;
      }
      else {
        cVar26 = (char)unaff_x19[0x1e];
        fVar48 = -fVar60;
        if (cVar26 != '\0') {
          fVar48 = fVar60;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar27 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar60 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar60 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar39 == 9) {
LAB_03556e74:
          fVar60 = 1.0 - fVar60;
        }
        else {
          if (uVar39 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar22 = FUN_026b97f8(uVar39,0);
            cVar26 = (char)unaff_x19[0x1e];
            if ((uVar22 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar60 = ((fVar58 + fVar48) * fVar60) / (float)iVar16;
        if (cVar26 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar60;
          in_stack_000000e8 =
               CONCAT44((float)(in_stack_000000e8 >> 0x20) + 0.0,(float)in_stack_000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar60;
        }
      }
    }
  }
  else if (uVar44 == 0x20) {
    fVar60 = fVar57 + fVar45;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar44 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar44 <= uVar13) goto LAB_035575f4;
  lVar43 = lVar27 + lVar37 * 0x178;
  fVar58 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar60 = SUB84(in_stack_000000b8,0) + (float)in_stack_000000e8;
  fVar48 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)(in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar43 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar27 + lVar37 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar56 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar34,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar29 = lVar27 + lVar37 * 0x178;
    *(undefined4 *)(lVar29 + 0x84) = 0;
    *(undefined4 *)(lVar29 + 0xac) = 0;
    *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
    fVar56 = 1.0;
    break;
  case 1:
    fVar47 = *(float *)(lVar27 + lVar37 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar29 = lVar27 + lVar37 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar47) - *(float *)(in_stack_00000080 + 0x230);
      fVar47 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar29 = lVar27 + lVar37 * 0x178;
    fVar45 = fVar45 - fVar57;
    *(float *)(lVar29 + 0x84) = fVar56 + (fVar47 - fVar57) / fVar45;
    *(float *)(lVar29 + 0xac) = fVar56 + (*(float *)(lVar29 + 0x98) - fVar57) / fVar45;
    *(float *)(lVar29 + 0xd4) = fVar56 + (*(float *)(lVar29 + 0xc0) - fVar57) / fVar45;
    fVar56 = fVar56 + (*(float *)(lVar29 + 0xe8) - fVar57) / fVar45;
    break;
  case 2:
    lVar29 = lVar27 + lVar37 * 0x178;
    fVar47 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar29 + 0x84) = fVar56 + fVar45 / fVar47;
    *(float *)(lVar29 + 0xac) =
         fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar29 + 0xd4) =
         fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar56 = fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar29 = lVar27 + lVar37 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0;
      *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar29 = lVar27 + lVar37 * 0x178;
      fVar47 = fVar47 - fVar62;
      fVar45 = fVar56 + (*(float *)(lVar29 + 0x74) - fVar62) / fVar47;
      fVar47 = fVar56 + (*(float *)(lVar29 + 0x9c) - fVar62) / fVar47;
      *(float *)(lVar29 + 0x88) = fVar45;
      *(float *)(lVar29 + 0xb0) = fVar47;
      *(float *)(lVar29 + 0xd8) = fVar45;
      *(float *)(lVar29 + 0x100) = fVar47;
      break;
    case 2:
      lVar29 = lVar27 + lVar37 * 0x178;
      fVar45 = fVar56 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar29 + 0x88) = fVar45;
      fVar47 = *(float *)(unaff_x19 + 0x9c);
      fVar57 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar29 + 0xd8) = fVar45;
      fVar45 = fVar56 + (*(float *)(lVar29 + 0x9c) - fVar47) / (fVar57 - fVar47);
      *(float *)(lVar29 + 0xb0) = fVar45;
      *(float *)(lVar29 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar44 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar44 <= uVar13) goto LAB_035575f4;
    lVar29 = lVar27 + lVar37 * 0x178;
    fVar45 = *(float *)(lVar29 + 0x15c);
    fVar47 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar45) * 0.5;
    fVar57 = fVar56 + *(float *)(lVar29 + 0x88) * fVar45 + fVar47;
    fVar56 = fVar56 + fVar47 + *(float *)(lVar29 + 0xb0) * fVar45;
    *(float *)(lVar29 + 0x84) = fVar57;
    *(float *)(lVar29 + 0xac) = fVar57;
    *(float *)(lVar29 + 0xd4) = fVar56;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar27 + lVar37 * 0x178 + 0xfc) = fVar56;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar44 <= uVar13) goto LAB_035575f4;
    lVar29 = lVar27 + lVar37 * 0x178;
    *(undefined4 *)(lVar29 + 0x88) = 0;
    *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar44) {
      lVar29 = lVar27 + lVar37 * 0x178;
      fVar46 = fVar46 - fVar61;
      fVar56 = (*(float *)(lVar29 + 0x74) - fVar61) / fVar46;
      fVar46 = (*(float *)(lVar29 + 0x9c) - fVar61) / fVar46;
      *(float *)(lVar29 + 0x88) = fVar56;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar44 <= uVar13) goto LAB_035575f4;
    lVar29 = lVar27 + lVar37 * 0x178;
    fVar56 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar29 + 0x88) = fVar56;
    fVar46 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar29 + 0xb0) = fVar46;
    *(float *)(lVar29 + 0xd8) = fVar46;
    *(float *)(lVar29 + 0x100) = fVar56;
    break;
  case 3:
    if (uVar44 <= uVar13) goto LAB_035575f4;
    lVar29 = lVar27 + lVar37 * 0x178;
    fVar46 = *(float *)(lVar29 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar46) * 0.5;
    fVar56 = *(float *)(lVar29 + 0x84) / fVar46 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar29 + 0xd4) / fVar46;
    *(float *)(lVar29 + 0x88) = fVar56;
    *(float *)(lVar29 + 0xb0) = fVar45;
    *(float *)(lVar29 + 0x100) = fVar56;
    *(float *)(lVar29 + 0xd8) = fVar45;
  }
  if (uVar44 <= uVar13) goto LAB_035575f4;
  lVar29 = lVar27 + lVar37 * 0x178;
  fVar56 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar37 * 0x178 + 400) & 1) != 0)) {
    fVar56 = -fVar56;
  }
  fVar45 = fVar51;
  if (((iVar12 == 2) || (fVar45 = fVar50, iVar12 == 1)) || (fVar45 = fVar51 / fVar59, iVar12 == 0))
  {
    fVar56 = fVar45 * fVar56;
  }
  lVar29 = lVar27 + lVar37 * 0x178;
  fVar46 = *(float *)(lVar29 + 0x88);
  fVar47 = *(float *)(lVar29 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar45 = (float)(int)fVar47;
  }
  fVar57 = *(float *)(lVar29 + 0xd4);
  fVar62 = *(float *)(lVar29 + 0xd8);
  fVar61 = -2.1474836e+09;
  if (fVar46 != INFINITY) {
    fVar61 = (float)(int)fVar46;
  }
  uVar49 = FUN_03591d3c(fVar47 - fVar45,fVar46 - fVar61);
  *(undefined4 *)(lVar29 + 0x84) = uVar49;
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar62 = fVar62 - fVar61;
  *(float *)(lVar29 + 0x88) = fVar56;
  uVar49 = FUN_03591d3c(fVar47 - fVar45,fVar62);
  *(undefined4 *)(lVar27 + lVar37 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
  fVar57 = fVar57 - fVar45;
  *(float *)(lVar27 + lVar37 * 0x178 + 0xb0) = fVar56;
  fVar45 = (float)FUN_03591d3c(fVar57,fVar62);
  *(float *)(lVar29 + 0xd4) = fVar45;
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_035575f4;
  *(float *)(lVar29 + 0xd8) = fVar56;
  uVar49 = FUN_03591d3c(fVar57,fVar46 - fVar61);
  *(undefined4 *)(lVar27 + lVar37 * 0x178 + 0xfc) = uVar49;
  uVar44 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar44 <= uVar13) goto LAB_035575f4;
  *(float *)(lVar27 + lVar37 * 0x178 + 0x100) = fVar56;
LAB_0355574c:
  if (((int)uVar13 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar34 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar44 <= uVar13) goto LAB_035575f4;
      lVar43 = lVar27 + lVar37 * 0x178;
      *(ulong *)(lVar43 + 0x70) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar43 + 0x70));
      *(float *)(lVar43 + 0x78) = fVar48 + *(float *)(lVar43 + 0x78);
      *(ulong *)(lVar43 + 0x98) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar43 + 0x98));
      *(float *)(lVar43 + 0xa0) = fVar48 + *(float *)(lVar43 + 0xa0);
      *(ulong *)(lVar43 + 0xc0) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar43 + 0xc0));
      *(float *)(lVar43 + 200) = fVar48 + *(float *)(lVar43 + 200);
      *(ulong *)(lVar43 + 0xe8) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar43 + 0xe8));
      *(float *)(lVar43 + 0xf0) = fVar48 + *(float *)(lVar43 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar34 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar13 < uVar44) {
        if (*(uint *)(lVar27 + lVar37 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar43 = lVar27 + lVar37 * 0x178;
          *(ulong *)(lVar43 + 0x70) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar43 + 0x70));
          *(float *)(lVar43 + 0x78) = fVar48 + *(float *)(lVar43 + 0x78);
          *(ulong *)(lVar43 + 0x98) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar43 + 0x98));
          *(float *)(lVar43 + 0xa0) = fVar48 + *(float *)(lVar43 + 0xa0);
          *(ulong *)(lVar43 + 0xc0) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar43 + 0xc0));
          *(float *)(lVar43 + 200) = fVar48 + *(float *)(lVar43 + 200);
          *(ulong *)(lVar43 + 0xe8) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar43 + 0xe8));
          *(float *)(lVar43 + 0xf0) = fVar48 + *(float *)(lVar43 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar44 <= uVar13) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar44 = *(uint *)(lVar27 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar29 = lVar27 + lVar37 * 0x178;
  *(undefined8 *)(lVar29 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar29 + 0x78) = uVar49;
  if (uVar44 <= uVar13) goto LAB_035575f4;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar29 = lVar27 + lVar37 * 0x178;
  *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar29 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar29 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar29 + 0xf0) = uVar49;
  *(undefined1 *)(lVar43 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar32)();
  }
  else if (iVar15 == 1) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  uVar18 = *(undefined8 *)(lVar43 + 0x11c);
  *(undefined8 *)(lVar43 + 0x11c) =
       CONCAT44(fVar60 + (float)((ulong)uVar18 >> 0x20),fVar58 + (float)uVar18);
  *(float *)(lVar43 + 0x124) = fVar48 + *(float *)(lVar43 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  *(ulong *)(lVar43 + 0x110) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0x110) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar43 + 0x110));
  *(float *)(lVar43 + 0x118) = fVar48 + *(float *)(lVar43 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  *(ulong *)(lVar43 + 0x128) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar43 + 0x128) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar43 + 0x128));
  *(float *)(lVar43 + 0x130) = fVar48 + *(float *)(lVar43 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  *(float *)(lVar43 + 0x134) = fVar58 + *(float *)(lVar43 + 0x134);
  *(ulong *)(lVar43 + 0x138) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar43 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar43 + 0x138));
  lVar43 = *in_stack_00000170;
  if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar44 = *(uint *)(lVar29 + 0x18);
  if (uVar44 <= uVar13) goto LAB_035575f4;
  lVar36 = lVar29 + lVar37 * 0x178;
  uVar20 = CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar36 + 0x140));
  fVar45 = fVar60 + *(float *)(lVar36 + 0x150);
  uVar52 = (ulong)(uint)fVar45;
  uVar54 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar45;
  *(ulong *)(lVar36 + 0x140) = uVar20;
  *(ulong *)(lVar36 + 0x148) = uVar54;
  if (uVar34 == uVar53) {
    uVar53 = *unaff_x20 - 1;
    if (uVar13 == uVar53) goto LAB_03555b44;
  }
  else {
    lVar43 = *(long *)(lVar43 + 0x50);
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar36 = (long)(int)uVar53;
    lVar38 = lVar43 + lVar36 * 0x5c;
    uVar54 = (ulong)(uint)*(float *)(lVar38 + 0x58);
    fVar45 = fVar60 + *(float *)(lVar38 + 0x54);
    uVar20 = (ulong)(uint)fVar45;
    fVar46 = fVar58 + *(float *)(lVar38 + 0x58);
    uVar52 = (ulong)(uint)fVar46;
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar45;
    *(float *)(lVar38 + 0x58) = fVar46;
    if (uVar44 <= *(uint *)(lVar38 + 0x34)) goto LAB_035575f4;
    uVar49 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar43 = lVar43 + lVar36 * 0x5c;
    *(float *)(lVar43 + 0x70) = fVar45;
    *(undefined4 *)(lVar43 + 0x6c) = uVar49;
    lVar43 = *in_stack_00000170;
    if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar43 = *(long *)(lVar43 + 0x38);
    if (lVar43 == 0) goto LAB_035574b8;
    uVar53 = *(uint *)(lVar29 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar29 = lVar29 + lVar36 * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar53 * 0x178 + 0x128);
    *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    uVar53 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar13 == uVar53) {
      lVar43 = *in_stack_00000170;
      if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar34) goto LAB_035575f4;
      lVar36 = lVar29 + lVar40 * 0x5c;
      uVar54 = (ulong)(uint)*(float *)(lVar36 + 0x58);
      uVar20 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar36 + 0x4c));
      fVar45 = fVar60 + *(float *)(lVar36 + 0x54);
      fVar58 = fVar58 + *(float *)(lVar36 + 0x58);
      uVar52 = (ulong)(uint)fVar58;
      *(ulong *)(lVar36 + 0x4c) = uVar20;
      *(float *)(lVar36 + 0x54) = fVar45;
      *(float *)(lVar36 + 0x58) = fVar58;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
      uVar49 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar29 = lVar29 + lVar40 * 0x5c;
      *(float *)(lVar29 + 0x70) = fVar45;
      *(undefined4 *)(lVar29 + 0x6c) = uVar49;
      lVar43 = *in_stack_00000170;
      if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar34) goto LAB_035575f4;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      uVar53 = *(uint *)(lVar29 + lVar40 * 0x5c + 0x40);
      if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
      lVar29 = lVar29 + lVar40 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar53 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar22 = FUN_026b82c4(uVar39,0);
  if (((((uVar22 & 1) == 0) && (1 < uVar39 - 0x2010)) && (uVar39 != 0xad)) && (uVar39 != 0x2d)) {
    if (bVar7) {
      if (((uVar14 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*unaff_x20 && ((uVar39 == 0x2019 || (uVar39 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar14 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b82c4(uVar4,0);
        if ((uVar22 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_026b82c4(uVar4,0);
          if ((uVar22 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar14 != 1) {
LAB_0355686c:
        bVar7 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b81f8(uVar39,0);
      if ((uVar22 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b63d8(uVar39,0);
        if (((uVar39 != 0x200b) && ((uVar22 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar13 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b82c4(uVar39,0);
      iVar15 = (int)fStack0000000000000128;
      if ((uVar22 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar14 - 2;
    }
    lVar43 = *in_stack_00000170;
    if (lVar43 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar43 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar53 = *(uint *)(lVar43 + 0x24);
    iVar16 = *(int *)(lVar29 + 0x18);
    if (iVar16 < (int)(uVar53 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar43 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar43 = *in_stack_00000170;
      if (lVar43 == 0) goto LAB_035574b8;
    }
    lVar43 = *(long *)(lVar43 + 0x40);
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar43 = lVar43 + (long)(int)uVar53 * 0x18;
    *(long **)(lVar43 + 0x20) = unaff_x19;
    *(float *)(lVar43 + 0x28) = fStack0000000000000158;
    *(int *)(lVar43 + 0x2c) = iVar15;
    *(int *)(lVar43 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar43 = unaff_x19[0x6d];
    if (lVar43 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar43 + 0x50);
    *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar34) goto LAB_035575f4;
    lVar29 = lVar29 + lVar40 * 0x5c;
    bVar7 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      fStack0000000000000158 = (float)uVar13;
    }
    if (uVar13 == *unaff_x20 - 1) {
      lVar43 = *in_stack_00000170;
      if (lVar43 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar43 + 0x40);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar53 = *(uint *)(lVar43 + 0x24);
      iVar15 = *(int *)(lVar29 + 0x18);
      if (iVar15 < (int)(uVar53 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar43 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar43 = *in_stack_00000170;
        if (lVar43 == 0) goto LAB_035574b8;
      }
      lVar43 = *(long *)(lVar43 + 0x40);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
      lVar43 = lVar43 + (long)(int)uVar53 * 0x18;
      *(long **)(lVar43 + 0x20) = unaff_x19;
      *(float *)(lVar43 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar43 + 0x2c) = uVar13;
      *(uint *)(lVar43 + 0x30) = uVar14 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar43 = unaff_x19[0x6d];
      if (lVar43 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar43 + 0x50);
      *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar34) goto LAB_035575f4;
      lVar29 = lVar29 + lVar40 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
LAB_03555d68:
    bVar7 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  uVar53 = *(uint *)(lVar43 + 0x18);
  if (uVar53 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar43 + lVar37 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_03555da0:
      if (uVar53 <= uVar14 - 2) goto LAB_035575f4;
      lVar40 = *unaff_x19;
      uVar53 = *(uint *)(lVar43 + lVar30 + -0x330);
      uVar49 = *(undefined4 *)(lVar43 + lVar30 + -0x2f8);
LAB_035562ec:
      pcVar32 = *(code **)(lVar40 + 0x8d8);
LAB_035562f4:
      uVar54 = (ulong)uVar53;
      uVar20 = (ulong)(uint)_bStack0000000000000070;
      uVar52 = (ulong)_bStack0000000000000074;
      (*pcVar32)(fStack0000000000000078,uVar20,uVar52,uVar54,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar49);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar43 = *(long *)puVar8;
      }
LAB_03556348:
      bVar11 = false;
      fVar55 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar43 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar11 = false;
    }
  }
  else {
    lVar43 = lVar43 + lVar37 * 0x178;
    iVar15 = *(int *)(lVar43 + 0x68);
    *(int *)(lVar43 + 0x16c) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar34)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_026b63d8(uVar39,0);
    if ((uVar39 != 0x200b) && ((uVar22 & 1) == 0)) {
      lVar43 = *in_stack_00000170;
      if ((lVar43 == 0) || (lVar40 = *(long *)(lVar43 + 0x38), lVar40 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
      fVar45 = *(float *)(lVar40 + lVar37 * 0x178 + 0x160);
      if (fVar55 <= fVar45) {
        fVar55 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar56)) {
        fStack0000000000000100 = ABS(fVar56);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar43 = *in_stack_00000170;
          if (lVar43 == 0) goto LAB_035574b8;
          lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar40 + 0x15a8);
      }
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar46 = *(float *)(lVar43 + lVar37 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar46 = fVar46 + fVar55 * fVar45;
      if (fVar46 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar46;
      }
      uVar20 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b97f8(uVar39,0);
        if ((uVar22 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar43 = lVar43 + lVar37 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar43 + 0x160);
      fStack0000000000000078 = *(float *)(lVar43 + 0x11c);
      uVar52 = (ulong)(uint)fStack0000000000000078;
      bVar11 = fVar55 != 0.0;
      fVar45 = in_stack_00000088._4_4_;
      if (bVar11) {
        fVar45 = fVar55;
      }
      fVar55 = fVar45;
      uVar63 = *(undefined4 *)(lVar43 + 0x168);
      _bStack0000000000000074 = 0;
      fVar45 = fVar56;
      if (bVar11) {
        fVar45 = fStack0000000000000100;
      }
      uVar20 = (ulong)(uint)fVar45;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        if (uVar13 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar37 * 0x178;
          lVar40 = *unaff_x19;
          uVar53 = *(uint *)(lVar43 + 0x128);
          uVar49 = *(undefined4 *)(lVar43 + 0x160);
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
      uVar22 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        lVar40 = lVar37;
        uVar53 = uVar13;
        if (uVar39 == 0x200b || (uVar22 & 1) != 0) {
          lVar40 = lVar21;
          uVar53 = uVar6;
        }
        if (uVar53 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar40 * 0x178;
          uVar53 = *(uint *)(lVar43 + 0x128);
          uVar49 = *(undefined4 *)(lVar43 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        uVar53 = *(uint *)(lVar43 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar14) goto LAB_035575f4;
      uVar22 = FUN_03567ad8(uVar63,*(undefined4 *)(lVar43 + lVar30),0);
      if ((uVar22 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0)) {
          if (uVar13 < *(uint *)(lVar43 + 0x18)) {
            lVar43 = lVar43 + lVar37 * 0x178;
            uVar54 = (ulong)*(uint *)(lVar43 + 0x128);
            uVar52 = (ulong)_bStack0000000000000074;
            uVar20 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar20,uVar52,uVar54,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar43 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar43 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar43 = *(long *)puVar8;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar11 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
  if (lVar35 == 0) goto LAB_035574b8;
  uVar53 = *(uint *)(lVar43 + lVar37 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar53 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar14 - 2) goto LAB_035575f4;
      uVar53 = *(uint *)(lVar43 + lVar30 + -0x330);
      fVar60 = *(float *)(lVar43 + lVar30 + -0x30c);
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar54 = (ulong)uVar53;
      uVar20 = (ulong)(uint)fStack000000000000009c;
      uVar52 = (ulong)(uint)fStack0000000000000098;
      (*pcVar32)(fStack00000000000000a0,uVar20,uVar52,uVar54,
                 fStack00000000000000a8 * fVar45 + fVar60,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar43 = *in_stack_00000170;
    if ((lVar43 == 0) || (lVar40 = *(long *)(lVar43 + 0x38), lVar40 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_035575f4;
    *(int *)(lVar40 + lVar37 * 0x178 + 0x174) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar34)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar40 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b97f8(uVar39,0);
        if ((uVar22 & 1) != 0) goto LAB_035564e8;
        lVar43 = *in_stack_00000170;
        if (lVar43 == 0) goto LAB_035574b8;
      }
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar43 = lVar43 + lVar37 * 0x178;
      fStack0000000000000040 = *(float *)(lVar43 + 0x60);
      fStack0000000000000038 = *(float *)(lVar43 + 0x14c);
      uVar20 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar43 + 0x11c);
      uVar52 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar43 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar53 = *unaff_x20;
    if (uVar53 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        if (uVar13 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar37 * 0x178;
          lVar21 = *unaff_x19;
          uVar53 = *(uint *)(lVar43 + 0x128);
          fVar60 = *(float *)(lVar43 + 0x14c);
LAB_03556654:
          pcVar32 = *(code **)(lVar21 + 0x8d8);
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
      uVar22 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        uVar53 = *(uint *)(lVar43 + 0x18);
        if (uVar39 == 0x200b || (uVar22 & 1) != 0) {
          if (uVar53 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar21 = lVar37;
          if (uVar53 <= uVar13) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar43 = lVar43 + lVar21 * 0x178;
        fVar60 = *(float *)(lVar43 + 0x14c);
        uVar53 = *(uint *)(lVar43 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar13 < (int)uVar53) {
      lVar43 = *in_stack_00000170;
      if ((lVar43 != 0) && (lVar40 = *(long *)(lVar43 + 0x38), lVar40 != 0)) {
        if (uVar14 < *(uint *)(lVar40 + 0x18)) {
          if (*(float *)(lVar40 + lVar30 + -0x108) == fStack0000000000000040) {
            fVar46 = *(float *)(lVar40 + lVar30 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = (ulong)(uint)fStack0000000000000038;
            uVar22 = FUN_03567bac(fVar60 + fVar46,uVar20,0);
            if ((uVar22 & 1) != 0) {
              uVar53 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar43 = *in_stack_00000170;
            if (lVar43 == 0) goto LAB_035574b8;
          }
          lVar43 = *(long *)(lVar43 + 0x38);
          if (lVar43 != 0) {
            uVar53 = *(uint *)(lVar43 + 0x18);
            if ((int)uVar13 <= (int)uVar6) goto FUN_035568e8;
            if (uVar6 < uVar53) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar13 < (int)uVar53) {
      iVar15 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar43 = *(long *)(lVar27 + lVar30 + -0x130);
      if (lVar43 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar43,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        if (uVar14 - 2 < *(uint *)(lVar43 + 0x18)) {
          lVar21 = *unaff_x19;
          uVar53 = *(uint *)(lVar43 + lVar30 + -0x330);
          fVar60 = *(float *)(lVar43 + lVar30 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  uVar53 = (uint)*(undefined8 *)(lVar43 + 0x18);
  if (uVar53 <= uVar13) goto LAB_035575f4;
  if ((*(byte *)(lVar43 + lVar37 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar52 = (ulong)uStack00000000000000c0;
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar52,uVar54,fStack00000000000000d0,uVar52);
    }
LAB_035569b4:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar13) || ((int)unaff_x19[0x66] < (int)uVar34)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar43 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar13)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar13 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_026b97f8(uVar39,0);
        if ((uVar22 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar21 = *(long *)puVar8;
      }
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      uVar53 = (uint)*(undefined8 *)(lVar43 + 0x18);
      if (uVar53 <= uVar13) goto LAB_035575f4;
      lVar21 = *(long *)(lVar21 + 0xb8);
      lVar35 = lVar43 + lVar37 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar35 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar35 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar21 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar21 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar35 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar21 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar21 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar53 <= uVar13) goto LAB_035575f4;
    lVar43 = lVar43 + lVar37 * 0x178;
    fVar45 = *(float *)(lVar43 + 0x128);
    fVar61 = *(float *)(lVar43 + 0x188);
    uVar19 = *(undefined8 *)(lVar43 + 0x17c);
    fVar57 = *(float *)(lVar43 + 0x184);
    uVar18 = *(undefined8 *)(lVar43 + 0x184);
    fVar48 = *(float *)(lVar43 + 0x18c);
    fVar60 = *(float *)(lVar43 + 0x11c);
    fVar47 = *(float *)(lVar43 + 0x148);
    fVar46 = *(float *)(lVar43 + 0x150);
    in_stack_00000178 = uVar19;
    fStack0000000000000180 = fVar57;
    fStack0000000000000184 = fVar61;
    in_stack_00000188 = fVar48;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar22 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar43 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar22 & 1) == 0) {
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar43);
      }
      fVar45 = fVar45 + (float)in_stack_000017b8;
      uVar52 = (ulong)(uint)fVar45;
      fVar60 = fVar60 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar46 = fVar46 - in_stack_000017c0;
      uVar20 = (ulong)(uint)fVar46;
      fVar47 = fVar47 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar54 = (ulong)(uint)fVar47;
      if (fVar60 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar60;
      }
      if (fVar46 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar46;
      }
      if (fStack00000000000000c8 <= fVar45) {
        fStack00000000000000c8 = fVar45;
      }
      if (fStack00000000000000d0 <= fVar47) {
        fStack00000000000000d0 = fVar47;
      }
    }
    else {
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar43);
      }
      fVar60 = (fVar60 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar54 = (ulong)(uint)fVar60;
      if (fVar46 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar46;
      }
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar52 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar47) {
        fStack00000000000000d0 = fVar47;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar52,uVar54,fStack00000000000000d0,uVar52);
      fStack00000000000000dc = fVar46 - fVar48;
      fStack00000000000000c8 = fVar45 + fVar57;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar47 + fVar61;
      fStack00000000000000d8 = fVar60;
      in_stack_000017b0 = uVar19;
      in_stack_000017b8 = uVar18;
      in_stack_000017c0 = fVar48;
    }
    if (((*unaff_x20 == 1) || (uVar13 == uVar5)) || (((int)uVar6 <= (int)uVar13 || (!bVar1)))) {
      uVar52 = (ulong)uStack00000000000000c0;
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar52,uVar54,fStack00000000000000d0,uVar52);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar13 = *unaff_x20;
  lVar30 = lVar30 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar13 <= (int)uVar14;
  uVar14 = uVar14 + 1;
  uVar53 = uVar34;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar27 = *in_stack_00000170;
  if (lVar27 != 0) {
    iVar17 = uVar34 + 1;
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar27 + 0x18) = uVar13;
    lVar30 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar17;
    if ((int)uVar13 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar30;
    *(float *)(lVar27 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar22 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar22 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar27 = unaff_x19[0xdf];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar27 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar17 != 0x19) {
      lVar27 = unaff_x19[0xe5];
      if (lVar27 == 0) goto LAB_035574b8;
      uVar13 = FUN_03911ee4(lVar27,0);
      FUN_03911f20(lVar27,uVar13 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar18 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar13 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar27 = *in_stack_00000170;
                              if (lVar27 != 0) {
                                lVar43 = 0;
                                lVar30 = 0;
                                do {
                                  uVar22 = lVar30 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar22)
                                  goto LAB_03554724;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*plVar42 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                  FUN_03596a20(lVar27 + lVar43 + 0x70,0);
                                  lVar27 = unaff_x19[0xe1];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                  uVar19 = *(undefined8 *)(lVar27 + lVar30 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036d35a8(uVar19,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0
                                         )) break;
                                      if (*(int *)(*plVar42 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                      FUN_03596b20(lVar27 + lVar43 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a460c(lVar27,*(undefined8 *)(lVar21 + lVar43 + 0x80),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4810(lVar27,*(undefined8 *)(lVar21 + lVar43 + 0x98),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a48bc(lVar27,*(undefined8 *)(lVar21 + lVar43 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000170 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4e24(lVar27,*(undefined8 *)(lVar21 + lVar43 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = UnityEngine_Material__GetColorArray(lVar27,0),
                                       lVar27 == 0)) break;
                                    FUN_036aa280(lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_037b514c(lVar27,0);
                                    lVar21 = unaff_x19[0xe1];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (uVar19 = UnityEngine_Material__GetColorArray(lVar21,0),
                                       lVar27 == 0)) break;
                                    FUN_0390f3a4(lVar27,uVar19,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390eec8(uVar18,uVar20,uVar52,uVar54,lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390ed78(lVar27,uVar13 & 1,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_035575f4;
                                    plVar41 = *(long **)(lVar27 + lVar30 * 8 + 0x28);
                                    uVar14 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar41 == (long *)0x0) break;
                                    (**(code **)(*plVar41 + 0x2c8))
                                              (plVar41,uVar14 & 1,*(undefined8 *)(*plVar41 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *in_stack_00000170;
                                  lVar30 = lVar30 + 1;
                                  lVar43 = lVar43 + 0x50;
                                } while (lVar27 != 0);
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


