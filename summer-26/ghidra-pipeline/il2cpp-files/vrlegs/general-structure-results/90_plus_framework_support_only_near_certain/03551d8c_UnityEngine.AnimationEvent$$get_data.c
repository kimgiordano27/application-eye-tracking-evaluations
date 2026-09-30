/*
FUNCTION_NAME: UnityEngine.AnimationEvent$$get_data
ENTRY_POINT: 03551d8c
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


void UnityEngine_AnimationEvent__get_data
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

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
  undefined8 uVar20;
  int *piVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  uint uVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar39;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar40;
  long *plVar41;
  long lVar42;
  uint unaff_w27;
  long *unaff_x28;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  ulong uVar51;
  ulong uVar52;
  float fVar53;
  uint uVar54;
  ulong uVar55;
  float fVar56;
  float fVar57;
  float unaff_s8;
  float fVar58;
  float unaff_s11;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
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
  float fStack0000000000000118;
  float fStack000000000000011c;
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
  
code_r0x03551d8c:
  if (param_1 == 0) goto LAB_035574b8;
  lVar25 = *(long *)(param_1 + 0x38);
  uVar19 = _fStack0000000000000150 & 0xffffffff;
  if (lVar25 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x11c) = fStack0000000000000118;
  *(float *)(lVar25 + 0x120) = unaff_s14;
  *(float *)(lVar25 + 0x124) = in_stack_00000110._4_4_;
  if ((*unaff_x28 == 0) || (lVar25 = *(long *)(*unaff_x28 + 0x38), lVar25 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x114) = in_stack_00000108;
  *(float *)(lVar25 + 0x110) = fStack0000000000000104;
  *(float *)(lVar25 + 0x118) = fStack0000000000000100;
  if ((*unaff_x28 == 0) || (lVar25 = *(long *)(*unaff_x28 + 0x38), lVar25 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x128) = unaff_s11;
  *(float *)(lVar25 + 300) = unaff_s15;
  *(float *)(lVar25 + 0x130) = unaff_s8;
  if ((*unaff_x28 == 0) || (lVar25 = *(long *)(*unaff_x28 + 0x38), lVar25 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x134) = param_5;
  *(float *)(lVar25 + 0x138) = param_3;
  *(float *)(lVar25 + 0x13c) = param_2;
  if ((*unaff_x28 == 0) || (lVar25 = *(long *)(*unaff_x28 + 0x38), lVar25 == 0)) goto LAB_035574b8;
  uVar12 = *unaff_x20;
  lVar42 = (long)(int)uVar12;
  if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar28 = lVar25 + lVar42 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar50 = *(float *)(unaff_x19 + 0x9b);
  uVar51 = (ulong)(uint)fVar50;
  fVar48 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) =
       (unaff_s11 - fStack0000000000000118) / (in_stack_00000108 - unaff_s14);
  *(float *)(lVar28 + 0x14c) = (fStack000000000000011c - fVar50) + fVar48;
  fVar53 = fStack0000000000000128 * fStack0000000000000150;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar53 = fVar53 / fStack0000000000000158;
    in_stack_00000120 = (in_stack_00000120 * fStack0000000000000150) / fStack0000000000000158;
  }
  else {
    in_stack_00000120 = in_stack_00000120 * fStack0000000000000150;
  }
  uVar16 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar12 == uVar16)) {
    in_stack_00000120 = fVar48 + in_stack_00000120;
    fVar53 = fVar48 + fVar53;
    fVar57 = in_stack_00000120;
    fVar45 = fVar53;
    if (fVar48 != 0.0) {
      fVar45 = (fVar53 - fVar48) / *(float *)((long)unaff_x19 + 0x404);
      fVar57 = (in_stack_00000120 - fVar48) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar45 <= fVar53) {
        fVar45 = fVar53;
      }
      if (in_stack_00000120 <= fVar57) {
        fVar57 = in_stack_00000120;
      }
    }
    lVar25 = lVar25 + lVar42 * unaff_x24;
    fVar48 = fVar45;
    if (fVar45 <= *(float *)(unaff_x19 + 0x99)) {
      fVar48 = *(float *)(unaff_x19 + 0x99);
    }
    fVar60 = fVar57;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar57) {
      fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar60;
    *(float *)(unaff_x19 + 0x99) = fVar48;
    *(float *)(lVar25 + 0x154) = fVar45;
    *(float *)(lVar25 + 0x158) = fVar57;
    *(float *)(lVar25 + 0x148) = fVar53 - fVar50;
    *(float *)(unaff_x19 + 0x98) = fVar53 - fVar50;
    *(float *)(lVar25 + 0x150) = in_stack_00000120 - fVar50;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000120 - fVar50;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar48;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar48 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar50 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fStack0000000000000150 * fVar50) / fStack0000000000000158;
      uVar51 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar48 <= fStack0000000000000158) {
        fVar48 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar48;
    }
    if ((float)uVar51 == 0.0) {
      fVar48 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar53) {
        fVar48 = fVar53;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar48;
    }
  }
  else {
    fVar48 = *(float *)(unaff_x19 + 0x99);
    lVar25 = lVar25 + lVar42 * unaff_x24;
    *(float *)(lVar25 + 0x154) = fVar48;
    fVar53 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar48 = fVar48 - fVar50;
    *(float *)(lVar25 + 0x148) = fVar48;
    *(float *)(lVar25 + 0x158) = fVar53;
    *(float *)(unaff_x19 + 0x98) = fVar48;
    fVar53 = fVar53 - fVar50;
    *(float *)(lVar25 + 0x150) = fVar53;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar53;
  }
  lVar25 = *unaff_x28;
  if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_035574b8;
  uVar54 = *unaff_x20;
  if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
  lVar42 = lVar42 + (long)(int)uVar54 * unaff_x24;
  *(undefined1 *)(lVar42 + 0x194) = 0;
  uVar31 = *(uint *)(unaff_x19 + 0x4f);
  iVar15 = (int)unaff_x24;
  uVar43 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar42 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a0;
    pfVar32 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar25 + 0x60);
      pfVar29 = (float *)(lVar25 + 100);
    }
    fVar50 = *pfVar32;
    fVar53 = *pfVar29;
    fVar48 = *(float *)(unaff_x19 + 0x6c);
    fVar45 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar50) - fVar53;
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
      uVar51 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      in_stack_000000f0 = fStack0000000000000150;
    }
    fVar47 = (float)uVar51;
    fVar44 = 0.0;
    if ((0.0 < fVar47) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar54 = *unaff_x20;
    fVar44 = (*(float *)(unaff_x19 + 0x97) - (fVar60 - fVar47)) + fVar44;
    if (fStack00000000000000c4 < fVar44) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar54;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar20 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar46 = *(float *)(unaff_x19 + 0x59);
        if (((fVar46 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar47)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar48 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar44) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar48 <= fVar46) {
            fVar48 = fVar46;
          }
          goto LAB_03554b48;
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar44 = *(float *)(unaff_x19 + 0x4a);
        uVar51 = (ulong)(uint)fVar44;
        if ((fVar44 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
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
          if (fVar48 <= fVar44) {
            fVar48 = fVar44;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar7;
        }
        lVar42 = *(long *)(lVar25 + 0xb8);
        lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = FUN_01a46ff8(lVar25);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar42 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) {
LAB_03554580:
          uVar20 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar11 = FUN_0358c15c();
LAB_035529e8:
          iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar11 - 1;
          uVar20 = CONCAT44(0x2026,iVar13);
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
        if ((uVar54 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          fVar48 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar48 - fVar60) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar51 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar25 = NEON_rev64(uVar51,4);
          unaff_x19[0x99] = lVar25;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          uVar20 = in_stack_000017c8;
        }
        goto LAB_03550bd0;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar25,0,0);
        if ((uVar19 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar20,*(undefined8 *)(*plVar41 + 0x530));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_035574b8;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      uVar20 = CONCAT44(3,uVar54);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar45 = ABS(fVar45) + fVar48 * (1.0 - fVar57) * in_stack_000000f0;
    fVar48 = 1.0;
    if ((uVar31 & 0x18) != 0) {
      fVar48 = DAT_00d38acc;
    }
    fVar60 = fVar48 * in_stack_000000f8._4_4_;
    if (fVar45 <= fVar60) {
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar25 + 0x18)) {
            *(undefined1 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
      }
      else if (in_stack_000017dc == 9) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 != 0) && (lVar42 = *(long *)(lVar25 + 0x38), lVar42 != 0)) {
          uVar54 = *unaff_x20;
          if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
          *(undefined1 *)(lVar42 + (long)(int)uVar54 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar54;
          lVar42 = *(long *)(lVar25 + 0x50);
          if (lVar42 != 0) {
            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar42 + 0x18)) {
              lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(int *)(lVar42 + 0x2c) = *(int *)(lVar42 + 0x2c) + 1;
              goto LAB_03552fcc;
            }
            goto LAB_035575f4;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar60,in_stack_000000e8 & 0xffffffff);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar54 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar54;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar54;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar25 = *(long *)(unaff_x19[0x6d] + 0x50), lVar25 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000068._4_4_ = 0;
            *(float *)(lVar25 + 0x60) = fVar50;
            *(float *)(lVar25 + 100) = fVar53;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
      }
      goto LAB_035574b8;
    }
    uVar51 = in_stack_000000e8 & 0xffffffff;
    if (((char)unaff_x19[0x5b] == '\0') || (uVar54 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar60 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar57 < fVar60) {
          fVar50 = fVar45 / (1.0 - fVar57);
          if (fVar57 <= 0.0) {
            fVar50 = fVar45;
          }
          fVar57 = fVar57 + (fVar45 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar50;
          goto LAB_035574e8;
        }
        fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar60 = *(float *)(unaff_x19 + 0x4a);
        if (fVar60 < fVar57) {
          fVar48 = (fVar57 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar48 <= DAT_00d38b84) {
            fVar48 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar57;
          fVar57 = fVar57 - fVar48;
LAB_03557524:
          fVar50 = fVar57 * 20.0 + 0.5;
          fVar48 = DAT_00d38e60;
          if (fVar50 != INFINITY) {
            fVar48 = (float)(int)fVar50 / 20.0;
          }
          if (fVar48 <= fVar60) {
            fVar48 = fVar60;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar48;
          return;
        }
      }
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)puVar7;
        }
        lVar42 = *(long *)(lVar25 + 0xb8);
        lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
          lVar25 = FUN_01a46ff8(lVar25);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar42 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 != 0) {
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008a0,
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
      lVar25 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar19 = FUN_036cee6c(lVar25,0,0);
      if ((uVar19 & 1) != 0) {
        plVar41 = (long *)unaff_x19[0x5d];
        uVar20 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar41 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar41 + 0x528))(plVar41,uVar20,*(undefined8 *)(*plVar41 + 0x530));
        lVar25 = unaff_x19[0x5d];
        if (lVar25 == 0) goto LAB_035574b8;
        *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar41 = (long *)unaff_x19[0x5d];
        if (plVar41 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
LAB_03552b00:
      uVar20 = CONCAT44(3,*unaff_x20);
    }
    else {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_000017a8 = FUN_0358c15c();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar57 = *(float *)(unaff_x19 + 0x9b);
        fVar60 = 0.0;
        if ((0.0 < fVar57) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar60 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar60 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar42 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar60 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar25 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar25 == 0) goto LAB_035574b8;
        fVar57 = *(float *)(unaff_x19 + 0x9b);
        fVar60 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_035574b8;
      uVar33 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar25 + 0x18) <= uVar33) ||
         (uVar5 = uVar33 - 1, *(uint *)(lVar25 + 0x18) <= uVar5)) goto LAB_035575f4;
      uVar51 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x97));
      fVar44 = (fVar60 + *(float *)(unaff_x19 + 0x97) + fVar57) -
               *(float *)(lVar25 + (long)(int)uVar33 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar25 + (long)(int)uVar5 * (long)iVar15 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar44 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar25 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          uVar20 = in_stack_000017c8;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar60 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar60 <= fVar57) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar51 = (ulong)(uint)fVar57;
              fVar60 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar57 <= fVar60) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar48 = (fVar57 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar48 <= DAT_00d38b84) {
                fVar48 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar57;
              fVar57 = fVar57 - fVar48;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar50 = fVar45;
            if (0.0 < fVar57) {
              fVar50 = fVar45 / (1.0 - fVar57);
            }
            fVar57 = fVar57 + (fVar45 - fVar48 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar50;
LAB_035574e8:
            if (fVar60 <= fVar57) {
              fVar57 = fVar60;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar57;
            return;
          }
LAB_03552d44:
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)puVar7;
          }
          iVar11 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xe78);
          if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) &&
             (((bStack0000000000000070 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
            goto LAB_035574b8;
            uVar33 = *unaff_x20 - 1;
            if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_035575f4;
            iStack0000000000000034 = iVar11;
            if (*(short *)(lVar25 + (long)(int)uVar33 * (long)iVar15 + 0x20) == 0xad) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar33;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              uVar20 = CONCAT44(0x2d,uVar33);
              goto LAB_03550bd0;
            }
          }
          if (fVar44 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            FUN_0358cbd4(fStack0000000000000058,uVar19,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            uVar51 = uVar19;
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar60 = fStack00000000000000c4;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar57 = *(float *)(unaff_x19 + 0x59);
              if ((fVar57 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar48 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar44) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar48 <= fVar57) {
                  fVar48 = fVar57;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar48;
                return;
              }
              fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar60 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar57 < fVar60) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar51 = (ulong)(uint)fVar57;
              fVar60 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar60 < fVar57) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557594;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_03552ef4_caseD_0;
            case 1:
              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar25 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar42 = *(long *)(lVar25 + 0xb8);
              lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                lVar25 = FUN_01a46ff8(lVar25);
              }
              piVar21 = (int *)thunk_FUN_01a59484(lVar42 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar25 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              if (*piVar21 == 0) {
                bStack0000000000000074 = 0;
                goto LAB_03554580;
              }
              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar25 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008a0,
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
              FUN_0358cbd4(fStack0000000000000058,uVar19,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                           in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              uVar51 = uVar19;
              break;
            case 6:
              lVar25 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar19 = FUN_036cee6c(lVar25,0,0);
              if ((uVar19 & 1) != 0) {
                plVar41 = (long *)unaff_x19[0x5d];
                uVar20 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar41 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar41 + 0x528))(plVar41,uVar20,*(undefined8 *)(*plVar41 + 0x530));
                lVar25 = unaff_x19[0x5d];
                if (lVar25 == 0) goto LAB_035574b8;
                *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar41 = (long *)unaff_x19[0x5d];
                if (plVar41 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
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
          uVar20 = in_stack_000017c8;
        }
      }
      else {
        bStack0000000000000074 = 0;
        *unaff_x20 = uVar5;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        uVar20 = CONCAT44(0x2d,uVar5);
      }
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar50 = (float)uVar51;
      fVar48 = 0.0;
      if ((0.0 < fVar50) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar51 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar50)) + fVar48)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar54;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar25,0,0);
        if ((uVar19 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 != (long *)0x0) {
            (**(code **)(*plVar41 + 0x528))(plVar41,uVar20,*(undefined8 *)(*plVar41 + 0x530));
            lVar25 = unaff_x19[0x5d];
            if (lVar25 != 0) {
              *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
    if ((((in_stack_000017dc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017dc - 10 < 2)) || (in_stack_000017dc == 0xa0)) {
LAB_03552b54:
      if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
         (in_stack_000017dc != 0x2060)) {
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x50), lVar42 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar42 + 0x2c) = *(int *)(lVar42 + 0x2c) + 1;
        *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
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
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x50), lVar25 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
    }
LAB_035530c4:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar48 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar53 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar25 = unaff_x19[0xca];
      fVar50 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar50 = 1.0;
      }
      if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_035574b8;
      fVar57 = *(float *)((long)unaff_x19 + 0x404);
      fVar44 = *(float *)(lVar25 + 0x2c);
      fVar45 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
      fVar60 = *_fStack00000000000000a8;
      fVar45 = fVar57 * (fVar48 / (float)iVar11) * fVar53 * fVar50 * fVar44 * fVar45;
      fVar48 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        uVar54 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar25 + 0x18) <= uVar54) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar50 = *(float *)(lVar25 + (long)(int)uVar54 * (long)iVar15 + 0x60);
        iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar57 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar25 = unaff_x19[0xca];
        fVar53 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar53 = 1.0;
        }
        if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_035574b8;
        fVar44 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = *(float *)(lVar25 + 0x2c);
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x50), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar60 = *(float *)(lVar25 + 0x60);
        fVar48 = *(float *)(lVar25 + 100);
        fVar45 = fVar44 * (fVar50 / (float)iVar11) * fVar57 * fVar53 * fVar47 * fVar45;
      }
      fVar57 = *(float *)(unaff_x19 + 0x9b);
      fVar50 = 0.0;
      fVar53 = 0.0;
      if ((0.0 < fVar57) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar53 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar47 = *(float *)(unaff_x19 + 0x97);
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar44 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar25 = *(long *)(unaff_x19[0xca] + 0x20), lVar25 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar25,0);
        fVar50 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar61 = *(float *)(unaff_x19 + 0x6c);
      fVar48 = (fStack000000000000009c - fVar60) - fVar48;
      bVar9 = true;
      if ((fVar61 <= fVar48) && (bVar9 = false, !NAN(fVar61))) {
        bVar9 = fVar61 == -1.0;
      }
      if (!bVar9) {
        fVar48 = fVar61;
      }
      fVar60 = 1.0;
      if ((uVar31 & 0x18) != 0) {
        fVar60 = DAT_00d38acc;
      }
      if (((fVar47 - (fVar46 - fVar57)) + fVar53 < fStack00000000000000c4) &&
         (ABS(fVar44) + fVar45 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar60 * fVar48)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar25 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar25 + 0x788),0x378);
        FUN_0209b210(lVar25 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar25 = *in_stack_00000170;
    if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar54 = *(uint *)(unaff_x19 + 0x95);
    lVar42 = lVar42 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar42 + 100) = uVar54;
    *(int *)(lVar42 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar25 + 0x18) <= uVar54) goto LAB_035575f4;
      *(int *)(lVar25 + (long)(int)uVar54 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar54) goto LAB_035575f4;
      if (*(int *)(lVar25 + (long)(int)uVar54 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar48 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar53 = *(float *)(unaff_x19 + 200);
      fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar48 = fStack0000000000000150 * fVar48 * fVar50;
      fVar50 = fVar48 * (float)(int)(fVar53 / fVar48);
      uVar51 = (ulong)(uint)fVar50;
      if (fVar50 <= fVar53) {
        fVar50 = fVar53 + fVar48;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar50;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar53 = 1.0;
        }
        else {
          fVar53 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar50 = *(float *)(unaff_x19 + 200);
        fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar48 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar50 = fVar50 + fVar48 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fStack0000000000000150 *
                                     (fStack000000000000012c + fVar53 * fVar45) +
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
      uVar51 = (ulong)(uint)fVar50;
      fVar50 = *(float *)(unaff_x19 + 200) - fVar50;
      *(float *)(unaff_x19 + 200) = fVar50;
      if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
        fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar51 = (ulong)(uint)fVar48;
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
      if ((in_stack_000017dc == 0x200b) || (uVar51 = (ulong)(uint)fVar48, unaff_w27 != 0)) {
        fVar48 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar51 = (ulong)(uint)fVar48;
        fVar50 = fVar50 + fVar48;
        goto LAB_03553678;
      }
    }
    lVar25 = *in_stack_00000170;
    if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_035574b8;
    uVar54 = *unaff_x20;
    uVar31 = (uint)*(undefined8 *)(lVar42 + 0x18);
    if (uVar31 <= uVar54) goto LAB_035575f4;
    *(float *)(lVar42 + (long)(int)uVar54 * unaff_x24 + 0x144) = fVar50;
    uVar33 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar54 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar51 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar54 != in_stack_00000088._4_4_) goto LAB_03553c8c;
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
          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar25 = *(long *)puVar7;
          }
          lVar42 = *(long *)(lVar25 + 0xb8);
          if (*(int *)(lVar42 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar42 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar42 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar25 + 0xb8) + 0x818,0);
            lVar25 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar25 + 0x7bc) = fVar48 + *(float *)(lVar25 + 0x7bc);
            *(float *)(lVar25 + 0x800) = fVar48 + *(float *)(lVar25 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar25 + 0x788),0x378);
            FUN_0209b210(lVar25 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar53 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar50 = *(float *)((long)unaff_x19 + 0x4cc) - fVar53;
      fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar48 = fVar50;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar48;
      fVar45 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar48;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar25 = *in_stack_00000170;
      if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x50), lVar42 == 0)) goto LAB_035574b8;
      uVar54 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar28 = unaff_x19[0x93];
      lVar18 = lVar42 + (long)(int)uVar54 * 0x5c;
      *(int *)(lVar18 + 0x34) = (int)lVar28;
      uVar31 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar28 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar31 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar31;
      *(uint *)(lVar18 + 0x38) = uVar31;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar11 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar31 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
      *(int *)(lVar18 + 0x40) = iVar11;
      *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar31) goto LAB_035575f4;
      uVar63 = *(undefined4 *)(lVar25 + (long)(int)uVar31 * (long)iVar15 + 0x11c);
      lVar42 = lVar42 + (long)(int)uVar54 * 0x5c;
      *(float *)(lVar42 + 0x70) = fVar50;
      *(undefined4 *)(lVar42 + 0x6c) = uVar63;
      lVar25 = *in_stack_00000170;
      if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x50), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar45 = fVar45 - fVar53;
      uVar51 = (ulong)(uint)fVar45;
      lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar42 + 0x74) =
           *(undefined4 *)
            (lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar42 + 0x78) = fVar45;
      lVar25 = *in_stack_00000170;
      if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar42 = lVar28 + lVar18 * 0x5c;
      *(float *)(lVar42 + 0x44) =
           *(float *)(lVar42 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
      *(float *)(lVar42 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar42 + 0x24) == 1) {
        *(int *)(lVar28 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_035574b8;
      lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar31 = (uint)*(undefined8 *)(lVar42 + 0x18);
      if (uVar31 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar42 + lVar40 * unaff_x24 + 0x194) == '\0') &&
         (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar31 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar28 = lVar28 + lVar18 * 0x5c;
      fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar48 = -fVar53;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar48 = fVar53;
      }
      *(float *)(lVar28 + 0x58) = *(float *)(lVar42 + lVar40 * unaff_x24 + 0x144) + fVar48;
      *(float *)(lVar28 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar28 + 0x54) = fVar50;
      *(float *)(lVar28 + 0x48) = in_stack_00000060 + (fVar45 - fVar50);
      *(float *)(lVar28 + 0x4c) = fVar45;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar25 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar11 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar11;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar25 != 0) && (*(long *)(lVar25 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar11) {
              FUN_0358ca18();
              lVar25 = unaff_x19[0x6d];
              if (lVar25 == 0) goto LAB_035574b8;
            }
            lVar25 = *(long *)(lVar25 + 0x38);
            if (lVar25 != 0) {
              if (*unaff_x20 < *(uint *)(lVar25 + 0x18)) {
                fVar48 = *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar50 = 0.0, in_stack_000017dc == 10)) {
                    fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 0;
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
                  uVar23 = 1;
                  fVar50 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar50);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar50;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar25 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar25 = *(long *)puVar7;
                }
                uVar20 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar48;
                uVar51 = NEON_rev64(uVar20,4);
                unaff_x19[0x99] = uVar51;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068._4_4_ = 1;
                bStack0000000000000070 = 1;
                uVar20 = in_stack_000017c8;
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
          uVar33 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar54 = *unaff_x20;
    if (uVar31 <= uVar54) goto LAB_035575f4;
    if (*(char *)(lVar42 + (long)(int)uVar54 * unaff_x24 + 0x194) != '\0') {
      lVar42 = lVar42 + (long)(int)uVar54 * unaff_x24;
      uVar51 = *(ulong *)(lVar42 + 0x11c);
      uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar19 ^ (uVar19 ^ uVar51) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar51 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar51));
      uVar19 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar51 = *(ulong *)(lVar42 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar19 ^ (uVar19 ^ uVar51) &
                    ~CONCAT44(-(uint)((float)(uVar51 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar51 < (float)uVar19));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
      lVar42 = *(long *)(lVar25 + 0x58);
      if (lVar42 == 0) goto LAB_035574b8;
      iVar11 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar42 + 0x18) < iVar11) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar25 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar25 = *in_stack_00000170;
        if (lVar25 == 0) goto LAB_035574b8;
      }
      lVar42 = *(long *)(lVar25 + 0x58);
      if (lVar42 == 0) goto LAB_035574b8;
      uVar31 = *(uint *)(unaff_x19 + 0x96);
      lVar28 = (long)(int)uVar31;
      uVar54 = *(uint *)(lVar42 + 0x18);
      if (uVar54 <= uVar31) goto LAB_035575f4;
      lVar18 = lVar42 + lVar28 * 0x14;
      fVar50 = *(float *)(lVar18 + 0x30);
      uVar51 = (ulong)(uint)fVar50;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar48 = fVar50;
      }
      *(float *)(lVar18 + 0x30) = fVar48;
      uVar33 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar33 == 0 && uVar31 == 0) {
        *(uint *)(lVar42 + (ulong)uVar31 * 0x14 + 0x20) = uVar33;
      }
      else {
        uVar5 = uVar33 - 1;
        if (0 < (int)uVar33) {
          lVar25 = *(long *)(lVar25 + 0x38);
          if (lVar25 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar25 + 0x18) <= uVar5) goto LAB_035575f4;
          if (uVar31 != *(uint *)(lVar25 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar31 - 1 < uVar54) {
              *(uint *)(lVar42 + 0x20 + (long)(int)(uVar31 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar42 + 0x20 + lVar28 * 0x14) = uVar33;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar33 == in_stack_00000088._4_4_) {
          *(float *)(lVar42 + lVar28 * 0x14 + 0x24) = in_stack_00000088._4_4_;
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
             (0x1d < in_stack_000017dc - 0xa961)) || (uVar19 = FUN_03597a54(0), (uVar19 & 1) != 0))
           && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
        goto LAB_03553f78;
        lVar25 = FUN_035978e8(0);
        if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_035574b8;
        uVar54 = FUN_0219c130(*(long *)(lVar25 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar54 & 1) == 0) {
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
        lVar25 = FUN_035978e8(0);
        if (((lVar25 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar42 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar25 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar42 + (long)(int)(*unaff_x20 + 1) * (long)iVar15 + 0x20);
        uVar19 = FUN_0219c130(*(long *)(lVar25 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar54 & 1) != 0) goto LAB_035541dc;
        if ((uVar19 & 1) == 0) goto LAB_03554270;
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
    uVar20 = in_stack_000017c8;
  }
LAB_03550bd0:
  do {
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar25 = unaff_x19[0x8f];
    if (lVar25 == 0) goto LAB_035574b8;
    if ((int)*(uint *)(lVar25 + 0x18) <= (int)in_stack_000017a8) {
LAB_0355459c:
      fVar48 = (float)uVar51;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar48 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar48 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar50 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar48 < fVar50) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar53 = (*(float *)((long)unaff_x19 + 0x23c) - fVar48) * 0.5;
          if (fVar53 <= DAT_00d38b84) {
            fVar53 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar48;
          fVar53 = (fVar48 + fVar53) * 20.0 + 0.5;
          fVar48 = DAT_00d38e60;
          if (fVar53 != INFINITY) {
            fVar48 = (float)(int)fVar53 / 20.0;
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
        uVar20 = FUN_0276793c(_fStack0000000000000038,0);
        uVar17 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar20 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar20,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar17,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar20,0);
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar43 == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar25 = *(long *)puVar8;
      }
      plVar41 = (long *)OVRPlugin_Media_TypeInfo;
      lVar25 = **(long **)(lVar25 + 0xb8);
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar15 = *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x60), lVar25 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar25 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar11 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      in_stack_000000e8 = *(ulong *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar25 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)in_stack_000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar11 < 0x401) {
        if (iVar11 == 0x100) {
          if (lVar25 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar25 + 0x18) < 2) goto LAB_035575f4;
          uVar20 = *(undefined8 *)(lVar25 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar42 = *(long *)(*in_stack_00000170 + 0x58), lVar42 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar42 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar48 = *(float *)(lVar42 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar48 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x2c);
          fVar48 = (0.0 - fVar48) - fStack0000000000000020;
        }
        else if (iVar11 == 0x200) {
          if (lVar25 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar25 + 0x24) +
                            (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000170 + 0x58), lVar25 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar25 = lVar25 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar48 = ((fStack0000000000000020 + *(float *)(lVar25 + 0x28) +
                      *(float *)(lVar25 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar48 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar11 != 0x400) goto LAB_03554c4c;
          if (lVar25 == 0) goto LAB_035574b8;
          if (*(int *)(lVar25 + 0x18) == 0) goto LAB_035575f4;
          uVar20 = *(undefined8 *)(lVar25 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar42 = *(long *)(*in_stack_00000170 + 0x58), lVar42 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar42 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar42 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x20);
          fVar48 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar48);
      }
      else if (iVar11 == 0x800) {
        if (lVar25 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_035575f4;
        fVar48 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar25 + 0x24) +
                              (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar48;
      }
      else {
        if (iVar11 == 0x1000) {
          if (lVar25 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar25 + 0x18) != 1) && (*(int *)(lVar25 + 0x18) != 0)) {
            uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar25 + 0x24) +
                              (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
            fVar48 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar11 == 0x2000) {
          if (lVar25 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_035575f4;
          fVar48 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar25 + 0x24) +
                                (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5 + fVar48);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar20 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar7);
      }
      uVar19 = FUN_036d35a8(uVar20,0,0);
      lVar25 = FUN_0357f060();
      if (lVar25 == 0) goto LAB_035574b8;
      FUN_036df824(lVar25,0);
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
      lVar25 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar25 = *(long *)puVar7;
      }
      puVar26 = *(undefined4 **)(lVar25 + 0xb8);
      uVar51 = (ulong)(uint)puVar26[1];
      uVar52 = (ulong)(uint)puVar26[2];
      uVar55 = (ulong)(uint)puVar26[3];
      FUN_035683a4(*puVar26,uVar51,uVar52,uVar55,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar25 = *in_stack_00000170;
      if (lVar25 == 0) goto LAB_035574b8;
      uVar12 = *unaff_x20;
      if ((int)uVar12 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar15 = 0;
        goto LAB_03556f00;
      }
      lVar25 = *(long *)(lVar25 + 0x38);
      fVar48 = ABS(fVar48);
      fVar53 = 1.0;
      if ((uVar19 & 1) == 0) {
        fVar53 = fVar48;
      }
      if (lVar25 == 0) goto LAB_035574b8;
      bVar10 = false;
      bVar6 = false;
      _fStack0000000000000128 = 0;
      bVar9 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar42 = 0x2e0;
      fVar57 = 0.0;
      fVar45 = 0.0;
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
      uVar54 = 0;
      goto LAB_03554e78;
    }
    if (*(uint *)(lVar25 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    in_stack_000017dc = *(uint *)(lVar25 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
    if (in_stack_000017dc == 0) goto LAB_0355459c;
    if (5 < in_stack_00000168._4_4_) {
      uVar20 = FUN_0276793c(&stack0x000017dc,0);
      uVar17 = FUN_0276793c(&stack0x000017a8,0);
      uVar20 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar20,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar17,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar20,0);
      uVar20 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017dc != 0x3c)) {
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar25 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar25 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar25 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar19 = FUN_03586568();
      if (((uVar19 & 1) != 0) &&
         (in_stack_000017a8 = in_stack_0000178c, uVar43 = in_stack_000017dc,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    uVar12 = *unaff_x20;
    if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar28 = (long)(int)uVar12;
    cVar24 = *(char *)(lVar25 + lVar28 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar42 = unaff_x19[0x24];
    if ((uint)uVar20 == uVar12) {
      in_stack_000017dc = (uint)((ulong)uVar20 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017dc == 0x2026) {
        *(long *)(lVar25 + lVar28 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar25 + 0x2c) = 0;
        *(long *)(lVar25 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        uVar12 = *unaff_x20;
        if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar25 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        uVar20 = CONCAT44(3,uVar12 + 1);
      }
      else if (in_stack_000017dc == 3) {
        if ((*unaff_x21 == 0) || (lVar18 = FUN_03568ac0(*unaff_x21,0), lVar18 == 0))
        goto LAB_035574b8;
        FUN_0219b634(lVar18,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
        *(ulong *)(lVar25 + lVar28 * unaff_x24 + 0x30) =
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
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar25 = lVar25 + (long)(int)uVar12 * (long)iVar15;
      *(undefined1 *)(lVar25 + 0x194) = 0;
      *(undefined2 *)(lVar25 + 0x20) = 0x200b;
      *(undefined4 *)(lVar25 + 100) = 0;
      *unaff_x20 = uVar12 + 1;
      uVar43 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) {
      fStack0000000000000158 = 1.0;
      if (iVar11 == 0) goto LAB_03550fec;
LAB_03550c00:
      if (iVar11 != 1) {
        lVar25 = *in_stack_00000170;
        fVar47 = 0.0;
        fVar48 = 0.0;
        if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
          fVar48 = fStack0000000000000150;
        }
        if (lVar25 == 0) goto LAB_035574b8;
        fVar45 = 0.0;
        in_stack_00000120 = 0.0;
        in_stack_000000f0 = fStack0000000000000150;
        goto LAB_035514cc;
      }
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar25 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar25 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar25,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar25 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      uVar43 = in_stack_000017dc;
      if (lVar25 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)puVar7;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar48 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar53 = (float)FUN_03776960(&stack0x00001720,0);
        fVar50 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar50 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar50 = (fVar48 / (float)iVar11) * fVar53 * fVar50;
        iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar48 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar53 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          in_stack_00000120 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000120 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar57 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar25 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar25 + 0x20),0);
          fVar60 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar25 + 0x20) == 0) goto LAB_035574b8;
          fVar46 = *(float *)(lVar25 + 0x2c);
          fVar44 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar45 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar61 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar56 = *(float *)((long)unaff_x19 + 0x404);
          fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar47 = fVar50 * fVar61 * fVar56 * fVar47;
          in_stack_00000120 = (fVar48 / (float)iVar11) * fVar53 * in_stack_00000120;
          in_stack_000000f0 = in_stack_00000120 * (fVar57 / fVar60) * fVar46 * fVar44;
          in_stack_00000120 = in_stack_00000120 / in_stack_000000f0;
          fVar45 = in_stack_00000120 * fVar45;
          fVar48 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          in_stack_00000120 = in_stack_00000120 * fVar48;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar53 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar25 + 0x20) == 0) goto LAB_035574b8;
          fVar60 = *(float *)(lVar25 + 0x2c);
          fVar57 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar57 = 1.0;
          }
          fVar44 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fVar45 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar61 = *(float *)((long)unaff_x19 + 0x404);
          fVar47 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fVar47 = fVar50 * fVar46 * fVar61 * fVar47;
          in_stack_000000f0 = (fVar48 / (float)iVar11) * fVar53 * fVar57 * fVar60 * fVar44;
          in_stack_00000120 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        *in_stack_000000e0 = lVar25;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar25);
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar25 + 0x2c) = 1;
        *(float *)(lVar25 + 0x160) = in_stack_000000f0;
        *(long *)(lVar25 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar25 = *in_stack_00000170;
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fStack000000000000015c = 0.0;
        *(int *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar42;
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
          uVar19 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar19 & 1) != 0) {
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
        uVar19 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar19 & 1) != 0) {
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
      uVar19 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar19 & 1) != 0) {
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
    if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar43 = in_stack_000017dc;
  } while (*in_stack_000000e0 == 0);
  if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
  goto LAB_035574b8;
  uVar16 = *unaff_x20;
  uVar12 = *(uint *)(lVar25 + 0x18);
  if (uVar12 <= uVar16) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar25 + (long)(int)uVar16 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar48 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar25 = unaff_x19[0x20];
  }
  else {
    lVar42 = unaff_x19[0x8f];
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar42 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar12 <= uVar16 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar48 = *(float *)(lVar25 + (long)(int)(uVar16 - 1) * (long)iVar15 + 0x60);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar25 = *unaff_x21;
  }
  if (lVar25 == 0) goto LAB_035574b8;
  fVar53 = (float)FUN_03776960(lVar25 + 0x50,0);
  fVar50 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar50 = 1.0;
  }
  in_stack_00000120 = 0.0;
  fVar45 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000120 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar25 = unaff_x19[0xc9];
  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_035574b8;
  fVar57 = *(float *)((long)unaff_x19 + 0x404);
  fVar60 = *(float *)(lVar25 + 0x2c);
  in_stack_000000f0 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar44 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar46 = *(float *)((long)unaff_x19 + 0x404);
  fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar25 = unaff_x19[0x6d];
  if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar42 = lVar42 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar42 + 0x2c) = 0;
  fVar50 = ((fStack0000000000000158 * fVar48) / (float)iVar11) * fVar53 * fVar50;
  in_stack_000000f0 = fVar50 * fVar57 * fVar60 * in_stack_000000f0;
  *(float *)(lVar42 + 0x160) = in_stack_000000f0;
  uVar12 = *(uint *)(unaff_x19 + 0x24);
  fVar47 = fVar50 * fVar44 * fVar46 * fVar47;
  if (uVar12 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar42 = unaff_x19[0xe1];
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar42 = *(long *)(lVar42 + (long)(int)uVar12 * 8 + 0x20);
    if (lVar42 == 0) goto LAB_035574b8;
    fStack000000000000015c = *(float *)(lVar42 + 0x10c);
  }
LAB_035514b0:
  fVar48 = 0.0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    fVar48 = in_stack_000000f0;
  }
LAB_035514cc:
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar25 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar25 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar25 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar25 = lVar25 + (long)(int)uVar12 * unaff_x24;
  *(undefined4 *)(lVar25 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar25 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar25 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar25,0);
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
    _fStack0000000000000128 = (ulong)(uint)fVar45;
    fVar53 = 0.0;
    fVar50 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar16 = *unaff_x20;
    uVar12 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar16 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar16 + 1) goto LAB_035575f4;
      lVar25 = *(long *)(lVar25 + (long)(int)(uVar16 + 1) * (long)iVar15 + 0x30);
      if ((((lVar25 == 0) || (*unaff_x21 == 0)) ||
          (lVar42 = *(long *)(*unaff_x21 + 0x128), lVar42 == 0)) ||
         (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar12 | *(int *)(lVar25 + 0x28) << 0x10;
      uVar19 = FUN_0219f8b8(lVar42,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar63 = 0;
      if ((uVar19 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar45;
        fVar53 = 0.0;
        fVar50 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar63 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar50 = *(float *)(in_stack_000016f8 + 0x14);
        fVar53 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar45);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar16 = *unaff_x20;
    }
    else {
      uVar63 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar45;
      fVar53 = 0.0;
      fVar50 = 0.0;
    }
    if (0 < (int)uVar16) {
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x38), lVar25 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar16 - 1) goto LAB_035575f4;
      lVar25 = *(long *)(lVar25 + (ulong)(uVar16 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar25 == 0) || (*unaff_x21 == 0)) ||
         ((lVar42 = *(long *)(*unaff_x21 + 0x128), lVar42 == 0 ||
          (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar25 + 0x28) | uVar12 << 0x10;
      uVar19 = FUN_0219f8b8(lVar42,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar19 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar49 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar50 = (float)FUN_03571cb4(fVar50,fVar53,_fStack0000000000000128 >> 0x20,uVar63,
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
    fVar57 = *(float *)(unaff_x19 + 200);
    fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar57 = fVar57 - fVar48 * fVar45 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar57;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar57 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar45 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar45 != 0.0) {
    fVar57 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar60 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar45 * 0.5 - fVar48 * (fVar57 * 0.5 + fVar60));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar25 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar25,0,0);
    fVar57 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar25 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar25 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      fVar57 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar25 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar25 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_0369e060(lVar25,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar60 = *(float *)(*unaff_x21 + 0x1b0);
        fVar57 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        fVar57 = fVar57 * fVar45 * fVar60 * 0.25;
        if (fVar45 < fStack000000000000015c + fVar57) {
          fStack000000000000015c = fVar45 - fVar57;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar25 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar25,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar25 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar25 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar25 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar25 == 0) goto LAB_035574b8;
        uVar19 = FUN_03699d3c(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar25 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar25 != 0) {
            fVar45 = (float)FUN_0369e060(lVar25,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar60 = *(float *)(*unaff_x21 + 0x1a8);
              fVar57 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc)
                                           ,0);
              fVar57 = fVar57 * fVar45 * fVar60 * 0.25;
              if (fVar45 < fStack000000000000015c + fVar57) {
                fStack000000000000015c = fVar45 - fVar57;
              }
              goto FUN_03551b84;
            }
          }
          goto LAB_035574b8;
        }
      }
    }
    fVar57 = 0.0;
  }
FUN_03551b84:
  fVar45 = *(float *)(unaff_x19 + 200);
  fVar60 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar45 = fVar45 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar48 * (fVar50 + ((fVar60 - fStack000000000000015c) - fVar57));
  fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
  unaff_s15 = *(float *)((long)unaff_x19 + 0x61c) +
              ((fVar47 + fVar48 * (fVar53 + fStack000000000000015c + fVar50)) -
              *(float *)(unaff_x19 + 0x9b));
  fVar50 = (float)FUN_03776c9c(&stack0x00001790,0);
  unaff_s14 = unaff_s15 - fVar48 * (fStack000000000000015c + fStack000000000000015c + fVar50);
  fVar50 = (float)FUN_03776c94(&stack0x00001790,0);
  param_5 = fVar45 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                     fVar48 * (fVar57 + fVar57 +
                              fStack000000000000015c + fStack000000000000015c + fVar50);
  in_stack_000000e8 = (ulong)(uint)fVar57;
  fStack0000000000000104 = fVar45;
  unaff_s11 = param_5;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar60 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar44 = fVar60 * fVar48 * (fVar57 + fStack000000000000015c + fVar50);
    fVar50 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar53 = (float)FUN_03776c9c(&stack0x00001790,0);
    unaff_s15 = unaff_s15 + 0.0;
    unaff_s14 = unaff_s14 + 0.0;
    fVar60 = fVar60 * fVar48 * (((fVar50 - fVar53) - fStack000000000000015c) - fVar57);
    fVar50 = fVar45 + fVar44;
    fVar53 = param_5 + fVar44;
    fVar57 = (fVar44 - fVar60) * 0.5;
    fVar45 = (fVar45 + fVar60) - fVar57;
    param_5 = (param_5 + fVar60) - fVar57;
    fStack0000000000000104 = fVar50 - fVar57;
    unaff_s11 = fVar53 - fVar57;
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
    fVar44 = (unaff_s11 + fVar45) * 0.5;
    fVar46 = (unaff_s14 + unaff_s15) * 0.5;
    fVar53 = unaff_s15 - fVar46;
    fStack0000000000000100 = 0.0;
    fVar48 = fVar53;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar44,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar44 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar57 = unaff_s14 - fVar46;
    in_stack_00000110._4_4_ = 0.0;
    fVar50 = fVar57;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar44,_fStack0000000000000078,0);
    fVar45 = fVar44 + fVar45;
    in_stack_00000110._4_4_ = in_stack_00000110._4_4_ + 0.0;
    unaff_s14 = fVar46 + fVar50;
    fVar60 = 0.0;
    fVar50 = (float)FUN_036bdd2c(unaff_s11 - fVar44,_fStack0000000000000078,0);
    unaff_s11 = fVar44 + fVar50;
    unaff_s15 = fVar46 + fVar53;
    unaff_s8 = fVar60 + 0.0;
    param_2 = 0.0;
    param_5 = (float)FUN_036bdd2c(param_5 - fVar44,_fStack0000000000000078,0);
    param_5 = fVar44 + param_5;
    param_2 = param_2 + 0.0;
    param_3 = fVar46 + fVar57;
    in_stack_00000108 = fVar46 + fVar48;
  }
  _fStack0000000000000118 = CONCAT44(fVar47,fVar45);
  param_1 = *in_stack_00000170;
  unaff_x28 = in_stack_00000170;
  in_stack_000017c8 = uVar20;
  goto code_r0x03551d8c;
LAB_03554e78:
  uVar12 = uVar16 - 1;
  if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x50), lVar28 == 0))
  goto LAB_035574b8;
  lVar40 = (long)(int)uVar12;
  lVar18 = lVar25 + lVar40 * 0x178;
  uVar31 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar28 + 0x18) <= uVar31) goto LAB_035575f4;
  lVar38 = (long)(int)uVar31;
  lVar28 = lVar28 + lVar38 * 0x5c;
  lVar34 = *(long *)(lVar18 + 0x38);
  uVar3 = *(ushort *)(lVar18 + 0x20);
  uVar33 = *(uint *)(lVar28 + 0x3c);
  uVar43 = *(uint *)(lVar28 + 0x68);
  iVar2 = *(int *)(lVar28 + 0x20);
  iVar13 = *(int *)(lVar28 + 0x28);
  iVar14 = *(int *)(lVar28 + 0x2c);
  uVar5 = *(uint *)(lVar28 + 0x40);
  lVar18 = (long)(int)uVar5;
  fVar47 = *(float *)(lVar28 + 0x4c);
  fVar61 = *(float *)(lVar28 + 0x54);
  fVar60 = *(float *)(lVar28 + 0x58);
  fVar59 = *(float *)(lVar28 + 0x5c);
  fVar56 = *(float *)(lVar28 + 0x60);
  fVar58 = *(float *)(lVar28 + 0x6c);
  fVar62 = *(float *)(lVar28 + 0x70);
  fVar44 = *(float *)(lVar28 + 0x74);
  fVar46 = *(float *)(lVar28 + 0x78);
  uVar37 = (uint)uVar3;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar56 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar60;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar56 + fVar59 * 0.5) - fVar60 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar59 + fVar56) - fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar59 + fVar56;
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
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar25 + (long)(int)uVar33 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b8cc4(uVar4,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar31 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 <= fVar59) && (!bVar1 && uVar43 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar56;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar59 + fVar56;
        }
        goto LAB_03555088;
      }
      if (((uVar16 == 1) || (uVar31 != uVar54)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar56;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar59 + fVar56;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar37,0);
        in_stack_000000e8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar56 = -fVar60;
        if (cVar24 != '\0') {
          fVar56 = fVar60;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_035575f4;
        iVar14 = (int)*(char *)(lVar25 + (long)(int)uVar33 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar60 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar60 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar37 == 9) {
LAB_03556e74:
          fVar60 = 1.0 - fVar60;
        }
        else {
          if (uVar37 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar37,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_03556e74;
          }
          iVar14 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar13;
        }
        fVar60 = ((fVar59 + fVar56) * fVar60) / (float)iVar14;
        if (cVar24 == '\0') {
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
  else if (uVar43 == 0x20) {
    fVar60 = fVar58 + fVar44;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar43 <= uVar12) goto LAB_035575f4;
  lVar28 = lVar25 + lVar40 * 0x178;
  fVar59 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar60 = SUB84(in_stack_000000b8,0) + (float)in_stack_000000e8;
  fVar56 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)(in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar28 + 0x194) == '\0') goto LAB_03555938;
  iVar13 = *(int *)(lVar25 + lVar40 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0355574c;
  fVar57 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar31,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar25 + lVar40 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar57 = 1.0;
    break;
  case 1:
    fVar46 = *(float *)(lVar25 + lVar40 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar25 + lVar40 * 0x178;
      fVar44 = (in_stack_000000f8._4_4_ + fVar46) - *(float *)(in_stack_00000080 + 0x230);
      fVar46 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar27 = lVar25 + lVar40 * 0x178;
    fVar44 = fVar44 - fVar58;
    *(float *)(lVar27 + 0x84) = fVar57 + (fVar46 - fVar58) / fVar44;
    *(float *)(lVar27 + 0xac) = fVar57 + (*(float *)(lVar27 + 0x98) - fVar58) / fVar44;
    *(float *)(lVar27 + 0xd4) = fVar57 + (*(float *)(lVar27 + 0xc0) - fVar58) / fVar44;
    fVar57 = fVar57 + (*(float *)(lVar27 + 0xe8) - fVar58) / fVar44;
    break;
  case 2:
    lVar27 = lVar25 + lVar40 * 0x178;
    fVar46 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar44 = (in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar27 + 0x84) = fVar57 + fVar44 / fVar46;
    *(float *)(lVar27 + 0xac) =
         fVar57 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar57 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar57 = fVar57 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar25 + lVar40 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar25 + lVar40 * 0x178;
      fVar46 = fVar46 - fVar62;
      fVar44 = fVar57 + (*(float *)(lVar27 + 0x74) - fVar62) / fVar46;
      fVar46 = fVar57 + (*(float *)(lVar27 + 0x9c) - fVar62) / fVar46;
      *(float *)(lVar27 + 0x88) = fVar44;
      *(float *)(lVar27 + 0xb0) = fVar46;
      *(float *)(lVar27 + 0xd8) = fVar44;
      *(float *)(lVar27 + 0x100) = fVar46;
      break;
    case 2:
      lVar27 = lVar25 + lVar40 * 0x178;
      fVar44 = fVar57 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar44;
      fVar46 = *(float *)(unaff_x19 + 0x9c);
      fVar58 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar44;
      fVar44 = fVar57 + (*(float *)(lVar27 + 0x9c) - fVar46) / (fVar58 - fVar46);
      *(float *)(lVar27 + 0xb0) = fVar44;
      *(float *)(lVar27 + 0x100) = fVar44;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar43 = (uint)*(undefined8 *)(lVar25 + 0x18);
    }
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar27 = lVar25 + lVar40 * 0x178;
    fVar44 = *(float *)(lVar27 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar44) * 0.5;
    fVar58 = fVar57 + *(float *)(lVar27 + 0x88) * fVar44 + fVar46;
    fVar57 = fVar57 + fVar46 + *(float *)(lVar27 + 0xb0) * fVar44;
    *(float *)(lVar27 + 0x84) = fVar58;
    *(float *)(lVar27 + 0xac) = fVar58;
    *(float *)(lVar27 + 0xd4) = fVar57;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar25 + lVar40 * 0x178 + 0xfc) = fVar57;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar27 = lVar25 + lVar40 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar43) {
      lVar27 = lVar25 + lVar40 * 0x178;
      fVar47 = fVar47 - fVar61;
      fVar57 = (*(float *)(lVar27 + 0x74) - fVar61) / fVar47;
      fVar47 = (*(float *)(lVar27 + 0x9c) - fVar61) / fVar47;
      *(float *)(lVar27 + 0x88) = fVar57;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar27 = lVar25 + lVar40 * 0x178;
    fVar57 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar57;
    fVar47 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar27 + 0xb0) = fVar47;
    *(float *)(lVar27 + 0xd8) = fVar47;
    *(float *)(lVar27 + 0x100) = fVar57;
    break;
  case 3:
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar27 = lVar25 + lVar40 * 0x178;
    fVar47 = *(float *)(lVar27 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar47) * 0.5;
    fVar57 = *(float *)(lVar27 + 0x84) / fVar47 + fVar44;
    fVar44 = fVar44 + *(float *)(lVar27 + 0xd4) / fVar47;
    *(float *)(lVar27 + 0x88) = fVar57;
    *(float *)(lVar27 + 0xb0) = fVar44;
    *(float *)(lVar27 + 0x100) = fVar57;
    *(float *)(lVar27 + 0xd8) = fVar44;
  }
  if (uVar43 <= uVar12) goto LAB_035575f4;
  lVar27 = lVar25 + lVar40 * 0x178;
  fVar57 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar25 + lVar40 * 0x178 + 400) & 1) != 0)) {
    fVar57 = -fVar57;
  }
  fVar44 = fVar48;
  if (((iVar11 == 2) || (fVar44 = fVar53, iVar11 == 1)) || (fVar44 = fVar48 / fVar50, iVar11 == 0))
  {
    fVar57 = fVar44 * fVar57;
  }
  lVar27 = lVar25 + lVar40 * 0x178;
  fVar47 = *(float *)(lVar27 + 0x88);
  fVar46 = *(float *)(lVar27 + 0x84);
  fVar44 = -2.1474836e+09;
  if (fVar46 != INFINITY) {
    fVar44 = (float)(int)fVar46;
  }
  fVar58 = *(float *)(lVar27 + 0xd4);
  fVar62 = *(float *)(lVar27 + 0xd8);
  fVar61 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar61 = (float)(int)fVar47;
  }
  uVar49 = FUN_03591d3c(fVar46 - fVar44,fVar47 - fVar61);
  *(undefined4 *)(lVar27 + 0x84) = uVar49;
  if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar62 = fVar62 - fVar61;
  *(float *)(lVar27 + 0x88) = fVar57;
  uVar49 = FUN_03591d3c(fVar46 - fVar44,fVar62);
  *(undefined4 *)(lVar25 + lVar40 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar58 = fVar58 - fVar44;
  *(float *)(lVar25 + lVar40 * 0x178 + 0xb0) = fVar57;
  fVar44 = (float)FUN_03591d3c(fVar58,fVar62);
  *(float *)(lVar27 + 0xd4) = fVar44;
  if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_035575f4;
  *(float *)(lVar27 + 0xd8) = fVar57;
  uVar49 = FUN_03591d3c(fVar58,fVar47 - fVar61);
  *(undefined4 *)(lVar25 + lVar40 * 0x178 + 0xfc) = uVar49;
  uVar43 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar43 <= uVar12) goto LAB_035575f4;
  *(float *)(lVar25 + lVar40 * 0x178 + 0x100) = fVar57;
LAB_0355574c:
  if (((int)uVar12 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar31 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar43 <= uVar12) goto LAB_035575f4;
      lVar28 = lVar25 + lVar40 * 0x178;
      *(ulong *)(lVar28 + 0x70) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0x70));
      *(float *)(lVar28 + 0x78) = fVar56 + *(float *)(lVar28 + 0x78);
      *(ulong *)(lVar28 + 0x98) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0x98));
      *(float *)(lVar28 + 0xa0) = fVar56 + *(float *)(lVar28 + 0xa0);
      *(ulong *)(lVar28 + 0xc0) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0xc0));
      *(float *)(lVar28 + 200) = fVar56 + *(float *)(lVar28 + 200);
      *(ulong *)(lVar28 + 0xe8) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar28 + 0xe8));
      *(float *)(lVar28 + 0xf0) = fVar56 + *(float *)(lVar28 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar31 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar12 < uVar43) {
        if (*(uint *)(lVar25 + lVar40 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar28 = lVar25 + lVar40 * 0x178;
          *(ulong *)(lVar28 + 0x70) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar28 + 0x70));
          *(float *)(lVar28 + 0x78) = fVar56 + *(float *)(lVar28 + 0x78);
          *(ulong *)(lVar28 + 0x98) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar28 + 0x98));
          *(float *)(lVar28 + 0xa0) = fVar56 + *(float *)(lVar28 + 0xa0);
          *(ulong *)(lVar28 + 0xc0) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar28 + 0xc0));
          *(float *)(lVar28 + 200) = fVar56 + *(float *)(lVar28 + 200);
          *(ulong *)(lVar28 + 0xe8) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar28 + 0xe8));
          *(float *)(lVar28 + 0xf0) = fVar56 + *(float *)(lVar28 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar43 <= uVar12) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar43 = *(uint *)(lVar25 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar27 = lVar25 + lVar40 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar49;
  if (uVar43 <= uVar12) goto LAB_035575f4;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar27 = lVar25 + lVar40 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar49;
  *(undefined1 *)(lVar28 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar13 == 0) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar30)();
  }
  else if (iVar13 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar28 = lVar28 + lVar40 * 0x178;
  uVar20 = *(undefined8 *)(lVar28 + 0x11c);
  *(undefined8 *)(lVar28 + 0x11c) =
       CONCAT44(fVar60 + (float)((ulong)uVar20 >> 0x20),fVar59 + (float)uVar20);
  *(float *)(lVar28 + 0x124) = fVar56 + *(float *)(lVar28 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar28 = lVar28 + lVar40 * 0x178;
  *(ulong *)(lVar28 + 0x110) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0x110) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar28 + 0x110));
  *(float *)(lVar28 + 0x118) = fVar56 + *(float *)(lVar28 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar28 = lVar28 + lVar40 * 0x178;
  *(ulong *)(lVar28 + 0x128) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar28 + 0x128) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar28 + 0x128));
  *(float *)(lVar28 + 0x130) = fVar56 + *(float *)(lVar28 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar28 = lVar28 + lVar40 * 0x178;
  *(float *)(lVar28 + 0x134) = fVar59 + *(float *)(lVar28 + 0x134);
  *(ulong *)(lVar28 + 0x138) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar28 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar28 + 0x138));
  lVar28 = *in_stack_00000170;
  if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar43 = *(uint *)(lVar27 + 0x18);
  if (uVar43 <= uVar12) goto LAB_035575f4;
  lVar35 = lVar27 + lVar40 * 0x178;
  uVar51 = CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar35 + 0x140));
  fVar44 = fVar60 + *(float *)(lVar35 + 0x150);
  uVar52 = (ulong)(uint)fVar44;
  uVar55 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar44;
  *(ulong *)(lVar35 + 0x140) = uVar51;
  *(ulong *)(lVar35 + 0x148) = uVar55;
  if (uVar31 == uVar54) {
    uVar54 = *unaff_x20 - 1;
    if (uVar12 == uVar54) goto LAB_03555b44;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar35 = (long)(int)uVar54;
    lVar36 = lVar28 + lVar35 * 0x5c;
    uVar55 = (ulong)(uint)*(float *)(lVar36 + 0x58);
    fVar44 = fVar60 + *(float *)(lVar36 + 0x54);
    uVar51 = (ulong)(uint)fVar44;
    fVar47 = fVar59 + *(float *)(lVar36 + 0x58);
    uVar52 = (ulong)(uint)fVar47;
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar44;
    *(float *)(lVar36 + 0x58) = fVar47;
    if (uVar43 <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
    uVar49 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar28 = lVar28 + lVar35 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar44;
    *(undefined4 *)(lVar28 + 0x6c) = uVar49;
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x50), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar27 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar27 = lVar27 + lVar35 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar54 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar54 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar12 == uVar54) {
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_035575f4;
      lVar35 = lVar27 + lVar38 * 0x5c;
      uVar55 = (ulong)(uint)*(float *)(lVar35 + 0x58);
      uVar51 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar35 + 0x4c));
      fVar44 = fVar60 + *(float *)(lVar35 + 0x54);
      fVar59 = fVar59 + *(float *)(lVar35 + 0x58);
      uVar52 = (ulong)(uint)fVar59;
      *(ulong *)(lVar35 + 0x4c) = uVar51;
      *(float *)(lVar35 + 0x54) = fVar44;
      *(float *)(lVar35 + 0x58) = fVar59;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar35 + 0x34)) goto LAB_035575f4;
      uVar49 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar38 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar44;
      *(undefined4 *)(lVar27 + 0x6c) = uVar49;
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_035575f4;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar27 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar27 = lVar27 + lVar38 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar54 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar37,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
    if (bVar6) {
      if (((uVar16 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*unaff_x20 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
        if (*(uint *)(lVar25 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar25 + lVar42 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar4,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar16) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar25 + lVar42 + -0x148);
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
      uVar19 = FUN_026b81f8(uVar37,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b63d8(uVar37,0);
        if (((uVar37 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar12 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b82c4(uVar37,0);
      iVar13 = (int)fStack0000000000000128;
      if ((uVar19 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar13 = uVar16 - 2;
    }
    lVar28 = *in_stack_00000170;
    if (lVar28 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar28 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar28 + 0x24);
    iVar14 = *(int *)(lVar27 + 0x18);
    if (iVar14 < (int)(uVar54 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar28 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar28 = *in_stack_00000170;
      if (lVar28 == 0) goto LAB_035574b8;
    }
    lVar28 = *(long *)(lVar28 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)uVar54 * 0x18;
    *(long **)(lVar28 + 0x20) = unaff_x19;
    *(float *)(lVar28 + 0x28) = fStack0000000000000158;
    *(int *)(lVar28 + 0x2c) = iVar13;
    *(int *)(lVar28 + 0x30) = (iVar13 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar28 = unaff_x19[0x6d];
    if (lVar28 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar28 + 0x50);
    *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_035575f4;
    lVar27 = lVar27 + lVar38 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      fStack0000000000000158 = (float)uVar12;
    }
    if (uVar12 == *unaff_x20 - 1) {
      lVar28 = *in_stack_00000170;
      if (lVar28 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar28 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar28 + 0x24);
      iVar13 = *(int *)(lVar27 + 0x18);
      if (iVar13 < (int)(uVar54 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar28 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar28 = *in_stack_00000170;
        if (lVar28 == 0) goto LAB_035574b8;
      }
      lVar28 = *(long *)(lVar28 + 0x40);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)uVar54 * 0x18;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      *(float *)(lVar28 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar28 + 0x2c) = uVar12;
      *(uint *)(lVar28 + 0x30) = uVar16 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar28 = unaff_x19[0x6d];
      if (lVar28 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar28 + 0x50);
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_035575f4;
      lVar27 = lVar27 + lVar38 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  uVar54 = *(uint *)(lVar28 + 0x18);
  if (uVar54 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar28 + lVar40 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar54 <= uVar16 - 2) goto LAB_035575f4;
      lVar38 = *unaff_x19;
      uVar54 = *(uint *)(lVar28 + lVar42 + -0x330);
      uVar49 = *(undefined4 *)(lVar28 + lVar42 + -0x2f8);
LAB_035562ec:
      pcVar30 = *(code **)(lVar38 + 0x8d8);
LAB_035562f4:
      uVar55 = (ulong)uVar54;
      uVar51 = (ulong)(uint)_bStack0000000000000070;
      uVar52 = (ulong)_bStack0000000000000074;
      (*pcVar30)(fStack0000000000000078,uVar51,uVar52,uVar55,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar49);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar28 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar45 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar28 = lVar28 + lVar40 * 0x178;
    iVar13 = *(int *)(lVar28 + 0x68);
    *(int *)(lVar28 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b63d8(uVar37,0);
    if ((uVar37 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar38 = *(long *)(lVar28 + 0x38), lVar38 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar38 + 0x18) <= uVar12) goto LAB_035575f4;
      fVar44 = *(float *)(lVar38 + lVar40 * 0x178 + 0x160);
      if (fVar45 <= fVar44) {
        fVar45 = fVar44;
      }
      if (fStack0000000000000100 <= ABS(fVar57)) {
        fStack0000000000000100 = ABS(fVar57);
      }
      if (iVar13 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *in_stack_00000170;
          if (lVar28 == 0) goto LAB_035574b8;
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar38 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar38 + 0x15a8);
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar47 = *(float *)(lVar28 + lVar40 * 0x178 + 0x14c);
      fVar44 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar47 = fVar47 + fVar45 * fVar44;
      if (fVar47 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar47;
      }
      uVar51 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar13;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar37,0);
        if ((uVar19 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar28 = lVar28 + lVar40 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar28 + 0x160);
      fStack0000000000000078 = *(float *)(lVar28 + 0x11c);
      uVar52 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar45 != 0.0;
      fVar44 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar44 = fVar45;
      }
      fVar45 = fVar44;
      uVar63 = *(undefined4 *)(lVar28 + 0x168);
      _bStack0000000000000074 = 0;
      fVar44 = fVar57;
      if (bVar10) {
        fVar44 = fStack0000000000000100;
      }
      uVar51 = (ulong)(uint)fVar44;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar44;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        if (uVar12 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar40 * 0x178;
          lVar38 = *unaff_x19;
          uVar54 = *(uint *)(lVar28 + 0x128);
          uVar49 = *(undefined4 *)(lVar28 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar12 == uVar33) || ((int)uVar5 <= (int)uVar12)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        lVar38 = lVar40;
        uVar54 = uVar12;
        if (uVar37 == 0x200b || (uVar19 & 1) != 0) {
          lVar38 = lVar18;
          uVar54 = uVar5;
        }
        if (uVar54 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar38 * 0x178;
          uVar54 = *(uint *)(lVar28 + 0x128);
          uVar49 = *(undefined4 *)(lVar28 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        uVar54 = *(uint *)(lVar28 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
      uVar19 = FUN_03567ad8(uVar63,*(undefined4 *)(lVar28 + lVar42),0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0)) {
          if (uVar12 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar40 * 0x178;
            uVar55 = (ulong)*(uint *)(lVar28 + 0x128);
            uVar52 = (ulong)_bStack0000000000000074;
            uVar51 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar51,uVar52,uVar55,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar28 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)puVar7;
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
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
  if (lVar34 == 0) goto LAB_035574b8;
  uVar54 = *(uint *)(lVar28 + lVar40 * 0x178 + 400);
  fVar44 = (float)FUN_03776a30(lVar34 + 0x50,0);
  if ((uVar54 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
      uVar54 = *(uint *)(lVar28 + lVar42 + -0x330);
      fVar60 = *(float *)(lVar28 + lVar42 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar55 = (ulong)uVar54;
      uVar51 = (ulong)(uint)fStack000000000000009c;
      uVar52 = (ulong)(uint)fStack0000000000000098;
      (*pcVar30)(fStack00000000000000a0,uVar51,uVar52,uVar55,
                 fStack00000000000000a8 * fVar44 + fVar60,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar38 = *(long *)(lVar28 + 0x38), lVar38 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar38 + 0x18) <= uVar12) goto LAB_035575f4;
    *(int *)(lVar38 + lVar40 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar38 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar37,0);
        if ((uVar19 & 1) != 0) goto LAB_035564e8;
        lVar28 = *in_stack_00000170;
        if (lVar28 == 0) goto LAB_035574b8;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar28 = lVar28 + lVar40 * 0x178;
      fStack0000000000000040 = *(float *)(lVar28 + 0x60);
      fStack0000000000000038 = *(float *)(lVar28 + 0x14c);
      uVar51 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar28 + 0x11c);
      uVar52 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar28 + 0x160);
      fStack000000000000009c = fVar44 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar54 = *unaff_x20;
    if (uVar54 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        if (uVar12 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar40 * 0x178;
          lVar18 = *unaff_x19;
          uVar54 = *(uint *)(lVar28 + 0x128);
          fVar60 = *(float *)(lVar28 + 0x14c);
LAB_03556654:
          pcVar30 = *(code **)(lVar18 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar12 == uVar33) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar37,0);
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        uVar54 = *(uint *)(lVar28 + 0x18);
        if (uVar37 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar54 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar18 = lVar40;
          if (uVar54 <= uVar12) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar28 = lVar28 + lVar18 * 0x178;
        fVar60 = *(float *)(lVar28 + 0x14c);
        uVar54 = *(uint *)(lVar28 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)uVar54) {
      lVar28 = *in_stack_00000170;
      if ((lVar28 != 0) && (lVar38 = *(long *)(lVar28 + 0x38), lVar38 != 0)) {
        if (uVar16 < *(uint *)(lVar38 + 0x18)) {
          if (*(float *)(lVar38 + lVar42 + -0x108) == fStack0000000000000040) {
            fVar47 = *(float *)(lVar38 + lVar42 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar51 = (ulong)(uint)fStack0000000000000038;
            uVar19 = FUN_03567bac(fVar60 + fVar47,uVar51,0);
            if ((uVar19 & 1) != 0) {
              uVar54 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar28 = *in_stack_00000170;
            if (lVar28 == 0) goto LAB_035574b8;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            uVar54 = *(uint *)(lVar28 + 0x18);
            if ((int)uVar12 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar54) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar12 < (int)uVar54) {
      iVar13 = FUN_036d3364(lVar34,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar16) goto LAB_035575f4;
      lVar28 = *(long *)(lVar25 + lVar42 + -0x130);
      if (lVar28 == 0) goto LAB_035574b8;
      iVar14 = FUN_036d3364(lVar28,0);
      if (iVar13 != iVar14) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar28 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar54 = *(uint *)(lVar28 + lVar42 + -0x330);
          fVar60 = *(float *)(lVar28 + lVar42 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  uVar54 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar54 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar28 + lVar40 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar52 = (ulong)uStack00000000000000c0;
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar52,uVar55,fStack00000000000000d0,uVar52);
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar28 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar12 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar37,0);
        if ((uVar19 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      uVar54 = (uint)*(undefined8 *)(lVar28 + 0x18);
      if (uVar54 <= uVar12) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0xb8);
      lVar34 = lVar28 + lVar40 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar34 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar34 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar18 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar18 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar34 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar18 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar18 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar54 <= uVar12) goto LAB_035575f4;
    lVar28 = lVar28 + lVar40 * 0x178;
    fVar44 = *(float *)(lVar28 + 0x128);
    fVar61 = *(float *)(lVar28 + 0x188);
    uVar17 = *(undefined8 *)(lVar28 + 0x17c);
    fVar58 = *(float *)(lVar28 + 0x184);
    uVar20 = *(undefined8 *)(lVar28 + 0x184);
    fVar56 = *(float *)(lVar28 + 0x18c);
    fVar60 = *(float *)(lVar28 + 0x11c);
    fVar46 = *(float *)(lVar28 + 0x148);
    fVar47 = *(float *)(lVar28 + 0x150);
    in_stack_00000178 = uVar17;
    fStack0000000000000180 = fVar58;
    fStack0000000000000184 = fVar61;
    in_stack_00000188 = fVar56;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar28 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar28);
      }
      fVar44 = fVar44 + (float)in_stack_000017b8;
      uVar52 = (ulong)(uint)fVar44;
      fVar60 = fVar60 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar47 = fVar47 - in_stack_000017c0;
      uVar51 = (ulong)(uint)fVar47;
      fVar46 = fVar46 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar55 = (ulong)(uint)fVar46;
      if (fVar60 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar60;
      }
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      if (fStack00000000000000c8 <= fVar44) {
        fStack00000000000000c8 = fVar44;
      }
      if (fStack00000000000000d0 <= fVar46) {
        fStack00000000000000d0 = fVar46;
      }
    }
    else {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar28);
      }
      fVar60 = (fVar60 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar55 = (ulong)(uint)fVar60;
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar52 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar46) {
        fStack00000000000000d0 = fVar46;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar52,uVar55,fStack00000000000000d0,uVar52);
      fStack00000000000000dc = fVar47 - fVar56;
      fStack00000000000000c8 = fVar44 + fVar58;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar46 + fVar61;
      fStack00000000000000d8 = fVar60;
      in_stack_000017b0 = uVar17;
      in_stack_000017b8 = uVar20;
      in_stack_000017c0 = fVar56;
    }
    if (((*unaff_x20 == 1) || (uVar12 == uVar33)) || (((int)uVar5 <= (int)uVar12 || (!bVar1)))) {
      uVar52 = (ulong)uStack00000000000000c0;
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar52,uVar55,fStack00000000000000d0,uVar52);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar12 = *unaff_x20;
  lVar42 = lVar42 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar12 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar54 = uVar31;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar25 = *in_stack_00000170;
  if (lVar25 != 0) {
    iVar15 = uVar31 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar25 + 0x18) = uVar12;
    lVar42 = unaff_x19[0xd4];
    *(int *)(lVar25 + 0x2c) = iVar15;
    if ((int)uVar12 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar25 + 0x1c) = (int)lVar42;
    *(float *)(lVar25 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar25 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar25 = unaff_x19[0xdf];
    if (lVar25 != 0) {
      (**(code **)(lVar25 + 0x18))
                (*(undefined8 *)(lVar25 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar25 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar15 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar15 != 0x19) {
      lVar25 = unaff_x19[0xe5];
      if (lVar25 == 0) goto LAB_035574b8;
      uVar12 = FUN_03911ee4(lVar25,0);
      FUN_03911f20(lVar25,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar25 = *(long *)(*in_stack_00000170 + 0x60), lVar25 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar25 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
        if (*(int *)(lVar25 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
            if (*(int *)(lVar25 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
                if (*(int *)(lVar25 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
                    if (*(int *)(lVar25 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar20 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar25 = *in_stack_00000170;
                              if (lVar25 != 0) {
                                lVar28 = 0;
                                lVar42 = 0;
                                do {
                                  uVar19 = lVar42 + 1;
                                  if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar25 = *(long *)(lVar25 + 0x60);
                                  if (lVar25 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar25 + lVar28 + 0x70,0);
                                  lVar25 = unaff_x19[0xe1];
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar17 = *(undefined8 *)(lVar25 + lVar42 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_036d35a8(uVar17,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar25 = *(long *)(*in_stack_00000170 + 0x60), lVar25 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar25 + lVar28 + 0x70,1,0);
                                    }
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = UnityEngine_Material__GetColorArray(lVar25,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar25 == 0) break;
                                    FUN_036a460c(lVar25,*(undefined8 *)(lVar18 + lVar28 + 0x80),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = UnityEngine_Material__GetColorArray(lVar25,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar25 == 0) break;
                                    FUN_036a4810(lVar25,*(undefined8 *)(lVar18 + lVar28 + 0x98),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = UnityEngine_Material__GetColorArray(lVar25,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar25 == 0) break;
                                    FUN_036a48bc(lVar25,*(undefined8 *)(lVar18 + lVar28 + 0xa0),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = UnityEngine_Material__GetColorArray(lVar25,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar25 == 0) break;
                                    FUN_036a4e24(lVar25,*(undefined8 *)(lVar18 + lVar28 + 0xa8),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = UnityEngine_Material__GetColorArray(lVar25,0),
                                       lVar25 == 0)) break;
                                    FUN_036aa280(lVar25,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_037b514c(lVar25,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar42 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (uVar17 = UnityEngine_Material__GetColorArray(lVar18,0),
                                       lVar25 == 0)) break;
                                    FUN_0390f3a4(lVar25,uVar17,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_037b514c(lVar25,0), lVar25 == 0)) break;
                                    FUN_0390eec8(uVar20,uVar51,uVar52,uVar55,lVar25,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar25 = *(long *)(lVar25 + lVar42 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_037b514c(lVar25,0), lVar25 == 0)) break;
                                    FUN_0390ed78(lVar25,uVar12 & 1,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar39 = *(long **)(lVar25 + lVar42 * 8 + 0x28);
                                    uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar39 == (long *)0x0) break;
                                    (**(code **)(*plVar39 + 0x2c8))
                                              (plVar39,uVar16 & 1,*(undefined8 *)(*plVar39 + 0x2d0))
                                    ;
                                  }
                                  lVar25 = *in_stack_00000170;
                                  lVar42 = lVar42 + 1;
                                  lVar28 = lVar28 + 0x50;
                                } while (lVar25 != 0);
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


