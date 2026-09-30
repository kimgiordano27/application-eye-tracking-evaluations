/*
FUNCTION_NAME: UnityEngine.Motion$$.ctor
ENTRY_POINT: 03552050
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


void UnityEngine_Motion___ctor(long param_1,undefined1 param_2 [16],ulong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  int *piVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  undefined4 *puVar27;
  long lVar28;
  long lVar29;
  long in_x9;
  float *pfVar30;
  code *pcVar31;
  float *pfVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar38;
  uint unaff_w22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar39;
  uint unaff_w25;
  long lVar40;
  long *plVar41;
  long unaff_x26;
  uint unaff_w27;
  long lVar42;
  uint unaff_w29;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  ulong uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  ulong unaff_d13;
  undefined4 uVar62;
  float fVar63;
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
  
code_r0x03552050:
  uVar14 = *(uint *)(unaff_x19 + 0x4f);
  iVar17 = (int)unaff_x24;
  if ((unaff_w29 == 9) ||
     (((((unaff_w25 == 0 && (unaff_w29 != 3)) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0xad)) ||
      (((unaff_w29 == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(in_x9 + 0x194) = 1;
    pfVar30 = _fStack00000000000000a0;
    pfVar32 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar40 = *(long *)(param_1 + 0x50);
      if (lVar40 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar40 + 0x60);
      pfVar30 = (float *)(lVar40 + 100);
    }
    fVar63 = *pfVar32;
    fVar44 = *pfVar30;
    fVar51 = *(float *)(unaff_x19 + 0x6c);
    fVar46 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar63) - fVar44;
    bVar11 = true;
    if ((fVar51 <= in_stack_000000f8._4_4_) && (bVar11 = false, !NAN(fVar51))) {
      bVar11 = fVar51 == -1.0;
    }
    if (!bVar11) {
      in_stack_000000f8._4_4_ = fVar51;
    }
    fVar51 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar51 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      unaff_w29 = in_stack_000017dc;
    }
    fVar49 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
    if (unaff_w29 != 0xad) {
      in_stack_000000f0 = (float)unaff_d13;
    }
    fVar47 = (float)param_3;
    fVar45 = 0.0;
    if ((0.0 < fVar47) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    unaff_w27 = *unaff_x20;
    fVar45 = (*(float *)(unaff_x19 + 0x97) - (fVar59 - fVar47)) + fVar45;
    if (fStack00000000000000c4 < fVar45) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar22 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar48 = *(float *)(unaff_x19 + 0x59);
        if (((fVar48 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar47)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar51 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar45) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar51 <= fVar48) {
            fVar51 = fVar48;
          }
          goto LAB_03554b48;
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar45 = *(float *)(unaff_x19 + 0x4a);
        param_3 = (ulong)(uint)fVar45;
        if ((fVar45 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar51 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar51 <= DAT_00d38b84) {
            fVar51 = DAT_00d38b84;
          }
          fVar63 = (fVar47 - fVar51) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar47;
          fVar51 = DAT_00d38e60;
          if (fVar63 != INFINITY) {
            fVar51 = (float)(int)fVar63 / 20.0;
          }
          if (fVar51 <= fVar45) {
            fVar51 = fVar45;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar9;
        }
        lVar29 = *(long *)(lVar40 + 0xb8);
        lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
          lVar40 = FUN_01a46ff8(lVar40);
        }
        piVar23 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar23 == 0) {
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar40 = *(long *)puVar9;
          }
          FUN_0209b778(*(long *)(lVar40 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar13 = FUN_0358c15c();
LAB_035529e8:
          iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar15;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar13 - 1;
          in_stack_000017c8 = CONCAT44(0x2026,iVar15);
        }
        goto LAB_03550bd0;
      default:
        goto UnityEngine_AnimationClip__set_wrapMode;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_03552550:
        in_stack_000017a8 = FUN_0358c15c();
        break;
      case 5:
        if ((unaff_w27 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017a8 = 0xffffffff;
          in_stack_000017c8 = uVar22;
        }
        else {
          fVar51 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar51 - fVar59) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_3 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar40 = NEON_rev64(param_3,4);
          unaff_x19[0x99] = lVar40;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        }
        goto LAB_03550bd0;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar40 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar21 = FUN_036cee6c(lVar40,0,0);
        if ((uVar21 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar22 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar22,*(undefined8 *)(*plVar41 + 0x530));
          lVar40 = unaff_x19[0x5d];
          if (lVar40 == 0) goto LAB_035574b8;
          *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      in_stack_000017c8 = CONCAT44(3,unaff_w27);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar46 = ABS(fVar46) + fVar51 * (1.0 - fVar49) * in_stack_000000f0;
    fVar51 = 1.0;
    if ((uVar14 & 0x18) != 0) {
      fVar51 = DAT_00d38acc;
    }
    fVar59 = fVar51 * in_stack_000000f8._4_4_;
    if (fVar46 <= fVar59) {
LAB_03552f54:
      if (unaff_w29 == 0xad) {
        if ((*in_stack_00000170 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0)) goto LAB_035574b8;
        if (*unaff_x20 < *(uint *)(lVar40 + 0x18)) {
          *(undefined1 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
          goto LAB_035530c4;
        }
      }
      else if (unaff_w29 == 9) {
        lVar40 = *in_stack_00000170;
        if ((lVar40 == 0) || (lVar29 = *(long *)(lVar40 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        uVar18 = *unaff_x20;
        if (uVar18 < *(uint *)(lVar29 + 0x18)) {
          *(undefined1 *)(lVar29 + (long)(int)uVar18 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar18;
          lVar29 = *(long *)(lVar40 + 0x50);
          if (lVar29 == 0) goto LAB_035574b8;
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
            goto LAB_03552fcc;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar59,in_stack_000000e8 & 0xffffffff);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar18 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar18;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar18;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x50), lVar40 == 0))
        goto LAB_035574b8;
        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          in_stack_00000068._4_4_ = 0;
          *(float *)(lVar40 + 0x60) = fVar63;
          *(float *)(lVar40 + 100) = fVar44;
          goto LAB_035530c4;
        }
      }
      goto LAB_035575f4;
    }
    param_3 = in_stack_000000e8 & 0xffffffff;
    if (((char)unaff_x19[0x5b] == '\0') || (unaff_w27 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar59 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar49 < fVar59) {
          fVar63 = fVar46 / (1.0 - fVar49);
          if (fVar49 <= 0.0) {
            fVar63 = fVar46;
          }
          fVar49 = fVar49 + (fVar46 - fVar51 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar63;
          goto LAB_035574e8;
        }
        fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar59 = *(float *)(unaff_x19 + 0x4a);
        if (fVar59 < fVar49) {
          fVar51 = (fVar49 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar51 <= DAT_00d38b84) {
            fVar51 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar49;
          fVar49 = fVar49 - fVar51;
LAB_03557524:
          fVar63 = fVar49 * 20.0 + 0.5;
          fVar51 = DAT_00d38e60;
          if (fVar63 != INFINITY) {
            fVar51 = (float)(int)fVar63 / 20.0;
          }
          if (fVar51 <= fVar59) {
            fVar51 = fVar59;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar51;
          return;
        }
      }
      iVar13 = (int)unaff_x19[0x5c];
      if (iVar13 == 1) {
        lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar40 = *(long *)puVar9;
        }
        lVar29 = *(long *)(lVar40 + 0xb8);
        lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
          lVar40 = FUN_01a46ff8(lVar40);
        }
        piVar23 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar40 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar23 != 0) {
          lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar40 = *(long *)puVar9;
          }
          FUN_0209b778(*(long *)(lVar40 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
          goto LAB_035529dc;
        }
        goto LAB_03554580;
      }
      if (iVar13 != 6) {
        if (iVar13 == 3) {
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          goto LAB_03552550;
        }
        goto LAB_03552f54;
      }
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      lVar40 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar21 = FUN_036cee6c(lVar40,0,0);
      if ((uVar21 & 1) != 0) {
        plVar41 = (long *)unaff_x19[0x5d];
        uVar22 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar41 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar41 + 0x528))(plVar41,uVar22,*(undefined8 *)(*plVar41 + 0x530));
        lVar40 = unaff_x19[0x5d];
        if (lVar40 == 0) goto LAB_035574b8;
        *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar41 = (long *)unaff_x19[0x5d];
        if (plVar41 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
LAB_03552b00:
      in_stack_000017c8 = CONCAT44(3,*unaff_x20);
    }
    else {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar40 = *in_stack_00000170;
        if ((lVar40 == 0) || (lVar29 = *(long *)(lVar40 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar49 = *(float *)(unaff_x19 + 0x9b);
        fVar59 = 0.0;
        if ((0.0 < fVar49) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar59 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar59 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar59 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar40 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar40 == 0) goto LAB_035574b8;
        fVar49 = *(float *)(unaff_x19 + 0x9b);
        fVar59 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_035574b8;
      uVar18 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar40 + 0x18) <= uVar18) ||
         (uVar55 = uVar18 - 1, *(uint *)(lVar40 + 0x18) <= uVar55)) goto LAB_035575f4;
      param_3 = (ulong)(uint)(fVar59 + *(float *)(unaff_x19 + 0x97));
      fVar45 = (fVar59 + *(float *)(unaff_x19 + 0x97) + fVar49) -
               *(float *)(lVar40 + (long)(int)uVar18 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar40 + (long)(int)uVar55 * (long)iVar17 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar45 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar40 + (long)(int)uVar18 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar49 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar59 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar59 <= fVar49) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
              param_3 = (ulong)(uint)fVar49;
              fVar59 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar49 <= fVar59) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar51 = (fVar49 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar51 <= DAT_00d38b84) {
                fVar51 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar49;
              fVar49 = fVar49 - fVar51;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar63 = fVar46;
            if (0.0 < fVar49) {
              fVar63 = fVar46 / (1.0 - fVar49);
            }
            fVar49 = fVar49 + (fVar46 - fVar51 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar63;
LAB_035574e8:
            if (fVar59 <= fVar49) {
              fVar49 = fVar59;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar49;
            return;
          }
LAB_03552d44:
          lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar40 = *(long *)puVar9;
          }
          iVar13 = *(int *)(*(long *)(lVar40 + 0xb8) + 0xe78);
          if (((iVar13 != iStack0000000000000034) && (iVar13 != -1)) &&
             (((bStack0000000000000070 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar40 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
            goto LAB_035574b8;
            uVar18 = *unaff_x20 - 1;
            if (*(uint *)(lVar40 + 0x18) <= uVar18) goto LAB_035575f4;
            iStack0000000000000034 = iVar13;
            if (*(short *)(lVar40 + (long)(int)uVar18 * (long)iVar17 + 0x20) == 0xad) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar18;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              in_stack_000017c8 = CONCAT44(0x2d,uVar18);
              goto LAB_03550bd0;
            }
          }
          if (fVar45 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            param_3 = unaff_d13;
            FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar59 = fStack00000000000000c4;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar49 = *(float *)(unaff_x19 + 0x59);
              if ((fVar49 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar51 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar45) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar51 <= fVar49) {
                  fVar51 = fVar49;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar51;
                return;
              }
              fVar49 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar59 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar49 < fVar59) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
              param_3 = (ulong)(uint)fVar49;
              fVar59 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar59 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557594;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_03552ef4_caseD_0;
            case 1:
              lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar40 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar29 = *(long *)(lVar40 + 0xb8);
              lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
                lVar40 = FUN_01a46ff8(lVar40);
              }
              piVar23 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar40 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              if (*piVar23 == 0) {
                bStack0000000000000074 = 0;
                goto LAB_03554580;
              }
              lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar40 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar40 + 0xb8) + 0x11f0,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              memcpy(&stack0x00001008,&stack0x000008a0,0x378);
              iVar13 = FUN_0358c15c();
              bStack0000000000000074 = 0;
              goto LAB_035529e8;
            case 3:
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_000017a8 = FUN_0358c15c();
              bStack0000000000000074 = 0;
              goto UnityEngine_AnimationClip__get_hasMotionCurves;
            case 5:
              *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
              param_3 = unaff_d13;
              FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                           in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              break;
            case 6:
              lVar40 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar21 = FUN_036cee6c(lVar40,0,0);
              if ((uVar21 & 1) != 0) {
                plVar41 = (long *)unaff_x19[0x5d];
                uVar22 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar41 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar41 + 0x528))(plVar41,uVar22,*(undefined8 *)(*plVar41 + 0x530));
                lVar40 = unaff_x19[0x5d];
                if (lVar40 == 0) goto LAB_035574b8;
                *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar41 = (long *)unaff_x19[0x5d];
                if (plVar41 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
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
          bStack0000000000000070 = 1;
          bStack0000000000000074 = 0;
          in_stack_00000068._4_4_ = 1;
        }
      }
      else {
        bStack0000000000000074 = 0;
        *unaff_x20 = uVar55;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        in_stack_000017c8 = CONCAT44(0x2d,uVar55);
      }
    }
  }
  else {
    if (((unaff_w29 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar63 = (float)param_3;
      fVar51 = 0.0;
      if ((0.0 < fVar63) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar51 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_3 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar63)) + fVar51)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar40 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar21 = FUN_036cee6c(lVar40,0,0);
        if ((uVar21 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar22 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 != (long *)0x0) {
            (**(code **)(*plVar41 + 0x528))(plVar41,uVar22,*(undefined8 *)(*plVar41 + 0x530));
            lVar40 = unaff_x19[0x5d];
            if (lVar40 != 0) {
              *(int *)(lVar40 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar40,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar41 = (long *)unaff_x19[0x5d];
              if (plVar41 != (long *)0x0) {
                (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                goto UnityEngine_AnimationClip__get_hasMotionCurves;
              }
            }
          }
          goto LAB_035574b8;
        }
        goto UnityEngine_AnimationClip__get_hasMotionCurves;
      }
    }
    if ((((unaff_w29 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(unaff_w29 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (unaff_w29 - 10 < 2)
        ) || (unaff_w29 == 0xa0)) {
LAB_03552b54:
      if (((unaff_w29 != 0xad) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0x2060)) {
        lVar40 = *in_stack_00000170;
        if ((lVar40 == 0) || (lVar29 = *(long *)(lVar40 + 0x50), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar40 + 0x20) = *(int *)(lVar40 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b97f8(unaff_w29,0);
      unaff_w29 = in_stack_000017dc;
      if ((uVar21 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x50), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar40 + 0x20) = *(int *)(lVar40 + 0x20) + 1;
    }
LAB_035530c4:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar44 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar40 = unaff_x19[0xca];
      fVar63 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar63 = 1.0;
      }
      if ((lVar40 == 0) || (*(long *)(lVar40 + 0x20) == 0)) goto LAB_035574b8;
      fVar49 = *(float *)((long)unaff_x19 + 0x404);
      fVar45 = *(float *)(lVar40 + 0x2c);
      fVar46 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
      fVar59 = *_fStack00000000000000a8;
      fVar46 = fVar49 * (fVar51 / (float)iVar13) * fVar44 * fVar63 * fVar45 * fVar46;
      fVar51 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0)) goto LAB_035574b8;
        uVar18 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar40 + 0x18) <= uVar18) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar63 = *(float *)(lVar40 + (long)(int)uVar18 * (long)iVar17 + 0x60);
        iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar49 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar40 = unaff_x19[0xca];
        fVar44 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar44 = 1.0;
        }
        if ((lVar40 == 0) || (*(long *)(lVar40 + 0x20) == 0)) goto LAB_035574b8;
        fVar45 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = *(float *)(lVar40 + 0x2c);
        fVar46 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000170 + 0x50), lVar40 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar59 = *(float *)(lVar40 + 0x60);
        fVar51 = *(float *)(lVar40 + 100);
        fVar46 = fVar45 * (fVar63 / (float)iVar13) * fVar49 * fVar44 * fVar47 * fVar46;
      }
      fVar49 = *(float *)(unaff_x19 + 0x9b);
      fVar63 = 0.0;
      fVar44 = 0.0;
      if ((0.0 < fVar49) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar47 = *(float *)(unaff_x19 + 0x97);
      fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar45 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar40 = *(long *)(unaff_x19[0xca] + 0x20), lVar40 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar40,0);
        fVar63 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar60 = *(float *)(unaff_x19 + 0x6c);
      fVar51 = (fStack000000000000009c - fVar59) - fVar51;
      bVar11 = true;
      if ((fVar60 <= fVar51) && (bVar11 = false, !NAN(fVar60))) {
        bVar11 = fVar60 == -1.0;
      }
      if (!bVar11) {
        fVar51 = fVar60;
      }
      fVar59 = 1.0;
      if ((uVar14 & 0x18) != 0) {
        fVar59 = DAT_00d38acc;
      }
      if (((fVar47 - (fVar48 - fVar49)) + fVar44 < fStack00000000000000c4) &&
         (ABS(fVar45) + fVar46 * fVar63 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar59 * fVar51)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar40 = *(long *)(*(long *)puVar9 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar40 + 0x788),0x378);
        FUN_0209b210(lVar40 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar40 = *in_stack_00000170;
    if (lVar40 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar40 + 0x38);
    unaff_d13 = _fStack0000000000000150 & 0xffffffff;
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar14 = *(uint *)(unaff_x19 + 0x95);
    lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar29 + 100) = uVar14;
    *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar40 = *(long *)(lVar40 + 0x50);
      if (lVar40 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
      *(int *)(lVar40 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar40 = *(long *)(lVar40 + 0x50);
      if (lVar40 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
      if (*(int *)(lVar40 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar51 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar44 = *(float *)(unaff_x19 + 200);
      fVar63 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar51 = fStack0000000000000150 * fVar51 * fVar63;
      fVar63 = fVar51 * (float)(int)(fVar44 / fVar51);
      param_3 = (ulong)(uint)fVar63;
      if (fVar63 <= fVar44) {
        fVar63 = fVar44 + fVar51;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar63;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar44 = 1.0;
        }
        else {
          fVar44 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar63 = *(float *)(unaff_x19 + 200);
        fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar51 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar63 = fVar63 + fVar51 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fStack0000000000000150 *
                                     (fStack000000000000012c + fVar44 * fVar46) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar63;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar63 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fStack0000000000000150 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      param_3 = (ulong)(uint)fVar63;
      fVar63 = *(float *)(unaff_x19 + 200) - fVar63;
      *(float *)(unaff_x19 + 200) = fVar63;
      if ((in_stack_000017dc == 0x200b) || (unaff_w25 != 0)) {
        fVar51 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        param_3 = (ulong)(uint)fVar51;
        fVar63 = fVar63 - fVar51;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar51 = *(float *)(unaff_x19 + 200);
      fVar63 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                        fStack00000000000000d4 *
                        (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar63;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (param_3 = (ulong)(uint)fVar51, unaff_w25 != 0)) {
        fVar51 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        param_3 = (ulong)(uint)fVar51;
        fVar63 = fVar63 + fVar51;
        goto LAB_03553678;
      }
    }
    lVar40 = *in_stack_00000170;
    if ((lVar40 == 0) || (lVar29 = *(long *)(lVar40 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    uVar14 = *unaff_x20;
    uVar18 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar18 <= uVar14) goto LAB_035575f4;
    *(float *)(lVar29 + (long)(int)uVar14 * unaff_x24 + 0x144) = fVar63;
    uVar55 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar14 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        param_3 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar14 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar51 = *(float *)(unaff_x19 + 0x99);
        fVar63 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar51 = fVar51 - fVar63;
        if (((fStack000000000000005c < ABS(fVar51)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar51);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar51;
          *(float *)(unaff_x19 + 0x9b) = fVar51 + *(float *)(unaff_x19 + 0x9b);
          puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar40 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar40 = *(long *)puVar9;
          }
          lVar29 = *(long *)(lVar40 + 0xb8);
          if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar40 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar29 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar29 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar40 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar40 + 0xb8) + 0x818,0);
            lVar40 = *(long *)(*(long *)puVar9 + 0xb8);
            *(float *)(lVar40 + 0x7bc) = fVar51 + *(float *)(lVar40 + 0x7bc);
            *(float *)(lVar40 + 0x800) = fVar51 + *(float *)(lVar40 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar40 + 0x788),0x378);
            FUN_0209b210(lVar40 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar44 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar63 = *(float *)((long)unaff_x19 + 0x4cc) - fVar44;
      fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar63 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar51 = fVar63;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar51;
      fVar46 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar51;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar40 = *in_stack_00000170;
      if ((lVar40 == 0) || (lVar29 = *(long *)(lVar40 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      uVar14 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar42 = unaff_x19[0x93];
      lVar20 = lVar29 + (long)(int)uVar14 * 0x5c;
      *(int *)(lVar20 + 0x34) = (int)lVar42;
      uVar18 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar42 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar18 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar18;
      *(uint *)(lVar20 + 0x38) = uVar18;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar13 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar18 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar13 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar13;
      *(int *)(lVar20 + 0x40) = iVar13;
      *(int *)(lVar20 + 0x24) = (*(int *)(lVar20 + 0x3c) - *(int *)(lVar20 + 0x34)) + 1;
      *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar18) goto LAB_035575f4;
      uVar62 = *(undefined4 *)(lVar40 + (long)(int)uVar18 * (long)iVar17 + 0x11c);
      lVar29 = lVar29 + (long)(int)uVar14 * 0x5c;
      *(float *)(lVar29 + 0x70) = fVar63;
      *(undefined4 *)(lVar29 + 0x6c) = uVar62;
      lVar40 = *in_stack_00000170;
      if ((lVar40 == 0) || (lVar29 = *(long *)(lVar40 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar46 = fVar46 - fVar44;
      param_3 = (ulong)(uint)fVar46;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) =
           *(undefined4 *)
            (lVar40 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar29 + 0x78) = fVar46;
      lVar40 = *in_stack_00000170;
      if ((lVar40 == 0) || (lVar42 = *(long *)(lVar40 + 0x50), lVar42 == 0)) goto LAB_035574b8;
      lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar29 = lVar42 + lVar20 * 0x5c;
      *(float *)(lVar29 + 0x44) =
           *(float *)(lVar29 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
      *(float *)(lVar29 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar29 + 0x24) == 1) {
        *(int *)(lVar42 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar29 = *(long *)(lVar40 + 0x38), lVar29 == 0)) goto LAB_035574b8;
      lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar18 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar18 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar29 + lVar39 * unaff_x24 + 0x194) == '\0') &&
         (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar18 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar42 = lVar42 + lVar20 * 0x5c;
      fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar51 = -fVar44;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar51 = fVar44;
      }
      *(float *)(lVar42 + 0x58) = *(float *)(lVar29 + lVar39 * unaff_x24 + 0x144) + fVar51;
      *(float *)(lVar42 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar42 + 0x54) = fVar63;
      *(float *)(lVar42 + 0x48) = in_stack_00000060 + (fVar46 - fVar63);
      *(float *)(lVar42 + 0x4c) = fVar46;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar40 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar13 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar13;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar40 == 0) || (*(long *)(lVar40 + 0x50) == 0)) goto LAB_035574b8;
          if (*(int *)(*(long *)(lVar40 + 0x50) + 0x18) <= iVar13) {
            FUN_0358ca18();
            lVar40 = unaff_x19[0x6d];
            if (lVar40 == 0) goto LAB_035574b8;
          }
          lVar40 = *(long *)(lVar40 + 0x38);
          if (lVar40 == 0) goto LAB_035574b8;
          if (*unaff_x20 < *(uint *)(lVar40 + 0x18)) {
            fVar51 = *(float *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
              if ((in_stack_000017dc == 0x2029) || (fVar63 = 0.0, in_stack_000017dc == 10)) {
                fVar63 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar25 = 0;
              fVar63 = fVar51 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       fStack0000000000000058 *
                       (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar63) +
                       *(float *)(unaff_x19 + 0x9b);
            }
            else {
              if ((in_stack_000017dc == 0x2029) || (fVar63 = 0.0, in_stack_000017dc == 10)) {
                fVar63 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar25 = 1;
              fVar63 = *(float *)(unaff_x19 + 0x9b) +
                       *(float *)(unaff_x19 + 0x58) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar63);
            }
            *(float *)(unaff_x19 + 0x9b) = fVar63;
            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar40 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar40 = *(long *)puVar9;
            }
            uVar22 = *(undefined8 *)(*(long *)(lVar40 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x9a) = fVar51;
            param_3 = NEON_rev64(uVar22,4);
            unaff_x19[0x99] = param_3;
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
        if (in_stack_000017dc == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
          in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar55 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar14 = *unaff_x20;
    if (uVar18 <= uVar14) goto LAB_035575f4;
    if (*(char *)(lVar29 + (long)(int)uVar14 * unaff_x24 + 0x194) != '\0') {
      lVar29 = lVar29 + (long)(int)uVar14 * unaff_x24;
      uVar53 = *(ulong *)(lVar29 + 0x11c);
      uVar21 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar21 ^ (uVar21 ^ uVar53) &
                    ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar53 >> 0x20)),
                              -(uint)((float)uVar21 < (float)uVar53));
      uVar21 = *(ulong *)(in_stack_00000080 + 0x238);
      param_3 = *(ulong *)(lVar29 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar21 ^ (uVar21 ^ param_3) &
                    ~CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar21 >> 0x20)),
                              -(uint)((float)param_3 < (float)uVar21));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar55 || ((1 << (ulong)(uVar55 & 0x1f) & 0x2c00U) == 0)))) {
      lVar29 = *(long *)(lVar40 + 0x58);
      if (lVar29 == 0) goto LAB_035574b8;
      iVar13 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar29 + 0x18) < iVar13) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar40 + 0x58),iVar13,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar40 = *in_stack_00000170;
        if (lVar40 == 0) goto LAB_035574b8;
      }
      lVar29 = *(long *)(lVar40 + 0x58);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar18 = *(uint *)(unaff_x19 + 0x96);
      lVar42 = (long)(int)uVar18;
      uVar14 = *(uint *)(lVar29 + 0x18);
      if (uVar14 <= uVar18) goto LAB_035575f4;
      lVar20 = lVar29 + lVar42 * 0x14;
      fVar63 = *(float *)(lVar20 + 0x30);
      param_3 = (ulong)(uint)fVar63;
      *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar63 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar51 = fVar63;
      }
      *(float *)(lVar20 + 0x30) = fVar51;
      uVar55 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar55 == 0 && uVar18 == 0) {
        *(uint *)(lVar29 + (ulong)uVar18 * 0x14 + 0x20) = uVar55;
      }
      else {
        uVar2 = uVar55 - 1;
        if (0 < (int)uVar55) {
          lVar40 = *(long *)(lVar40 + 0x38);
          if (lVar40 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar40 + 0x18) <= uVar2) goto LAB_035575f4;
          if (uVar18 != *(uint *)(lVar40 + (ulong)uVar2 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar18 - 1 < uVar14) {
              *(uint *)(lVar29 + 0x20 + (long)(int)(uVar18 - 1) * 0x14 + 4) = uVar2;
              *(uint *)(lVar29 + 0x20 + lVar42 * 0x14) = uVar55;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar55 == in_stack_00000088._4_4_) {
          *(float *)(lVar29 + lVar42 * 0x14 + 0x24) = in_stack_00000088._4_4_;
        }
      }
    }
LAB_03553d10:
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
    if ((unaff_w25 == 0) &&
       (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
        if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
             (0x1d < in_stack_000017dc - 0xa961)) || (uVar21 = FUN_03597a54(0), (uVar21 & 1) != 0))
           && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
        goto LAB_03553f78;
        lVar40 = FUN_035978e8(0);
        if ((lVar40 == 0) || (*(long *)(lVar40 + 0x10) == 0)) goto LAB_035574b8;
        uVar14 = FUN_0219c130(*(long *)(lVar40 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar14 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if ((uint)unaff_x26 != unaff_w22 || ((bStack0000000000000070 ^ 0xff) & 1) != 0)
          goto LAB_035542ac;
          if (unaff_w25 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar40 = FUN_035978e8(0);
        if (((lVar40 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar40 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar29 + (long)(int)(*unaff_x20 + 1) * (long)iVar17 + 0x20);
        uVar21 = FUN_0219c130(*(long *)(lVar40 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar14 & 1) != 0) goto LAB_035541dc;
        if ((uVar21 & 1) == 0) goto LAB_03554270;
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
        if ((bStack0000000000000074 & 1) == 0 && in_stack_000017dc == 0xad)
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
      if (((in_stack_000017dc - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_000017dc == 0xa0 || (in_stack_000017dc == 0x2060)))) goto LAB_03553ef0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      bStack0000000000000070 = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_035542ac:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  }
LAB_03550bd0:
  do {
    in_stack_000000f0 = (float)unaff_d13;
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar40 = unaff_x19[0x8f];
    if (lVar40 == 0) goto LAB_035574b8;
    if ((int)*(uint *)(lVar40 + 0x18) <= (int)in_stack_000017a8) {
LAB_0355459c:
      fVar51 = (float)param_3;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar51 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar63 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar51 < fVar63) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar44 = (*(float *)((long)unaff_x19 + 0x23c) - fVar51) * 0.5;
          if (fVar44 <= DAT_00d38b84) {
            fVar44 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar51;
          fVar44 = (fVar51 + fVar44) * 20.0 + 0.5;
          fVar51 = DAT_00d38e60;
          if (fVar44 != INFINITY) {
            fVar51 = (float)(int)fVar44 / 20.0;
          }
          if (fVar63 <= fVar51) {
            fVar51 = fVar63;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar9 = PTR_DAT_03cbdf88;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar22 = FUN_0276793c(_fStack0000000000000038,0);
        uVar19 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar22 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar22,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar19,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar22,0);
      }
      puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017dc == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar40 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar40 = *(long *)puVar10;
      }
      plVar41 = (long *)OVRPlugin_Media_TypeInfo;
      lVar40 = **(long **)(lVar40 + 0xb8);
      if (lVar40 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar17 = *(int *)(lVar40 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x60), lVar40 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar40 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar13 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      in_stack_000000e8 = *(ulong *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar40 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)in_stack_000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar13 < 0x401) {
        if (iVar13 == 0x100) {
          if (lVar40 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar40 + 0x18) < 2) goto LAB_035575f4;
          uVar22 = *(undefined8 *)(lVar40 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000170 + 0x58), lVar29 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar51 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar51 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar40 + 0x2c);
          fVar51 = (0.0 - fVar51) - fStack0000000000000020;
        }
        else if (iVar13 == 0x200) {
          if (lVar40 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar40 + 0x18) == 1) || (*(int *)(lVar40 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
          uVar22 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar40 + 0x24) +
                            (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar40 = *(long *)(*in_stack_00000170 + 0x58), lVar40 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar40 = lVar40 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar51 = ((fStack0000000000000020 + *(float *)(lVar40 + 0x28) +
                      *(float *)(lVar40 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar51 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar13 != 0x400) goto LAB_03554c4c;
          if (lVar40 == 0) goto LAB_035574b8;
          if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
          uVar22 = *(undefined8 *)(lVar40 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000170 + 0x58), lVar29 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar40 + 0x20);
          fVar51 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar22 >> 0x20) + 0.0,(float)uVar22 + fVar51);
      }
      else if (iVar13 == 0x800) {
        if (lVar40 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar40 + 0x18) == 1) || (*(int *)(lVar40 + 0x18) == 0)) goto LAB_035575f4;
        fVar51 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar40 + 0x24) +
                              (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar51;
      }
      else {
        if (iVar13 == 0x1000) {
          if (lVar40 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar40 + 0x18) != 1) && (*(int *)(lVar40 + 0x18) != 0)) {
            uVar22 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar40 + 0x24) +
                              (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
            fVar51 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar13 == 0x2000) {
          if (lVar40 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar40 + 0x18) == 1) || (*(int *)(lVar40 + 0x18) == 0)) goto LAB_035575f4;
          fVar51 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar40 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar40 + 0x24) +
                                (float)*(undefined8 *)(lVar40 + 0x30)) * 0.5 + fVar51);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar40 + 0x20) + *(float *)(lVar40 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar22 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar9);
      }
      uVar21 = FUN_036d35a8(uVar22,0,0);
      lVar40 = FUN_0357f060();
      if (lVar40 == 0) goto LAB_035574b8;
      FUN_036df824(lVar40,0);
      *(float *)(unaff_x19 + 0xe2) = fVar51;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar63 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar62 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar9 = OVRPlugin_Mesh_TypeInfo;
      lVar40 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar40 = *(long *)puVar9;
      }
      puVar27 = *(undefined4 **)(lVar40 + 0xb8);
      uVar53 = (ulong)(uint)puVar27[1];
      uVar54 = (ulong)(uint)puVar27[2];
      uVar56 = (ulong)(uint)puVar27[3];
      FUN_035683a4(*puVar27,uVar53,uVar54,uVar56,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar40 = *in_stack_00000170;
      if (lVar40 == 0) goto LAB_035574b8;
      uVar14 = *unaff_x20;
      if ((int)uVar14 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar17 = 0;
        goto LAB_03556f00;
      }
      lVar40 = *(long *)(lVar40 + 0x38);
      fVar51 = ABS(fVar51);
      fVar44 = 1.0;
      if ((uVar21 & 1) == 0) {
        fVar44 = fVar51;
      }
      if (lVar40 == 0) goto LAB_035574b8;
      bVar12 = false;
      bVar8 = false;
      _fStack0000000000000128 = 0;
      bVar11 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar29 = 0x2e0;
      fVar49 = 0.0;
      fVar46 = 0.0;
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
      uVar18 = 1;
      uVar55 = 0;
      goto LAB_03554e78;
    }
    if (*(uint *)(lVar40 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    unaff_w29 = *(uint *)(lVar40 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
    if (unaff_w29 == 0) goto LAB_0355459c;
    if (5 < in_stack_00000168._4_4_) {
      uVar22 = FUN_0276793c(&stack0x000017dc,0);
      uVar19 = FUN_0276793c(&stack0x000017a8,0);
      uVar22 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar22,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar19,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar22,0);
      in_stack_000017c8 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (unaff_w29 != 0x3c)) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar40 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar40 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar40 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar21 = FUN_03586568();
      if (((uVar21 & 1) != 0) &&
         (in_stack_000017a8 = in_stack_0000178c, in_stack_000017dc = unaff_w29,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
    goto LAB_035574b8;
    uVar14 = *unaff_x20;
    if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar42 = (long)(int)uVar14;
    cVar26 = *(char *)(lVar40 + lVar42 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar29 = unaff_x19[0x24];
    if ((uint)in_stack_000017c8 == uVar14) {
      unaff_w29 = (uint)((ulong)in_stack_000017c8 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (unaff_w29 == 0x2026) {
        *(long *)(lVar40 + lVar42 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar40 + 0x2c) = 0;
        *(long *)(lVar40 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0)) goto LAB_035574b8;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar40 + (long)(int)uVar14 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_000017c8 = CONCAT44(3,uVar14 + 1);
      }
      else if (unaff_w29 == 3) {
        if ((*unaff_x21 == 0) || (lVar20 = FUN_03568ac0(*unaff_x21,0), lVar20 == 0))
        goto LAB_035574b8;
        FUN_0219b634(lVar20,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
        *(ulong *)(lVar40 + lVar42 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008a4,in_stack_000008a0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar14 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x324)) && (unaff_w29 != 3)) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar40 = lVar40 + (long)(int)uVar14 * (long)iVar17;
      *(undefined1 *)(lVar40 + 0x194) = 0;
      *(undefined2 *)(lVar40 + 0x20) = 0x200b;
      *(undefined4 *)(lVar40 + 100) = 0;
      *unaff_x20 = uVar14 + 1;
      in_stack_000017dc = unaff_w29;
      goto LAB_03550bd0;
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar13 != 0) {
      fStack0000000000000158 = 1.0;
      if (iVar13 == 0) goto LAB_03550fec;
LAB_03550c00:
      if (iVar13 != 1) {
        lVar40 = *in_stack_00000170;
        fVar48 = 0.0;
        fVar51 = fVar48;
        if (unaff_w29 != 3 && unaff_w29 != 0xad) {
          fVar51 = in_stack_000000f0;
        }
        if (lVar40 == 0) goto LAB_035574b8;
        fVar46 = 0.0;
        fVar49 = 0.0;
        goto LAB_035514cc;
      }
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar40 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar40 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar40,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar40 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      in_stack_000017dc = unaff_w29;
      if (lVar40 != 0) {
        if (unaff_w29 == 0x3c) {
          unaff_w29 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar42 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar42 = *(long *)puVar9;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar42 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar51 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar13 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar44 = (float)FUN_03776960(&stack0x00001720,0);
        fVar63 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar63 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar63 = (fVar51 / (float)iVar13) * fVar44 * fVar63;
        iVar13 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar51 = *(float *)(unaff_x19 + 0x3d);
        if (iVar13 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          fVar49 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar49 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar59 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar40 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar40 + 0x20),0);
          fVar45 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar40 + 0x20) == 0) goto LAB_035574b8;
          fVar60 = *(float *)(lVar40 + 0x2c);
          fVar47 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar50 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar57 = *(float *)((long)unaff_x19 + 0x404);
          fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar48 = fVar63 * fVar50 * fVar57 * fVar48;
          fVar49 = (fVar51 / (float)iVar13) * fVar44 * fVar49;
          in_stack_000000f0 = fVar49 * (fVar59 / fVar45) * fVar60 * fVar47;
          fVar49 = fVar49 / in_stack_000000f0;
          fVar46 = fVar49 * fVar46;
          fVar51 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          fVar49 = fVar49 * fVar51;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar13 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar40 + 0x20) == 0) goto LAB_035574b8;
          fVar59 = *(float *)(lVar40 + 0x2c);
          fVar49 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar49 = 1.0;
          }
          fVar45 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar60 = *(float *)((long)unaff_x19 + 0x404);
          fVar48 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fVar48 = fVar63 * fVar47 * fVar60 * fVar48;
          in_stack_000000f0 = (fVar51 / (float)iVar13) * fVar44 * fVar49 * fVar59 * fVar45;
          fVar49 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        *in_stack_000000e0 = lVar40;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar40);
        if ((*in_stack_00000170 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar40 + 0x2c) = 1;
        *(float *)(lVar40 + 0x160) = in_stack_000000f0;
        *(long *)(lVar40 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar40 = *in_stack_00000170;
        if ((lVar40 == 0) || (lVar42 = *(long *)(lVar40 + 0x38), lVar42 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fStack000000000000015c = 0.0;
        *(int *)(lVar42 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar29;
        goto LAB_035514b0;
      }
      goto LAB_03550bd0;
    }
    uVar14 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar14 >> 4 & 1) == 0) {
      if ((uVar14 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar14 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b812c(unaff_w29,0);
          if ((uVar21 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b8410(unaff_w29,0);
            unaff_w29 = uVar14 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b8070(unaff_w29,0);
        fStack0000000000000158 = 1.0;
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b8594(unaff_w29,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b812c(unaff_w29,0);
      fStack0000000000000158 = 1.0;
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8410(unaff_w29,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        unaff_w29 = uVar14 & 0xffff;
      }
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar13 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    in_stack_000017dc = unaff_w29;
  } while (*in_stack_000000e0 == 0);
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  uVar18 = *unaff_x20;
  uVar14 = *(uint *)(lVar40 + 0x18);
  if (uVar14 <= uVar18) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar40 + (long)(int)uVar18 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = *(float *)(unaff_x19 + 0x3d);
    iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar40 = unaff_x19[0x20];
  }
  else {
    lVar29 = unaff_x19[0x8f];
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar29 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar18 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar14 <= uVar18 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = *(float *)(lVar40 + (long)(int)(uVar18 - 1) * (long)iVar17 + 0x60);
    iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar40 = *unaff_x21;
  }
  if (lVar40 == 0) goto LAB_035574b8;
  fVar44 = (float)FUN_03776960(lVar40 + 0x50,0);
  fVar63 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar63 = 1.0;
  }
  fVar49 = 0.0;
  fVar46 = 0.0;
  if ((unaff_w23 & unaff_w29 == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar49 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar40 = unaff_x19[0xc9];
  if ((lVar40 == 0) || (*(long *)(lVar40 + 0x20) == 0)) goto LAB_035574b8;
  fVar59 = *(float *)((long)unaff_x19 + 0x404);
  fVar45 = *(float *)(lVar40 + 0x2c);
  in_stack_000000f0 = (float)FUN_03776ea8(*(long *)(lVar40 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar47 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar60 = *(float *)((long)unaff_x19 + 0x404);
  fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar40 = unaff_x19[0x6d];
  if ((lVar40 == 0) || (lVar29 = *(long *)(lVar40 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar29 + 0x2c) = 0;
  fVar63 = ((fStack0000000000000158 * fVar51) / (float)iVar13) * fVar44 * fVar63;
  in_stack_000000f0 = fVar63 * fVar59 * fVar45 * in_stack_000000f0;
  *(float *)(lVar29 + 0x160) = in_stack_000000f0;
  uVar14 = *(uint *)(unaff_x19 + 0x24);
  fVar48 = fVar63 * fVar47 * fVar60 * fVar48;
  if (uVar14 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar29 = unaff_x19[0xe1];
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar29 = *(long *)(lVar29 + (long)(int)uVar14 * 8 + 0x20);
    if (lVar29 == 0) goto LAB_035574b8;
    fStack000000000000015c = *(float *)(lVar29 + 0x10c);
  }
LAB_035514b0:
  fVar51 = 0.0;
  if (unaff_w29 != 3 && unaff_w29 != 0xad) {
    fVar51 = in_stack_000000f0;
  }
LAB_035514cc:
  lVar40 = *(long *)(lVar40 + 0x38);
  if (lVar40 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar40 + 0x20) = (short)unaff_w29;
  *(int *)(lVar40 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar40 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar40 = *(long *)(unaff_x19[0x6d] + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)uVar14 * unaff_x24;
  *(undefined4 *)(lVar40 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar40 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar40 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar40 = *(long *)(unaff_x19[0xc9] + 0x20), lVar40 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar40,0);
  puVar9 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((int)unaff_w29 < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b63d8(unaff_w29,0);
    unaff_w25 = uVar14 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar46;
    fVar44 = 0.0;
    fVar63 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar18 = *unaff_x20;
    uVar14 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar18 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar18 + 1) goto LAB_035575f4;
      lVar40 = *(long *)(lVar40 + (long)(int)(uVar18 + 1) * (long)iVar17 + 0x30);
      if ((((lVar40 == 0) || (*unaff_x21 == 0)) ||
          (lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar14 | *(int *)(lVar40 + 0x28) << 0x10;
      uVar21 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar62 = 0;
      if ((uVar21 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar46;
        fVar44 = 0.0;
        fVar63 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar62 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar63 = *(float *)(in_stack_000016f8 + 0x14);
        fVar44 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar46);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar18 = *unaff_x20;
    }
    else {
      uVar62 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar46;
      fVar44 = 0.0;
      fVar63 = 0.0;
    }
    if (0 < (int)uVar18) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar18 - 1) goto LAB_035575f4;
      lVar40 = *(long *)(lVar40 + (ulong)(uVar18 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar40 == 0) || (*unaff_x21 == 0)) ||
         ((lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar40 + 0x28) | uVar14 << 0x10;
      uVar21 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar21 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar52 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar63 = (float)FUN_03571cb4(fVar63,fVar44,_fStack0000000000000128 >> 0x20,uVar62,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar52,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar59 = *(float *)(unaff_x19 + 200);
    fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar59 = fVar59 - fVar51 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar59;
    if ((unaff_w29 == 0x200b) || (unaff_w25 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar59 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar46 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar46 != 0.0) {
    fVar59 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar45 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar46 * 0.5 - fVar51 * (fVar59 * 0.5 + fVar45));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar40 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_036cee6c(lVar40,0,0);
    fVar59 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar40 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar40 == 0) goto LAB_035574b8;
      uVar21 = FUN_03699d3c(lVar40,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar59 = 0.0;
      if ((uVar21 & 1) != 0) {
        lVar40 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar40 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_0369e060(lVar40,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar45 = *(float *)(*unaff_x21 + 0x1b0);
        fVar59 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar59 = fVar59 * fVar46 * fVar45 * 0.25;
        if (fVar46 < fStack000000000000015c + fVar59) {
          fStack000000000000015c = fVar46 - fVar59;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar40 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_036cee6c(lVar40,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar40 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar40 == 0) goto LAB_035574b8;
      uVar21 = FUN_03699d3c(lVar40,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar21 & 1) != 0) {
        lVar40 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar40 == 0) goto LAB_035574b8;
        uVar21 = FUN_03699d3c(lVar40,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar21 & 1) != 0) {
          lVar40 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar40 != 0) {
            fVar46 = (float)FUN_0369e060(lVar40,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar45 = *(float *)(*unaff_x21 + 0x1a8);
              fVar59 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc)
                                           ,0);
              fVar59 = fVar59 * fVar46 * fVar45 * 0.25;
              if (fVar46 < fStack000000000000015c + fVar59) {
                fStack000000000000015c = fVar46 - fVar59;
              }
              goto FUN_03551b84;
            }
          }
          goto LAB_035574b8;
        }
      }
    }
    fVar59 = 0.0;
  }
FUN_03551b84:
  fVar46 = *(float *)(unaff_x19 + 200);
  fVar45 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar46 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar63 + ((fVar45 - fStack000000000000015c) - fVar59));
  fVar63 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar47 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar48 + fVar51 * (fVar44 + fStack000000000000015c + fVar63)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar63 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar63 = fVar47 - fVar51 * (fStack000000000000015c + fStack000000000000015c + fVar63);
  fVar44 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar45 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar51 * (fVar59 + fVar59 +
                             fStack000000000000015c + fStack000000000000015c + fVar44);
  in_stack_000000e8 = (ulong)(uint)fVar59;
  fStack0000000000000104 = fVar46;
  fVar44 = fVar45;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar50 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar44 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar57 = fVar50 * fVar51 * (fVar59 + fStack000000000000015c + fVar44);
    fVar44 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar60 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar47 = fVar47 + 0.0;
    fVar63 = fVar63 + 0.0;
    fVar50 = fVar50 * fVar51 * (((fVar44 - fVar60) - fStack000000000000015c) - fVar59);
    fVar59 = fVar46 + fVar57;
    fVar44 = fVar45 + fVar50;
    fVar60 = (fVar57 - fVar50) * 0.5;
    fVar46 = (fVar46 + fVar50) - fVar60;
    fVar45 = (fVar45 + fVar57) - fVar60;
    fStack0000000000000104 = fVar59 - fVar60;
    fVar44 = fVar44 - fVar60;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar51;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar50 = 0.0;
    fVar57 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar60 = fVar63;
    fVar59 = fVar47;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar58 = (fVar45 + fVar46) * 0.5;
    fVar61 = (fVar63 + fVar47) * 0.5;
    fVar47 = fVar47 - fVar61;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar47;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar58,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar58 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar60 = fVar63 - fVar61;
    fStack0000000000000114 = 0.0;
    fVar63 = fVar60;
    fVar46 = (float)FUN_036bdd2c(fVar46 - fVar58,_fStack0000000000000078,0);
    fVar46 = fVar58 + fVar46;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar63 = fVar61 + fVar63;
    fVar57 = 0.0;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar58,_fStack0000000000000078,0);
    fVar45 = fVar58 + fVar45;
    fVar47 = fVar61 + fVar47;
    fVar57 = fVar57 + 0.0;
    fVar50 = 0.0;
    fVar44 = (float)FUN_036bdd2c(fVar44 - fVar58,_fStack0000000000000078,0);
    fVar44 = fVar58 + fVar44;
    fVar50 = fVar50 + 0.0;
    fVar60 = fVar61 + fVar60;
    fVar59 = fVar61 + fVar59;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar40 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar51;
  if (lVar40 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x11c) = fVar46;
  *(float *)(lVar40 + 0x120) = fVar63;
  *(float *)(lVar40 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x114) = fVar59;
  *(float *)(lVar40 + 0x110) = fStack0000000000000104;
  *(float *)(lVar40 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x128) = fVar45;
  *(float *)(lVar40 + 300) = fVar47;
  *(float *)(lVar40 + 0x130) = fVar57;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar40 + 0x134) = fVar44;
  *(float *)(lVar40 + 0x138) = fVar60;
  *(float *)(lVar40 + 0x13c) = fVar50;
  if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x38), lVar40 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  unaff_x26 = (long)(int)uVar14;
  if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar29 = lVar40 + unaff_x26 * unaff_x24;
  *(int *)(lVar29 + 0x140) = (int)unaff_x19[200];
  fVar47 = *(float *)(unaff_x19 + 0x9b);
  param_3 = (ulong)(uint)fVar47;
  fVar44 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar29 + 0x15c) = (fVar45 - fVar46) / (fVar59 - fVar63);
  *(float *)(lVar29 + 0x14c) = (fVar48 - fVar47) + fVar44;
  fVar63 = fStack0000000000000128 * fVar51;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar63 = fVar63 / fStack0000000000000158;
    fVar49 = (fVar49 * fVar51) / fStack0000000000000158;
  }
  else {
    fVar49 = fVar49 * fVar51;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w25 == 0) || (uVar14 == unaff_w22)) {
    fVar49 = fVar44 + fVar49;
    fVar63 = fVar44 + fVar63;
    fVar59 = fVar49;
    fVar46 = fVar63;
    if (fVar44 != 0.0) {
      fVar46 = (fVar63 - fVar44) / *(float *)((long)unaff_x19 + 0x404);
      fVar59 = (fVar49 - fVar44) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar46 <= fVar63) {
        fVar46 = fVar63;
      }
      if (fVar49 <= fVar59) {
        fVar59 = fVar49;
      }
    }
    lVar40 = lVar40 + unaff_x26 * unaff_x24;
    fVar44 = fVar46;
    if (fVar46 <= *(float *)(unaff_x19 + 0x99)) {
      fVar44 = *(float *)(unaff_x19 + 0x99);
    }
    fVar45 = fVar59;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar59) {
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
    *(float *)(unaff_x19 + 0x99) = fVar44;
    *(float *)(lVar40 + 0x154) = fVar46;
    *(float *)(lVar40 + 0x158) = fVar59;
    *(float *)(lVar40 + 0x148) = fVar63 - fVar47;
    *(float *)(unaff_x19 + 0x98) = fVar63 - fVar47;
    *(float *)(lVar40 + 0x150) = fVar49 - fVar47;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar49 - fVar47;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar44;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar44 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar46 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar51 * fVar46) / fStack0000000000000158;
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar44 <= fStack0000000000000158) {
        fVar44 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar44;
    }
    if ((float)param_3 == 0.0) {
      fVar51 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar63) {
        fVar51 = fVar63;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar51;
    }
  }
  else {
    fVar51 = *(float *)(unaff_x19 + 0x99);
    lVar40 = lVar40 + unaff_x26 * unaff_x24;
    *(float *)(lVar40 + 0x154) = fVar51;
    fVar63 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar51 = fVar51 - fVar47;
    *(float *)(lVar40 + 0x148) = fVar51;
    *(float *)(lVar40 + 0x158) = fVar63;
    *(float *)(unaff_x19 + 0x98) = fVar51;
    fVar63 = fVar63 - fVar47;
    *(float *)(lVar40 + 0x150) = fVar63;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar63;
  }
  param_1 = *in_stack_00000170;
  if ((param_1 == 0) || (lVar40 = *(long *)(param_1 + 0x38), lVar40 == 0)) goto LAB_035574b8;
  unaff_w27 = *unaff_x20;
  if (*(uint *)(lVar40 + 0x18) <= unaff_w27) goto LAB_035575f4;
  in_x9 = lVar40 + (long)(int)unaff_w27 * unaff_x24;
  *(undefined1 *)(in_x9 + 0x194) = 0;
  in_stack_000017dc = unaff_w29;
  goto code_r0x03552050;
LAB_03554e78:
  uVar14 = uVar18 - 1;
  if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x50), lVar42 == 0))
  goto LAB_035574b8;
  lVar39 = (long)(int)uVar14;
  lVar20 = lVar40 + lVar39 * 0x178;
  uVar2 = *(uint *)(lVar20 + 100);
  if (*(uint *)(lVar42 + 0x18) <= uVar2) goto LAB_035575f4;
  lVar37 = (long)(int)uVar2;
  lVar42 = lVar42 + lVar37 * 0x5c;
  lVar33 = *(long *)(lVar20 + 0x38);
  uVar4 = *(ushort *)(lVar20 + 0x20);
  uVar6 = *(uint *)(lVar42 + 0x3c);
  uVar43 = *(uint *)(lVar42 + 0x68);
  iVar3 = *(int *)(lVar42 + 0x20);
  iVar15 = *(int *)(lVar42 + 0x28);
  iVar16 = *(int *)(lVar42 + 0x2c);
  uVar7 = *(uint *)(lVar42 + 0x40);
  lVar20 = (long)(int)uVar7;
  fVar47 = *(float *)(lVar42 + 0x4c);
  fVar60 = *(float *)(lVar42 + 0x54);
  fVar59 = *(float *)(lVar42 + 0x58);
  fVar58 = *(float *)(lVar42 + 0x5c);
  fVar50 = *(float *)(lVar42 + 0x60);
  fVar57 = *(float *)(lVar42 + 0x6c);
  fVar61 = *(float *)(lVar42 + 0x70);
  fVar45 = *(float *)(lVar42 + 0x74);
  fVar48 = *(float *)(lVar42 + 0x78);
  uVar36 = (uint)uVar4;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar50 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar59;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar50 + fVar58 * 0.5) - fVar59 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar58 + fVar50) - fVar59;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar58 + fVar50;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar43 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar4 < 0xad) {
      if ((uVar4 != 3) && (uVar4 != 10)) goto LAB_03554fac;
    }
    else if ((uVar4 != 0xad) && ((uVar4 != 0x200b && (uVar4 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar40 + 0x18) <= uVar6) goto LAB_035575f4;
      uVar5 = *(undefined2 *)(lVar40 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b8cc4(uVar5,0);
      if ((uVar21 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar59 <= fVar58) && (!bVar1 && uVar43 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar50;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar50;
        }
        goto LAB_03555088;
      }
      if (((uVar18 == 1) || (uVar2 != uVar55)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar50;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar50;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar36,0);
        in_stack_000000e8 = 0;
      }
      else {
        cVar26 = (char)unaff_x19[0x1e];
        fVar50 = -fVar59;
        if (cVar26 != '\0') {
          fVar50 = fVar59;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar6) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar40 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar3 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar59 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar59 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar36 == 9) {
LAB_03556e74:
          fVar59 = 1.0 - fVar59;
        }
        else {
          if (uVar36 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_026b97f8(uVar36,0);
            cVar26 = (char)unaff_x19[0x1e];
            if ((uVar21 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar3 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar59 = ((fVar58 + fVar50) * fVar59) / (float)iVar16;
        if (cVar26 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar59;
          in_stack_000000e8 =
               CONCAT44((float)(in_stack_000000e8 >> 0x20) + 0.0,(float)in_stack_000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar59;
        }
      }
    }
  }
  else if (uVar43 == 0x20) {
    fVar59 = fVar57 + fVar45;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar40 + 0x18);
  if (uVar43 <= uVar14) goto LAB_035575f4;
  lVar42 = lVar40 + lVar39 * 0x178;
  fVar58 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar59 = SUB84(in_stack_000000b8,0) + (float)in_stack_000000e8;
  fVar50 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)(in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar42 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar40 + lVar39 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar49 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar28 = lVar40 + lVar39 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar49 = 1.0;
    break;
  case 1:
    fVar48 = *(float *)(lVar40 + lVar39 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar28 = lVar40 + lVar39 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar48) - *(float *)(in_stack_00000080 + 0x230);
      fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar28 = lVar40 + lVar39 * 0x178;
    fVar45 = fVar45 - fVar57;
    *(float *)(lVar28 + 0x84) = fVar49 + (fVar48 - fVar57) / fVar45;
    *(float *)(lVar28 + 0xac) = fVar49 + (*(float *)(lVar28 + 0x98) - fVar57) / fVar45;
    *(float *)(lVar28 + 0xd4) = fVar49 + (*(float *)(lVar28 + 0xc0) - fVar57) / fVar45;
    fVar49 = fVar49 + (*(float *)(lVar28 + 0xe8) - fVar57) / fVar45;
    break;
  case 2:
    lVar28 = lVar40 + lVar39 * 0x178;
    fVar48 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar28 + 0x84) = fVar49 + fVar45 / fVar48;
    *(float *)(lVar28 + 0xac) =
         fVar49 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar28 + 0xd4) =
         fVar49 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar49 = fVar49 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar28 = lVar40 + lVar39 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar40 + lVar39 * 0x178;
      fVar48 = fVar48 - fVar61;
      fVar45 = fVar49 + (*(float *)(lVar28 + 0x74) - fVar61) / fVar48;
      fVar48 = fVar49 + (*(float *)(lVar28 + 0x9c) - fVar61) / fVar48;
      *(float *)(lVar28 + 0x88) = fVar45;
      *(float *)(lVar28 + 0xb0) = fVar48;
      *(float *)(lVar28 + 0xd8) = fVar45;
      *(float *)(lVar28 + 0x100) = fVar48;
      break;
    case 2:
      lVar28 = lVar40 + lVar39 * 0x178;
      fVar45 = fVar49 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar28 + 0x88) = fVar45;
      fVar48 = *(float *)(unaff_x19 + 0x9c);
      fVar57 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar28 + 0xd8) = fVar45;
      fVar45 = fVar49 + (*(float *)(lVar28 + 0x9c) - fVar48) / (fVar57 - fVar48);
      *(float *)(lVar28 + 0xb0) = fVar45;
      *(float *)(lVar28 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar43 = (uint)*(undefined8 *)(lVar40 + 0x18);
    }
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar40 + lVar39 * 0x178;
    fVar45 = *(float *)(lVar28 + 0x15c);
    fVar48 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar45) * 0.5;
    fVar57 = fVar49 + *(float *)(lVar28 + 0x88) * fVar45 + fVar48;
    fVar49 = fVar49 + fVar48 + *(float *)(lVar28 + 0xb0) * fVar45;
    *(float *)(lVar28 + 0x84) = fVar57;
    *(float *)(lVar28 + 0xac) = fVar57;
    *(float *)(lVar28 + 0xd4) = fVar49;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar40 + lVar39 * 0x178 + 0xfc) = fVar49;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar40 + lVar39 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar14 < uVar43) {
      lVar28 = lVar40 + lVar39 * 0x178;
      fVar47 = fVar47 - fVar60;
      fVar49 = (*(float *)(lVar28 + 0x74) - fVar60) / fVar47;
      fVar47 = (*(float *)(lVar28 + 0x9c) - fVar60) / fVar47;
      *(float *)(lVar28 + 0x88) = fVar49;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar40 + lVar39 * 0x178;
    fVar49 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar28 + 0x88) = fVar49;
    fVar47 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar28 + 0xb0) = fVar47;
    *(float *)(lVar28 + 0xd8) = fVar47;
    *(float *)(lVar28 + 0x100) = fVar49;
    break;
  case 3:
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar28 = lVar40 + lVar39 * 0x178;
    fVar47 = *(float *)(lVar28 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar47) * 0.5;
    fVar49 = *(float *)(lVar28 + 0x84) / fVar47 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar28 + 0xd4) / fVar47;
    *(float *)(lVar28 + 0x88) = fVar49;
    *(float *)(lVar28 + 0xb0) = fVar45;
    *(float *)(lVar28 + 0x100) = fVar49;
    *(float *)(lVar28 + 0xd8) = fVar45;
  }
  if (uVar43 <= uVar14) goto LAB_035575f4;
  lVar28 = lVar40 + lVar39 * 0x178;
  fVar49 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar40 + lVar39 * 0x178 + 400) & 1) != 0)) {
    fVar49 = -fVar49;
  }
  fVar45 = fVar51;
  if (((iVar13 == 2) || (fVar45 = fVar44, iVar13 == 1)) || (fVar45 = fVar51 / fVar63, iVar13 == 0))
  {
    fVar49 = fVar45 * fVar49;
  }
  lVar28 = lVar40 + lVar39 * 0x178;
  fVar47 = *(float *)(lVar28 + 0x88);
  fVar48 = *(float *)(lVar28 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar48 != INFINITY) {
    fVar45 = (float)(int)fVar48;
  }
  fVar57 = *(float *)(lVar28 + 0xd4);
  fVar61 = *(float *)(lVar28 + 0xd8);
  fVar60 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar60 = (float)(int)fVar47;
  }
  uVar52 = FUN_03591d3c(fVar48 - fVar45,fVar47 - fVar60);
  *(undefined4 *)(lVar28 + 0x84) = uVar52;
  if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar61 = fVar61 - fVar60;
  *(float *)(lVar28 + 0x88) = fVar49;
  uVar52 = FUN_03591d3c(fVar48 - fVar45,fVar61);
  *(undefined4 *)(lVar40 + lVar39 * 0x178 + 0xac) = uVar52;
  if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar57 = fVar57 - fVar45;
  *(float *)(lVar40 + lVar39 * 0x178 + 0xb0) = fVar49;
  fVar45 = (float)FUN_03591d3c(fVar57,fVar61);
  *(float *)(lVar28 + 0xd4) = fVar45;
  if (*(uint *)(lVar40 + 0x18) <= uVar14) goto LAB_035575f4;
  *(float *)(lVar28 + 0xd8) = fVar49;
  uVar52 = FUN_03591d3c(fVar57,fVar47 - fVar60);
  *(undefined4 *)(lVar40 + lVar39 * 0x178 + 0xfc) = uVar52;
  uVar43 = (uint)*(undefined8 *)(lVar40 + 0x18);
  if (uVar43 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar40 + lVar39 * 0x178 + 0x100) = fVar49;
LAB_0355574c:
  if (((int)uVar14 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar43 <= uVar14) goto LAB_035575f4;
      lVar42 = lVar40 + lVar39 * 0x178;
      *(ulong *)(lVar42 + 0x70) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar42 + 0x70));
      *(float *)(lVar42 + 0x78) = fVar50 + *(float *)(lVar42 + 0x78);
      *(ulong *)(lVar42 + 0x98) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar42 + 0x98));
      *(float *)(lVar42 + 0xa0) = fVar50 + *(float *)(lVar42 + 0xa0);
      *(ulong *)(lVar42 + 0xc0) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar42 + 0xc0));
      *(float *)(lVar42 + 200) = fVar50 + *(float *)(lVar42 + 200);
      *(ulong *)(lVar42 + 0xe8) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar42 + 0xe8));
      *(float *)(lVar42 + 0xf0) = fVar50 + *(float *)(lVar42 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar14 < uVar43) {
        if (*(uint *)(lVar40 + lVar39 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar42 = lVar40 + lVar39 * 0x178;
          *(ulong *)(lVar42 + 0x70) =
               CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar42 + 0x70));
          *(float *)(lVar42 + 0x78) = fVar50 + *(float *)(lVar42 + 0x78);
          *(ulong *)(lVar42 + 0x98) =
               CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar42 + 0x98));
          *(float *)(lVar42 + 0xa0) = fVar50 + *(float *)(lVar42 + 0xa0);
          *(ulong *)(lVar42 + 0xc0) =
               CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar42 + 0xc0));
          *(float *)(lVar42 + 200) = fVar50 + *(float *)(lVar42 + 200);
          *(ulong *)(lVar42 + 0xe8) =
               CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar42 + 0xe8));
          *(float *)(lVar42 + 0xf0) = fVar50 + *(float *)(lVar42 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar43 <= uVar14) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar43 = *(uint *)(lVar40 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar28 = lVar40 + lVar39 * 0x178;
  *(undefined8 *)(lVar28 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar28 + 0x78) = uVar52;
  if (uVar43 <= uVar14) goto LAB_035575f4;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar28 = lVar40 + lVar39 * 0x178;
  *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar28 + 0xa0) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar28 + 200) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar28 + 0xf0) = uVar52;
  *(undefined1 *)(lVar42 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar31)();
  }
  else if (iVar15 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar39 * 0x178;
  uVar22 = *(undefined8 *)(lVar42 + 0x11c);
  *(undefined8 *)(lVar42 + 0x11c) =
       CONCAT44(fVar59 + (float)((ulong)uVar22 >> 0x20),fVar58 + (float)uVar22);
  *(float *)(lVar42 + 0x124) = fVar50 + *(float *)(lVar42 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar39 * 0x178;
  *(ulong *)(lVar42 + 0x110) =
       CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0x110) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar42 + 0x110));
  *(float *)(lVar42 + 0x118) = fVar50 + *(float *)(lVar42 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar39 * 0x178;
  *(ulong *)(lVar42 + 0x128) =
       CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar42 + 0x128) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar42 + 0x128));
  *(float *)(lVar42 + 0x130) = fVar50 + *(float *)(lVar42 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar39 * 0x178;
  *(float *)(lVar42 + 0x134) = fVar58 + *(float *)(lVar42 + 0x134);
  *(ulong *)(lVar42 + 0x138) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar42 + 0x138) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar42 + 0x138));
  lVar42 = *in_stack_00000170;
  if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar43 = *(uint *)(lVar28 + 0x18);
  if (uVar43 <= uVar14) goto LAB_035575f4;
  lVar34 = lVar28 + lVar39 * 0x178;
  uVar53 = CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar45 = fVar59 + *(float *)(lVar34 + 0x150);
  uVar54 = (ulong)(uint)fVar45;
  uVar56 = CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar45;
  *(ulong *)(lVar34 + 0x140) = uVar53;
  *(ulong *)(lVar34 + 0x148) = uVar56;
  if (uVar2 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar14 == uVar55) goto LAB_03555b44;
  }
  else {
    lVar42 = *(long *)(lVar42 + 0x50);
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar34 = (long)(int)uVar55;
    lVar35 = lVar42 + lVar34 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar35 + 0x58);
    fVar45 = fVar59 + *(float *)(lVar35 + 0x54);
    uVar53 = (ulong)(uint)fVar45;
    fVar47 = fVar58 + *(float *)(lVar35 + 0x58);
    uVar54 = (ulong)(uint)fVar47;
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar45;
    *(float *)(lVar35 + 0x58) = fVar47;
    if (uVar43 <= *(uint *)(lVar35 + 0x34)) goto LAB_035575f4;
    uVar52 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar42 = lVar42 + lVar34 * 0x5c;
    *(float *)(lVar42 + 0x70) = fVar45;
    *(undefined4 *)(lVar42 + 0x6c) = uVar52;
    lVar42 = *in_stack_00000170;
    if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar42 = *(long *)(lVar42 + 0x38);
    if (lVar42 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar28 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar42 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar28 = lVar28 + lVar34 * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar14 == uVar55) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar34 = lVar28 + lVar37 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar53 = CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar45 = fVar59 + *(float *)(lVar34 + 0x54);
      fVar58 = fVar58 + *(float *)(lVar34 + 0x58);
      uVar54 = (ulong)(uint)fVar58;
      *(ulong *)(lVar34 + 0x4c) = uVar53;
      *(float *)(lVar34 + 0x54) = fVar45;
      *(float *)(lVar34 + 0x58) = fVar58;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar52 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar28 = lVar28 + lVar37 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar45;
      *(undefined4 *)(lVar28 + 0x6c) = uVar52;
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar28 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar42 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar28 = lVar28 + lVar37 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar21 = FUN_026b82c4(uVar36,0);
  if (((((uVar21 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
    if (bVar8) {
      if (((uVar18 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar40 + 0x18) - 1))) &&
         (((int)uVar14 < (int)*unaff_x20 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
        if (*(uint *)(lVar40 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
        uVar5 = *(undefined2 *)(lVar40 + lVar29 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b82c4(uVar5,0);
        if ((uVar21 & 1) != 0) {
          if (*(uint *)(lVar40 + 0x18) <= uVar18) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar40 + lVar29 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar5,0);
          if ((uVar21 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar18 != 1) {
LAB_0355686c:
        bVar8 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b81f8(uVar36,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b63d8(uVar36,0);
        if (((uVar36 != 0x200b) && ((uVar21 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar14 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b82c4(uVar36,0);
      iVar15 = (int)fStack0000000000000128;
      if ((uVar21 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar18 - 2;
    }
    lVar42 = *in_stack_00000170;
    if (lVar42 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar42 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar42 + 0x24);
    iVar16 = *(int *)(lVar28 + 0x18);
    if (iVar16 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar42 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar42 = *in_stack_00000170;
      if (lVar42 == 0) goto LAB_035574b8;
    }
    lVar42 = *(long *)(lVar42 + 0x40);
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar42 = lVar42 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar42 + 0x20) = unaff_x19;
    *(float *)(lVar42 + 0x28) = fStack0000000000000158;
    *(int *)(lVar42 + 0x2c) = iVar15;
    *(int *)(lVar42 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar42 = unaff_x19[0x6d];
    if (lVar42 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar42 + 0x50);
    *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar28 = lVar28 + lVar37 * 0x5c;
    bVar8 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      fStack0000000000000158 = (float)uVar14;
    }
    if (uVar14 == *unaff_x20 - 1) {
      lVar42 = *in_stack_00000170;
      if (lVar42 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar42 + 0x40);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar42 + 0x24);
      iVar15 = *(int *)(lVar28 + 0x18);
      if (iVar15 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar42 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar42 = *in_stack_00000170;
        if (lVar42 == 0) goto LAB_035574b8;
      }
      lVar42 = *(long *)(lVar42 + 0x40);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar42 = lVar42 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar42 + 0x20) = unaff_x19;
      *(float *)(lVar42 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar42 + 0x2c) = uVar14;
      *(uint *)(lVar42 + 0x30) = uVar18 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar42 = unaff_x19[0x6d];
      if (lVar42 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar42 + 0x50);
      *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar28 = lVar28 + lVar37 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
LAB_03555d68:
    bVar8 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  uVar55 = *(uint *)(lVar42 + 0x18);
  if (uVar55 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar42 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar12) {
LAB_03555da0:
      if (uVar55 <= uVar18 - 2) goto LAB_035575f4;
      lVar37 = *unaff_x19;
      uVar55 = *(uint *)(lVar42 + lVar29 + -0x330);
      uVar52 = *(undefined4 *)(lVar42 + lVar29 + -0x2f8);
LAB_035562ec:
      pcVar31 = *(code **)(lVar37 + 0x8d8);
LAB_035562f4:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)_bStack0000000000000070;
      uVar54 = (ulong)_bStack0000000000000074;
      (*pcVar31)(fStack0000000000000078,uVar53,uVar54,uVar56,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar52);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar42 = *(long *)puVar9;
      }
LAB_03556348:
      bVar12 = false;
      fVar46 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar42 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar12 = false;
    }
  }
  else {
    lVar42 = lVar42 + lVar39 * 0x178;
    iVar15 = *(int *)(lVar42 + 0x68);
    *(int *)(lVar42 + 0x16c) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b63d8(uVar36,0);
    if ((uVar36 != 0x200b) && ((uVar21 & 1) == 0)) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar37 = *(long *)(lVar42 + 0x38), lVar37 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_035575f4;
      fVar45 = *(float *)(lVar37 + lVar39 * 0x178 + 0x160);
      if (fVar46 <= fVar45) {
        fVar46 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar49)) {
        fStack0000000000000100 = ABS(fVar49);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar42 = *in_stack_00000170;
          if (lVar42 == 0) goto LAB_035574b8;
          lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar37 + 0x15a8);
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar47 = *(float *)(lVar42 + lVar39 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar47 = fVar47 + fVar46 * fVar45;
      if (fVar47 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar47;
      }
      uVar53 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar12) {
      bVar12 = false;
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar14)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar14 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar36,0);
        if ((uVar21 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar42 = lVar42 + lVar39 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar42 + 0x160);
      fStack0000000000000078 = *(float *)(lVar42 + 0x11c);
      uVar54 = (ulong)(uint)fStack0000000000000078;
      bVar12 = fVar46 != 0.0;
      fVar45 = in_stack_00000088._4_4_;
      if (bVar12) {
        fVar45 = fVar46;
      }
      fVar46 = fVar45;
      uVar62 = *(undefined4 *)(lVar42 + 0x168);
      _bStack0000000000000074 = 0;
      fVar45 = fVar49;
      if (bVar12) {
        fVar45 = fStack0000000000000100;
      }
      uVar53 = (ulong)(uint)fVar45;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar14 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar39 * 0x178;
          lVar37 = *unaff_x19;
          uVar55 = *(uint *)(lVar42 + 0x128);
          uVar52 = *(undefined4 *)(lVar42 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar14 == uVar6) || ((int)uVar7 <= (int)uVar14)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar36,0);
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        lVar37 = lVar39;
        uVar55 = uVar14;
        if (uVar36 == 0x200b || (uVar21 & 1) != 0) {
          lVar37 = lVar20;
          uVar55 = uVar7;
        }
        if (uVar55 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar37 * 0x178;
          uVar55 = *(uint *)(lVar42 + 0x128);
          uVar52 = *(undefined4 *)(lVar42 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        uVar55 = *(uint *)(lVar42 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar18) goto LAB_035575f4;
      uVar21 = FUN_03567ad8(uVar62,*(undefined4 *)(lVar42 + lVar29),0);
      if ((uVar21 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0)) {
          if (uVar14 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar39 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar42 + 0x128);
            uVar54 = (ulong)_bStack0000000000000074;
            uVar53 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar53,uVar54,uVar56,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar42 + 0x160));
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar42 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar42 = *(long *)puVar9;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar12 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar42 + lVar39 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
      uVar55 = *(uint *)(lVar42 + lVar29 + -0x330);
      fVar59 = *(float *)(lVar42 + lVar29 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)fStack000000000000009c;
      uVar54 = (ulong)(uint)fStack0000000000000098;
      (*pcVar31)(fStack00000000000000a0,uVar53,uVar54,uVar56,
                 fStack00000000000000a8 * fVar45 + fVar59,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar42 = *in_stack_00000170;
    if ((lVar42 == 0) || (lVar37 = *(long *)(lVar42 + 0x38), lVar37 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar37 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar37 + lVar39 * 0x178 + 0x174) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar37 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar14)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar14 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar36,0);
        if ((uVar21 & 1) != 0) goto LAB_035564e8;
        lVar42 = *in_stack_00000170;
        if (lVar42 == 0) goto LAB_035574b8;
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar42 = lVar42 + lVar39 * 0x178;
      fStack0000000000000040 = *(float *)(lVar42 + 0x60);
      fStack0000000000000038 = *(float *)(lVar42 + 0x14c);
      uVar53 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar42 + 0x11c);
      uVar54 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar42 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar14 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar39 * 0x178;
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar42 + 0x128);
          fVar59 = *(float *)(lVar42 + 0x14c);
LAB_03556654:
          pcVar31 = *(code **)(lVar20 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar14 == uVar6) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar36,0);
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        uVar55 = *(uint *)(lVar42 + 0x18);
        if (uVar36 == 0x200b || (uVar21 & 1) != 0) {
          if (uVar55 <= uVar7) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar20 = lVar39;
          if (uVar55 <= uVar14) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar42 = lVar42 + lVar20 * 0x178;
        fVar59 = *(float *)(lVar42 + 0x14c);
        uVar55 = *(uint *)(lVar42 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)uVar55) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 != 0) && (lVar37 = *(long *)(lVar42 + 0x38), lVar37 != 0)) {
        if (uVar18 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lVar29 + -0x108) == fStack0000000000000040) {
            fVar47 = *(float *)(lVar37 + lVar29 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar53 = (ulong)(uint)fStack0000000000000038;
            uVar21 = FUN_03567bac(fVar59 + fVar47,uVar53,0);
            if ((uVar21 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar42 = *in_stack_00000170;
            if (lVar42 == 0) goto LAB_035574b8;
          }
          lVar42 = *(long *)(lVar42 + 0x38);
          if (lVar42 != 0) {
            uVar55 = *(uint *)(lVar42 + 0x18);
            if ((int)uVar14 <= (int)uVar7) goto FUN_035568e8;
            if (uVar7 < uVar55) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar14 < (int)uVar55) {
      iVar15 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar40 + 0x18) <= uVar18) goto LAB_035575f4;
      lVar42 = *(long *)(lVar40 + lVar29 + -0x130);
      if (lVar42 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar42,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar18 - 2 < *(uint *)(lVar42 + 0x18)) {
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar42 + lVar29 + -0x330);
          fVar59 = *(float *)(lVar42 + lVar29 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  uVar55 = (uint)*(undefined8 *)(lVar42 + 0x18);
  if (uVar55 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar42 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar11) {
      uVar54 = (ulong)uStack00000000000000c0;
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
    }
LAB_035569b4:
    bVar11 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar42 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar11) {
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar14)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar14 == uVar7) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar36,0);
        if ((uVar21 & 1) != 0) goto LAB_035569b4;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *(long *)puVar9;
      }
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      uVar55 = (uint)*(undefined8 *)(lVar42 + 0x18);
      if (uVar55 <= uVar14) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + 0xb8);
      lVar33 = lVar42 + lVar39 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar20 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar20 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar20 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar20 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar55 <= uVar14) goto LAB_035575f4;
    lVar42 = lVar42 + lVar39 * 0x178;
    fVar45 = *(float *)(lVar42 + 0x128);
    fVar60 = *(float *)(lVar42 + 0x188);
    uVar19 = *(undefined8 *)(lVar42 + 0x17c);
    fVar57 = *(float *)(lVar42 + 0x184);
    uVar22 = *(undefined8 *)(lVar42 + 0x184);
    fVar50 = *(float *)(lVar42 + 0x18c);
    fVar59 = *(float *)(lVar42 + 0x11c);
    fVar48 = *(float *)(lVar42 + 0x148);
    fVar47 = *(float *)(lVar42 + 0x150);
    in_stack_00000178 = uVar19;
    fStack0000000000000180 = fVar57;
    fStack0000000000000184 = fVar60;
    in_stack_00000188 = fVar50;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar21 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar42 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar21 & 1) == 0) {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar42);
      }
      fVar45 = fVar45 + (float)in_stack_000017b8;
      uVar54 = (ulong)(uint)fVar45;
      fVar59 = fVar59 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar47 = fVar47 - in_stack_000017c0;
      uVar53 = (ulong)(uint)fVar47;
      fVar48 = fVar48 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar56 = (ulong)(uint)fVar48;
      if (fVar59 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar59;
      }
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      if (fStack00000000000000c8 <= fVar45) {
        fStack00000000000000c8 = fVar45;
      }
      if (fStack00000000000000d0 <= fVar48) {
        fStack00000000000000d0 = fVar48;
      }
    }
    else {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar42);
      }
      fVar59 = (fVar59 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar56 = (ulong)(uint)fVar59;
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar48) {
        fStack00000000000000d0 = fVar48;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
      fStack00000000000000dc = fVar47 - fVar50;
      fStack00000000000000c8 = fVar45 + fVar57;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar48 + fVar60;
      fStack00000000000000d8 = fVar59;
      in_stack_000017b0 = uVar19;
      in_stack_000017b8 = uVar22;
      in_stack_000017c0 = fVar50;
    }
    if (((*unaff_x20 == 1) || (uVar14 == uVar6)) || (((int)uVar7 <= (int)uVar14 || (!bVar1)))) {
      uVar54 = (ulong)uStack00000000000000c0;
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
  }
  uVar14 = *unaff_x20;
  lVar29 = lVar29 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar14 <= (int)uVar18;
  uVar18 = uVar18 + 1;
  uVar55 = uVar2;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar40 = *in_stack_00000170;
  if (lVar40 != 0) {
    iVar17 = uVar2 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar40 + 0x18) = uVar14;
    lVar29 = unaff_x19[0xd4];
    *(int *)(lVar40 + 0x2c) = iVar17;
    if ((int)uVar14 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar40 + 0x1c) = (int)lVar29;
    *(float *)(lVar40 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar40 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar40 = unaff_x19[0xdf];
    if (lVar40 != 0) {
      (**(code **)(lVar40 + 0x18))
                (*(undefined8 *)(lVar40 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar40 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar17 != 0x19) {
      lVar40 = unaff_x19[0xe5];
      if (lVar40 == 0) goto LAB_035574b8;
      uVar14 = FUN_03911ee4(lVar40,0);
      FUN_03911f20(lVar40,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar40 = *(long *)(*in_stack_00000170 + 0x60), lVar40 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar40 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
        if (*(int *)(lVar40 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
            if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
                if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar40 = *(long *)(unaff_x19[0x6d] + 0x60), lVar40 != 0)) {
                    if (*(int *)(lVar40 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar40 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar22 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar14 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar40 = *in_stack_00000170;
                              if (lVar40 != 0) {
                                lVar42 = 0;
                                lVar29 = 0;
                                do {
                                  uVar21 = lVar29 + 1;
                                  if ((long)*(int *)(lVar40 + 0x34) <= (long)uVar21)
                                  goto LAB_03554724;
                                  lVar40 = *(long *)(lVar40 + 0x60);
                                  if (lVar40 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                  FUN_03596a20(lVar40 + lVar42 + 0x70,0);
                                  lVar40 = unaff_x19[0xe1];
                                  if (lVar40 == 0) break;
                                  if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                  uVar19 = *(undefined8 *)(lVar40 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036d35a8(uVar19,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar40 = *(long *)(*in_stack_00000170 + 0x60), lVar40 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                      FUN_03596b20(lVar40 + lVar42 + 0x70,1,0);
                                    }
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a460c(lVar40,*(undefined8 *)(lVar20 + lVar42 + 0x80),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a4810(lVar40,*(undefined8 *)(lVar20 + lVar42 + 0x98),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a48bc(lVar40,*(undefined8 *)(lVar20 + lVar42 + 0xa0),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = UnityEngine_Material__GetColorArray(lVar40,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000170 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar40 == 0) break;
                                    FUN_036a4e24(lVar40,*(undefined8 *)(lVar20 + lVar42 + 0xa8),0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if ((lVar40 == 0) ||
                                       (lVar40 = UnityEngine_Material__GetColorArray(lVar40,0),
                                       lVar40 == 0)) break;
                                    FUN_036aa280(lVar40,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if (lVar40 == 0) break;
                                    lVar40 = FUN_037b514c(lVar40,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar29 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar19 = UnityEngine_Material__GetColorArray(lVar20,0),
                                       lVar40 == 0)) break;
                                    FUN_0390f3a4(lVar40,uVar19,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if ((lVar40 == 0) ||
                                       (lVar40 = FUN_037b514c(lVar40,0), lVar40 == 0)) break;
                                    FUN_0390eec8(uVar22,uVar53,uVar54,uVar56,lVar40,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar40 = *(long *)(lVar40 + lVar29 * 8 + 0x28);
                                    if ((lVar40 == 0) ||
                                       (lVar40 = FUN_037b514c(lVar40,0), lVar40 == 0)) break;
                                    FUN_0390ed78(lVar40,uVar14 & 1,0);
                                    lVar40 = unaff_x19[0xe1];
                                    if (lVar40 == 0) break;
                                    if (*(uint *)(lVar40 + 0x18) <= uVar21) goto LAB_035575f4;
                                    plVar38 = *(long **)(lVar40 + lVar29 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar38 == (long *)0x0) break;
                                    (**(code **)(*plVar38 + 0x2c8))
                                              (plVar38,uVar18 & 1,*(undefined8 *)(*plVar38 + 0x2d0))
                                    ;
                                  }
                                  lVar40 = *in_stack_00000170;
                                  lVar29 = lVar29 + 1;
                                  lVar42 = lVar42 + 0x50;
                                } while (lVar40 != 0);
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


