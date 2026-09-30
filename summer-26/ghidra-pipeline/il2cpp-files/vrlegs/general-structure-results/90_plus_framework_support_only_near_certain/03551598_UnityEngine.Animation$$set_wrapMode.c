/*
FUNCTION_NAME: UnityEngine.Animation$$set_wrapMode
ENTRY_POINT: 03551598
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


void UnityEngine_Animation__set_wrapMode(void)

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
  uint uVar10;
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
  undefined4 in_w8;
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
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar41;
  long unaff_x25;
  long *plVar42;
  uint unaff_w26;
  long *unaff_x28;
  undefined8 *unaff_x29;
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
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulong unaff_d11;
  float fVar59;
  float fVar60;
  ulong unaff_d13;
  float unaff_s14;
  undefined4 uVar61;
  float fVar62;
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
  undefined4 in_stack_000008b0;
  undefined4 in_stack_00000c18;
  undefined4 in_stack_00000c1c;
  undefined8 in_stack_00000c20;
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint in_stack_000017a8;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float in_stack_000017d8;
  uint uVar64;
  uint in_stack_000017dc;
  
code_r0x03551598:
  uVar17 = unaff_x29[1];
  uVar20 = *unaff_x29;
  lVar27 = unaff_x22 + unaff_x25 * unaff_x24;
  *(undefined4 *)(lVar27 + 0x18c) = in_w8;
  *(undefined8 *)(lVar27 + 0x184) = uVar17;
  *(undefined8 *)(lVar27 + 0x17c) = uVar20;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar27,0);
  puVar6 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x29[0x1df] = in_stack_00000c20;
  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar10 = FUN_026b63d8(in_stack_000017dc,0);
    uVar10 = uVar10 & 1;
  }
  else {
    uVar10 = 0;
  }
  fVar44 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  iVar11 = (int)unaff_x24;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar62 = 0.0;
    fVar59 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar51 = *unaff_x20;
    uVar16 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar51 < (int)in_stack_00000088._4_4_) {
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar51 + 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar51 + 1) * (long)iVar11 + 0x30);
      if ((((lVar27 == 0) || (*unaff_x21 == 0)) ||
          (lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar16 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar19 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar61 = 0;
      if ((uVar19 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar62 = 0.0;
        fVar59 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar61 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar59 = *(float *)(in_stack_000016f8 + 0x14);
        fVar62 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar44 = 0.0;
        }
      }
      uVar51 = *unaff_x20;
    }
    else {
      uVar61 = 0;
      fStack000000000000012c = 0.0;
      fVar62 = 0.0;
      fVar59 = 0.0;
    }
    if (0 < (int)uVar51) {
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar51 - 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (ulong)(uVar51 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar27 == 0) || (*unaff_x21 == 0)) ||
         ((lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar27 + 0x28) | uVar16 << 0x10;
      uVar19 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar19 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar59 = (float)FUN_03571cb4(fVar59,fVar62,fStack000000000000012c,uVar61,
                                         *(undefined4 *)(in_stack_000016f8 + 0x28),
                                         *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016f8 + 0x30),
                                         *(undefined4 *)(in_stack_000016f8 + 0x34),0),
           in_stack_000016f8 == 0)) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar44 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  fVar43 = (float)unaff_d13;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar54 = *(float *)(unaff_x19 + 200);
    fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar54 = fVar54 - fVar43 * fVar45 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar54;
    if ((in_stack_000017dc == 0x200b) || (uVar10 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar54 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar54 = *(float *)(unaff_x19 + 0x56);
  fVar45 = 0.0;
  if (fVar54 != 0.0) {
    fVar45 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar46 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar54 * 0.5 - fVar43 * (fVar45 * 0.5 + fVar46));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar45;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar27 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar27,0,0);
    fVar46 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      fVar46 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        fVar54 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                             (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar57 = *(float *)(*unaff_x21 + 0x1b0);
        fVar46 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        fVar46 = fVar46 * fVar54 * fVar57 * 0.25;
        if (fVar54 < fStack000000000000015c + fVar46) {
          fStack000000000000015c = fVar54 - fVar46;
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
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        uVar19 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 != 0) {
            fVar54 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
              fVar57 = *(float *)(*unaff_x21 + 0x1a8);
              fVar46 = (float)FUN_0369e060(*in_stack_00000160,
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc)
                                           ,0);
              fVar46 = fVar46 * fVar54 * fVar57 * 0.25;
              if (fVar54 < fStack000000000000015c + fVar46) {
                fStack000000000000015c = fVar54 - fVar46;
              }
              goto FUN_03551b84;
            }
          }
          goto LAB_035574b8;
        }
      }
    }
    fVar46 = 0.0;
  }
FUN_03551b84:
  fVar54 = *(float *)(unaff_x19 + 200);
  fVar57 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar54 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar43 * (fVar59 + ((fVar57 - fStack000000000000015c) - fVar46));
  fVar59 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar63 = *(float *)((long)unaff_x19 + 0x61c) +
           ((unaff_s14 + fVar43 * (fVar62 + fStack000000000000015c + fVar59)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar59 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar59 = fVar63 - fVar43 * (fStack000000000000015c + fStack000000000000015c + fVar59);
  fVar62 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar57 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar43 * (fVar46 + fVar46 +
                             fStack000000000000015c + fStack000000000000015c + fVar62);
  fStack0000000000000104 = fVar54;
  fVar62 = fVar57;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar56 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar62 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar55 = fVar56 * fVar43 * (fVar46 + fStack000000000000015c + fVar62);
    fVar62 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar53 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar63 = fVar63 + 0.0;
    fVar59 = fVar59 + 0.0;
    fVar56 = fVar56 * fVar43 * (((fVar62 - fVar53) - fStack000000000000015c) - fVar46);
    fVar53 = fVar54 + fVar55;
    fVar62 = fVar57 + fVar56;
    fVar47 = (fVar55 - fVar56) * 0.5;
    fVar54 = (fVar54 + fVar56) - fVar47;
    fVar57 = (fVar57 + fVar55) - fVar47;
    fStack0000000000000104 = fVar53 - fVar47;
    fVar62 = fVar62 - fVar47;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar47 = 0.0;
    fVar55 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar56 = fVar59;
    fVar53 = fVar63;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar58 = (fVar57 + fVar54) * 0.5;
    fVar60 = (fVar59 + fVar63) * 0.5;
    fVar63 = fVar63 - fVar60;
    fStack0000000000000100 = 0.0;
    fVar53 = fVar63;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar58,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar58 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar56 = fVar59 - fVar60;
    fStack0000000000000114 = 0.0;
    fVar59 = fVar56;
    fVar54 = (float)FUN_036bdd2c(fVar54 - fVar58,_fStack0000000000000078,0);
    fVar54 = fVar58 + fVar54;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar59 = fVar60 + fVar59;
    fVar55 = 0.0;
    fVar57 = (float)FUN_036bdd2c(fVar57 - fVar58,_fStack0000000000000078,0);
    fVar57 = fVar58 + fVar57;
    fVar63 = fVar60 + fVar63;
    fVar55 = fVar55 + 0.0;
    fVar47 = 0.0;
    fVar62 = (float)FUN_036bdd2c(fVar62 - fVar58,_fStack0000000000000078,0);
    fVar62 = fVar58 + fVar62;
    fVar47 = fVar47 + 0.0;
    fVar56 = fVar60 + fVar56;
    fVar53 = fVar60 + fVar53;
  }
  if (*unaff_x28 == 0) goto LAB_035574b8;
  lVar27 = *(long *)(*unaff_x28 + 0x38);
  uVar19 = unaff_d13 & 0xffffffff;
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x11c) = fVar54;
  *(float *)(lVar27 + 0x120) = fVar59;
  *(float *)(lVar27 + 0x124) = fStack0000000000000114;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x114) = fVar53;
  *(float *)(lVar27 + 0x110) = fStack0000000000000104;
  *(float *)(lVar27 + 0x118) = fStack0000000000000100;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x128) = fVar57;
  *(float *)(lVar27 + 300) = fVar63;
  *(float *)(lVar27 + 0x130) = fVar55;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x134) = fVar62;
  *(float *)(lVar27 + 0x138) = fVar56;
  *(float *)(lVar27 + 0x13c) = fVar47;
  if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar16 = *unaff_x20;
  lVar28 = (long)(int)uVar16;
  if (*(uint *)(lVar27 + 0x18) <= uVar16) goto LAB_035575f4;
  lVar29 = lVar27 + lVar28 * unaff_x24;
  *(int *)(lVar29 + 0x140) = (int)unaff_x19[200];
  fVar63 = *(float *)(unaff_x19 + 0x9b);
  uVar49 = (ulong)(uint)fVar63;
  fVar62 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar29 + 0x15c) = (fVar57 - fVar54) / (fVar53 - fVar59);
  *(float *)(lVar29 + 0x14c) = (unaff_s14 - fVar63) + fVar62;
  in_stack_00000128 = in_stack_00000128 * fVar43;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    in_stack_00000128 = in_stack_00000128 / fStack0000000000000158;
    in_stack_00000120 = (in_stack_00000120 * fVar43) / fStack0000000000000158;
  }
  else {
    in_stack_00000120 = in_stack_00000120 * fVar43;
  }
  uVar51 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar10 == 0) || (uVar16 == uVar51)) {
    in_stack_00000120 = fVar62 + in_stack_00000120;
    in_stack_00000128 = fVar62 + in_stack_00000128;
    fVar54 = in_stack_00000120;
    fVar59 = in_stack_00000128;
    if (fVar62 != 0.0) {
      fVar59 = (in_stack_00000128 - fVar62) / *(float *)((long)unaff_x19 + 0x404);
      fVar54 = (in_stack_00000120 - fVar62) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar59 <= in_stack_00000128) {
        fVar59 = in_stack_00000128;
      }
      if (in_stack_00000120 <= fVar54) {
        fVar54 = in_stack_00000120;
      }
    }
    lVar27 = lVar27 + lVar28 * unaff_x24;
    fVar62 = fVar59;
    if (fVar59 <= *(float *)(unaff_x19 + 0x99)) {
      fVar62 = *(float *)(unaff_x19 + 0x99);
    }
    fVar57 = fVar54;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar54) {
      fVar57 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar57;
    *(float *)(unaff_x19 + 0x99) = fVar62;
    *(float *)(lVar27 + 0x154) = fVar59;
    *(float *)(lVar27 + 0x158) = fVar54;
    *(float *)(lVar27 + 0x148) = in_stack_00000128 - fVar63;
    *(float *)(unaff_x19 + 0x98) = in_stack_00000128 - fVar63;
    *(float *)(lVar27 + 0x150) = in_stack_00000120 - fVar63;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000120 - fVar63;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar62;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar59 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar62 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar43 * fVar62) / fStack0000000000000158;
      uVar49 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar59 <= fStack0000000000000158) {
        fVar59 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar59;
    }
    if ((float)uVar49 == 0.0) {
      fVar59 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= in_stack_00000128) {
        fVar59 = in_stack_00000128;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar59;
    }
  }
  else {
    fVar59 = *(float *)(unaff_x19 + 0x99);
    lVar27 = lVar27 + lVar28 * unaff_x24;
    *(float *)(lVar27 + 0x154) = fVar59;
    fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar59 = fVar59 - fVar63;
    *(float *)(lVar27 + 0x148) = fVar59;
    *(float *)(lVar27 + 0x158) = fVar62;
    *(float *)(unaff_x19 + 0x98) = fVar59;
    fVar62 = fVar62 - fVar63;
    *(float *)(lVar27 + 0x150) = fVar62;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar62;
  }
  lVar27 = *unaff_x28;
  if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar12 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)uVar12 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4f);
  uVar64 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((uVar10 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
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
    fVar62 = *pfVar33;
    fVar54 = *pfVar30;
    fVar59 = *(float *)(unaff_x19 + 0x6c);
    fVar57 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar62) - fVar54;
    bVar8 = true;
    if ((fVar59 <= in_stack_000000f8._4_4_) && (bVar8 = false, !NAN(fVar59))) {
      bVar8 = fVar59 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000f8._4_4_ = fVar59;
    }
    fVar59 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar59 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar49 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar53 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar56 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar63 = (float)unaff_d11;
    if (in_stack_000017dc != 0xad) {
      fVar63 = fVar43;
    }
    fVar55 = (float)uVar49;
    fVar47 = 0.0;
    if ((0.0 < fVar55) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar12 = *unaff_x20;
    fVar47 = (*(float *)(unaff_x19 + 0x97) - (fVar56 - fVar55)) + fVar47;
    if (fStack00000000000000c4 < fVar47) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar12;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar20 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar58 = *(float *)(unaff_x19 + 0x59);
        if (((fVar58 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar55)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar44 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar47) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar44 <= fVar58) {
            fVar44 = fVar58;
          }
          goto LAB_03554b48;
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar47 = *(float *)(unaff_x19 + 0x4a);
        uVar49 = (ulong)(uint)fVar47;
        if ((fVar47 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar44 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar44 <= DAT_00d38b84) {
            fVar44 = DAT_00d38b84;
          }
          fVar59 = (fVar55 - fVar44) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar55;
          fVar44 = DAT_00d38e60;
          if (fVar59 != INFINITY) {
            fVar44 = (float)(int)fVar59 / 20.0;
          }
          if (fVar44 <= fVar47) {
            fVar44 = fVar47;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar6;
        }
        lVar28 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
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
            lVar27 = *(long *)puVar6;
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
        if ((uVar12 == 0) || ((int)in_stack_000017a8 < 0)) {
          *unaff_x20 = 0;
          in_stack_000017a8 = 0xffffffff;
        }
        else {
          fVar44 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if (fStack00000000000000c4 < fVar44 - fVar56) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar49 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar27 = NEON_rev64(uVar49,4);
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
      uVar20 = CONCAT44(3,uVar12);
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar57 = ABS(fVar57) + fVar59 * (1.0 - fVar53) * fVar63;
    fVar59 = 1.0;
    if ((uVar32 & 0x18) != 0) {
      fVar59 = DAT_00d38acc;
    }
    fVar63 = fVar59 * in_stack_000000f8._4_4_;
    if (fVar57 <= fVar63) {
LAB_03552f54:
      if (in_stack_000017dc == 0xad) {
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
          *(undefined1 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
          goto LAB_035530c4;
        }
      }
      else if (in_stack_000017dc == 9) {
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        uVar12 = *unaff_x20;
        if (uVar12 < *(uint *)(lVar28 + 0x18)) {
          *(undefined1 *)(lVar28 + (long)(int)uVar12 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar12;
          lVar28 = *(long *)(lVar27 + 0x50);
          if (lVar28 == 0) goto LAB_035574b8;
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
            goto LAB_03552fcc;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x898))(fVar63,fVar46);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
        }
        uVar12 = *unaff_x20;
        if ((in_stack_00000068._4_4_ & 1) != 0) {
          *(uint *)(in_stack_00000080 + 0x1f0) = uVar12;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar12;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 == 0))
        goto LAB_035574b8;
        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          in_stack_00000068._4_4_ = 0;
          *(float *)(lVar27 + 0x60) = fVar62;
          *(float *)(lVar27 + 100) = fVar54;
          goto LAB_035530c4;
        }
      }
      goto LAB_035575f4;
    }
    uVar49 = (ulong)(uint)fVar46;
    if (((char)unaff_x19[0x5b] == '\0') || (uVar12 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar53 < fVar63) {
          fVar44 = fVar57 / (1.0 - fVar53);
          if (fVar53 <= 0.0) {
            fVar44 = fVar57;
          }
          fVar53 = fVar53 + (fVar57 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar44;
          goto LAB_035574e8;
        }
        fVar53 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar63 = *(float *)(unaff_x19 + 0x4a);
        if (fVar63 < fVar53) {
          fVar44 = (fVar53 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar44 <= DAT_00d38b84) {
            fVar44 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar53;
          fVar53 = fVar53 - fVar44;
LAB_03557524:
          fVar59 = fVar53 * 20.0 + 0.5;
          fVar44 = DAT_00d38e60;
          if (fVar59 != INFINITY) {
            fVar44 = (float)(int)fVar59 / 20.0;
          }
          if (fVar44 <= fVar63) {
            fVar44 = fVar63;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar44;
          return;
        }
      }
      iVar13 = (int)unaff_x19[0x5c];
      if (iVar13 == 1) {
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar6;
        }
        lVar28 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 != 0) {
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar6;
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
        fVar63 = *(float *)(unaff_x19 + 0x9b);
        fVar53 = 0.0;
        if ((0.0 < fVar63) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar53 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar53 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar53 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 fStack0000000000000058 *
                 (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar27 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar27 == 0) goto LAB_035574b8;
        fVar63 = *(float *)(unaff_x19 + 0x9b);
        fVar53 = *(float *)(unaff_x19 + 0x58) +
                 fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar27 + 0x18) <= uVar34) ||
         (uVar38 = uVar34 - 1, *(uint *)(lVar27 + 0x18) <= uVar38)) goto LAB_035575f4;
      uVar49 = (ulong)(uint)(fVar53 + *(float *)(unaff_x19 + 0x97));
      fVar56 = (fVar53 + *(float *)(unaff_x19 + 0x97) + fVar63) -
               *(float *)(lVar27 + (long)(int)uVar34 * unaff_x24 + 0x158);
      if (((bStack0000000000000074 & 1) != 0 ||
           *(short *)(lVar27 + (long)(int)uVar38 * (long)iVar11 + 0x20) != 0xad) ||
         ((fStack00000000000000c4 <= fVar56 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar27 + (long)(int)uVar34 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          uVar20 = in_stack_000017c8;
        }
        else {
          if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar53 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar63 <= fVar53) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar53 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar49 = (ulong)(uint)fVar53;
              fVar63 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar53 <= fVar63) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
              goto LAB_03552d44;
LAB_03557594:
              fVar44 = (fVar53 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar44 <= DAT_00d38b84) {
                fVar44 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar53;
              fVar53 = fVar53 - fVar44;
              goto LAB_03557524;
            }
LAB_03557558:
            fVar44 = fVar57;
            if (0.0 < fVar53) {
              fVar44 = fVar57 / (1.0 - fVar53);
            }
            fVar53 = fVar53 + (fVar57 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar44;
LAB_035574e8:
            if (fVar63 <= fVar53) {
              fVar53 = fVar63;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar53;
            return;
          }
LAB_03552d44:
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar6;
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
          if (fVar56 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
            FUN_0358cbd4(fStack0000000000000058,uVar19,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar44,
                         in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            uVar49 = uVar19;
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
                fVar44 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar56) / (float)((int)unaff_x19[0x95] + 1)) /
                         fStack0000000000000058;
                if (fVar44 <= fVar63) {
                  fVar44 = fVar63;
                }
LAB_03554b48:
                *(float *)((long)unaff_x19 + 700) = fVar44;
                return;
              }
              fVar53 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar63 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar53 < fVar63) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar53 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar49 = (ulong)(uint)fVar53;
              fVar63 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar63 < fVar53) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
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
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar44,
                           in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              uVar49 = uVar19;
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
        *unaff_x20 = uVar38;
        in_stack_000017a8 = in_stack_000017a8 - 1;
        uVar20 = CONCAT44(0x2d,uVar38);
      }
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar62 = (float)uVar49;
      fVar59 = 0.0;
      if ((0.0 < fVar62) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar59 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar49 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar62)) + fVar59)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar12;
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
      fVar59 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar54 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar27 = unaff_x19[0xca];
      fVar62 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar62 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
      fVar57 = *(float *)((long)unaff_x19 + 0x404);
      fVar53 = *(float *)(lVar27 + 0x2c);
      fVar46 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
      fVar63 = *_fStack00000000000000a8;
      fVar46 = fVar57 * (fVar59 / (float)iVar13) * fVar54 * fVar62 * fVar53 * fVar46;
      fVar59 = *_fStack00000000000000a0;
      if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        uVar12 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar62 = *(float *)(lVar27 + (long)(int)uVar12 * (long)iVar11 + 0x60);
        iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
        fVar57 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
        lVar27 = unaff_x19[0xca];
        fVar54 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar54 = 1.0;
        }
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
        fVar53 = *(float *)((long)unaff_x19 + 0x404);
        fVar56 = *(float *)(lVar27 + 0x2c);
        fVar46 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar63 = *(float *)(lVar27 + 0x60);
        fVar59 = *(float *)(lVar27 + 100);
        fVar46 = fVar53 * (fVar62 / (float)iVar13) * fVar57 * fVar54 * fVar56 * fVar46;
      }
      fVar57 = *(float *)(unaff_x19 + 0x9b);
      fVar62 = 0.0;
      fVar54 = 0.0;
      if ((0.0 < fVar57) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar54 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar56 = *(float *)(unaff_x19 + 0x97);
      fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar53 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
        goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,lVar27,0);
        fVar62 = (float)FUN_03776cb4(&stack0x00001700,0);
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar55 = *(float *)(unaff_x19 + 0x6c);
      fVar59 = (fStack000000000000009c - fVar63) - fVar59;
      bVar8 = true;
      if ((fVar55 <= fVar59) && (bVar8 = false, !NAN(fVar55))) {
        bVar8 = fVar55 == -1.0;
      }
      if (!bVar8) {
        fVar59 = fVar55;
      }
      fVar63 = 1.0;
      if ((uVar32 & 0x18) != 0) {
        fVar63 = DAT_00d38acc;
      }
      if (((fVar56 - (fVar47 - fVar57)) + fVar54 < fStack00000000000000c4) &&
         (ABS(fVar53) + fVar46 * fVar62 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar63 * fVar59)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar27 = *(long *)(*(long *)puVar6 + 0xb8);
        memcpy(&stack0x00000528,(void *)(lVar27 + 0x788),0x378);
        FUN_0209b210(lVar27 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    uVar12 = *(uint *)(unaff_x19 + 0x95);
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar28 + 100) = uVar12;
    *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
LAB_0355346c:
      if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
      *(int *)(lVar27 + (long)(int)uVar12 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar12) goto LAB_035575f4;
      if (*(int *)(lVar27 + (long)(int)uVar12 * 0x5c + 0x24) == 1) goto LAB_0355346c;
    }
    if (in_stack_000017dc == 9) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar59 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar45 = *(float *)(unaff_x19 + 200);
      fVar62 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
      fVar59 = fVar43 * fVar59 * fVar62;
      fVar62 = fVar59 * (float)(int)(fVar45 / fVar59);
      uVar49 = (ulong)(uint)fVar62;
      if (fVar62 <= fVar45) {
        fVar62 = fVar45 + fVar59;
      }
LAB_03553678:
      *(float *)(unaff_x19 + 200) = fVar62;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar45 = 1.0;
        }
        else {
          fVar45 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar62 = *(float *)(unaff_x19 + 200);
        fVar54 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] != 0) {
          fVar59 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar62 = fVar62 + fVar59 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar43 * (fStack000000000000012c + fVar45 * fVar54) +
                                     fStack00000000000000d4 *
                                     (fStack00000000000000d0 +
                                     fVar44 + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar62;
          goto joined_r0x035535c0;
        }
        goto LAB_035574b8;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar62 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar43 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + fVar44 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar49 = (ulong)(uint)fVar62;
      fVar62 = *(float *)(unaff_x19 + 200) - fVar62;
      *(float *)(unaff_x19 + 200) = fVar62;
      if ((in_stack_000017dc == 0x200b) || (uVar10 != 0)) {
        fVar59 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar49 = (ulong)(uint)fVar59;
        fVar62 = fVar62 - fVar59;
        goto LAB_03553678;
      }
    }
    else {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar59 = *(float *)(unaff_x19 + 200);
      fVar62 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar45) +
                        fStack00000000000000d4 * (fVar44 + *(float *)(*unaff_x21 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar62;
joined_r0x035535c0:
      if ((in_stack_000017dc == 0x200b) || (uVar49 = (ulong)(uint)fVar59, uVar10 != 0)) {
        fVar59 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar49 = (ulong)(uint)fVar59;
        fVar62 = fVar62 + fVar59;
        goto LAB_03553678;
      }
    }
    lVar27 = *in_stack_00000170;
    if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    uVar12 = *unaff_x20;
    uVar32 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar32 <= uVar12) goto LAB_035575f4;
    *(float *)(lVar28 + (long)(int)uVar12 * unaff_x24 + 0x144) = fVar62;
    uVar34 = in_stack_000017dc;
    if ((int)in_stack_000017dc < 0xd) {
      if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
      if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
         ((float)uVar12 == in_stack_00000088._4_4_)) goto LAB_0355371c;
    }
    else {
      if (1 < in_stack_000017dc - 0x2028) {
        if (in_stack_000017dc != 0xd) goto LAB_03553700;
        uVar49 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar12 != in_stack_00000088._4_4_) goto LAB_03553c8c;
      }
LAB_0355371c:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar59 = *(float *)(unaff_x19 + 0x99);
        fVar62 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar59 = fVar59 - fVar62;
        if (((fStack000000000000005c < ABS(fVar59)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_0358c860(fVar59);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar59;
          *(float *)(unaff_x19 + 0x9b) = fVar59 + *(float *)(unaff_x19 + 0x9b);
          puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar27 = *(long *)puVar6;
          }
          lVar28 = *(long *)(lVar27 + 0xb8);
          if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            }
            FUN_0209b778(lVar28 + 0x11f0,&stack0x000008a0,
                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x000008a0,0x378);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(long *)(lVar27 + 0xb8) + 0x818,0);
            lVar27 = *(long *)(*(long *)puVar6 + 0xb8);
            *(float *)(lVar27 + 0x7bc) = fVar59 + *(float *)(lVar27 + 0x7bc);
            *(float *)(lVar27 + 0x800) = fVar59 + *(float *)(lVar27 + 0x800);
            memcpy(&stack0x000001b0,(void *)(lVar27 + 0x788),0x378);
            FUN_0209b210(lVar27 + 0x11f0,&stack0x000001b0,
                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
          }
        }
      }
      fVar45 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar62 = *(float *)((long)unaff_x19 + 0x4cc) - fVar45;
      fVar59 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar62 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar59 = fVar62;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar59;
      fVar54 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_000017d4 == '\0') {
        in_stack_000017d8 = fVar59;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_000017d4 = '\x01';
      }
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      uVar12 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar29 = unaff_x19[0x93];
      lVar18 = lVar28 + (long)(int)uVar12 * 0x5c;
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
      uVar61 = *(undefined4 *)(lVar27 + (long)(int)uVar32 * (long)iVar11 + 0x11c);
      lVar28 = lVar28 + (long)(int)uVar12 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar62;
      *(undefined4 *)(lVar28 + 0x6c) = uVar61;
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
      fVar54 = fVar54 - fVar45;
      uVar49 = (ulong)(uint)fVar54;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) =
           *(undefined4 *)
            (lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar28 + 0x78) = fVar54;
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar29 = *(long *)(lVar27 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar29 + lVar18 * 0x5c;
      *(float *)(lVar28 + 0x44) = *(float *)(lVar28 + 0x74) - fVar43 * fStack000000000000015c;
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
      fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fStack00000000000000d4 *
                (fStack00000000000000d0 + fVar44 + *(float *)(*unaff_x21 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar44 = -fVar59;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar44 = fVar59;
      }
      *(float *)(lVar29 + 0x58) = *(float *)(lVar28 + lVar41 * unaff_x24 + 0x144) + fVar44;
      *(float *)(lVar29 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar29 + 0x54) = fVar62;
      *(float *)(lVar29 + 0x48) = in_stack_00000060 + (fVar54 - fVar62);
      *(float *)(lVar29 + 0x4c) = fVar54;
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
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x50) == 0)) goto LAB_035574b8;
          if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar13) {
            FUN_0358ca18();
            lVar27 = unaff_x19[0x6d];
            if (lVar27 == 0) goto LAB_035574b8;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 == 0) goto LAB_035574b8;
          if (*unaff_x20 < *(uint *)(lVar27 + 0x18)) {
            fVar44 = *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
              if ((in_stack_000017dc == 0x2029) || (fVar59 = 0.0, in_stack_000017dc == 10)) {
                fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar23 = 0;
              fVar59 = fVar44 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       fStack0000000000000058 *
                       (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar59) +
                       *(float *)(unaff_x19 + 0x9b);
            }
            else {
              if ((in_stack_000017dc == 0x2029) || (fVar59 = 0.0, in_stack_000017dc == 10)) {
                fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar23 = 1;
              fVar59 = *(float *)(unaff_x19 + 0x9b) +
                       *(float *)(unaff_x19 + 0x58) +
                       fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar59);
            }
            *(float *)(unaff_x19 + 0x9b) = fVar59;
            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar6;
            }
            uVar20 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x9a) = fVar44;
            uVar49 = NEON_rev64(uVar20,4);
            unaff_x19[0x99] = uVar49;
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
        if (in_stack_000017dc == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
          in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar34 = 3;
        }
      }
      else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
    }
LAB_03553c8c:
    uVar12 = *unaff_x20;
    if (uVar32 <= uVar12) goto LAB_035575f4;
    if (*(char *)(lVar28 + (long)(int)uVar12 * unaff_x24 + 0x194) != '\0') {
      lVar28 = lVar28 + (long)(int)uVar12 * unaff_x24;
      uVar49 = *(ulong *)(lVar28 + 0x11c);
      uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
      *(ulong *)(in_stack_00000080 + 0x230) =
           uVar19 ^ (uVar19 ^ uVar49) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar49 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar49));
      uVar19 = *(ulong *)(in_stack_00000080 + 0x238);
      uVar49 = *(ulong *)(lVar28 + 0x128);
      *(ulong *)(in_stack_00000080 + 0x238) =
           uVar19 ^ (uVar19 ^ uVar49) &
                    ~CONCAT44(-(uint)((float)(uVar49 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar49 < (float)uVar19));
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
      uVar12 = *(uint *)(lVar28 + 0x18);
      if (uVar12 <= uVar32) goto LAB_035575f4;
      lVar18 = lVar28 + lVar29 * 0x14;
      fVar59 = *(float *)(lVar18 + 0x30);
      uVar49 = (ulong)(uint)fVar59;
      *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar44 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar59 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar44 = fVar59;
      }
      *(float *)(lVar18 + 0x30) = fVar44;
      uVar34 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar34 == 0 && uVar32 == 0) {
        *(uint *)(lVar28 + (ulong)uVar32 * 0x14 + 0x20) = uVar34;
      }
      else {
        uVar38 = uVar34 - 1;
        if (0 < (int)uVar34) {
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= uVar38) goto LAB_035575f4;
          if (uVar32 != *(uint *)(lVar27 + (ulong)uVar38 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar32 - 1 < uVar12) {
              *(uint *)(lVar28 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar38;
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
    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
    if ((uVar10 == 0) &&
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
        uVar12 = FUN_0219c130(*(long *)(lVar27 + 0x10),&stack0x000008a0,
                              *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
        if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
          in_stack_000008a0 = in_stack_000017dc;
          if ((uVar12 & 1) == 0) {
LAB_03554270:
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0358c4f0();
            goto LAB_035542a8;
          }
LAB_035541dc:
          if (uVar16 != uVar51 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
          if (uVar10 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
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
        if ((uVar12 & 1) != 0) goto LAB_035541dc;
        if ((uVar19 & 1) == 0) goto LAB_03554270;
        if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
        if (uVar10 != 0) {
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
        if (uVar10 == 0) goto UnityEngine_Animator__set_animatePhysics;
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
      fVar44 = (float)uVar49;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar44 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar59 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar44 < fVar59) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar62 = (*(float *)((long)unaff_x19 + 0x23c) - fVar44) * 0.5;
          if (fVar62 <= DAT_00d38b84) {
            fVar62 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar44;
          fVar62 = (fVar44 + fVar62) * 20.0 + 0.5;
          fVar44 = DAT_00d38e60;
          if (fVar62 != INFINITY) {
            fVar44 = (float)(int)fVar62 / 20.0;
          }
          if (fVar59 <= fVar44) {
            fVar44 = fVar59;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar6 = PTR_DAT_03cbdf88;
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
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar64 == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar7;
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
            fVar44 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar44 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x2c);
          fVar44 = (0.0 - fVar44) - fStack0000000000000020;
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
            fVar44 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) +
                      *(float *)(lVar27 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar44 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
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
          fVar44 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar44);
      }
      else if (iVar13 == 0x800) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
        fVar44 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar44;
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
            fVar44 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar13 == 0x2000) {
          if (lVar27 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
          fVar44 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar27 + 0x24) +
                                (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + fVar44);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar20 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar6);
      }
      uVar19 = FUN_036d35a8(uVar20,0,0);
      lVar27 = FUN_0357f060();
      if (lVar27 == 0) goto LAB_035574b8;
      FUN_036df824(lVar27,0);
      *(float *)(unaff_x19 + 0xe2) = fVar44;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar59 = (float)FUN_03911954(unaff_x19[0xe5],0);
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
      lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar6;
      }
      puVar25 = *(undefined4 **)(lVar27 + 0xb8);
      uVar49 = (ulong)(uint)puVar25[1];
      uVar50 = (ulong)(uint)puVar25[2];
      uVar52 = (ulong)(uint)puVar25[3];
      FUN_035683a4(*puVar25,uVar49,uVar50,uVar52,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar27 = *in_stack_00000170;
      if (lVar27 == 0) goto LAB_035574b8;
      uVar10 = *unaff_x20;
      if ((int)uVar10 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar11 = 0;
        goto LAB_03556f00;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      fVar44 = ABS(fVar44);
      fVar62 = 1.0;
      if ((uVar19 & 1) == 0) {
        fVar62 = fVar44;
      }
      if (lVar27 == 0) goto LAB_035574b8;
      bVar9 = false;
      bVar5 = false;
      _in_stack_00000128 = 0;
      bVar8 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar28 = 0x2e0;
      fVar45 = 0.0;
      fVar43 = 0.0;
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
      uVar51 = 0;
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
         (in_stack_000017a8 = in_stack_0000178c, uVar64 = in_stack_000017dc,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    uVar10 = *unaff_x20;
    if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
    lVar29 = (long)(int)uVar10;
    unaff_w26 = (uint)*(byte *)(lVar27 + lVar29 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar28 = unaff_x19[0x24];
    if ((uint)uVar20 == uVar10) {
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
        uVar10 = *unaff_x20;
        if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
        unaff_w23 = 1;
        *(int *)(lVar27 + (long)(int)uVar10 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        uVar20 = CONCAT44(3,uVar10 + 1);
      }
      else if (in_stack_000017dc == 3) {
        if ((*unaff_x21 == 0) || (lVar18 = FUN_03568ac0(*unaff_x21,0), lVar18 == 0))
        goto LAB_035574b8;
        in_stack_00000c18 = 3;
        FUN_0219b634(lVar18,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo
                    );
        if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
        *(ulong *)(lVar27 + lVar29 * unaff_x24 + 0x30) =
             CONCAT44(in_stack_000008a4,in_stack_000008a0);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar10 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)uVar10 * (long)iVar11;
      *(undefined1 *)(lVar27 + 0x194) = 0;
      *(undefined2 *)(lVar27 + 0x20) = 0x200b;
      *(undefined4 *)(lVar27 + 100) = 0;
      *unaff_x20 = uVar10 + 1;
      uVar64 = in_stack_000017dc;
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
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      uVar64 = in_stack_000017dc;
      if (lVar27 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar29 = *(long *)puVar6;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar44 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar62 = (float)FUN_03776960(&stack0x00001720,0);
        fVar59 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar59 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar59 = (fVar44 / (float)iVar11) * fVar62 * fVar59;
        iVar11 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fVar44 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar62 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          in_stack_00000120 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000120 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          fVar43 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar27 + 0x20),0);
          fVar45 = (float)FUN_03776c9c(&stack0x00001700,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          fVar46 = *(float *)(lVar27 + 0x2c);
          fVar54 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar57 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          fVar53 = *(float *)((long)unaff_x19 + 0x404);
          fVar63 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          unaff_s14 = fVar59 * fVar57 * fVar53 * fVar63;
          in_stack_00000120 = (fVar44 / (float)iVar11) * fVar62 * in_stack_00000120;
          fVar59 = in_stack_00000120 * (fVar43 / fVar45) * fVar46 * fVar54;
          in_stack_00000120 = in_stack_00000120 / fVar59;
          in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
          fVar44 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
          in_stack_00000120 = in_stack_00000120 * fVar44;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          iVar11 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar62 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
          fVar45 = *(float *)(lVar27 + 0x2c);
          fVar43 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar43 = 1.0;
          }
          fVar54 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          in_stack_00000128 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_035574b8;
          fVar63 = *(float *)((long)unaff_x19 + 0x404);
          fVar57 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
          unaff_s14 = fVar59 * fVar46 * fVar63 * fVar57;
          fVar59 = (fVar44 / (float)iVar11) * fVar62 * fVar43 * fVar45 * fVar54;
          in_stack_00000120 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        }
        unaff_d11 = (ulong)(uint)fVar59;
        *in_stack_000000e0 = lVar27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar27);
        if ((*in_stack_00000170 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar27 + 0x2c) = 1;
        *(float *)(lVar27 + 0x160) = fVar59;
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
    uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar10 = FUN_026b8410(in_stack_000017dc,0);
            in_stack_000017dc = uVar10 & 0xffff;
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
          uVar10 = FUN_026b8594(in_stack_000017dc,0);
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
        uVar10 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar10 & 0xffff;
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
    uVar64 = in_stack_000017dc;
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
  uVar10 = *(uint *)(lVar27 + 0x18);
  if (uVar10 <= uVar16) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + (long)(int)uVar16 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_035510fc:
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar44 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar27 = unaff_x19[0x20];
  }
  else {
    lVar28 = unaff_x19[0x8f];
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
       (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
    if (uVar10 <= uVar16 - 1) goto LAB_035575f4;
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar44 = *(float *)(lVar27 + (long)(int)(uVar16 - 1) * (long)iVar11 + 0x60);
    iVar11 = FUN_03776950(*unaff_x21 + 0x50,0);
    lVar27 = *unaff_x21;
  }
  if (lVar27 == 0) goto LAB_035574b8;
  fVar62 = (float)FUN_03776960(lVar27 + 0x50,0);
  fVar59 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar59 = 1.0;
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
  fVar45 = *(float *)((long)unaff_x19 + 0x404);
  fVar54 = *(float *)(lVar27 + 0x2c);
  fVar43 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar46 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar63 = *(float *)((long)unaff_x19 + 0x404);
  fVar57 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar27 = unaff_x19[0x6d];
  if ((lVar27 == 0) || (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar28 + 0x2c) = 0;
  fVar59 = ((fStack0000000000000158 * fVar44) / (float)iVar11) * fVar62 * fVar59;
  fVar43 = fVar59 * fVar45 * fVar54 * fVar43;
  unaff_d11 = (ulong)(uint)fVar43;
  *(float *)(lVar28 + 0x160) = fVar43;
  uVar10 = *(uint *)(unaff_x19 + 0x24);
  unaff_s14 = fVar59 * fVar46 * fVar63 * fVar57;
  if (uVar10 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar28 = unaff_x19[0xe1];
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar10) goto LAB_035575f4;
    lVar28 = *(long *)(lVar28 + (long)(int)uVar10 * 8 + 0x20);
    if (lVar28 == 0) goto LAB_035574b8;
    fStack000000000000015c = *(float *)(lVar28 + 0x10c);
  }
LAB_035514b0:
  unaff_d13 = 0;
  if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
    unaff_d13 = unaff_d11;
  }
LAB_035514cc:
  unaff_x29 = (undefined8 *)&stack0x000008a0;
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
  if ((unaff_x19[0x6d] == 0) || (unaff_x22 = *(long *)(unaff_x19[0x6d] + 0x38), unaff_x22 == 0))
  goto LAB_035574b8;
  uVar10 = *unaff_x20;
  unaff_x25 = (long)(int)uVar10;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  unaff_x28 = in_stack_00000170;
  in_w8 = in_stack_000008b0;
  in_stack_000017c8 = uVar20;
  if (*(uint *)(unaff_x22 + 0x18) <= uVar10) goto LAB_035575f4;
  goto code_r0x03551598;
LAB_03554e78:
  uVar10 = uVar16 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x50), lVar29 == 0))
  goto LAB_035574b8;
  lVar41 = (long)(int)uVar10;
  lVar18 = lVar27 + lVar41 * 0x178;
  uVar12 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar39 = (long)(int)uVar12;
  lVar29 = lVar29 + lVar39 * 0x5c;
  lVar35 = *(long *)(lVar18 + 0x38);
  uVar3 = *(ushort *)(lVar18 + 0x20);
  uVar64 = *(uint *)(lVar29 + 0x3c);
  uVar32 = *(uint *)(lVar29 + 0x68);
  iVar2 = *(int *)(lVar29 + 0x20);
  iVar14 = *(int *)(lVar29 + 0x28);
  iVar15 = *(int *)(lVar29 + 0x2c);
  uVar34 = *(uint *)(lVar29 + 0x40);
  lVar18 = (long)(int)uVar34;
  fVar57 = *(float *)(lVar29 + 0x4c);
  fVar53 = *(float *)(lVar29 + 0x54);
  fVar54 = *(float *)(lVar29 + 0x58);
  fVar55 = *(float *)(lVar29 + 0x5c);
  fVar56 = *(float *)(lVar29 + 0x60);
  fVar47 = *(float *)(lVar29 + 0x6c);
  fVar58 = *(float *)(lVar29 + 0x70);
  fVar46 = *(float *)(lVar29 + 0x74);
  fVar63 = *(float *)(lVar29 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar32 < 9) {
    switch(uVar32) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar56 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar54;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar56 + fVar55 * 0.5) - fVar54 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar55 + fVar56) - fVar54;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar55 + fVar56;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar32 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar27 + 0x18) <= uVar64) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar64 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b8cc4(uVar4,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar12 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar54 <= fVar55) && (!bVar1 && uVar32 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar56;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar55 + fVar56;
        }
        goto LAB_03555088;
      }
      if (((uVar16 == 1) || (uVar12 != uVar51)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar56;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar55 + fVar56;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar56 = -fVar54;
        if (cVar24 != '\0') {
          fVar56 = fVar54;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar64) goto LAB_035575f4;
        iVar15 = (int)*(char *)(lVar27 + (long)(int)uVar64 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar54 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar54 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_03556e74:
          fVar54 = 1.0 - fVar54;
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
        fVar54 = ((fVar55 + fVar56) * fVar54) / (float)iVar15;
        if (cVar24 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar54;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar54;
        }
      }
    }
  }
  else if (uVar32 == 0x20) {
    fVar54 = fVar47 + fVar46;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar32 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar32 <= uVar10) goto LAB_035575f4;
  lVar29 = lVar27 + lVar41 * 0x178;
  fVar55 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar54 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar56 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar29 + 0x194) == '\0') goto LAB_03555938;
  iVar14 = *(int *)(lVar27 + lVar41 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0355574c;
  fVar45 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar12,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar27 + lVar41 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar45 = 1.0;
    break;
  case 1:
    fVar63 = *(float *)(lVar27 + lVar41 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar27 + lVar41 * 0x178;
      fVar46 = (in_stack_000000f8._4_4_ + fVar63) - *(float *)(in_stack_00000080 + 0x230);
      fVar63 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar46 = fVar46 - fVar47;
    *(float *)(lVar26 + 0x84) = fVar45 + (fVar63 - fVar47) / fVar46;
    *(float *)(lVar26 + 0xac) = fVar45 + (*(float *)(lVar26 + 0x98) - fVar47) / fVar46;
    *(float *)(lVar26 + 0xd4) = fVar45 + (*(float *)(lVar26 + 0xc0) - fVar47) / fVar46;
    fVar45 = fVar45 + (*(float *)(lVar26 + 0xe8) - fVar47) / fVar46;
    break;
  case 2:
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar63 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar46 = (in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar26 + 0x84) = fVar45 + fVar46 / fVar63;
    *(float *)(lVar26 + 0xac) =
         fVar45 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar45 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar45 = fVar45 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xe8)) -
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
      fVar63 = fVar63 - fVar58;
      fVar46 = fVar45 + (*(float *)(lVar26 + 0x74) - fVar58) / fVar63;
      fVar63 = fVar45 + (*(float *)(lVar26 + 0x9c) - fVar58) / fVar63;
      *(float *)(lVar26 + 0x88) = fVar46;
      *(float *)(lVar26 + 0xb0) = fVar63;
      *(float *)(lVar26 + 0xd8) = fVar46;
      *(float *)(lVar26 + 0x100) = fVar63;
      break;
    case 2:
      lVar26 = lVar27 + lVar41 * 0x178;
      fVar46 = fVar45 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar46;
      fVar63 = *(float *)(unaff_x19 + 0x9c);
      fVar47 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar46;
      fVar46 = fVar45 + (*(float *)(lVar26 + 0x9c) - fVar63) / (fVar47 - fVar63);
      *(float *)(lVar26 + 0xb0) = fVar46;
      *(float *)(lVar26 + 0x100) = fVar46;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar32 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar32 <= uVar10) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar46 = *(float *)(lVar26 + 0x15c);
    fVar63 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar46) * 0.5;
    fVar47 = fVar45 + *(float *)(lVar26 + 0x88) * fVar46 + fVar63;
    fVar45 = fVar45 + fVar63 + *(float *)(lVar26 + 0xb0) * fVar46;
    *(float *)(lVar26 + 0x84) = fVar47;
    *(float *)(lVar26 + 0xac) = fVar47;
    *(float *)(lVar26 + 0xd4) = fVar45;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar27 + lVar41 * 0x178 + 0xfc) = fVar45;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar32 <= uVar10) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar32) {
      lVar26 = lVar27 + lVar41 * 0x178;
      fVar57 = fVar57 - fVar53;
      fVar45 = (*(float *)(lVar26 + 0x74) - fVar53) / fVar57;
      fVar57 = (*(float *)(lVar26 + 0x9c) - fVar53) / fVar57;
      *(float *)(lVar26 + 0x88) = fVar45;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar32 <= uVar10) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar45 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar45;
    fVar57 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar26 + 0xb0) = fVar57;
    *(float *)(lVar26 + 0xd8) = fVar57;
    *(float *)(lVar26 + 0x100) = fVar45;
    break;
  case 3:
    if (uVar32 <= uVar10) goto LAB_035575f4;
    lVar26 = lVar27 + lVar41 * 0x178;
    fVar57 = *(float *)(lVar26 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar57) * 0.5;
    fVar45 = *(float *)(lVar26 + 0x84) / fVar57 + fVar46;
    fVar46 = fVar46 + *(float *)(lVar26 + 0xd4) / fVar57;
    *(float *)(lVar26 + 0x88) = fVar45;
    *(float *)(lVar26 + 0xb0) = fVar46;
    *(float *)(lVar26 + 0x100) = fVar45;
    *(float *)(lVar26 + 0xd8) = fVar46;
  }
  if (uVar32 <= uVar10) goto LAB_035575f4;
  lVar26 = lVar27 + lVar41 * 0x178;
  fVar45 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar41 * 0x178 + 400) & 1) != 0)) {
    fVar45 = -fVar45;
  }
  fVar46 = fVar44;
  if (((iVar13 == 2) || (fVar46 = fVar62, iVar13 == 1)) || (fVar46 = fVar44 / fVar59, iVar13 == 0))
  {
    fVar45 = fVar46 * fVar45;
  }
  lVar26 = lVar27 + lVar41 * 0x178;
  fVar57 = *(float *)(lVar26 + 0x88);
  fVar63 = *(float *)(lVar26 + 0x84);
  fVar46 = -2.1474836e+09;
  if (fVar63 != INFINITY) {
    fVar46 = (float)(int)fVar63;
  }
  fVar47 = *(float *)(lVar26 + 0xd4);
  fVar58 = *(float *)(lVar26 + 0xd8);
  fVar53 = -2.1474836e+09;
  if (fVar57 != INFINITY) {
    fVar53 = (float)(int)fVar57;
  }
  uVar48 = FUN_03591d3c(fVar63 - fVar46,fVar57 - fVar53);
  *(undefined4 *)(lVar26 + 0x84) = uVar48;
  if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
  fVar58 = fVar58 - fVar53;
  *(float *)(lVar26 + 0x88) = fVar45;
  uVar48 = FUN_03591d3c(fVar63 - fVar46,fVar58);
  *(undefined4 *)(lVar27 + lVar41 * 0x178 + 0xac) = uVar48;
  if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
  fVar47 = fVar47 - fVar46;
  *(float *)(lVar27 + lVar41 * 0x178 + 0xb0) = fVar45;
  fVar46 = (float)FUN_03591d3c(fVar47,fVar58);
  *(float *)(lVar26 + 0xd4) = fVar46;
  if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_035575f4;
  *(float *)(lVar26 + 0xd8) = fVar45;
  uVar48 = FUN_03591d3c(fVar47,fVar57 - fVar53);
  *(undefined4 *)(lVar27 + lVar41 * 0x178 + 0xfc) = uVar48;
  uVar32 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar32 <= uVar10) goto LAB_035575f4;
  *(float *)(lVar27 + lVar41 * 0x178 + 0x100) = fVar45;
LAB_0355574c:
  if (((int)uVar10 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar12 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar32 <= uVar10) goto LAB_035575f4;
      lVar29 = lVar27 + lVar41 * 0x178;
      *(ulong *)(lVar29 + 0x70) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar29 + 0x70));
      *(float *)(lVar29 + 0x78) = fVar56 + *(float *)(lVar29 + 0x78);
      *(ulong *)(lVar29 + 0x98) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar29 + 0x98));
      *(float *)(lVar29 + 0xa0) = fVar56 + *(float *)(lVar29 + 0xa0);
      *(ulong *)(lVar29 + 0xc0) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar29 + 0xc0));
      *(float *)(lVar29 + 200) = fVar56 + *(float *)(lVar29 + 200);
      *(ulong *)(lVar29 + 0xe8) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar29 + 0xe8));
      *(float *)(lVar29 + 0xf0) = fVar56 + *(float *)(lVar29 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar12 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar10 < uVar32) {
        if (*(uint *)(lVar27 + lVar41 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar29 = lVar27 + lVar41 * 0x178;
          *(ulong *)(lVar29 + 0x70) =
               CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar29 + 0x70));
          *(float *)(lVar29 + 0x78) = fVar56 + *(float *)(lVar29 + 0x78);
          *(ulong *)(lVar29 + 0x98) =
               CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar29 + 0x98));
          *(float *)(lVar29 + 0xa0) = fVar56 + *(float *)(lVar29 + 0xa0);
          *(ulong *)(lVar29 + 0xc0) =
               CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar29 + 0xc0));
          *(float *)(lVar29 + 200) = fVar56 + *(float *)(lVar29 + 200);
          *(ulong *)(lVar29 + 0xe8) =
               CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar29 + 0xe8));
          *(float *)(lVar29 + 0xf0) = fVar56 + *(float *)(lVar29 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar32 <= uVar10) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar32 = *(uint *)(lVar27 + 0x18);
  }
  puVar6 = PTR_DAT_03cbded8;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar26 = lVar27 + lVar41 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar48;
  if (uVar32 <= uVar10) goto LAB_035575f4;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar26 = lVar27 + lVar41 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar48;
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
  if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  uVar20 = *(undefined8 *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x11c) =
       CONCAT44(fVar54 + (float)((ulong)uVar20 >> 0x20),fVar55 + (float)uVar20);
  *(float *)(lVar29 + 0x124) = fVar56 + *(float *)(lVar29 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(ulong *)(lVar29 + 0x110) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0x110) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar29 + 0x110));
  *(float *)(lVar29 + 0x118) = fVar56 + *(float *)(lVar29 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(ulong *)(lVar29 + 0x128) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar29 + 0x128) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar29 + 0x128));
  *(float *)(lVar29 + 0x130) = fVar56 + *(float *)(lVar29 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
  lVar29 = lVar29 + lVar41 * 0x178;
  *(float *)(lVar29 + 0x134) = fVar55 + *(float *)(lVar29 + 0x134);
  *(ulong *)(lVar29 + 0x138) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar29 + 0x138) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar29 + 0x138));
  lVar29 = *in_stack_00000170;
  if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar32 = *(uint *)(lVar26 + 0x18);
  if (uVar32 <= uVar10) goto LAB_035575f4;
  lVar36 = lVar26 + lVar41 * 0x178;
  uVar49 = CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar36 + 0x140));
  fVar46 = fVar54 + *(float *)(lVar36 + 0x150);
  uVar50 = (ulong)(uint)fVar46;
  uVar52 = CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar46;
  *(ulong *)(lVar36 + 0x140) = uVar49;
  *(ulong *)(lVar36 + 0x148) = uVar52;
  if (uVar12 == uVar51) {
    uVar51 = *unaff_x20 - 1;
    if (uVar10 == uVar51) goto LAB_03555b44;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar36 = (long)(int)uVar51;
    lVar37 = lVar29 + lVar36 * 0x5c;
    uVar52 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar46 = fVar54 + *(float *)(lVar37 + 0x54);
    uVar49 = (ulong)(uint)fVar46;
    fVar57 = fVar55 + *(float *)(lVar37 + 0x58);
    uVar50 = (ulong)(uint)fVar57;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar46;
    *(float *)(lVar37 + 0x58) = fVar57;
    if (uVar32 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar48 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar29 = lVar29 + lVar36 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar46;
    *(undefined4 *)(lVar29 + 0x6c) = uVar48;
    lVar29 = *in_stack_00000170;
    if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar51 = *(uint *)(lVar26 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar29 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar26 = lVar26 + lVar36 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar51 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar51 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar10 == uVar51) {
      lVar29 = *in_stack_00000170;
      if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar36 = lVar26 + lVar39 * 0x5c;
      uVar52 = (ulong)(uint)*(float *)(lVar36 + 0x58);
      uVar49 = CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                        fVar54 + (float)*(undefined8 *)(lVar36 + 0x4c));
      fVar46 = fVar54 + *(float *)(lVar36 + 0x54);
      fVar55 = fVar55 + *(float *)(lVar36 + 0x58);
      uVar50 = (ulong)(uint)fVar55;
      *(ulong *)(lVar36 + 0x4c) = uVar49;
      *(float *)(lVar36 + 0x54) = fVar46;
      *(float *)(lVar36 + 0x58) = fVar55;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
      uVar48 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar46;
      *(undefined4 *)(lVar26 + 0x6c) = uVar48;
      lVar29 = *in_stack_00000170;
      if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar51 = *(uint *)(lVar26 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar29 + 0x18) <= uVar51) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar51 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar38,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar5) {
      if (((uVar16 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
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
        bVar5 = false;
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
    if (uVar10 == *unaff_x20 - 1) {
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
    uVar51 = *(uint *)(lVar29 + 0x24);
    iVar15 = *(int *)(lVar26 + 0x18);
    if (iVar15 < (int)(uVar51 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar29 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar29 = *in_stack_00000170;
      if (lVar29 == 0) goto LAB_035574b8;
    }
    lVar29 = *(long *)(lVar29 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar51) goto LAB_035575f4;
    lVar29 = lVar29 + (long)(int)uVar51 * 0x18;
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
    if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar26 = lVar26 + lVar39 * 0x5c;
    bVar5 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      fStack0000000000000158 = (float)uVar10;
    }
    if (uVar10 == *unaff_x20 - 1) {
      lVar29 = *in_stack_00000170;
      if (lVar29 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar29 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar51 = *(uint *)(lVar29 + 0x24);
      iVar14 = *(int *)(lVar26 + 0x18);
      if (iVar14 < (int)(uVar51 + 1)) {
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
      if (*(uint *)(lVar29 + 0x18) <= uVar51) goto LAB_035575f4;
      lVar29 = lVar29 + (long)(int)uVar51 * 0x18;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      *(float *)(lVar29 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar29 + 0x2c) = uVar10;
      *(uint *)(lVar29 + 0x30) = uVar16 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar29 = unaff_x19[0x6d];
      if (lVar29 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar29 + 0x50);
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_03555d68:
    bVar5 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  uVar51 = *(uint *)(lVar29 + 0x18);
  if (uVar51 <= uVar10) goto LAB_035575f4;
  if ((*(byte *)(lVar29 + lVar41 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_03555da0:
      if (uVar51 <= uVar16 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar51 = *(uint *)(lVar29 + lVar28 + -0x330);
      uVar48 = *(undefined4 *)(lVar29 + lVar28 + -0x2f8);
LAB_035562ec:
      pcVar31 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar52 = (ulong)uVar51;
      uVar49 = (ulong)(uint)_bStack0000000000000070;
      uVar50 = (ulong)_bStack0000000000000074;
      (*pcVar31)(fStack0000000000000078,uVar49,uVar50,uVar52,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar48);
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar29 = *(long *)puVar6;
      }
LAB_03556348:
      bVar9 = false;
      fVar43 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar9 = false;
    }
  }
  else {
    lVar29 = lVar29 + lVar41 * 0x178;
    iVar14 = *(int *)(lVar29 + 0x68);
    *(int *)(lVar29 + 0x16c) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
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
      if (*(uint *)(lVar39 + 0x18) <= uVar10) goto LAB_035575f4;
      fVar46 = *(float *)(lVar39 + lVar41 * 0x178 + 0x160);
      if (fVar43 <= fVar46) {
        fVar43 = fVar46;
      }
      if (fStack0000000000000100 <= ABS(fVar45)) {
        fStack0000000000000100 = ABS(fVar45);
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
      if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar57 = *(float *)(lVar29 + lVar41 * 0x178 + 0x14c);
      fVar46 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar57 = fVar57 + fVar43 * fVar46;
      if (fVar57 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar57;
      }
      uVar49 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar14;
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar29 + 0x160);
      fStack0000000000000078 = *(float *)(lVar29 + 0x11c);
      uVar50 = (ulong)(uint)fStack0000000000000078;
      bVar9 = fVar43 != 0.0;
      fVar46 = in_stack_00000088._4_4_;
      if (bVar9) {
        fVar46 = fVar43;
      }
      fVar43 = fVar46;
      uVar61 = *(undefined4 *)(lVar29 + 0x168);
      _bStack0000000000000074 = 0;
      fVar46 = fVar45;
      if (bVar9) {
        fVar46 = fStack0000000000000100;
      }
      uVar49 = (ulong)(uint)fVar46;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar46;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar10 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar41 * 0x178;
          lVar39 = *unaff_x19;
          uVar51 = *(uint *)(lVar29 + 0x128);
          uVar48 = *(undefined4 *)(lVar29 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar10 == uVar64) || ((int)uVar34 <= (int)uVar10)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        lVar39 = lVar41;
        uVar51 = uVar10;
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          lVar39 = lVar18;
          uVar51 = uVar34;
        }
        if (uVar51 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar39 * 0x178;
          uVar51 = *(uint *)(lVar29 + 0x128);
          uVar48 = *(undefined4 *)(lVar29 + 0x160);
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
        uVar51 = *(uint *)(lVar29 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar10 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_035575f4;
      uVar19 = FUN_03567ad8(uVar61,*(undefined4 *)(lVar29 + lVar28),0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0)) {
          if (uVar10 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar41 * 0x178;
            uVar52 = (ulong)*(uint *)(lVar29 + 0x128);
            uVar50 = (ulong)_bStack0000000000000074;
            uVar49 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar49,uVar50,uVar52,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar29 + 0x160));
            puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar29 = *(long *)puVar6;
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
  if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
  if (lVar35 == 0) goto LAB_035574b8;
  uVar51 = *(uint *)(lVar29 + lVar41 * 0x178 + 400);
  fVar46 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar51 >> 6 & 1) == 0) {
    if ((_in_stack_00000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar16 - 2) goto LAB_035575f4;
      uVar51 = *(uint *)(lVar29 + lVar28 + -0x330);
      fVar54 = *(float *)(lVar29 + lVar28 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar52 = (ulong)uVar51;
      uVar49 = (ulong)(uint)fStack000000000000009c;
      uVar50 = (ulong)(uint)fStack0000000000000098;
      (*pcVar31)(fStack00000000000000a0,uVar49,uVar50,uVar52,
                 fStack00000000000000a8 * fVar46 + fVar54,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _in_stack_00000128 = _in_stack_00000128 & 0xffffffff;
  }
  else {
    lVar29 = *in_stack_00000170;
    if ((lVar29 == 0) || (lVar39 = *(long *)(lVar29 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar10) goto LAB_035575f4;
    *(int *)(lVar39 + lVar41 * 0x178 + 0x174) = iVar11;
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
       ((_in_stack_00000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_in_stack_00000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar10 == uVar34) {
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
      if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_035575f4;
      lVar29 = lVar29 + lVar41 * 0x178;
      fStack0000000000000040 = *(float *)(lVar29 + 0x60);
      fStack0000000000000038 = *(float *)(lVar29 + 0x14c);
      uVar49 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar29 + 0x11c);
      uVar50 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar29 + 0x160);
      fStack000000000000009c = fVar46 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar51 = *unaff_x20;
    if (uVar51 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        if (uVar10 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar41 * 0x178;
          lVar18 = *unaff_x19;
          uVar51 = *(uint *)(lVar29 + 0x128);
          fVar54 = *(float *)(lVar29 + 0x14c);
LAB_03556654:
          pcVar31 = *(code **)(lVar18 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar10 == uVar64) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 != 0))
      {
        uVar51 = *(uint *)(lVar29 + 0x18);
        if (uVar38 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar51 <= uVar34) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar18 = lVar41;
          if (uVar51 <= uVar10) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar29 = lVar29 + lVar18 * 0x178;
        fVar54 = *(float *)(lVar29 + 0x14c);
        uVar51 = *(uint *)(lVar29 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar10 < (int)uVar51) {
      lVar29 = *in_stack_00000170;
      if ((lVar29 != 0) && (lVar39 = *(long *)(lVar29 + 0x38), lVar39 != 0)) {
        if (uVar16 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar28 + -0x108) == fStack0000000000000040) {
            fVar57 = *(float *)(lVar39 + lVar28 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar49 = (ulong)(uint)fStack0000000000000038;
            uVar19 = FUN_03567bac(fVar54 + fVar57,uVar49,0);
            if ((uVar19 & 1) != 0) {
              uVar51 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar29 = *in_stack_00000170;
            if (lVar29 == 0) goto LAB_035574b8;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 != 0) {
            uVar51 = *(uint *)(lVar29 + 0x18);
            if ((int)uVar10 <= (int)uVar34) goto FUN_035568e8;
            if (uVar34 < uVar51) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar10 < (int)uVar51) {
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
          uVar51 = *(uint *)(lVar29 + lVar28 + -0x330);
          fVar54 = *(float *)(lVar29 + lVar28 + -0x30c);
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
  uVar51 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar51 <= uVar10) goto LAB_035575f4;
  if ((*(byte *)(lVar29 + lVar41 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      uVar50 = (ulong)uStack00000000000000c0;
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar52 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar50,uVar52,fStack00000000000000d0,uVar50);
    }
LAB_035569b4:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar10) || ((int)unaff_x19[0x66] < (int)uVar12)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar29 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar10)) ||
         (!bVar1)) goto LAB_035569b4;
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar38,0);
        if ((uVar19 & 1) != 0) goto LAB_035569b4;
      }
      puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar18 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar18 = *(long *)puVar6;
      }
      if ((*in_stack_00000170 == 0) || (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
      goto LAB_035574b8;
      uVar51 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar51 <= uVar10) goto LAB_035575f4;
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
    if (uVar51 <= uVar10) goto LAB_035575f4;
    lVar29 = lVar29 + lVar41 * 0x178;
    fVar46 = *(float *)(lVar29 + 0x128);
    fVar53 = *(float *)(lVar29 + 0x188);
    uVar17 = *(undefined8 *)(lVar29 + 0x17c);
    fVar47 = *(float *)(lVar29 + 0x184);
    uVar20 = *(undefined8 *)(lVar29 + 0x184);
    fVar56 = *(float *)(lVar29 + 0x18c);
    fVar54 = *(float *)(lVar29 + 0x11c);
    fVar63 = *(float *)(lVar29 + 0x148);
    fVar57 = *(float *)(lVar29 + 0x150);
    in_stack_00000178 = uVar17;
    fStack0000000000000180 = fVar47;
    fStack0000000000000184 = fVar53;
    in_stack_00000188 = fVar56;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar29 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar29);
      }
      fVar46 = fVar46 + (float)in_stack_000017b8;
      uVar50 = (ulong)(uint)fVar46;
      fVar54 = fVar54 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar57 = fVar57 - in_stack_000017c0;
      uVar49 = (ulong)(uint)fVar57;
      fVar63 = fVar63 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar52 = (ulong)(uint)fVar63;
      if (fVar54 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar54;
      }
      if (fVar57 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar57;
      }
      if (fStack00000000000000c8 <= fVar46) {
        fStack00000000000000c8 = fVar46;
      }
      if (fStack00000000000000d0 <= fVar63) {
        fStack00000000000000d0 = fVar63;
      }
    }
    else {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar29);
      }
      fVar54 = (fVar54 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar52 = (ulong)(uint)fVar54;
      if (fVar57 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar57;
      }
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar50 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar63) {
        fStack00000000000000d0 = fVar63;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar50,uVar52,fStack00000000000000d0,uVar50);
      fStack00000000000000dc = fVar57 - fVar56;
      fStack00000000000000c8 = fVar46 + fVar47;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar63 + fVar53;
      fStack00000000000000d8 = fVar54;
      in_stack_000017b0 = uVar17;
      in_stack_000017b8 = uVar20;
      in_stack_000017c0 = fVar56;
    }
    if (((*unaff_x20 == 1) || (uVar10 == uVar64)) || (((int)uVar34 <= (int)uVar10 || (!bVar1)))) {
      uVar50 = (ulong)uStack00000000000000c0;
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar52 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar50,uVar52,fStack00000000000000d0,uVar50);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar10 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _in_stack_00000128 = CONCAT44(fStack000000000000012c,(int)in_stack_00000128 + 1);
  bVar1 = (int)uVar10 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar51 = uVar12;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar27 = *in_stack_00000170;
  if (lVar27 != 0) {
    iVar11 = uVar12 + 1;
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar27 + 0x18) = uVar10;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar11;
    if ((int)uVar10 < 1 || fStack00000000000000d4 == 0.0) {
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
      uVar10 = FUN_03911ee4(lVar27,0);
      FUN_03911f20(lVar27,uVar10 | 0x19,0);
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
                              uVar10 = FUN_0390ed3c(unaff_x19[0xe4],0);
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
                                    FUN_0390eec8(uVar20,uVar49,uVar50,uVar52,lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar28 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390ed78(lVar27,uVar10 & 1,0);
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


