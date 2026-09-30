/*
FUNCTION_NAME: UnityEngine.Animation$$Play
ENTRY_POINT: 03551768
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


void UnityEngine_Animation__Play(void)

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
  undefined4 uVar12;
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
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  float *pfVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar41;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar42;
  uint unaff_w25;
  long *plVar43;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  ulong uVar50;
  float fVar51;
  uint uVar52;
  ulong uVar53;
  float unaff_s8;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulong unaff_d11;
  float fVar59;
  float fVar60;
  ulong unaff_d13;
  ulong unaff_d14;
  float fVar61;
  uint uVar62;
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
  float in_stack_00000128;
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
  
code_r0x03551768:
  fStack000000000000012c = 0.0;
  uVar62 = 0;
  fVar45 = 0.0;
LAB_03551778:
  uVar16 = *unaff_x20;
LAB_0355177c:
  uVar20 = (ulong)uVar62;
  iVar15 = (int)unaff_x24;
  if (0 < (int)uVar16) {
    if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar16 - 1) goto LAB_035575f4;
    lVar28 = *(long *)(lVar28 + (ulong)(uVar16 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
    if ((((lVar28 == 0) || (*unaff_x21 == 0)) ||
        (lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0)) ||
       (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_035574b8;
    in_stack_000008a0 = *(uint *)(lVar28 + 0x28) | unaff_w25 << 0x10;
    uVar19 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    if ((uVar19 & 1) != 0) {
      if ((in_stack_000016f8 == 0) ||
         (fVar45 = (float)FUN_03571cb4(fVar45,uVar20,fStack000000000000012c,unaff_d14,
                                       *(undefined4 *)(in_stack_000016f8 + 0x28),
                                       *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                       *(undefined4 *)(in_stack_000016f8 + 0x30),
                                       *(undefined4 *)(in_stack_000016f8 + 0x34),0),
         in_stack_000016f8 == 0)) goto LAB_035574b8;
      if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
        in_stack_00000140 = 0.0;
      }
    }
  }
  *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  uVar21 = in_stack_000017c8;
LAB_03551850:
  fVar61 = (float)unaff_d13;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar54 = *(float *)(unaff_x19 + 200);
    fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar54 = fVar54 - fVar61 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar54;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar54 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar54 = *(float *)(unaff_x19 + 0x56);
  fVar46 = 0.0;
  if (fVar54 != 0.0) {
    fVar46 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar47 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar54 * 0.5 - fVar61 * (fVar46 * 0.5 + fVar47));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar46;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar28 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar28,0,0);
    fVar47 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar28 = *in_stack_00000160;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar28 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      fVar47 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar28 = *in_stack_00000160;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar28 == 0) goto LAB_035574b8;
        fVar54 = (float)FUN_0369e060(lVar28,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar57 = *(float *)(*unaff_x21 + 0x1b0);
        fVar47 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        fVar47 = fVar47 * fVar54 * fVar57 * 0.25;
        if (fVar54 < fStack000000000000015c + fVar47) {
          fStack000000000000015c = fVar54 - fVar47;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar28 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar28,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar28 = *in_stack_00000160;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar28 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar28 = *in_stack_00000160;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar28 == 0) goto LAB_035574b8;
        uVar19 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar28 = *in_stack_00000160;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar28 != 0) {
            fVar54 = (float)FUN_0369e060(lVar28,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54)
                                         ,0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar57 = *(float *)(*unaff_x21 + 0x1a8);
              fVar47 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
              fVar47 = fVar47 * fVar54 * fVar57 * 0.25;
              if (fVar54 < fStack000000000000015c + fVar47) {
                fStack000000000000015c = fVar54 - fVar47;
              }
              goto FUN_03551b84;
            }
          }
          goto LAB_035574b8;
        }
      }
    }
    fVar47 = 0.0;
  }
FUN_03551b84:
  fVar54 = *(float *)(unaff_x19 + 200);
  fVar57 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar54 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar61 * (fVar45 + ((fVar57 - fStack000000000000015c) - fVar47));
  fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar63 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s8 + fVar61 * ((float)uVar20 + fStack000000000000015c + fVar45)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar45 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar45 = fVar63 - fVar61 * (fStack000000000000015c + fStack000000000000015c + fVar45);
  fVar57 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar51 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar61 * (fVar47 + fVar47 +
                             fStack000000000000015c + fStack000000000000015c + fVar57);
  fStack0000000000000104 = fVar54;
  fVar57 = fVar51;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar56 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar57 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar55 = fVar56 * fVar61 * (fVar47 + fStack000000000000015c + fVar57);
    fVar57 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar59 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar63 = fVar63 + 0.0;
    fVar45 = fVar45 + 0.0;
    fVar56 = fVar56 * fVar61 * (((fVar57 - fVar59) - fStack000000000000015c) - fVar47);
    fVar59 = fVar54 + fVar55;
    fVar57 = fVar51 + fVar56;
    fVar48 = (fVar55 - fVar56) * 0.5;
    fVar54 = (fVar54 + fVar56) - fVar48;
    fVar51 = (fVar51 + fVar55) - fVar48;
    fStack0000000000000104 = fVar59 - fVar48;
    fVar57 = fVar57 - fVar48;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar48 = 0.0;
    fVar55 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar56 = fVar45;
    fVar59 = fVar63;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar58 = (fVar51 + fVar54) * 0.5;
    fVar60 = (fVar45 + fVar63) * 0.5;
    fVar63 = fVar63 - fVar60;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar63;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar58,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar58 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar56 = fVar45 - fVar60;
    fStack0000000000000114 = 0.0;
    fVar45 = fVar56;
    fVar54 = (float)FUN_036bdd2c(fVar54 - fVar58,_fStack0000000000000078,0);
    fVar54 = fVar58 + fVar54;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar45 = fVar60 + fVar45;
    fVar55 = 0.0;
    fVar51 = (float)FUN_036bdd2c(fVar51 - fVar58,_fStack0000000000000078,0);
    fVar51 = fVar58 + fVar51;
    fVar63 = fVar60 + fVar63;
    fVar55 = fVar55 + 0.0;
    fVar48 = 0.0;
    fVar57 = (float)FUN_036bdd2c(fVar57 - fVar58,_fStack0000000000000078,0);
    fVar57 = fVar58 + fVar57;
    fVar48 = fVar48 + 0.0;
    fVar56 = fVar60 + fVar56;
    fVar59 = fVar60 + fVar59;
  }
  if (*unaff_x28 == 0) goto LAB_035574b8;
  lVar28 = *(long *)(*unaff_x28 + 0x38);
  uVar20 = unaff_d13 & 0xffffffff;
  if (lVar28 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x11c) = fVar54;
  *(float *)(lVar28 + 0x120) = fVar45;
  *(float *)(lVar28 + 0x124) = fStack0000000000000114;
  if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x114) = fVar59;
  *(float *)(lVar28 + 0x110) = fStack0000000000000104;
  *(float *)(lVar28 + 0x118) = fStack0000000000000100;
  if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x128) = fVar51;
  *(float *)(lVar28 + 300) = fVar63;
  *(float *)(lVar28 + 0x130) = fVar55;
  if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x134) = fVar57;
  *(float *)(lVar28 + 0x138) = fVar56;
  *(float *)(lVar28 + 0x13c) = fVar48;
  if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar62 = *unaff_x20;
  lVar29 = (long)(int)uVar62;
  if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
  lVar30 = lVar28 + lVar29 * unaff_x24;
  *(int *)(lVar30 + 0x140) = (int)unaff_x19[200];
  fVar63 = *(float *)(unaff_x19 + 0x9b);
  uVar19 = (ulong)(uint)fVar63;
  fVar57 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar30 + 0x15c) = (fVar51 - fVar54) / (fVar59 - fVar45);
  *(float *)(lVar30 + 0x14c) = (unaff_s8 - fVar63) + fVar57;
  in_stack_00000128 = in_stack_00000128 * fVar61;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    in_stack_00000128 = in_stack_00000128 / fStack0000000000000158;
    in_stack_00000120 = (in_stack_00000120 * fVar61) / fStack0000000000000158;
  }
  else {
    in_stack_00000120 = in_stack_00000120 * fVar61;
  }
  uVar16 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar62 == uVar16)) {
    in_stack_00000120 = fVar57 + in_stack_00000120;
    in_stack_00000128 = fVar57 + in_stack_00000128;
    fVar54 = in_stack_00000120;
    fVar45 = in_stack_00000128;
    if (fVar57 != 0.0) {
      fVar45 = (in_stack_00000128 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      fVar54 = (in_stack_00000120 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar45 <= in_stack_00000128) {
        fVar45 = in_stack_00000128;
      }
      if (in_stack_00000120 <= fVar54) {
        fVar54 = in_stack_00000120;
      }
    }
    lVar28 = lVar28 + lVar29 * unaff_x24;
    fVar57 = fVar45;
    if (fVar45 <= *(float *)(unaff_x19 + 0x99)) {
      fVar57 = *(float *)(unaff_x19 + 0x99);
    }
    fVar51 = fVar54;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar54) {
      fVar51 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar51;
    *(float *)(unaff_x19 + 0x99) = fVar57;
    *(float *)(lVar28 + 0x154) = fVar45;
    *(float *)(lVar28 + 0x158) = fVar54;
    *(float *)(lVar28 + 0x148) = in_stack_00000128 - fVar63;
    *(float *)(unaff_x19 + 0x98) = in_stack_00000128 - fVar63;
    *(float *)(lVar28 + 0x150) = in_stack_00000120 - fVar63;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000120 - fVar63;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar57;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar45 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar54 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar61 * fVar54) / fStack0000000000000158;
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar45 <= fStack0000000000000158) {
        fVar45 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar45;
    }
    if ((float)uVar19 == 0.0) {
      fVar45 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= in_stack_00000128) {
        fVar45 = in_stack_00000128;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar45;
    }
  }
  else {
    fVar45 = *(float *)(unaff_x19 + 0x99);
    lVar28 = lVar28 + lVar29 * unaff_x24;
    *(float *)(lVar28 + 0x154) = fVar45;
    fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = fVar45 - fVar63;
    *(float *)(lVar28 + 0x148) = fVar45;
    *(float *)(lVar28 + 0x158) = fVar54;
    *(float *)(unaff_x19 + 0x98) = fVar45;
    fVar54 = fVar54 - fVar63;
    *(float *)(lVar28 + 0x150) = fVar54;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar54;
  }
  lVar28 = *unaff_x28;
  if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar52 = *unaff_x20;
  if (*(uint *)(lVar29 + 0x18) <= uVar52) goto LAB_035575f4;
  lVar29 = lVar29 + (long)(int)uVar52 * unaff_x24;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  uVar33 = *(uint *)(unaff_x19 + 0x4f);
  uVar44 = in_stack_000017dc;
  if (((in_stack_000017dc == 9) ||
      ((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)))) ||
     (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar31 = _fStack00000000000000a0;
    pfVar34 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar28 = *(long *)(lVar28 + 0x50);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar34 = (float *)(lVar28 + 0x60);
      pfVar31 = (float *)(lVar28 + 100);
    }
    fVar54 = *pfVar34;
    fVar57 = *pfVar31;
    fVar45 = *(float *)(unaff_x19 + 0x6c);
    fVar51 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar54) - fVar57;
    bVar9 = true;
    if ((fVar45 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar45))) {
      bVar9 = fVar45 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000f8._4_4_ = fVar45;
    }
    fVar45 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar56 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar63 = (float)unaff_d11;
    if (in_stack_000017dc != 0xad) {
      fVar63 = fVar61;
    }
    fVar55 = (float)uVar19;
    fVar48 = 0.0;
    if ((0.0 < fVar55) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar52 = *unaff_x20;
    fVar48 = (*(float *)(unaff_x19 + 0x97) - (fVar56 - fVar55)) + fVar48;
    if (fStack00000000000000c4 < fVar48) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      in_stack_000017c8 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar58 = *(float *)(unaff_x19 + 0x59);
        if (((fVar58 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar55)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar45 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar48) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar45 <= fVar58) {
            fVar45 = fVar58;
          }
          goto LAB_03554b48;
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar48 = *(float *)(unaff_x19 + 0x4a);
        uVar19 = (ulong)(uint)fVar48;
        if ((fVar48 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar45 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          fVar61 = (fVar55 - fVar45) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar55;
          fVar45 = DAT_00d38e60;
          if (fVar61 != INFINITY) {
            fVar45 = (float)(int)fVar61 / 20.0;
          }
          if (fVar45 <= fVar48) {
            fVar45 = fVar48;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar7;
        }
        lVar29 = *(long *)(lVar28 + 0xb8);
        lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = FUN_01a46ff8(lVar28);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar28 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 == 0) {
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar11 = FUN_0358c15c();
LAB_035529e8:
          iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar11 - 1;
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
        if ((uVar52 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          fVar45 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar45 - fVar56) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar19 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar28 = NEON_rev64(uVar19,4);
          unaff_x19[0x99] = lVar28;
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
        lVar28 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar28,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x528))(plVar43,uVar21,*(undefined8 *)(*plVar43 + 0x530));
          lVar28 = unaff_x19[0x5d];
          if (lVar28 == 0) goto LAB_035574b8;
          *(int *)(lVar28 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar28,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar43 = (long *)unaff_x19[0x5d];
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      in_stack_000017c8 = CONCAT44(3,uVar52);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar51 = ABS(fVar51) + fVar45 * (1.0 - fVar59) * fVar63;
    fVar45 = 1.0;
    if ((uVar33 & 0x18) != 0) {
      fVar45 = DAT_00d38acc;
    }
    fVar63 = fVar45 * in_stack_000000f8._4_4_;
    if (fVar51 <= fVar63) {
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 != 0) &&
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar28 + 0x18)) {
            *(undefined1 *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      if (in_stack_000017dc != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar63,fVar47);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar52 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar52;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar52;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar28 = *(long *)(unaff_x19[0x6d] + 0x50), lVar28 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000068._4_4_ = 0;
            *(float *)(lVar28 + 0x60) = fVar54;
            *(float *)(lVar28 + 100) = fVar57;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_035574b8;
      uVar52 = *unaff_x20;
      if (uVar52 < *(uint *)(lVar29 + 0x18)) {
        *(undefined1 *)(lVar29 + (long)(int)uVar52 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar52;
        lVar29 = *(long *)(lVar28 + 0x50);
        if (lVar29 != 0) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
            goto LAB_03552fcc;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
      goto LAB_035575f4;
    }
    uVar19 = (ulong)(uint)fVar47;
    if (((char)unaff_x19[0x5b] == '\0') || (uVar52 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar59 < fVar63) {
          fVar61 = fVar51 / (1.0 - fVar59);
          if (fVar59 <= 0.0) {
            fVar61 = fVar51;
          }
          fVar59 = fVar59 + (fVar51 - fVar45 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar61;
          goto LAB_035574e8;
        }
        fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar63 = *(float *)(unaff_x19 + 0x4a);
        if (fVar63 < fVar59) {
          fVar45 = (fVar59 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar59;
          fVar59 = fVar59 - fVar45;
LAB_03557524:
          fVar61 = fVar59 * 20.0 + 0.5;
          fVar45 = DAT_00d38e60;
          if (fVar61 != INFINITY) {
            fVar45 = (float)(int)fVar61 / 20.0;
          }
          if (fVar45 <= fVar63) {
            fVar45 = fVar63;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar45;
          return;
        }
      }
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar7;
        }
        lVar29 = *(long *)(lVar28 + 0xb8);
        lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = FUN_01a46ff8(lVar28);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar28 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 != 0) {
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x000008a0,
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
      lVar28 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar20 = FUN_036cee6c(lVar28,0,0);
      if ((uVar20 & 1) != 0) {
        plVar43 = (long *)unaff_x19[0x5d];
        uVar21 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar43 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar43 + 0x528))(plVar43,uVar21,*(undefined8 *)(*plVar43 + 0x530));
        lVar28 = unaff_x19[0x5d];
        if (lVar28 == 0) goto LAB_035574b8;
        *(int *)(lVar28 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar28,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar43 = (long *)unaff_x19[0x5d];
        if (plVar43 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
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
        lVar28 = *in_stack_00000170;
        if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar63 = *(float *)(unaff_x19 + 0x9b);
        fVar59 = 0.0;
        if ((0.0 < fVar63) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar59 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar59 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar59 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar28 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar28 == 0) goto LAB_035574b8;
        fVar63 = *(float *)(unaff_x19 + 0x9b);
        fVar59 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar35 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar28 + 0x18) <= uVar35) ||
         (uVar5 = uVar35 - 1, *(uint *)(lVar28 + 0x18) <= uVar5)) goto LAB_035575f4;
      uVar19 = (ulong)(uint)(fVar59 + *(float *)(unaff_x19 + 0x97));
      fVar56 = (fVar59 + *(float *)(unaff_x19 + 0x97) + fVar63) -
               *(float *)(lVar28 + (long)(int)uVar35 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar28 + (long)(int)uVar5 * (long)iVar15 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar56 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar28 + (long)(int)uVar35 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          in_stack_000017c8 = uVar21;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar63 <= fVar59) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar19 = (ulong)(uint)fVar59;
              fVar63 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar59 <= fVar63) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar45 = (fVar59 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar45 <= DAT_00d38b84) {
                fVar45 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar59;
              fVar59 = fVar59 - fVar45;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar61 = fVar51;
            if (0.0 < fVar59) {
              fVar61 = fVar51 / (1.0 - fVar59);
            }
            fVar59 = fVar59 + (fVar51 - fVar45 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar61;
LAB_035574e8:
            if (fVar63 <= fVar59) {
              fVar59 = fVar63;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar59;
            return;
          }
LAB_03552d44:
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)puVar7;
          }
          iVar11 = *(int *)(*(long *)(lVar28 + 0xb8) + 0xe78);
          if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) &&
             (((bStack0000000000000070 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
            goto LAB_035574b8;
            uVar35 = *unaff_x20 - 1;
            if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_035575f4;
            iStack0000000000000034 = iVar11;
            if (*(short *)(lVar28 + (long)(int)uVar35 * (long)iVar15 + 0x20) == 0xad) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar35;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              in_stack_000017c8 = CONCAT44(0x2d,uVar35);
              goto LAB_03550bd0;
            }
          }
          if (fVar56 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            FUN_0358cbd4(fStack0000000000000058,uVar20,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            uVar19 = uVar20;
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar63 = fStack00000000000000c4;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar63 = *(float *)(unaff_x19 + 0x59);
              if ((fVar63 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar45 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar56) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar45 <= fVar63) {
                  fVar45 = fVar63;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar45;
                return;
              }
              fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar59 < fVar63) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar19 = (ulong)(uint)fVar59;
              fVar63 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar63 < fVar59) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557594;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_03552ef4_caseD_0;
            case 1:
              lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar28 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar29 = *(long *)(lVar28 + 0xb8);
              lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
                lVar28 = FUN_01a46ff8(lVar28);
              }
              piVar22 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar28 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              if (*piVar22 == 0) {
                bStack0000000000000074 = 0;
                goto LAB_03554580;
              }
              lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar28 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x000008a0,
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
              FUN_0358cbd4(fStack0000000000000058,uVar20,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                           in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              uVar19 = uVar20;
              break;
            case 6:
              lVar28 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar20 = FUN_036cee6c(lVar28,0,0);
              if ((uVar20 & 1) != 0) {
                plVar43 = (long *)unaff_x19[0x5d];
                uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar43 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar43 + 0x528))(plVar43,uVar21,*(undefined8 *)(*plVar43 + 0x530));
                lVar28 = unaff_x19[0x5d];
                if (lVar28 == 0) goto LAB_035574b8;
                *(int *)(lVar28 + 0x400) = (int)unaff_x19[0x80];
                FUN_0357ee30(lVar28,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar43 = (long *)unaff_x19[0x5d];
                if (plVar43 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
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
        *unaff_x20 = uVar5;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        in_stack_000017c8 = CONCAT44(0x2d,uVar5);
      }
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar54 = (float)uVar19;
      fVar45 = 0.0;
      if ((0.0 < fVar54) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar19 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar54)) + fVar45)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar28 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar20 = FUN_036cee6c(lVar28,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar21 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 != (long *)0x0) {
            (**(code **)(*plVar43 + 0x528))(plVar43,uVar21,*(undefined8 *)(*plVar43 + 0x530));
            lVar28 = unaff_x19[0x5d];
            if (lVar28 != 0) {
              *(int *)(lVar28 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar28,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar43 = (long *)unaff_x19[0x5d];
              if (plVar43 != (long *)0x0) {
                (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
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
        lVar28 = *in_stack_00000170;
        if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x50), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
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
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x50), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
    }
LAB_035530c4:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar45 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar47 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar28 = unaff_x19[0xca];
      fVar54 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar54 = 1.0;
      }
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_035574b8;
      fVar51 = *(float *)((long)unaff_x19 + 0x404);
      fVar59 = *(float *)(lVar28 + 0x2c);
      fVar57 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
      fVar63 = *_fStack00000000000000a8;
      fVar57 = fVar51 * (fVar45 / (float)iVar11) * fVar47 * fVar54 * fVar59 * fVar57;
      fVar45 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        uVar52 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar28 + 0x18) <= uVar52) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar54 = *(float *)(lVar28 + (long)(int)uVar52 * (long)iVar15 + 0x60);
        iVar11 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar51 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar28 = unaff_x19[0xca];
        fVar47 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar47 = 1.0;
        }
        if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_035574b8;
        fVar59 = *(float *)((long)unaff_x19 + 0x404);
        fVar56 = *(float *)(lVar28 + 0x2c);
        fVar57 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000170 + 0x50), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar63 = *(float *)(lVar28 + 0x60);
        fVar45 = *(float *)(lVar28 + 100);
        fVar57 = fVar59 * (fVar54 / (float)iVar11) * fVar51 * fVar47 * fVar56 * fVar57;
      }
      fVar51 = *(float *)(unaff_x19 + 0x9b);
      fVar54 = 0.0;
      fVar47 = 0.0;
      if ((0.0 < fVar51) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar56 = *(float *)(unaff_x19 + 0x97);
      fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar59 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar28 = *(long *)(unaff_x19[0xca] + 0x20), lVar28 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar28,0);
        fVar54 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar55 = *(float *)(unaff_x19 + 0x6c);
      fVar45 = (fStack000000000000009c - fVar63) - fVar45;
      bVar9 = true;
      if ((fVar55 <= fVar45) && (bVar9 = false, !NAN(fVar55))) {
        bVar9 = fVar55 == -1.0;
      }
      if (!bVar9) {
        fVar45 = fVar55;
      }
      fVar63 = 1.0;
      if ((uVar33 & 0x18) != 0) {
        fVar63 = DAT_00d38acc;
      }
      if (((fVar56 - (fVar48 - fVar51)) + fVar47 < fStack00000000000000c4) &&
         (ABS(fVar59) + fVar57 * fVar54 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar63 * fVar45)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar28 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar28 + 0x788),0x378);
        FUN_0209b210(lVar28 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar52 = *(uint *)(unaff_x19 + 0x95);
    lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar29 + 100) = uVar52;
    *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar28 = *(long *)(lVar28 + 0x50);
      if (lVar28 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar28 + 0x18) <= uVar52) goto LAB_035575f4;
      *(int *)(lVar28 + (long)(int)uVar52 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar28 = *(long *)(lVar28 + 0x50);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar52) goto LAB_035575f4;
      if (*(int *)(lVar28 + (long)(int)uVar52 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar45 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar54 = *(float *)(unaff_x19 + 200);
      fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar45 = fVar61 * fVar45 * fVar46;
      fVar46 = fVar45 * (float)(int)(fVar54 / fVar45);
      uVar19 = (ulong)(uint)fVar46;
      if (fVar46 <= fVar54) {
        fVar46 = fVar54 + fVar45;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar46;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar54 = 1.0;
        }
        else {
          fVar54 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar46 = *(float *)(unaff_x19 + 200);
        fVar47 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar45 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar46 = fVar46 + fVar45 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar61 * (fStack000000000000012c + fVar54 * fVar47) +
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
               fVar61 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar19 = (ulong)(uint)fVar46;
      fVar46 = *(float *)(unaff_x19 + 200) - fVar46;
      *(float *)(unaff_x19 + 200) = fVar46;
      if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
        fVar45 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar19 = (ulong)(uint)fVar45;
        fVar46 = fVar46 - fVar45;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar45 = *(float *)(unaff_x19 + 200);
      fVar46 = fVar45 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar46) +
                        fStack00000000000000d4 *
                        (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar46;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar19 = (ulong)(uint)fVar45, unaff_w27 != 0)) {
        fVar45 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar19 = (ulong)(uint)fVar45;
        fVar46 = fVar46 + fVar45;
        goto LAB_03553678;
      }
    }
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    uVar52 = *unaff_x20;
    uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar33 <= uVar52) goto LAB_035575f4;
    *(float *)(lVar29 + (long)(int)uVar52 * unaff_x24 + 0x144) = fVar46;
    uVar35 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar52 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar19 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar52 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar45 = *(float *)(unaff_x19 + 0x99);
        fVar46 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar45 = fVar45 - fVar46;
        if (((fStack000000000000005c < ABS(fVar45)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar45);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar45;
          *(float *)(unaff_x19 + 0x9b) = fVar45 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)puVar7;
          }
          lVar29 = *(long *)(lVar28 + 0xb8);
          if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar29 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar29 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar28 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar28 + 0xb8) + 0x818,0);
            lVar28 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar28 + 0x7bc) = fVar45 + *(float *)(lVar28 + 0x7bc);
            *(float *)(lVar28 + 0x800) = fVar45 + *(float *)(lVar28 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar28 + 0x788),0x378);
            FUN_0209b210(lVar28 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar54 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc) - fVar54;
      fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar45 = fVar46;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar45;
      fVar47 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar45;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      uVar52 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar29 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar30 = unaff_x19[0x93];
      lVar18 = lVar29 + (long)(int)uVar52 * 0x5c;
      *(int *)(lVar18 + 0x34) = (int)lVar30;
      uVar33 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar30 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar33 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar33;
      *(uint *)(lVar18 + 0x38) = uVar33;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar11 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar33 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
      *(int *)(lVar18 + 0x40) = iVar11;
      *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar33) goto LAB_035575f4;
      uVar12 = *(undefined4 *)(lVar28 + (long)(int)uVar33 * (long)iVar15 + 0x11c);
      lVar29 = lVar29 + (long)(int)uVar52 * 0x5c;
      *(float *)(lVar29 + 0x70) = fVar46;
      *(undefined4 *)(lVar29 + 0x6c) = uVar12;
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar47 = fVar47 - fVar54;
      uVar19 = (ulong)(uint)fVar47;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) =
           *(undefined4 *)
            (lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar29 + 0x78) = fVar47;
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar30 = *(long *)(lVar28 + 0x50), lVar30 == 0)) goto LAB_035574b8;
      lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar29 = lVar30 + lVar18 * 0x5c;
      *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - fVar61 * fStack000000000000015c;
      *(float *)(lVar29 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar29 + 0x24) == 1) {
        *(int *)(lVar30 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_035574b8;
      lVar42 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar33 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar29 + lVar42 * unaff_x24 + 0x194) == '\0') &&
         (lVar42 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar33 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar30 = lVar30 + lVar18 * 0x5c;
      fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar45 = -fVar61;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar45 = fVar61;
      }
      *(float *)(lVar30 + 0x58) = *(float *)(lVar29 + lVar42 * unaff_x24 + 0x144) + fVar45;
      *(float *)(lVar30 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar30 + 0x54) = fVar46;
      *(float *)(lVar30 + 0x48) = in_stack_00000060 + (fVar47 - fVar46);
      *(float *)(lVar30 + 0x4c) = fVar47;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar28 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar11 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar11;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar28 != 0) && (*(long *)(lVar28 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar28 + 0x50) + 0x18) <= iVar11) {
              FUN_0358ca18();
              lVar28 = unaff_x19[0x6d];
              if (lVar28 == 0) goto LAB_035574b8;
            }
            lVar28 = *(long *)(lVar28 + 0x38);
            if (lVar28 != 0) {
              if (*unaff_x20 < *(uint *)(lVar28 + 0x18)) {
                fVar45 = *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar61 = 0.0, in_stack_000017dc == 10)) {
                    fVar61 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar24 = 0;
                  fVar61 = fVar45 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar61) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar61 = 0.0, in_stack_000017dc == 10)) {
                    fVar61 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar24 = 1;
                  fVar61 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar61);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar61;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar24;
                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar28 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar28 = *(long *)puVar7;
                }
                uVar17 = *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar45;
                uVar19 = NEON_rev64(uVar17,4);
                unaff_x19[0x99] = uVar19;
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
          uVar35 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar52 = *unaff_x20;
    if (uVar33 <= uVar52) goto LAB_035575f4;
    if (*(char *)(lVar29 + (long)(int)uVar52 * unaff_x24 + 0x194) != '\0') {
      lVar29 = lVar29 + (long)(int)uVar52 * unaff_x24;
      uVar19 = *(ulong *)(lVar29 + 0x11c);
      uVar20 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar20 ^ (uVar20 ^ uVar19) &
                    ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar20 < (float)uVar19));
      uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar19 = *(ulong *)(lVar29 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar20 ^ (uVar20 ^ uVar19) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar20 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar20));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar35 || ((1 << (ulong)(uVar35 & 0x1f) & 0x2c00U) == 0)))) {
      lVar29 = *(long *)(lVar28 + 0x58);
      if (lVar29 == 0) goto LAB_035574b8;
      iVar11 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar29 + 0x18) < iVar11) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar28 + 0x58),iVar11,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar28 = *in_stack_00000170;
        if (lVar28 == 0) goto LAB_035574b8;
      }
      lVar29 = *(long *)(lVar28 + 0x58);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar33 = *(uint *)(unaff_x19 + 0x96);
      lVar30 = (long)(int)uVar33;
      uVar52 = *(uint *)(lVar29 + 0x18);
      if (uVar52 <= uVar33) goto LAB_035575f4;
      lVar18 = lVar29 + lVar30 * 0x14;
      fVar61 = *(float *)(lVar18 + 0x30);
      uVar19 = (ulong)(uint)fVar61;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar61 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar45 = fVar61;
      }
      *(float *)(lVar18 + 0x30) = fVar45;
      uVar35 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar35 == 0 && uVar33 == 0) {
        *(uint *)(lVar29 + (ulong)uVar33 * 0x14 + 0x20) = uVar35;
      }
      else {
        uVar5 = uVar35 - 1;
        if (0 < (int)uVar35) {
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uVar5) goto LAB_035575f4;
          if (uVar33 != *(uint *)(lVar28 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar33 - 1 < uVar52) {
              *(uint *)(lVar29 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar29 + 0x20 + lVar30 * 0x14) = uVar35;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar35 == in_stack_00000088._4_4_) {
          *(float *)(lVar29 + lVar30 * 0x14 + 0x24) = in_stack_00000088._4_4_;
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
        lVar28 = FUN_035978e8(0);
        if ((lVar28 == 0) || (*(long *)(lVar28 + 0x10) == 0)) goto LAB_035574b8;
        uVar52 = FUN_0219c130(*(long *)(lVar28 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar52 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if (uVar62 != uVar16 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
          if (unaff_w27 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar28 = FUN_035978e8(0);
        if (((lVar28 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar28 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar29 + (long)(int)(*unaff_x20 + 1) * (long)iVar15 + 0x20);
        uVar20 = FUN_0219c130(*(long *)(lVar28 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar52 & 1) != 0) goto LAB_035541dc;
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
    in_stack_000017c8 = uVar21;
  }
LAB_03550bd0:
  do {
    unaff_d11 = unaff_d13 & 0xffffffff;
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar28 = unaff_x19[0x8f];
    if (lVar28 == 0) goto LAB_035574b8;
    if ((int)*(uint *)(lVar28 + 0x18) <= (int)in_stack_000017a8) {
LAB_0355459c:
      fVar45 = (float)uVar19;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar45 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar61 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar45 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar46 = (*(float *)((long)unaff_x19 + 0x23c) - fVar45) * 0.5;
          if (fVar46 <= DAT_00d38b84) {
            fVar46 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar45;
          fVar46 = (fVar45 + fVar46) * 20.0 + 0.5;
          fVar45 = DAT_00d38e60;
          if (fVar46 != INFINITY) {
            fVar45 = (float)(int)fVar46 / 20.0;
          }
          if (fVar61 <= fVar45) {
            fVar45 = fVar61;
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
      lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar28 = *(long *)puVar8;
      }
      plVar43 = (long *)OVRPlugin_Media_TypeInfo;
      lVar28 = **(long **)(lVar28 + 0xb8);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar15 = *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x60), lVar28 == 0))
      goto LAB_035574b8;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar28 + 0x18) == 0) goto LAB_035575f4;
      FUN_035968e8(lVar28 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar11 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar28 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)uStack00000000000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar11 < 0x401) {
        if (iVar11 == 0x100) {
          if (lVar28 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) < 2) goto LAB_035575f4;
          uVar21 = *(undefined8 *)(lVar28 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000170 + 0x58), lVar29 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar45 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar45 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar28 + 0x2c);
          fVar45 = (0.0 - fVar45) - fStack0000000000000020;
        }
        else if (iVar11 == 0x200) {
          if (lVar28 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar28 + 0x24) +
                            (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar28 = lVar28 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar45 = ((fStack0000000000000020 + *(float *)(lVar28 + 0x28) +
                      *(float *)(lVar28 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar45 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar11 != 0x400) goto LAB_03554c4c;
          if (lVar28 == 0) goto LAB_035574b8;
          if (*(int *)(lVar28 + 0x18) == 0) goto LAB_035575f4;
          uVar21 = *(undefined8 *)(lVar28 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000170 + 0x58), lVar29 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar28 + 0x20);
          fVar45 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,(float)uVar21 + fVar45);
      }
      else if (iVar11 == 0x800) {
        if (lVar28 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_035575f4;
        fVar45 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar28 + 0x24) +
                              (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar45;
      }
      else {
        if (iVar11 == 0x1000) {
          if (lVar28 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar28 + 0x18) != 1) && (*(int *)(lVar28 + 0x18) != 0)) {
            uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar28 + 0x24) +
                              (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
            fVar45 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar11 == 0x2000) {
          if (lVar28 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_035575f4;
          fVar45 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar28 + 0x24) +
                                (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5 + fVar45);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar21 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar7);
      }
      uVar20 = FUN_036d35a8(uVar21,0,0);
      lVar28 = FUN_0357f060();
      if (lVar28 == 0) goto LAB_035574b8;
      FUN_036df824(lVar28,0);
      *(float *)(unaff_x19 + 0xe2) = fVar45;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar11 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar61 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar12 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar7 = OVRPlugin_Mesh_TypeInfo;
      lVar28 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar28 = *(long *)puVar7;
      }
      puVar26 = *(undefined4 **)(lVar28 + 0xb8);
      uVar19 = (ulong)(uint)puVar26[1];
      uVar50 = (ulong)(uint)puVar26[2];
      uVar53 = (ulong)(uint)puVar26[3];
      FUN_035683a4(*puVar26,uVar19,uVar50,uVar53,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar28 = *in_stack_00000170;
      if (lVar28 == 0) goto LAB_035574b8;
      uVar62 = *unaff_x20;
      if ((int)uVar62 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar15 = 0;
        goto LAB_03556f00;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      fVar45 = ABS(fVar45);
      fVar46 = 1.0;
      if ((uVar20 & 1) == 0) {
        fVar46 = fVar45;
      }
      if (lVar28 == 0) goto LAB_035574b8;
      bVar10 = false;
      bVar6 = false;
      _in_stack_00000128 = 0;
      bVar9 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar29 = 0x2e0;
      fVar47 = 0.0;
      fVar54 = 0.0;
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
      uVar52 = 0;
      goto LAB_03554e78;
    }
    if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    in_stack_000017dc = *(uint *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
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
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar28 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar28 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar28 + 0x38);
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
    if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
    goto LAB_035574b8;
    uVar62 = *unaff_x20;
    if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
    lVar30 = (long)(int)uVar62;
    unaff_w26 = (uint)*(byte *)(lVar28 + lVar30 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar29 = unaff_x19[0x24];
    if ((uint)in_stack_000017c8 == uVar62) {
      in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017dc == 0x2026) {
        *(long *)(lVar28 + lVar30 * unaff_x24 + 0x30) = unaff_x19[0xca];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar28 + 0x2c) = 0;
        *(long *)(lVar28 + 0x38) = unaff_x19[0xcb];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
        goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        uVar62 = *unaff_x20;
        if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar28 + (long)(int)uVar62 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_000017c8 = CONCAT44(3,uVar62 + 1);
      }
      else if (in_stack_000017dc == 3) {
        if ((*unaff_x21 == 0) || (lVar18 = FUN_03568ac0(*unaff_x21,0), lVar18 == 0))
        goto LAB_035574b8;
        FUN_0219b634(lVar18,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
        *(ulong *)(lVar28 + lVar30 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008a4,in_stack_000008a0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar62 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar62 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)uVar62 * (long)iVar15;
      *(undefined1 *)(lVar28 + 0x194) = 0;
      *(undefined2 *)(lVar28 + 0x20) = 0x200b;
      *(undefined4 *)(lVar28 + 100) = 0;
      *unaff_x20 = uVar62 + 1;
      uVar44 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) {
      fStack0000000000000158 = 1.0;
      if (iVar11 == 0) goto LAB_03550fec;
LAB_03550c00:
      if (iVar11 != 1) {
        lVar28 = *in_stack_00000170;
        unaff_s8 = 0.0;
        unaff_d13 = 0;
        if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
          unaff_d13 = unaff_d11;
        }
        if (lVar28 == 0) goto LAB_035574b8;
        in_stack_00000128 = 0.0;
        in_stack_00000120 = 0.0;
        goto LAB_035514cc;
      }
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar28 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar28 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar28,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar28 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      uVar44 = in_stack_000017dc;
      if (lVar28 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar30 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar30 = *(long *)puVar7;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar30 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar45 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar46 = (float)FUN_03776960(&stack0x00001720,0);
        fVar61 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar61 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar61 = (fVar45 / (float)iVar11) * fVar46 * fVar61;
        iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar45 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          in_stack_00000120 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000120 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar54 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar28 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar28 + 0x20),0);
          fVar47 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar28 + 0x20) == 0) goto LAB_035574b8;
          fVar51 = *(float *)(lVar28 + 0x2c);
          fVar57 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar63 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar56 = *(float *)((long)unaff_x19 + 0x404);
          fVar59 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          unaff_s8 = fVar61 * fVar63 * fVar56 * fVar59;
          in_stack_00000120 = (fVar45 / (float)iVar11) * fVar46 * in_stack_00000120;
          fVar61 = in_stack_00000120 * (fVar54 / fVar47) * fVar51 * fVar57;
          in_stack_00000120 = in_stack_00000120 / fVar61;
          in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
          fVar45 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          in_stack_00000120 = in_stack_00000120 * fVar45;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar28 + 0x20) == 0) goto LAB_035574b8;
          fVar47 = *(float *)(lVar28 + 0x2c);
          fVar54 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar54 = 1.0;
          }
          fVar57 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar51 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar59 = *(float *)((long)unaff_x19 + 0x404);
          fVar63 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          unaff_s8 = fVar61 * fVar51 * fVar59 * fVar63;
          fVar61 = (fVar45 / (float)iVar11) * fVar46 * fVar54 * fVar47 * fVar57;
          in_stack_00000120 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        unaff_d11 = (ulong)(uint)fVar61;
        *in_stack_000000e0 = lVar28;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar28);
        if ((*in_stack_00000170 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar28 + 0x2c) = 1;
        *(float *)(lVar28 + 0x160) = fVar61;
        *(long *)(lVar28 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar28 = *in_stack_00000170;
        if ((lVar28 == 0) || (lVar30 = *(long *)(lVar28 + 0x38), lVar30 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fStack000000000000015c = 0.0;
        *(int *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar29;
        goto LAB_035514b0;
      }
      goto LAB_03550bd0;
    }
    uVar62 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar62 >> 4 & 1) == 0) {
      if ((uVar62 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar62 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar62 = FUN_026b8410(in_stack_000017dc,0);
            in_stack_000017dc = uVar62 & 0xffff;
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
          uVar62 = FUN_026b8594(in_stack_000017dc,0);
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
        uVar62 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar62 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar44 = in_stack_000017dc;
  } while (*in_stack_000000e0 == 0);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  uVar16 = *unaff_x20;
  uVar62 = *(uint *)(lVar28 + 0x18);
  if (uVar62 <= uVar16) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar28 + (long)(int)uVar16 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar28 = unaff_x19[0x20];
  }
  else {
    lVar29 = unaff_x19[0x8f];
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar29 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar62 <= uVar16 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = *(float *)(lVar28 + (long)(int)(uVar16 - 1) * (long)iVar15 + 0x60);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar28 = *unaff_x21;
  }
  if (lVar28 == 0) goto LAB_035574b8;
  fVar46 = (float)FUN_03776960(lVar28 + 0x50,0);
  fVar61 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar61 = 1.0;
  }
  in_stack_00000120 = 0.0;
  in_stack_00000128 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000128 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000120 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar28 = unaff_x19[0xc9];
  if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_035574b8;
  fVar47 = *(float *)((long)unaff_x19 + 0x404);
  fVar57 = *(float *)(lVar28 + 0x2c);
  fVar54 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar51 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar59 = *(float *)((long)unaff_x19 + 0x404);
  fVar63 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar28 = unaff_x19[0x6d];
  if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar29 + 0x2c) = 0;
  fVar61 = ((fStack0000000000000158 * fVar45) / (float)iVar11) * fVar46 * fVar61;
  fVar54 = fVar61 * fVar47 * fVar57 * fVar54;
  unaff_d11 = (ulong)(uint)fVar54;
  *(float *)(lVar29 + 0x160) = fVar54;
  uVar62 = *(uint *)(unaff_x19 + 0x24);
  unaff_s8 = fVar61 * fVar51 * fVar59 * fVar63;
  if (uVar62 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar29 = unaff_x19[0xe1];
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar62) goto LAB_035575f4;
    lVar29 = *(long *)(lVar29 + (long)(int)uVar62 * 8 + 0x20);
    if (lVar29 == 0) goto LAB_035574b8;
    fStack000000000000015c = *(float *)(lVar29 + 0x10c);
  }
LAB_035514b0:
  unaff_d13 = 0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    unaff_d13 = unaff_d11;
  }
LAB_035514cc:
  lVar28 = *(long *)(lVar28 + 0x38);
  if (lVar28 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar28 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar28 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar28 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  uVar62 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)uVar62 * unaff_x24;
  *(undefined4 *)(lVar28 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar28 + 0x184) = in_stack_000008a8;
  *(ulong *)(lVar28 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar28 = *(long *)(unaff_x19[0xc9] + 0x20), lVar28 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar28,0);
  unaff_x22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar62 = FUN_026b63d8(in_stack_000017dc,0);
    unaff_w27 = uVar62 & 1;
  }
  else {
    unaff_w27 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  unaff_x28 = in_stack_00000170;
  if (*(char *)((long)unaff_x19 + 0x2f9) != '\0') goto code_r0x03551670;
  fStack000000000000012c = 0.0;
  uVar20 = 0;
  fVar45 = 0.0;
  uVar21 = in_stack_000017c8;
  goto LAB_03551850;
LAB_03554e78:
  uVar62 = uVar16 - 1;
  if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x50), lVar30 == 0))
  goto LAB_035574b8;
  lVar42 = (long)(int)uVar62;
  lVar18 = lVar28 + lVar42 * 0x178;
  uVar33 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_035575f4;
  lVar40 = (long)(int)uVar33;
  lVar30 = lVar30 + lVar40 * 0x5c;
  lVar36 = *(long *)(lVar18 + 0x38);
  uVar3 = *(ushort *)(lVar18 + 0x20);
  uVar35 = *(uint *)(lVar30 + 0x3c);
  uVar44 = *(uint *)(lVar30 + 0x68);
  iVar2 = *(int *)(lVar30 + 0x20);
  iVar13 = *(int *)(lVar30 + 0x28);
  iVar14 = *(int *)(lVar30 + 0x2c);
  uVar5 = *(uint *)(lVar30 + 0x40);
  lVar18 = (long)(int)uVar5;
  fVar63 = *(float *)(lVar30 + 0x4c);
  fVar56 = *(float *)(lVar30 + 0x54);
  fVar57 = *(float *)(lVar30 + 0x58);
  fVar58 = *(float *)(lVar30 + 0x5c);
  fVar48 = *(float *)(lVar30 + 0x60);
  fVar55 = *(float *)(lVar30 + 0x6c);
  fVar60 = *(float *)(lVar30 + 0x70);
  fVar51 = *(float *)(lVar30 + 0x74);
  fVar59 = *(float *)(lVar30 + 0x78);
  uVar39 = (uint)uVar3;
  if ((int)uVar44 < 9) {
    switch(uVar44) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar48 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar57;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar48 + fVar58 * 0.5) - fVar57 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar58 + fVar48) - fVar57;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar58 + fVar48;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar44 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar28 + (long)(int)uVar35 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b8cc4(uVar4,0);
      if ((uVar20 & 1) == 0) {
        bVar1 = (int)uVar33 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar57 <= fVar58) && (!bVar1 && uVar44 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar48;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar48;
        }
        goto LAB_03555088;
      }
      if (((uVar16 == 1) || (uVar33 != uVar52)) || (uVar62 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar48;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar58 + fVar48;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar39,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar25 = (char)unaff_x19[0x1e];
        fVar48 = -fVar57;
        if (cVar25 != '\0') {
          fVar48 = fVar57;
        }
        if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_035575f4;
        iVar14 = (int)*(char *)(lVar28 + (long)(int)uVar35 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar57 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar57 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar39 == 9) {
LAB_03556e74:
          fVar57 = 1.0 - fVar57;
        }
        else {
          if (uVar39 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b97f8(uVar39,0);
            cVar25 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_03556e74;
          }
          iVar14 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar13;
        }
        fVar57 = ((fVar58 + fVar48) * fVar57) / (float)iVar14;
        if (cVar25 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar57;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar57;
        }
      }
    }
  }
  else if (uVar44 == 0x20) {
    fVar57 = fVar55 + fVar51;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar44 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar44 <= uVar62) goto LAB_035575f4;
  lVar30 = lVar28 + lVar42 * 0x178;
  fVar58 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar57 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar48 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar30 + 0x194) == '\0') goto LAB_03555938;
  iVar13 = *(int *)(lVar28 + lVar42 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0355574c;
  fVar47 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar33,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar28 + lVar42 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar47 = 1.0;
    break;
  case 1:
    fVar59 = *(float *)(lVar28 + lVar42 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar28 + lVar42 * 0x178;
      fVar51 = (in_stack_000000f8._4_4_ + fVar59) - *(float *)(in_stack_00000080 + 0x230);
      fVar59 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar27 = lVar28 + lVar42 * 0x178;
    fVar51 = fVar51 - fVar55;
    *(float *)(lVar27 + 0x84) = fVar47 + (fVar59 - fVar55) / fVar51;
    *(float *)(lVar27 + 0xac) = fVar47 + (*(float *)(lVar27 + 0x98) - fVar55) / fVar51;
    *(float *)(lVar27 + 0xd4) = fVar47 + (*(float *)(lVar27 + 0xc0) - fVar55) / fVar51;
    fVar47 = fVar47 + (*(float *)(lVar27 + 0xe8) - fVar55) / fVar51;
    break;
  case 2:
    lVar27 = lVar28 + lVar42 * 0x178;
    fVar59 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar51 = (in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar27 + 0x84) = fVar47 + fVar51 / fVar59;
    *(float *)(lVar27 + 0xac) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar47 = fVar47 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar28 + lVar42 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar28 + lVar42 * 0x178;
      fVar59 = fVar59 - fVar60;
      fVar51 = fVar47 + (*(float *)(lVar27 + 0x74) - fVar60) / fVar59;
      fVar59 = fVar47 + (*(float *)(lVar27 + 0x9c) - fVar60) / fVar59;
      *(float *)(lVar27 + 0x88) = fVar51;
      *(float *)(lVar27 + 0xb0) = fVar59;
      *(float *)(lVar27 + 0xd8) = fVar51;
      *(float *)(lVar27 + 0x100) = fVar59;
      break;
    case 2:
      lVar27 = lVar28 + lVar42 * 0x178;
      fVar51 = fVar47 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar51;
      fVar59 = *(float *)(unaff_x19 + 0x9c);
      fVar55 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar51;
      fVar51 = fVar47 + (*(float *)(lVar27 + 0x9c) - fVar59) / (fVar55 - fVar59);
      *(float *)(lVar27 + 0xb0) = fVar51;
      *(float *)(lVar27 + 0x100) = fVar51;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar44 = (uint)*(undefined8 *)(lVar28 + 0x18);
    }
    if (uVar44 <= uVar62) goto LAB_035575f4;
    lVar27 = lVar28 + lVar42 * 0x178;
    fVar51 = *(float *)(lVar27 + 0x15c);
    fVar59 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar51) * 0.5;
    fVar55 = fVar47 + *(float *)(lVar27 + 0x88) * fVar51 + fVar59;
    fVar47 = fVar47 + fVar59 + *(float *)(lVar27 + 0xb0) * fVar51;
    *(float *)(lVar27 + 0x84) = fVar55;
    *(float *)(lVar27 + 0xac) = fVar55;
    *(float *)(lVar27 + 0xd4) = fVar47;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar28 + lVar42 * 0x178 + 0xfc) = fVar47;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar44 <= uVar62) goto LAB_035575f4;
    lVar27 = lVar28 + lVar42 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar62 < uVar44) {
      lVar27 = lVar28 + lVar42 * 0x178;
      fVar63 = fVar63 - fVar56;
      fVar47 = (*(float *)(lVar27 + 0x74) - fVar56) / fVar63;
      fVar63 = (*(float *)(lVar27 + 0x9c) - fVar56) / fVar63;
      *(float *)(lVar27 + 0x88) = fVar47;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar44 <= uVar62) goto LAB_035575f4;
    lVar27 = lVar28 + lVar42 * 0x178;
    fVar47 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar47;
    fVar63 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar27 + 0xb0) = fVar63;
    *(float *)(lVar27 + 0xd8) = fVar63;
    *(float *)(lVar27 + 0x100) = fVar47;
    break;
  case 3:
    if (uVar44 <= uVar62) goto LAB_035575f4;
    lVar27 = lVar28 + lVar42 * 0x178;
    fVar63 = *(float *)(lVar27 + 0x15c);
    fVar51 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar63) * 0.5;
    fVar47 = *(float *)(lVar27 + 0x84) / fVar63 + fVar51;
    fVar51 = fVar51 + *(float *)(lVar27 + 0xd4) / fVar63;
    *(float *)(lVar27 + 0x88) = fVar47;
    *(float *)(lVar27 + 0xb0) = fVar51;
    *(float *)(lVar27 + 0x100) = fVar47;
    *(float *)(lVar27 + 0xd8) = fVar51;
  }
  if (uVar44 <= uVar62) goto LAB_035575f4;
  lVar27 = lVar28 + lVar42 * 0x178;
  fVar47 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar28 + lVar42 * 0x178 + 400) & 1) != 0)) {
    fVar47 = -fVar47;
  }
  fVar51 = fVar45;
  if (((iVar11 == 2) || (fVar51 = fVar46, iVar11 == 1)) || (fVar51 = fVar45 / fVar61, iVar11 == 0))
  {
    fVar47 = fVar51 * fVar47;
  }
  lVar27 = lVar28 + lVar42 * 0x178;
  fVar63 = *(float *)(lVar27 + 0x88);
  fVar59 = *(float *)(lVar27 + 0x84);
  fVar51 = -2.1474836e+09;
  if (fVar59 != INFINITY) {
    fVar51 = (float)(int)fVar59;
  }
  fVar55 = *(float *)(lVar27 + 0xd4);
  fVar60 = *(float *)(lVar27 + 0xd8);
  fVar56 = -2.1474836e+09;
  if (fVar63 != INFINITY) {
    fVar56 = (float)(int)fVar63;
  }
  uVar49 = FUN_03591d3c(fVar59 - fVar51,fVar63 - fVar56);
  *(undefined4 *)(lVar27 + 0x84) = uVar49;
  if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
  fVar60 = fVar60 - fVar56;
  *(float *)(lVar27 + 0x88) = fVar47;
  uVar49 = FUN_03591d3c(fVar59 - fVar51,fVar60);
  *(undefined4 *)(lVar28 + lVar42 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
  fVar55 = fVar55 - fVar51;
  *(float *)(lVar28 + lVar42 * 0x178 + 0xb0) = fVar47;
  fVar51 = (float)FUN_03591d3c(fVar55,fVar60);
  *(float *)(lVar27 + 0xd4) = fVar51;
  if (*(uint *)(lVar28 + 0x18) <= uVar62) goto LAB_035575f4;
  *(float *)(lVar27 + 0xd8) = fVar47;
  uVar49 = FUN_03591d3c(fVar55,fVar63 - fVar56);
  *(undefined4 *)(lVar28 + lVar42 * 0x178 + 0xfc) = uVar49;
  uVar44 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar44 <= uVar62) goto LAB_035575f4;
  *(float *)(lVar28 + lVar42 * 0x178 + 0x100) = fVar47;
LAB_0355574c:
  if (((int)uVar62 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar33 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar44 <= uVar62) goto LAB_035575f4;
      lVar30 = lVar28 + lVar42 * 0x178;
      *(ulong *)(lVar30 + 0x70) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar30 + 0x70));
      *(float *)(lVar30 + 0x78) = fVar48 + *(float *)(lVar30 + 0x78);
      *(ulong *)(lVar30 + 0x98) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar30 + 0x98));
      *(float *)(lVar30 + 0xa0) = fVar48 + *(float *)(lVar30 + 0xa0);
      *(ulong *)(lVar30 + 0xc0) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar30 + 0xc0));
      *(float *)(lVar30 + 200) = fVar48 + *(float *)(lVar30 + 200);
      *(ulong *)(lVar30 + 0xe8) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar30 + 0xe8));
      *(float *)(lVar30 + 0xf0) = fVar48 + *(float *)(lVar30 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar33 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar62 < uVar44) {
        if (*(uint *)(lVar28 + lVar42 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar30 = lVar28 + lVar42 * 0x178;
          *(ulong *)(lVar30 + 0x70) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar30 + 0x70));
          *(float *)(lVar30 + 0x78) = fVar48 + *(float *)(lVar30 + 0x78);
          *(ulong *)(lVar30 + 0x98) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar30 + 0x98));
          *(float *)(lVar30 + 0xa0) = fVar48 + *(float *)(lVar30 + 0xa0);
          *(ulong *)(lVar30 + 0xc0) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar30 + 0xc0));
          *(float *)(lVar30 + 200) = fVar48 + *(float *)(lVar30 + 200);
          *(ulong *)(lVar30 + 0xe8) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar30 + 0xe8));
          *(float *)(lVar30 + 0xf0) = fVar48 + *(float *)(lVar30 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar44 <= uVar62) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar44 = *(uint *)(lVar28 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar27 = lVar28 + lVar42 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar49;
  if (uVar44 <= uVar62) goto LAB_035575f4;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar27 = lVar28 + lVar42 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar49;
  *(undefined1 *)(lVar30 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar13 == 0) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar32)();
  }
  else if (iVar13 == 1) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
  lVar30 = lVar30 + lVar42 * 0x178;
  uVar21 = *(undefined8 *)(lVar30 + 0x11c);
  *(undefined8 *)(lVar30 + 0x11c) =
       CONCAT44(fVar57 + (float)((ulong)uVar21 >> 0x20),fVar58 + (float)uVar21);
  *(float *)(lVar30 + 0x124) = fVar48 + *(float *)(lVar30 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
  lVar30 = lVar30 + lVar42 * 0x178;
  *(ulong *)(lVar30 + 0x110) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0x110) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar30 + 0x110));
  *(float *)(lVar30 + 0x118) = fVar48 + *(float *)(lVar30 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
  lVar30 = lVar30 + lVar42 * 0x178;
  *(ulong *)(lVar30 + 0x128) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar30 + 0x128) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar30 + 0x128));
  *(float *)(lVar30 + 0x130) = fVar48 + *(float *)(lVar30 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
  lVar30 = lVar30 + lVar42 * 0x178;
  *(float *)(lVar30 + 0x134) = fVar58 + *(float *)(lVar30 + 0x134);
  *(ulong *)(lVar30 + 0x138) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x138) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar30 + 0x138));
  lVar30 = *in_stack_00000170;
  if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar44 = *(uint *)(lVar27 + 0x18);
  if (uVar44 <= uVar62) goto LAB_035575f4;
  lVar37 = lVar27 + lVar42 * 0x178;
  uVar19 = CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar37 + 0x140) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar37 + 0x140));
  fVar51 = fVar57 + *(float *)(lVar37 + 0x150);
  uVar50 = (ulong)(uint)fVar51;
  uVar53 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar37 + 0x148) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar37 + 0x148));
  *(float *)(lVar37 + 0x150) = fVar51;
  *(ulong *)(lVar37 + 0x140) = uVar19;
  *(ulong *)(lVar37 + 0x148) = uVar53;
  if (uVar33 == uVar52) {
    uVar52 = *unaff_x20 - 1;
    if (uVar62 == uVar52) goto LAB_03555b44;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar37 = (long)(int)uVar52;
    lVar38 = lVar30 + lVar37 * 0x5c;
    uVar53 = (ulong)(uint)*(float *)(lVar38 + 0x58);
    fVar51 = fVar57 + *(float *)(lVar38 + 0x54);
    uVar19 = (ulong)(uint)fVar51;
    fVar63 = fVar58 + *(float *)(lVar38 + 0x58);
    uVar50 = (ulong)(uint)fVar63;
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar51;
    *(float *)(lVar38 + 0x58) = fVar63;
    if (uVar44 <= *(uint *)(lVar38 + 0x34)) goto LAB_035575f4;
    uVar49 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar30 = lVar30 + lVar37 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar51;
    *(undefined4 *)(lVar30 + 0x6c) = uVar49;
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x50), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar52 = *(uint *)(lVar27 + lVar37 * 0x5c + 0x40);
    if (*(uint *)(lVar30 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar27 = lVar27 + lVar37 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar52 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar52 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar62 == uVar52) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar33) goto LAB_035575f4;
      lVar37 = lVar27 + lVar40 * 0x5c;
      uVar53 = (ulong)(uint)*(float *)(lVar37 + 0x58);
      uVar19 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar37 + 0x4c));
      fVar51 = fVar57 + *(float *)(lVar37 + 0x54);
      fVar58 = fVar58 + *(float *)(lVar37 + 0x58);
      uVar50 = (ulong)(uint)fVar58;
      *(ulong *)(lVar37 + 0x4c) = uVar19;
      *(float *)(lVar37 + 0x54) = fVar51;
      *(float *)(lVar37 + 0x58) = fVar58;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
      uVar49 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar40 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar51;
      *(undefined4 *)(lVar27 + 0x6c) = uVar49;
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar33) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      uVar52 = *(uint *)(lVar27 + lVar40 * 0x5c + 0x40);
      if (*(uint *)(lVar30 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar27 = lVar27 + lVar40 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar52 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_026b82c4(uVar39,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar39 - 0x2010)) && (uVar39 != 0xad)) && (uVar39 != 0x2d)) {
    if (bVar6) {
      if (((uVar16 != 1) && ((int)uVar62 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
         (((int)uVar62 < (int)*unaff_x20 && ((uVar39 == 0x2019 || (uVar39 == 0x27)))))) {
        if (*(uint *)(lVar28 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar28 + lVar29 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b82c4(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar28 + lVar29 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar4,0);
          if ((uVar20 & 1) != 0) goto LAB_03555d68;
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
      uVar20 = FUN_026b81f8(uVar39,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b63d8(uVar39,0);
        if (((uVar39 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar62 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b82c4(uVar39,0);
      iVar13 = (int)in_stack_00000128;
      if ((uVar20 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar13 = uVar16 - 2;
    }
    lVar30 = *in_stack_00000170;
    if (lVar30 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar30 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar52 = *(uint *)(lVar30 + 0x24);
    iVar14 = *(int *)(lVar27 + 0x18);
    if (iVar14 < (int)(uVar52 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar30 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
    }
    lVar30 = *(long *)(lVar30 + 0x40);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)uVar52 * 0x18;
    *(long **)(lVar30 + 0x20) = unaff_x19;
    *(float *)(lVar30 + 0x28) = fStack0000000000000158;
    *(int *)(lVar30 + 0x2c) = iVar13;
    *(int *)(lVar30 + 0x30) = (iVar13 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar30 = unaff_x19[0x6d];
    if (lVar30 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar30 + 0x50);
    *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar33) goto LAB_035575f4;
    lVar27 = lVar27 + lVar40 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      fStack0000000000000158 = (float)uVar62;
    }
    if (uVar62 == *unaff_x20 - 1) {
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar30 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar52 = *(uint *)(lVar30 + 0x24);
      iVar13 = *(int *)(lVar27 + 0x18);
      if (iVar13 < (int)(uVar52 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar30 + 0x40),iVar13 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x40);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar30 = lVar30 + (long)(int)uVar52 * 0x18;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      *(float *)(lVar30 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar30 + 0x2c) = uVar62;
      *(uint *)(lVar30 + 0x30) = uVar16 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar30 = unaff_x19[0x6d];
      if (lVar30 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar33) goto LAB_035575f4;
      lVar27 = lVar27 + lVar40 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar52 = *(uint *)(lVar30 + 0x18);
  if (uVar52 <= uVar62) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar42 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar52 <= uVar16 - 2) goto LAB_035575f4;
      lVar40 = *unaff_x19;
      uVar52 = *(uint *)(lVar30 + lVar29 + -0x330);
      uVar49 = *(undefined4 *)(lVar30 + lVar29 + -0x2f8);
LAB_035562ec:
      pcVar32 = *(code **)(lVar40 + 0x8d8);
LAB_035562f4:
      uVar53 = (ulong)uVar52;
      uVar19 = (ulong)(uint)_bStack0000000000000070;
      uVar50 = (ulong)_bStack0000000000000074;
      (*pcVar32)(fStack0000000000000078,uVar19,uVar50,uVar53,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar49);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar30 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar54 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar30 = lVar30 + lVar42 * 0x178;
    iVar13 = *(int *)(lVar30 + 0x68);
    *(int *)(lVar30 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar62) || ((int)unaff_x19[0x66] < (int)uVar33)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b63d8(uVar39,0);
    if ((uVar39 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar40 = *(long *)(lVar30 + 0x38), lVar40 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar62) goto LAB_035575f4;
      fVar51 = *(float *)(lVar40 + lVar42 * 0x178 + 0x160);
      if (fVar54 <= fVar51) {
        fVar54 = fVar51;
      }
      if (fStack0000000000000100 <= ABS(fVar47)) {
        fStack0000000000000100 = ABS(fVar47);
      }
      if (iVar13 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar30 = *in_stack_00000170;
          if (lVar30 == 0) goto LAB_035574b8;
          lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar40 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar40 + 0x15a8);
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar63 = *(float *)(lVar30 + lVar42 * 0x178 + 0x14c);
      fVar51 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar63 = fVar63 + fVar54 * fVar51;
      if (fVar63 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar63;
      }
      uVar19 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar13;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar62)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar62 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar39,0);
        if ((uVar20 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
      lVar30 = lVar30 + lVar42 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar30 + 0x160);
      fStack0000000000000078 = *(float *)(lVar30 + 0x11c);
      uVar50 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar54 != 0.0;
      fVar51 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar51 = fVar54;
      }
      fVar54 = fVar51;
      uVar12 = *(undefined4 *)(lVar30 + 0x168);
      _bStack0000000000000074 = 0;
      fVar51 = fVar47;
      if (bVar10) {
        fVar51 = fStack0000000000000100;
      }
      uVar19 = (ulong)(uint)fVar51;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar51;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar62 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar42 * 0x178;
          lVar40 = *unaff_x19;
          uVar52 = *(uint *)(lVar30 + 0x128);
          uVar49 = *(undefined4 *)(lVar30 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar62 == uVar35) || ((int)uVar5 <= (int)uVar62)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        lVar40 = lVar42;
        uVar52 = uVar62;
        if (uVar39 == 0x200b || (uVar20 & 1) != 0) {
          lVar40 = lVar18;
          uVar52 = uVar5;
        }
        if (uVar52 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar40 * 0x178;
          uVar52 = *(uint *)(lVar30 + 0x128);
          uVar49 = *(undefined4 *)(lVar30 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        uVar52 = *(uint *)(lVar30 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar62 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_035575f4;
      uVar20 = FUN_03567ad8(uVar12,*(undefined4 *)(lVar30 + lVar29),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0)) {
          if (uVar62 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar42 * 0x178;
            uVar53 = (ulong)*(uint *)(lVar30 + 0x128);
            uVar50 = (ulong)_bStack0000000000000074;
            uVar19 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar19,uVar50,uVar53,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar30 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar30 = *(long *)puVar7;
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
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
  if (lVar36 == 0) goto LAB_035574b8;
  uVar52 = *(uint *)(lVar30 + lVar42 * 0x178 + 400);
  fVar51 = (float)FUN_03776a30(lVar36 + 0x50,0);
  if ((uVar52 >> 6 & 1) == 0) {
    if ((_in_stack_00000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
      uVar52 = *(uint *)(lVar30 + lVar29 + -0x330);
      fVar57 = *(float *)(lVar30 + lVar29 + -0x30c);
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar53 = (ulong)uVar52;
      uVar19 = (ulong)(uint)fStack000000000000009c;
      uVar50 = (ulong)(uint)fStack0000000000000098;
      (*pcVar32)(fStack00000000000000a0,uVar19,uVar50,uVar53,
                 fStack00000000000000a8 * fVar51 + fVar57,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _in_stack_00000128 = _in_stack_00000128 & 0xffffffff;
  }
  else {
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar40 = *(long *)(lVar30 + 0x38), lVar40 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= uVar62) goto LAB_035575f4;
    *(int *)(lVar40 + lVar42 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar62) || ((int)unaff_x19[0x66] < (int)uVar33)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar40 + lVar42 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar62)) ||
       ((_in_stack_00000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_in_stack_00000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar62 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar39,0);
        if ((uVar20 & 1) != 0) goto LAB_035564e8;
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar62) goto LAB_035575f4;
      lVar30 = lVar30 + lVar42 * 0x178;
      fStack0000000000000040 = *(float *)(lVar30 + 0x60);
      fStack0000000000000038 = *(float *)(lVar30 + 0x14c);
      uVar19 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar30 + 0x11c);
      uVar50 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar30 + 0x160);
      fStack000000000000009c = fVar51 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar52 = *unaff_x20;
    if (uVar52 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar62 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar42 * 0x178;
          lVar18 = *unaff_x19;
          uVar52 = *(uint *)(lVar30 + 0x128);
          fVar57 = *(float *)(lVar30 + 0x14c);
LAB_03556654:
          pcVar32 = *(code **)(lVar18 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar62 == uVar35) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        uVar52 = *(uint *)(lVar30 + 0x18);
        if (uVar39 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar52 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar18 = lVar42;
          if (uVar52 <= uVar62) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar30 = lVar30 + lVar18 * 0x178;
        fVar57 = *(float *)(lVar30 + 0x14c);
        uVar52 = *(uint *)(lVar30 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar62 < (int)uVar52) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 != 0) && (lVar40 = *(long *)(lVar30 + 0x38), lVar40 != 0)) {
        if (uVar16 < *(uint *)(lVar40 + 0x18)) {
          if (*(float *)(lVar40 + lVar29 + -0x108) == fStack0000000000000040) {
            fVar63 = *(float *)(lVar40 + lVar29 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = (ulong)(uint)fStack0000000000000038;
            uVar20 = FUN_03567bac(fVar57 + fVar63,uVar19,0);
            if ((uVar20 & 1) != 0) {
              uVar52 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar30 = *in_stack_00000170;
            if (lVar30 == 0) goto LAB_035574b8;
          }
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 != 0) {
            uVar52 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar62 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar52) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar62 < (int)uVar52) {
      iVar13 = FUN_036d3364(lVar36,0);
      if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_035575f4;
      lVar30 = *(long *)(lVar28 + lVar29 + -0x130);
      if (lVar30 == 0) goto LAB_035574b8;
      iVar14 = FUN_036d3364(lVar30,0);
      if (iVar13 != iVar14) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar30 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar52 = *(uint *)(lVar30 + lVar29 + -0x330);
          fVar57 = *(float *)(lVar30 + lVar29 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _in_stack_00000128 = CONCAT44(1,in_stack_00000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar52 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar52 <= uVar62) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar42 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar50 = (ulong)uStack00000000000000c0;
      uVar19 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar19,uVar50,uVar53,fStack00000000000000d0,uVar50);
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar62) || ((int)unaff_x19[0x66] < (int)uVar33)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar30 + lVar42 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar62)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar62 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar39,0);
        if ((uVar20 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      uVar52 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar52 <= uVar62) goto LAB_035575f4;
      lVar18 = *(long *)(lVar18 + 0xb8);
      lVar36 = lVar30 + lVar42 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar36 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar36 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar18 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar18 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar36 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar18 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar18 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar52 <= uVar62) goto LAB_035575f4;
    lVar30 = lVar30 + lVar42 * 0x178;
    fVar51 = *(float *)(lVar30 + 0x128);
    fVar56 = *(float *)(lVar30 + 0x188);
    uVar17 = *(undefined8 *)(lVar30 + 0x17c);
    fVar55 = *(float *)(lVar30 + 0x184);
    uVar21 = *(undefined8 *)(lVar30 + 0x184);
    fVar48 = *(float *)(lVar30 + 0x18c);
    fVar57 = *(float *)(lVar30 + 0x11c);
    fVar59 = *(float *)(lVar30 + 0x148);
    fVar63 = *(float *)(lVar30 + 0x150);
    in_stack_00000178 = uVar17;
    fStack0000000000000180 = fVar55;
    fStack0000000000000184 = fVar56;
    in_stack_00000188 = fVar48;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar20 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar30 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar51 = fVar51 + (float)in_stack_000017b8;
      uVar50 = (ulong)(uint)fVar51;
      fVar57 = fVar57 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar63 = fVar63 - in_stack_000017c0;
      uVar19 = (ulong)(uint)fVar63;
      fVar59 = fVar59 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar53 = (ulong)(uint)fVar59;
      if (fVar57 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar57;
      }
      if (fVar63 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar63;
      }
      if (fStack00000000000000c8 <= fVar51) {
        fStack00000000000000c8 = fVar51;
      }
      if (fStack00000000000000d0 <= fVar59) {
        fStack00000000000000d0 = fVar59;
      }
    }
    else {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar57 = (fVar57 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar53 = (ulong)(uint)fVar57;
      if (fVar63 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar63;
      }
      uVar19 = (ulong)(uint)fStack00000000000000dc;
      uVar50 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar59) {
        fStack00000000000000d0 = fVar59;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar19,uVar50,uVar53,fStack00000000000000d0,uVar50);
      fStack00000000000000dc = fVar63 - fVar48;
      fStack00000000000000c8 = fVar51 + fVar55;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar59 + fVar56;
      fStack00000000000000d8 = fVar57;
      in_stack_000017b0 = uVar17;
      in_stack_000017b8 = uVar21;
      in_stack_000017c0 = fVar48;
    }
    if (((*unaff_x20 == 1) || (uVar62 == uVar35)) || (((int)uVar5 <= (int)uVar62 || (!bVar1)))) {
      uVar50 = (ulong)uStack00000000000000c0;
      uVar19 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar19,uVar50,uVar53,fStack00000000000000d0,uVar50);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar62 = *unaff_x20;
  lVar29 = lVar29 + 0x178;
  _in_stack_00000128 = CONCAT44(fStack000000000000012c,(int)in_stack_00000128 + 1);
  bVar1 = (int)uVar62 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar52 = uVar33;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
code_r0x03551670:
  if (*in_stack_000000e0 == 0) goto LAB_035574b8;
  uVar16 = *unaff_x20;
  unaff_w25 = *(uint *)(*in_stack_000000e0 + 0x28);
  if ((int)uVar16 < (int)in_stack_00000088._4_4_) goto code_r0x03551690;
  unaff_d14 = 0;
  fStack000000000000012c = 0.0;
  uVar62 = 0;
  fVar45 = 0.0;
  goto LAB_0355177c;
code_r0x03551690:
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= uVar16 + 1) goto LAB_035575f4;
  lVar28 = *(long *)(lVar28 + (long)(int)(uVar16 + 1) * (long)iVar15 + 0x30);
  if ((((lVar28 == 0) || (*unaff_x21 == 0)) || (lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0)
      ) || (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_035574b8;
  in_stack_000008a0 = unaff_w25 | *(int *)(lVar28 + 0x28) << 0x10;
  uVar20 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                        *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
  unaff_d14 = 0;
  if ((uVar20 & 1) != 0) {
    if (in_stack_000016f8 == 0) goto LAB_035574b8;
    fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
    unaff_d14 = (ulong)*(uint *)(in_stack_000016f8 + 0x20);
    fVar45 = *(float *)(in_stack_000016f8 + 0x14);
    uVar62 = *(uint *)(in_stack_000016f8 + 0x18);
    if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
      in_stack_00000140 = 0.0;
    }
    goto LAB_03551778;
  }
  goto code_r0x03551768;
FUN_03556ed8:
  lVar28 = *in_stack_00000170;
  if (lVar28 != 0) {
    iVar15 = uVar33 + 1;
    plVar43 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar28 + 0x18) = uVar62;
    lVar29 = unaff_x19[0xd4];
    *(int *)(lVar28 + 0x2c) = iVar15;
    if ((int)uVar62 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar28 + 0x1c) = (int)lVar29;
    *(float *)(lVar28 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar28 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar28 = unaff_x19[0xdf];
    if (lVar28 != 0) {
      (**(code **)(lVar28 + 0x18))
                (*(undefined8 *)(lVar28 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar28 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar15 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar15 != 0x19) {
      lVar28 = unaff_x19[0xe5];
      if (lVar28 == 0) goto LAB_035574b8;
      uVar62 = FUN_03911ee4(lVar28,0);
      FUN_03911f20(lVar28,uVar62 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x60), lVar28 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar28 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar28 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar28 = *(long *)(unaff_x19[0x6d] + 0x60), lVar28 != 0)) {
        if (*(int *)(lVar28 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar28 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar28 = *(long *)(unaff_x19[0x6d] + 0x60), lVar28 != 0)) {
            if (*(int *)(lVar28 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar28 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar28 = *(long *)(unaff_x19[0x6d] + 0x60), lVar28 != 0)) {
                if (*(int *)(lVar28 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar28 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar28 = *(long *)(unaff_x19[0x6d] + 0x60), lVar28 != 0)) {
                    if (*(int *)(lVar28 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar28 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar21 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar62 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar28 = *in_stack_00000170;
                              if (lVar28 != 0) {
                                lVar30 = 0;
                                lVar29 = 0;
                                do {
                                  uVar20 = lVar29 + 1;
                                  if ((long)*(int *)(lVar28 + 0x34) <= (long)uVar20)
                                  goto LAB_03554724;
                                  lVar28 = *(long *)(lVar28 + 0x60);
                                  if (lVar28 == 0) break;
                                  if (*(int *)(*plVar43 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                  FUN_03596a20(lVar28 + lVar30 + 0x70,0);
                                  lVar28 = unaff_x19[0xe1];
                                  if (lVar28 == 0) break;
                                  if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                  uVar17 = *(undefined8 *)(lVar28 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar23 = FUN_036d35a8(uVar17,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar28 = *(long *)(*in_stack_00000170 + 0x60), lVar28 == 0
                                         )) break;
                                      if (*(int *)(*plVar43 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                      FUN_03596b20(lVar28 + lVar30 + 0x70,1,0);
                                    }
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a460c(lVar28,*(undefined8 *)(lVar18 + lVar30 + 0x80),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a4810(lVar28,*(undefined8 *)(lVar18 + lVar30 + 0x98),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a48bc(lVar28,*(undefined8 *)(lVar18 + lVar30 + 0xa0),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a4e24(lVar28,*(undefined8 *)(lVar18 + lVar30 + 0xa8),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = UnityEngine_Material__GetColorArray(lVar28,0),
                                       lVar28 == 0)) break;
                                    FUN_036aa280(lVar28,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_037b514c(lVar28,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar29 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (uVar17 = UnityEngine_Material__GetColorArray(lVar18,0),
                                       lVar28 == 0)) break;
                                    FUN_0390f3a4(lVar28,uVar17,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_037b514c(lVar28,0), lVar28 == 0)) break;
                                    FUN_0390eec8(uVar21,uVar19,uVar50,uVar53,lVar28,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_037b514c(lVar28,0), lVar28 == 0)) break;
                                    FUN_0390ed78(lVar28,uVar62 & 1,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_035575f4;
                                    plVar41 = *(long **)(lVar28 + lVar29 * 8 + 0x28);
                                    uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar41 == (long *)0x0) break;
                                    (**(code **)(*plVar41 + 0x2c8))
                                              (plVar41,uVar16 & 1,*(undefined8 *)(*plVar41 + 0x2d0))
                                    ;
                                  }
                                  lVar28 = *in_stack_00000170;
                                  lVar29 = lVar29 + 1;
                                  lVar30 = lVar30 + 0x50;
                                } while (lVar28 != 0);
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


