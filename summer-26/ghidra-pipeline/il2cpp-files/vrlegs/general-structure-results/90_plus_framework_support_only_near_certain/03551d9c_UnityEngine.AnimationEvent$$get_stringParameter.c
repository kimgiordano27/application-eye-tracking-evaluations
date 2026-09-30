/*
FUNCTION_NAME: UnityEngine.AnimationEvent$$get_stringParameter
ENTRY_POINT: 03551d9c
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


void UnityEngine_AnimationEvent__get_stringParameter
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
               float param_6)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  long lVar29;
  float *pfVar30;
  code *pcVar31;
  uint uVar32;
  float *pfVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar40;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar41;
  long *plVar42;
  long lVar43;
  uint unaff_w27;
  long *unaff_x28;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  ulong uVar51;
  float fVar52;
  uint uVar53;
  ulong uVar54;
  float fVar55;
  float fVar56;
  float unaff_s8;
  float fVar57;
  float fVar58;
  float unaff_s11;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong unaff_d13;
  undefined4 uVar63;
  float unaff_s14;
  float unaff_s15;
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
  float in_stack_00000108;
  undefined8 in_stack_00000110;
  float in_stack_00000118;
  float in_stack_00000120;
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
  
code_r0x03551d9c:
  if (param_1 == 0) goto LAB_035574b8;
  if (*(uint *)(param_1 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  param_1 = param_1 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(param_1 + 0x11c) = in_stack_00000118;
  *(float *)(param_1 + 0x120) = unaff_s14;
  *(float *)(param_1 + 0x124) = in_stack_00000110._4_4_;
  if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar26 + 0x114) = in_stack_00000108;
  *(float *)(lVar26 + 0x110) = fStack0000000000000104;
  *(float *)(lVar26 + 0x118) = fStack0000000000000100;
  if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar26 + 0x128) = unaff_s11;
  *(float *)(lVar26 + 300) = unaff_s15;
  *(float *)(lVar26 + 0x130) = unaff_s8;
  if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar26 + 0x134) = param_5;
  *(float *)(lVar26 + 0x138) = param_3;
  *(float *)(lVar26 + 0x13c) = param_2;
  if ((*unaff_x28 == 0) || (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar12 = *unaff_x20;
  lVar43 = (long)(int)uVar12;
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar26 + lVar43 * unaff_x24;
  *(int *)(lVar29 + 0x140) = (int)unaff_x19[200];
  fVar50 = *(float *)(unaff_x19 + 0x9b);
  uVar19 = (ulong)(uint)fVar50;
  fVar48 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar29 + 0x15c) = (unaff_s11 - in_stack_00000118) / (in_stack_00000108 - unaff_s14);
  *(float *)(lVar29 + 0x14c) = (param_6 - fVar50) + fVar48;
  fVar46 = (float)unaff_d13;
  fVar52 = fStack0000000000000128 * fVar46;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar52 = fVar52 / fStack0000000000000158;
    in_stack_00000120 = (in_stack_00000120 * fVar46) / fStack0000000000000158;
  }
  else {
    in_stack_00000120 = in_stack_00000120 * fVar46;
  }
  uVar16 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar12 == uVar16)) {
    in_stack_00000120 = fVar48 + in_stack_00000120;
    fVar52 = fVar48 + fVar52;
    fVar60 = in_stack_00000120;
    fVar56 = fVar52;
    if (fVar48 != 0.0) {
      fVar56 = (fVar52 - fVar48) / *(float *)((long)unaff_x19 + 0x404);
      fVar60 = (in_stack_00000120 - fVar48) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar56 <= fVar52) {
        fVar56 = fVar52;
      }
      if (in_stack_00000120 <= fVar60) {
        fVar60 = in_stack_00000120;
      }
    }
    lVar26 = lVar26 + lVar43 * unaff_x24;
    fVar48 = fVar56;
    if (fVar56 <= *(float *)(unaff_x19 + 0x99)) {
      fVar48 = *(float *)(unaff_x19 + 0x99);
    }
    fVar45 = fVar60;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar60) {
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
    *(float *)(unaff_x19 + 0x99) = fVar48;
    *(float *)(lVar26 + 0x154) = fVar56;
    *(float *)(lVar26 + 0x158) = fVar60;
    *(float *)(lVar26 + 0x148) = fVar52 - fVar50;
    *(float *)(unaff_x19 + 0x98) = fVar52 - fVar50;
    *(float *)(lVar26 + 0x150) = in_stack_00000120 - fVar50;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000120 - fVar50;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar48;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar48 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar50 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar46 * fVar50) / fStack0000000000000158;
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar48 <= fStack0000000000000158) {
        fVar48 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar48;
    }
    if ((float)uVar19 == 0.0) {
      fVar48 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar52) {
        fVar48 = fVar52;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar48;
    }
  }
  else {
    fVar48 = *(float *)(unaff_x19 + 0x99);
    lVar26 = lVar26 + lVar43 * unaff_x24;
    *(float *)(lVar26 + 0x154) = fVar48;
    fVar52 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar48 = fVar48 - fVar50;
    *(float *)(lVar26 + 0x148) = fVar48;
    *(float *)(lVar26 + 0x158) = fVar52;
    *(float *)(unaff_x19 + 0x98) = fVar48;
    fVar52 = fVar52 - fVar50;
    *(float *)(lVar26 + 0x150) = fVar52;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
  }
  lVar26 = *unaff_x28;
  if ((lVar26 == 0) || (lVar43 = *(long *)(lVar26 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  uVar53 = *unaff_x20;
  if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
  lVar43 = lVar43 + (long)(int)uVar53 * unaff_x24;
  *(undefined1 *)(lVar43 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4f);
  iVar15 = (int)unaff_x24;
  uVar44 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar43 + 0x194) = 1;
    pfVar30 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar26 + 0x60);
      pfVar30 = (float *)(lVar26 + 100);
    }
    fVar50 = *pfVar33;
    fVar52 = *pfVar30;
    fVar48 = *(float *)(unaff_x19 + 0x6c);
    fVar56 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar50) - fVar52;
    bVar9 = true;
    if ((fVar48 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar48))) {
      bVar9 = fVar48 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000f8._4_4_ = fVar48;
    }
    fVar48 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar48 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      in_stack_000000f0 = fVar46;
    }
    fVar47 = (float)uVar19;
    fVar46 = 0.0;
    if ((0.0 < fVar47) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar53 = *unaff_x20;
    fVar46 = (*(float *)(unaff_x19 + 0x97) - (fVar45 - fVar47)) + fVar46;
    if (fStack00000000000000c4 < fVar46) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar53;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar21 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar61 = *(float *)(unaff_x19 + 0x59);
        if (((fVar61 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar47)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar48 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar46) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar48 <= fVar61) {
            fVar48 = fVar61;
          }
          goto LAB_03554b48;
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar46 = *(float *)(unaff_x19 + 0x4a);
        uVar19 = (ulong)(uint)fVar46;
        if ((fVar46 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar48 = (fVar47 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar48 <= DAT_00d38b84) {
            fVar48 = DAT_00d38b84;
          }
          fVar50 = (fVar47 - fVar48) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar47;
          fVar48 = DAT_00d38e60;
          if (fVar50 != INFINITY) {
            fVar48 = (float)(int)fVar50 / 20.0;
          }
          if (fVar48 <= fVar46) {
            fVar48 = fVar46;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar7;
        }
        lVar43 = *(long *)(lVar26 + 0xb8);
        lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = FUN_01a46ff8(lVar26);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar43 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 == 0) {
LAB_03554580:
          uVar21 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar11 = FUN_0358c15c();
LAB_035529e8:
          iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar11 - 1;
          uVar21 = CONCAT44(0x2026,iVar13);
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
        if ((uVar53 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          fVar48 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar48 - fVar45) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar19 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar26 = NEON_rev64(uVar19,4);
          unaff_x19[0x99] = lVar26;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          uVar21 = in_stack_000017c8;
        }
        goto LAB_03550bd0;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar26 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar21,*(undefined8 *)(*plVar42 + 0x530));
          lVar26 = unaff_x19[0x5d];
          if (lVar26 == 0) goto LAB_035574b8;
          *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      uVar21 = CONCAT44(3,uVar53);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar46 = ABS(fVar56) + fVar48 * (1.0 - fVar60) * in_stack_000000f0;
    fVar48 = 1.0;
    if ((uVar32 & 0x18) != 0) {
      fVar48 = DAT_00d38acc;
    }
    fVar56 = fVar48 * in_stack_000000f8._4_4_;
    if (fVar46 <= fVar56) {
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
            *(undefined1 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
      }
      else if (in_stack_000017dc == 9) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 != 0) && (lVar43 = *(long *)(lVar26 + 0x38), lVar43 != 0)) {
          uVar53 = *unaff_x20;
          if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
          *(undefined1 *)(lVar43 + (long)(int)uVar53 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar53;
          lVar43 = *(long *)(lVar26 + 0x50);
          if (lVar43 != 0) {
            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(int *)(lVar43 + 0x2c) = *(int *)(lVar43 + 0x2c) + 1;
              goto LAB_03552fcc;
            }
            goto LAB_035575f4;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar56,in_stack_000000e8 & 0xffffffff);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar53 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar53;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar53;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x50), lVar26 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000068._4_4_ = 0;
            *(float *)(lVar26 + 0x60) = fVar50;
            *(float *)(lVar26 + 100) = fVar52;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
      }
      goto LAB_035574b8;
    }
    uVar19 = in_stack_000000e8 & 0xffffffff;
    if (((char)unaff_x19[0x5b] == '\0') || (uVar53 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar56 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar60 < fVar56) {
          fVar50 = fVar46 / (1.0 - fVar60);
          if (fVar60 <= 0.0) {
            fVar50 = fVar46;
          }
          fVar60 = fVar60 + (fVar46 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar50;
          goto LAB_035574e8;
        }
        fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar56 = *(float *)(unaff_x19 + 0x4a);
        if (fVar56 < fVar60) {
          fVar48 = (fVar60 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar48 <= DAT_00d38b84) {
            fVar48 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar60;
          fVar60 = fVar60 - fVar48;
LAB_03557524:
          fVar50 = fVar60 * 20.0 + 0.5;
          fVar48 = DAT_00d38e60;
          if (fVar50 != INFINITY) {
            fVar48 = (float)(int)fVar50 / 20.0;
          }
          if (fVar48 <= fVar56) {
            fVar48 = fVar56;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar48;
          return;
        }
      }
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *(long *)puVar7;
        }
        lVar43 = *(long *)(lVar26 + 0xb8);
        lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
          lVar26 = FUN_01a46ff8(lVar26);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar43 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 != 0) {
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
          goto LAB_035529dc;
        }
        goto LAB_03554580;
      }
      if (iVar11 != 6) {
        if (iVar11 == 3) {
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
      lVar26 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar20 = FUN_036cee6c(lVar26,0,0);
      if ((uVar20 & 1) != 0) {
        plVar42 = (long *)unaff_x19[0x5d];
        uVar21 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar42 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar42 + 0x528))(plVar42,uVar21,*(undefined8 *)(*plVar42 + 0x530));
        lVar26 = unaff_x19[0x5d];
        if (lVar26 == 0) goto LAB_035574b8;
        *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar42 = (long *)unaff_x19[0x5d];
        if (plVar42 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
LAB_03552b00:
      uVar21 = CONCAT44(3,*unaff_x20);
    }
    else {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar43 = *(long *)(lVar26 + 0x38), lVar43 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar43 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar56 = *(float *)(unaff_x19 + 0x9b);
        fVar60 = 0.0;
        if ((0.0 < fVar56) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar60 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar60 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar43 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar60 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar26 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar26 == 0) goto LAB_035574b8;
        fVar56 = *(float *)(unaff_x19 + 0x9b);
        fVar60 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar26 + 0x18) <= uVar34) ||
         (uVar5 = uVar34 - 1, *(uint *)(lVar26 + 0x18) <= uVar5)) goto LAB_035575f4;
      uVar19 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x97));
      fVar45 = (fVar60 + *(float *)(unaff_x19 + 0x97) + fVar56) -
               *(float *)(lVar26 + (long)(int)uVar34 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar26 + (long)(int)uVar5 * (long)iVar15 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar45 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar26 + (long)(int)uVar34 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          uVar21 = in_stack_000017c8;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar56 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar56 <= fVar60) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar19 = (ulong)(uint)fVar60;
              fVar56 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar60 <= fVar56) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar48 = (fVar60 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar48 <= DAT_00d38b84) {
                fVar48 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar60;
              fVar60 = fVar60 - fVar48;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar50 = fVar46;
            if (0.0 < fVar60) {
              fVar50 = fVar46 / (1.0 - fVar60);
            }
            fVar60 = fVar60 + (fVar46 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar50;
LAB_035574e8:
            if (fVar56 <= fVar60) {
              fVar60 = fVar56;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar60;
            return;
          }
LAB_03552d44:
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)puVar7;
          }
          iVar11 = *(int *)(*(long *)(lVar26 + 0xb8) + 0xe78);
          if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) &&
             (((bStack0000000000000070 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
            goto LAB_035574b8;
            uVar34 = *unaff_x20 - 1;
            if (*(uint *)(lVar26 + 0x18) <= uVar34) goto LAB_035575f4;
            iStack0000000000000034 = iVar11;
            if (*(short *)(lVar26 + (long)(int)uVar34 * (long)iVar15 + 0x20) == 0xad) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar34;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              uVar21 = CONCAT44(0x2d,uVar34);
              goto LAB_03550bd0;
            }
          }
          if (fVar45 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            uVar19 = unaff_d13;
            FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar56 = fStack00000000000000c4;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar56 = *(float *)(unaff_x19 + 0x59);
              if ((fVar56 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar48 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar45) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar48 <= fVar56) {
                  fVar48 = fVar56;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar48;
                return;
              }
              fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar56 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar60 < fVar56) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar19 = (ulong)(uint)fVar60;
              fVar56 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar56 < fVar60) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557594;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_03552ef4_caseD_0;
            case 1:
              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar43 = *(long *)(lVar26 + 0xb8);
              lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                lVar26 = FUN_01a46ff8(lVar26);
              }
              piVar22 = (int *)thunk_FUN_01a59484(lVar43 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar26 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              if (*piVar22 == 0) {
                bStack0000000000000074 = 0;
                goto LAB_03554580;
              }
              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              memcpy(&stack0x00001008,&stack0x000008a0,0x378);
              iVar11 = FUN_0358c15c();
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
              uVar19 = unaff_d13;
              FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                           in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              break;
            case 6:
              lVar26 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar20 = FUN_036cee6c(lVar26,0,0);
              if ((uVar20 & 1) != 0) {
                plVar42 = (long *)unaff_x19[0x5d];
                uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar42 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar42 + 0x528))(plVar42,uVar21,*(undefined8 *)(*plVar42 + 0x530));
                lVar26 = unaff_x19[0x5d];
                if (lVar26 == 0) goto LAB_035574b8;
                *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar42 = (long *)unaff_x19[0x5d];
                if (plVar42 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              }
              bStack0000000000000074 = 0;
              goto LAB_03552b00;
            default:
              bStack0000000000000074 = 0;
              goto LAB_03552f54;
            }
          }
          bStack0000000000000070 = 1;
          bStack0000000000000074 = 0;
          in_stack_00000068._4_4_ = 1;
          uVar21 = in_stack_000017c8;
        }
      }
      else {
        bStack0000000000000074 = 0;
        *unaff_x20 = uVar5;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        uVar21 = CONCAT44(0x2d,uVar5);
      }
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar50 = (float)uVar19;
      fVar48 = 0.0;
      if ((0.0 < fVar50) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar19 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar50)) + fVar48)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar53;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar26 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 != (long *)0x0) {
            (**(code **)(*plVar42 + 0x528))(plVar42,uVar21,*(undefined8 *)(*plVar42 + 0x530));
            lVar26 = unaff_x19[0x5d];
            if (lVar26 != 0) {
              *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar42 = (long *)unaff_x19[0x5d];
              if (plVar42 != (long *)0x0) {
                (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
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
    if ((((in_stack_000017dc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017dc - 10 < 2)) || (in_stack_000017dc == 0xa0)) {
LAB_03552b54:
      if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
         (in_stack_000017dc != 0x2060)) {
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar43 = *(long *)(lVar26 + 0x50), lVar43 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar43 + 0x2c) = *(int *)(lVar43 + 0x2c) + 1;
        *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar19 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x50), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
    }
LAB_035530c4:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar48 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar52 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar26 = unaff_x19[0xca];
      fVar50 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar50 = 1.0;
      }
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
      fVar56 = *(float *)((long)unaff_x19 + 0x404);
      fVar45 = *(float *)(lVar26 + 0x2c);
      fVar46 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
      fVar60 = *_fStack00000000000000a8;
      fVar46 = fVar56 * (fVar48 / (float)iVar11) * fVar52 * fVar50 * fVar45 * fVar46;
      fVar48 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        uVar53 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar26 + 0x18) <= uVar53) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar50 = *(float *)(lVar26 + (long)(int)uVar53 * (long)iVar15 + 0x60);
        iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar56 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar26 = unaff_x19[0xca];
        fVar52 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar52 = 1.0;
        }
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
        fVar45 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = *(float *)(lVar26 + 0x2c);
        fVar46 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x50), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar60 = *(float *)(lVar26 + 0x60);
        fVar48 = *(float *)(lVar26 + 100);
        fVar46 = fVar45 * (fVar50 / (float)iVar11) * fVar56 * fVar52 * fVar47 * fVar46;
      }
      fVar56 = *(float *)(unaff_x19 + 0x9b);
      fVar50 = 0.0;
      fVar52 = 0.0;
      if ((0.0 < fVar56) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar47 = *(float *)(unaff_x19 + 0x97);
      fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar45 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar26 = *(long *)(unaff_x19[0xca] + 0x20), lVar26 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar26,0);
        fVar50 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar55 = *(float *)(unaff_x19 + 0x6c);
      fVar48 = (fStack000000000000009c - fVar60) - fVar48;
      bVar9 = true;
      if ((fVar55 <= fVar48) && (bVar9 = false, !NAN(fVar55))) {
        bVar9 = fVar55 == -1.0;
      }
      if (!bVar9) {
        fVar48 = fVar55;
      }
      fVar60 = 1.0;
      if ((uVar32 & 0x18) != 0) {
        fVar60 = DAT_00d38acc;
      }
      if (((fVar47 - (fVar61 - fVar56)) + fVar52 < fStack00000000000000c4) &&
         (ABS(fVar45) + fVar46 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar60 * fVar48)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar26 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar26 + 0x788),0x378);
        FUN_0209b210(lVar26 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar26 = *in_stack_00000170;
    if (lVar26 == 0) goto LAB_035574b8;
    lVar43 = *(long *)(lVar26 + 0x38);
    unaff_d13 = _fStack0000000000000150 & 0xffffffff;
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar53 = *(uint *)(unaff_x19 + 0x95);
    lVar43 = lVar43 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar43 + 100) = uVar53;
    *(int *)(lVar43 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar26 + 0x18) <= uVar53) goto LAB_035575f4;
      *(int *)(lVar26 + (long)(int)uVar53 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar53) goto LAB_035575f4;
      if (*(int *)(lVar26 + (long)(int)uVar53 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar48 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar52 = *(float *)(unaff_x19 + 200);
      fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar48 = fStack0000000000000150 * fVar48 * fVar50;
      fVar50 = fVar48 * (float)(int)(fVar52 / fVar48);
      uVar19 = (ulong)(uint)fVar50;
      if (fVar50 <= fVar52) {
        fVar50 = fVar52 + fVar48;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar50;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar52 = 1.0;
        }
        else {
          fVar52 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar50 = *(float *)(unaff_x19 + 200);
        fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar48 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar50 = fVar50 + fVar48 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fStack0000000000000150 *
                                     (fStack000000000000012c + fVar52 * fVar46) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar50;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fStack0000000000000150 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar19 = (ulong)(uint)fVar50;
      fVar50 = *(float *)(unaff_x19 + 200) - fVar50;
      *(float *)(unaff_x19 + 200) = fVar50;
      if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
        fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar19 = (ulong)(uint)fVar48;
        fVar50 = fVar50 - fVar48;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar48 = *(float *)(unaff_x19 + 200);
      fVar50 = fVar48 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                        fStack00000000000000d4 *
                        (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar50;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar19 = (ulong)(uint)fVar48, unaff_w27 != 0)) {
        fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar19 = (ulong)(uint)fVar48;
        fVar50 = fVar50 + fVar48;
        goto LAB_03553678;
      }
    }
    lVar26 = *in_stack_00000170;
    if ((lVar26 == 0) || (lVar43 = *(long *)(lVar26 + 0x38), lVar43 == 0)) goto LAB_035574b8;
    uVar53 = *unaff_x20;
    uVar32 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar32 <= uVar53) goto LAB_035575f4;
    *(float *)(lVar43 + (long)(int)uVar53 * unaff_x24 + 0x144) = fVar50;
    uVar34 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar53 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar19 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar53 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar48 = *(float *)(unaff_x19 + 0x99);
        fVar50 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar48 = fVar48 - fVar50;
        if (((fStack000000000000005c < ABS(fVar48)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar48);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar48;
          *(float *)(unaff_x19 + 0x9b) = fVar48 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)puVar7;
          }
          lVar43 = *(long *)(lVar26 + 0xb8);
          if (*(int *)(lVar43 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar43 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar43 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar26 + 0xb8) + 0x818,0);
            lVar26 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar26 + 0x7bc) = fVar48 + *(float *)(lVar26 + 0x7bc);
            *(float *)(lVar26 + 0x800) = fVar48 + *(float *)(lVar26 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar26 + 0x788),0x378);
            FUN_0209b210(lVar26 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar52 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar50 = *(float *)((long)unaff_x19 + 0x4cc) - fVar52;
      fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar48 = fVar50;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar48;
      fVar46 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar48;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar43 = *(long *)(lVar26 + 0x50), lVar43 == 0)) goto LAB_035574b8;
      uVar53 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar43 + 0x18) <= uVar53) goto LAB_035575f4;
      lVar29 = unaff_x19[0x93];
      lVar18 = lVar43 + (long)(int)uVar53 * 0x5c;
      *(int *)(lVar18 + 0x34) = (int)lVar29;
      uVar32 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar29 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar32 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar32;
      *(uint *)(lVar18 + 0x38) = uVar32;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar11 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar32 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
      *(int *)(lVar18 + 0x40) = iVar11;
      *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
      uVar63 = *(undefined4 *)(lVar26 + (long)(int)uVar32 * (long)iVar15 + 0x11c);
      lVar43 = lVar43 + (long)(int)uVar53 * 0x5c;
      *(float *)(lVar43 + 0x70) = fVar50;
      *(undefined4 *)(lVar43 + 0x6c) = uVar63;
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar43 = *(long *)(lVar26 + 0x50), lVar43 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar46 = fVar46 - fVar52;
      uVar19 = (ulong)(uint)fVar46;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar43 + 0x74) =
           *(undefined4 *)
            (lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar43 + 0x78) = fVar46;
      lVar26 = *in_stack_00000170;
      if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar43 = lVar29 + lVar18 * 0x5c;
      *(float *)(lVar43 + 0x44) =
           *(float *)(lVar43 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
      *(float *)(lVar43 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar43 + 0x24) == 1) {
        *(int *)(lVar29 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar43 = *(long *)(lVar26 + 0x38), lVar43 == 0)) goto LAB_035574b8;
      lVar41 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar32 = (uint)*(undefined8 *)(lVar43 + 0x18);
      if (uVar32 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar43 + lVar41 * unaff_x24 + 0x194) == '\0') &&
         (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar32 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar29 = lVar29 + lVar18 * 0x5c;
      fVar52 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar48 = -fVar52;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar48 = fVar52;
      }
      *(float *)(lVar29 + 0x58) = *(float *)(lVar43 + lVar41 * unaff_x24 + 0x144) + fVar48;
      *(float *)(lVar29 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar29 + 0x54) = fVar50;
      *(float *)(lVar29 + 0x48) = in_stack_00000060 + (fVar46 - fVar50);
      *(float *)(lVar29 + 0x4c) = fVar46;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar26 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar11 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar11;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar26 != 0) && (*(long *)(lVar26 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar11) {
              FUN_0358ca18();
              lVar26 = unaff_x19[0x6d];
              if (lVar26 == 0) goto LAB_035574b8;
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 != 0) {
              if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
                fVar48 = *(float *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar50 = 0.0, in_stack_000017dc == 10)) {
                    fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar24 = 0;
                  fVar50 = fVar48 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar50) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar50 = 0.0, in_stack_000017dc == 10)) {
                    fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar24 = 1;
                  fVar50 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar50);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar50;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar24;
                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar26 = *(long *)puVar7;
                }
                uVar21 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar48;
                uVar19 = NEON_rev64(uVar21,4);
                unaff_x19[0x99] = uVar19;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068._4_4_ = 1;
                bStack0000000000000070 = 1;
                uVar21 = in_stack_000017c8;
                goto LAB_03550bd0;
              }
              goto LAB_035575f4;
            }
          }
          goto LAB_035574b8;
        }
        if (in_stack_000017dc == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
          in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar34 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar53 = *unaff_x20;
    if (uVar32 <= uVar53) goto LAB_035575f4;
    if (*(char *)(lVar43 + (long)(int)uVar53 * unaff_x24 + 0x194) != '\0') {
      lVar43 = lVar43 + (long)(int)uVar53 * unaff_x24;
      uVar20 = *(ulong *)(lVar43 + 0x11c);
      uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar19 ^ (uVar19 ^ uVar20) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar20 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar20));
      uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar19 = *(ulong *)(lVar43 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar20 ^ (uVar20 ^ uVar19) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar20 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar20));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
      lVar43 = *(long *)(lVar26 + 0x58);
      if (lVar43 == 0) goto LAB_035574b8;
      iVar11 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar43 + 0x18) < iVar11) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar26 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar26 = *in_stack_00000170;
        if (lVar26 == 0) goto LAB_035574b8;
      }
      lVar43 = *(long *)(lVar26 + 0x58);
      if (lVar43 == 0) goto LAB_035574b8;
      uVar32 = *(uint *)(unaff_x19 + 0x96);
      lVar29 = (long)(int)uVar32;
      uVar53 = *(uint *)(lVar43 + 0x18);
      if (uVar53 <= uVar32) goto LAB_035575f4;
      lVar18 = lVar43 + lVar29 * 0x14;
      fVar50 = *(float *)(lVar18 + 0x30);
      uVar19 = (ulong)(uint)fVar50;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar48 = fVar50;
      }
      *(float *)(lVar18 + 0x30) = fVar48;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar34 == 0 && uVar32 == 0) {
        *(uint *)(lVar43 + (ulong)uVar32 * 0x14 + 0x20) = uVar34;
      }
      else {
        uVar5 = uVar34 - 1;
        if (0 < (int)uVar34) {
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar26 + 0x18) <= uVar5) goto LAB_035575f4;
          if (uVar32 != *(uint *)(lVar26 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar32 - 1 < uVar53) {
              *(uint *)(lVar43 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar43 + 0x20 + lVar29 * 0x14) = uVar34;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar34 == in_stack_00000088._4_4_) {
          *(float *)(lVar43 + lVar29 * 0x14 + 0x24) = in_stack_00000088._4_4_;
        }
      }
    }
LAB_03553d10:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
    if ((unaff_w27 == 0) &&
       (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
        if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
             (0x1d < in_stack_000017dc - 0xa961)) || (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0))
           && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
        goto LAB_03553f78;
        lVar26 = FUN_035978e8(0);
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) goto LAB_035574b8;
        uVar53 = FUN_0219c130(*(long *)(lVar26 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar53 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if (uVar12 != uVar16 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
          if (unaff_w27 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar26 = FUN_035978e8(0);
        if (((lVar26 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar43 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar26 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar43 + (long)(int)(*unaff_x20 + 1) * (long)iVar15 + 0x20);
        uVar20 = FUN_0219c130(*(long *)(lVar26 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar53 & 1) != 0) goto LAB_035541dc;
        if ((uVar20 & 1) == 0) goto LAB_03554270;
        if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
        if (unaff_w27 != 0) {
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
        if (unaff_w27 == 0) goto UnityEngine_Animator__set_animatePhysics;
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
      *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_035542ac:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    uVar21 = in_stack_000017c8;
  }
LAB_03550bd0:
  do {
    in_stack_000000f0 = (float)unaff_d13;
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar26 = unaff_x19[0x8f];
    if (lVar26 == 0) goto LAB_035574b8;
    if ((int)*(uint *)(lVar26 + 0x18) <= (int)in_stack_000017a8) {
LAB_0355459c:
      fVar48 = (float)uVar19;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar48 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar50 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar48 < fVar50) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar52 = (*(float *)((long)unaff_x19 + 0x23c) - fVar48) * 0.5;
          if (fVar52 <= DAT_00d38b84) {
            fVar52 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar48;
          fVar52 = (fVar48 + fVar52) * 20.0 + 0.5;
          fVar48 = DAT_00d38e60;
          if (fVar52 != INFINITY) {
            fVar48 = (float)(int)fVar52 / 20.0;
          }
          if (fVar50 <= fVar48) {
            fVar48 = fVar50;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar7 = PTR_DAT_03cbdf88;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar21 = FUN_0276793c(_fStack0000000000000038,0);
        uVar17 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar21,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar17,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar21,0);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar44 == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar8;
      }
      plVar42 = (long *)OVRPlugin_Media_TypeInfo;
      lVar26 = **(long **)(lVar26 + 0xb8);
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar15 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar26 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar11 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      in_stack_000000e8 = *(ulong *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar26 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)in_stack_000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar11 < 0x401) {
        if (iVar11 == 0x100) {
          if (lVar26 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_035575f4;
          uVar21 = *(undefined8 *)(lVar26 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar43 = *(long *)(*in_stack_00000170 + 0x58), lVar43 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar43 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar48 = *(float *)(lVar43 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar48 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar26 + 0x2c);
          fVar48 = (0.0 - fVar48) - fStack0000000000000020;
        }
        else if (iVar11 == 0x200) {
          if (lVar26 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
          uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar26 + 0x24) +
                            (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar26 = *(long *)(*in_stack_00000170 + 0x58), lVar26 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar26 = lVar26 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar48 = ((fStack0000000000000020 + *(float *)(lVar26 + 0x28) +
                      *(float *)(lVar26 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar48 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar11 != 0x400) goto LAB_03554c4c;
          if (lVar26 == 0) goto LAB_035574b8;
          if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
          uVar21 = *(undefined8 *)(lVar26 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar43 = *(long *)(*in_stack_00000170 + 0x58), lVar43 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar43 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar43 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar26 + 0x20);
          fVar48 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,(float)uVar21 + fVar48);
      }
      else if (iVar11 == 0x800) {
        if (lVar26 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_035575f4;
        fVar48 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar26 + 0x24) +
                              (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar48;
      }
      else {
        if (iVar11 == 0x1000) {
          if (lVar26 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
            uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar26 + 0x24) +
                              (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
            fVar48 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar11 == 0x2000) {
          if (lVar26 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_035575f4;
          fVar48 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar26 + 0x24) +
                                (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + fVar48);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar21 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar7);
      }
      uVar19 = FUN_036d35a8(uVar21,0,0);
      lVar26 = FUN_0357f060();
      if (lVar26 == 0) goto LAB_035574b8;
      FUN_036df824(lVar26,0);
      *(float *)(unaff_x19 + 0xe2) = fVar48;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar11 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar50 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar63 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar7 = OVRPlugin_Mesh_TypeInfo;
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar7;
      }
      puVar27 = *(undefined4 **)(lVar26 + 0xb8);
      uVar20 = (ulong)(uint)puVar27[1];
      uVar51 = (ulong)(uint)puVar27[2];
      uVar54 = (ulong)(uint)puVar27[3];
      FUN_035683a4(*puVar27,uVar20,uVar51,uVar54,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar26 = *in_stack_00000170;
      if (lVar26 == 0) goto LAB_035574b8;
      uVar12 = *unaff_x20;
      if ((int)uVar12 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar15 = 0;
        goto LAB_03556f00;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      fVar48 = ABS(fVar48);
      fVar52 = 1.0;
      if ((uVar19 & 1) == 0) {
        fVar52 = fVar48;
      }
      if (lVar26 == 0) goto LAB_035574b8;
      bVar10 = false;
      bVar6 = false;
      _fStack0000000000000128 = 0;
      bVar9 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar43 = 0x2e0;
      fVar56 = 0.0;
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
      uVar16 = 1;
      uVar53 = 0;
      goto LAB_03554e78;
    }
    if (*(uint *)(lVar26 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    in_stack_000017dc = *(uint *)(lVar26 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
    if (in_stack_000017dc == 0) goto LAB_0355459c;
    if (5 < in_stack_00000168._4_4_) {
      uVar21 = FUN_0276793c(&stack0x000017dc,0);
      uVar17 = FUN_0276793c(&stack0x000017a8,0);
      uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar21,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar17,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar21,0);
      uVar21 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017dc != 0x3c)) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar26 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar26 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar20 = FUN_03586568();
      if (((uVar20 & 1) != 0) &&
         (in_stack_000017a8 = in_stack_0000178c, uVar44 = in_stack_000017dc,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    uVar12 = *unaff_x20;
    if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar29 = (long)(int)uVar12;
    cVar25 = *(char *)(lVar26 + lVar29 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar43 = unaff_x19[0x24];
    if ((uint)uVar21 == uVar12) {
      in_stack_000017dc = (uint)((ulong)uVar21 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017dc == 0x2026) {
        *(long *)(lVar26 + lVar29 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar26 + 0x2c) = 0;
        *(long *)(lVar26 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        uVar12 = *unaff_x20;
        if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar26 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        uVar21 = CONCAT44(3,uVar12 + 1);
      }
      else if (in_stack_000017dc == 3) {
        if ((*unaff_x21 == 0) || (lVar18 = FUN_03568ac0(*unaff_x21,0), lVar18 == 0))
        goto LAB_035574b8;
        FUN_0219b634(lVar18,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
        *(ulong *)(lVar26 + lVar29 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008a4,in_stack_000008a0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar12 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar12 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)uVar12 * (long)iVar15;
      *(undefined1 *)(lVar26 + 0x194) = 0;
      *(undefined2 *)(lVar26 + 0x20) = 0x200b;
      *(undefined4 *)(lVar26 + 100) = 0;
      *unaff_x20 = uVar12 + 1;
      uVar44 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) {
      fStack0000000000000158 = 1.0;
      if (iVar11 == 0) goto LAB_03550fec;
LAB_03550c00:
      if (iVar11 != 1) {
        lVar26 = *in_stack_00000170;
        param_6 = 0.0;
        fVar48 = param_6;
        if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
          fVar48 = in_stack_000000f0;
        }
        if (lVar26 == 0) goto LAB_035574b8;
        fVar46 = 0.0;
        in_stack_00000120 = 0.0;
        goto LAB_035514cc;
      }
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar26 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar26 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar26,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      uVar44 = in_stack_000017dc;
      if (lVar26 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar29 = *(long *)puVar7;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar48 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar52 = (float)FUN_03776960(&stack0x00001720,0);
        fVar50 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar50 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar50 = (fVar48 / (float)iVar11) * fVar52 * fVar50;
        iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar48 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar52 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          in_stack_00000120 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000120 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar56 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar26 + 0x20),0);
          fVar60 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
          fVar47 = *(float *)(lVar26 + 0x2c);
          fVar45 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar61 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar55 = *(float *)((long)unaff_x19 + 0x404);
          param_6 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          param_6 = fVar50 * fVar61 * fVar55 * param_6;
          in_stack_00000120 = (fVar48 / (float)iVar11) * fVar52 * in_stack_00000120;
          in_stack_000000f0 = in_stack_00000120 * (fVar56 / fVar60) * fVar47 * fVar45;
          in_stack_00000120 = in_stack_00000120 / in_stack_000000f0;
          fVar46 = in_stack_00000120 * fVar46;
          fVar48 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          in_stack_00000120 = in_stack_00000120 * fVar48;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar52 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
          fVar60 = *(float *)(lVar26 + 0x2c);
          fVar56 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar56 = 1.0;
          }
          fVar45 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar61 = *(float *)((long)unaff_x19 + 0x404);
          param_6 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          param_6 = fVar50 * fVar47 * fVar61 * param_6;
          in_stack_000000f0 = (fVar48 / (float)iVar11) * fVar52 * fVar56 * fVar60 * fVar45;
          in_stack_00000120 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        *in_stack_000000e0 = lVar26;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar26);
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar26 + 0x2c) = 1;
        *(float *)(lVar26 + 0x160) = in_stack_000000f0;
        *(long *)(lVar26 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar26 = *in_stack_00000170;
        if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fStack000000000000015c = 0.0;
        *(int *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar43;
        goto LAB_035514b0;
      }
      goto LAB_03550bd0;
    }
    uVar12 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b8410(in_stack_000017dc,0);
            in_stack_000017dc = uVar12 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b8594(in_stack_000017dc,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar12 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar44 = in_stack_000017dc;
  } while (*in_stack_000000e0 == 0);
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  uVar16 = *unaff_x20;
  uVar12 = *(uint *)(lVar26 + 0x18);
  if (uVar12 <= uVar16) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + (long)(int)uVar16 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar48 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar26 = unaff_x19[0x20];
  }
  else {
    lVar43 = unaff_x19[0x8f];
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar43 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar12 <= uVar16 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar48 = *(float *)(lVar26 + (long)(int)(uVar16 - 1) * (long)iVar15 + 0x60);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar26 = *unaff_x21;
  }
  if (lVar26 == 0) goto LAB_035574b8;
  fVar52 = (float)FUN_03776960(lVar26 + 0x50,0);
  fVar50 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar50 = 1.0;
  }
  in_stack_00000120 = 0.0;
  fVar46 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000120 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar26 = unaff_x19[0xc9];
  if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
  fVar56 = *(float *)((long)unaff_x19 + 0x404);
  fVar60 = *(float *)(lVar26 + 0x2c);
  in_stack_000000f0 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar45 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar47 = *(float *)((long)unaff_x19 + 0x404);
  param_6 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar26 = unaff_x19[0x6d];
  if ((lVar26 == 0) || (lVar43 = *(long *)(lVar26 + 0x38), lVar43 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar43 = lVar43 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar43 + 0x2c) = 0;
  fVar50 = ((fStack0000000000000158 * fVar48) / (float)iVar11) * fVar52 * fVar50;
  in_stack_000000f0 = fVar50 * fVar56 * fVar60 * in_stack_000000f0;
  *(float *)(lVar43 + 0x160) = in_stack_000000f0;
  uVar12 = *(uint *)(unaff_x19 + 0x24);
  param_6 = fVar50 * fVar45 * fVar47 * param_6;
  if (uVar12 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar43 = unaff_x19[0xe1];
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar43 = *(long *)(lVar43 + (long)(int)uVar12 * 8 + 0x20);
    if (lVar43 == 0) goto LAB_035574b8;
    fStack000000000000015c = *(float *)(lVar43 + 0x10c);
  }
LAB_035514b0:
  fVar48 = 0.0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    fVar48 = in_stack_000000f0;
  }
LAB_035514cc:
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar26 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar26 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar26 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar26 = lVar26 + (long)(int)uVar12 * unaff_x24;
  *(undefined4 *)(lVar26 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar26 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar26 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar26 = *(long *)(unaff_x19[0xc9] + 0x20), lVar26 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar26,0);
  puVar7 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(in_stack_000017dc,0);
    unaff_w27 = uVar12 & 1;
  }
  else {
    unaff_w27 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar46;
    fVar52 = 0.0;
    fVar50 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar16 = *unaff_x20;
    uVar12 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar16 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar16 + 1) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + (long)(int)(uVar16 + 1) * (long)iVar15 + 0x30);
      if ((((lVar26 == 0) || (*unaff_x21 == 0)) ||
          (lVar43 = *(long *)(*unaff_x21 + 0x128), lVar43 == 0)) ||
         (lVar43 = *(long *)(lVar43 + 0x18), lVar43 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar12 | *(int *)(lVar26 + 0x28) << 0x10;
      uVar19 = FUN_0219f8b8(lVar43,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar63 = 0;
      if ((uVar19 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar46;
        fVar52 = 0.0;
        fVar50 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar63 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar50 = *(float *)(in_stack_000016f8 + 0x14);
        fVar52 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar46);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar16 = *unaff_x20;
    }
    else {
      uVar63 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar46;
      fVar52 = 0.0;
      fVar50 = 0.0;
    }
    if (0 < (int)uVar16) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar16 - 1) goto LAB_035575f4;
      lVar26 = *(long *)(lVar26 + (ulong)(uVar16 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar26 == 0) || (*unaff_x21 == 0)) ||
         ((lVar43 = *(long *)(*unaff_x21 + 0x128), lVar43 == 0 ||
          (lVar43 = *(long *)(lVar43 + 0x18), lVar43 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar26 + 0x28) | uVar12 << 0x10;
      uVar19 = FUN_0219f8b8(lVar43,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar19 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar49 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar50 = (float)FUN_03571cb4(fVar50,fVar52,_fStack0000000000000128 >> 0x20,uVar63,
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
    fVar56 = *(float *)(unaff_x19 + 200);
    fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar56 = fVar56 - fVar48 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar56;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar56 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar46 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar46 != 0.0) {
    fVar56 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar60 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar46 * 0.5 - fVar48 * (fVar56 * 0.5 + fVar60));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar25 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar26 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar26,0,0);
    fVar56 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar26 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar26 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      fVar56 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar26 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar26 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar60 = *(float *)(*unaff_x21 + 0x1b0);
        fVar56 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        fVar56 = fVar56 * fVar46 * fVar60 * 0.25;
        if (fVar46 < fStack000000000000015c + fVar56) {
          fStack000000000000015c = fVar46 - fVar56;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar26 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar26,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar26 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar26 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar26 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar26 == 0) goto LAB_035574b8;
        uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar26 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar26 != 0) {
            fVar46 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar60 = *(float *)(*unaff_x21 + 0x1a8);
              fVar56 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc)
                                           ,0);
              fVar56 = fVar56 * fVar46 * fVar60 * 0.25;
              if (fVar46 < fStack000000000000015c + fVar56) {
                fStack000000000000015c = fVar46 - fVar56;
              }
              goto FUN_03551b84;
            }
          }
          goto LAB_035574b8;
        }
      }
    }
    fVar56 = 0.0;
  }
FUN_03551b84:
  in_stack_00000118 = *(float *)(unaff_x19 + 200);
  fVar46 = (float)FUN_03776ca4(&stack0x00001790,0);
  in_stack_00000118 =
       in_stack_00000118 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar48 * (fVar50 + ((fVar46 - fStack000000000000015c) - fVar56));
  fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
  unaff_s15 = *(float *)((long)unaff_x19 + 0x61c) +
              ((param_6 + fVar48 * (fVar52 + fStack000000000000015c + fVar50)) -
              *(float *)(unaff_x19 + 0x9b));
  fVar50 = (float)FUN_03776c9c(&stack0x00001790,0);
  unaff_s14 = unaff_s15 - fVar48 * (fStack000000000000015c + fStack000000000000015c + fVar50);
  fVar50 = (float)FUN_03776c94(&stack0x00001790,0);
  param_5 = in_stack_00000118 +
            (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
            fVar48 * (fVar56 + fVar56 + fStack000000000000015c + fStack000000000000015c + fVar50);
  in_stack_000000e8 = (ulong)(uint)fVar56;
  fStack0000000000000104 = in_stack_00000118;
  unaff_s11 = param_5;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar25 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar46 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar60 = fVar46 * fVar48 * (fVar56 + fStack000000000000015c + fVar50);
    fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar52 = (float)FUN_03776c9c(&stack0x00001790,0);
    unaff_s15 = unaff_s15 + 0.0;
    unaff_s14 = unaff_s14 + 0.0;
    fVar46 = fVar46 * fVar48 * (((fVar50 - fVar52) - fStack000000000000015c) - fVar56);
    fVar50 = in_stack_00000118 + fVar60;
    fVar52 = param_5 + fVar60;
    fVar56 = (fVar60 - fVar46) * 0.5;
    in_stack_00000118 = (in_stack_00000118 + fVar46) - fVar56;
    param_5 = (param_5 + fVar46) - fVar56;
    fStack0000000000000104 = fVar50 - fVar56;
    unaff_s11 = fVar52 - fVar56;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar48;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    in_stack_00000110._4_4_ = 0.0;
    param_2 = 0.0;
    unaff_s8 = 0.0;
    fStack0000000000000100 = 0.0;
    param_3 = unaff_s14;
    in_stack_00000108 = unaff_s15;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar45 = (unaff_s11 + in_stack_00000118) * 0.5;
    fVar47 = (unaff_s14 + unaff_s15) * 0.5;
    fVar46 = unaff_s15 - fVar47;
    fStack0000000000000100 = 0.0;
    fVar50 = fVar46;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar45,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar45 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar56 = unaff_s14 - fVar47;
    in_stack_00000110._4_4_ = 0.0;
    fVar52 = fVar56;
    in_stack_00000118 = (float)FUN_036bdd2c(in_stack_00000118 - fVar45,_fStack0000000000000078,0);
    in_stack_00000118 = fVar45 + in_stack_00000118;
    in_stack_00000110._4_4_ = in_stack_00000110._4_4_ + 0.0;
    unaff_s14 = fVar47 + fVar52;
    fVar60 = 0.0;
    fVar52 = (float)FUN_036bdd2c(unaff_s11 - fVar45,_fStack0000000000000078,0);
    unaff_s11 = fVar45 + fVar52;
    unaff_s15 = fVar47 + fVar46;
    unaff_s8 = fVar60 + 0.0;
    param_2 = 0.0;
    param_5 = (float)FUN_036bdd2c(param_5 - fVar45,_fStack0000000000000078,0);
    param_5 = fVar45 + param_5;
    param_2 = param_2 + 0.0;
    param_3 = fVar47 + fVar56;
    in_stack_00000108 = fVar47 + fVar50;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  param_1 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar48;
  unaff_x28 = in_stack_00000170;
  in_stack_000017c8 = uVar21;
  goto code_r0x03551d9c;
LAB_03554e78:
  uVar12 = uVar16 - 1;
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x50), lVar29 == 0))
  goto LAB_035574b8;
  lVar41 = (long)(int)uVar12;
  lVar18 = lVar26 + lVar41 * 0x178;
  uVar32 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar29 + 0x18) <= uVar32) goto LAB_035575f4;
  lVar39 = (long)(int)uVar32;
  lVar29 = lVar29 + lVar39 * 0x5c;
  lVar35 = *(long *)(lVar18 + 0x38);
  uVar3 = *(ushort *)(lVar18 + 0x20);
  uVar34 = *(uint *)(lVar29 + 0x3c);
  uVar44 = *(uint *)(lVar29 + 0x68);
  iVar2 = *(int *)(lVar29 + 0x20);
  iVar13 = *(int *)(lVar29 + 0x28);
  iVar14 = *(int *)(lVar29 + 0x2c);
  uVar5 = *(uint *)(lVar29 + 0x40);
  lVar18 = (long)(int)uVar5;
  fVar47 = *(float *)(lVar29 + 0x4c);
  fVar55 = *(float *)(lVar29 + 0x54);
  fVar60 = *(float *)(lVar29 + 0x58);
  fVar59 = *(float *)(lVar29 + 0x5c);
  fVar57 = *(float *)(lVar29 + 0x60);
  fVar58 = *(float *)(lVar29 + 0x6c);
  fVar62 = *(float *)(lVar29 + 0x70);
  fVar45 = *(float *)(lVar29 + 0x74);
  fVar61 = *(float *)(lVar29 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar44 < 9) {
    switch(uVar44) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar57 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar60;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar57 + fVar59 * 0.5) - fVar60 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar59 + fVar57) - fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar59 + fVar57;
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
      if (*(uint *)(lVar26 + 0x18) <= uVar34) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar26 + (long)(int)uVar34 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b8cc4(uVar4,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar32 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 <= fVar59) && (!bVar1 && uVar44 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar57;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar59 + fVar57;
        }
        goto LAB_03555088;
      }
      if (((uVar16 == 1) || (uVar32 != uVar53)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar57;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar59 + fVar57;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        in_stack_000000e8 = 0;
      }
      else {
        cVar25 = (char)unaff_x19[0x1e];
        fVar57 = -fVar60;
        if (cVar25 != '\0') {
          fVar57 = fVar60;
        }
        if (*(uint *)(lVar26 + 0x18) <= uVar34) goto LAB_035575f4;
        iVar14 = (int)*(char *)(lVar26 + (long)(int)uVar34 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar60 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar60 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_03556e74:
          fVar60 = 1.0 - fVar60;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar38,0);
            cVar25 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_03556e74;
          }
          iVar14 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar13;
        }
        fVar60 = ((fVar59 + fVar57) * fVar60) / (float)iVar14;
        if (cVar25 == '\0') {
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
    fVar60 = fVar58 + fVar45;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar44 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar44 <= uVar12) goto LAB_035575f4;
  lVar29 = lVar26 + lVar41 * 0x178;
  fVar59 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar60 = SUB84(in_stack_000000b8,0) + (float)in_stack_000000e8;
  fVar57 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)(in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar29 + 0x194) == '\0') goto LAB_03555938;
  iVar13 = *(int *)(lVar26 + lVar41 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0355574c;
  fVar56 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar32,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar28 = lVar26 + lVar41 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar56 = 1.0;
    break;
  case 1:
    fVar61 = *(float *)(lVar26 + lVar41 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar28 = lVar26 + lVar41 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar61) - *(float *)(in_stack_00000080 + 0x230);
      fVar61 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar28 = lVar26 + lVar41 * 0x178;
    fVar45 = fVar45 - fVar58;
    *(float *)(lVar28 + 0x84) = fVar56 + (fVar61 - fVar58) / fVar45;
    *(float *)(lVar28 + 0xac) = fVar56 + (*(float *)(lVar28 + 0x98) - fVar58) / fVar45;
    *(float *)(lVar28 + 0xd4) = fVar56 + (*(float *)(lVar28 + 0xc0) - fVar58) / fVar45;
    fVar56 = fVar56 + (*(float *)(lVar28 + 0xe8) - fVar58) / fVar45;
    break;
  case 2:
    lVar28 = lVar26 + lVar41 * 0x178;
    fVar61 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar28 + 0x84) = fVar56 + fVar45 / fVar61;
    *(float *)(lVar28 + 0xac) =
         fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar28 + 0xd4) =
         fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar56 = fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar28 = lVar26 + lVar41 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar26 + lVar41 * 0x178;
      fVar61 = fVar61 - fVar62;
      fVar45 = fVar56 + (*(float *)(lVar28 + 0x74) - fVar62) / fVar61;
      fVar61 = fVar56 + (*(float *)(lVar28 + 0x9c) - fVar62) / fVar61;
      *(float *)(lVar28 + 0x88) = fVar45;
      *(float *)(lVar28 + 0xb0) = fVar61;
      *(float *)(lVar28 + 0xd8) = fVar45;
      *(float *)(lVar28 + 0x100) = fVar61;
      break;
    case 2:
      lVar28 = lVar26 + lVar41 * 0x178;
      fVar45 = fVar56 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar28 + 0x88) = fVar45;
      fVar61 = *(float *)(unaff_x19 + 0x9c);
      fVar58 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar28 + 0xd8) = fVar45;
      fVar45 = fVar56 + (*(float *)(lVar28 + 0x9c) - fVar61) / (fVar58 - fVar61);
      *(float *)(lVar28 + 0xb0) = fVar45;
      *(float *)(lVar28 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar44 = (uint)*(undefined8 *)(lVar26 + 0x18);
    }
    if (uVar44 <= uVar12) goto LAB_035575f4;
    lVar28 = lVar26 + lVar41 * 0x178;
    fVar45 = *(float *)(lVar28 + 0x15c);
    fVar61 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar45) * 0.5;
    fVar58 = fVar56 + *(float *)(lVar28 + 0x88) * fVar45 + fVar61;
    fVar56 = fVar56 + fVar61 + *(float *)(lVar28 + 0xb0) * fVar45;
    *(float *)(lVar28 + 0x84) = fVar58;
    *(float *)(lVar28 + 0xac) = fVar58;
    *(float *)(lVar28 + 0xd4) = fVar56;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar26 + lVar41 * 0x178 + 0xfc) = fVar56;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar44 <= uVar12) goto LAB_035575f4;
    lVar28 = lVar26 + lVar41 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar44) {
      lVar28 = lVar26 + lVar41 * 0x178;
      fVar47 = fVar47 - fVar55;
      fVar56 = (*(float *)(lVar28 + 0x74) - fVar55) / fVar47;
      fVar47 = (*(float *)(lVar28 + 0x9c) - fVar55) / fVar47;
      *(float *)(lVar28 + 0x88) = fVar56;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar44 <= uVar12) goto LAB_035575f4;
    lVar28 = lVar26 + lVar41 * 0x178;
    fVar56 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar28 + 0x88) = fVar56;
    fVar47 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar28 + 0xb0) = fVar47;
    *(float *)(lVar28 + 0xd8) = fVar47;
    *(float *)(lVar28 + 0x100) = fVar56;
    break;
  case 3:
    if (uVar44 <= uVar12) goto LAB_035575f4;
    lVar28 = lVar26 + lVar41 * 0x178;
    fVar47 = *(float *)(lVar28 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar47) * 0.5;
    fVar56 = *(float *)(lVar28 + 0x84) / fVar47 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar28 + 0xd4) / fVar47;
    *(float *)(lVar28 + 0x88) = fVar56;
    *(float *)(lVar28 + 0xb0) = fVar45;
    *(float *)(lVar28 + 0x100) = fVar56;
    *(float *)(lVar28 + 0xd8) = fVar45;
  }
  if (uVar44 <= uVar12) goto LAB_035575f4;
  lVar28 = lVar26 + lVar41 * 0x178;
  fVar56 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar26 + lVar41 * 0x178 + 400) & 1) != 0)) {
    fVar56 = -fVar56;
  }
  fVar45 = fVar48;
  if (((iVar11 == 2) || (fVar45 = fVar52, iVar11 == 1)) || (fVar45 = fVar48 / fVar50, iVar11 == 0))
  {
    fVar56 = fVar45 * fVar56;
  }
  lVar28 = lVar26 + lVar41 * 0x178;
  fVar47 = *(float *)(lVar28 + 0x88);
  fVar61 = *(float *)(lVar28 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar61 != INFINITY) {
    fVar45 = (float)(int)fVar61;
  }
  fVar58 = *(float *)(lVar28 + 0xd4);
  fVar62 = *(float *)(lVar28 + 0xd8);
  fVar55 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar55 = (float)(int)fVar47;
  }
  uVar49 = FUN_03591d3c(fVar61 - fVar45,fVar47 - fVar55);
  *(undefined4 *)(lVar28 + 0x84) = uVar49;
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar62 = fVar62 - fVar55;
  *(float *)(lVar28 + 0x88) = fVar56;
  uVar49 = FUN_03591d3c(fVar61 - fVar45,fVar62);
  *(undefined4 *)(lVar26 + lVar41 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar58 = fVar58 - fVar45;
  *(float *)(lVar26 + lVar41 * 0x178 + 0xb0) = fVar56;
  fVar45 = (float)FUN_03591d3c(fVar58,fVar62);
  *(float *)(lVar28 + 0xd4) = fVar45;
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
  *(float *)(lVar28 + 0xd8) = fVar56;
  uVar49 = FUN_03591d3c(fVar58,fVar47 - fVar55);
  *(undefined4 *)(lVar26 + lVar41 * 0x178 + 0xfc) = uVar49;
  uVar44 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar44 <= uVar12) goto LAB_035575f4;
  *(float *)(lVar26 + lVar41 * 0x178 + 0x100) = fVar56;
LAB_0355574c:
  if (((int)uVar12 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar44 <= uVar12) goto LAB_035575f4;
      lVar29 = lVar26 + lVar41 * 0x178;
      *(ulong *)(lVar29 + 0x70) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar29 + 0x70));
      *(float *)(lVar29 + 0x78) = fVar57 + *(float *)(lVar29 + 0x78);
      *(ulong *)(lVar29 + 0x98) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar29 + 0x98));
      *(float *)(lVar29 + 0xa0) = fVar57 + *(float *)(lVar29 + 0xa0);
      *(ulong *)(lVar29 + 0xc0) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar29 + 0xc0));
      *(float *)(lVar29 + 200) = fVar57 + *(float *)(lVar29 + 200);
      *(ulong *)(lVar29 + 0xe8) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar29 + 0xe8));
      *(float *)(lVar29 + 0xf0) = fVar57 + *(float *)(lVar29 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar12 < uVar44) {
        if (*(uint *)(lVar26 + lVar41 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar29 = lVar26 + lVar41 * 0x178;
          *(ulong *)(lVar29 + 0x70) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar29 + 0x70));
          *(float *)(lVar29 + 0x78) = fVar57 + *(float *)(lVar29 + 0x78);
          *(ulong *)(lVar29 + 0x98) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar29 + 0x98));
          *(float *)(lVar29 + 0xa0) = fVar57 + *(float *)(lVar29 + 0xa0);
          *(ulong *)(lVar29 + 0xc0) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar29 + 0xc0));
          *(float *)(lVar29 + 200) = fVar57 + *(float *)(lVar29 + 200);
          *(ulong *)(lVar29 + 0xe8) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar29 + 0xe8));
          *(float *)(lVar29 + 0xf0) = fVar57 + *(float *)(lVar29 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar44 <= uVar12) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar44 = *(uint *)(lVar26 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar28 = lVar26 + lVar41 * 0x178;
  *(undefined8 *)(lVar28 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar28 + 0x78) = uVar49;
  if (uVar44 <= uVar12) goto LAB_035575f4;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar28 = lVar26 + lVar41 * 0x178;
  *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 0xf0) = uVar49;
  *(undefined1 *)(lVar29 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar13 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar31)();
  }
  else if (iVar13 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  uVar21 = *(undefined8 *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x11c) =
       CONCAT44(fVar60 + (float)((ulong)uVar21 >> 0x20),fVar59 + (float)uVar21);
  *(float *)(lVar29 + 0x124) = fVar57 + *(float *)(lVar29 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(ulong *)(lVar29 + 0x110) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x110) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar29 + 0x110));
  *(float *)(lVar29 + 0x118) = fVar57 + *(float *)(lVar29 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(ulong *)(lVar29 + 0x128) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar29 + 0x128) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar29 + 0x128));
  *(float *)(lVar29 + 0x130) = fVar57 + *(float *)(lVar29 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(float *)(lVar29 + 0x134) = fVar59 + *(float *)(lVar29 + 0x134);
  *(ulong *)(lVar29 + 0x138) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar29 + 0x138));
  lVar29 = *in_stack_00000170;
  if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar44 = *(uint *)(lVar28 + 0x18);
  if (uVar44 <= uVar12) goto LAB_035575f4;
  lVar36 = lVar28 + lVar41 * 0x178;
  uVar20 = CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar36 + 0x140));
  fVar45 = fVar60 + *(float *)(lVar36 + 0x150);
  uVar51 = (ulong)(uint)fVar45;
  uVar54 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar45;
  *(ulong *)(lVar36 + 0x140) = uVar20;
  *(ulong *)(lVar36 + 0x148) = uVar54;
  if (uVar32 == uVar53) {
    uVar53 = *unaff_x20 - 1;
    if (uVar12 == uVar53) goto LAB_03555b44;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar36 = (long)(int)uVar53;
    lVar37 = lVar29 + lVar36 * 0x5c;
    uVar54 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar45 = fVar60 + *(float *)(lVar37 + 0x54);
    uVar20 = (ulong)(uint)fVar45;
    fVar47 = fVar59 + *(float *)(lVar37 + 0x58);
    uVar51 = (ulong)(uint)fVar47;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar45;
    *(float *)(lVar37 + 0x58) = fVar47;
    if (uVar44 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar49 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar29 = lVar29 + lVar36 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar45;
    *(undefined4 *)(lVar29 + 0x6c) = uVar49;
    lVar29 = *in_stack_00000170;
    if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar53 = *(uint *)(lVar28 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar28 = lVar28 + lVar36 * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar53 * 0x178 + 0x128);
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    uVar53 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar12 == uVar53) {
      lVar29 = *in_stack_00000170;
      if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar36 = lVar28 + lVar39 * 0x5c;
      uVar54 = (ulong)(uint)*(float *)(lVar36 + 0x58);
      uVar20 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar36 + 0x4c));
      fVar45 = fVar60 + *(float *)(lVar36 + 0x54);
      fVar59 = fVar59 + *(float *)(lVar36 + 0x58);
      uVar51 = (ulong)(uint)fVar59;
      *(ulong *)(lVar36 + 0x4c) = uVar20;
      *(float *)(lVar36 + 0x54) = fVar45;
      *(float *)(lVar36 + 0x58) = fVar59;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
      uVar49 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar28 = lVar28 + lVar39 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar45;
      *(undefined4 *)(lVar28 + 0x6c) = uVar49;
      lVar29 = *in_stack_00000170;
      if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar53 = *(uint *)(lVar28 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_035575f4;
      lVar28 = lVar28 + lVar39 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar53 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar38,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar6) {
      if (((uVar16 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar26 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar26 + lVar43 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar4,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar16) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar26 + lVar43 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar4,0);
          if ((uVar19 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar16 != 1) {
LAB_0355686c:
        bVar6 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b81f8(uVar38,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b63d8(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar12 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b82c4(uVar38,0);
      iVar13 = (int)fStack0000000000000128;
      if ((uVar19 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar13 = uVar16 - 2;
    }
    lVar29 = *in_stack_00000170;
    if (lVar29 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar29 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar53 = *(uint *)(lVar29 + 0x24);
    iVar14 = *(int *)(lVar28 + 0x18);
    if (iVar14 < (int)(uVar53 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar29 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar29 = *in_stack_00000170;
      if (lVar29 == 0) goto LAB_035574b8;
    }
    lVar29 = *(long *)(lVar29 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_035575f4;
    lVar29 = lVar29 + (long)(int)uVar53 * 0x18;
    *(long **)(lVar29 + 0x20) = unaff_x19;
    *(float *)(lVar29 + 0x28) = fStack0000000000000158;
    *(int *)(lVar29 + 0x2c) = iVar13;
    *(int *)(lVar29 + 0x30) = (iVar13 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar29 = unaff_x19[0x6d];
    if (lVar29 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar29 + 0x50);
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_035575f4;
    lVar28 = lVar28 + lVar39 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      fStack0000000000000158 = (float)uVar12;
    }
    if (uVar12 == *unaff_x20 - 1) {
      lVar29 = *in_stack_00000170;
      if (lVar29 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar29 + 0x40);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar53 = *(uint *)(lVar29 + 0x24);
      iVar13 = *(int *)(lVar28 + 0x18);
      if (iVar13 < (int)(uVar53 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar29 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar29 = *in_stack_00000170;
        if (lVar29 == 0) goto LAB_035574b8;
      }
      lVar29 = *(long *)(lVar29 + 0x40);
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar53) goto LAB_035575f4;
      lVar29 = lVar29 + (long)(int)uVar53 * 0x18;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      *(float *)(lVar29 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar29 + 0x2c) = uVar12;
      *(uint *)(lVar29 + 0x30) = uVar16 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar29 = unaff_x19[0x6d];
      if (lVar29 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar29 + 0x50);
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar28 = lVar28 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  uVar53 = *(uint *)(lVar29 + 0x18);
  if (uVar53 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar29 + lVar41 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar53 <= uVar16 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar53 = *(uint *)(lVar29 + lVar43 + -0x330);
      uVar49 = *(undefined4 *)(lVar29 + lVar43 + -0x2f8);
LAB_035562ec:
      pcVar31 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar54 = (ulong)uVar53;
      uVar20 = (ulong)(uint)_bStack0000000000000070;
      uVar51 = (ulong)_bStack0000000000000074;
      (*pcVar31)(fStack0000000000000078,uVar20,uVar51,uVar54,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar49);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar29 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar46 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar29 = lVar29 + lVar41 * 0x178;
    iVar13 = *(int *)(lVar29 + 0x68);
    *(int *)(lVar29 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b63d8(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar29 = *in_stack_00000170;
      if ((lVar29 == 0) || (lVar39 = *(long *)(lVar29 + 0x38), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar12) goto LAB_035575f4;
      fVar45 = *(float *)(lVar39 + lVar41 * 0x178 + 0x160);
      if (fVar46 <= fVar45) {
        fVar46 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar56)) {
        fStack0000000000000100 = ABS(fVar56);
      }
      if (iVar13 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar29 = *in_stack_00000170;
          if (lVar29 == 0) goto LAB_035574b8;
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar39 + 0x15a8);
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar47 = *(float *)(lVar29 + lVar41 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar47 = fVar47 + fVar46 * fVar45;
      if (fVar47 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar47;
      }
      uVar20 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar13;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar29 + 0x160);
      fStack0000000000000078 = *(float *)(lVar29 + 0x11c);
      uVar51 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar46 != 0.0;
      fVar45 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar45 = fVar46;
      }
      fVar46 = fVar45;
      uVar63 = *(undefined4 *)(lVar29 + 0x168);
      _bStack0000000000000074 = 0;
      fVar45 = fVar56;
      if (bVar10) {
        fVar45 = fStack0000000000000100;
      }
      uVar20 = (ulong)(uint)fVar45;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar12 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar41 * 0x178;
          lVar39 = *unaff_x19;
          uVar53 = *(uint *)(lVar29 + 0x128);
          uVar49 = *(undefined4 *)(lVar29 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar12 == uVar34) || ((int)uVar5 <= (int)uVar12)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        lVar39 = lVar41;
        uVar53 = uVar12;
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          lVar39 = lVar18;
          uVar53 = uVar5;
        }
        if (uVar53 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar39 * 0x178;
          uVar53 = *(uint *)(lVar29 + 0x128);
          uVar49 = *(undefined4 *)(lVar29 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        uVar53 = *(uint *)(lVar29 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_035575f4;
      uVar19 = FUN_03567ad8(uVar63,*(undefined4 *)(lVar29 + lVar43),0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0)) {
          if (uVar12 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar41 * 0x178;
            uVar54 = (ulong)*(uint *)(lVar29 + 0x128);
            uVar51 = (ulong)_bStack0000000000000074;
            uVar20 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar20,uVar51,uVar54,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar29 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar29 = *(long *)puVar7;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar10 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  if (lVar35 == 0) goto LAB_035574b8;
  uVar53 = *(uint *)(lVar29 + lVar41 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar53 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
      uVar53 = *(uint *)(lVar29 + lVar43 + -0x330);
      fVar60 = *(float *)(lVar29 + lVar43 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar54 = (ulong)uVar53;
      uVar20 = (ulong)(uint)fStack000000000000009c;
      uVar51 = (ulong)(uint)fStack0000000000000098;
      (*pcVar31)(fStack00000000000000a0,uVar20,uVar51,uVar54,
                 fStack00000000000000a8 * fVar45 + fVar60,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar29 = *in_stack_00000170;
    if ((lVar29 == 0) || (lVar39 = *(long *)(lVar29 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar12) goto LAB_035575f4;
    *(int *)(lVar39 + lVar41 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_035564e8;
        lVar29 = *in_stack_00000170;
        if (lVar29 == 0) goto LAB_035574b8;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x178;
      fStack0000000000000040 = *(float *)(lVar29 + 0x60);
      fStack0000000000000038 = *(float *)(lVar29 + 0x14c);
      uVar20 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar29 + 0x11c);
      uVar51 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar29 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar53 = *unaff_x20;
    if (uVar53 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar12 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar41 * 0x178;
          lVar18 = *unaff_x19;
          uVar53 = *(uint *)(lVar29 + 0x128);
          fVar60 = *(float *)(lVar29 + 0x14c);
LAB_03556654:
          pcVar31 = *(code **)(lVar18 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar12 == uVar34) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        uVar53 = *(uint *)(lVar29 + 0x18);
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar53 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar18 = lVar41;
          if (uVar53 <= uVar12) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar29 = lVar29 + lVar18 * 0x178;
        fVar60 = *(float *)(lVar29 + 0x14c);
        uVar53 = *(uint *)(lVar29 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)uVar53) {
      lVar29 = *in_stack_00000170;
      if ((lVar29 != 0) && (lVar39 = *(long *)(lVar29 + 0x38), lVar39 != 0)) {
        if (uVar16 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar43 + -0x108) == fStack0000000000000040) {
            fVar47 = *(float *)(lVar39 + lVar43 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = (ulong)(uint)fStack0000000000000038;
            uVar19 = FUN_03567bac(fVar60 + fVar47,uVar20,0);
            if ((uVar19 & 1) != 0) {
              uVar53 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar29 = *in_stack_00000170;
            if (lVar29 == 0) goto LAB_035574b8;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 != 0) {
            uVar53 = *(uint *)(lVar29 + 0x18);
            if ((int)uVar12 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar53) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar12 < (int)uVar53) {
      iVar13 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar26 + 0x18) <= uVar16) goto LAB_035575f4;
      lVar29 = *(long *)(lVar26 + lVar43 + -0x130);
      if (lVar29 == 0) goto LAB_035574b8;
      iVar14 = FUN_036d3364(lVar29,0);
      if (iVar13 != iVar14) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar29 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar53 = *(uint *)(lVar29 + lVar43 + -0x330);
          fVar60 = *(float *)(lVar29 + lVar43 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  uVar53 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar53 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar29 + lVar41 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar51 = (ulong)uStack00000000000000c0;
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar51,uVar54,fStack00000000000000d0,uVar51);
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar29 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      uVar53 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar53 <= uVar12) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0xb8);
      lVar35 = lVar29 + lVar41 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar35 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar35 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar18 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar18 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar35 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar18 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar18 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar53 <= uVar12) goto LAB_035575f4;
    lVar29 = lVar29 + lVar41 * 0x178;
    fVar45 = *(float *)(lVar29 + 0x128);
    fVar55 = *(float *)(lVar29 + 0x188);
    uVar17 = *(undefined8 *)(lVar29 + 0x17c);
    fVar58 = *(float *)(lVar29 + 0x184);
    uVar21 = *(undefined8 *)(lVar29 + 0x184);
    fVar57 = *(float *)(lVar29 + 0x18c);
    fVar60 = *(float *)(lVar29 + 0x11c);
    fVar61 = *(float *)(lVar29 + 0x148);
    fVar47 = *(float *)(lVar29 + 0x150);
    in_stack_00000178 = uVar17;
    fStack0000000000000180 = fVar58;
    fStack0000000000000184 = fVar55;
    in_stack_00000188 = fVar57;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar29 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar29);
      }
      fVar45 = fVar45 + (float)in_stack_000017b8;
      uVar51 = (ulong)(uint)fVar45;
      fVar60 = fVar60 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar47 = fVar47 - in_stack_000017c0;
      uVar20 = (ulong)(uint)fVar47;
      fVar61 = fVar61 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar54 = (ulong)(uint)fVar61;
      if (fVar60 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar60;
      }
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      if (fStack00000000000000c8 <= fVar45) {
        fStack00000000000000c8 = fVar45;
      }
      if (fStack00000000000000d0 <= fVar61) {
        fStack00000000000000d0 = fVar61;
      }
    }
    else {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar29);
      }
      fVar60 = (fVar60 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar54 = (ulong)(uint)fVar60;
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar51 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar61) {
        fStack00000000000000d0 = fVar61;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar51,uVar54,fStack00000000000000d0,uVar51);
      fStack00000000000000dc = fVar47 - fVar57;
      fStack00000000000000c8 = fVar45 + fVar58;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar61 + fVar55;
      fStack00000000000000d8 = fVar60;
      in_stack_000017b0 = uVar17;
      in_stack_000017b8 = uVar21;
      in_stack_000017c0 = fVar57;
    }
    if (((*unaff_x20 == 1) || (uVar12 == uVar34)) || (((int)uVar5 <= (int)uVar12 || (!bVar1)))) {
      uVar51 = (ulong)uStack00000000000000c0;
      uVar20 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar20,uVar51,uVar54,fStack00000000000000d0,uVar51);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar12 = *unaff_x20;
  lVar43 = lVar43 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar12 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar53 = uVar32;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar26 = *in_stack_00000170;
  if (lVar26 != 0) {
    iVar15 = uVar32 + 1;
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar26 + 0x18) = uVar12;
    lVar43 = unaff_x19[0xd4];
    *(int *)(lVar26 + 0x2c) = iVar15;
    if ((int)uVar12 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar26 + 0x1c) = (int)lVar43;
    *(float *)(lVar26 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar26 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar26 = unaff_x19[0xdf];
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x18))
                (*(undefined8 *)(lVar26 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar26 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar15 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar15 != 0x19) {
      lVar26 = unaff_x19[0xe5];
      if (lVar26 == 0) goto LAB_035574b8;
      uVar12 = FUN_03911ee4(lVar26,0);
      FUN_03911f20(lVar26,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar26 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
        if (*(int *)(lVar26 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
            if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                    if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar21 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar26 = *in_stack_00000170;
                              if (lVar26 != 0) {
                                lVar29 = 0;
                                lVar43 = 0;
                                do {
                                  uVar19 = lVar43 + 1;
                                  if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar26 = *(long *)(lVar26 + 0x60);
                                  if (lVar26 == 0) break;
                                  if (*(int *)(*plVar42 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar26 + lVar29 + 0x70,0);
                                  lVar26 = unaff_x19[0xe1];
                                  if (lVar26 == 0) break;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar17 = *(undefined8 *)(lVar26 + lVar43 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar23 = FUN_036d35a8(uVar17,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0
                                         )) break;
                                      if (*(int *)(*plVar42 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar26 + lVar29 + 0x70,1,0);
                                    }
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a460c(lVar26,*(undefined8 *)(lVar18 + lVar29 + 0x80),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a4810(lVar26,*(undefined8 *)(lVar18 + lVar29 + 0x98),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a48bc(lVar26,*(undefined8 *)(lVar18 + lVar29 + 0xa0),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a4e24(lVar26,*(undefined8 *)(lVar18 + lVar29 + 0xa8),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = UnityEngine_Material__GetColorArray(lVar26,0),
                                       lVar26 == 0)) break;
                                    FUN_036aa280(lVar26,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_037b514c(lVar26,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar43 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (uVar17 = UnityEngine_Material__GetColorArray(lVar18,0),
                                       lVar26 == 0)) break;
                                    FUN_0390f3a4(lVar26,uVar17,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_037b514c(lVar26,0), lVar26 == 0)) break;
                                    FUN_0390eec8(uVar21,uVar20,uVar51,uVar54,lVar26,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar43 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_037b514c(lVar26,0), lVar26 == 0)) break;
                                    FUN_0390ed78(lVar26,uVar12 & 1,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar40 = *(long **)(lVar26 + lVar43 * 8 + 0x28);
                                    uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar16 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar26 = *in_stack_00000170;
                                  lVar43 = lVar43 + 1;
                                  lVar29 = lVar29 + 0x50;
                                } while (lVar26 != 0);
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


