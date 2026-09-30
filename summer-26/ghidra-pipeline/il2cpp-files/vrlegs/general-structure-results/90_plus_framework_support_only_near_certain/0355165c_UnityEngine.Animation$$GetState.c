/*
FUNCTION_NAME: UnityEngine.Animation$$GetState
ENTRY_POINT: 0355165c
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


void UnityEngine_Animation__GetState(void)

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
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
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
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar41;
  long *plVar42;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  ulong uVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  ulong unaff_d11;
  float fVar60;
  float fVar61;
  ulong unaff_d13;
  float unaff_s14;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
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
  
code_r0x0355165c:
  fVar45 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  iVar11 = (int)unaff_x24;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar63 = 0.0;
    fVar60 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar16 = *unaff_x20;
    uVar12 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar16 < (int)in_stack_00000088._4_4_) {
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar16 + 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar16 + 1) * (long)iVar11 + 0x30);
      if ((((lVar27 == 0) || (*unaff_x21 == 0)) ||
          (lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar12 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar19 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar62 = 0;
      if ((uVar19 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar63 = 0.0;
        fVar60 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar62 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar60 = *(float *)(in_stack_000016f8 + 0x14);
        fVar63 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar45 = 0.0;
        }
      }
      uVar16 = *unaff_x20;
    }
    else {
      uVar62 = 0;
      fStack000000000000012c = 0.0;
      fVar63 = 0.0;
      fVar60 = 0.0;
    }
    if (0 < (int)uVar16) {
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar16 - 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (ulong)(uVar16 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar27 == 0) || (*unaff_x21 == 0)) ||
         ((lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar27 + 0x28) | uVar12 << 0x10;
      uVar19 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar19 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar60 = (float)FUN_03571cb4(fVar60,fVar63,fStack000000000000012c,uVar62,
                                         *(undefined4 *)(in_stack_000016f8 + 0x28),
                                         *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016f8 + 0x30),
                                         *(undefined4 *)(in_stack_000016f8 + 0x34),0),
           in_stack_000016f8 == 0)) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar45 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  fVar44 = (float)unaff_d13;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar55 = *(float *)(unaff_x19 + 200);
    fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar55 = fVar55 - fVar44 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar55;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar55 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar55 = *(float *)(unaff_x19 + 0x56);
  fVar46 = 0.0;
  if (fVar55 != 0.0) {
    fVar46 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar47 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar55 * 0.5 - fVar44 * (fVar46 * 0.5 + fVar47));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar46;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar27 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar27,0,0);
    fVar47 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      fVar47 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        fVar55 = (float)FUN_0369e060(lVar27,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar58 = *(float *)(*unaff_x21 + 0x1b0);
        fVar47 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        fVar47 = fVar47 * fVar55 * fVar58 * 0.25;
        if (fVar55 < fStack000000000000015c + fVar47) {
          fStack000000000000015c = fVar55 - fVar47;
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
    uVar19 = FUN_036cee6c(lVar27,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 != 0) {
            fVar55 = (float)FUN_0369e060(lVar27,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54)
                                         ,0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar58 = *(float *)(*unaff_x21 + 0x1a8);
              fVar47 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
              fVar47 = fVar47 * fVar55 * fVar58 * 0.25;
              if (fVar55 < fStack000000000000015c + fVar47) {
                fStack000000000000015c = fVar55 - fVar47;
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
  fVar55 = *(float *)(unaff_x19 + 200);
  fVar58 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar55 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar44 * (fVar60 + ((fVar58 - fStack000000000000015c) - fVar47));
  fVar60 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar64 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s14 + fVar44 * (fVar63 + fStack000000000000015c + fVar60)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar60 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar60 = fVar64 - fVar44 * (fStack000000000000015c + fStack000000000000015c + fVar60);
  fVar63 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar58 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar44 * (fVar47 + fVar47 +
                             fStack000000000000015c + fStack000000000000015c + fVar63);
  fStack0000000000000104 = fVar55;
  fVar63 = fVar58;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar57 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar63 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar56 = fVar57 * fVar44 * (fVar47 + fStack000000000000015c + fVar63);
    fVar63 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar54 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar64 = fVar64 + 0.0;
    fVar60 = fVar60 + 0.0;
    fVar57 = fVar57 * fVar44 * (((fVar63 - fVar54) - fStack000000000000015c) - fVar47);
    fVar54 = fVar55 + fVar56;
    fVar63 = fVar58 + fVar57;
    fVar48 = (fVar56 - fVar57) * 0.5;
    fVar55 = (fVar55 + fVar57) - fVar48;
    fVar58 = (fVar58 + fVar56) - fVar48;
    fStack0000000000000104 = fVar54 - fVar48;
    fVar63 = fVar63 - fVar48;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar48 = 0.0;
    fVar56 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar57 = fVar60;
    fVar54 = fVar64;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar59 = (fVar58 + fVar55) * 0.5;
    fVar61 = (fVar60 + fVar64) * 0.5;
    fVar64 = fVar64 - fVar61;
    fStack0000000000000100 = 0.0;
    fVar54 = fVar64;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar59,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar59 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar57 = fVar60 - fVar61;
    fStack0000000000000114 = 0.0;
    fVar60 = fVar57;
    fVar55 = (float)FUN_036bdd2c(fVar55 - fVar59,_fStack0000000000000078,0);
    fVar55 = fVar59 + fVar55;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar60 = fVar61 + fVar60;
    fVar56 = 0.0;
    fVar58 = (float)FUN_036bdd2c(fVar58 - fVar59,_fStack0000000000000078,0);
    fVar58 = fVar59 + fVar58;
    fVar64 = fVar61 + fVar64;
    fVar56 = fVar56 + 0.0;
    fVar48 = 0.0;
    fVar63 = (float)FUN_036bdd2c(fVar63 - fVar59,_fStack0000000000000078,0);
    fVar63 = fVar59 + fVar63;
    fVar48 = fVar48 + 0.0;
    fVar57 = fVar61 + fVar57;
    fVar54 = fVar61 + fVar54;
  }
  if (*unaff_x28 == 0) goto LAB_035574b8;
  lVar27 = *(long *)(*unaff_x28 + 0x38);
  uVar19 = unaff_d13 & 0xffffffff;
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x11c) = fVar55;
  *(float *)(lVar27 + 0x120) = fVar60;
  *(float *)(lVar27 + 0x124) = fStack0000000000000114;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x114) = fVar54;
  *(float *)(lVar27 + 0x110) = fStack0000000000000104;
  *(float *)(lVar27 + 0x118) = fStack0000000000000100;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x128) = fVar58;
  *(float *)(lVar27 + 300) = fVar64;
  *(float *)(lVar27 + 0x130) = fVar56;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x134) = fVar63;
  *(float *)(lVar27 + 0x138) = fVar57;
  *(float *)(lVar27 + 0x13c) = fVar48;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar12 = *unaff_x20;
  lVar28 = (long)(int)uVar12;
  if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar27 + lVar28 * unaff_x24;
  *(int *)(lVar29 + 0x140) = (int)unaff_x19[200];
  fVar64 = *(float *)(unaff_x19 + 0x9b);
  uVar50 = (ulong)(uint)fVar64;
  fVar63 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar29 + 0x15c) = (fVar58 - fVar55) / (fVar54 - fVar60);
  *(float *)(lVar29 + 0x14c) = (unaff_s14 - fVar64) + fVar63;
  in_stack_00000128 = in_stack_00000128 * fVar44;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    in_stack_00000128 = in_stack_00000128 / fStack0000000000000158;
    in_stack_00000120 = (in_stack_00000120 * fVar44) / fStack0000000000000158;
  }
  else {
    in_stack_00000120 = in_stack_00000120 * fVar44;
  }
  uVar16 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar12 == uVar16)) {
    in_stack_00000120 = fVar63 + in_stack_00000120;
    in_stack_00000128 = fVar63 + in_stack_00000128;
    fVar55 = in_stack_00000120;
    fVar60 = in_stack_00000128;
    if (fVar63 != 0.0) {
      fVar60 = (in_stack_00000128 - fVar63) / *(float *)((long)unaff_x19 + 0x404);
      fVar55 = (in_stack_00000120 - fVar63) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar60 <= in_stack_00000128) {
        fVar60 = in_stack_00000128;
      }
      if (in_stack_00000120 <= fVar55) {
        fVar55 = in_stack_00000120;
      }
    }
    lVar27 = lVar27 + lVar28 * unaff_x24;
    fVar63 = fVar60;
    if (fVar60 <= *(float *)(unaff_x19 + 0x99)) {
      fVar63 = *(float *)(unaff_x19 + 0x99);
    }
    fVar58 = fVar55;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar55) {
      fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar58;
    *(float *)(unaff_x19 + 0x99) = fVar63;
    *(float *)(lVar27 + 0x154) = fVar60;
    *(float *)(lVar27 + 0x158) = fVar55;
    *(float *)(lVar27 + 0x148) = in_stack_00000128 - fVar64;
    *(float *)(unaff_x19 + 0x98) = in_stack_00000128 - fVar64;
    *(float *)(lVar27 + 0x150) = in_stack_00000120 - fVar64;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000120 - fVar64;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar63;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar60 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar63 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar44 * fVar63) / fStack0000000000000158;
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar60 <= fStack0000000000000158) {
        fVar60 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar60;
    }
    if ((float)uVar50 == 0.0) {
      fVar60 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= in_stack_00000128) {
        fVar60 = in_stack_00000128;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar60;
    }
  }
  else {
    fVar60 = *(float *)(unaff_x19 + 0x99);
    lVar27 = lVar27 + lVar28 * unaff_x24;
    *(float *)(lVar27 + 0x154) = fVar60;
    fVar63 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar60 = fVar60 - fVar64;
    *(float *)(lVar27 + 0x148) = fVar60;
    *(float *)(lVar27 + 0x158) = fVar63;
    *(float *)(unaff_x19 + 0x98) = fVar60;
    fVar63 = fVar63 - fVar64;
    *(float *)(lVar27 + 0x150) = fVar63;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar63;
  }
  lVar27 = *unaff_x28;
  if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar52 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= uVar52) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)uVar52 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4f);
  uVar43 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar28 + 0x194) = 1;
    pfVar30 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar27 + 0x60);
      pfVar30 = (float *)(lVar27 + 100);
    }
    fVar63 = *pfVar33;
    fVar55 = *pfVar30;
    fVar60 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar63) - fVar55;
    bVar9 = true;
    if ((fVar60 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar60))) {
      bVar9 = fVar60 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000f8._4_4_ = fVar60;
    }
    fVar60 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar60 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar57 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar64 = (float)unaff_d11;
    if (in_stack_000017dc != 0xad) {
      fVar64 = fVar44;
    }
    fVar56 = (float)uVar50;
    fVar48 = 0.0;
    if ((0.0 < fVar56) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar52 = *unaff_x20;
    fVar48 = (*(float *)(unaff_x19 + 0x97) - (fVar57 - fVar56)) + fVar48;
    if (fStack00000000000000c4 < fVar48) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar20 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar59 = *(float *)(unaff_x19 + 0x59);
        if (((fVar59 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar56)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar45 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar48) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar45 <= fVar59) {
            fVar45 = fVar59;
          }
          goto LAB_03554b48;
        }
        fVar56 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar48 = *(float *)(unaff_x19 + 0x4a);
        uVar50 = (ulong)(uint)fVar48;
        if ((fVar48 < fVar56) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar45 = (fVar56 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          fVar60 = (fVar56 - fVar45) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar56;
          fVar45 = DAT_00d38e60;
          if (fVar60 != INFINITY) {
            fVar45 = (float)(int)fVar60 / 20.0;
          }
          if (fVar45 <= fVar48) {
            fVar45 = fVar48;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar7;
        }
        lVar28 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
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
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
          iVar13 = FUN_0358c15c();
LAB_035529e8:
          iVar14 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar14;
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          in_stack_000017a8 = iVar13 - 1;
          uVar20 = CONCAT44(0x2026,iVar14);
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
          if (fStack00000000000000c4 < fVar45 - fVar57) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar50 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar27 = NEON_rev64(uVar50,4);
          unaff_x19[0x99] = lVar27;
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
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar27,0,0);
        if ((uVar19 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar20,*(undefined8 *)(*plVar42 + 0x530));
          lVar27 = unaff_x19[0x5d];
          if (lVar27 == 0) goto LAB_035574b8;
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      uVar20 = CONCAT44(3,uVar52);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar58 = ABS(fVar58) + fVar60 * (1.0 - fVar54) * fVar64;
    fVar60 = 1.0;
    if ((uVar32 & 0x18) != 0) {
      fVar60 = DAT_00d38acc;
    }
    fVar64 = fVar60 * in_stack_000000f8._4_4_;
    if (fVar58 <= fVar64) {
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
            *(undefined1 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
      }
      else if (in_stack_000017dc == 9) {
        lVar27 = *in_stack_00000170;
        if ((lVar27 != 0) && (lVar28 = *(long *)(lVar27 + 0x38), lVar28 != 0)) {
          uVar52 = *unaff_x20;
          if (*(uint *)(lVar28 + 0x18) <= uVar52) goto LAB_035575f4;
          *(undefined1 *)(lVar28 + (long)(int)uVar52 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar52;
          lVar28 = *(long *)(lVar27 + 0x50);
          if (lVar28 != 0) {
            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar28 + 0x18)) {
              lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
              goto LAB_03552fcc;
            }
            goto LAB_035575f4;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar64,fVar47);
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
        if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000068._4_4_ = 0;
            *(float *)(lVar27 + 0x60) = fVar63;
            *(float *)(lVar27 + 100) = fVar55;
            goto LAB_035530c4;
          }
          goto LAB_035575f4;
        }
      }
      goto LAB_035574b8;
    }
    uVar50 = (ulong)(uint)fVar47;
    if (((char)unaff_x19[0x5b] == '\0') || (uVar52 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar54 < fVar64) {
          fVar45 = fVar58 / (1.0 - fVar54);
          if (fVar54 <= 0.0) {
            fVar45 = fVar58;
          }
          fVar54 = fVar54 + (fVar58 - fVar60 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar45;
          goto LAB_035574e8;
        }
        fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar64 = *(float *)(unaff_x19 + 0x4a);
        if (fVar64 < fVar54) {
          fVar45 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar54;
          fVar54 = fVar54 - fVar45;
LAB_03557524:
          fVar60 = fVar54 * 20.0 + 0.5;
          fVar45 = DAT_00d38e60;
          if (fVar60 != INFINITY) {
            fVar45 = (float)(int)fVar60 / 20.0;
          }
          if (fVar45 <= fVar64) {
            fVar45 = fVar64;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar45;
          return;
        }
      }
      iVar13 = (int)unaff_x19[0x5c];
      if (iVar13 == 1) {
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar7;
        }
        lVar28 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 != 0) {
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
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
      lVar27 = unaff_x19[0x5d];
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
      }
      uVar19 = FUN_036cee6c(lVar27,0,0);
      if ((uVar19 & 1) != 0) {
        plVar42 = (long *)unaff_x19[0x5d];
        uVar20 = (**(code **)(*unaff_x19 + 0x518))();
        if (plVar42 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar42 + 0x528))(plVar42,uVar20,*(undefined8 *)(*plVar42 + 0x530));
        lVar27 = unaff_x19[0x5d];
        if (lVar27 == 0) goto LAB_035574b8;
        *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
        FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar42 = (long *)unaff_x19[0x5d];
        if (plVar42 == (long *)0x0) goto LAB_035574b8;
        (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
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
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar64 = *(float *)(unaff_x19 + 0x9b);
        fVar54 = 0.0;
        if ((0.0 < fVar64) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar54 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar54 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar54 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar27 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar27 == 0) goto LAB_035574b8;
        fVar64 = *(float *)(unaff_x19 + 0x9b);
        fVar54 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar27 + 0x18) <= uVar34) ||
         (uVar5 = uVar34 - 1, *(uint *)(lVar27 + 0x18) <= uVar5)) goto LAB_035575f4;
      uVar50 = (ulong)(uint)(fVar54 + *(float *)(unaff_x19 + 0x97));
      fVar57 = (fVar54 + *(float *)(unaff_x19 + 0x97) + fVar64) -
               *(float *)(lVar27 + (long)(int)uVar34 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar27 + (long)(int)uVar5 * (long)iVar11 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar57 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar27 + (long)(int)uVar34 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          uVar20 = in_stack_000017c8;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar64 <= fVar54) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar50 = (ulong)(uint)fVar54;
              fVar64 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar54 <= fVar64) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar45 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar45 <= DAT_00d38b84) {
                fVar45 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar54;
              fVar54 = fVar54 - fVar45;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar45 = fVar58;
            if (0.0 < fVar54) {
              fVar45 = fVar58 / (1.0 - fVar54);
            }
            fVar54 = fVar54 + (fVar58 - fVar60 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar45;
LAB_035574e8:
            if (fVar64 <= fVar54) {
              fVar54 = fVar64;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar54;
            return;
          }
LAB_03552d44:
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          iVar13 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
          if (((iVar13 != iStack0000000000000034) && (iVar13 != -1)) &&
             (((bStack0000000000000070 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
            goto LAB_035574b8;
            uVar34 = *unaff_x20 - 1;
            if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_035575f4;
            iStack0000000000000034 = iVar13;
            if (*(short *)(lVar27 + (long)(int)uVar34 * (long)iVar11 + 0x20) == 0xad) {
              bStack0000000000000074 = 0;
              *unaff_x20 = uVar34;
              in_stack_000017a8 = in_stack_000017a8 - 1;
              uVar20 = CONCAT44(0x2d,uVar34);
              goto LAB_03550bd0;
            }
          }
          if (fVar57 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            FUN_0358cbd4(fStack0000000000000058,uVar19,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar45,
                         in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            uVar50 = uVar19;
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar64 = fStack00000000000000c4;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar64 = *(float *)(unaff_x19 + 0x59);
              if ((fVar64 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar45 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar57) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar45 <= fVar64) {
                  fVar45 = fVar64;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar45;
                return;
              }
              fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar54 < fVar64) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar50 = (ulong)(uint)fVar54;
              fVar64 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar64 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
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
              lVar28 = *(long *)(lVar27 + 0xb8);
              lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
              if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
                lVar27 = FUN_01a46ff8(lVar27);
              }
              piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                                  *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8)
                                                           + 0x80) + 0xa0);
              if (*piVar21 == 0) {
                bStack0000000000000074 = 0;
                goto LAB_03554580;
              }
              lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
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
              FUN_0358cbd4(fStack0000000000000058,uVar19,fStack00000000000000d4,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar45,
                           in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              uVar50 = uVar19;
              break;
            case 6:
              lVar27 = unaff_x19[0x5d];
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar19 = FUN_036cee6c(lVar27,0,0);
              if ((uVar19 & 1) != 0) {
                plVar42 = (long *)unaff_x19[0x5d];
                uVar20 = (**(code **)(*unaff_x19 + 0x518))();
                if (plVar42 == (long *)0x0) goto LAB_035574b8;
                (**(code **)(*plVar42 + 0x528))(plVar42,uVar20,*(undefined8 *)(*plVar42 + 0x530));
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
      fVar63 = (float)uVar50;
      fVar60 = 0.0;
      if ((0.0 < fVar63) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar60 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar50 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar63)) + fVar60)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar27,0,0);
        if ((uVar19 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 != (long *)0x0) {
            (**(code **)(*plVar42 + 0x528))(plVar42,uVar20,*(undefined8 *)(*plVar42 + 0x530));
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
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
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
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    }
LAB_035530c4:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar60 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar55 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar27 = unaff_x19[0xca];
      fVar63 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar63 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
      fVar58 = *(float *)((long)unaff_x19 + 0x404);
      fVar54 = *(float *)(lVar27 + 0x2c);
      fVar47 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
      fVar64 = *_fStack00000000000000a8;
      fVar47 = fVar58 * (fVar60 / (float)iVar13) * fVar55 * fVar63 * fVar54 * fVar47;
      fVar60 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        uVar52 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar63 = *(float *)(lVar27 + (long)(int)uVar52 * (long)iVar11 + 0x60);
        iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar58 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar27 = unaff_x19[0xca];
        fVar55 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar55 = 1.0;
        }
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
        fVar54 = *(float *)((long)unaff_x19 + 0x404);
        fVar57 = *(float *)(lVar27 + 0x2c);
        fVar47 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar64 = *(float *)(lVar27 + 0x60);
        fVar60 = *(float *)(lVar27 + 100);
        fVar47 = fVar54 * (fVar63 / (float)iVar13) * fVar58 * fVar55 * fVar57 * fVar47;
      }
      fVar58 = *(float *)(unaff_x19 + 0x9b);
      fVar63 = 0.0;
      fVar55 = 0.0;
      if ((0.0 < fVar58) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar55 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar57 = *(float *)(unaff_x19 + 0x97);
      fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar54 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar27,0);
        fVar63 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar56 = *(float *)(unaff_x19 + 0x6c);
      fVar60 = (fStack000000000000009c - fVar64) - fVar60;
      bVar9 = true;
      if ((fVar56 <= fVar60) && (bVar9 = false, !NAN(fVar56))) {
        bVar9 = fVar56 == -1.0;
      }
      if (!bVar9) {
        fVar60 = fVar56;
      }
      fVar64 = 1.0;
      if ((uVar32 & 0x18) != 0) {
        fVar64 = DAT_00d38acc;
      }
      if (((fVar57 - (fVar48 - fVar58)) + fVar55 < fStack00000000000000c4) &&
         (ABS(fVar54) + fVar47 * fVar63 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar64 * fVar60)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar27 = *(long *)(*(long *)puVar7 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar27 + 0x788),0x378);
        FUN_0209b210(lVar27 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar52 = *(uint *)(unaff_x19 + 0x95);
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar28 + 100) = uVar52;
    *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_035575f4;
      *(int *)(lVar27 + (long)(int)uVar52 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_035575f4;
      if (*(int *)(lVar27 + (long)(int)uVar52 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar60 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = *(float *)(unaff_x19 + 200);
      fVar63 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar60 = fVar44 * fVar60 * fVar63;
      fVar63 = fVar60 * (float)(int)(fVar46 / fVar60);
      uVar50 = (ulong)(uint)fVar63;
      if (fVar63 <= fVar46) {
        fVar63 = fVar46 + fVar60;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar63;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar46 = 1.0;
        }
        else {
          fVar46 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar63 = *(float *)(unaff_x19 + 200);
        fVar55 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar60 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar63 = fVar63 + fVar60 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar44 * (fStack000000000000012c + fVar46 * fVar55) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     fVar45 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar63;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar63 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar44 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + fVar45 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar50 = (ulong)(uint)fVar63;
      fVar63 = *(float *)(unaff_x19 + 200) - fVar63;
      *(float *)(unaff_x19 + 200) = fVar63;
      if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
        fVar60 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar50 = (ulong)(uint)fVar60;
        fVar63 = fVar63 - fVar60;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar60 = *(float *)(unaff_x19 + 200);
      fVar63 = fVar60 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar46) +
                        fStack00000000000000d4 * (fVar45 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar63;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar50 = (ulong)(uint)fVar60, unaff_w27 != 0)) {
        fVar60 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar50 = (ulong)(uint)fVar60;
        fVar63 = fVar63 + fVar60;
        goto LAB_03553678;
      }
    }
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    uVar52 = *unaff_x20;
    uVar32 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar32 <= uVar52) goto LAB_035575f4;
    *(float *)(lVar28 + (long)(int)uVar52 * unaff_x24 + 0x144) = fVar63;
    uVar34 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar52 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar50 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar52 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar60 = *(float *)(unaff_x19 + 0x99);
        fVar63 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar60 = fVar60 - fVar63;
        if (((fStack000000000000005c < ABS(fVar60)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar60);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar60;
          *(float *)(unaff_x19 + 0x9b) = fVar60 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar7;
          }
          lVar28 = *(long *)(lVar27 + 0xb8);
          if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar28 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar27 + 0xb8) + 0x818,0);
            lVar27 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar27 + 0x7bc) = fVar60 + *(float *)(lVar27 + 0x7bc);
            *(float *)(lVar27 + 0x800) = fVar60 + *(float *)(lVar27 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar27 + 0x788),0x378);
            FUN_0209b210(lVar27 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar46 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar63 = *(float *)((long)unaff_x19 + 0x4cc) - fVar46;
      fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar63 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar60 = fVar63;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar60;
      fVar55 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar60;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      uVar52 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar29 = unaff_x19[0x93];
      lVar18 = lVar28 + (long)(int)uVar52 * 0x5c;
      *(int *)(lVar18 + 0x34) = (int)lVar29;
      uVar32 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar29 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar32 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar32;
      *(uint *)(lVar18 + 0x38) = uVar32;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar13 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar32 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar13 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar13;
      *(int *)(lVar18 + 0x40) = iVar13;
      *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar32) goto LAB_035575f4;
      uVar62 = *(undefined4 *)(lVar27 + (long)(int)uVar32 * (long)iVar11 + 0x11c);
      lVar28 = lVar28 + (long)(int)uVar52 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar63;
      *(undefined4 *)(lVar28 + 0x6c) = uVar62;
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar55 = fVar55 - fVar46;
      uVar50 = (ulong)(uint)fVar55;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) =
           *(undefined4 *)
            (lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar28 + 0x78) = fVar55;
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar29 = *(long *)(lVar27 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar29 + lVar18 * 0x5c;
      *(float *)(lVar28 + 0x44) = *(float *)(lVar28 + 0x74) - fVar44 * fStack000000000000015c;
      *(float *)(lVar28 + 0x5c) = in_stack_000000f8._4_4_;
      if (*(int *)(lVar28 + 0x24) == 1) {
        *(int *)(lVar29 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*unaff_x21 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
      lVar41 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar32 = (uint)*(undefined8 *)(lVar28 + 0x18);
      if (uVar32 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      if ((*(char *)(lVar28 + lVar41 * unaff_x24 + 0x194) == '\0') &&
         (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar32 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_035575f4;
      lVar29 = lVar29 + lVar18 * 0x5c;
      fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + fVar45 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar45 = -fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar45 = fVar60;
      }
      *(float *)(lVar29 + 0x58) = *(float *)(lVar28 + lVar41 * unaff_x24 + 0x144) + fVar45;
      *(float *)(lVar29 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar29 + 0x54) = fVar63;
      *(float *)(lVar29 + 0x48) = in_stack_00000060 + (fVar55 - fVar63);
      *(float *)(lVar29 + 0x4c) = fVar55;
      if ((int)in_stack_000017dc < 0x2d) {
        if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_0358c4f0();
          lVar27 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar13 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar13;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar27 != 0) && (*(long *)(lVar27 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar13) {
              FUN_0358ca18();
              lVar27 = unaff_x19[0x6d];
              if (lVar27 == 0) goto LAB_035574b8;
            }
            lVar27 = *(long *)(lVar27 + 0x38);
            if (lVar27 != 0) {
              if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
                fVar45 = *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar60 = 0.0, in_stack_000017dc == 10)) {
                    fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 0;
                  fVar60 = fVar45 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar60) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar60 = 0.0, in_stack_000017dc == 10)) {
                    fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 1;
                  fVar60 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar60);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar60;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar27 = *(long *)puVar7;
                }
                uVar20 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar45;
                uVar50 = NEON_rev64(uVar20,4);
                unaff_x19[0x99] = uVar50;
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
          uVar34 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar52 = *unaff_x20;
    if (uVar32 <= uVar52) goto LAB_035575f4;
    if (*(char *)(lVar28 + (long)(int)uVar52 * unaff_x24 + 0x194) != '\0') {
      lVar28 = lVar28 + (long)(int)uVar52 * unaff_x24;
      uVar50 = *(ulong *)(lVar28 + 0x11c);
      uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar19 ^ (uVar19 ^ uVar50) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar50 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar50));
      uVar19 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar50 = *(ulong *)(lVar28 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar19 ^ (uVar19 ^ uVar50) &
                    ~CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar50 < (float)uVar19));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
      lVar28 = *(long *)(lVar27 + 0x58);
      if (lVar28 == 0) goto LAB_035574b8;
      iVar13 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar28 + 0x18) < iVar13) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8((long *)(lVar27 + 0x58),iVar13,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
        lVar27 = *in_stack_00000170;
        if (lVar27 == 0) goto LAB_035574b8;
      }
      lVar28 = *(long *)(lVar27 + 0x58);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar32 = *(uint *)(unaff_x19 + 0x96);
      lVar29 = (long)(int)uVar32;
      uVar52 = *(uint *)(lVar28 + 0x18);
      if (uVar52 <= uVar32) goto LAB_035575f4;
      lVar18 = lVar28 + lVar29 * 0x14;
      fVar60 = *(float *)(lVar18 + 0x30);
      uVar50 = (ulong)(uint)fVar60;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar60 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar45 = fVar60;
      }
      *(float *)(lVar18 + 0x30) = fVar45;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar34 == 0 && uVar32 == 0) {
        *(uint *)(lVar28 + (ulong)uVar32 * 0x14 + 0x20) = uVar34;
      }
      else {
        uVar5 = uVar34 - 1;
        if (0 < (int)uVar34) {
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_035575f4;
          if (uVar32 != *(uint *)(lVar27 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar32 - 1 < uVar52) {
              *(uint *)(lVar28 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar28 + 0x20 + lVar29 * 0x14) = uVar34;
              goto LAB_03553d10;
            }
            goto LAB_035575f4;
          }
        }
        if ((float)uVar34 == in_stack_00000088._4_4_) {
          *(float *)(lVar28 + lVar29 * 0x14 + 0x24) = in_stack_00000088._4_4_;
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
        lVar27 = FUN_035978e8(0);
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_035574b8;
        uVar52 = FUN_0219c130(*(long *)(lVar27 + 0x10),&stack0x000008a0,
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
          if (uVar12 != uVar16 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
          if (unaff_w27 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
          goto LAB_0355422c;
        }
        lVar27 = FUN_035978e8(0);
        if (((lVar27 == 0) || (*in_stack_00000170 == 0)) ||
           (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
        if (*(long *)(lVar27 + 0x18) == 0) goto LAB_035574b8;
        in_stack_000008a0 =
             (uint)*(ushort *)(lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar11 + 0x20);
        uVar19 = FUN_0219c130(*(long *)(lVar27 + 0x18),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((uVar52 & 1) != 0) goto LAB_035541dc;
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
    unaff_d11 = unaff_d13 & 0xffffffff;
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar27 = unaff_x19[0x8f];
    if (lVar27 == 0) goto LAB_035574b8;
    if ((int)*(uint *)(lVar27 + 0x18) <= (int)in_stack_000017a8) {
LAB_0355459c:
      fVar45 = (float)uVar50;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar45 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar60 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar45 < fVar60) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar63 = (*(float *)((long)unaff_x19 + 0x23c) - fVar45) * 0.5;
          if (fVar63 <= DAT_00d38b84) {
            fVar63 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar45;
          fVar63 = (fVar45 + fVar63) * 20.0 + 0.5;
          fVar45 = DAT_00d38e60;
          if (fVar63 != INFINITY) {
            fVar45 = (float)(int)fVar63 / 20.0;
          }
          if (fVar60 <= fVar45) {
            fVar45 = fVar60;
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
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar8;
      }
      plVar42 = (long *)OVRPlugin_Media_TypeInfo;
      lVar27 = **(long **)(lVar27 + 0xb8);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar11 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
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
      iVar13 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar27 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)uStack00000000000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar13 < 0x401) {
        if (iVar13 == 0x100) {
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_035575f4;
          uVar20 = *(undefined8 *)(lVar27 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar45 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar45 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x2c);
          fVar45 = (0.0 - fVar45) - fStack0000000000000020;
        }
        else if (iVar13 == 0x200) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar27 + 0x24) +
                            (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar27 = *(long *)(*in_stack_00000170 + 0x58), lVar27 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar27 = lVar27 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar45 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) +
                      *(float *)(lVar27 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar45 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar13 != 0x400) goto LAB_03554c4c;
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
          uVar20 = *(undefined8 *)(lVar27 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x20);
          fVar45 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar45);
      }
      else if (iVar13 == 0x800) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
        fVar45 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar45;
      }
      else {
        if (iVar13 == 0x1000) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
            uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
            fVar45 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar13 == 0x2000) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
          fVar45 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar27 + 0x24) +
                                (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + fVar45);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar20 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar7);
      }
      uVar19 = FUN_036d35a8(uVar20,0,0);
      lVar27 = FUN_0357f060();
      if (lVar27 == 0) goto LAB_035574b8;
      FUN_036df824(lVar27,0);
      *(float *)(unaff_x19 + 0xe2) = fVar45;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar60 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar62 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar7 = OVRPlugin_Mesh_TypeInfo;
      lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar7;
      }
      puVar25 = *(undefined4 **)(lVar27 + 0xb8);
      uVar50 = (ulong)(uint)puVar25[1];
      uVar51 = (ulong)(uint)puVar25[2];
      uVar53 = (ulong)(uint)puVar25[3];
      FUN_035683a4(*puVar25,uVar50,uVar51,uVar53,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar27 = *in_stack_00000170;
      if (lVar27 == 0) goto LAB_035574b8;
      uVar12 = *unaff_x20;
      if ((int)uVar12 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar11 = 0;
        goto LAB_03556f00;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      fVar45 = ABS(fVar45);
      fVar63 = 1.0;
      if ((uVar19 & 1) == 0) {
        fVar63 = fVar45;
      }
      if (lVar27 == 0) goto LAB_035574b8;
      bVar10 = false;
      bVar6 = false;
      _in_stack_00000128 = 0;
      bVar9 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar28 = 0x2e0;
      fVar46 = 0.0;
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
      uVar16 = 1;
      uVar52 = 0;
      goto LAB_03554e78;
    }
    if (*(uint *)(lVar27 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    in_stack_000017dc = *(uint *)(lVar27 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
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
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar27 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar27 + 0x38);
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
    if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    uVar12 = *unaff_x20;
    if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar29 = (long)(int)uVar12;
    unaff_w26 = (uint)*(byte *)(lVar27 + lVar29 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar28 = unaff_x19[0x24];
    if ((uint)uVar20 == uVar12) {
      in_stack_000017dc = (uint)((ulong)uVar20 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_000017dc == 0x2026) {
        *(long *)(lVar27 + lVar29 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        uVar12 = *unaff_x20;
        if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar27 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        uVar20 = CONCAT44(3,uVar12 + 1);
      }
      else if (in_stack_000017dc == 3) {
        if ((*unaff_x21 == 0) || (lVar18 = FUN_03568ac0(*unaff_x21,0), lVar18 == 0))
        goto LAB_035574b8;
        FUN_0219b634(lVar18,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
        *(ulong *)(lVar27 + lVar29 * unaff_x24 + 0x30) =
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
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)uVar12 * (long)iVar11;
      *(undefined1 *)(lVar27 + 0x194) = 0;
      *(undefined2 *)(lVar27 + 0x20) = 0x200b;
      *(undefined4 *)(lVar27 + 100) = 0;
      *unaff_x20 = uVar12 + 1;
      uVar43 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar13 != 0) {
      fStack0000000000000158 = 1.0;
      if (iVar13 == 0) goto LAB_03550fec;
LAB_03550c00:
      if (iVar13 != 1) {
        lVar27 = *in_stack_00000170;
        unaff_s14 = 0.0;
        unaff_d13 = 0;
        if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
          unaff_d13 = unaff_d11;
        }
        if (lVar27 == 0) goto LAB_035574b8;
        in_stack_00000128 = 0.0;
        in_stack_00000120 = 0.0;
        goto LAB_035514cc;
      }
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
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      uVar43 = in_stack_000017dc;
      if (lVar27 != 0) {
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
        fVar45 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar63 = (float)FUN_03776960(&stack0x00001720,0);
        fVar60 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar60 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar60 = (fVar45 / (float)iVar11) * fVar63 * fVar60;
        iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar45 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar63 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          in_stack_00000120 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000120 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar44 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar27 + 0x20),0);
          fVar46 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          fVar47 = *(float *)(lVar27 + 0x2c);
          fVar55 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar58 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar54 = *(float *)((long)unaff_x19 + 0x404);
          fVar64 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          unaff_s14 = fVar60 * fVar58 * fVar54 * fVar64;
          in_stack_00000120 = (fVar45 / (float)iVar11) * fVar63 * in_stack_00000120;
          fVar60 = in_stack_00000120 * (fVar44 / fVar46) * fVar47 * fVar55;
          in_stack_00000120 = in_stack_00000120 / fVar60;
          in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
          fVar45 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          in_stack_00000120 = in_stack_00000120 * fVar45;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar63 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          fVar46 = *(float *)(lVar27 + 0x2c);
          fVar44 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar44 = 1.0;
          }
          fVar55 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar47 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar64 = *(float *)((long)unaff_x19 + 0x404);
          fVar58 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          unaff_s14 = fVar60 * fVar47 * fVar64 * fVar58;
          fVar60 = (fVar45 / (float)iVar11) * fVar63 * fVar44 * fVar46 * fVar55;
          in_stack_00000120 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        unaff_d11 = (ulong)(uint)fVar60;
        *in_stack_000000e0 = lVar27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar27);
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar27 + 0x2c) = 1;
        *(float *)(lVar27 + 0x160) = fVar60;
        *(long *)(lVar27 + 0x40) = *in_stack_000000b8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar29 = *(long *)(lVar27 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fStack000000000000015c = 0.0;
        *(int *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar28;
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
    iVar13 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar13 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar43 = in_stack_000017dc;
  } while (*in_stack_000000e0 == 0);
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
  uVar16 = *unaff_x20;
  uVar12 = *(uint *)(lVar27 + 0x18);
  if (uVar12 <= uVar16) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + (long)(int)uVar16 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar27 = unaff_x19[0x20];
  }
  else {
    lVar28 = unaff_x19[0x8f];
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar12 <= uVar16 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = *(float *)(lVar27 + (long)(int)(uVar16 - 1) * (long)iVar11 + 0x60);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar27 = *unaff_x21;
  }
  if (lVar27 == 0) goto LAB_035574b8;
  fVar63 = (float)FUN_03776960(lVar27 + 0x50,0);
  fVar60 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar60 = 1.0;
  }
  in_stack_00000120 = 0.0;
  in_stack_00000128 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000128 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    in_stack_00000120 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar27 = unaff_x19[0xc9];
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
  fVar46 = *(float *)((long)unaff_x19 + 0x404);
  fVar55 = *(float *)(lVar27 + 0x2c);
  fVar44 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar47 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar64 = *(float *)((long)unaff_x19 + 0x404);
  fVar58 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar27 = unaff_x19[0x6d];
  if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar28 + 0x2c) = 0;
  fVar60 = ((fStack0000000000000158 * fVar45) / (float)iVar11) * fVar63 * fVar60;
  fVar44 = fVar60 * fVar46 * fVar55 * fVar44;
  unaff_d11 = (ulong)(uint)fVar44;
  *(float *)(lVar28 + 0x160) = fVar44;
  uVar12 = *(uint *)(unaff_x19 + 0x24);
  unaff_s14 = fVar60 * fVar47 * fVar64 * fVar58;
  if (uVar12 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar28 = unaff_x19[0xe1];
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar28 = *(long *)(lVar28 + (long)(int)uVar12 * 8 + 0x20);
    if (lVar28 == 0) goto LAB_035574b8;
    fStack000000000000015c = *(float *)(lVar28 + 0x10c);
  }
LAB_035514b0:
  unaff_d13 = 0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    unaff_d13 = unaff_d11;
  }
LAB_035514cc:
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar27 + 0x20) = (short)in_stack_000017dc;
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
  uVar12 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)uVar12 * unaff_x24;
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
  unaff_x22 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x28 = in_stack_00000170;
  in_stack_000017c8 = uVar20;
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
  goto code_r0x0355165c;
LAB_03554e78:
  uVar12 = uVar16 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x50), lVar29 == 0))
  goto LAB_035574b8;
  lVar41 = (long)(int)uVar12;
  lVar18 = lVar27 + lVar41 * 0x178;
  uVar32 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar29 + 0x18) <= uVar32) goto LAB_035575f4;
  lVar39 = (long)(int)uVar32;
  lVar29 = lVar29 + lVar39 * 0x5c;
  lVar35 = *(long *)(lVar18 + 0x38);
  uVar3 = *(ushort *)(lVar18 + 0x20);
  uVar34 = *(uint *)(lVar29 + 0x3c);
  uVar43 = *(uint *)(lVar29 + 0x68);
  iVar2 = *(int *)(lVar29 + 0x20);
  iVar14 = *(int *)(lVar29 + 0x28);
  iVar15 = *(int *)(lVar29 + 0x2c);
  uVar5 = *(uint *)(lVar29 + 0x40);
  lVar18 = (long)(int)uVar5;
  fVar58 = *(float *)(lVar29 + 0x4c);
  fVar54 = *(float *)(lVar29 + 0x54);
  fVar55 = *(float *)(lVar29 + 0x58);
  fVar56 = *(float *)(lVar29 + 0x5c);
  fVar57 = *(float *)(lVar29 + 0x60);
  fVar48 = *(float *)(lVar29 + 0x6c);
  fVar59 = *(float *)(lVar29 + 0x70);
  fVar47 = *(float *)(lVar29 + 0x74);
  fVar64 = *(float *)(lVar29 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar57 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar55;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar57 + fVar56 * 0.5) - fVar55 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar56 + fVar57) - fVar55;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar56 + fVar57;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar43 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar34 * 0x178 + 0x20);
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
      if ((fVar55 <= fVar56) && (!bVar1 && uVar43 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar57;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar56 + fVar57;
        }
        goto LAB_03555088;
      }
      if (((uVar16 == 1) || (uVar32 != uVar52)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar57;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar56 + fVar57;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar57 = -fVar55;
        if (cVar24 != '\0') {
          fVar57 = fVar55;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_035575f4;
        iVar15 = (int)*(char *)(lVar27 + (long)(int)uVar34 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar55 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar55 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_03556e74:
          fVar55 = 1.0 - fVar55;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar38,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_03556e74;
          }
          iVar15 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar14;
        }
        fVar55 = ((fVar56 + fVar57) * fVar55) / (float)iVar15;
        if (cVar24 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar55;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar55;
        }
      }
    }
  }
  else if (uVar43 == 0x20) {
    fVar55 = fVar48 + fVar47;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar43 <= uVar12) goto LAB_035575f4;
  lVar29 = lVar27 + lVar41 * 0x178;
  fVar56 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar55 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar57 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar29 + 0x194) == '\0') goto LAB_03555938;
  iVar14 = *(int *)(lVar27 + lVar41 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0355574c;
  fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar32,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar27 + lVar41 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar46 = 1.0;
    break;
  case 1:
    fVar64 = *(float *)(lVar27 + lVar41 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar27 + lVar41 * 0x178;
      fVar47 = (in_stack_000000f8._4_4_ + fVar64) - *(float *)(in_stack_00000080 + 0x230);
      fVar64 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar47 = fVar47 - fVar48;
    *(float *)(lVar26 + 0x84) = fVar46 + (fVar64 - fVar48) / fVar47;
    *(float *)(lVar26 + 0xac) = fVar46 + (*(float *)(lVar26 + 0x98) - fVar48) / fVar47;
    *(float *)(lVar26 + 0xd4) = fVar46 + (*(float *)(lVar26 + 0xc0) - fVar48) / fVar47;
    fVar46 = fVar46 + (*(float *)(lVar26 + 0xe8) - fVar48) / fVar47;
    break;
  case 2:
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar64 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar47 = (in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar26 + 0x84) = fVar46 + fVar47 / fVar64;
    *(float *)(lVar26 + 0xac) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar46 = fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar26 = lVar27 + lVar41 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar27 + lVar41 * 0x178;
      fVar64 = fVar64 - fVar59;
      fVar47 = fVar46 + (*(float *)(lVar26 + 0x74) - fVar59) / fVar64;
      fVar64 = fVar46 + (*(float *)(lVar26 + 0x9c) - fVar59) / fVar64;
      *(float *)(lVar26 + 0x88) = fVar47;
      *(float *)(lVar26 + 0xb0) = fVar64;
      *(float *)(lVar26 + 0xd8) = fVar47;
      *(float *)(lVar26 + 0x100) = fVar64;
      break;
    case 2:
      lVar26 = lVar27 + lVar41 * 0x178;
      fVar47 = fVar46 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar47;
      fVar64 = *(float *)(unaff_x19 + 0x9c);
      fVar48 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar47;
      fVar47 = fVar46 + (*(float *)(lVar26 + 0x9c) - fVar64) / (fVar48 - fVar64);
      *(float *)(lVar26 + 0xb0) = fVar47;
      *(float *)(lVar26 + 0x100) = fVar47;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar47 = *(float *)(lVar26 + 0x15c);
    fVar64 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar47) * 0.5;
    fVar48 = fVar46 + *(float *)(lVar26 + 0x88) * fVar47 + fVar64;
    fVar46 = fVar46 + fVar64 + *(float *)(lVar26 + 0xb0) * fVar47;
    *(float *)(lVar26 + 0x84) = fVar48;
    *(float *)(lVar26 + 0xac) = fVar48;
    *(float *)(lVar26 + 0xd4) = fVar46;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar27 + lVar41 * 0x178 + 0xfc) = fVar46;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar43) {
      lVar26 = lVar27 + lVar41 * 0x178;
      fVar58 = fVar58 - fVar54;
      fVar46 = (*(float *)(lVar26 + 0x74) - fVar54) / fVar58;
      fVar58 = (*(float *)(lVar26 + 0x9c) - fVar54) / fVar58;
      *(float *)(lVar26 + 0x88) = fVar46;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar46 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar46;
    fVar58 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar26 + 0xb0) = fVar58;
    *(float *)(lVar26 + 0xd8) = fVar58;
    *(float *)(lVar26 + 0x100) = fVar46;
    break;
  case 3:
    if (uVar43 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar58 = *(float *)(lVar26 + 0x15c);
    fVar47 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar58) * 0.5;
    fVar46 = *(float *)(lVar26 + 0x84) / fVar58 + fVar47;
    fVar47 = fVar47 + *(float *)(lVar26 + 0xd4) / fVar58;
    *(float *)(lVar26 + 0x88) = fVar46;
    *(float *)(lVar26 + 0xb0) = fVar47;
    *(float *)(lVar26 + 0x100) = fVar46;
    *(float *)(lVar26 + 0xd8) = fVar47;
  }
  if (uVar43 <= uVar12) goto LAB_035575f4;
  lVar26 = lVar27 + lVar41 * 0x178;
  fVar46 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar41 * 0x178 + 400) & 1) != 0)) {
    fVar46 = -fVar46;
  }
  fVar47 = fVar45;
  if (((iVar13 == 2) || (fVar47 = fVar63, iVar13 == 1)) || (fVar47 = fVar45 / fVar60, iVar13 == 0))
  {
    fVar46 = fVar47 * fVar46;
  }
  lVar26 = lVar27 + lVar41 * 0x178;
  fVar58 = *(float *)(lVar26 + 0x88);
  fVar64 = *(float *)(lVar26 + 0x84);
  fVar47 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar47 = (float)(int)fVar64;
  }
  fVar48 = *(float *)(lVar26 + 0xd4);
  fVar59 = *(float *)(lVar26 + 0xd8);
  fVar54 = -2.1474836e+09;
  if (fVar58 != INFINITY) {
    fVar54 = (float)(int)fVar58;
  }
  uVar49 = FUN_03591d3c(fVar64 - fVar47,fVar58 - fVar54);
  *(undefined4 *)(lVar26 + 0x84) = uVar49;
  if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar59 = fVar59 - fVar54;
  *(float *)(lVar26 + 0x88) = fVar46;
  uVar49 = FUN_03591d3c(fVar64 - fVar47,fVar59);
  *(undefined4 *)(lVar27 + lVar41 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar48 = fVar48 - fVar47;
  *(float *)(lVar27 + lVar41 * 0x178 + 0xb0) = fVar46;
  fVar47 = (float)FUN_03591d3c(fVar48,fVar59);
  *(float *)(lVar26 + 0xd4) = fVar47;
  if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
  *(float *)(lVar26 + 0xd8) = fVar46;
  uVar49 = FUN_03591d3c(fVar48,fVar58 - fVar54);
  *(undefined4 *)(lVar27 + lVar41 * 0x178 + 0xfc) = uVar49;
  uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar43 <= uVar12) goto LAB_035575f4;
  *(float *)(lVar27 + lVar41 * 0x178 + 0x100) = fVar46;
LAB_0355574c:
  if (((int)uVar12 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar43 <= uVar12) goto LAB_035575f4;
      lVar29 = lVar27 + lVar41 * 0x178;
      *(ulong *)(lVar29 + 0x70) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar29 + 0x70));
      *(float *)(lVar29 + 0x78) = fVar57 + *(float *)(lVar29 + 0x78);
      *(ulong *)(lVar29 + 0x98) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar29 + 0x98));
      *(float *)(lVar29 + 0xa0) = fVar57 + *(float *)(lVar29 + 0xa0);
      *(ulong *)(lVar29 + 0xc0) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar29 + 0xc0));
      *(float *)(lVar29 + 200) = fVar57 + *(float *)(lVar29 + 200);
      *(ulong *)(lVar29 + 0xe8) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar29 + 0xe8));
      *(float *)(lVar29 + 0xf0) = fVar57 + *(float *)(lVar29 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar12 < uVar43) {
        if (*(uint *)(lVar27 + lVar41 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar29 = lVar27 + lVar41 * 0x178;
          *(ulong *)(lVar29 + 0x70) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar29 + 0x70));
          *(float *)(lVar29 + 0x78) = fVar57 + *(float *)(lVar29 + 0x78);
          *(ulong *)(lVar29 + 0x98) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar29 + 0x98));
          *(float *)(lVar29 + 0xa0) = fVar57 + *(float *)(lVar29 + 0xa0);
          *(ulong *)(lVar29 + 0xc0) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar29 + 0xc0));
          *(float *)(lVar29 + 200) = fVar57 + *(float *)(lVar29 + 200);
          *(ulong *)(lVar29 + 0xe8) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar29 + 0xe8));
          *(float *)(lVar29 + 0xf0) = fVar57 + *(float *)(lVar29 + 0xf0);
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
    uVar43 = *(uint *)(lVar27 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar26 = lVar27 + lVar41 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar49;
  if (uVar43 <= uVar12) goto LAB_035575f4;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar26 = lVar27 + lVar41 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar49;
  *(undefined1 *)(lVar29 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar14 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar31)();
  }
  else if (iVar14 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  uVar20 = *(undefined8 *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x11c) =
       CONCAT44(fVar55 + (float)((ulong)uVar20 >> 0x20),fVar56 + (float)uVar20);
  *(float *)(lVar29 + 0x124) = fVar57 + *(float *)(lVar29 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(ulong *)(lVar29 + 0x110) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0x110) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar29 + 0x110));
  *(float *)(lVar29 + 0x118) = fVar57 + *(float *)(lVar29 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(ulong *)(lVar29 + 0x128) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar29 + 0x128) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar29 + 0x128));
  *(float *)(lVar29 + 0x130) = fVar57 + *(float *)(lVar29 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(float *)(lVar29 + 0x134) = fVar56 + *(float *)(lVar29 + 0x134);
  *(ulong *)(lVar29 + 0x138) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x138) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar29 + 0x138));
  lVar29 = *in_stack_00000170;
  if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar43 = *(uint *)(lVar26 + 0x18);
  if (uVar43 <= uVar12) goto LAB_035575f4;
  lVar36 = lVar26 + lVar41 * 0x178;
  uVar50 = CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar36 + 0x140));
  fVar47 = fVar55 + *(float *)(lVar36 + 0x150);
  uVar51 = (ulong)(uint)fVar47;
  uVar53 = CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar47;
  *(ulong *)(lVar36 + 0x140) = uVar50;
  *(ulong *)(lVar36 + 0x148) = uVar53;
  if (uVar32 == uVar52) {
    uVar52 = *unaff_x20 - 1;
    if (uVar12 == uVar52) goto LAB_03555b44;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar36 = (long)(int)uVar52;
    lVar37 = lVar29 + lVar36 * 0x5c;
    uVar53 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar47 = fVar55 + *(float *)(lVar37 + 0x54);
    uVar50 = (ulong)(uint)fVar47;
    fVar58 = fVar56 + *(float *)(lVar37 + 0x58);
    uVar51 = (ulong)(uint)fVar58;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar47;
    *(float *)(lVar37 + 0x58) = fVar58;
    if (uVar43 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar49 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar29 = lVar29 + lVar36 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar47;
    *(undefined4 *)(lVar29 + 0x6c) = uVar49;
    lVar29 = *in_stack_00000170;
    if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar52 = *(uint *)(lVar26 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar29 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar26 = lVar26 + lVar36 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar52 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar52 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar12 == uVar52) {
      lVar29 = *in_stack_00000170;
      if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar36 = lVar26 + lVar39 * 0x5c;
      uVar53 = (ulong)(uint)*(float *)(lVar36 + 0x58);
      uVar50 = CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar36 + 0x4c));
      fVar47 = fVar55 + *(float *)(lVar36 + 0x54);
      fVar56 = fVar56 + *(float *)(lVar36 + 0x58);
      uVar51 = (ulong)(uint)fVar56;
      *(ulong *)(lVar36 + 0x4c) = uVar50;
      *(float *)(lVar36 + 0x54) = fVar47;
      *(float *)(lVar36 + 0x58) = fVar56;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
      uVar49 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar47;
      *(undefined4 *)(lVar26 + 0x6c) = uVar49;
      lVar29 = *in_stack_00000170;
      if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar52 = *(uint *)(lVar26 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar29 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar52 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar38,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar6) {
      if (((uVar16 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar27 + lVar28 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar4,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar16) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar27 + lVar28 + -0x148);
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
      iVar14 = (int)in_stack_00000128;
      if ((uVar19 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar14 = uVar16 - 2;
    }
    lVar29 = *in_stack_00000170;
    if (lVar29 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar29 + 0x40);
    if (lVar26 == 0) goto LAB_035574b8;
    uVar52 = *(uint *)(lVar29 + 0x24);
    iVar15 = *(int *)(lVar26 + 0x18);
    if (iVar15 < (int)(uVar52 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar29 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar29 = *in_stack_00000170;
      if (lVar29 == 0) goto LAB_035574b8;
    }
    lVar29 = *(long *)(lVar29 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar29 = lVar29 + (long)(int)uVar52 * 0x18;
    *(long **)(lVar29 + 0x20) = unaff_x19;
    *(float *)(lVar29 + 0x28) = fStack0000000000000158;
    *(int *)(lVar29 + 0x2c) = iVar14;
    *(int *)(lVar29 + 0x30) = (iVar14 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar29 = unaff_x19[0x6d];
    if (lVar29 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar29 + 0x50);
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
    lVar26 = lVar26 + lVar39 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      fStack0000000000000158 = (float)uVar12;
    }
    if (uVar12 == *unaff_x20 - 1) {
      lVar29 = *in_stack_00000170;
      if (lVar29 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar29 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar52 = *(uint *)(lVar29 + 0x24);
      iVar14 = *(int *)(lVar26 + 0x18);
      if (iVar14 < (int)(uVar52 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar29 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar29 = *in_stack_00000170;
        if (lVar29 == 0) goto LAB_035574b8;
      }
      lVar29 = *(long *)(lVar29 + 0x40);
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar29 = lVar29 + (long)(int)uVar52 * 0x18;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      *(float *)(lVar29 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar29 + 0x2c) = uVar12;
      *(uint *)(lVar29 + 0x30) = uVar16 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar29 = unaff_x19[0x6d];
      if (lVar29 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar29 + 0x50);
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  uVar52 = *(uint *)(lVar29 + 0x18);
  if (uVar52 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar29 + lVar41 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar52 <= uVar16 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar52 = *(uint *)(lVar29 + lVar28 + -0x330);
      uVar49 = *(undefined4 *)(lVar29 + lVar28 + -0x2f8);
LAB_035562ec:
      pcVar31 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar53 = (ulong)uVar52;
      uVar50 = (ulong)(uint)_bStack0000000000000070;
      uVar51 = (ulong)_bStack0000000000000074;
      (*pcVar31)(fStack0000000000000078,uVar50,uVar51,uVar53,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar49);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar29 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar44 = 0.0;
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
    iVar14 = *(int *)(lVar29 + 0x68);
    *(int *)(lVar29 + 0x16c) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
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
      fVar47 = *(float *)(lVar39 + lVar41 * 0x178 + 0x160);
      if (fVar44 <= fVar47) {
        fVar44 = fVar47;
      }
      if (fStack0000000000000100 <= ABS(fVar46)) {
        fStack0000000000000100 = ABS(fVar46);
      }
      if (iVar14 != in_stack_00000068._4_4_) {
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
      fVar58 = *(float *)(lVar29 + lVar41 * 0x178 + 0x14c);
      fVar47 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar58 = fVar58 + fVar44 * fVar47;
      if (fVar58 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar58;
      }
      uVar50 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar14;
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
      bVar10 = fVar44 != 0.0;
      fVar47 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar47 = fVar44;
      }
      fVar44 = fVar47;
      uVar62 = *(undefined4 *)(lVar29 + 0x168);
      _bStack0000000000000074 = 0;
      fVar47 = fVar46;
      if (bVar10) {
        fVar47 = fStack0000000000000100;
      }
      uVar50 = (ulong)(uint)fVar47;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar47;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar12 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar41 * 0x178;
          lVar39 = *unaff_x19;
          uVar52 = *(uint *)(lVar29 + 0x128);
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
        uVar52 = uVar12;
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          lVar39 = lVar18;
          uVar52 = uVar5;
        }
        if (uVar52 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar39 * 0x178;
          uVar52 = *(uint *)(lVar29 + 0x128);
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
        uVar52 = *(uint *)(lVar29 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_035575f4;
      uVar19 = FUN_03567ad8(uVar62,*(undefined4 *)(lVar29 + lVar28),0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0)) {
          if (uVar12 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar41 * 0x178;
            uVar53 = (ulong)*(uint *)(lVar29 + 0x128);
            uVar51 = (ulong)_bStack0000000000000074;
            uVar50 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar50,uVar51,uVar53,fStack0000000000000104,0,
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
  uVar52 = *(uint *)(lVar29 + lVar41 * 0x178 + 400);
  fVar47 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar52 >> 6 & 1) == 0) {
    if ((_in_stack_00000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
      uVar52 = *(uint *)(lVar29 + lVar28 + -0x330);
      fVar55 = *(float *)(lVar29 + lVar28 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar53 = (ulong)uVar52;
      uVar50 = (ulong)(uint)fStack000000000000009c;
      uVar51 = (ulong)(uint)fStack0000000000000098;
      (*pcVar31)(fStack00000000000000a0,uVar50,uVar51,uVar53,
                 fStack00000000000000a8 * fVar47 + fVar55,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _in_stack_00000128 = _in_stack_00000128 & 0xffffffff;
  }
  else {
    lVar29 = *in_stack_00000170;
    if ((lVar29 == 0) || (lVar39 = *(long *)(lVar29 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar12) goto LAB_035575f4;
    *(int *)(lVar39 + lVar41 * 0x178 + 0x174) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar12)) ||
       ((_in_stack_00000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_in_stack_00000128 & 0x100000000) == 0) goto LAB_03556948;
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
      uVar50 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar29 + 0x11c);
      uVar51 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar29 + 0x160);
      fStack000000000000009c = fVar47 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar52 = *unaff_x20;
    if (uVar52 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar12 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar41 * 0x178;
          lVar18 = *unaff_x19;
          uVar52 = *(uint *)(lVar29 + 0x128);
          fVar55 = *(float *)(lVar29 + 0x14c);
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
        uVar52 = *(uint *)(lVar29 + 0x18);
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar52 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar18 = lVar41;
          if (uVar52 <= uVar12) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar29 = lVar29 + lVar18 * 0x178;
        fVar55 = *(float *)(lVar29 + 0x14c);
        uVar52 = *(uint *)(lVar29 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)uVar52) {
      lVar29 = *in_stack_00000170;
      if ((lVar29 != 0) && (lVar39 = *(long *)(lVar29 + 0x38), lVar39 != 0)) {
        if (uVar16 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar28 + -0x108) == fStack0000000000000040) {
            fVar58 = *(float *)(lVar39 + lVar28 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar50 = (ulong)(uint)fStack0000000000000038;
            uVar19 = FUN_03567bac(fVar55 + fVar58,uVar50,0);
            if ((uVar19 & 1) != 0) {
              uVar52 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar29 = *in_stack_00000170;
            if (lVar29 == 0) goto LAB_035574b8;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 != 0) {
            uVar52 = *(uint *)(lVar29 + 0x18);
            if ((int)uVar12 <= (int)uVar5) goto FUN_035568e8;
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
    if ((int)uVar12 < (int)uVar52) {
      iVar14 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar16) goto LAB_035575f4;
      lVar29 = *(long *)(lVar27 + lVar28 + -0x130);
      if (lVar29 == 0) goto LAB_035574b8;
      iVar15 = FUN_036d3364(lVar29,0);
      if (iVar14 != iVar15) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar29 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar52 = *(uint *)(lVar29 + lVar28 + -0x330);
          fVar55 = *(float *)(lVar29 + lVar28 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _in_stack_00000128 = CONCAT44(1,in_stack_00000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  uVar52 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar52 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar29 + lVar41 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar51 = (ulong)uStack00000000000000c0;
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar51,uVar53,fStack00000000000000d0,uVar51);
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
      uVar52 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar52 <= uVar12) goto LAB_035575f4;
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
    if (uVar52 <= uVar12) goto LAB_035575f4;
    lVar29 = lVar29 + lVar41 * 0x178;
    fVar47 = *(float *)(lVar29 + 0x128);
    fVar54 = *(float *)(lVar29 + 0x188);
    uVar17 = *(undefined8 *)(lVar29 + 0x17c);
    fVar48 = *(float *)(lVar29 + 0x184);
    uVar20 = *(undefined8 *)(lVar29 + 0x184);
    fVar57 = *(float *)(lVar29 + 0x18c);
    fVar55 = *(float *)(lVar29 + 0x11c);
    fVar64 = *(float *)(lVar29 + 0x148);
    fVar58 = *(float *)(lVar29 + 0x150);
    in_stack_00000178 = uVar17;
    fStack0000000000000180 = fVar48;
    fStack0000000000000184 = fVar54;
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
      fVar47 = fVar47 + (float)in_stack_000017b8;
      uVar51 = (ulong)(uint)fVar47;
      fVar55 = fVar55 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar58 = fVar58 - in_stack_000017c0;
      uVar50 = (ulong)(uint)fVar58;
      fVar64 = fVar64 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar53 = (ulong)(uint)fVar64;
      if (fVar55 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar55;
      }
      if (fVar58 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar58;
      }
      if (fStack00000000000000c8 <= fVar47) {
        fStack00000000000000c8 = fVar47;
      }
      if (fStack00000000000000d0 <= fVar64) {
        fStack00000000000000d0 = fVar64;
      }
    }
    else {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar29);
      }
      fVar55 = (fVar55 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar53 = (ulong)(uint)fVar55;
      if (fVar58 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar58;
      }
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar51 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar64) {
        fStack00000000000000d0 = fVar64;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar51,uVar53,fStack00000000000000d0,uVar51);
      fStack00000000000000dc = fVar58 - fVar57;
      fStack00000000000000c8 = fVar47 + fVar48;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar64 + fVar54;
      fStack00000000000000d8 = fVar55;
      in_stack_000017b0 = uVar17;
      in_stack_000017b8 = uVar20;
      in_stack_000017c0 = fVar57;
    }
    if (((*unaff_x20 == 1) || (uVar12 == uVar34)) || (((int)uVar5 <= (int)uVar12 || (!bVar1)))) {
      uVar51 = (ulong)uStack00000000000000c0;
      uVar50 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar50,uVar51,uVar53,fStack00000000000000d0,uVar51);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar12 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _in_stack_00000128 = CONCAT44(fStack000000000000012c,(int)in_stack_00000128 + 1);
  bVar1 = (int)uVar12 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar52 = uVar32;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar27 = *in_stack_00000170;
  if (lVar27 != 0) {
    iVar11 = uVar32 + 1;
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar27 + 0x18) = uVar12;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar11;
    if ((int)uVar12 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar28;
    *(float *)(lVar27 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
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
    iVar11 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar11 != 0x19) {
      lVar27 = unaff_x19[0xe5];
      if (lVar27 == 0) goto LAB_035574b8;
      uVar12 = FUN_03911ee4(lVar27,0);
      FUN_03911f20(lVar27,uVar12 | 0x19,0);
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
                            uVar20 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar27 = *in_stack_00000170;
                              if (lVar27 != 0) {
                                lVar29 = 0;
                                lVar28 = 0;
                                do {
                                  uVar19 = lVar28 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*plVar42 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar27 + lVar29 + 0x70,0);
                                  lVar27 = unaff_x19[0xe1];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar17 = *(undefined8 *)(lVar27 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_036d35a8(uVar17,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar27 = *(long *)(*in_stack_00000170 + 0x60), lVar27 == 0
                                         )) break;
                                      if (*(int *)(*plVar42 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar27 + lVar29 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a460c(lVar27,*(undefined8 *)(lVar18 + lVar29 + 0x80),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4810(lVar27,*(undefined8 *)(lVar18 + lVar29 + 0x98),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a48bc(lVar27,*(undefined8 *)(lVar18 + lVar29 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar18 = *(long *)(*in_stack_00000170 + 0x60), lVar18 == 0))
                                    break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4e24(lVar27,*(undefined8 *)(lVar18 + lVar29 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = UnityEngine_Material__GetColorArray(lVar27,0),
                                       lVar27 == 0)) break;
                                    FUN_036aa280(lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_037b514c(lVar27,0);
                                    lVar18 = unaff_x19[0xe1];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar18 = *(long *)(lVar18 + lVar28 * 8 + 0x28);
                                    if ((lVar18 == 0) ||
                                       (uVar17 = UnityEngine_Material__GetColorArray(lVar18,0),
                                       lVar27 == 0)) break;
                                    FUN_0390f3a4(lVar27,uVar17,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390eec8(uVar20,uVar50,uVar51,uVar53,lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390ed78(lVar27,uVar12 & 1,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar40 = *(long **)(lVar27 + lVar28 * 8 + 0x28);
                                    uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar16 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *in_stack_00000170;
                                  lVar28 = lVar28 + 1;
                                  lVar29 = lVar29 + 0x50;
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


