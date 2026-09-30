/*
FUNCTION_NAME: UnityEngine.AnimationEvent$$.ctor
ENTRY_POINT: 03551cfc
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


void UnityEngine_AnimationEvent___ctor(float param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  int *piVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar38;
  undefined8 unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar39;
  long *plVar40;
  long lVar41;
  uint unaff_w27;
  long *unaff_x28;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  ulong uVar49;
  ulong uVar50;
  uint uVar51;
  ulong uVar52;
  float fVar53;
  float unaff_s8;
  float fVar54;
  float fVar55;
  float fVar56;
  ulong unaff_d9;
  float unaff_s10;
  float unaff_s11;
  float fVar57;
  float fVar58;
  float unaff_s12;
  float fVar59;
  float unaff_s13;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
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
  float in_stack_000000b0;
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
  float fStack0000000000000114;
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
  
code_r0x03551cfc:
  fVar44 = (float)unaff_d9;
  fStack0000000000000114 = (float)param_3 + unaff_s12;
  fVar62 = unaff_s13 + (float)param_2;
  fVar54 = 0.0;
  fVar46 = (float)FUN_036bdd2c(unaff_s11 - unaff_s10,unaff_x22,0);
  unaff_s11 = unaff_s10 + fVar46;
  unaff_s8 = unaff_s13 + unaff_s8;
  fVar54 = fVar54 + unaff_s12;
  fVar47 = 0.0;
  in_stack_000000b0 = (float)FUN_036bdd2c(in_stack_000000b0 - unaff_s10,unaff_x22,0);
  in_stack_000000b0 = unaff_s10 + in_stack_000000b0;
  fVar47 = fVar47 + unaff_s12;
  fVar46 = unaff_s13 + fVar44;
  uVar19 = in_stack_000017c8;
  fStack0000000000000118 = param_1;
LAB_03551d88:
  if (*unaff_x28 == 0) goto LAB_035574b8;
  lVar24 = *(long *)(*unaff_x28 + 0x38);
  uVar18 = _fStack0000000000000150 & 0xffffffff;
  if (lVar24 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fStack0000000000000118;
  *(float *)(lVar24 + 0x120) = fVar62;
  *(float *)(lVar24 + 0x124) = fStack0000000000000114;
  if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x38), lVar24 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x114) = in_stack_00000108;
  *(float *)(lVar24 + 0x110) = fStack0000000000000104;
  *(float *)(lVar24 + 0x118) = fStack0000000000000100;
  if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x38), lVar24 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = unaff_s11;
  *(float *)(lVar24 + 300) = unaff_s8;
  *(float *)(lVar24 + 0x130) = fVar54;
  if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x38), lVar24 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x134) = in_stack_000000b0;
  *(float *)(lVar24 + 0x138) = fVar46;
  *(float *)(lVar24 + 0x13c) = fVar47;
  if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x38), lVar24 == 0)) goto LAB_035574b8;
  uVar11 = *unaff_x20;
  lVar41 = (long)(int)uVar11;
  if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar27 = lVar24 + lVar41 * unaff_x24;
  *(int *)(lVar27 + 0x140) = (int)unaff_x19[200];
  fVar47 = *(float *)(unaff_x19 + 0x9b);
  uVar49 = (ulong)(uint)fVar47;
  fVar46 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar27 + 0x15c) = (unaff_s11 - fStack0000000000000118) / (in_stack_00000108 - fVar62);
  *(float *)(lVar27 + 0x14c) = (fStack000000000000011c - fVar47) + fVar46;
  fVar62 = fStack0000000000000128 * fStack0000000000000150;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar62 = fVar62 / fStack0000000000000158;
    in_stack_00000120 = (in_stack_00000120 * fStack0000000000000150) / fStack0000000000000158;
  }
  else {
    in_stack_00000120 = in_stack_00000120 * fStack0000000000000150;
  }
  uVar15 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar11 == uVar15)) {
    in_stack_00000120 = fVar46 + in_stack_00000120;
    fVar62 = fVar46 + fVar62;
    fVar54 = in_stack_00000120;
    fVar44 = fVar62;
    if (fVar46 != 0.0) {
      fVar44 = (fVar62 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      fVar54 = (in_stack_00000120 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar44 <= fVar62) {
        fVar44 = fVar62;
      }
      if (in_stack_00000120 <= fVar54) {
        fVar54 = in_stack_00000120;
      }
    }
    lVar24 = lVar24 + lVar41 * unaff_x24;
    fVar46 = fVar44;
    if (fVar44 <= *(float *)(unaff_x19 + 0x99)) {
      fVar46 = *(float *)(unaff_x19 + 0x99);
    }
    fVar58 = fVar54;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar54) {
      fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar58;
    *(float *)(unaff_x19 + 0x99) = fVar46;
    *(float *)(lVar24 + 0x154) = fVar44;
    *(float *)(lVar24 + 0x158) = fVar54;
    *(float *)(lVar24 + 0x148) = fVar62 - fVar47;
    *(float *)(unaff_x19 + 0x98) = fVar62 - fVar47;
    *(float *)(lVar24 + 0x150) = in_stack_00000120 - fVar47;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000120 - fVar47;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar46;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar46 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar47 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fStack0000000000000150 * fVar47) / fStack0000000000000158;
      uVar49 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar46 <= fStack0000000000000158) {
        fVar46 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar46;
    }
    if ((float)uVar49 == 0.0) {
      fVar46 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar62) {
        fVar46 = fVar62;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar46;
    }
  }
  else {
    fVar62 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + lVar41 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar62;
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar62 = fVar62 - fVar47;
    *(float *)(lVar24 + 0x148) = fVar62;
    *(float *)(lVar24 + 0x158) = fVar46;
    *(float *)(unaff_x19 + 0x98) = fVar62;
    fVar46 = fVar46 - fVar47;
    *(float *)(lVar24 + 0x150) = fVar46;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
  }
  lVar24 = *unaff_x28;
  if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_035574b8;
  uVar51 = *unaff_x20;
  if (*(uint *)(lVar41 + 0x18) <= uVar51) goto LAB_035575f4;
  lVar41 = lVar41 + (long)(int)uVar51 * unaff_x24;
  *(undefined1 *)(lVar41 + 0x194) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x4f);
  iVar14 = (int)unaff_x24;
  uVar42 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar41 + 0x194) = 1;
    pfVar28 = _fStack00000000000000a0;
    pfVar31 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar24 + 0x60);
      pfVar28 = (float *)(lVar24 + 100);
    }
    fVar46 = *pfVar31;
    fVar47 = *pfVar28;
    fVar62 = *(float *)(unaff_x19 + 0x6c);
    fVar44 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar46) - fVar47;
    bVar8 = true;
    if ((fVar62 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar62))) {
      bVar8 = fVar62 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar62;
    }
    fVar62 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar62 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar49 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      in_stack_000000f0 = fStack0000000000000150;
    }
    fVar45 = (float)uVar49;
    fVar43 = 0.0;
    if ((0.0 < fVar45) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar51 = *unaff_x20;
    fVar43 = (*(float *)(unaff_x19 + 0x97) - (fVar58 - fVar45)) + fVar43;
    if (fStack00000000000000c4 < fVar43) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar51;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      in_stack_000017c8 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar59 = *(float *)(unaff_x19 + 0x59);
        if (((fVar59 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar45)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar62 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar43) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar62 <= fVar59) {
            fVar62 = fVar59;
          }
          goto LAB_03554b48;
        }
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar43 = *(float *)(unaff_x19 + 0x4a);
        uVar49 = (ulong)(uint)fVar43;
        if ((fVar43 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar62 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar62 <= DAT_00d38b84) {
            fVar62 = DAT_00d38b84;
          }
          fVar46 = (fVar45 - fVar62) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar45;
          fVar62 = DAT_00d38e60;
          if (fVar46 != INFINITY) {
            fVar62 = (float)(int)fVar46 / 20.0;
          }
          if (fVar62 <= fVar43) {
            fVar62 = fVar43;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar6;
        }
        lVar41 = *(long *)(lVar24 + 0xb8);
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar20 = (int *)thunk_FUN_01a59484(lVar41 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar20 == 0) {
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *(long *)puVar6;
          }
          FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar10 = FUN_0358c15c();
LAB_035529e8:
          iVar12 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar12;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar10 - 1;
          in_stack_000017c8 = CONCAT44(0x2026,iVar12);
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
        if ((uVar51 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          fVar62 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar62 - fVar58) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar49 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar24 = NEON_rev64(uVar49,4);
          unaff_x19[0x99] = lVar24;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          in_stack_000017c8 = uVar19;
        }
        goto LAB_03550bd0;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar18 = FUN_036cee6c(lVar24,0,0);
        if ((uVar18 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x528))(plVar40,uVar19,*(undefined8 *)(*plVar40 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      in_stack_000017c8 = CONCAT44(3,uVar51);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar44 = ABS(fVar44) + fVar62 * (1.0 - fVar54) * in_stack_000000f0;
    fVar62 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar62 = DAT_00d38acc;
    }
    fVar58 = fVar62 * in_stack_000000f8._4_4_;
    if (fVar44 <= fVar58) {
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
            *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (in_stack_000017dc != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar58,in_stack_000000e8 & 0xffffffff);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar51 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar51;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar51;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000068._4_4_ = 0;
            *(float *)(lVar24 + 0x60) = fVar46;
            *(float *)(lVar24 + 100) = fVar47;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      uVar51 = *unaff_x20;
      if (uVar51 < *(uint *)(lVar41 + 0x18)) {
        *(undefined1 *)(lVar41 + (long)(int)uVar51 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar51;
        lVar41 = *(long *)(lVar24 + 0x50);
        if (lVar41 != 0) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar41 + 0x18)) {
            lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
            goto LAB_03552fcc;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      goto LAB_035575f4;
    }
    uVar49 = in_stack_000000e8 & 0xffffffff;
    if (((char)unaff_x19[0x5b] == '\0') || (uVar51 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar54 < fVar58) {
          fVar46 = fVar44 / (1.0 - fVar54);
          if (fVar54 <= 0.0) {
            fVar46 = fVar44;
          }
          fVar54 = fVar54 + (fVar44 - fVar62 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
          goto LAB_035574e8;
        }
        fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar58 = *(float *)(unaff_x19 + 0x4a);
        if (fVar58 < fVar54) {
          fVar62 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar62 <= DAT_00d38b84) {
            fVar62 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar54;
          fVar54 = fVar54 - fVar62;
LAB_03557524:
          fVar46 = fVar54 * 20.0 + 0.5;
          fVar62 = DAT_00d38e60;
          if (fVar46 != INFINITY) {
            fVar62 = (float)(int)fVar46 / 20.0;
          }
          if (fVar62 <= fVar58) {
            fVar62 = fVar58;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar62;
          return;
        }
      }
      iVar10 = (int)unaff_x19[0x5c];
      if (iVar10 == 1) {
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar6;
        }
        lVar41 = *(long *)(lVar24 + 0xb8);
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar20 = (int *)thunk_FUN_01a59484(lVar41 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar20 != 0) {
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *(long *)puVar6;
          }
          FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
          goto LAB_035529dc;
        }
        goto LAB_03554580;
      }
      if (iVar10 != 6) {
        if (iVar10 == 3) {
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
      lVar24 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar18 = FUN_036cee6c(lVar24,0,0);
      if ((uVar18 & 1) != 0) {
        plVar40 = (long *)unaff_x19[0x5d];
        uVar19 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar40 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar40 + 0x528))(plVar40,uVar19,*(undefined8 *)(*plVar40 + 0x530));
        lVar24 = unaff_x19[0x5d];
        if (lVar24 == 0) goto LAB_035574b8;
        *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar40 = (long *)unaff_x19[0x5d];
        if (plVar40 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
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
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar54 = *(float *)(unaff_x19 + 0x9b);
        fVar58 = 0.0;
        if ((0.0 < fVar54) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar58 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar58 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar24 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar24 == 0) goto LAB_035574b8;
        fVar54 = *(float *)(unaff_x19 + 0x9b);
        fVar58 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_035574b8;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar24 + 0x18) <= uVar32) ||
         (uVar5 = uVar32 - 1, *(uint *)(lVar24 + 0x18) <= uVar5)) goto LAB_035575f4;
      uVar49 = (ulong)(uint)(fVar58 + *(float *)(unaff_x19 + 0x97));
      fVar43 = (fVar58 + *(float *)(unaff_x19 + 0x97) + fVar54) -
               *(float *)(lVar24 + (long)(int)uVar32 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar24 + (long)(int)uVar5 * (long)iVar14 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar43 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar24 + (long)(int)uVar32 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          in_stack_000017c8 = uVar19;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar58 <= fVar54) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar49 = (ulong)(uint)fVar54;
              fVar58 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar54 <= fVar58) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar62 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar62 <= DAT_00d38b84) {
                fVar62 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar54;
              fVar54 = fVar54 - fVar62;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar46 = fVar44;
            if (0.0 < fVar54) {
              fVar46 = fVar44 / (1.0 - fVar54);
            }
            fVar54 = fVar54 + (fVar44 - fVar62 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
LAB_035574e8:
            if (fVar58 <= fVar54) {
              fVar54 = fVar58;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar54;
            return;
          }
LAB_03552d44:
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *(long *)puVar6;
          }
          iVar10 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
          if (((iVar10 != iStack0000000000000034) && (iVar10 != -1)) &&
             (((bStack0000000000000070 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
            goto LAB_035574b8;
            uVar32 = *unaff_x20 - 1;
            if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_035575f4;
            iStack0000000000000034 = iVar10;
            if (*(short *)(lVar24 + (long)(int)uVar32 * (long)iVar14 + 0x20) == 0xad) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar32;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              in_stack_000017c8 = CONCAT44(0x2d,uVar32);
              goto LAB_03550bd0;
            }
          }
          if (fVar43 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            FUN_0358cbd4(fStack0000000000000058,uVar18,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            uVar49 = uVar18;
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar58 = fStack00000000000000c4;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar54 = *(float *)(unaff_x19 + 0x59);
              if ((fVar54 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar62 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar43) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar62 <= fVar54) {
                  fVar62 = fVar54;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar62;
                return;
              }
              fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar58 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar54 < fVar58) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar49 = (ulong)(uint)fVar54;
              fVar58 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar58 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557594;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_03552ef4_caseD_0;
            case 1:
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar41 = *(long *)(lVar24 + 0xb8);
              lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
                lVar24 = FUN_01a46ff8(lVar24);
              }
              piVar20 = (int *)thunk_FUN_01a59484(lVar41 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              if (*piVar20 == 0) {
                bStack0000000000000074 = 0;
                goto LAB_03554580;
              }
              lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              memcpy(&stack0x00001008,&stack0x000008a0,0x378);
              iVar10 = FUN_0358c15c();
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
              FUN_0358cbd4(fStack0000000000000058,uVar18,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                           in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              uVar49 = uVar18;
              break;
            case 6:
              lVar24 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar18 = FUN_036cee6c(lVar24,0,0);
              if ((uVar18 & 1) != 0) {
                plVar40 = (long *)unaff_x19[0x5d];
                uVar19 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar40 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar40 + 0x528))(plVar40,uVar19,*(undefined8 *)(*plVar40 + 0x530));
                lVar24 = unaff_x19[0x5d];
                if (lVar24 == 0) goto LAB_035574b8;
                *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar40 = (long *)unaff_x19[0x5d];
                if (plVar40 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
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
          in_stack_000017c8 = uVar19;
        }
      }
      else {
        bStack0000000000000074 = 0;
        *unaff_x20 = uVar5;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        in_stack_000017c8 = CONCAT44(0x2d,uVar5);
      }
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar46 = (float)uVar49;
      fVar62 = 0.0;
      if ((0.0 < fVar46) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar62 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar49 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar46)) + fVar62)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar51;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar18 = FUN_036cee6c(lVar24,0,0);
        if ((uVar18 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar40 != (long *)0x0) {
            (**(code **)(*plVar40 + 0x528))(plVar40,uVar19,*(undefined8 *)(*plVar40 + 0x530));
            lVar24 = unaff_x19[0x5d];
            if (lVar24 != 0) {
              *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar40 = (long *)unaff_x19[0x5d];
              if (plVar40 != (long *)0x0) {
                (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
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
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x50), lVar41 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar18 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
LAB_035530c4:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar62 = *(float *)(unaff_x19 + 0x3d);
      iVar10 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar47 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar24 = unaff_x19[0xca];
      fVar46 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar46 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
      fVar54 = *(float *)((long)unaff_x19 + 0x404);
      fVar43 = *(float *)(lVar24 + 0x2c);
      fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
      fVar58 = *_fStack00000000000000a8;
      fVar44 = fVar54 * (fVar62 / (float)iVar10) * fVar47 * fVar46 * fVar43 * fVar44;
      fVar62 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        uVar51 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar24 + 0x18) <= uVar51) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar46 = *(float *)(lVar24 + (long)(int)uVar51 * (long)iVar14 + 0x60);
        iVar10 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar54 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar24 = unaff_x19[0xca];
        fVar47 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar47 = 1.0;
        }
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
        fVar43 = *(float *)((long)unaff_x19 + 0x404);
        fVar45 = *(float *)(lVar24 + 0x2c);
        fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar58 = *(float *)(lVar24 + 0x60);
        fVar62 = *(float *)(lVar24 + 100);
        fVar44 = fVar43 * (fVar46 / (float)iVar10) * fVar54 * fVar47 * fVar45 * fVar44;
      }
      fVar54 = *(float *)(unaff_x19 + 0x9b);
      fVar46 = 0.0;
      fVar47 = 0.0;
      if ((0.0 < fVar54) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar45 = *(float *)(unaff_x19 + 0x97);
      fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar43 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar24,0);
        fVar46 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar53 = *(float *)(unaff_x19 + 0x6c);
      fVar62 = (fStack000000000000009c - fVar58) - fVar62;
      bVar8 = true;
      if ((fVar53 <= fVar62) && (bVar8 = false, !NAN(fVar53))) {
        bVar8 = fVar53 == -1.0;
      }
      if (!bVar8) {
        fVar62 = fVar53;
      }
      fVar58 = 1.0;
      if ((uVar30 & 0x18) != 0) {
        fVar58 = DAT_00d38acc;
      }
      if (((fVar45 - (fVar59 - fVar54)) + fVar47 < fStack00000000000000c4) &&
         (ABS(fVar43) + fVar44 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar58 * fVar62)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar24 = *(long *)(*(long *)puVar6 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar24 + 0x788),0x378);
        FUN_0209b210(lVar24 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar51 = *(uint *)(unaff_x19 + 0x95);
    lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar41 + 100) = uVar51;
    *(int *)(lVar41 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar24 + 0x18) <= uVar51) goto LAB_035575f4;
      *(int *)(lVar24 + (long)(int)uVar51 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar51) goto LAB_035575f4;
      if (*(int *)(lVar24 + (long)(int)uVar51 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar62 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar47 = *(float *)(unaff_x19 + 200);
      fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar62 = fStack0000000000000150 * fVar62 * fVar46;
      fVar46 = fVar62 * (float)(int)(fVar47 / fVar62);
      uVar49 = (ulong)(uint)fVar46;
      if (fVar46 <= fVar47) {
        fVar46 = fVar47 + fVar62;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar46;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar47 = 1.0;
        }
        else {
          fVar47 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar46 = *(float *)(unaff_x19 + 200);
        fVar44 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar62 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar46 = fVar46 + fVar62 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fStack0000000000000150 *
                                     (fStack000000000000012c + fVar47 * fVar44) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar46;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fStack0000000000000150 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar49 = (ulong)(uint)fVar46;
      fVar46 = *(float *)(unaff_x19 + 200) - fVar46;
      *(float *)(unaff_x19 + 200) = fVar46;
      if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
        fVar62 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar49 = (ulong)(uint)fVar62;
        fVar46 = fVar46 - fVar62;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar62 = *(float *)(unaff_x19 + 200);
      fVar46 = fVar62 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                        fStack00000000000000d4 *
                        (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar46;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar49 = (ulong)(uint)fVar62, unaff_w27 != 0)) {
        fVar62 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar49 = (ulong)(uint)fVar62;
        fVar46 = fVar46 + fVar62;
        goto LAB_03553678;
      }
    }
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    uVar51 = *unaff_x20;
    uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
    if (uVar30 <= uVar51) goto LAB_035575f4;
    *(float *)(lVar41 + (long)(int)uVar51 * unaff_x24 + 0x144) = fVar46;
    uVar32 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar51 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar49 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar51 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar62 = *(float *)(unaff_x19 + 0x99);
        fVar46 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar62 = fVar62 - fVar46;
        if (((fStack000000000000005c < ABS(fVar62)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar62);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar62;
          *(float *)(unaff_x19 + 0x9b) = fVar62 + *(float *)(unaff_x19 + 0x9b);
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar24 = *(long *)puVar6;
          }
          lVar41 = *(long *)(lVar24 + 0xb8);
          if (*(int *)(lVar41 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar41 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar24 + 0xb8) + 0x818,0);
            lVar24 = *(long *)(*(long *)puVar6 + 0xb8);
            *(float *)(lVar24 + 0x7bc) = fVar62 + *(float *)(lVar24 + 0x7bc);
            *(float *)(lVar24 + 0x800) = fVar62 + *(float *)(lVar24 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar24 + 0x788),0x378);
            FUN_0209b210(lVar24 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar47 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc) - fVar47;
      fVar62 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar62 = fVar46;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar62;
      fVar44 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar62;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x50), lVar41 == 0)) goto LAB_035574b8;
      uVar51 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar41 + 0x18) <= uVar51) goto LAB_035575f4;
      lVar27 = unaff_x19[0x93];
      lVar17 = lVar41 + (long)(int)uVar51 * 0x5c;
      *(int *)(lVar17 + 0x34) = (int)lVar27;
      uVar30 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar27 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
      *(uint *)(lVar17 + 0x38) = uVar30;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar17 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar10 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar10 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar10;
      *(int *)(lVar17 + 0x40) = iVar10;
      *(int *)(lVar17 + 0x24) = (*(int *)(lVar17 + 0x3c) - *(int *)(lVar17 + 0x34)) + 1;
      *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar30) goto LAB_035575f4;
      uVar61 = *(undefined4 *)(lVar24 + (long)(int)uVar30 * (long)iVar14 + 0x11c);
      lVar41 = lVar41 + (long)(int)uVar51 * 0x5c;
      *(float *)(lVar41 + 0x70) = fVar46;
      *(undefined4 *)(lVar41 + 0x6c) = uVar61;
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x50), lVar41 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar44 = fVar44 - fVar47;
      uVar49 = (ulong)(uint)fVar44;
      lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar41 + 0x74) =
           *(undefined4 *)
            (lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar41 + 0x78) = fVar44;
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      lVar17 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar41 = lVar27 + lVar17 * 0x5c;
      *(float *)(lVar41 + 0x44) =
           *(float *)(lVar41 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
      *(float *)(lVar41 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar41 + 0x24) == 1) {
        *(int *)(lVar27 + lVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
      if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar41 + lVar39 * unaff_x24 + 0x194) == '\0') &&
         (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar30 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar27 = lVar27 + lVar17 * 0x5c;
      fVar47 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar62 = -fVar47;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar62 = fVar47;
      }
      *(float *)(lVar27 + 0x58) = *(float *)(lVar41 + lVar39 * unaff_x24 + 0x144) + fVar62;
      *(float *)(lVar27 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar27 + 0x54) = fVar46;
      *(float *)(lVar27 + 0x48) = in_stack_00000060 + (fVar44 - fVar46);
      *(float *)(lVar27 + 0x4c) = fVar44;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar24 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar10 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar10;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar10) {
              FUN_0358ca18();
              lVar24 = unaff_x19[0x6d];
              if (lVar24 == 0) goto LAB_035574b8;
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if (lVar24 != 0) {
              if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
                fVar62 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar46 = 0.0, in_stack_000017dc == 10)) {
                    fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar22 = 0;
                  fVar46 = fVar62 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar46) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar46 = 0.0, in_stack_000017dc == 10)) {
                    fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar22 = 1;
                  fVar46 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar46);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar46;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar24 = *(long *)puVar6;
                }
                uVar16 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar62;
                uVar49 = NEON_rev64(uVar16,4);
                unaff_x19[0x99] = uVar49;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068._4_4_ = 1;
                bStack0000000000000070 = 1;
                in_stack_000017c8 = uVar19;
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
          uVar32 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar51 = *unaff_x20;
    if (uVar30 <= uVar51) goto LAB_035575f4;
    if (*(char *)(lVar41 + (long)(int)uVar51 * unaff_x24 + 0x194) != '\0') {
      lVar41 = lVar41 + (long)(int)uVar51 * unaff_x24;
      uVar49 = *(ulong *)(lVar41 + 0x11c);
      uVar18 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar18 ^ (uVar18 ^ uVar49) &
                    ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) < (float)(uVar49 >> 0x20)),
                              -(uint)((float)uVar18 < (float)uVar49));
      uVar18 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar49 = *(ulong *)(lVar41 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar18 ^ (uVar18 ^ uVar49) &
                    ~CONCAT44(-(uint)((float)(uVar49 >> 0x20) < (float)(uVar18 >> 0x20)),
                              -(uint)((float)uVar49 < (float)uVar18));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
      lVar41 = *(long *)(lVar24 + 0x58);
      if (lVar41 == 0) goto LAB_035574b8;
      iVar10 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar41 + 0x18) < iVar10) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar24 + 0x58),iVar10,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar24 = *in_stack_00000170;
        if (lVar24 == 0) goto LAB_035574b8;
      }
      lVar41 = *(long *)(lVar24 + 0x58);
      if (lVar41 == 0) goto LAB_035574b8;
      uVar30 = *(uint *)(unaff_x19 + 0x96);
      lVar27 = (long)(int)uVar30;
      uVar51 = *(uint *)(lVar41 + 0x18);
      if (uVar51 <= uVar30) goto LAB_035575f4;
      lVar17 = lVar41 + lVar27 * 0x14;
      fVar46 = *(float *)(lVar17 + 0x30);
      uVar49 = (ulong)(uint)fVar46;
      *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar62 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar62 = fVar46;
      }
      *(float *)(lVar17 + 0x30) = fVar62;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar32 == 0 && uVar30 == 0) {
        *(uint *)(lVar41 + (ulong)uVar30 * 0x14 + 0x20) = uVar32;
      }
      else {
        uVar5 = uVar32 - 1;
        if (0 < (int)uVar32) {
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_035575f4;
          if (uVar30 != *(uint *)(lVar24 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar30 - 1 < uVar51) {
              *(uint *)(lVar41 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar41 + 0x20 + lVar27 * 0x14) = uVar32;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar32 == in_stack_00000088._4_4_) {
          *(float *)(lVar41 + lVar27 * 0x14 + 0x24) = in_stack_00000088._4_4_;
        }
      }
    }
LAB_03553d10:
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
    if ((unaff_w27 == 0) &&
       (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
        if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
             (0x1d < in_stack_000017dc - 0xa961)) || (uVar18 = FUN_03597a54(0), (uVar18 & 1) != 0))
           && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
        goto LAB_03553f78;
        lVar24 = FUN_035978e8(0);
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_035574b8;
        uVar51 = FUN_0219c130(*(long *)(lVar24 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar51 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if (uVar11 != uVar15 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
          if (unaff_w27 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar24 = FUN_035978e8(0);
        if (((lVar24 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar41 = *(long *)(*in_stack_00000170 + 0x38), lVar41 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar24 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar41 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20);
        uVar18 = FUN_0219c130(*(long *)(lVar24 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar51 & 1) != 0) goto LAB_035541dc;
        if ((uVar18 & 1) == 0) goto LAB_03554270;
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
      *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_035542ac:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    in_stack_000017c8 = uVar19;
  }
LAB_03550bd0:
  do {
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar24 = unaff_x19[0x8f];
    if (lVar24 == 0) goto LAB_035574b8;
    if ((int)*(uint *)(lVar24 + 0x18) <= (int)in_stack_000017a8) {
LAB_0355459c:
      fVar62 = (float)uVar49;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar62 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar62 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar46 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar62 < fVar46) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar47 = (*(float *)((long)unaff_x19 + 0x23c) - fVar62) * 0.5;
          if (fVar47 <= DAT_00d38b84) {
            fVar47 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar62;
          fVar47 = (fVar62 + fVar47) * 20.0 + 0.5;
          fVar62 = DAT_00d38e60;
          if (fVar47 != INFINITY) {
            fVar62 = (float)(int)fVar47 / 20.0;
          }
          if (fVar46 <= fVar62) {
            fVar62 = fVar46;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar6 = PTR_DAT_03cbdf88;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar19 = FUN_0276793c(_fStack0000000000000038,0);
        uVar16 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar19,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar16,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar19,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar42 == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar7;
      }
      plVar40 = (long *)OVRPlugin_Media_TypeInfo;
      lVar24 = **(long **)(lVar24 + 0xb8);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar14 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar24 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar10 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      in_stack_000000e8 = *(ulong *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar24 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)in_stack_000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar10 < 0x401) {
        if (iVar10 == 0x100) {
          if (lVar24 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar24 + 0x18) < 2) goto LAB_035575f4;
          uVar19 = *(undefined8 *)(lVar24 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar41 = *(long *)(*in_stack_00000170 + 0x58), lVar41 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar62 = *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar62 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
          fVar62 = (0.0 - fVar62) - fStack0000000000000020;
        }
        else if (iVar10 == 0x200) {
          if (lVar24 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar24 = *(long *)(*in_stack_00000170 + 0x58), lVar24 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar62 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) +
                      *(float *)(lVar24 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar62 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar10 != 0x400) goto LAB_03554c4c;
          if (lVar24 == 0) goto LAB_035574b8;
          if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
          uVar19 = *(undefined8 *)(lVar24 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar41 = *(long *)(*in_stack_00000170 + 0x58), lVar41 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
          fVar62 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar62);
      }
      else if (iVar10 == 0x800) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
        fVar62 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar62;
      }
      else {
        if (iVar10 == 0x1000) {
          if (lVar24 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
            uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
            fVar62 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar10 == 0x2000) {
          if (lVar24 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
          fVar62 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar24 + 0x24) +
                                (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar62);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar19 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar6);
      }
      uVar18 = FUN_036d35a8(uVar19,0,0);
      lVar24 = FUN_0357f060();
      if (lVar24 == 0) goto LAB_035574b8;
      FUN_036df824(lVar24,0);
      *(float *)(unaff_x19 + 0xe2) = fVar62;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar10 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar46 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar61 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar6 = OVRPlugin_Mesh_TypeInfo;
      lVar24 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar6;
      }
      puVar25 = *(undefined4 **)(lVar24 + 0xb8);
      uVar49 = (ulong)(uint)puVar25[1];
      uVar50 = (ulong)(uint)puVar25[2];
      uVar52 = (ulong)(uint)puVar25[3];
      FUN_035683a4(*puVar25,uVar49,uVar50,uVar52,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar24 = *in_stack_00000170;
      if (lVar24 == 0) goto LAB_035574b8;
      uVar11 = *unaff_x20;
      if ((int)uVar11 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar14 = 0;
        goto LAB_03556f00;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      fVar62 = ABS(fVar62);
      fVar47 = 1.0;
      if ((uVar18 & 1) == 0) {
        fVar47 = fVar62;
      }
      if (lVar24 == 0) goto LAB_035574b8;
      bVar9 = false;
      bVar8 = false;
      _fStack0000000000000128 = 0;
      fStack0000000000000114 = 0.0;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar41 = 0x2e0;
      fVar54 = 0.0;
      fVar44 = 0.0;
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
      uVar15 = 1;
      uVar51 = 0;
      goto LAB_03554e78;
    }
    if (*(uint *)(lVar24 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    in_stack_000017dc = *(uint *)(lVar24 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
    if (in_stack_000017dc == 0) goto LAB_0355459c;
    if (5 < in_stack_00000168._4_4_) {
      uVar19 = FUN_0276793c(&stack0x000017dc,0);
      uVar16 = FUN_0276793c(&stack0x000017a8,0);
      uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar19,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar16,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar19,0);
      in_stack_000017c8 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017dc != 0x3c)) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar18 = FUN_03586568();
      if (((uVar18 & 1) != 0) &&
         (in_stack_000017a8 = in_stack_0000178c, uVar42 = in_stack_000017dc,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    uVar11 = *unaff_x20;
    if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar27 = (long)(int)uVar11;
    cVar23 = *(char *)(lVar24 + lVar27 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar41 = unaff_x19[0x24];
    if ((uint)in_stack_000017c8 == uVar11) {
      in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017dc == 0x2026) {
        *(long *)(lVar24 + lVar27 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar24 + 0x2c) = 0;
        *(long *)(lVar24 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        uVar11 = *unaff_x20;
        if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar24 + (long)(int)uVar11 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_000017c8 = CONCAT44(3,uVar11 + 1);
      }
      else if (in_stack_000017dc == 3) {
        if ((*unaff_x21 == 0) || (lVar17 = FUN_03568ac0(*unaff_x21,0), lVar17 == 0))
        goto LAB_035574b8;
        FUN_0219b634(lVar17,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
        *(ulong *)(lVar24 + lVar27 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008a4,in_stack_000008a0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar11 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)uVar11 * (long)iVar14;
      *(undefined1 *)(lVar24 + 0x194) = 0;
      *(undefined2 *)(lVar24 + 0x20) = 0x200b;
      *(undefined4 *)(lVar24 + 100) = 0;
      *unaff_x20 = uVar11 + 1;
      uVar42 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
    iVar10 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar10 != 0) {
      fStack0000000000000158 = 1.0;
      if (iVar10 == 0) goto LAB_03550fec;
LAB_03550c00:
      if (iVar10 != 1) {
        lVar24 = *in_stack_00000170;
        fStack000000000000011c = 0.0;
        fVar46 = 0.0;
        if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
          fVar46 = fStack0000000000000150;
        }
        if (lVar24 == 0) goto LAB_035574b8;
        fVar44 = 0.0;
        in_stack_00000120 = 0.0;
        in_stack_000000f0 = fStack0000000000000150;
        goto LAB_035514cc;
      }
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar24 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar24 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar24 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      uVar42 = in_stack_000017dc;
      if (lVar24 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar6;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar27 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar62 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar10 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar47 = (float)FUN_03776960(&stack0x00001720,0);
        fVar46 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar46 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar46 = (fVar62 / (float)iVar10) * fVar47 * fVar46;
        iVar10 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar62 = *(float *)(unaff_x19 + 0x3d);
        if (iVar10 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar10 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          in_stack_00000120 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000120 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar54 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar24 + 0x20),0);
          fVar58 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
          fVar45 = *(float *)(lVar24 + 0x2c);
          fVar43 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar59 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar53 = *(float *)((long)unaff_x19 + 0x404);
          fStack000000000000011c = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fStack000000000000011c = fVar46 * fVar59 * fVar53 * fStack000000000000011c;
          in_stack_00000120 = (fVar62 / (float)iVar10) * fVar47 * in_stack_00000120;
          in_stack_000000f0 = in_stack_00000120 * (fVar54 / fVar58) * fVar45 * fVar43;
          in_stack_00000120 = in_stack_00000120 / in_stack_000000f0;
          fVar44 = in_stack_00000120 * fVar44;
          fVar62 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          in_stack_00000120 = in_stack_00000120 * fVar62;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar10 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
          fVar58 = *(float *)(lVar24 + 0x2c);
          fVar54 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar54 = 1.0;
          }
          fVar43 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar45 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar59 = *(float *)((long)unaff_x19 + 0x404);
          fStack000000000000011c = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fStack000000000000011c = fVar46 * fVar45 * fVar59 * fStack000000000000011c;
          in_stack_000000f0 = (fVar62 / (float)iVar10) * fVar47 * fVar54 * fVar58 * fVar43;
          in_stack_00000120 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        *in_stack_000000e0 = lVar24;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar24);
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar24 + 0x2c) = 1;
        *(float *)(lVar24 + 0x160) = in_stack_000000f0;
        *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fStack000000000000015c = 0.0;
        *(int *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar41;
        goto LAB_035514b0;
      }
      goto LAB_03550bd0;
    }
    uVar11 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar11 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b8410(in_stack_000017dc,0);
            in_stack_000017dc = uVar11 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8594(in_stack_000017dc,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar11 & 0xffff;
      }
    }
    iVar10 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar10 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar42 = in_stack_000017dc;
  } while (*in_stack_000000e0 == 0);
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar15 = *unaff_x20;
  uVar11 = *(uint *)(lVar24 + 0x18);
  if (uVar11 <= uVar15) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + (long)(int)uVar15 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar62 = *(float *)(unaff_x19 + 0x3d);
    iVar10 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar24 = unaff_x19[0x20];
  }
  else {
    lVar41 = unaff_x19[0x8f];
    if (lVar41 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar41 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar15 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar11 <= uVar15 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar62 = *(float *)(lVar24 + (long)(int)(uVar15 - 1) * (long)iVar14 + 0x60);
    iVar10 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar24 = *unaff_x21;
  }
  if (lVar24 == 0) goto LAB_035574b8;
  fVar47 = (float)FUN_03776960(lVar24 + 0x50,0);
  fVar46 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar46 = 1.0;
  }
  in_stack_00000120 = 0.0;
  fVar44 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000120 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar24 = unaff_x19[0xc9];
  if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
  fVar54 = *(float *)((long)unaff_x19 + 0x404);
  fVar58 = *(float *)(lVar24 + 0x2c);
  in_stack_000000f0 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar43 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar45 = *(float *)((long)unaff_x19 + 0x404);
  fStack000000000000011c = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar24 = unaff_x19[0x6d];
  if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar41 + 0x2c) = 0;
  fVar46 = ((fStack0000000000000158 * fVar62) / (float)iVar10) * fVar47 * fVar46;
  in_stack_000000f0 = fVar46 * fVar54 * fVar58 * in_stack_000000f0;
  *(float *)(lVar41 + 0x160) = in_stack_000000f0;
  uVar11 = *(uint *)(unaff_x19 + 0x24);
  fStack000000000000011c = fVar46 * fVar43 * fVar45 * fStack000000000000011c;
  if (uVar11 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar41 = unaff_x19[0xe1];
    if (lVar41 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar41 = *(long *)(lVar41 + (long)(int)uVar11 * 8 + 0x20);
    if (lVar41 == 0) goto LAB_035574b8;
    fStack000000000000015c = *(float *)(lVar41 + 0x10c);
  }
LAB_035514b0:
  fVar46 = 0.0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    fVar46 = in_stack_000000f0;
  }
LAB_035514cc:
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar24 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar11 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)uVar11 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar24 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar24 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar24,0);
  puVar6 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar11 = FUN_026b63d8(in_stack_000017dc,0);
    unaff_w27 = uVar11 & 1;
  }
  else {
    unaff_w27 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar44;
    fVar47 = 0.0;
    fVar62 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar15 = *unaff_x20;
    uVar11 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar15 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar15 + 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar15 + 1) * (long)iVar14 + 0x30);
      if ((((lVar24 == 0) || (*unaff_x21 == 0)) ||
          (lVar41 = *(long *)(*unaff_x21 + 0x128), lVar41 == 0)) ||
         (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar11 | *(int *)(lVar24 + 0x28) << 0x10;
      uVar18 = FUN_0219f8b8(lVar41,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar61 = 0;
      if ((uVar18 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar44;
        fVar47 = 0.0;
        fVar62 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar61 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar62 = *(float *)(in_stack_000016f8 + 0x14);
        fVar47 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar44);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar15 = *unaff_x20;
    }
    else {
      uVar61 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar44;
      fVar47 = 0.0;
      fVar62 = 0.0;
    }
    if (0 < (int)uVar15) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar15 - 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar15 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*unaff_x21 == 0)) ||
         ((lVar41 = *(long *)(*unaff_x21 + 0x128), lVar41 == 0 ||
          (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar24 + 0x28) | uVar11 << 0x10;
      uVar18 = FUN_0219f8b8(lVar41,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar18 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar48 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar62 = (float)FUN_03571cb4(fVar62,fVar47,_fStack0000000000000128 >> 0x20,uVar61,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar48,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar54 = *(float *)(unaff_x19 + 200);
    fVar44 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar54 = fVar54 - fVar46 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar54;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar54 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar44 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar44 != 0.0) {
    fVar54 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar58 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar44 * 0.5 - fVar46 * (fVar54 * 0.5 + fVar58));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar18 = FUN_036cee6c(lVar24,0,0);
    fVar54 = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar18 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      fVar54 = 0.0;
      if ((uVar18 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                             (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar58 = *(float *)(*unaff_x21 + 0x1b0);
        fVar54 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        fVar54 = fVar54 * fVar44 * fVar58 * 0.25;
        if (fVar44 < fStack000000000000015c + fVar54) {
          fStack000000000000015c = fVar44 - fVar54;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar24 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar18 = FUN_036cee6c(lVar24,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar18 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      if ((uVar18 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        uVar18 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        if ((uVar18 & 1) != 0) {
          lVar24 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar24 != 0) {
            fVar44 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar58 = *(float *)(*unaff_x21 + 0x1a8);
              fVar54 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc)
                                           ,0);
              fVar54 = fVar54 * fVar44 * fVar58 * 0.25;
              if (fVar44 < fStack000000000000015c + fVar54) {
                fStack000000000000015c = fVar44 - fVar54;
              }
              goto FUN_03551b84;
            }
          }
          goto LAB_035574b8;
        }
      }
    }
    fVar54 = 0.0;
  }
FUN_03551b84:
  fVar58 = *(float *)(unaff_x19 + 200);
  fVar44 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar58 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar46 * (fVar62 + ((fVar44 - fStack000000000000015c) - fVar54));
  fVar62 = (float)FUN_03776cac(&stack0x00001790,0);
  unaff_s8 = *(float *)((long)unaff_x19 + 0x61c) +
             ((fStack000000000000011c + fVar46 * (fVar47 + fStack000000000000015c + fVar62)) -
             *(float *)(unaff_x19 + 0x9b));
  fVar62 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar62 = unaff_s8 - fVar46 * (fStack000000000000015c + fStack000000000000015c + fVar62);
  fVar47 = (float)FUN_03776c94(&stack0x00001790,0);
  in_stack_000000b0 =
       fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                fVar46 * (fVar54 + fVar54 + fStack000000000000015c + fStack000000000000015c + fVar47
                         );
  in_stack_000000e8 = (ulong)(uint)fVar54;
  fStack0000000000000104 = fVar58;
  unaff_s11 = in_stack_000000b0;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar43 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar47 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar45 = fVar43 * fVar46 * (fVar54 + fStack000000000000015c + fVar47);
    fVar47 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar44 = (float)FUN_03776c9c(&stack0x00001790,0);
    unaff_s8 = unaff_s8 + 0.0;
    fVar62 = fVar62 + 0.0;
    fVar43 = fVar43 * fVar46 * (((fVar47 - fVar44) - fStack000000000000015c) - fVar54);
    fVar47 = fVar58 + fVar45;
    fVar44 = in_stack_000000b0 + fVar45;
    fVar54 = (fVar45 - fVar43) * 0.5;
    fVar58 = (fVar58 + fVar43) - fVar54;
    in_stack_000000b0 = (in_stack_000000b0 + fVar43) - fVar54;
    fStack0000000000000104 = fVar47 - fVar54;
    unaff_s11 = fVar44 - fVar54;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar46;
  unaff_x28 = in_stack_00000170;
  if (*(char *)((long)unaff_x19 + 0x474) != '\0') goto code_r0x03551c74;
  fStack0000000000000114 = 0.0;
  fVar47 = 0.0;
  fVar54 = 0.0;
  fStack0000000000000100 = 0.0;
  fVar46 = fVar62;
  uVar19 = in_stack_000017c8;
  fStack0000000000000118 = fVar58;
  in_stack_00000108 = unaff_s8;
  goto LAB_03551d88;
LAB_03554e78:
  uVar11 = uVar15 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0))
  goto LAB_035574b8;
  lVar39 = (long)(int)uVar11;
  lVar17 = lVar24 + lVar39 * 0x178;
  uVar30 = *(uint *)(lVar17 + 100);
  if (*(uint *)(lVar27 + 0x18) <= uVar30) goto LAB_035575f4;
  lVar37 = (long)(int)uVar30;
  lVar27 = lVar27 + lVar37 * 0x5c;
  lVar33 = *(long *)(lVar17 + 0x38);
  uVar3 = *(ushort *)(lVar17 + 0x20);
  uVar32 = *(uint *)(lVar27 + 0x3c);
  uVar42 = *(uint *)(lVar27 + 0x68);
  iVar2 = *(int *)(lVar27 + 0x20);
  iVar12 = *(int *)(lVar27 + 0x28);
  iVar13 = *(int *)(lVar27 + 0x2c);
  uVar5 = *(uint *)(lVar27 + 0x40);
  lVar17 = (long)(int)uVar5;
  fVar45 = *(float *)(lVar27 + 0x4c);
  fVar53 = *(float *)(lVar27 + 0x54);
  fVar58 = *(float *)(lVar27 + 0x58);
  fVar57 = *(float *)(lVar27 + 0x5c);
  fVar55 = *(float *)(lVar27 + 0x60);
  fVar56 = *(float *)(lVar27 + 0x6c);
  fVar60 = *(float *)(lVar27 + 0x70);
  fVar43 = *(float *)(lVar27 + 0x74);
  fVar59 = *(float *)(lVar27 + 0x78);
  uVar36 = (uint)uVar3;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar55 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar58;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar55 + fVar57 * 0.5) - fVar58 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar57 + fVar55) - fVar58;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar57 + fVar55;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    in_stack_000000e8 = 0;
  }
  else if (uVar42 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar32 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b8cc4(uVar4,0);
      if ((uVar18 & 1) == 0) {
        bVar1 = (int)uVar30 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar58 <= fVar57) && (!bVar1 && uVar42 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar55;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar57 + fVar55;
        }
        goto LAB_03555088;
      }
      if (((uVar15 == 1) || (uVar30 != uVar51)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar55;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar57 + fVar55;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar36,0);
        in_stack_000000e8 = 0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1e];
        fVar55 = -fVar58;
        if (cVar23 != '\0') {
          fVar55 = fVar58;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_035575f4;
        iVar13 = (int)*(char *)(lVar24 + (long)(int)uVar32 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar13 + -1;
        if (iVar13 < 1) {
          fVar58 = 1.0;
          iVar13 = 1;
        }
        else {
          fVar58 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar36 == 9) {
LAB_03556e74:
          fVar58 = 1.0 - fVar58;
        }
        else {
          if (uVar36 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar18 = FUN_026b97f8(uVar36,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar18 & 1) != 0) goto LAB_03556e74;
          }
          iVar13 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar12;
        }
        fVar58 = ((fVar57 + fVar55) * fVar58) / (float)iVar13;
        if (cVar23 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar58;
          in_stack_000000e8 =
               CONCAT44((float)(in_stack_000000e8 >> 0x20) + 0.0,(float)in_stack_000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar58;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar58 = fVar56 + fVar43;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar42 <= uVar11) goto LAB_035575f4;
  lVar27 = lVar24 + lVar39 * 0x178;
  fVar57 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar58 = SUB84(in_stack_000000b8,0) + (float)in_stack_000000e8;
  fVar55 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)(in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar27 + 0x194) == '\0') goto LAB_03555938;
  iVar12 = *(int *)(lVar24 + lVar39 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_0355574c;
  fVar54 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar30,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar24 + lVar39 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar54 = 1.0;
    break;
  case 1:
    fVar59 = *(float *)(lVar24 + lVar39 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar43 = (in_stack_000000f8._4_4_ + fVar59) - *(float *)(in_stack_00000080 + 0x230);
      fVar59 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar43 = fVar43 - fVar56;
    *(float *)(lVar26 + 0x84) = fVar54 + (fVar59 - fVar56) / fVar43;
    *(float *)(lVar26 + 0xac) = fVar54 + (*(float *)(lVar26 + 0x98) - fVar56) / fVar43;
    *(float *)(lVar26 + 0xd4) = fVar54 + (*(float *)(lVar26 + 0xc0) - fVar56) / fVar43;
    fVar54 = fVar54 + (*(float *)(lVar26 + 0xe8) - fVar56) / fVar43;
    break;
  case 2:
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar59 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar43 = (in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar26 + 0x84) = fVar54 + fVar43 / fVar59;
    *(float *)(lVar26 + 0xac) =
         fVar54 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar54 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar54 = fVar54 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar26 = lVar24 + lVar39 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar59 = fVar59 - fVar60;
      fVar43 = fVar54 + (*(float *)(lVar26 + 0x74) - fVar60) / fVar59;
      fVar59 = fVar54 + (*(float *)(lVar26 + 0x9c) - fVar60) / fVar59;
      *(float *)(lVar26 + 0x88) = fVar43;
      *(float *)(lVar26 + 0xb0) = fVar59;
      *(float *)(lVar26 + 0xd8) = fVar43;
      *(float *)(lVar26 + 0x100) = fVar59;
      break;
    case 2:
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar43 = fVar54 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar43;
      fVar59 = *(float *)(unaff_x19 + 0x9c);
      fVar56 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar43;
      fVar43 = fVar54 + (*(float *)(lVar26 + 0x9c) - fVar59) / (fVar56 - fVar59);
      *(float *)(lVar26 + 0xb0) = fVar43;
      *(float *)(lVar26 + 0x100) = fVar43;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar42 <= uVar11) goto LAB_035575f4;
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar43 = *(float *)(lVar26 + 0x15c);
    fVar59 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar43) * 0.5;
    fVar56 = fVar54 + *(float *)(lVar26 + 0x88) * fVar43 + fVar59;
    fVar54 = fVar54 + fVar59 + *(float *)(lVar26 + 0xb0) * fVar43;
    *(float *)(lVar26 + 0x84) = fVar56;
    *(float *)(lVar26 + 0xac) = fVar56;
    *(float *)(lVar26 + 0xd4) = fVar54;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar24 + lVar39 * 0x178 + 0xfc) = fVar54;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar11) goto LAB_035575f4;
    lVar26 = lVar24 + lVar39 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar42) {
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar45 = fVar45 - fVar53;
      fVar54 = (*(float *)(lVar26 + 0x74) - fVar53) / fVar45;
      fVar45 = (*(float *)(lVar26 + 0x9c) - fVar53) / fVar45;
      *(float *)(lVar26 + 0x88) = fVar54;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar42 <= uVar11) goto LAB_035575f4;
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar54 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar54;
    fVar45 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar26 + 0xb0) = fVar45;
    *(float *)(lVar26 + 0xd8) = fVar45;
    *(float *)(lVar26 + 0x100) = fVar54;
    break;
  case 3:
    if (uVar42 <= uVar11) goto LAB_035575f4;
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar45 = *(float *)(lVar26 + 0x15c);
    fVar43 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar45) * 0.5;
    fVar54 = *(float *)(lVar26 + 0x84) / fVar45 + fVar43;
    fVar43 = fVar43 + *(float *)(lVar26 + 0xd4) / fVar45;
    *(float *)(lVar26 + 0x88) = fVar54;
    *(float *)(lVar26 + 0xb0) = fVar43;
    *(float *)(lVar26 + 0x100) = fVar54;
    *(float *)(lVar26 + 0xd8) = fVar43;
  }
  if (uVar42 <= uVar11) goto LAB_035575f4;
  lVar26 = lVar24 + lVar39 * 0x178;
  fVar54 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar39 * 0x178 + 400) & 1) != 0)) {
    fVar54 = -fVar54;
  }
  fVar43 = fVar62;
  if (((iVar10 == 2) || (fVar43 = fVar47, iVar10 == 1)) || (fVar43 = fVar62 / fVar46, iVar10 == 0))
  {
    fVar54 = fVar43 * fVar54;
  }
  lVar26 = lVar24 + lVar39 * 0x178;
  fVar45 = *(float *)(lVar26 + 0x88);
  fVar59 = *(float *)(lVar26 + 0x84);
  fVar43 = -2.1474836e+09;
  if (fVar59 != INFINITY) {
    fVar43 = (float)(int)fVar59;
  }
  fVar56 = *(float *)(lVar26 + 0xd4);
  fVar60 = *(float *)(lVar26 + 0xd8);
  fVar53 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar53 = (float)(int)fVar45;
  }
  uVar48 = FUN_03591d3c(fVar59 - fVar43,fVar45 - fVar53);
  *(undefined4 *)(lVar26 + 0x84) = uVar48;
  if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar60 = fVar60 - fVar53;
  *(float *)(lVar26 + 0x88) = fVar54;
  uVar48 = FUN_03591d3c(fVar59 - fVar43,fVar60);
  *(undefined4 *)(lVar24 + lVar39 * 0x178 + 0xac) = uVar48;
  if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar56 = fVar56 - fVar43;
  *(float *)(lVar24 + lVar39 * 0x178 + 0xb0) = fVar54;
  fVar43 = (float)FUN_03591d3c(fVar56,fVar60);
  *(float *)(lVar26 + 0xd4) = fVar43;
  if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_035575f4;
  *(float *)(lVar26 + 0xd8) = fVar54;
  uVar48 = FUN_03591d3c(fVar56,fVar45 - fVar53);
  *(undefined4 *)(lVar24 + lVar39 * 0x178 + 0xfc) = uVar48;
  uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar42 <= uVar11) goto LAB_035575f4;
  *(float *)(lVar24 + lVar39 * 0x178 + 0x100) = fVar54;
LAB_0355574c:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar11) goto LAB_035575f4;
      lVar27 = lVar24 + lVar39 * 0x178;
      *(ulong *)(lVar27 + 0x70) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0x70));
      *(float *)(lVar27 + 0x78) = fVar55 + *(float *)(lVar27 + 0x78);
      *(ulong *)(lVar27 + 0x98) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0x98));
      *(float *)(lVar27 + 0xa0) = fVar55 + *(float *)(lVar27 + 0xa0);
      *(ulong *)(lVar27 + 0xc0) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0xc0));
      *(float *)(lVar27 + 200) = fVar55 + *(float *)(lVar27 + 200);
      *(ulong *)(lVar27 + 0xe8) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0xe8));
      *(float *)(lVar27 + 0xf0) = fVar55 + *(float *)(lVar27 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar42) {
        if (*(uint *)(lVar24 + lVar39 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar27 = lVar24 + lVar39 * 0x178;
          *(ulong *)(lVar27 + 0x70) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0x70));
          *(float *)(lVar27 + 0x78) = fVar55 + *(float *)(lVar27 + 0x78);
          *(ulong *)(lVar27 + 0x98) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0x98));
          *(float *)(lVar27 + 0xa0) = fVar55 + *(float *)(lVar27 + 0xa0);
          *(ulong *)(lVar27 + 0xc0) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0xc0));
          *(float *)(lVar27 + 200) = fVar55 + *(float *)(lVar27 + 200);
          *(ulong *)(lVar27 + 0xe8) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0xe8));
          *(float *)(lVar27 + 0xf0) = fVar55 + *(float *)(lVar27 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar42 <= uVar11) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar42 = *(uint *)(lVar24 + 0x18);
  }
  puVar6 = PTR_DAT_03cbded8;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar26 = lVar24 + lVar39 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar48;
  if (uVar42 <= uVar11) goto LAB_035575f4;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar26 = lVar24 + lVar39 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar48;
  *(undefined1 *)(lVar27 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar12 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar29)();
  }
  else if (iVar12 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar27 = lVar27 + lVar39 * 0x178;
  uVar19 = *(undefined8 *)(lVar27 + 0x11c);
  *(undefined8 *)(lVar27 + 0x11c) =
       CONCAT44(fVar58 + (float)((ulong)uVar19 >> 0x20),fVar57 + (float)uVar19);
  *(float *)(lVar27 + 0x124) = fVar55 + *(float *)(lVar27 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar27 = lVar27 + lVar39 * 0x178;
  *(ulong *)(lVar27 + 0x110) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0x110) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar27 + 0x110));
  *(float *)(lVar27 + 0x118) = fVar55 + *(float *)(lVar27 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar27 = lVar27 + lVar39 * 0x178;
  *(ulong *)(lVar27 + 0x128) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar27 + 0x128) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar27 + 0x128));
  *(float *)(lVar27 + 0x130) = fVar55 + *(float *)(lVar27 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar27 = lVar27 + lVar39 * 0x178;
  *(float *)(lVar27 + 0x134) = fVar57 + *(float *)(lVar27 + 0x134);
  *(ulong *)(lVar27 + 0x138) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar27 + 0x138) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar27 + 0x138));
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar42 = *(uint *)(lVar26 + 0x18);
  if (uVar42 <= uVar11) goto LAB_035575f4;
  lVar34 = lVar26 + lVar39 * 0x178;
  uVar49 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar43 = fVar58 + *(float *)(lVar34 + 0x150);
  uVar50 = (ulong)(uint)fVar43;
  uVar52 = CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar43;
  *(ulong *)(lVar34 + 0x140) = uVar49;
  *(ulong *)(lVar34 + 0x148) = uVar52;
  if (uVar30 == uVar51) {
    uVar51 = *unaff_x20 - 1;
    if (uVar11 == uVar51) goto LAB_03555b44;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar34 = (long)(int)uVar51;
    lVar35 = lVar27 + lVar34 * 0x5c;
    uVar52 = (ulong)(uint)*(float *)(lVar35 + 0x58);
    fVar43 = fVar58 + *(float *)(lVar35 + 0x54);
    uVar49 = (ulong)(uint)fVar43;
    fVar45 = fVar57 + *(float *)(lVar35 + 0x58);
    uVar50 = (ulong)(uint)fVar45;
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar58 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar43;
    *(float *)(lVar35 + 0x58) = fVar45;
    if (uVar42 <= *(uint *)(lVar35 + 0x34)) goto LAB_035575f4;
    uVar48 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar27 = lVar27 + lVar34 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar43;
    *(undefined4 *)(lVar27 + 0x6c) = uVar48;
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x50), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar51 = *(uint *)(lVar26 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar27 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar26 = lVar26 + lVar34 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar51 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar51 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar11 == uVar51) {
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar34 = lVar26 + lVar37 * 0x5c;
      uVar52 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar49 = CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar43 = fVar58 + *(float *)(lVar34 + 0x54);
      fVar57 = fVar57 + *(float *)(lVar34 + 0x58);
      uVar50 = (ulong)(uint)fVar57;
      *(ulong *)(lVar34 + 0x4c) = uVar49;
      *(float *)(lVar34 + 0x54) = fVar43;
      *(float *)(lVar34 + 0x58) = fVar57;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar48 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar43;
      *(undefined4 *)(lVar26 + 0x6c) = uVar48;
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar51 = *(uint *)(lVar26 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar27 + 0x18) <= uVar51) goto LAB_035575f4;
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar51 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar18 = FUN_026b82c4(uVar36,0);
  if (((((uVar18 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
    if (bVar8) {
      if (((uVar15 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*unaff_x20 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar15 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar24 + lVar41 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b82c4(uVar4,0);
        if ((uVar18 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar24 + lVar41 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar18 = FUN_026b82c4(uVar4,0);
          if ((uVar18 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar15 != 1) {
LAB_0355686c:
        bVar8 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b81f8(uVar36,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b63d8(uVar36,0);
        if (((uVar36 != 0x200b) && ((uVar18 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar11 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b82c4(uVar36,0);
      iVar12 = (int)fStack0000000000000128;
      if ((uVar18 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar12 = uVar15 - 2;
    }
    lVar27 = *in_stack_00000170;
    if (lVar27 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar27 + 0x40);
    if (lVar26 == 0) goto LAB_035574b8;
    uVar51 = *(uint *)(lVar27 + 0x24);
    iVar13 = *(int *)(lVar26 + 0x18);
    if (iVar13 < (int)(uVar51 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar27 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar27 = *in_stack_00000170;
      if (lVar27 == 0) goto LAB_035574b8;
    }
    lVar27 = *(long *)(lVar27 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)uVar51 * 0x18;
    *(long **)(lVar27 + 0x20) = unaff_x19;
    *(float *)(lVar27 + 0x28) = fStack0000000000000158;
    *(int *)(lVar27 + 0x2c) = iVar12;
    *(int *)(lVar27 + 0x30) = (iVar12 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar27 = unaff_x19[0x6d];
    if (lVar27 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar27 + 0x50);
    *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
    lVar26 = lVar26 + lVar37 * 0x5c;
    bVar8 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      fStack0000000000000158 = (float)uVar11;
    }
    if (uVar11 == *unaff_x20 - 1) {
      lVar27 = *in_stack_00000170;
      if (lVar27 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar27 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar51 = *(uint *)(lVar27 + 0x24);
      iVar12 = *(int *)(lVar26 + 0x18);
      if (iVar12 < (int)(uVar51 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar27 + 0x40),iVar12 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar27 = *in_stack_00000170;
        if (lVar27 == 0) goto LAB_035574b8;
      }
      lVar27 = *(long *)(lVar27 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar51) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)uVar51 * 0x18;
      *(long **)(lVar27 + 0x20) = unaff_x19;
      *(float *)(lVar27 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar27 + 0x2c) = uVar11;
      *(uint *)(lVar27 + 0x30) = uVar15 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar27 = unaff_x19[0x6d];
      if (lVar27 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar27 + 0x50);
      *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar26 = lVar26 + lVar37 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_03555d68:
    bVar8 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar51 = *(uint *)(lVar27 + 0x18);
  if (uVar51 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar27 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_03555da0:
      if (uVar51 <= uVar15 - 2) goto LAB_035575f4;
      lVar37 = *unaff_x19;
      uVar51 = *(uint *)(lVar27 + lVar41 + -0x330);
      uVar48 = *(undefined4 *)(lVar27 + lVar41 + -0x2f8);
LAB_035562ec:
      pcVar29 = *(code **)(lVar37 + 0x8d8);
LAB_035562f4:
      uVar52 = (ulong)uVar51;
      uVar49 = (ulong)(uint)_bStack0000000000000070;
      uVar50 = (ulong)_bStack0000000000000074;
      (*pcVar29)(fStack0000000000000078,uVar49,uVar50,uVar52,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar48);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar6;
      }
LAB_03556348:
      bVar9 = false;
      fVar44 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar9 = false;
    }
  }
  else {
    lVar27 = lVar27 + lVar39 * 0x178;
    iVar12 = *(int *)(lVar27 + 0x68);
    *(int *)(lVar27 + 0x16c) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar12 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar18 = FUN_026b63d8(uVar36,0);
    if ((uVar36 != 0x200b) && ((uVar18 & 1) == 0)) {
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar37 = *(long *)(lVar27 + 0x38), lVar37 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_035575f4;
      fVar43 = *(float *)(lVar37 + lVar39 * 0x178 + 0x160);
      if (fVar44 <= fVar43) {
        fVar44 = fVar43;
      }
      if (fStack0000000000000100 <= ABS(fVar54)) {
        fStack0000000000000100 = ABS(fVar54);
      }
      if (iVar12 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *in_stack_00000170;
          if (lVar27 == 0) goto LAB_035574b8;
          lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar37 + 0x15a8);
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar45 = *(float *)(lVar27 + lVar39 * 0x178 + 0x14c);
      fVar43 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar45 = fVar45 + fVar44 * fVar43;
      if (fVar45 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar45;
      }
      uVar49 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar12;
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b97f8(uVar36,0);
        if ((uVar18 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar27 = lVar27 + lVar39 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar27 + 0x160);
      fStack0000000000000078 = *(float *)(lVar27 + 0x11c);
      uVar50 = (ulong)(uint)fStack0000000000000078;
      bVar9 = fVar44 != 0.0;
      fVar43 = in_stack_00000088._4_4_;
      if (bVar9) {
        fVar43 = fVar44;
      }
      fVar44 = fVar43;
      uVar61 = *(undefined4 *)(lVar27 + 0x168);
      _bStack0000000000000074 = 0;
      fVar43 = fVar54;
      if (bVar9) {
        fVar43 = fStack0000000000000100;
      }
      uVar49 = (ulong)(uint)fVar43;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar43;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        if (uVar11 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar39 * 0x178;
          lVar37 = *unaff_x19;
          uVar51 = *(uint *)(lVar27 + 0x128);
          uVar48 = *(undefined4 *)(lVar27 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar11 == uVar32) || ((int)uVar5 <= (int)uVar11)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b63d8(uVar36,0);
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        lVar37 = lVar39;
        uVar51 = uVar11;
        if (uVar36 == 0x200b || (uVar18 & 1) != 0) {
          lVar37 = lVar17;
          uVar51 = uVar5;
        }
        if (uVar51 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar37 * 0x178;
          uVar51 = *(uint *)(lVar27 + 0x128);
          uVar48 = *(undefined4 *)(lVar27 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        uVar51 = *(uint *)(lVar27 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_035575f4;
      uVar18 = FUN_03567ad8(uVar61,*(undefined4 *)(lVar27 + lVar41),0);
      if ((uVar18 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0)) {
          if (uVar11 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + lVar39 * 0x178;
            uVar52 = (ulong)*(uint *)(lVar27 + 0x128);
            uVar50 = (ulong)_bStack0000000000000074;
            uVar49 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar49,uVar50,uVar52,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar27 + 0x160));
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar6;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar9 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar51 = *(uint *)(lVar27 + lVar39 * 0x178 + 400);
  fVar43 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar51 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar15 - 2) goto LAB_035575f4;
      uVar51 = *(uint *)(lVar27 + lVar41 + -0x330);
      fVar58 = *(float *)(lVar27 + lVar41 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar52 = (ulong)uVar51;
      uVar49 = (ulong)(uint)fStack000000000000009c;
      uVar50 = (ulong)(uint)fStack0000000000000098;
      (*pcVar29)(fStack00000000000000a0,uVar49,uVar50,uVar52,
                 fStack00000000000000a8 * fVar43 + fVar58,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar37 = *(long *)(lVar27 + 0x38), lVar37 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar37 + 0x18) <= uVar11) goto LAB_035575f4;
    *(int *)(lVar37 + lVar39 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar37 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b97f8(uVar36,0);
        if ((uVar18 & 1) != 0) goto LAB_035564e8;
        lVar27 = *in_stack_00000170;
        if (lVar27 == 0) goto LAB_035574b8;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar27 = lVar27 + lVar39 * 0x178;
      fStack0000000000000040 = *(float *)(lVar27 + 0x60);
      fStack0000000000000038 = *(float *)(lVar27 + 0x14c);
      uVar49 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar27 + 0x11c);
      uVar50 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar27 + 0x160);
      fStack000000000000009c = fVar43 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar51 = *unaff_x20;
    if (uVar51 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        if (uVar11 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar39 * 0x178;
          lVar17 = *unaff_x19;
          uVar51 = *(uint *)(lVar27 + 0x128);
          fVar58 = *(float *)(lVar27 + 0x14c);
LAB_03556654:
          pcVar29 = *(code **)(lVar17 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar11 == uVar32) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar18 = FUN_026b63d8(uVar36,0);
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        uVar51 = *(uint *)(lVar27 + 0x18);
        if (uVar36 == 0x200b || (uVar18 & 1) != 0) {
          if (uVar51 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar17 = lVar39;
          if (uVar51 <= uVar11) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar27 = lVar27 + lVar17 * 0x178;
        fVar58 = *(float *)(lVar27 + 0x14c);
        uVar51 = *(uint *)(lVar27 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)uVar51) {
      lVar27 = *in_stack_00000170;
      if ((lVar27 != 0) && (lVar37 = *(long *)(lVar27 + 0x38), lVar37 != 0)) {
        if (uVar15 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lVar41 + -0x108) == fStack0000000000000040) {
            fVar45 = *(float *)(lVar37 + lVar41 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar49 = (ulong)(uint)fStack0000000000000038;
            uVar18 = FUN_03567bac(fVar58 + fVar45,uVar49,0);
            if ((uVar18 & 1) != 0) {
              uVar51 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar27 = *in_stack_00000170;
            if (lVar27 == 0) goto LAB_035574b8;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            uVar51 = *(uint *)(lVar27 + 0x18);
            if ((int)uVar11 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar51) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar11 < (int)uVar51) {
      iVar12 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar27 = *(long *)(lVar24 + lVar41 + -0x130);
      if (lVar27 == 0) goto LAB_035574b8;
      iVar13 = FUN_036d3364(lVar27,0);
      if (iVar12 != iVar13) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0))
      {
        if (uVar15 - 2 < *(uint *)(lVar27 + 0x18)) {
          lVar17 = *unaff_x19;
          uVar51 = *(uint *)(lVar27 + lVar41 + -0x330);
          fVar58 = *(float *)(lVar27 + lVar41 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar51 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar51 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar27 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (((uint)fStack0000000000000114 & 1) != 0) {
      uVar50 = (ulong)uStack00000000000000c0;
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar52 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar50,uVar52,fStack00000000000000d0,uVar50);
    }
LAB_035569b4:
    fStack0000000000000114 = 0.0;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar27 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((uint)fStack0000000000000114 & 1) == 0) {
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar18 = FUN_026b97f8(uVar36,0);
        if ((uVar18 & 1) != 0) goto LAB_035569b4;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar17 = *(long *)puVar6;
      }
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar51 = (uint)*(undefined8 *)(lVar27 + 0x18);
      if (uVar51 <= uVar11) goto LAB_035575f4;
      lVar17 = *(long *)(lVar17 + 0xb8);
      lVar33 = lVar27 + lVar39 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar17 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar17 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar17 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar17 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar51 <= uVar11) goto LAB_035575f4;
    lVar27 = lVar27 + lVar39 * 0x178;
    fVar43 = *(float *)(lVar27 + 0x128);
    fVar53 = *(float *)(lVar27 + 0x188);
    uVar16 = *(undefined8 *)(lVar27 + 0x17c);
    fVar56 = *(float *)(lVar27 + 0x184);
    uVar19 = *(undefined8 *)(lVar27 + 0x184);
    fVar55 = *(float *)(lVar27 + 0x18c);
    fVar58 = *(float *)(lVar27 + 0x11c);
    fVar59 = *(float *)(lVar27 + 0x148);
    fVar45 = *(float *)(lVar27 + 0x150);
    in_stack_00000178 = uVar16;
    fStack0000000000000180 = fVar56;
    fStack0000000000000184 = fVar53;
    in_stack_00000188 = fVar55;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar18 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar18 & 1) == 0) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar27);
      }
      fVar43 = fVar43 + (float)in_stack_000017b8;
      uVar50 = (ulong)(uint)fVar43;
      fVar58 = fVar58 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar45 = fVar45 - in_stack_000017c0;
      uVar49 = (ulong)(uint)fVar45;
      fVar59 = fVar59 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar52 = (ulong)(uint)fVar59;
      if (fVar58 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar58;
      }
      if (fVar45 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar45;
      }
      if (fStack00000000000000c8 <= fVar43) {
        fStack00000000000000c8 = fVar43;
      }
      if (fStack00000000000000d0 <= fVar59) {
        fStack00000000000000d0 = fVar59;
      }
    }
    else {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar27);
      }
      fVar58 = (fVar58 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar52 = (ulong)(uint)fVar58;
      if (fVar45 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar45;
      }
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar50 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar59) {
        fStack00000000000000d0 = fVar59;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar50,uVar52,fStack00000000000000d0,uVar50);
      fStack00000000000000dc = fVar45 - fVar55;
      fStack00000000000000c8 = fVar43 + fVar56;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar59 + fVar53;
      fStack00000000000000d8 = fVar58;
      in_stack_000017b0 = uVar16;
      in_stack_000017b8 = uVar19;
      in_stack_000017c0 = fVar55;
    }
    if (((*unaff_x20 == 1) || (uVar11 == uVar32)) || (((int)uVar5 <= (int)uVar11 || (!bVar1)))) {
      uVar50 = (ulong)uStack00000000000000c0;
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar52 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar50,uVar52,fStack00000000000000d0,uVar50);
      fStack0000000000000114 = 0.0;
    }
    else {
      fStack0000000000000114 = 1.4013e-45;
    }
  }
  uVar11 = *unaff_x20;
  lVar41 = lVar41 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar11 <= (int)uVar15;
  uVar15 = uVar15 + 1;
  uVar51 = uVar30;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
code_r0x03551c74:
  thunk_FUN_036bc400(_fStack0000000000000078,0);
  unaff_s10 = (unaff_s11 + fVar58) * 0.5;
  unaff_s13 = (fVar62 + unaff_s8) * 0.5;
  unaff_s8 = unaff_s8 - unaff_s13;
  fStack0000000000000100 = 0.0;
  in_stack_00000108 = unaff_s8;
  fStack0000000000000104 =
       (float)FUN_036bdd2c(fStack0000000000000104 - unaff_s10,_fStack0000000000000078,0);
  fStack0000000000000104 = unaff_s10 + fStack0000000000000104;
  in_stack_00000108 = unaff_s13 + in_stack_00000108;
  unaff_s12 = 0.0;
  fStack0000000000000100 = fStack0000000000000100 + 0.0;
  unaff_d9 = (ulong)(uint)(fVar62 - unaff_s13);
  param_3 = 0;
  param_2 = unaff_d9;
  param_1 = (float)FUN_036bdd2c(fVar58 - unaff_s10,_fStack0000000000000078,0);
  param_1 = unaff_s10 + param_1;
  unaff_x22 = _fStack0000000000000078;
  goto code_r0x03551cfc;
FUN_03556ed8:
  lVar24 = *in_stack_00000170;
  if (lVar24 != 0) {
    iVar14 = uVar30 + 1;
    plVar40 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar24 + 0x18) = uVar11;
    lVar41 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar14;
    if ((int)uVar11 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar41;
    *(float *)(lVar24 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar18 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar18 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar24 = unaff_x19[0xdf];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar24 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar14 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar24 = unaff_x19[0xe5];
      if (lVar24 == 0) goto LAB_035574b8;
      uVar11 = FUN_03911ee4(lVar24,0);
      FUN_03911f20(lVar24,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar40 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar19 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar24 = *in_stack_00000170;
                              if (lVar24 != 0) {
                                lVar27 = 0;
                                lVar41 = 0;
                                do {
                                  uVar18 = lVar41 + 1;
                                  if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar18)
                                  goto LAB_03554724;
                                  lVar24 = *(long *)(lVar24 + 0x60);
                                  if (lVar24 == 0) break;
                                  if (*(int *)(*plVar40 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                  FUN_03596a20(lVar24 + lVar27 + 0x70,0);
                                  lVar24 = unaff_x19[0xe1];
                                  if (lVar24 == 0) break;
                                  if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                  uVar16 = *(undefined8 *)(lVar24 + lVar41 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar21 = FUN_036d35a8(uVar16,0,0);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0
                                         )) break;
                                      if (*(int *)(*plVar40 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                      FUN_03596b20(lVar24 + lVar27 + 0x70,1,0);
                                    }
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a460c(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0x80),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4810(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0x98),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a48bc(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0xa0),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000170 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4e24(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0xa8),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = UnityEngine_Material__GetColorArray(lVar24,0),
                                       lVar24 == 0)) break;
                                    FUN_036aa280(lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_037b514c(lVar24,0);
                                    lVar17 = unaff_x19[0xe1];
                                    if (lVar17 == 0) break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar17 = *(long *)(lVar17 + lVar41 * 8 + 0x28);
                                    if ((lVar17 == 0) ||
                                       (uVar16 = UnityEngine_Material__GetColorArray(lVar17,0),
                                       lVar24 == 0)) break;
                                    FUN_0390f3a4(lVar24,uVar16,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390eec8(uVar19,uVar49,uVar50,uVar52,lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390ed78(lVar24,uVar11 & 1,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_035575f4;
                                    plVar38 = *(long **)(lVar24 + lVar41 * 8 + 0x28);
                                    uVar15 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar38 == (long *)0x0) break;
                                    (**(code **)(*plVar38 + 0x2c8))
                                              (plVar38,uVar15 & 1,*(undefined8 *)(*plVar38 + 0x2d0))
                                    ;
                                  }
                                  lVar24 = *in_stack_00000170;
                                  lVar41 = lVar41 + 1;
                                  lVar27 = lVar27 + 0x50;
                                } while (lVar24 != 0);
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


