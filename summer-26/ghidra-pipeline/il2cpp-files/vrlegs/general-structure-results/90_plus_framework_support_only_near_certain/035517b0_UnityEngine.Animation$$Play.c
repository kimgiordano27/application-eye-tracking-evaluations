/*
FUNCTION_NAME: UnityEngine.Animation$$Play
ENTRY_POINT: 035517b0
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


void UnityEngine_Animation__Play(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  undefined4 *puVar26;
  long lVar27;
  long in_x9;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
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
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar39;
  uint unaff_w25;
  long *plVar40;
  uint unaff_w26;
  long lVar41;
  uint unaff_w27;
  long *unaff_x28;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  ulong uVar48;
  ulong uVar49;
  float fVar50;
  ulong uVar51;
  float fVar52;
  float unaff_s8;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulong unaff_d11;
  uint uVar58;
  ulong unaff_d12;
  float fVar59;
  ulong unaff_d13;
  uint uVar60;
  ulong unaff_d14;
  uint uVar61;
  float fVar62;
  ulong unaff_d15;
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
  undefined8 uStack00000000000000e8;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  float in_stack_00000120;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000140;
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
  uint uVar63;
  uint in_stack_000017dc;
  
code_r0x035517b0:
  if (((in_x9 == 0) || (*(long *)(in_x9 + 0x128) == 0)) ||
     (lVar19 = *(long *)(*(long *)(in_x9 + 0x128) + 0x18), lVar19 == 0)) goto LAB_035574b8;
  uVar16 = *(uint *)(param_1 + 0x28) | unaff_w25 << 0x10;
  uVar20 = FUN_0219f8b8(lVar19,&stack0x000008a0,&stack0x000016f8,
                        *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
  if ((uVar20 & 1) != 0) {
    if (in_stack_000016f8 == 0) goto LAB_035574b8;
    uVar12 = (undefined4)(_fStack0000000000000128 >> 0x20);
    unaff_d12 = FUN_03571cb4(unaff_d12,unaff_d15,_fStack0000000000000128 >> 0x20,unaff_d14,
                             *(undefined4 *)(in_stack_000016f8 + 0x28),
                             *(undefined4 *)(in_stack_000016f8 + 0x2c),
                             *(undefined4 *)(in_stack_000016f8 + 0x30),
                             *(undefined4 *)(in_stack_000016f8 + 0x34),0);
    _fStack0000000000000128 = CONCAT44(uVar12,fStack0000000000000128);
    if (in_stack_000016f8 == 0) goto LAB_035574b8;
    if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
      in_stack_00000140 = 0.0;
    }
  }
LAB_03551844:
  *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  uVar21 = in_stack_000017c8;
LAB_03551850:
  fVar52 = (float)unaff_d13;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar53 = *(float *)(unaff_x19 + 200);
    fVar43 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar53 = fVar53 - fVar52 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar53;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar53 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar53 = *(float *)(unaff_x19 + 0x56);
  fVar43 = 0.0;
  if (fVar53 != 0.0) {
    fVar43 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar44 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar53 * 0.5 - fVar52 * (fVar43 * 0.5 + fVar44));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar43;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar19 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar19,0,0);
    fVar44 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar19 = *in_stack_00000160;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar19 == 0) goto LAB_035574b8;
      uVar20 = FUN_03699d3c(lVar19,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      fVar44 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar19 = *in_stack_00000160;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar19 == 0) goto LAB_035574b8;
        fVar53 = (float)FUN_0369e060(lVar19,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar56 = *(float *)(*unaff_x21 + 0x1b0);
        fVar44 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        fVar44 = fVar44 * fVar53 * fVar56 * 0.25;
        if (fVar53 < fStack000000000000015c + fVar44) {
          fStack000000000000015c = fVar53 - fVar44;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar19 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_036cee6c(lVar19,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar19 = *in_stack_00000160;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar19 == 0) goto LAB_035574b8;
      uVar20 = FUN_03699d3c(lVar19,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar19 = *in_stack_00000160;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar19 == 0) goto LAB_035574b8;
        uVar20 = FUN_03699d3c(lVar19,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar19 = *in_stack_00000160;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar19 != 0) {
            fVar53 = (float)FUN_0369e060(lVar19,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54)
                                         ,0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar56 = *(float *)(*unaff_x21 + 0x1a8);
              fVar44 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
              fVar44 = fVar44 * fVar53 * fVar56 * 0.25;
              if (fVar53 < fStack000000000000015c + fVar44) {
                fStack000000000000015c = fVar53 - fVar44;
              }
              goto FUN_03551b84;
            }
          }
          goto LAB_035574b8;
        }
      }
    }
    fVar44 = 0.0;
  }
FUN_03551b84:
  fVar53 = *(float *)(unaff_x19 + 200);
  fVar56 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar53 = fVar53 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar52 * ((float)unaff_d12 + ((fVar56 - fStack000000000000015c) - fVar44));
  fVar56 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar62 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s8 + fVar52 * ((float)unaff_d15 + fStack000000000000015c + fVar56)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar56 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar56 = fVar62 - fVar52 * (fStack000000000000015c + fStack000000000000015c + fVar56);
  fVar45 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar50 = fVar53 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar52 * (fVar44 + fVar44 +
                             fStack000000000000015c + fStack000000000000015c + fVar45);
  fStack0000000000000104 = fVar53;
  fVar45 = fVar50;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar55 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar54 = fVar55 * fVar52 * (fVar44 + fStack000000000000015c + fVar45);
    fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar42 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar62 = fVar62 + 0.0;
    fVar56 = fVar56 + 0.0;
    fVar55 = fVar55 * fVar52 * (((fVar45 - fVar42) - fStack000000000000015c) - fVar44);
    fVar42 = fVar53 + fVar54;
    fVar45 = fVar50 + fVar55;
    fVar46 = (fVar54 - fVar55) * 0.5;
    fVar53 = (fVar53 + fVar55) - fVar46;
    fVar50 = (fVar50 + fVar54) - fVar46;
    fStack0000000000000104 = fVar42 - fVar46;
    fVar45 = fVar45 - fVar46;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar46 = 0.0;
    fVar54 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar55 = fVar56;
    fVar42 = fVar62;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar57 = (fVar50 + fVar53) * 0.5;
    fVar59 = (fVar56 + fVar62) * 0.5;
    fVar62 = fVar62 - fVar59;
    fStack0000000000000100 = 0.0;
    fVar42 = fVar62;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar57,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar57 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar55 = fVar56 - fVar59;
    fStack0000000000000114 = 0.0;
    fVar56 = fVar55;
    fVar53 = (float)FUN_036bdd2c(fVar53 - fVar57,_fStack0000000000000078,0);
    fVar53 = fVar57 + fVar53;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar56 = fVar59 + fVar56;
    fVar54 = 0.0;
    fVar50 = (float)FUN_036bdd2c(fVar50 - fVar57,_fStack0000000000000078,0);
    fVar50 = fVar57 + fVar50;
    fVar62 = fVar59 + fVar62;
    fVar54 = fVar54 + 0.0;
    fVar46 = 0.0;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar57,_fStack0000000000000078,0);
    fVar45 = fVar57 + fVar45;
    fVar46 = fVar46 + 0.0;
    fVar55 = fVar59 + fVar55;
    fVar42 = fVar59 + fVar42;
  }
  if (*unaff_x28 == 0) goto LAB_035574b8;
  lVar19 = *(long *)(*unaff_x28 + 0x38);
  uVar20 = unaff_d13 & 0xffffffff;
  if (lVar19 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar19 + 0x11c) = fVar53;
  *(float *)(lVar19 + 0x120) = fVar56;
  *(float *)(lVar19 + 0x124) = fStack0000000000000114;
  if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x38), lVar19 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar19 + 0x114) = fVar42;
  *(float *)(lVar19 + 0x110) = fStack0000000000000104;
  *(float *)(lVar19 + 0x118) = fStack0000000000000100;
  if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x38), lVar19 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar19 + 0x128) = fVar50;
  *(float *)(lVar19 + 300) = fVar62;
  *(float *)(lVar19 + 0x130) = fVar54;
  if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x38), lVar19 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar19 + 0x134) = fVar45;
  *(float *)(lVar19 + 0x138) = fVar55;
  *(float *)(lVar19 + 0x13c) = fVar46;
  if ((*unaff_x28 == 0) || (lVar19 = *(long *)(*unaff_x28 + 0x38), lVar19 == 0)) goto LAB_035574b8;
  uVar11 = *unaff_x20;
  lVar41 = (long)(int)uVar11;
  if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar28 = lVar19 + lVar41 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar62 = *(float *)(unaff_x19 + 0x9b);
  uVar48 = (ulong)(uint)fVar62;
  fVar45 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar50 - fVar53) / (fVar42 - fVar56);
  *(float *)(lVar28 + 0x14c) = (unaff_s8 - fVar62) + fVar45;
  fVar53 = fStack0000000000000128 * fVar52;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar53 = fVar53 / fStack0000000000000158;
    in_stack_00000120 = (in_stack_00000120 * fVar52) / fStack0000000000000158;
  }
  else {
    in_stack_00000120 = in_stack_00000120 * fVar52;
  }
  uVar58 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar11 == uVar58)) {
    in_stack_00000120 = fVar45 + in_stack_00000120;
    fVar53 = fVar45 + fVar53;
    fVar50 = in_stack_00000120;
    fVar56 = fVar53;
    if (fVar45 != 0.0) {
      fVar56 = (fVar53 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
      fVar50 = (in_stack_00000120 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar56 <= fVar53) {
        fVar56 = fVar53;
      }
      if (in_stack_00000120 <= fVar50) {
        fVar50 = in_stack_00000120;
      }
    }
    lVar19 = lVar19 + lVar41 * unaff_x24;
    fVar45 = fVar56;
    if (fVar56 <= *(float *)(unaff_x19 + 0x99)) {
      fVar45 = *(float *)(unaff_x19 + 0x99);
    }
    fVar42 = fVar50;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar50) {
      fVar42 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar42;
    *(float *)(unaff_x19 + 0x99) = fVar45;
    *(float *)(lVar19 + 0x154) = fVar56;
    *(float *)(lVar19 + 0x158) = fVar50;
    *(float *)(lVar19 + 0x148) = fVar53 - fVar62;
    *(float *)(unaff_x19 + 0x98) = fVar53 - fVar62;
    *(float *)(lVar19 + 0x150) = in_stack_00000120 - fVar62;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000120 - fVar62;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar45;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar56 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar45 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar52 * fVar45) / fStack0000000000000158;
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar56 <= fStack0000000000000158) {
        fVar56 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar56;
    }
    if ((float)uVar48 == 0.0) {
      fVar56 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar53) {
        fVar56 = fVar53;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar56;
    }
  }
  else {
    fVar53 = *(float *)(unaff_x19 + 0x99);
    lVar19 = lVar19 + lVar41 * unaff_x24;
    *(float *)(lVar19 + 0x154) = fVar53;
    fVar56 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar53 = fVar53 - fVar62;
    *(float *)(lVar19 + 0x148) = fVar53;
    *(float *)(lVar19 + 0x158) = fVar56;
    *(float *)(unaff_x19 + 0x98) = fVar53;
    fVar56 = fVar56 - fVar62;
    *(float *)(lVar19 + 0x150) = fVar56;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar56;
  }
  lVar19 = *unaff_x28;
  if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x38), lVar41 == 0)) goto LAB_035574b8;
  uVar60 = *unaff_x20;
  if (*(uint *)(lVar41 + 0x18) <= uVar60) goto LAB_035575f4;
  lVar41 = lVar41 + (long)(int)uVar60 * unaff_x24;
  *(undefined1 *)(lVar41 + 0x194) = 0;
  uVar61 = *(uint *)(unaff_x19 + 0x4f);
  iVar15 = (int)unaff_x24;
  uVar63 = in_stack_000017dc;
  if (((in_stack_000017dc == 9) ||
      ((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)))) ||
     (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar41 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a0;
    pfVar31 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar19 = *(long *)(lVar19 + 0x50);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar19 + 0x60);
      pfVar29 = (float *)(lVar19 + 100);
    }
    fVar56 = *pfVar31;
    fVar45 = *pfVar29;
    fVar53 = *(float *)(unaff_x19 + 0x6c);
    fVar50 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar56) - fVar45;
    bVar8 = true;
    if ((fVar53 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar53))) {
      bVar8 = fVar53 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar53;
    }
    fVar53 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar53 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar55 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar62 = (float)unaff_d11;
    if (in_stack_000017dc != 0xad) {
      fVar62 = fVar52;
    }
    fVar54 = (float)uVar48;
    fVar46 = 0.0;
    if ((0.0 < fVar54) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar60 = *unaff_x20;
    fVar46 = (*(float *)(unaff_x19 + 0x97) - (fVar55 - fVar54)) + fVar46;
    if (fStack00000000000000c4 < fVar46) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar60;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      in_stack_000017c8 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar57 = *(float *)(unaff_x19 + 0x59);
        if (((fVar57 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar54)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar46) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar52 <= fVar57) {
            fVar52 = fVar57;
          }
          goto LAB_03554b48;
        }
        fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar46 = *(float *)(unaff_x19 + 0x4a);
        uVar48 = (ulong)(uint)fVar46;
        if ((fVar46 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00d38b84) {
            fVar52 = DAT_00d38b84;
          }
          fVar43 = (fVar54 - fVar52) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar54;
          fVar52 = DAT_00d38e60;
          if (fVar43 != INFINITY) {
            fVar52 = (float)(int)fVar43 / 20.0;
          }
          if (fVar52 <= fVar46) {
            fVar52 = fVar46;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *(long *)puVar6;
        }
        lVar41 = *(long *)(lVar19 + 0xb8);
        lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = FUN_01a46ff8(lVar19);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar41 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 == 0) {
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar6;
          }
          FUN_0209b778(*(long *)(lVar19 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar10 = FUN_0358c15c();
LAB_035529e8:
          iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar10 - 1;
          in_stack_000017c8 = CONCAT44(0x2026,iVar13);
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
        if ((uVar60 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          fVar52 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar52 - fVar55) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar48 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar19 = NEON_rev64(uVar48,4);
          unaff_x19[0x99] = lVar19;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          in_stack_000017c8 = uVar21;
        }
        goto LAB_03550bd0;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar19 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar19,0,0);
        if ((uVar20 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x528))(plVar40,uVar21,*(undefined8 *)(*plVar40 + 0x530));
          lVar19 = unaff_x19[0x5d];
          if (lVar19 == 0) goto LAB_035574b8;
          *(int *)(lVar19 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar19,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar40 + 0x7a8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      in_stack_000017c8 = CONCAT44(3,uVar60);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar50 = ABS(fVar50) + fVar53 * (1.0 - fVar42) * fVar62;
    fVar53 = 1.0;
    if ((uVar61 & 0x18) != 0) {
      fVar53 = DAT_00d38acc;
    }
    fVar62 = fVar53 * in_stack_000000f8._4_4_;
    if (fVar50 <= fVar62) {
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 != 0) &&
           (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar19 + 0x18)) {
            *(undefined1 *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (in_stack_000017dc != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar62,fVar44);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar60 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar60;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar60;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar19 = *(long *)(unaff_x19[0x6d] + 0x50), lVar19 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000068._4_4_ = 0;
            *(float *)(lVar19 + 0x60) = fVar56;
            *(float *)(lVar19 + 100) = fVar45;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      lVar19 = *in_stack_00000170;
      if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      uVar60 = *unaff_x20;
      if (uVar60 < *(uint *)(lVar41 + 0x18)) {
        *(undefined1 *)(lVar41 + (long)(int)uVar60 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar60;
        lVar41 = *(long *)(lVar19 + 0x50);
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
    uVar48 = (ulong)(uint)fVar44;
    if (((char)unaff_x19[0x5b] == '\0') || (uVar60 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar62 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar42 < fVar62) {
          fVar52 = fVar50 / (1.0 - fVar42);
          if (fVar42 <= 0.0) {
            fVar52 = fVar50;
          }
          fVar42 = fVar42 + (fVar50 - fVar53 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar52;
          goto LAB_035574e8;
        }
        fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar62 = *(float *)(unaff_x19 + 0x4a);
        if (fVar62 < fVar42) {
          fVar52 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00d38b84) {
            fVar52 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar42;
          fVar42 = fVar42 - fVar52;
LAB_03557524:
          fVar43 = fVar42 * 20.0 + 0.5;
          fVar52 = DAT_00d38e60;
          if (fVar43 != INFINITY) {
            fVar52 = (float)(int)fVar43 / 20.0;
          }
          if (fVar52 <= fVar62) {
            fVar52 = fVar62;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar52;
          return;
        }
      }
      iVar10 = (int)unaff_x19[0x5c];
      if (iVar10 == 1) {
        lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *(long *)puVar6;
        }
        lVar41 = *(long *)(lVar19 + 0xb8);
        lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = FUN_01a46ff8(lVar19);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar41 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 != 0) {
          lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar6;
          }
          FUN_0209b778(*(long *)(lVar19 + 0xb8) + 0x11f0,&stack0x000008a0,
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
      lVar19 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar20 = FUN_036cee6c(lVar19,0,0);
      if ((uVar20 & 1) != 0) {
        plVar40 = (long *)unaff_x19[0x5d];
        uVar21 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar40 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar40 + 0x528))(plVar40,uVar21,*(undefined8 *)(*plVar40 + 0x530));
        lVar19 = unaff_x19[0x5d];
        if (lVar19 == 0) goto LAB_035574b8;
        *(int *)(lVar19 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar19,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
        lVar19 = *in_stack_00000170;
        if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x38), lVar41 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar62 = *(float *)(unaff_x19 + 0x9b);
        fVar42 = 0.0;
        if ((0.0 < fVar62) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar42 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar42 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar42 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar19 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar19 == 0) goto LAB_035574b8;
        fVar62 = *(float *)(unaff_x19 + 0x9b);
        fVar42 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_035574b8;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar19 + 0x18) <= uVar32) ||
         (uVar36 = uVar32 - 1, *(uint *)(lVar19 + 0x18) <= uVar36)) goto LAB_035575f4;
      uVar48 = (ulong)(uint)(fVar42 + *(float *)(unaff_x19 + 0x97));
      fVar55 = (fVar42 + *(float *)(unaff_x19 + 0x97) + fVar62) -
               *(float *)(lVar19 + (long)(int)uVar32 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar19 + (long)(int)uVar36 * (long)iVar15 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar55 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar19 + (long)(int)uVar32 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          in_stack_000017c8 = uVar21;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar62 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar62 <= fVar42) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar48 = (ulong)(uint)fVar42;
              fVar62 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar42 <= fVar62) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar52 = (fVar42 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar52 <= DAT_00d38b84) {
                fVar52 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar42;
              fVar42 = fVar42 - fVar52;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar52 = fVar50;
            if (0.0 < fVar42) {
              fVar52 = fVar50 / (1.0 - fVar42);
            }
            fVar42 = fVar42 + (fVar50 - fVar53 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar52;
LAB_035574e8:
            if (fVar62 <= fVar42) {
              fVar42 = fVar62;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar42;
            return;
          }
LAB_03552d44:
          lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar6;
          }
          iVar10 = *(int *)(*(long *)(lVar19 + 0xb8) + 0xe78);
          if (((iVar10 != iStack0000000000000034) && (iVar10 != -1)) &&
             (((bStack0000000000000070 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x38), lVar19 == 0))
            goto LAB_035574b8;
            uVar32 = *unaff_x20 - 1;
            if (*(uint *)(lVar19 + 0x18) <= uVar32) goto LAB_035575f4;
            iStack0000000000000034 = iVar10;
            if (*(short *)(lVar19 + (long)(int)uVar32 * (long)iVar15 + 0x20) == 0xad) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar32;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              in_stack_000017c8 = CONCAT44(0x2d,uVar32);
              goto LAB_03550bd0;
            }
          }
          if (fVar55 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            FUN_0358cbd4(fStack0000000000000058,uVar20,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            uVar48 = uVar20;
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar62 = fStack00000000000000c4;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar62 = *(float *)(unaff_x19 + 0x59);
              if ((fVar62 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar52 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar55) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar52 <= fVar62) {
                  fVar52 = fVar62;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar52;
                return;
              }
              fVar42 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar62 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar42 < fVar62) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar42 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar48 = (ulong)(uint)fVar42;
              fVar62 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar62 < fVar42) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557594;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_03552ef4_caseD_0;
            case 1:
              lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar41 = *(long *)(lVar19 + 0xb8);
              lVar19 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                lVar19 = FUN_01a46ff8(lVar19);
              }
              piVar22 = (int *)thunk_FUN_01a59484(lVar41 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              if (*piVar22 == 0) {
                bStack0000000000000074 = 0;
                goto LAB_03554580;
              }
              lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar19 + 0xb8) + 0x11f0,&stack0x000008a0,
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
              FUN_0358cbd4(fStack0000000000000058,uVar20,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                           in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              uVar48 = uVar20;
              break;
            case 6:
              lVar19 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar20 = FUN_036cee6c(lVar19,0,0);
              if ((uVar20 & 1) != 0) {
                plVar40 = (long *)unaff_x19[0x5d];
                uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar40 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar40 + 0x528))(plVar40,uVar21,*(undefined8 *)(*plVar40 + 0x530));
                lVar19 = unaff_x19[0x5d];
                if (lVar19 == 0) goto LAB_035574b8;
                *(int *)(lVar19 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar19,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
          in_stack_000017c8 = uVar21;
        }
      }
      else {
        bStack0000000000000074 = 0;
        *unaff_x20 = uVar36;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        in_stack_000017c8 = CONCAT44(0x2d,uVar36);
      }
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar44 = (float)uVar48;
      fVar53 = 0.0;
      if ((0.0 < fVar44) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar53 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar48 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar44)) + fVar53)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar60;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar19 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar19,0,0);
        if ((uVar20 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar40 != (long *)0x0) {
            (**(code **)(*plVar40 + 0x528))(plVar40,uVar21,*(undefined8 *)(*plVar40 + 0x530));
            lVar19 = unaff_x19[0x5d];
            if (lVar19 != 0) {
              *(int *)(lVar19 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar19,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
        lVar19 = *in_stack_00000170;
        if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x50), lVar41 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
        *(int *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar20 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x50), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) + 1;
    }
LAB_035530c4:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar53 = *(float *)(unaff_x19 + 0x3d);
      iVar10 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar56 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar19 = unaff_x19[0xca];
      fVar44 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar44 = 1.0;
      }
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_035574b8;
      fVar50 = *(float *)((long)unaff_x19 + 0x404);
      fVar42 = *(float *)(lVar19 + 0x2c);
      fVar45 = (float)FUN_03776ea8(*(long *)(lVar19 + 0x20),0);
      fVar62 = *_fStack00000000000000a8;
      fVar45 = fVar50 * (fVar53 / (float)iVar10) * fVar56 * fVar44 * fVar42 * fVar45;
      fVar53 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0)) goto LAB_035574b8;
        uVar60 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar19 + 0x18) <= uVar60) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar44 = *(float *)(lVar19 + (long)(int)uVar60 * (long)iVar15 + 0x60);
        iVar10 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar50 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar19 = unaff_x19[0xca];
        fVar56 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar56 = 1.0;
        }
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_035574b8;
        fVar42 = *(float *)((long)unaff_x19 + 0x404);
        fVar55 = *(float *)(lVar19 + 0x2c);
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar19 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000170 + 0x50), lVar19 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar62 = *(float *)(lVar19 + 0x60);
        fVar53 = *(float *)(lVar19 + 100);
        fVar45 = fVar42 * (fVar44 / (float)iVar10) * fVar50 * fVar56 * fVar55 * fVar45;
      }
      fVar50 = *(float *)(unaff_x19 + 0x9b);
      fVar44 = 0.0;
      fVar56 = 0.0;
      if ((0.0 < fVar50) && (fVar56 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar56 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar55 = *(float *)(unaff_x19 + 0x97);
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar42 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar19 = *(long *)(unaff_x19[0xca] + 0x20), lVar19 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar19,0);
        fVar44 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar54 = *(float *)(unaff_x19 + 0x6c);
      fVar53 = (fStack000000000000009c - fVar62) - fVar53;
      bVar8 = true;
      if ((fVar54 <= fVar53) && (bVar8 = false, !NAN(fVar54))) {
        bVar8 = fVar54 == -1.0;
      }
      if (!bVar8) {
        fVar53 = fVar54;
      }
      fVar62 = 1.0;
      if ((uVar61 & 0x18) != 0) {
        fVar62 = DAT_00d38acc;
      }
      if (((fVar55 - (fVar46 - fVar50)) + fVar56 < fStack00000000000000c4) &&
         (ABS(fVar42) + fVar45 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar62 * fVar53)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar19 = *(long *)(*(long *)puVar6 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar19 + 0x788),0x378);
        FUN_0209b210(lVar19 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar19 = *in_stack_00000170;
    if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar60 = *(uint *)(unaff_x19 + 0x95);
    lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar41 + 100) = uVar60;
    *(int *)(lVar41 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar19 = *(long *)(lVar19 + 0x50);
      if (lVar19 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar19 + 0x18) <= uVar60) goto LAB_035575f4;
      *(int *)(lVar19 + (long)(int)uVar60 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x50);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar60) goto LAB_035575f4;
      if (*(int *)(lVar19 + (long)(int)uVar60 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar43 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar44 = *(float *)(unaff_x19 + 200);
      fVar53 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar53 = fVar52 * fVar43 * fVar53;
      fVar43 = fVar53 * (float)(int)(fVar44 / fVar53);
      uVar48 = (ulong)(uint)fVar43;
      if (fVar43 <= fVar44) {
        fVar43 = fVar44 + fVar53;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar43;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar44 = 1.0;
        }
        else {
          fVar44 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar43 = *(float *)(unaff_x19 + 200);
        fVar56 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar53 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar43 = fVar43 + fVar53 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar52 * (fStack000000000000012c + fVar44 * fVar56) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar43;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar52 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar48 = (ulong)(uint)fVar43;
      fVar43 = *(float *)(unaff_x19 + 200) - fVar43;
      *(float *)(unaff_x19 + 200) = fVar43;
      if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
        fVar53 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar48 = (ulong)(uint)fVar53;
        fVar43 = fVar43 - fVar53;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar53 = *(float *)(unaff_x19 + 200);
      fVar43 = fVar53 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar43) +
                        fStack00000000000000d4 *
                        (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar43;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar48 = (ulong)(uint)fVar53, unaff_w27 != 0)) {
        fVar53 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar48 = (ulong)(uint)fVar53;
        fVar43 = fVar43 + fVar53;
        goto LAB_03553678;
      }
    }
    lVar19 = *in_stack_00000170;
    if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    uVar60 = *unaff_x20;
    uVar61 = (uint)*(undefined8 *)(lVar41 + 0x18);
    if (uVar61 <= uVar60) goto LAB_035575f4;
    *(float *)(lVar41 + (long)(int)uVar60 * unaff_x24 + 0x144) = fVar43;
    uVar32 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar60 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar48 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar60 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar43 = *(float *)(unaff_x19 + 0x99);
        fVar53 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar43 = fVar43 - fVar53;
        if (((fStack000000000000005c < ABS(fVar43)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar43);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar43;
          *(float *)(unaff_x19 + 0x9b) = fVar43 + *(float *)(unaff_x19 + 0x9b);
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar19 = *(long *)puVar6;
          }
          lVar41 = *(long *)(lVar19 + 0xb8);
          if (*(int *)(lVar41 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar41 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar19 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar19 + 0xb8) + 0x818,0);
            lVar19 = *(long *)(*(long *)puVar6 + 0xb8);
            *(float *)(lVar19 + 0x7bc) = fVar43 + *(float *)(lVar19 + 0x7bc);
            *(float *)(lVar19 + 0x800) = fVar43 + *(float *)(lVar19 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar19 + 0x788),0x378);
            FUN_0209b210(lVar19 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar44 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar53 = *(float *)((long)unaff_x19 + 0x4cc) - fVar44;
      fVar43 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar53 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar43 = fVar53;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
      fVar56 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar43;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar19 = *in_stack_00000170;
      if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x50), lVar41 == 0)) goto LAB_035574b8;
      uVar60 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar41 + 0x18) <= uVar60) goto LAB_035575f4;
      lVar28 = unaff_x19[0x93];
      lVar18 = lVar41 + (long)(int)uVar60 * 0x5c;
      *(int *)(lVar18 + 0x34) = (int)lVar28;
      uVar61 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar28 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar61 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar61;
      *(uint *)(lVar18 + 0x38) = uVar61;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar10 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar61 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar10 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar10;
      *(int *)(lVar18 + 0x40) = iVar10;
      *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar61) goto LAB_035575f4;
      uVar12 = *(undefined4 *)(lVar19 + (long)(int)uVar61 * (long)iVar15 + 0x11c);
      lVar41 = lVar41 + (long)(int)uVar60 * 0x5c;
      *(float *)(lVar41 + 0x70) = fVar53;
      *(undefined4 *)(lVar41 + 0x6c) = uVar12;
      lVar19 = *in_stack_00000170;
      if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x50), lVar41 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar56 = fVar56 - fVar44;
      uVar48 = (ulong)(uint)fVar56;
      lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar41 + 0x74) =
           *(undefined4 *)
            (lVar19 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar41 + 0x78) = fVar56;
      lVar19 = *in_stack_00000170;
      if ((lVar19 == 0) || (lVar28 = *(long *)(lVar19 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar41 = lVar28 + lVar18 * 0x5c;
      *(float *)(lVar41 + 0x44) = *(float *)(lVar41 + 0x74) - fVar52 * fStack000000000000015c;
      *(float *)(lVar41 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar41 + 0x24) == 1) {
        *(int *)(lVar28 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar41 = *(long *)(lVar19 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar61 = (uint)*(undefined8 *)(lVar41 + 0x18);
      if (uVar61 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar41 + lVar39 * unaff_x24 + 0x194) == '\0') &&
         (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar61 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar28 = lVar28 + lVar18 * 0x5c;
      fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar52 = -fVar43;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar52 = fVar43;
      }
      *(float *)(lVar28 + 0x58) = *(float *)(lVar41 + lVar39 * unaff_x24 + 0x144) + fVar52;
      *(float *)(lVar28 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar28 + 0x54) = fVar53;
      *(float *)(lVar28 + 0x48) = in_stack_00000060 + (fVar56 - fVar53);
      *(float *)(lVar28 + 0x4c) = fVar56;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar19 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar10 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar10;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar19 != 0) && (*(long *)(lVar19 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar19 + 0x50) + 0x18) <= iVar10) {
              FUN_0358ca18();
              lVar19 = unaff_x19[0x6d];
              if (lVar19 == 0) goto LAB_035574b8;
            }
            lVar19 = *(long *)(lVar19 + 0x38);
            if (lVar19 != 0) {
              if (*unaff_x20 < *(uint *)(lVar19 + 0x18)) {
                fVar52 = *(float *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar43 = 0.0, in_stack_000017dc == 10)) {
                    fVar43 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar24 = 0;
                  fVar43 = fVar52 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar43) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar43 = 0.0, in_stack_000017dc == 10)) {
                    fVar43 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar24 = 1;
                  fVar43 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar43);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar43;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar24;
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar19 = *(long *)puVar6;
                }
                uVar17 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar52;
                uVar48 = NEON_rev64(uVar17,4);
                unaff_x19[0x99] = uVar48;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068._4_4_ = 1;
                bStack0000000000000070 = 1;
                in_stack_000017c8 = uVar21;
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
    uVar60 = *unaff_x20;
    if (uVar61 <= uVar60) goto LAB_035575f4;
    if (*(char *)(lVar41 + (long)(int)uVar60 * unaff_x24 + 0x194) != '\0') {
      lVar41 = lVar41 + (long)(int)uVar60 * unaff_x24;
      uVar48 = *(ulong *)(lVar41 + 0x11c);
      uVar20 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar20 ^ (uVar20 ^ uVar48) &
                    ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar48 >> 0x20)),
                              -(uint)((float)uVar20 < (float)uVar48));
      uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar48 = *(ulong *)(lVar41 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar20 ^ (uVar20 ^ uVar48) &
                    ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar20 >> 0x20)),
                              -(uint)((float)uVar48 < (float)uVar20));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
      lVar41 = *(long *)(lVar19 + 0x58);
      if (lVar41 == 0) goto LAB_035574b8;
      iVar10 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar41 + 0x18) < iVar10) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar19 + 0x58),iVar10,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar19 = *in_stack_00000170;
        if (lVar19 == 0) goto LAB_035574b8;
      }
      lVar41 = *(long *)(lVar19 + 0x58);
      if (lVar41 == 0) goto LAB_035574b8;
      uVar61 = *(uint *)(unaff_x19 + 0x96);
      lVar28 = (long)(int)uVar61;
      uVar60 = *(uint *)(lVar41 + 0x18);
      if (uVar60 <= uVar61) goto LAB_035575f4;
      lVar18 = lVar41 + lVar28 * 0x14;
      fVar43 = *(float *)(lVar18 + 0x30);
      uVar48 = (ulong)(uint)fVar43;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar43 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar52 = fVar43;
      }
      *(float *)(lVar18 + 0x30) = fVar52;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar32 == 0 && uVar61 == 0) {
        *(uint *)(lVar41 + (ulong)uVar61 * 0x14 + 0x20) = uVar32;
      }
      else {
        uVar36 = uVar32 - 1;
        if (0 < (int)uVar32) {
          lVar19 = *(long *)(lVar19 + 0x38);
          if (lVar19 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_035575f4;
          if (uVar61 != *(uint *)(lVar19 + (ulong)uVar36 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar61 - 1 < uVar60) {
              *(uint *)(lVar41 + 0x20 + (long)(int)(uVar61 - 1) * 0x14 + 4) = uVar36;
              *(uint *)(lVar41 + 0x20 + lVar28 * 0x14) = uVar32;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar32 == in_stack_00000088._4_4_) {
          *(float *)(lVar41 + lVar28 * 0x14 + 0x24) = in_stack_00000088._4_4_;
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
             (0x1d < in_stack_000017dc - 0xa961)) || (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0))
           && ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
                (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
        goto LAB_03553f78;
        lVar19 = FUN_035978e8(0);
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) goto LAB_035574b8;
        uVar60 = FUN_0219c130(*(long *)(lVar19 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          uVar16 = in_stack_000017dc;
          if ((uVar60 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if (uVar11 != uVar58 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
          if (unaff_w27 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar19 = FUN_035978e8(0);
        if (((lVar19 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar41 = *(long *)(*in_stack_00000170 + 0x38), lVar41 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar19 + 0x18) == 0) goto LAB_035574b8;
        uVar16 = (uint)*(ushort *)(lVar41 + (long)(int)(*unaff_x20 + 1) * (long)iVar15 + 0x20);
        uVar20 = FUN_0219c130(*(long *)(lVar19 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar60 & 1) != 0) goto LAB_035541dc;
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
      *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_035542ac:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    in_stack_000017c8 = uVar21;
  }
LAB_03550bd0:
  do {
    unaff_d11 = unaff_d13 & 0xffffffff;
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar19 = unaff_x19[0x8f];
    if (lVar19 == 0) goto LAB_035574b8;
    if ((int)*(uint *)(lVar19 + 0x18) <= (int)in_stack_000017a8) {
LAB_0355459c:
      fVar52 = (float)uVar48;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar52 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar43 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar52 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar53 = (*(float *)((long)unaff_x19 + 0x23c) - fVar52) * 0.5;
          if (fVar53 <= DAT_00d38b84) {
            fVar53 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar52;
          fVar53 = (fVar52 + fVar53) * 20.0 + 0.5;
          fVar52 = DAT_00d38e60;
          if (fVar53 != INFINITY) {
            fVar52 = (float)(int)fVar53 / 20.0;
          }
          if (fVar43 <= fVar52) {
            fVar52 = fVar43;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar6 = PTR_DAT_03cbdf88;
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
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar63 == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = *(long *)puVar7;
      }
      plVar40 = (long *)OVRPlugin_Media_TypeInfo;
      lVar19 = **(long **)(lVar19 + 0xb8);
      if (lVar19 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar15 = *(int *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar19 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar10 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar19 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)uStack00000000000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar10 < 0x401) {
        if (iVar10 == 0x100) {
          if (lVar19 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar19 + 0x18) < 2) goto LAB_035575f4;
          uVar21 = *(undefined8 *)(lVar19 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar41 = *(long *)(*in_stack_00000170 + 0x58), lVar41 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar52 = *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar52 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar19 + 0x2c);
          fVar52 = (0.0 - fVar52) - fStack0000000000000020;
        }
        else if (iVar10 == 0x200) {
          if (lVar19 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
          uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar19 + 0x24) +
                            (float)*(undefined8 *)(lVar19 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000170 + 0x58), lVar19 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar19 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar19 = lVar19 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar52 = ((fStack0000000000000020 + *(float *)(lVar19 + 0x28) +
                      *(float *)(lVar19 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar52 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar10 != 0x400) goto LAB_03554c4c;
          if (lVar19 == 0) goto LAB_035574b8;
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
          uVar21 = *(undefined8 *)(lVar19 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar41 = *(long *)(*in_stack_00000170 + 0x58), lVar41 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar19 + 0x20);
          fVar52 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,(float)uVar21 + fVar52);
      }
      else if (iVar10 == 0x800) {
        if (lVar19 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0)) goto LAB_035575f4;
        fVar52 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar19 + 0x24) +
                              (float)*(undefined8 *)(lVar19 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar52;
      }
      else {
        if (iVar10 == 0x1000) {
          if (lVar19 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar19 + 0x18) != 1) && (*(int *)(lVar19 + 0x18) != 0)) {
            uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar19 + 0x24) +
                              (float)*(undefined8 *)(lVar19 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
            fVar52 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar10 == 0x2000) {
          if (lVar19 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0)) goto LAB_035575f4;
          fVar52 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar19 + 0x24) +
                                (float)*(undefined8 *)(lVar19 + 0x30)) * 0.5 + fVar52);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar21 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar6);
      }
      uVar20 = FUN_036d35a8(uVar21,0,0);
      lVar19 = FUN_0357f060();
      if (lVar19 == 0) goto LAB_035574b8;
      FUN_036df824(lVar19,0);
      *(float *)(unaff_x19 + 0xe2) = fVar52;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar10 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar43 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar12 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar6 = OVRPlugin_Mesh_TypeInfo;
      lVar19 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = *(long *)puVar6;
      }
      puVar26 = *(undefined4 **)(lVar19 + 0xb8);
      uVar48 = (ulong)(uint)puVar26[1];
      uVar49 = (ulong)(uint)puVar26[2];
      uVar51 = (ulong)(uint)puVar26[3];
      FUN_035683a4(*puVar26,uVar48,uVar49,uVar51,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar19 = *in_stack_00000170;
      if (lVar19 == 0) goto LAB_035574b8;
      uVar16 = *unaff_x20;
      if ((int)uVar16 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar15 = 0;
        goto LAB_03556f00;
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      fVar52 = ABS(fVar52);
      fVar53 = 1.0;
      if ((uVar20 & 1) == 0) {
        fVar53 = fVar52;
      }
      if (lVar19 == 0) goto LAB_035574b8;
      bVar9 = false;
      bVar5 = false;
      _fStack0000000000000128 = 0;
      bVar8 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar41 = 0x2e0;
      fVar56 = 0.0;
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
      uVar11 = 1;
      uVar58 = 0;
      goto LAB_03554e78;
    }
    if (*(uint *)(lVar19 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    in_stack_000017dc = *(uint *)(lVar19 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
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
      in_stack_000017c8 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_000017dc != 0x3c)) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar19 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar19 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar19 + 0x38);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar20 = FUN_03586568();
      if (((uVar20 & 1) != 0) &&
         (in_stack_000017a8 = in_stack_0000178c, uVar63 = in_stack_000017dc,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x38), lVar19 == 0))
    goto LAB_035574b8;
    uVar11 = *unaff_x20;
    if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar28 = (long)(int)uVar11;
    unaff_w26 = (uint)*(byte *)(lVar19 + lVar28 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar41 = unaff_x19[0x24];
    if ((uint)in_stack_000017c8 == uVar11) {
      in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017dc == 0x2026) {
        *(long *)(lVar19 + lVar28 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x38), lVar19 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar19 + 0x2c) = 0;
        *(long *)(lVar19 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x38), lVar19 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0)) goto LAB_035574b8;
        uVar11 = *unaff_x20;
        if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar19 + (long)(int)uVar11 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_000017c8 = CONCAT44(3,uVar11 + 1);
      }
      else if (in_stack_000017dc == 3) {
        if ((*unaff_x21 == 0) || (lVar18 = FUN_03568ac0(*unaff_x21,0), lVar18 == 0))
        goto LAB_035574b8;
        FUN_0219b634(lVar18,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
        *(ulong *)(lVar19 + lVar28 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,uVar16);
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
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar19 = lVar19 + (long)(int)uVar11 * (long)iVar15;
      *(undefined1 *)(lVar19 + 0x194) = 0;
      *(undefined2 *)(lVar19 + 0x20) = 0x200b;
      *(undefined4 *)(lVar19 + 100) = 0;
      *unaff_x20 = uVar11 + 1;
      uVar63 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
    iVar10 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar10 != 0) {
      fStack0000000000000158 = 1.0;
      if (iVar10 == 0) goto LAB_03550fec;
LAB_03550c00:
      if (iVar10 != 1) {
        lVar19 = *in_stack_00000170;
        unaff_s8 = 0.0;
        unaff_d13 = 0;
        if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
          unaff_d13 = unaff_d11;
        }
        if (lVar19 == 0) goto LAB_035574b8;
        fVar44 = 0.0;
        in_stack_00000120 = 0.0;
        goto LAB_035514cc;
      }
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar19 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar19 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar19,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar19 = CONCAT44(in_stack_000008a4,uVar16);
      uVar63 = in_stack_000017dc;
      if (lVar19 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)puVar6;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar52 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar10 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar53 = (float)FUN_03776960(&stack0x00001720,0);
        fVar43 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar43 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar43 = (fVar52 / (float)iVar10) * fVar53 * fVar43;
        iVar10 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar52 = *(float *)(unaff_x19 + 0x3d);
        if (iVar10 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar10 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar53 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          in_stack_00000120 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000120 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar56 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar19 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar19 + 0x20),0);
          fVar45 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar19 + 0x20) == 0) goto LAB_035574b8;
          fVar62 = *(float *)(lVar19 + 0x2c);
          fVar50 = (float)FUN_03776ea8(*(long *)(lVar19 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar42 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar46 = *(float *)((long)unaff_x19 + 0x404);
          fVar55 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          unaff_s8 = fVar43 * fVar42 * fVar46 * fVar55;
          in_stack_00000120 = (fVar52 / (float)iVar10) * fVar53 * in_stack_00000120;
          fVar43 = in_stack_00000120 * (fVar56 / fVar45) * fVar62 * fVar50;
          in_stack_00000120 = in_stack_00000120 / fVar43;
          fVar44 = in_stack_00000120 * fVar44;
          fVar52 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          in_stack_00000120 = in_stack_00000120 * fVar52;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar10 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar53 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar19 + 0x20) == 0) goto LAB_035574b8;
          fVar45 = *(float *)(lVar19 + 0x2c);
          fVar56 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar56 = 1.0;
          }
          fVar50 = (float)FUN_03776ea8(*(long *)(lVar19 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar62 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar55 = *(float *)((long)unaff_x19 + 0x404);
          fVar42 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          unaff_s8 = fVar43 * fVar62 * fVar55 * fVar42;
          fVar43 = (fVar52 / (float)iVar10) * fVar53 * fVar56 * fVar45 * fVar50;
          in_stack_00000120 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        unaff_d11 = (ulong)(uint)fVar43;
        *in_stack_000000e0 = lVar19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar19);
        if ((*in_stack_00000170 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar19 + 0x2c) = 1;
        *(float *)(lVar19 + 0x160) = fVar43;
        *(long *)(lVar19 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar19 = *in_stack_00000170;
        if ((lVar19 == 0) || (lVar28 = *(long *)(lVar19 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fStack000000000000015c = 0.0;
        *(int *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
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
          uVar20 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar20 & 1) != 0) {
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
        uVar20 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar20 & 1) != 0) {
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
      uVar20 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar20 & 1) != 0) {
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
    if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar63 = in_stack_000017dc;
  } while (*in_stack_000000e0 == 0);
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  uVar58 = *unaff_x20;
  uVar11 = *(uint *)(lVar19 + 0x18);
  if (uVar11 <= uVar58) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar19 + (long)(int)uVar58 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar52 = *(float *)(unaff_x19 + 0x3d);
    iVar10 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar19 = unaff_x19[0x20];
  }
  else {
    lVar41 = unaff_x19[0x8f];
    if (lVar41 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar41 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar58 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar11 <= uVar58 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar52 = *(float *)(lVar19 + (long)(int)(uVar58 - 1) * (long)iVar15 + 0x60);
    iVar10 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar19 = *unaff_x21;
  }
  if (lVar19 == 0) goto LAB_035574b8;
  fVar53 = (float)FUN_03776960(lVar19 + 0x50,0);
  fVar43 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar43 = 1.0;
  }
  in_stack_00000120 = 0.0;
  fVar44 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar44 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000120 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar19 = unaff_x19[0xc9];
  if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_035574b8;
  fVar45 = *(float *)((long)unaff_x19 + 0x404);
  fVar50 = *(float *)(lVar19 + 0x2c);
  fVar56 = (float)FUN_03776ea8(*(long *)(lVar19 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar62 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar55 = *(float *)((long)unaff_x19 + 0x404);
  fVar42 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar19 = unaff_x19[0x6d];
  if ((lVar19 == 0) || (lVar41 = *(long *)(lVar19 + 0x38), lVar41 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar41 + 0x2c) = 0;
  fVar43 = ((fStack0000000000000158 * fVar52) / (float)iVar10) * fVar53 * fVar43;
  fVar56 = fVar43 * fVar45 * fVar50 * fVar56;
  unaff_d11 = (ulong)(uint)fVar56;
  *(float *)(lVar41 + 0x160) = fVar56;
  uVar11 = *(uint *)(unaff_x19 + 0x24);
  unaff_s8 = fVar43 * fVar62 * fVar55 * fVar42;
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
  unaff_d13 = 0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    unaff_d13 = unaff_d11;
  }
LAB_035514cc:
  lVar19 = *(long *)(lVar19 + 0x38);
  if (lVar19 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar19 = lVar19 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar19 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar19 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar19 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar19 = *(long *)(unaff_x19[0x6d] + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  uVar11 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar19 = lVar19 + (long)(int)uVar11 * unaff_x24;
  *(undefined4 *)(lVar19 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar19 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar19 + 0x17c) = CONCAT44(in_stack_000008a4,uVar16);
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar19 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar19 = *(long *)(unaff_x19[0xc9] + 0x20), lVar19 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar19,0);
  unaff_x22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
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
  unaff_x28 = in_stack_00000170;
  if (*(char *)((long)unaff_x19 + 0x2f9) != '\0') goto code_r0x03551670;
  _fStack0000000000000128 = (ulong)(uint)fVar44;
  unaff_d15 = 0;
  unaff_d12 = 0;
  uVar21 = in_stack_000017c8;
  goto LAB_03551850;
LAB_03554e78:
  uVar16 = uVar11 - 1;
  if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x50), lVar28 == 0))
  goto LAB_035574b8;
  lVar39 = (long)(int)uVar16;
  lVar18 = lVar19 + lVar39 * 0x178;
  uVar60 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar28 + 0x18) <= uVar60) goto LAB_035575f4;
  lVar37 = (long)(int)uVar60;
  lVar28 = lVar28 + lVar37 * 0x5c;
  lVar33 = *(long *)(lVar18 + 0x38);
  uVar3 = *(ushort *)(lVar18 + 0x20);
  uVar63 = *(uint *)(lVar28 + 0x3c);
  uVar61 = *(uint *)(lVar28 + 0x68);
  iVar2 = *(int *)(lVar28 + 0x20);
  iVar13 = *(int *)(lVar28 + 0x28);
  iVar14 = *(int *)(lVar28 + 0x2c);
  uVar32 = *(uint *)(lVar28 + 0x40);
  lVar18 = (long)(int)uVar32;
  fVar62 = *(float *)(lVar28 + 0x4c);
  fVar55 = *(float *)(lVar28 + 0x54);
  fVar45 = *(float *)(lVar28 + 0x58);
  fVar57 = *(float *)(lVar28 + 0x5c);
  fVar46 = *(float *)(lVar28 + 0x60);
  fVar54 = *(float *)(lVar28 + 0x6c);
  fVar59 = *(float *)(lVar28 + 0x70);
  fVar50 = *(float *)(lVar28 + 0x74);
  fVar42 = *(float *)(lVar28 + 0x78);
  uVar36 = (uint)uVar3;
  if ((int)uVar61 < 9) {
    switch(uVar61) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar46 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar45;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar46 + fVar57 * 0.5) - fVar45 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar57 + fVar46) - fVar45;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar57 + fVar46;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar61 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar19 + 0x18) <= uVar63) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar19 + (long)(int)uVar63 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b8cc4(uVar4,0);
      if ((uVar20 & 1) == 0) {
        bVar1 = (int)uVar60 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar45 <= fVar57) && (!bVar1 && uVar61 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar57 + fVar46;
        }
        goto LAB_03555088;
      }
      if (((uVar11 == 1) || (uVar60 != uVar58)) || (uVar16 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar57 + fVar46;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar36,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar25 = (char)unaff_x19[0x1e];
        fVar46 = -fVar45;
        if (cVar25 != '\0') {
          fVar46 = fVar45;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar63) goto LAB_035575f4;
        iVar14 = (int)*(char *)(lVar19 + (long)(int)uVar63 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar45 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar45 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar36 == 9) {
LAB_03556e74:
          fVar45 = 1.0 - fVar45;
        }
        else {
          if (uVar36 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b97f8(uVar36,0);
            cVar25 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_03556e74;
          }
          iVar14 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar13;
        }
        fVar45 = ((fVar57 + fVar46) * fVar45) / (float)iVar14;
        if (cVar25 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar45;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar45;
        }
      }
    }
  }
  else if (uVar61 == 0x20) {
    fVar45 = fVar54 + fVar50;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar61 = (uint)*(undefined8 *)(lVar19 + 0x18);
  if (uVar61 <= uVar16) goto LAB_035575f4;
  lVar28 = lVar19 + lVar39 * 0x178;
  fVar57 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar45 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar46 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar28 + 0x194) == '\0') goto LAB_03555938;
  iVar13 = *(int *)(lVar19 + lVar39 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0355574c;
  fVar56 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar60,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar19 + lVar39 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar56 = 1.0;
    break;
  case 1:
    fVar42 = *(float *)(lVar19 + lVar39 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar19 + lVar39 * 0x178;
      fVar50 = (in_stack_000000f8._4_4_ + fVar42) - *(float *)(in_stack_00000080 + 0x230);
      fVar42 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar27 = lVar19 + lVar39 * 0x178;
    fVar50 = fVar50 - fVar54;
    *(float *)(lVar27 + 0x84) = fVar56 + (fVar42 - fVar54) / fVar50;
    *(float *)(lVar27 + 0xac) = fVar56 + (*(float *)(lVar27 + 0x98) - fVar54) / fVar50;
    *(float *)(lVar27 + 0xd4) = fVar56 + (*(float *)(lVar27 + 0xc0) - fVar54) / fVar50;
    fVar56 = fVar56 + (*(float *)(lVar27 + 0xe8) - fVar54) / fVar50;
    break;
  case 2:
    lVar27 = lVar19 + lVar39 * 0x178;
    fVar42 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar50 = (in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar27 + 0x84) = fVar56 + fVar50 / fVar42;
    *(float *)(lVar27 + 0xac) =
         fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar56 = fVar56 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar19 + lVar39 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar19 + lVar39 * 0x178;
      fVar42 = fVar42 - fVar59;
      fVar50 = fVar56 + (*(float *)(lVar27 + 0x74) - fVar59) / fVar42;
      fVar42 = fVar56 + (*(float *)(lVar27 + 0x9c) - fVar59) / fVar42;
      *(float *)(lVar27 + 0x88) = fVar50;
      *(float *)(lVar27 + 0xb0) = fVar42;
      *(float *)(lVar27 + 0xd8) = fVar50;
      *(float *)(lVar27 + 0x100) = fVar42;
      break;
    case 2:
      lVar27 = lVar19 + lVar39 * 0x178;
      fVar50 = fVar56 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar50;
      fVar42 = *(float *)(unaff_x19 + 0x9c);
      fVar54 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar50;
      fVar50 = fVar56 + (*(float *)(lVar27 + 0x9c) - fVar42) / (fVar54 - fVar42);
      *(float *)(lVar27 + 0xb0) = fVar50;
      *(float *)(lVar27 + 0x100) = fVar50;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar61 = (uint)*(undefined8 *)(lVar19 + 0x18);
    }
    if (uVar61 <= uVar16) goto LAB_035575f4;
    lVar27 = lVar19 + lVar39 * 0x178;
    fVar50 = *(float *)(lVar27 + 0x15c);
    fVar42 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar50) * 0.5;
    fVar54 = fVar56 + *(float *)(lVar27 + 0x88) * fVar50 + fVar42;
    fVar56 = fVar56 + fVar42 + *(float *)(lVar27 + 0xb0) * fVar50;
    *(float *)(lVar27 + 0x84) = fVar54;
    *(float *)(lVar27 + 0xac) = fVar54;
    *(float *)(lVar27 + 0xd4) = fVar56;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar19 + lVar39 * 0x178 + 0xfc) = fVar56;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar61 <= uVar16) goto LAB_035575f4;
    lVar27 = lVar19 + lVar39 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar16 < uVar61) {
      lVar27 = lVar19 + lVar39 * 0x178;
      fVar62 = fVar62 - fVar55;
      fVar56 = (*(float *)(lVar27 + 0x74) - fVar55) / fVar62;
      fVar62 = (*(float *)(lVar27 + 0x9c) - fVar55) / fVar62;
      *(float *)(lVar27 + 0x88) = fVar56;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar61 <= uVar16) goto LAB_035575f4;
    lVar27 = lVar19 + lVar39 * 0x178;
    fVar56 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar56;
    fVar62 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar27 + 0xb0) = fVar62;
    *(float *)(lVar27 + 0xd8) = fVar62;
    *(float *)(lVar27 + 0x100) = fVar56;
    break;
  case 3:
    if (uVar61 <= uVar16) goto LAB_035575f4;
    lVar27 = lVar19 + lVar39 * 0x178;
    fVar62 = *(float *)(lVar27 + 0x15c);
    fVar50 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar62) * 0.5;
    fVar56 = *(float *)(lVar27 + 0x84) / fVar62 + fVar50;
    fVar50 = fVar50 + *(float *)(lVar27 + 0xd4) / fVar62;
    *(float *)(lVar27 + 0x88) = fVar56;
    *(float *)(lVar27 + 0xb0) = fVar50;
    *(float *)(lVar27 + 0x100) = fVar56;
    *(float *)(lVar27 + 0xd8) = fVar50;
  }
  if (uVar61 <= uVar16) goto LAB_035575f4;
  lVar27 = lVar19 + lVar39 * 0x178;
  fVar56 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar19 + lVar39 * 0x178 + 400) & 1) != 0)) {
    fVar56 = -fVar56;
  }
  fVar50 = fVar52;
  if (((iVar10 == 2) || (fVar50 = fVar53, iVar10 == 1)) || (fVar50 = fVar52 / fVar43, iVar10 == 0))
  {
    fVar56 = fVar50 * fVar56;
  }
  lVar27 = lVar19 + lVar39 * 0x178;
  fVar62 = *(float *)(lVar27 + 0x88);
  fVar42 = *(float *)(lVar27 + 0x84);
  fVar50 = -2.1474836e+09;
  if (fVar42 != INFINITY) {
    fVar50 = (float)(int)fVar42;
  }
  fVar54 = *(float *)(lVar27 + 0xd4);
  fVar59 = *(float *)(lVar27 + 0xd8);
  fVar55 = -2.1474836e+09;
  if (fVar62 != INFINITY) {
    fVar55 = (float)(int)fVar62;
  }
  uVar47 = FUN_03591d3c(fVar42 - fVar50,fVar62 - fVar55);
  *(undefined4 *)(lVar27 + 0x84) = uVar47;
  if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_035575f4;
  fVar59 = fVar59 - fVar55;
  *(float *)(lVar27 + 0x88) = fVar56;
  uVar47 = FUN_03591d3c(fVar42 - fVar50,fVar59);
  *(undefined4 *)(lVar19 + lVar39 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_035575f4;
  fVar54 = fVar54 - fVar50;
  *(float *)(lVar19 + lVar39 * 0x178 + 0xb0) = fVar56;
  fVar50 = (float)FUN_03591d3c(fVar54,fVar59);
  *(float *)(lVar27 + 0xd4) = fVar50;
  if (*(uint *)(lVar19 + 0x18) <= uVar16) goto LAB_035575f4;
  *(float *)(lVar27 + 0xd8) = fVar56;
  uVar47 = FUN_03591d3c(fVar54,fVar62 - fVar55);
  *(undefined4 *)(lVar19 + lVar39 * 0x178 + 0xfc) = uVar47;
  uVar61 = (uint)*(undefined8 *)(lVar19 + 0x18);
  if (uVar61 <= uVar16) goto LAB_035575f4;
  *(float *)(lVar19 + lVar39 * 0x178 + 0x100) = fVar56;
LAB_0355574c:
  if (((int)uVar16 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar60 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar61 <= uVar16) goto LAB_035575f4;
      lVar28 = lVar19 + lVar39 * 0x178;
      *(ulong *)(lVar28 + 0x70) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar28 + 0x70));
      *(float *)(lVar28 + 0x78) = fVar46 + *(float *)(lVar28 + 0x78);
      *(ulong *)(lVar28 + 0x98) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar28 + 0x98));
      *(float *)(lVar28 + 0xa0) = fVar46 + *(float *)(lVar28 + 0xa0);
      *(ulong *)(lVar28 + 0xc0) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar28 + 0xc0));
      *(float *)(lVar28 + 200) = fVar46 + *(float *)(lVar28 + 200);
      *(ulong *)(lVar28 + 0xe8) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar28 + 0xe8));
      *(float *)(lVar28 + 0xf0) = fVar46 + *(float *)(lVar28 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar60 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar16 < uVar61) {
        if (*(uint *)(lVar19 + lVar39 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar28 = lVar19 + lVar39 * 0x178;
          *(ulong *)(lVar28 + 0x70) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar28 + 0x70));
          *(float *)(lVar28 + 0x78) = fVar46 + *(float *)(lVar28 + 0x78);
          *(ulong *)(lVar28 + 0x98) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar28 + 0x98));
          *(float *)(lVar28 + 0xa0) = fVar46 + *(float *)(lVar28 + 0xa0);
          *(ulong *)(lVar28 + 0xc0) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar28 + 0xc0));
          *(float *)(lVar28 + 200) = fVar46 + *(float *)(lVar28 + 200);
          *(ulong *)(lVar28 + 0xe8) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar28 + 0xe8));
          *(float *)(lVar28 + 0xf0) = fVar46 + *(float *)(lVar28 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar61 <= uVar16) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar61 = *(uint *)(lVar19 + 0x18);
  }
  puVar6 = PTR_DAT_03cbded8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar27 = lVar19 + lVar39 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar47;
  if (uVar61 <= uVar16) goto LAB_035575f4;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar27 = lVar19 + lVar39 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar47;
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
  if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
  lVar28 = lVar28 + lVar39 * 0x178;
  uVar21 = *(undefined8 *)(lVar28 + 0x11c);
  *(undefined8 *)(lVar28 + 0x11c) =
       CONCAT44(fVar45 + (float)((ulong)uVar21 >> 0x20),fVar57 + (float)uVar21);
  *(float *)(lVar28 + 0x124) = fVar46 + *(float *)(lVar28 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
  lVar28 = lVar28 + lVar39 * 0x178;
  *(ulong *)(lVar28 + 0x110) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x110) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar28 + 0x110));
  *(float *)(lVar28 + 0x118) = fVar46 + *(float *)(lVar28 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
  lVar28 = lVar28 + lVar39 * 0x178;
  *(ulong *)(lVar28 + 0x128) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar28 + 0x128) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar28 + 0x128));
  *(float *)(lVar28 + 0x130) = fVar46 + *(float *)(lVar28 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
  lVar28 = lVar28 + lVar39 * 0x178;
  *(float *)(lVar28 + 0x134) = fVar57 + *(float *)(lVar28 + 0x134);
  *(ulong *)(lVar28 + 0x138) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar28 + 0x138) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar28 + 0x138));
  lVar28 = *in_stack_00000170;
  if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar61 = *(uint *)(lVar27 + 0x18);
  if (uVar61 <= uVar16) goto LAB_035575f4;
  lVar34 = lVar27 + lVar39 * 0x178;
  uVar48 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar50 = fVar45 + *(float *)(lVar34 + 0x150);
  uVar49 = (ulong)(uint)fVar50;
  uVar51 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar50;
  *(ulong *)(lVar34 + 0x140) = uVar48;
  *(ulong *)(lVar34 + 0x148) = uVar51;
  if (uVar60 == uVar58) {
    uVar58 = *unaff_x20 - 1;
    if (uVar16 == uVar58) goto LAB_03555b44;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar58) goto LAB_035575f4;
    lVar34 = (long)(int)uVar58;
    lVar35 = lVar28 + lVar34 * 0x5c;
    uVar51 = (ulong)(uint)*(float *)(lVar35 + 0x58);
    fVar50 = fVar45 + *(float *)(lVar35 + 0x54);
    uVar48 = (ulong)(uint)fVar50;
    fVar62 = fVar57 + *(float *)(lVar35 + 0x58);
    uVar49 = (ulong)(uint)fVar62;
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar50;
    *(float *)(lVar35 + 0x58) = fVar62;
    if (uVar61 <= *(uint *)(lVar35 + 0x34)) goto LAB_035575f4;
    uVar47 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar28 = lVar28 + lVar34 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar50;
    *(undefined4 *)(lVar28 + 0x6c) = uVar47;
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x50), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar58) goto LAB_035575f4;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar58 = *(uint *)(lVar27 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar28 + 0x18) <= uVar58) goto LAB_035575f4;
    lVar27 = lVar27 + lVar34 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar58 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar58 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar16 == uVar58) {
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar60) goto LAB_035575f4;
      lVar34 = lVar27 + lVar37 * 0x5c;
      uVar51 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar48 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar50 = fVar45 + *(float *)(lVar34 + 0x54);
      fVar57 = fVar57 + *(float *)(lVar34 + 0x58);
      uVar49 = (ulong)(uint)fVar57;
      *(ulong *)(lVar34 + 0x4c) = uVar48;
      *(float *)(lVar34 + 0x54) = fVar50;
      *(float *)(lVar34 + 0x58) = fVar57;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar47 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar37 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar50;
      *(undefined4 *)(lVar27 + 0x6c) = uVar47;
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar27 = *(long *)(lVar28 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar60) goto LAB_035575f4;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar58 = *(uint *)(lVar27 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar28 + 0x18) <= uVar58) goto LAB_035575f4;
      lVar27 = lVar27 + lVar37 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar58 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_026b82c4(uVar36,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
    if (bVar5) {
      if (((uVar11 != 1) && ((int)uVar16 < (int)(*(uint *)(lVar19 + 0x18) - 1))) &&
         (((int)uVar16 < (int)*unaff_x20 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
        if (*(uint *)(lVar19 + 0x18) <= uVar11 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar19 + lVar41 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b82c4(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar19 + lVar41 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar4,0);
          if ((uVar20 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar11 != 1) {
LAB_0355686c:
        bVar5 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b81f8(uVar36,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b63d8(uVar36,0);
        if (((uVar36 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar16 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b82c4(uVar36,0);
      iVar13 = (int)fStack0000000000000128;
      if ((uVar20 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar13 = uVar11 - 2;
    }
    lVar28 = *in_stack_00000170;
    if (lVar28 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar28 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar58 = *(uint *)(lVar28 + 0x24);
    iVar14 = *(int *)(lVar27 + 0x18);
    if (iVar14 < (int)(uVar58 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar28 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar28 = *in_stack_00000170;
      if (lVar28 == 0) goto LAB_035574b8;
    }
    lVar28 = *(long *)(lVar28 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar58) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)uVar58 * 0x18;
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
    if (*(uint *)(lVar27 + 0x18) <= uVar60) goto LAB_035575f4;
    lVar27 = lVar27 + lVar37 * 0x5c;
    bVar5 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      fStack0000000000000158 = (float)uVar16;
    }
    if (uVar16 == *unaff_x20 - 1) {
      lVar28 = *in_stack_00000170;
      if (lVar28 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar28 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar58 = *(uint *)(lVar28 + 0x24);
      iVar13 = *(int *)(lVar27 + 0x18);
      if (iVar13 < (int)(uVar58 + 1)) {
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
      if (*(uint *)(lVar28 + 0x18) <= uVar58) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)uVar58 * 0x18;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      *(float *)(lVar28 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar28 + 0x2c) = uVar16;
      *(uint *)(lVar28 + 0x30) = uVar11 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar28 = unaff_x19[0x6d];
      if (lVar28 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar28 + 0x50);
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar60) goto LAB_035575f4;
      lVar27 = lVar27 + lVar37 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_03555d68:
    bVar5 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  uVar58 = *(uint *)(lVar28 + 0x18);
  if (uVar58 <= uVar16) goto LAB_035575f4;
  if ((*(byte *)(lVar28 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_03555da0:
      if (uVar58 <= uVar11 - 2) goto LAB_035575f4;
      lVar37 = *unaff_x19;
      uVar58 = *(uint *)(lVar28 + lVar41 + -0x330);
      uVar47 = *(undefined4 *)(lVar28 + lVar41 + -0x2f8);
LAB_035562ec:
      pcVar30 = *(code **)(lVar37 + 0x8d8);
LAB_035562f4:
      uVar51 = (ulong)uVar58;
      uVar48 = (ulong)(uint)_bStack0000000000000070;
      uVar49 = (ulong)_bStack0000000000000074;
      (*pcVar30)(fStack0000000000000078,uVar48,uVar49,uVar51,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar47);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar28 = *(long *)puVar6;
      }
LAB_03556348:
      bVar9 = false;
      fVar44 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar9 = false;
    }
  }
  else {
    lVar28 = lVar28 + lVar39 * 0x178;
    iVar13 = *(int *)(lVar28 + 0x68);
    *(int *)(lVar28 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar16) || ((int)unaff_x19[0x66] < (int)uVar60)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b63d8(uVar36,0);
    if ((uVar36 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar37 = *(long *)(lVar28 + 0x38), lVar37 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar37 + 0x18) <= uVar16) goto LAB_035575f4;
      fVar50 = *(float *)(lVar37 + lVar39 * 0x178 + 0x160);
      if (fVar44 <= fVar50) {
        fVar44 = fVar50;
      }
      if (fStack0000000000000100 <= ABS(fVar56)) {
        fStack0000000000000100 = ABS(fVar56);
      }
      if (iVar13 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *in_stack_00000170;
          if (lVar28 == 0) goto LAB_035574b8;
          lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar37 + 0x15a8);
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar62 = *(float *)(lVar28 + lVar39 * 0x178 + 0x14c);
      fVar50 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar62 = fVar62 + fVar44 * fVar50;
      if (fVar62 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar62;
      }
      uVar48 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar13;
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar32 < (int)uVar16)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar16 == uVar32) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar36,0);
        if ((uVar20 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
      lVar28 = lVar28 + lVar39 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar28 + 0x160);
      fStack0000000000000078 = *(float *)(lVar28 + 0x11c);
      uVar49 = (ulong)(uint)fStack0000000000000078;
      bVar9 = fVar44 != 0.0;
      fVar50 = in_stack_00000088._4_4_;
      if (bVar9) {
        fVar50 = fVar44;
      }
      fVar44 = fVar50;
      uVar12 = *(undefined4 *)(lVar28 + 0x168);
      _bStack0000000000000074 = 0;
      fVar50 = fVar56;
      if (bVar9) {
        fVar50 = fStack0000000000000100;
      }
      uVar48 = (ulong)(uint)fVar50;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar50;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        if (uVar16 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar39 * 0x178;
          lVar37 = *unaff_x19;
          uVar58 = *(uint *)(lVar28 + 0x128);
          uVar47 = *(undefined4 *)(lVar28 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar16 == uVar63) || ((int)uVar32 <= (int)uVar16)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar36,0);
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        lVar37 = lVar39;
        uVar58 = uVar16;
        if (uVar36 == 0x200b || (uVar20 & 1) != 0) {
          lVar37 = lVar18;
          uVar58 = uVar32;
        }
        if (uVar58 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar37 * 0x178;
          uVar58 = *(uint *)(lVar28 + 0x128);
          uVar47 = *(undefined4 *)(lVar28 + 0x160);
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
        uVar58 = *(uint *)(lVar28 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar16 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
      uVar20 = FUN_03567ad8(uVar12,*(undefined4 *)(lVar28 + lVar41),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0)) {
          if (uVar16 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar39 * 0x178;
            uVar51 = (ulong)*(uint *)(lVar28 + 0x128);
            uVar49 = (ulong)_bStack0000000000000074;
            uVar48 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar48,uVar49,uVar51,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar28 + 0x160));
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)puVar6;
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
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar58 = *(uint *)(lVar28 + lVar39 * 0x178 + 400);
  fVar50 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar58 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar11 - 2) goto LAB_035575f4;
      uVar58 = *(uint *)(lVar28 + lVar41 + -0x330);
      fVar45 = *(float *)(lVar28 + lVar41 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar51 = (ulong)uVar58;
      uVar48 = (ulong)(uint)fStack000000000000009c;
      uVar49 = (ulong)(uint)fStack0000000000000098;
      (*pcVar30)(fStack00000000000000a0,uVar48,uVar49,uVar51,
                 fStack00000000000000a8 * fVar50 + fVar45,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar37 = *(long *)(lVar28 + 0x38), lVar37 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar37 + 0x18) <= uVar16) goto LAB_035575f4;
    *(int *)(lVar37 + lVar39 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar16) || ((int)unaff_x19[0x66] < (int)uVar60)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar37 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar32 < (int)uVar16)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar16 == uVar32) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar36,0);
        if ((uVar20 & 1) != 0) goto LAB_035564e8;
        lVar28 = *in_stack_00000170;
        if (lVar28 == 0) goto LAB_035574b8;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
      lVar28 = lVar28 + lVar39 * 0x178;
      fStack0000000000000040 = *(float *)(lVar28 + 0x60);
      fStack0000000000000038 = *(float *)(lVar28 + 0x14c);
      uVar48 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar28 + 0x11c);
      uVar49 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar28 + 0x160);
      fStack000000000000009c = fVar50 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar58 = *unaff_x20;
    if (uVar58 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        if (uVar16 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar39 * 0x178;
          lVar18 = *unaff_x19;
          uVar58 = *(uint *)(lVar28 + 0x128);
          fVar45 = *(float *)(lVar28 + 0x14c);
LAB_03556654:
          pcVar30 = *(code **)(lVar18 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar16 == uVar63) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar36,0);
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        uVar58 = *(uint *)(lVar28 + 0x18);
        if (uVar36 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar58 <= uVar32) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar18 = lVar39;
          if (uVar58 <= uVar16) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar28 = lVar28 + lVar18 * 0x178;
        fVar45 = *(float *)(lVar28 + 0x14c);
        uVar58 = *(uint *)(lVar28 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar16 < (int)uVar58) {
      lVar28 = *in_stack_00000170;
      if ((lVar28 != 0) && (lVar37 = *(long *)(lVar28 + 0x38), lVar37 != 0)) {
        if (uVar11 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lVar41 + -0x108) == fStack0000000000000040) {
            fVar62 = *(float *)(lVar37 + lVar41 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar48 = (ulong)(uint)fStack0000000000000038;
            uVar20 = FUN_03567bac(fVar45 + fVar62,uVar48,0);
            if ((uVar20 & 1) != 0) {
              uVar58 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar28 = *in_stack_00000170;
            if (lVar28 == 0) goto LAB_035574b8;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            uVar58 = *(uint *)(lVar28 + 0x18);
            if ((int)uVar16 <= (int)uVar32) goto FUN_035568e8;
            if (uVar32 < uVar58) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar16 < (int)uVar58) {
      iVar13 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar28 = *(long *)(lVar19 + lVar41 + -0x130);
      if (lVar28 == 0) goto LAB_035574b8;
      iVar14 = FUN_036d3364(lVar28,0);
      if (iVar13 != iVar14) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0))
      {
        if (uVar11 - 2 < *(uint *)(lVar28 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar58 = *(uint *)(lVar28 + lVar41 + -0x330);
          fVar45 = *(float *)(lVar28 + lVar41 + -0x30c);
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
  uVar58 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar58 <= uVar16) goto LAB_035575f4;
  if ((*(byte *)(lVar28 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      uVar49 = (ulong)uStack00000000000000c0;
      uVar48 = (ulong)(uint)fStack00000000000000dc;
      uVar51 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar48,uVar49,uVar51,fStack00000000000000d0,uVar49);
    }
LAB_035569b4:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar16) || ((int)unaff_x19[0x66] < (int)uVar60)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar28 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar32 < (int)uVar16)) ||
         (!bVar1)) goto LAB_035569b4;
      if (uVar16 == uVar32) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar36,0);
        if ((uVar20 & 1) != 0) goto LAB_035569b4;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar6;
      }
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      uVar58 = (uint)*(undefined8 *)(lVar28 + 0x18);
      if (uVar58 <= uVar16) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0xb8);
      lVar33 = lVar28 + lVar39 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar18 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar18 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar18 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar18 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar58 <= uVar16) goto LAB_035575f4;
    lVar28 = lVar28 + lVar39 * 0x178;
    fVar50 = *(float *)(lVar28 + 0x128);
    fVar55 = *(float *)(lVar28 + 0x188);
    uVar17 = *(undefined8 *)(lVar28 + 0x17c);
    fVar54 = *(float *)(lVar28 + 0x184);
    uVar21 = *(undefined8 *)(lVar28 + 0x184);
    fVar46 = *(float *)(lVar28 + 0x18c);
    fVar45 = *(float *)(lVar28 + 0x11c);
    fVar42 = *(float *)(lVar28 + 0x148);
    fVar62 = *(float *)(lVar28 + 0x150);
    in_stack_00000178 = uVar17;
    fStack0000000000000180 = fVar54;
    fStack0000000000000184 = fVar55;
    in_stack_00000188 = fVar46;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar20 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar28 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar28);
      }
      fVar50 = fVar50 + (float)in_stack_000017b8;
      uVar49 = (ulong)(uint)fVar50;
      fVar45 = fVar45 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar62 = fVar62 - in_stack_000017c0;
      uVar48 = (ulong)(uint)fVar62;
      fVar42 = fVar42 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar51 = (ulong)(uint)fVar42;
      if (fVar45 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar45;
      }
      if (fVar62 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar62;
      }
      if (fStack00000000000000c8 <= fVar50) {
        fStack00000000000000c8 = fVar50;
      }
      if (fStack00000000000000d0 <= fVar42) {
        fStack00000000000000d0 = fVar42;
      }
    }
    else {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar28);
      }
      fVar45 = (fVar45 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar51 = (ulong)(uint)fVar45;
      if (fVar62 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar62;
      }
      uVar48 = (ulong)(uint)fStack00000000000000dc;
      uVar49 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar42) {
        fStack00000000000000d0 = fVar42;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar48,uVar49,uVar51,fStack00000000000000d0,uVar49);
      fStack00000000000000dc = fVar62 - fVar46;
      fStack00000000000000c8 = fVar50 + fVar54;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar42 + fVar55;
      fStack00000000000000d8 = fVar45;
      in_stack_000017b0 = uVar17;
      in_stack_000017b8 = uVar21;
      in_stack_000017c0 = fVar46;
    }
    if (((*unaff_x20 == 1) || (uVar16 == uVar63)) || (((int)uVar32 <= (int)uVar16 || (!bVar1)))) {
      uVar49 = (ulong)uStack00000000000000c0;
      uVar48 = (ulong)(uint)fStack00000000000000dc;
      uVar51 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar48,uVar49,uVar51,fStack00000000000000d0,uVar49);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar16 = *unaff_x20;
  lVar41 = lVar41 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar16 <= (int)uVar11;
  uVar11 = uVar11 + 1;
  uVar58 = uVar60;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
code_r0x03551670:
  if (*in_stack_000000e0 == 0) goto LAB_035574b8;
  uVar11 = *unaff_x20;
  unaff_w25 = *(uint *)(*in_stack_000000e0 + 0x28);
  if ((int)uVar11 < (int)in_stack_00000088._4_4_) {
    if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar19 + 0x18) <= uVar11 + 1) goto LAB_035575f4;
    lVar19 = *(long *)(lVar19 + (long)(int)(uVar11 + 1) * (long)iVar15 + 0x30);
    if ((((lVar19 == 0) || (*unaff_x21 == 0)) ||
        (lVar41 = *(long *)(*unaff_x21 + 0x128), lVar41 == 0)) ||
       (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)) goto LAB_035574b8;
    uVar16 = unaff_w25 | *(int *)(lVar19 + 0x28) << 0x10;
    uVar20 = FUN_0219f8b8(lVar41,&stack0x000008a0,&stack0x000016f8,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    uVar60 = 0;
    if ((uVar20 & 1) == 0) {
      _fStack0000000000000128 = (ulong)(uint)fVar44;
      uVar61 = 0;
      uVar58 = 0;
    }
    else {
      if (in_stack_000016f8 == 0) goto LAB_035574b8;
      uVar60 = *(uint *)(in_stack_000016f8 + 0x20);
      uVar58 = *(uint *)(in_stack_000016f8 + 0x14);
      uVar61 = *(uint *)(in_stack_000016f8 + 0x18);
      _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar44);
      if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
        in_stack_00000140 = 0.0;
      }
    }
    uVar11 = *unaff_x20;
  }
  else {
    uVar60 = 0;
    _fStack0000000000000128 = (ulong)(uint)fVar44;
    uVar61 = 0;
    uVar58 = 0;
  }
  unaff_d15 = (ulong)uVar61;
  unaff_d14 = (ulong)uVar60;
  unaff_d12 = (ulong)uVar58;
  if (0 < (int)uVar11) goto code_r0x03551784;
  goto LAB_03551844;
code_r0x03551784:
  if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x38), lVar19 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar19 + 0x18) <= uVar11 - 1) goto LAB_035575f4;
  param_1 = *(long *)(lVar19 + (ulong)(uVar11 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
  if (param_1 == 0) goto LAB_035574b8;
  in_x9 = *unaff_x21;
  goto code_r0x035517b0;
FUN_03556ed8:
  lVar19 = *in_stack_00000170;
  if (lVar19 != 0) {
    iVar15 = uVar60 + 1;
    plVar40 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar19 + 0x18) = uVar16;
    lVar41 = unaff_x19[0xd4];
    *(int *)(lVar19 + 0x2c) = iVar15;
    if ((int)uVar16 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar19 + 0x1c) = (int)lVar41;
    *(float *)(lVar19 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar19 = unaff_x19[0xdf];
    if (lVar19 != 0) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar19 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar15 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar15 != 0x19) {
      lVar19 = unaff_x19[0xe5];
      if (lVar19 == 0) goto LAB_035574b8;
      uVar16 = FUN_03911ee4(lVar19,0);
      FUN_03911f20(lVar19,uVar16 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar40 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar19 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
        if (*(int *)(lVar19 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
            if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
                if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 != 0)) {
                    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar21 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar16 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar19 = *in_stack_00000170;
                              if (lVar19 != 0) {
                                lVar28 = 0;
                                lVar41 = 0;
                                do {
                                  uVar20 = lVar41 + 1;
                                  if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar20)
                                  goto LAB_03554724;
                                  lVar19 = *(long *)(lVar19 + 0x60);
                                  if (lVar19 == 0) break;
                                  if (*(int *)(*plVar40 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                  FUN_03596a20(lVar19 + lVar28 + 0x70,0);
                                  lVar19 = unaff_x19[0xe1];
                                  if (lVar19 == 0) break;
                                  if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                  uVar17 = *(undefined8 *)(lVar19 + lVar41 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar23 = FUN_036d35a8(uVar17,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar19 = *(long *)(*in_stack_00000170 + 0x60), lVar19 == 0
                                         )) break;
                                      if (*(int *)(*plVar40 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                      FUN_03596b20(lVar19 + lVar28 + 0x70,1,0);
                                    }
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a460c(lVar19,*(undefined8 *)(lVar18 + lVar28 + 0x80),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a4810(lVar19,*(undefined8 *)(lVar18 + lVar28 + 0x98),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a48bc(lVar19,*(undefined8 *)(lVar18 + lVar28 + 0xa0),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = UnityEngine_Material__GetColorArray(lVar19,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar19 == 0) break;
                                    FUN_036a4e24(lVar19,*(undefined8 *)(lVar18 + lVar28 + 0xa8),0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = UnityEngine_Material__GetColorArray(lVar19,0),
                                       lVar19 == 0)) break;
                                    FUN_036aa280(lVar19,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if (lVar19 == 0) break;
                                    lVar19 = FUN_037b514c(lVar19,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar41 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (uVar17 = UnityEngine_Material__GetColorArray(lVar18,0),
                                       lVar19 == 0)) break;
                                    FUN_0390f3a4(lVar19,uVar17,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
                                    FUN_0390eec8(uVar21,uVar48,uVar49,uVar51,lVar19,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar19 = *(long *)(lVar19 + lVar41 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (lVar19 = FUN_037b514c(lVar19,0), lVar19 == 0)) break;
                                    FUN_0390ed78(lVar19,uVar16 & 1,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_035575f4;
                                    plVar38 = *(long **)(lVar19 + lVar41 * 8 + 0x28);
                                    uVar11 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar38 == (long *)0x0) break;
                                    (**(code **)(*plVar38 + 0x2c8))
                                              (plVar38,uVar11 & 1,*(undefined8 *)(*plVar38 + 0x2d0))
                                    ;
                                  }
                                  lVar19 = *in_stack_00000170;
                                  lVar41 = lVar41 + 1;
                                  lVar28 = lVar28 + 0x50;
                                } while (lVar19 != 0);
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


