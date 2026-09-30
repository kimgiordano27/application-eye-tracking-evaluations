/*
FUNCTION_NAME: UnityEngine.Animator$$get_animatePhysics
ENTRY_POINT: 03553f00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 193
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_Animator__get_animatePhysics(undefined1 param_1 [16],ulong param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  undefined1 in_CY;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  uint in_w8;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  float *pfVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar40;
  uint unaff_w22;
  ulong unaff_x24;
  long *plVar41;
  long unaff_x26;
  uint unaff_w27;
  long lVar42;
  long *unaff_x28;
  uint uVar43;
  undefined8 *unaff_x29;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  ulong uVar52;
  ulong uVar53;
  uint uVar54;
  ulong uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulong unaff_d13;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
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
  int iStack0000000000000128;
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
  uint in_stack_000017dc;
  
code_r0x03553f00:
  iVar17 = (int)unaff_x24;
  if ((((((bool)in_CY) && (0xfd < in_w8 - 0x1101)) && (0x1d < in_w8 - 0xa961)) ||
      (uVar23 = FUN_03597a54(0), in_w8 = in_stack_000017dc, (uVar23 & 1) != 0)) &&
     (((0xed < in_w8 - 0xff01 && (0x1d < in_w8 - 0xfe31)) &&
      ((0x717d < in_w8 - 0x2e81 && (0x1fd < in_w8 - 0xf901)))))) goto LAB_03553f78;
  lVar27 = FUN_035978e8(0);
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_035574b8;
  uVar14 = FUN_0219c130(*(long *)(lVar27 + 0x10),&stack0x000008a0,
                        *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
  if ((int)*unaff_x20 < (int)in_stack_00000088._4_4_) {
    lVar27 = FUN_035978e8(0);
    if (((lVar27 == 0) || (*unaff_x28 == 0)) || (lVar30 = *(long *)(*unaff_x28 + 0x38), lVar30 == 0)
       ) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar27 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar30 + (long)(int)(*unaff_x20 + 1) * (long)iVar17 + 0x20);
    uVar23 = FUN_0219c130(*(long *)(lVar27 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar14 & 1) != 0) {
LAB_035541dc:
      if ((uint)unaff_x26 != unaff_w22 || ((bStack0000000000000070 ^ 0xff) & 1) != 0)
      goto LAB_035542ac;
      if (unaff_w27 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    if ((uVar23 & 1) != 0) {
      if ((bStack0000000000000070 & 1) != 0) {
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
        goto LAB_03554264;
      }
      goto LAB_035542a8;
    }
  }
  else {
    in_stack_000008a0 = in_stack_000017dc;
    if ((uVar14 & 1) != 0) goto LAB_035541dc;
  }
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
LAB_035542a8:
  bStack0000000000000070 = 0;
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  uVar14 = in_stack_000017dc;
LAB_03550bd0:
  fVar57 = (float)unaff_d13;
  in_stack_000017a8 = in_stack_000017a8 + 1;
  lVar27 = unaff_x19[0x8f];
  if (lVar27 != 0) {
    if ((int)in_stack_000017a8 < (int)*(uint *)(lVar27 + 0x18)) {
      if (*(uint *)(lVar27 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      in_stack_000017dc = *(uint *)(lVar27 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
      if (in_stack_000017dc == 0) goto LAB_0355459c;
      if (5 < in_stack_00000168._4_4_) {
        uVar19 = FUN_0276793c(&stack0x000017dc,0);
        uVar20 = FUN_0276793c(&stack0x000017a8,0);
        uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar19,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar20,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367ae18(uVar19,0);
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017dc == 0x3c))
      goto code_r0x0355094c;
      if ((*unaff_x28 != 0) && (lVar27 = *(long *)(*unaff_x28 + 0x38), lVar27 != 0)) {
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
    fVar57 = (float)param_2;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar57 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar67 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar57 < fVar67) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar44 = (*(float *)((long)unaff_x19 + 0x23c) - fVar57) * 0.5;
        if (fVar44 <= DAT_00d38b84) {
          fVar44 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar57;
        fVar44 = (fVar57 + fVar44) * 20.0 + 0.5;
        fVar57 = DAT_00d38e60;
        if (fVar44 != INFINITY) {
          fVar57 = (float)(int)fVar44 / 20.0;
        }
        if (fVar67 <= fVar57) {
          fVar57 = fVar67;
        }
        goto LAB_03554658;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar9 = PTR_DAT_03cbdf88;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar19 = FUN_0276793c(_fStack0000000000000038,0);
      uVar20 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar19,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar20,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar19,0);
    }
    puVar10 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar14 == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar27 = *(long *)puVar10;
    }
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
    lVar27 = **(long **)(lVar27 + 0xb8);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar17 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x60), lVar27 == 0))
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
        uVar19 = *(undefined8 *)(lVar27 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar30 = *(long *)(*unaff_x28 + 0x58), lVar30 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar57 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar57 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x2c);
        fVar57 = (0.0 - fVar57) - fStack0000000000000020;
      }
      else if (iVar13 == 0x200) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar27 + 0x24) +
                          (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x58), lVar27 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar27 = lVar27 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar57 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar13 != 0x400) goto LAB_03554c4c;
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_035575f4;
        uVar19 = *(undefined8 *)(lVar27 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar30 = *(long *)(*unaff_x28 + 0x58), lVar30 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x20);
        fVar57 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar57);
    }
    else if (iVar13 == 0x800) {
      if (lVar27 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
      fVar57 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar27 + 0x24) +
                            (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar57;
    }
    else {
      if (iVar13 == 0x1000) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
          uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar27 + 0x24) +
                            (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          fVar57 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_03554c3c;
        }
        goto LAB_035575f4;
      }
      if (iVar13 == 0x2000) {
        if (lVar27 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_035575f4;
        fVar57 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + fVar57);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    uVar19 = FUN_03912334(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar9);
    }
    uVar23 = FUN_036d35a8(uVar19,0,0);
    lVar27 = FUN_0357f060();
    if (lVar27 == 0) goto LAB_035574b8;
    FUN_036df824(lVar27,0);
    *(float *)(unaff_x19 + 0xe2) = fVar57;
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    fVar67 = (float)FUN_03911954(unaff_x19[0xe5],0);
    uVar66 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar9 = OVRPlugin_Mesh_TypeInfo;
    lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar27 = *(long *)puVar9;
    }
    puVar28 = *(undefined4 **)(lVar27 + 0xb8);
    uVar52 = (ulong)(uint)puVar28[1];
    uVar53 = (ulong)(uint)puVar28[2];
    uVar55 = (ulong)(uint)puVar28[3];
    FUN_035683a4(*puVar28,uVar52,uVar53,uVar55,&stack0x000017b0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar27 = *unaff_x28;
    if (lVar27 == 0) goto LAB_035574b8;
    uVar14 = *unaff_x20;
    if ((int)uVar14 < 1) {
      fStack00000000000000d4 = 0.0;
      iVar17 = 0;
      goto LAB_03556f00;
    }
    lVar27 = *(long *)(lVar27 + 0x38);
    fVar57 = ABS(fVar57);
    fVar44 = 1.0;
    if ((uVar23 & 1) == 0) {
      fVar44 = fVar57;
    }
    if (lVar27 == 0) goto LAB_035574b8;
    bVar12 = false;
    bVar11 = false;
    _iStack0000000000000128 = 0;
    bVar8 = false;
    fStack00000000000000d4 = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000158 = 0.0;
    in_stack_00000068._4_4_ = 0;
    lVar30 = 0x2e0;
    fVar46 = 0.0;
    fVar63 = 0.0;
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
    uVar54 = 0;
    goto LAB_03554e78;
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar23 = FUN_03586568();
  if (((uVar23 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, uVar14 = in_stack_000017dc,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = (long)(int)uVar14;
  cVar26 = *(char *)(lVar27 + lVar42 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar30 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar14) {
    in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar27 + lVar42 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
      uVar14 = *unaff_x20;
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
      bVar8 = true;
      *(int *)(lVar27 + (long)(int)uVar14 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar14 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar21 = FUN_03568ac0(*unaff_x21,0), lVar21 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar21,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
      *(ulong *)(lVar27 + lVar42 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar14 = *(uint *)((long)unaff_x19 + 0x494);
      bVar8 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = false;
  }
  if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)uVar14 * (long)iVar17;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *unaff_x20 = uVar14 + 1;
    unaff_x28 = in_stack_00000170;
    uVar14 = in_stack_000017dc;
    goto LAB_03550bd0;
  }
  iVar13 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar13 == 0) {
    uVar14 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar14 >> 4 & 1) == 0) {
      if ((uVar14 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar14 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar23 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b8410(in_stack_000017dc,0);
            in_stack_000017dc = uVar14 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar23 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_026b8594(in_stack_000017dc,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar23 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar14 & 0xffff;
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
    unaff_x28 = in_stack_00000170;
    uVar14 = in_stack_000017dc;
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
    uVar18 = *unaff_x20;
    uVar14 = *(uint *)(lVar27 + 0x18);
    if (uVar14 <= uVar18) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar27 + (long)(int)uVar18 * unaff_x24 + 0x58);
    if (bVar8) {
      lVar30 = unaff_x19[0x8f];
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar30 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar14 <= uVar18 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar67 = *(float *)(lVar27 + (long)(int)(uVar18 - 1) * (long)iVar17 + 0x60);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar27 = *unaff_x21;
    }
    else {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar67 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar27 = unaff_x19[0x20];
    }
    if (lVar27 == 0) goto LAB_035574b8;
    fVar63 = (float)FUN_03776960(lVar27 + 0x50,0);
    fVar44 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar44 = 1.0;
    }
    fVar62 = 0.0;
    fVar46 = 0.0;
    if (!(bool)(bVar8 & in_stack_000017dc == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar62 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar27 = unaff_x19[0xc9];
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
    fVar45 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = *(float *)(lVar27 + 0x2c);
    fVar57 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar64 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar49 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar27 = unaff_x19[0x6d];
    if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar44 = ((fStack0000000000000158 * fVar67) / (float)iVar13) * fVar63 * fVar44;
    fVar57 = fVar44 * fVar45 * fVar47 * fVar57;
    *(float *)(lVar30 + 0x160) = fVar57;
    uVar14 = *(uint *)(unaff_x19 + 0x24);
    fVar48 = fVar44 * fVar64 * fVar49 * fVar48;
    if (uVar14 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar30 = unaff_x19[0xe1];
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar30 + 0x10c);
    }
LAB_035514b0:
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar67 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar67 = fVar57;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar13 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar13 == 1) {
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
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar27 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar42 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar42 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar13 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar44 = (float)FUN_03776960(&stack0x00001720,0);
      fVar67 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar67 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar67 = (fVar57 / (float)iVar13) * fVar44 * fVar67;
      iVar13 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      if (iVar13 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar62 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar62 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar63 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar27 + 0x20),0);
        fVar45 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        fVar64 = *(float *)(lVar27 + 0x2c);
        fVar47 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar49 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar60 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar48 = fVar67 * fVar49 * fVar60 * fVar48;
        fVar62 = (fVar57 / (float)iVar13) * fVar44 * fVar62;
        fVar57 = fVar62 * (fVar63 / fVar45) * fVar64 * fVar47;
        fVar62 = fVar62 / fVar57;
        fVar46 = fVar62 * fVar46;
        fVar67 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar62 = fVar62 * fVar67;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_035574b8;
        fVar62 = *(float *)(lVar27 + 0x2c);
        fVar63 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar63 = 1.0;
        }
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar64 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar48 = fVar67 * fVar47 * fVar64 * fVar48;
        fVar57 = (fVar57 / (float)iVar13) * fVar44 * fVar63 * fVar62 * fVar45;
        fVar62 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar27;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar27);
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar27 + 0x2c) = 1;
      *(float *)(lVar27 + 0x160) = fVar57;
      *(long *)(lVar27 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar27 = *in_stack_00000170;
      if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar42 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar30;
      goto LAB_035514b0;
    }
    lVar27 = *in_stack_00000170;
    fVar48 = 0.0;
    fVar67 = fVar48;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar67 = fVar57;
    }
    if (lVar27 == 0) goto LAB_035574b8;
    fVar46 = 0.0;
    fVar62 = 0.0;
  }
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
  uVar14 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
  uVar20 = unaff_x29[1];
  uVar19 = *unaff_x29;
  lVar27 = lVar27 + (long)(int)uVar14 * unaff_x24;
  *(undefined4 *)(lVar27 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar27 + 0x184) = uVar20;
  *(undefined8 *)(lVar27 + 0x17c) = uVar19;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar27,0);
  puVar9 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x29[0x1df] = in_stack_00000c20;
  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b63d8(in_stack_000017dc,0);
    unaff_w27 = uVar14 & 1;
  }
  else {
    unaff_w27 = 0;
  }
  fVar44 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar45 = 0.0;
    fVar63 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar18 = *unaff_x20;
    uVar14 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar18 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar18 + 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar18 + 1) * (long)iVar17 + 0x30);
      if ((((lVar27 == 0) || (*unaff_x21 == 0)) ||
          (lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0)) ||
         (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar14 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar23 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar66 = 0;
      if ((uVar23 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar45 = 0.0;
        fVar63 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar66 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar63 = *(float *)(in_stack_000016f8 + 0x14);
        fVar45 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar44 = 0.0;
        }
      }
      uVar18 = *unaff_x20;
    }
    else {
      uVar66 = 0;
      fStack000000000000012c = 0.0;
      fVar45 = 0.0;
      fVar63 = 0.0;
    }
    if (0 < (int)uVar18) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar18 - 1) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + (ulong)(uVar18 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar27 == 0) || (*unaff_x21 == 0)) ||
         ((lVar30 = *(long *)(*unaff_x21 + 0x128), lVar30 == 0 ||
          (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar27 + 0x28) | uVar14 << 0x10;
      uVar23 = FUN_0219f8b8(lVar30,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar23 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar63 = (float)FUN_03571cb4(fVar63,fVar45,fStack000000000000012c,uVar66,
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
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar64 = *(float *)(unaff_x19 + 200);
    fVar47 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar64 = fVar64 - fVar67 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar64;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar64 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar64 = *(float *)(unaff_x19 + 0x56);
  fVar47 = 0.0;
  if (fVar64 != 0.0) {
    fVar47 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar49 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar47 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar64 * 0.5 - fVar67 * (fVar47 * 0.5 + fVar49));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar47;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar27 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar23 = FUN_036cee6c(lVar27,0,0);
    fVar49 = 0.0;
    if ((uVar23 & 1) != 0) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar23 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar49 = 0.0;
      if ((uVar23 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        fVar64 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar60 = *(float *)(*unaff_x21 + 0x1b0);
        fVar49 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar49 = fVar49 * fVar64 * fVar60 * 0.25;
        if (fVar64 < fStack000000000000015c + fVar49) {
          fStack000000000000015c = fVar64 - fVar49;
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
    uVar23 = FUN_036cee6c(lVar27,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar23 & 1) != 0) {
      lVar27 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar27 == 0) goto LAB_035574b8;
      uVar23 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar23 & 1) != 0) {
        lVar27 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar27 == 0) goto LAB_035574b8;
        uVar23 = FUN_03699d3c(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar23 & 1) != 0) {
          lVar27 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar27 == 0) goto LAB_035574b8;
          fVar64 = (float)FUN_0369e060(lVar27,*(undefined4 *)
                                               (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar60 = *(float *)(*unaff_x21 + 0x1a8);
          fVar49 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
          fVar49 = fVar49 * fVar64 * fVar60 * 0.25;
          if (fVar64 < fStack000000000000015c + fVar49) {
            fStack000000000000015c = fVar64 - fVar49;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar49 = 0.0;
  }
FUN_03551b84:
  fVar64 = *(float *)(unaff_x19 + 200);
  fVar60 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar64 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar67 * (fVar63 + ((fVar60 - fStack000000000000015c) - fVar49));
  fVar63 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar68 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar48 + fVar67 * (fVar45 + fStack000000000000015c + fVar63)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar63 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar63 = fVar68 - fVar67 * (fStack000000000000015c + fStack000000000000015c + fVar63);
  fVar45 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar60 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar67 * (fVar49 + fVar49 +
                             fStack000000000000015c + fStack000000000000015c + fVar45);
  fStack0000000000000104 = fVar64;
  fVar45 = fVar60;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar59 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar58 = fVar59 * fVar67 * (fVar49 + fStack000000000000015c + fVar45);
    fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar56 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar68 = fVar68 + 0.0;
    fVar63 = fVar63 + 0.0;
    fVar59 = fVar59 * fVar67 * (((fVar45 - fVar56) - fStack000000000000015c) - fVar49);
    fVar56 = fVar64 + fVar58;
    fVar45 = fVar60 + fVar59;
    fVar50 = (fVar58 - fVar59) * 0.5;
    fVar64 = (fVar64 + fVar59) - fVar50;
    fVar60 = (fVar60 + fVar58) - fVar50;
    fStack0000000000000104 = fVar56 - fVar50;
    fVar45 = fVar45 - fVar50;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar50 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar63;
    fVar56 = fVar68;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar61 = (fVar60 + fVar64) * 0.5;
    fVar65 = (fVar63 + fVar68) * 0.5;
    fVar68 = fVar68 - fVar65;
    fStack0000000000000100 = 0.0;
    fVar56 = fVar68;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar61,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar61 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar59 = fVar63 - fVar65;
    fStack0000000000000114 = 0.0;
    fVar63 = fVar59;
    fVar64 = (float)FUN_036bdd2c(fVar64 - fVar61,_fStack0000000000000078,0);
    fVar64 = fVar61 + fVar64;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar63 = fVar65 + fVar63;
    fVar58 = 0.0;
    fVar60 = (float)FUN_036bdd2c(fVar60 - fVar61,_fStack0000000000000078,0);
    fVar60 = fVar61 + fVar60;
    fVar68 = fVar65 + fVar68;
    fVar58 = fVar58 + 0.0;
    fVar50 = 0.0;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar61,_fStack0000000000000078,0);
    fVar45 = fVar61 + fVar45;
    fVar50 = fVar50 + 0.0;
    fVar59 = fVar65 + fVar59;
    fVar56 = fVar65 + fVar56;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar27 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar67;
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x11c) = fVar64;
  *(float *)(lVar27 + 0x120) = fVar63;
  *(float *)(lVar27 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x114) = fVar56;
  *(float *)(lVar27 + 0x110) = fStack0000000000000104;
  *(float *)(lVar27 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x128) = fVar60;
  *(float *)(lVar27 + 300) = fVar68;
  *(float *)(lVar27 + 0x130) = fVar58;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar27 + 0x134) = fVar45;
  *(float *)(lVar27 + 0x138) = fVar59;
  *(float *)(lVar27 + 0x13c) = fVar50;
  if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  unaff_x26 = (long)(int)uVar14;
  if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar30 = lVar27 + unaff_x26 * unaff_x24;
  *(int *)(lVar30 + 0x140) = (int)unaff_x19[200];
  fVar68 = *(float *)(unaff_x19 + 0x9b);
  param_2 = (ulong)(uint)fVar68;
  fVar45 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar30 + 0x15c) = (fVar60 - fVar64) / (fVar56 - fVar63);
  *(float *)(lVar30 + 0x14c) = (fVar48 - fVar68) + fVar45;
  fVar46 = fVar46 * fVar67;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar46 = fVar46 / fStack0000000000000158;
    fVar62 = (fVar62 * fVar67) / fStack0000000000000158;
  }
  else {
    fVar62 = fVar62 * fVar67;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar14 == unaff_w22)) {
    fVar62 = fVar45 + fVar62;
    fVar46 = fVar45 + fVar46;
    fVar64 = fVar62;
    fVar63 = fVar46;
    if (fVar45 != 0.0) {
      fVar63 = (fVar46 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
      fVar64 = (fVar62 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar63 <= fVar46) {
        fVar63 = fVar46;
      }
      if (fVar62 <= fVar64) {
        fVar64 = fVar62;
      }
    }
    lVar27 = lVar27 + unaff_x26 * unaff_x24;
    fVar45 = fVar63;
    if (fVar63 <= *(float *)(unaff_x19 + 0x99)) {
      fVar45 = *(float *)(unaff_x19 + 0x99);
    }
    fVar48 = fVar64;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar64) {
      fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar48;
    *(float *)(unaff_x19 + 0x99) = fVar45;
    *(float *)(lVar27 + 0x154) = fVar63;
    *(float *)(lVar27 + 0x158) = fVar64;
    *(float *)(lVar27 + 0x148) = fVar46 - fVar68;
    *(float *)(unaff_x19 + 0x98) = fVar46 - fVar68;
    *(float *)(lVar27 + 0x150) = fVar62 - fVar68;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar62 - fVar68;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar45;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar63 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar62 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar67 * fVar62) / fStack0000000000000158;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar63 <= fStack0000000000000158) {
        fVar63 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar63;
    }
    if ((float)param_2 == 0.0) {
      fVar63 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar46) {
        fVar63 = fVar46;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar63;
    }
  }
  else {
    fVar63 = *(float *)(unaff_x19 + 0x99);
    lVar27 = lVar27 + unaff_x26 * unaff_x24;
    *(float *)(lVar27 + 0x154) = fVar63;
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar63 = fVar63 - fVar68;
    *(float *)(lVar27 + 0x148) = fVar63;
    *(float *)(lVar27 + 0x158) = fVar46;
    *(float *)(unaff_x19 + 0x98) = fVar63;
    fVar46 = fVar46 - fVar68;
    *(float *)(lVar27 + 0x150) = fVar46;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
  }
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  uVar18 = *unaff_x20;
  if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_035575f4;
  lVar30 = lVar30 + (long)(int)uVar18 * unaff_x24;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  uVar54 = *(uint *)(unaff_x19 + 0x4f);
  uVar14 = in_stack_000017dc;
  if (((in_stack_000017dc == 9) ||
      ((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)))) ||
     (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar30 + 0x194) = 1;
    pfVar31 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000a8;
    if (bVar8) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar27 + 0x60);
      pfVar31 = (float *)(lVar27 + 100);
    }
    fVar46 = *pfVar33;
    fVar62 = *pfVar31;
    fVar63 = *(float *)(unaff_x19 + 0x6c);
    fVar45 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar46) - fVar62;
    bVar11 = true;
    if ((fVar63 <= in_stack_000000f8._4_4_) && (bVar11 = false, !NAN(fVar63))) {
      bVar11 = fVar63 == -1.0;
    }
    if (!bVar11) {
      in_stack_000000f8._4_4_ = fVar63;
    }
    fVar63 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar63 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar64 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      fVar57 = fVar67;
    }
    fVar68 = (float)param_2;
    fVar60 = 0.0;
    if ((0.0 < fVar68) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar60 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar18 = *unaff_x20;
    fVar60 = (*(float *)(unaff_x19 + 0x97) - (fVar48 - fVar68)) + fVar60;
    if (fStack00000000000000c4 < fVar60) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar19 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar56 = *(float *)(unaff_x19 + 0x59);
        if (((fVar56 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar68)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar60) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar57 <= fVar56) {
            fVar57 = fVar56;
          }
          goto LAB_03554b48;
        }
        fVar68 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar60 = *(float *)(unaff_x19 + 0x4a);
        param_2 = (ulong)(uint)fVar60;
        if ((fVar60 < fVar68) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = (fVar68 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar57 <= DAT_00d38b84) {
            fVar57 = DAT_00d38b84;
          }
          fVar67 = (fVar68 - fVar57) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar68;
          fVar57 = DAT_00d38e60;
          if (fVar67 != INFINITY) {
            fVar57 = (float)(int)fVar67 / 20.0;
          }
          if (fVar57 <= fVar60) {
            fVar57 = fVar60;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
        }
        lVar30 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 == 0) goto LAB_03554580;
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
        iVar13 = FUN_0358c15c();
        goto LAB_035529e8;
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
        if ((uVar18 == 0) || ((int)in_stack_000017a8 < 0)) {
          in_stack_000017a8 = 0xffffffff;
          *unaff_x20 = 0;
          in_stack_000017c8 = uVar19;
UnityEngine_AnimatorStateInfo__get_fullPathHash:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          unaff_x28 = in_stack_00000170;
          uVar14 = in_stack_000017dc;
          goto LAB_03550bd0;
        }
        fVar57 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (fVar57 - fVar48 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_2 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar27 = NEON_rev64(param_2,4);
          unaff_x19[0x99] = lVar27;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        break;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar23 = FUN_036cee6c(lVar27,0,0);
        if ((uVar23 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar27 = unaff_x19[0x5d];
          if (lVar27 == 0) goto LAB_035574b8;
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto UnityEngine_AnimationClip__get_hasMotionCurves;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar63 = ABS(fVar45) + fVar63 * (1.0 - fVar64) * fVar57;
    fVar57 = 1.0;
    if ((uVar54 & 0x18) != 0) {
      fVar57 = DAT_00d38acc;
    }
    fVar45 = fVar57 * in_stack_000000f8._4_4_;
    if (fVar45 < fVar63) {
      param_2 = (ulong)(uint)fVar49;
      if (((char)unaff_x19[0x5b] != '\0') && (uVar18 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar27 = *in_stack_00000170;
          if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar45 = *(float *)(unaff_x19 + 0x9b);
          fVar64 = 0.0;
          if ((0.0 < fVar45) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar64 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar64 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar30 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar64 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar27 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar27 == 0) goto LAB_035574b8;
          fVar45 = *(float *)(unaff_x19 + 0x9b);
          fVar64 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_035574b8;
        uVar7 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar27 + 0x18) <= uVar7) ||
           (uVar43 = uVar7 - 1, *(uint *)(lVar27 + 0x18) <= uVar43)) goto LAB_035575f4;
        param_2 = (ulong)(uint)(fVar64 + *(float *)(unaff_x19 + 0x97));
        fVar48 = (fVar64 + *(float *)(unaff_x19 + 0x97) + fVar45) -
                 *(float *)(lVar27 + (long)(int)uVar7 * unaff_x24 + 0x158);
        if (((bStack0000000000000074 & 1) == 0 &&
             *(short *)(lVar27 + (long)(int)uVar43 * (long)iVar17 + 0x20) == 0xad) &&
           ((fVar48 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack0000000000000074 = 0;
          in_stack_000017c8 = CONCAT44(0x2d,uVar43);
          *unaff_x20 = uVar43;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar27 + (long)(int)uVar7 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar64 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar45 <= fVar64) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar64 = *(float *)((long)unaff_x19 + 0x1e4);
            param_2 = (ulong)(uint)fVar64;
            fVar45 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar64 <= fVar45) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_03552d44;
LAB_03557594:
            fVar57 = (fVar64 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar57 <= DAT_00d38b84) {
              fVar57 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar64;
            fVar64 = fVar64 - fVar57;
LAB_03557524:
            fVar67 = fVar64 * 20.0 + 0.5;
            fVar57 = DAT_00d38e60;
            if (fVar67 != INFINITY) {
              fVar57 = (float)(int)fVar67 / 20.0;
            }
            if (fVar57 <= fVar45) {
              fVar57 = fVar45;
            }
LAB_03554658:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar57;
            return;
          }
LAB_03557558:
          fVar67 = fVar63;
          if (0.0 < fVar64) {
            fVar67 = fVar63 / (1.0 - fVar64);
          }
          fVar64 = fVar64 + (fVar63 - fVar57 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar67;
LAB_035574e8:
          if (fVar45 <= fVar64) {
            fVar64 = fVar45;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar64;
          return;
        }
LAB_03552d44:
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
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
          uVar7 = *unaff_x20 - 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar7) goto LAB_035575f4;
          iStack0000000000000034 = iVar13;
          if (*(short *)(lVar27 + (long)(int)uVar7 * (long)iVar17 + 0x20) == 0xad) {
            bStack0000000000000074 = 0;
            in_stack_000017c8 = CONCAT44(0x2d,uVar7);
            *unaff_x20 = uVar7;
            unaff_x28 = in_stack_00000170;
            in_stack_000017a8 = in_stack_000017a8 - 1;
            goto LAB_03550bd0;
          }
        }
        if (fVar48 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
          param_2 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar44,
                       in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
          bStack0000000000000070 = 1;
          bStack0000000000000074 = 0;
          in_stack_00000068._4_4_ = 1;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar45 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar45 = *(float *)(unaff_x19 + 0x59);
          if ((fVar45 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar57 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar48) / (float)((int)unaff_x19[0x95] + 1)) /
                     fStack0000000000000058;
            if (fVar57 <= fVar45) {
              fVar57 = fVar45;
            }
LAB_03554b48:
            *(float *)((long)unaff_x19 + 700) = fVar57;
            return;
          }
          fVar64 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar64 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557558;
          fVar64 = *(float *)((long)unaff_x19 + 0x1e4);
          param_2 = (ulong)(uint)fVar64;
          fVar45 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar45 < fVar64) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
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
          piVar22 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar22 == 0) {
            bStack0000000000000074 = 0;
LAB_03554580:
            in_stack_000017c8 = DAT_00d37868;
            unaff_x29 = (undefined8 *)&stack0x000008a0;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            unaff_x28 = in_stack_00000170;
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
          iVar13 = FUN_0358c15c();
          bStack0000000000000074 = 0;
LAB_035529e8:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar15;
          in_stack_000017c8 = CONCAT44(0x2026,iVar15);
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = iVar13 - 1;
          goto LAB_03550bd0;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          bStack0000000000000074 = 0;
UnityEngine_AnimationClip__get_hasMotionCurves:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          in_stack_000017c8 = CONCAT44(3,uVar18);
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          param_2 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar44,
                       in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
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
          uVar23 = FUN_036cee6c(lVar27,0,0);
          if ((uVar23 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5d];
            uVar19 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar41 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
            lVar27 = unaff_x19[0x5d];
            if (lVar27 == 0) goto LAB_035574b8;
            *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar41 = (long *)unaff_x19[0x5d];
            if (plVar41 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bStack0000000000000074 = 0;
LAB_03552b00:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        default:
          bStack0000000000000074 = 0;
          goto LAB_03552f54;
        }
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar64 < fVar45) {
          fVar67 = fVar63 / (1.0 - fVar64);
          if (fVar64 <= 0.0) {
            fVar67 = fVar63;
          }
          fVar64 = fVar64 + (fVar63 - fVar57 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar67;
          goto LAB_035574e8;
        }
        fVar64 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar45 = *(float *)(unaff_x19 + 0x4a);
        if (fVar45 < fVar64) {
          fVar57 = (fVar64 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar57 <= DAT_00d38b84) {
            fVar57 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar64;
          fVar64 = fVar64 - fVar57;
          goto LAB_03557524;
        }
      }
      iVar13 = (int)unaff_x19[0x5c];
      if (iVar13 == 1) {
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
        }
        lVar30 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar27 + 0x135) & 1) == 0) {
          lVar27 = FUN_01a46ff8(lVar27);
        }
        piVar22 = (int *)thunk_FUN_01a59484(lVar30 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar27 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar22 == 0) goto LAB_03554580;
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar13 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar23 = FUN_036cee6c(lVar27,0,0);
        if ((uVar23 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar27 = unaff_x19[0x5d];
          if (lVar27 == 0) goto LAB_035574b8;
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_03552b00;
      }
      if (iVar13 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_03552550;
      }
    }
LAB_03552f54:
    if (in_stack_000017dc == 0xad) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017dc == 9) {
        lVar27 = *in_stack_00000170;
        if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
        uVar18 = *unaff_x20;
        if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_035575f4;
        *(undefined1 *)(lVar30 + (long)(int)uVar18 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar18;
        lVar30 = *(long *)(lVar27 + 0x50);
        if (lVar30 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar45,fVar49);
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
      if ((unaff_x19[0x6d] == 0) || (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar27 + 0x60) = fVar46;
      *(float *)(lVar27 + 100) = fVar62;
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar63 = (float)param_2;
      fVar57 = 0.0;
      if ((0.0 < fVar63) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_2 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar63)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar27 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar23 = FUN_036cee6c(lVar27,0,0);
        if ((uVar23 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar27 = unaff_x19[0x5d];
          if (lVar27 == 0) goto LAB_035574b8;
          *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
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
        if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar23 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    }
  }
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (!bVar8)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar57 = *(float *)(unaff_x19 + 0x3d);
    iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar27 = unaff_x19[0xca];
    fVar63 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar63 = 1.0;
    }
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
    fVar45 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = *(float *)(lVar27 + 0x2c);
    fVar62 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
    fVar64 = *_fStack00000000000000a8;
    fVar62 = fVar45 * (fVar57 / (float)iVar13) * fVar46 * fVar63 * fVar48 * fVar62;
    fVar57 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x38), lVar27 == 0))
      goto LAB_035574b8;
      uVar18 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar63 = *(float *)(lVar27 + (long)(int)uVar18 * (long)iVar17 + 0x60);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar45 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar27 = unaff_x19[0xca];
      fVar46 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar46 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_035574b8;
      fVar48 = *(float *)((long)unaff_x19 + 0x404);
      fVar49 = *(float *)(lVar27 + 0x2c);
      fVar62 = (float)FUN_03776ea8(*(long *)(lVar27 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar27 = *(long *)(*in_stack_00000170 + 0x50), lVar27 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar64 = *(float *)(lVar27 + 0x60);
      fVar57 = *(float *)(lVar27 + 100);
      fVar62 = fVar48 * (fVar63 / (float)iVar13) * fVar45 * fVar46 * fVar49 * fVar62;
    }
    fVar45 = *(float *)(unaff_x19 + 0x9b);
    fVar63 = 0.0;
    fVar46 = 0.0;
    if ((0.0 < fVar45) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar49 = *(float *)(unaff_x19 + 0x97);
    fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar48 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar27,0);
      fVar63 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar68 = *(float *)(unaff_x19 + 0x6c);
    fVar57 = (fStack000000000000009c - fVar64) - fVar57;
    bVar11 = true;
    if ((fVar68 <= fVar57) && (bVar11 = false, !NAN(fVar68))) {
      bVar11 = fVar68 == -1.0;
    }
    if (!bVar11) {
      fVar57 = fVar68;
    }
    fVar64 = 1.0;
    if ((uVar54 & 0x18) != 0) {
      fVar64 = DAT_00d38acc;
    }
    if (((fVar49 - (fVar60 - fVar45)) + fVar46 < fStack00000000000000c4) &&
       (ABS(fVar48) + fVar62 * fVar63 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar64 * fVar57)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar27 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar27 + 0x788),0x378);
      FUN_0209b210(lVar27 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar27 = *in_stack_00000170;
  if (lVar27 == 0) goto LAB_035574b8;
  lVar30 = *(long *)(lVar27 + 0x38);
  unaff_d13 = (ulong)(uint)fVar67;
  if (lVar30 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar18 = *(uint *)(unaff_x19 + 0x95);
  lVar30 = lVar30 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar30 + 100) = uVar18;
  *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar8) ||
     ((in_stack_000017dc < 0xe && ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) != 0)))) {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_035575f4;
    if (*(int *)(lVar27 + (long)(int)uVar18 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_035575f4;
    *(int *)(lVar27 + (long)(int)uVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar57 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = *(float *)(unaff_x19 + 200);
    fVar63 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar57 = fVar67 * fVar57 * fVar63;
    fVar63 = fVar57 * (float)(int)(fVar46 / fVar57);
    param_2 = (ulong)(uint)fVar63;
    if (fVar63 <= fVar46) {
      fVar63 = fVar46 + fVar57;
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
      fVar62 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar57 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar63 = fVar63 + fVar57 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar67 * (fStack000000000000012c + fVar46 * fVar62) +
                                 fStack00000000000000d4 *
                                 (fStack00000000000000d0 +
                                 fVar44 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar63;
      goto joined_r0x035535c0;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar63 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar67 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + fVar44 + *(float *)(*unaff_x21 + 0x1ac)));
    param_2 = (ulong)(uint)fVar63;
    fVar63 = *(float *)(unaff_x19 + 200) - fVar63;
    *(float *)(unaff_x19 + 200) = fVar63;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      fVar57 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar57;
      fVar63 = fVar63 - fVar57;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar57 = *(float *)(unaff_x19 + 200);
    fVar63 = fVar57 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar47) +
                      fStack00000000000000d4 * (fVar44 + *(float *)(*unaff_x21 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar63;
joined_r0x035535c0:
    if ((in_stack_000017dc == 0x200b) || (param_2 = (ulong)(uint)fVar57, unaff_w27 != 0)) {
      fVar57 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar57;
      fVar63 = fVar63 + fVar57;
      goto LAB_03553678;
    }
  }
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  uVar18 = *unaff_x20;
  uVar54 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar54 <= uVar18) goto LAB_035575f4;
  *(float *)(lVar30 + (long)(int)uVar18 * unaff_x24 + 0x144) = fVar63;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if ((bool)(bVar8 & in_stack_000017dc == 0x2d)) goto LAB_0355371c;
  }
  else {
    if (in_stack_000017dc - 0x2028 < 2) goto LAB_0355371c;
    if (in_stack_000017dc != 0xd) goto LAB_03553700;
    param_2 = 0;
    *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
  }
  if ((float)uVar18 != in_stack_00000088._4_4_) goto LAB_03553c8c;
LAB_0355371c:
  if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
    fVar57 = *(float *)(unaff_x19 + 0x99);
    fVar63 = *(float *)(unaff_x19 + 0x9a);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar57 = fVar57 - fVar63;
    if (((fStack000000000000005c < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
       (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
      FUN_0358c860(fVar57);
      *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar57;
      *(float *)(unaff_x19 + 0x9b) = fVar57 + *(float *)(unaff_x19 + 0x9b);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar9;
      }
      lVar30 = *(long *)(lVar27 + 0xb8);
      if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x95]) {
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar30 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        FUN_0209b778(lVar30 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x000008a0,0x378);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (*(long *)(lVar27 + 0xb8) + 0x818,0);
        lVar27 = *(long *)(*(long *)puVar9 + 0xb8);
        *(float *)(lVar27 + 0x7bc) = fVar57 + *(float *)(lVar27 + 0x7bc);
        *(float *)(lVar27 + 0x800) = fVar57 + *(float *)(lVar27 + 0x800);
        memcpy(&stack0x000001b0,(void *)(lVar27 + 0x788),0x378);
        FUN_0209b210(lVar27 + 0x11f0,&stack0x000001b0,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
  }
  fVar46 = *(float *)(unaff_x19 + 0x9b);
  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
  fVar63 = *(float *)((long)unaff_x19 + 0x4cc) - fVar46;
  fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
  if (fVar63 <= *(float *)((long)unaff_x19 + 0x4c4)) {
    fVar57 = fVar63;
  }
  *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
  fVar62 = *(float *)(unaff_x19 + 0x99);
  if (in_stack_000017d4 == '\0') {
    in_stack_000017d8 = fVar57;
  }
  if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
     (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
      ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
    in_stack_000017d4 = '\x01';
  }
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
  uVar18 = *(uint *)(unaff_x19 + 0x95);
  if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_035575f4;
  lVar42 = unaff_x19[0x93];
  lVar21 = lVar30 + (long)(int)uVar18 * 0x5c;
  *(int *)(lVar21 + 0x34) = (int)lVar42;
  uVar54 = *(uint *)(unaff_x19 + 0x93);
  if ((int)lVar42 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
    uVar54 = *(uint *)((long)unaff_x19 + 0x49c);
  }
  *(uint *)((long)unaff_x19 + 0x49c) = uVar54;
  *(uint *)(lVar21 + 0x38) = uVar54;
  *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
  *(undefined4 *)(lVar21 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
  iVar13 = *(int *)((long)unaff_x19 + 0x49c);
  if ((int)uVar54 <= *(int *)((long)unaff_x19 + 0x4a4)) {
    iVar13 = *(int *)((long)unaff_x19 + 0x4a4);
  }
  *(int *)((long)unaff_x19 + 0x4a4) = iVar13;
  *(int *)(lVar21 + 0x40) = iVar13;
  *(int *)(lVar21 + 0x24) = (*(int *)(lVar21 + 0x3c) - *(int *)(lVar21 + 0x34)) + 1;
  *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar54) goto LAB_035575f4;
  uVar66 = *(undefined4 *)(lVar27 + (long)(int)uVar54 * (long)iVar17 + 0x11c);
  lVar30 = lVar30 + (long)(int)uVar18 * 0x5c;
  *(float *)(lVar30 + 0x70) = fVar63;
  *(undefined4 *)(lVar30 + 0x6c) = uVar66;
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
  fVar62 = fVar62 - fVar46;
  param_2 = (ulong)(uint)fVar62;
  lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
  *(undefined4 *)(lVar30 + 0x74) =
       *(undefined4 *)(lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
  *(float *)(lVar30 + 0x78) = fVar62;
  lVar27 = *in_stack_00000170;
  if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x50), lVar42 == 0)) goto LAB_035574b8;
  lVar21 = (long)(int)*(uint *)(unaff_x19 + 0x95);
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
  lVar30 = lVar42 + lVar21 * 0x5c;
  *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - fVar67 * fStack000000000000015c;
  *(float *)(lVar30 + 0x5c) = in_stack_000000f8._4_4_;
  if (*(int *)(lVar30 + 0x24) == 1) {
    *(int *)(lVar42 + lVar21 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if ((*unaff_x21 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
  uVar54 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar54 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
  if ((*(char *)(lVar30 + lVar36 * unaff_x24 + 0x194) == '\0') &&
     (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar54 <= *(uint *)(unaff_x19 + 0x94)))
  goto LAB_035575f4;
  lVar42 = lVar42 + lVar21 * 0x5c;
  fVar67 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           (fStack00000000000000d4 *
            (fStack00000000000000d0 + fVar44 + *(float *)(*unaff_x21 + 0x1ac)) -
           *(float *)((long)unaff_x19 + 0x2ac));
  fVar57 = -fVar67;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar57 = fVar67;
  }
  *(float *)(lVar42 + 0x58) = *(float *)(lVar30 + lVar36 * unaff_x24 + 0x144) + fVar57;
  *(float *)(lVar42 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
  *(float *)(lVar42 + 0x54) = fVar63;
  *(float *)(lVar42 + 0x48) = in_stack_00000060 + (fVar62 - fVar63);
  *(float *)(lVar42 + 0x4c) = fVar62;
  if ((int)in_stack_000017dc < 0x2d) {
    if (1 < in_stack_000017dc - 10) goto code_r0x03553b28;
  }
  else if ((1 < in_stack_000017dc - 0x2028) && (in_stack_000017dc != 0x2d)) goto LAB_03553c8c;
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
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  fVar57 = *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
  if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
    if ((in_stack_000017dc == 0x2029) || (fVar67 = 0.0, in_stack_000017dc == 10)) {
      fVar67 = *(float *)((long)unaff_x19 + 0x2cc);
    }
    uVar25 = 0;
    fVar67 = fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
             fStack0000000000000058 * (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700))
             + fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar67) +
             *(float *)(unaff_x19 + 0x9b);
  }
  else {
    if ((in_stack_000017dc == 0x2029) || (fVar67 = 0.0, in_stack_000017dc == 10)) {
      fVar67 = *(float *)((long)unaff_x19 + 0x2cc);
    }
    uVar25 = 1;
    fVar67 = *(float *)(unaff_x19 + 0x9b) +
             *(float *)(unaff_x19 + 0x58) +
             fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar67);
  }
  *(float *)(unaff_x19 + 0x9b) = fVar67;
  *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar27 = *(long *)puVar9;
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x9a) = fVar57;
  param_2 = NEON_rev64(uVar19,4);
  unaff_x19[0x99] = param_2;
  *(float *)(unaff_x19 + 200) =
       *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
  FUN_0358c4f0();
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  in_stack_00000068._4_4_ = 1;
  bStack0000000000000070 = 1;
  unaff_x28 = in_stack_00000170;
  goto LAB_03550bd0;
code_r0x03553b28:
  if (in_stack_000017dc == 3) {
    if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
    in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
    uVar14 = 3;
  }
LAB_03553c8c:
  uVar18 = *unaff_x20;
  if (uVar54 <= uVar18) goto LAB_035575f4;
  if (*(char *)(lVar30 + (long)(int)uVar18 * unaff_x24 + 0x194) != '\0') {
    lVar30 = lVar30 + (long)(int)uVar18 * unaff_x24;
    uVar52 = *(ulong *)(lVar30 + 0x11c);
    uVar23 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar23 ^ (uVar23 ^ uVar52) &
                  ~CONCAT44(-(uint)((float)(uVar23 >> 0x20) < (float)(uVar52 >> 0x20)),
                            -(uint)((float)uVar23 < (float)uVar52));
    uVar23 = *(ulong *)(in_stack_00000080 + 0x238);
    param_2 = *(ulong *)(lVar30 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar23 ^ (uVar23 ^ param_2) &
                  ~CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar23 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar23));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar14 || ((1 << (ulong)(uVar14 & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar27 + 0x58);
    if (lVar30 == 0) goto LAB_035574b8;
    iVar13 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar30 + 0x18) < iVar13) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar27 + 0x58),iVar13,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar27 = *in_stack_00000170;
      if (lVar27 == 0) goto LAB_035574b8;
    }
    lVar30 = *(long *)(lVar27 + 0x58);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar18 = *(uint *)(unaff_x19 + 0x96);
    lVar42 = (long)(int)uVar18;
    uVar14 = *(uint *)(lVar30 + 0x18);
    if (uVar14 <= uVar18) goto LAB_035575f4;
    lVar21 = lVar30 + lVar42 * 0x14;
    fVar67 = *(float *)(lVar21 + 0x30);
    param_2 = (ulong)(uint)fVar67;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar67 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar57 = fVar67;
    }
    *(float *)(lVar21 + 0x30) = fVar57;
    uVar54 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar54 == 0 && uVar18 == 0) {
      *(uint *)(lVar30 + (ulong)uVar18 * 0x14 + 0x20) = uVar54;
    }
    else {
      uVar7 = uVar54 - 1;
      if (0 < (int)uVar54) {
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar27 + 0x18) <= uVar7) goto LAB_035575f4;
        if (uVar18 != *(uint *)(lVar27 + (ulong)uVar7 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar14 <= uVar18 - 1) goto LAB_035575f4;
          *(uint *)(lVar30 + 0x20 + (long)(int)(uVar18 - 1) * 0x14 + 4) = uVar7;
          *(uint *)(lVar30 + 0x20 + lVar42 * 0x14) = uVar54;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar54 == in_stack_00000088._4_4_) {
        *(float *)(lVar30 + lVar42 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((unaff_x28 = in_stack_00000170, 6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  in_w8 = in_stack_000017dc;
  if ((unaff_w27 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) == '\0') goto LAB_03553ef0;
    unaff_x28 = in_stack_00000170;
    if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
    if ((bStack0000000000000074 & 1) != 0 || in_w8 != 0xad) goto LAB_0355422c;
  }
  else {
    unaff_x28 = in_stack_00000170;
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_000017dc - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017dc != 0xa0 && (in_stack_000017dc != 0x2060)))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_035542ac;
      }
LAB_03553ef0:
      in_CY = 0x2bfd < in_stack_000017dc - 0xac01;
      unaff_x28 = in_stack_00000170;
      goto code_r0x03553f00;
    }
LAB_03553f78:
    if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
    if (unaff_w27 == 0) goto UnityEngine_Animator__set_animatePhysics;
  }
UnityEngine_Animator__get_bodyPositionInternal:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
LAB_0355422c:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
LAB_03554264:
  bStack0000000000000070 = 1;
  goto LAB_035542ac;
LAB_03554e78:
  uVar14 = uVar18 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar42 = *(long *)(*unaff_x28 + 0x50), lVar42 == 0)) goto LAB_035574b8;
  lVar36 = (long)(int)uVar14;
  lVar21 = lVar27 + lVar36 * 0x178;
  uVar7 = *(uint *)(lVar21 + 100);
  if (*(uint *)(lVar42 + 0x18) <= uVar7) goto LAB_035575f4;
  lVar39 = (long)(int)uVar7;
  lVar42 = lVar42 + lVar39 * 0x5c;
  lVar34 = *(long *)(lVar21 + 0x38);
  uVar3 = *(ushort *)(lVar21 + 0x20);
  uVar5 = *(uint *)(lVar42 + 0x3c);
  uVar43 = *(uint *)(lVar42 + 0x68);
  iVar2 = *(int *)(lVar42 + 0x20);
  iVar15 = *(int *)(lVar42 + 0x28);
  iVar16 = *(int *)(lVar42 + 0x2c);
  uVar6 = *(uint *)(lVar42 + 0x40);
  lVar21 = (long)(int)uVar6;
  fVar47 = *(float *)(lVar42 + 0x4c);
  fVar48 = *(float *)(lVar42 + 0x54);
  fVar62 = *(float *)(lVar42 + 0x58);
  fVar68 = *(float *)(lVar42 + 0x5c);
  fVar49 = *(float *)(lVar42 + 0x60);
  fVar60 = *(float *)(lVar42 + 0x6c);
  fVar56 = *(float *)(lVar42 + 0x70);
  fVar45 = *(float *)(lVar42 + 0x74);
  fVar64 = *(float *)(lVar42 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar49 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar62;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar49 + fVar68 * 0.5) - fVar62 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar68 + fVar49) - fVar62;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar68 + fVar49;
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
      if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b8cc4(uVar4,0);
      if ((uVar23 & 1) == 0) {
        bVar1 = (int)uVar7 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar62 <= fVar68) && (!bVar1 && uVar43 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar68 + fVar49;
        }
        goto LAB_03555088;
      }
      if (((uVar18 == 1) || (uVar7 != uVar54)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar68 + fVar49;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar26 = (char)unaff_x19[0x1e];
        fVar49 = -fVar62;
        if (cVar26 != '\0') {
          fVar49 = fVar62;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar27 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar62 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar62 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_03556e74:
          fVar62 = 1.0 - fVar62;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar23 = FUN_026b97f8(uVar38,0);
            cVar26 = (char)unaff_x19[0x1e];
            if ((uVar23 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar62 = ((fVar68 + fVar49) * fVar62) / (float)iVar16;
        if (cVar26 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar62;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar62;
        }
      }
    }
  }
  else if (uVar43 == 0x20) {
    fVar62 = fVar60 + fVar45;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar43 <= uVar14) goto LAB_035575f4;
  lVar42 = lVar27 + lVar36 * 0x178;
  fVar68 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar62 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar49 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar42 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar27 + lVar36 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar7,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar29 = lVar27 + lVar36 * 0x178;
    *(undefined4 *)(lVar29 + 0x84) = 0;
    *(undefined4 *)(lVar29 + 0xac) = 0;
    *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
    fVar46 = 1.0;
    break;
  case 1:
    fVar64 = *(float *)(lVar27 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar29 = lVar27 + lVar36 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar64) - *(float *)(in_stack_00000080 + 0x230);
      fVar64 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar29 = lVar27 + lVar36 * 0x178;
    fVar45 = fVar45 - fVar60;
    *(float *)(lVar29 + 0x84) = fVar46 + (fVar64 - fVar60) / fVar45;
    *(float *)(lVar29 + 0xac) = fVar46 + (*(float *)(lVar29 + 0x98) - fVar60) / fVar45;
    *(float *)(lVar29 + 0xd4) = fVar46 + (*(float *)(lVar29 + 0xc0) - fVar60) / fVar45;
    fVar46 = fVar46 + (*(float *)(lVar29 + 0xe8) - fVar60) / fVar45;
    break;
  case 2:
    lVar29 = lVar27 + lVar36 * 0x178;
    fVar64 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar29 + 0x84) = fVar46 + fVar45 / fVar64;
    *(float *)(lVar29 + 0xac) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar29 + 0xd4) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar46 = fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar29 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar29 = lVar27 + lVar36 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0;
      *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar29 = lVar27 + lVar36 * 0x178;
      fVar64 = fVar64 - fVar56;
      fVar45 = fVar46 + (*(float *)(lVar29 + 0x74) - fVar56) / fVar64;
      fVar64 = fVar46 + (*(float *)(lVar29 + 0x9c) - fVar56) / fVar64;
      *(float *)(lVar29 + 0x88) = fVar45;
      *(float *)(lVar29 + 0xb0) = fVar64;
      *(float *)(lVar29 + 0xd8) = fVar45;
      *(float *)(lVar29 + 0x100) = fVar64;
      break;
    case 2:
      lVar29 = lVar27 + lVar36 * 0x178;
      fVar45 = fVar46 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar29 + 0x88) = fVar45;
      fVar64 = *(float *)(unaff_x19 + 0x9c);
      fVar60 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar29 + 0xd8) = fVar45;
      fVar45 = fVar46 + (*(float *)(lVar29 + 0x9c) - fVar64) / (fVar60 - fVar64);
      *(float *)(lVar29 + 0xb0) = fVar45;
      *(float *)(lVar29 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar29 = lVar27 + lVar36 * 0x178;
    fVar45 = *(float *)(lVar29 + 0x15c);
    fVar64 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar45) * 0.5;
    fVar60 = fVar46 + *(float *)(lVar29 + 0x88) * fVar45 + fVar64;
    fVar46 = fVar46 + fVar64 + *(float *)(lVar29 + 0xb0) * fVar45;
    *(float *)(lVar29 + 0x84) = fVar60;
    *(float *)(lVar29 + 0xac) = fVar60;
    *(float *)(lVar29 + 0xd4) = fVar46;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar27 + lVar36 * 0x178 + 0xfc) = fVar46;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar29 = lVar27 + lVar36 * 0x178;
    *(undefined4 *)(lVar29 + 0x88) = 0;
    *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0x100) = 0;
    break;
  case 1:
    if (uVar14 < uVar43) {
      lVar29 = lVar27 + lVar36 * 0x178;
      fVar47 = fVar47 - fVar48;
      fVar46 = (*(float *)(lVar29 + 0x74) - fVar48) / fVar47;
      fVar47 = (*(float *)(lVar29 + 0x9c) - fVar48) / fVar47;
      *(float *)(lVar29 + 0x88) = fVar46;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar29 = lVar27 + lVar36 * 0x178;
    fVar46 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar29 + 0x88) = fVar46;
    fVar47 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar29 + 0xb0) = fVar47;
    *(float *)(lVar29 + 0xd8) = fVar47;
    *(float *)(lVar29 + 0x100) = fVar46;
    break;
  case 3:
    if (uVar43 <= uVar14) goto LAB_035575f4;
    lVar29 = lVar27 + lVar36 * 0x178;
    fVar47 = *(float *)(lVar29 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar47) * 0.5;
    fVar46 = *(float *)(lVar29 + 0x84) / fVar47 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar29 + 0xd4) / fVar47;
    *(float *)(lVar29 + 0x88) = fVar46;
    *(float *)(lVar29 + 0xb0) = fVar45;
    *(float *)(lVar29 + 0x100) = fVar46;
    *(float *)(lVar29 + 0xd8) = fVar45;
  }
  if (uVar43 <= uVar14) goto LAB_035575f4;
  lVar29 = lVar27 + lVar36 * 0x178;
  fVar46 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar46 = -fVar46;
  }
  fVar45 = fVar57;
  if (((iVar13 == 2) || (fVar45 = fVar44, iVar13 == 1)) || (fVar45 = fVar57 / fVar67, iVar13 == 0))
  {
    fVar46 = fVar45 * fVar46;
  }
  lVar29 = lVar27 + lVar36 * 0x178;
  fVar47 = *(float *)(lVar29 + 0x88);
  fVar64 = *(float *)(lVar29 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar45 = (float)(int)fVar64;
  }
  fVar60 = *(float *)(lVar29 + 0xd4);
  fVar56 = *(float *)(lVar29 + 0xd8);
  fVar48 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar48 = (float)(int)fVar47;
  }
  uVar51 = FUN_03591d3c(fVar64 - fVar45,fVar47 - fVar48);
  *(undefined4 *)(lVar29 + 0x84) = uVar51;
  if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar56 = fVar56 - fVar48;
  *(float *)(lVar29 + 0x88) = fVar46;
  uVar51 = FUN_03591d3c(fVar64 - fVar45,fVar56);
  *(undefined4 *)(lVar27 + lVar36 * 0x178 + 0xac) = uVar51;
  if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar60 = fVar60 - fVar45;
  *(float *)(lVar27 + lVar36 * 0x178 + 0xb0) = fVar46;
  fVar45 = (float)FUN_03591d3c(fVar60,fVar56);
  *(float *)(lVar29 + 0xd4) = fVar45;
  if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_035575f4;
  *(float *)(lVar29 + 0xd8) = fVar46;
  uVar51 = FUN_03591d3c(fVar60,fVar47 - fVar48);
  *(undefined4 *)(lVar27 + lVar36 * 0x178 + 0xfc) = uVar51;
  uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar43 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar27 + lVar36 * 0x178 + 0x100) = fVar46;
LAB_0355574c:
  if (((int)uVar14 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar7 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar43 <= uVar14) goto LAB_035575f4;
      lVar42 = lVar27 + lVar36 * 0x178;
      *(ulong *)(lVar42 + 0x70) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar42 + 0x70));
      *(float *)(lVar42 + 0x78) = fVar49 + *(float *)(lVar42 + 0x78);
      *(ulong *)(lVar42 + 0x98) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar42 + 0x98));
      *(float *)(lVar42 + 0xa0) = fVar49 + *(float *)(lVar42 + 0xa0);
      *(ulong *)(lVar42 + 0xc0) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar42 + 0xc0));
      *(float *)(lVar42 + 200) = fVar49 + *(float *)(lVar42 + 200);
      *(ulong *)(lVar42 + 0xe8) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar42 + 0xe8));
      *(float *)(lVar42 + 0xf0) = fVar49 + *(float *)(lVar42 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar7 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar14 < uVar43) {
        if (*(uint *)(lVar27 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar42 = lVar27 + lVar36 * 0x178;
          *(ulong *)(lVar42 + 0x70) =
               CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar42 + 0x70));
          *(float *)(lVar42 + 0x78) = fVar49 + *(float *)(lVar42 + 0x78);
          *(ulong *)(lVar42 + 0x98) =
               CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar42 + 0x98));
          *(float *)(lVar42 + 0xa0) = fVar49 + *(float *)(lVar42 + 0xa0);
          *(ulong *)(lVar42 + 0xc0) =
               CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar42 + 0xc0));
          *(float *)(lVar42 + 200) = fVar49 + *(float *)(lVar42 + 200);
          *(ulong *)(lVar42 + 0xe8) =
               CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar42 + 0xe8));
          *(float *)(lVar42 + 0xf0) = fVar49 + *(float *)(lVar42 + 0xf0);
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
    uVar43 = *(uint *)(lVar27 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar29 = lVar27 + lVar36 * 0x178;
  *(undefined8 *)(lVar29 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar29 + 0x78) = uVar51;
  if (uVar43 <= uVar14) goto LAB_035575f4;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar29 = lVar27 + lVar36 * 0x178;
  *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar29 + 0xa0) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar29 + 200) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar29 + 0xf0) = uVar51;
  *(undefined1 *)(lVar42 + 0x194) = 0;
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
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar36 * 0x178;
  uVar19 = *(undefined8 *)(lVar42 + 0x11c);
  *(undefined8 *)(lVar42 + 0x11c) =
       CONCAT44(fVar62 + (float)((ulong)uVar19 >> 0x20),fVar68 + (float)uVar19);
  *(float *)(lVar42 + 0x124) = fVar49 + *(float *)(lVar42 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(ulong *)(lVar42 + 0x110) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0x110) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar42 + 0x110));
  *(float *)(lVar42 + 0x118) = fVar49 + *(float *)(lVar42 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(ulong *)(lVar42 + 0x128) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar42 + 0x128) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar42 + 0x128));
  *(float *)(lVar42 + 0x130) = fVar49 + *(float *)(lVar42 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(float *)(lVar42 + 0x134) = fVar68 + *(float *)(lVar42 + 0x134);
  *(ulong *)(lVar42 + 0x138) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar42 + 0x138) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar42 + 0x138));
  lVar42 = *in_stack_00000170;
  if ((lVar42 == 0) || (lVar29 = *(long *)(lVar42 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar43 = *(uint *)(lVar29 + 0x18);
  if (uVar43 <= uVar14) goto LAB_035575f4;
  lVar35 = lVar29 + lVar36 * 0x178;
  uVar52 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar35 + 0x140));
  fVar45 = fVar62 + *(float *)(lVar35 + 0x150);
  uVar53 = (ulong)(uint)fVar45;
  uVar55 = CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar45;
  *(ulong *)(lVar35 + 0x140) = uVar52;
  *(ulong *)(lVar35 + 0x148) = uVar55;
  if (uVar7 == uVar54) {
    uVar54 = *unaff_x20 - 1;
    if (uVar14 == uVar54) goto LAB_03555b44;
  }
  else {
    lVar42 = *(long *)(lVar42 + 0x50);
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar35 = (long)(int)uVar54;
    lVar37 = lVar42 + lVar35 * 0x5c;
    uVar55 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar45 = fVar62 + *(float *)(lVar37 + 0x54);
    uVar52 = (ulong)(uint)fVar45;
    fVar47 = fVar68 + *(float *)(lVar37 + 0x58);
    uVar53 = (ulong)(uint)fVar47;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar62 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar45;
    *(float *)(lVar37 + 0x58) = fVar47;
    if (uVar43 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar51 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar42 = lVar42 + lVar35 * 0x5c;
    *(float *)(lVar42 + 0x70) = fVar45;
    *(undefined4 *)(lVar42 + 0x6c) = uVar51;
    lVar42 = *in_stack_00000170;
    if ((lVar42 == 0) || (lVar29 = *(long *)(lVar42 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar42 = *(long *)(lVar42 + 0x38);
    if (lVar42 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar29 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar29 = lVar29 + lVar35 * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar54 * 0x178 + 0x128);
    *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    uVar54 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar14 == uVar54) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar29 = *(long *)(lVar42 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_035575f4;
      lVar35 = lVar29 + lVar39 * 0x5c;
      uVar55 = (ulong)(uint)*(float *)(lVar35 + 0x58);
      uVar52 = CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar35 + 0x4c));
      fVar45 = fVar62 + *(float *)(lVar35 + 0x54);
      fVar68 = fVar68 + *(float *)(lVar35 + 0x58);
      uVar53 = (ulong)(uint)fVar68;
      *(ulong *)(lVar35 + 0x4c) = uVar52;
      *(float *)(lVar35 + 0x54) = fVar45;
      *(float *)(lVar35 + 0x58) = fVar68;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(lVar35 + 0x34)) goto LAB_035575f4;
      uVar51 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar29 = lVar29 + lVar39 * 0x5c;
      *(float *)(lVar29 + 0x70) = fVar45;
      *(undefined4 *)(lVar29 + 0x6c) = uVar51;
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar29 = *(long *)(lVar42 + 0x50), lVar29 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_035575f4;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar29 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar29 = lVar29 + lVar39 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar54 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar23 = FUN_026b82c4(uVar38,0);
  if (((((uVar23 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar11) {
      if (((uVar18 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar14 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b82c4(uVar4,0);
        if ((uVar23 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b82c4(uVar4,0);
          if ((uVar23 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar18 != 1) {
LAB_0355686c:
        bVar11 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b81f8(uVar38,0);
      if ((uVar23 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b63d8(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar23 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar14 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b82c4(uVar38,0);
      iVar15 = iStack0000000000000128;
      if ((uVar23 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar18 - 2;
    }
    lVar42 = *in_stack_00000170;
    if (lVar42 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar42 + 0x40);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar42 + 0x24);
    iVar16 = *(int *)(lVar29 + 0x18);
    if (iVar16 < (int)(uVar54 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar42 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar42 = *in_stack_00000170;
      if (lVar42 == 0) goto LAB_035574b8;
    }
    lVar42 = *(long *)(lVar42 + 0x40);
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar42 = lVar42 + (long)(int)uVar54 * 0x18;
    *(long **)(lVar42 + 0x20) = unaff_x19;
    *(float *)(lVar42 + 0x28) = fStack0000000000000158;
    *(int *)(lVar42 + 0x2c) = iVar15;
    *(int *)(lVar42 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar42 = unaff_x19[0x6d];
    if (lVar42 == 0) goto LAB_035574b8;
    lVar29 = *(long *)(lVar42 + 0x50);
    *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_035575f4;
    lVar29 = lVar29 + lVar39 * 0x5c;
    bVar11 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
  }
  else {
    if (!bVar11) {
      fStack0000000000000158 = (float)uVar14;
    }
    if (uVar14 == *unaff_x20 - 1) {
      lVar42 = *in_stack_00000170;
      if (lVar42 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar42 + 0x40);
      if (lVar29 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar42 + 0x24);
      iVar15 = *(int *)(lVar29 + 0x18);
      if (iVar15 < (int)(uVar54 + 1)) {
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
      if (*(uint *)(lVar42 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar42 = lVar42 + (long)(int)uVar54 * 0x18;
      *(long **)(lVar42 + 0x20) = unaff_x19;
      *(float *)(lVar42 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar42 + 0x2c) = uVar14;
      *(uint *)(lVar42 + 0x30) = uVar18 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar42 = unaff_x19[0x6d];
      if (lVar42 == 0) goto LAB_035574b8;
      lVar29 = *(long *)(lVar42 + 0x50);
      *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_035575f4;
      lVar29 = lVar29 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
LAB_03555d68:
    bVar11 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  uVar54 = *(uint *)(lVar42 + 0x18);
  if (uVar54 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar42 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar12) {
LAB_03555da0:
      if (uVar54 <= uVar18 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar54 = *(uint *)(lVar42 + lVar30 + -0x330);
      uVar51 = *(undefined4 *)(lVar42 + lVar30 + -0x2f8);
LAB_035562ec:
      pcVar32 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar55 = (ulong)uVar54;
      uVar52 = (ulong)(uint)_bStack0000000000000070;
      uVar53 = (ulong)_bStack0000000000000074;
      (*pcVar32)(fStack0000000000000078,uVar52,uVar53,uVar55,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar51);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar42 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar42 = *(long *)puVar9;
      }
LAB_03556348:
      bVar12 = false;
      fVar63 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar42 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar12 = false;
    }
  }
  else {
    lVar42 = lVar42 + lVar36 * 0x178;
    iVar15 = *(int *)(lVar42 + 0x68);
    *(int *)(lVar42 + 0x16c) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar7)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar23 = FUN_026b63d8(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar23 & 1) == 0)) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 == 0) || (lVar39 = *(long *)(lVar42 + 0x38), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar14) goto LAB_035575f4;
      fVar45 = *(float *)(lVar39 + lVar36 * 0x178 + 0x160);
      if (fVar63 <= fVar45) {
        fVar63 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar46)) {
        fStack0000000000000100 = ABS(fVar46);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar42 = *in_stack_00000170;
          if (lVar42 == 0) goto LAB_035574b8;
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar39 + 0x15a8);
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar47 = *(float *)(lVar42 + lVar36 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar47 = fVar47 + fVar63 * fVar45;
      if (fVar47 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar47;
      }
      uVar52 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar12) {
      bVar12 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar14 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b97f8(uVar38,0);
        if ((uVar23 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar42 = lVar42 + lVar36 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar42 + 0x160);
      fStack0000000000000078 = *(float *)(lVar42 + 0x11c);
      uVar53 = (ulong)(uint)fStack0000000000000078;
      bVar12 = fVar63 != 0.0;
      fVar45 = in_stack_00000088._4_4_;
      if (bVar12) {
        fVar45 = fVar63;
      }
      fVar63 = fVar45;
      uVar66 = *(undefined4 *)(lVar42 + 0x168);
      _bStack0000000000000074 = 0;
      fVar45 = fVar46;
      if (bVar12) {
        fVar45 = fStack0000000000000100;
      }
      uVar52 = (ulong)(uint)fVar45;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar14 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar36 * 0x178;
          lVar39 = *unaff_x19;
          uVar54 = *(uint *)(lVar42 + 0x128);
          uVar51 = *(undefined4 *)(lVar42 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar14 == uVar5) || ((int)uVar6 <= (int)uVar14)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        lVar39 = lVar36;
        uVar54 = uVar14;
        if (uVar38 == 0x200b || (uVar23 & 1) != 0) {
          lVar39 = lVar21;
          uVar54 = uVar6;
        }
        if (uVar54 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar39 * 0x178;
          uVar54 = *(uint *)(lVar42 + 0x128);
          uVar51 = *(undefined4 *)(lVar42 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        uVar54 = *(uint *)(lVar42 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar18) goto LAB_035575f4;
      uVar23 = FUN_03567ad8(uVar66,*(undefined4 *)(lVar42 + lVar30),0);
      if ((uVar23 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0)) {
          if (uVar14 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar36 * 0x178;
            uVar55 = (ulong)*(uint *)(lVar42 + 0x128);
            uVar53 = (ulong)_bStack0000000000000074;
            uVar52 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar52,uVar53,uVar55,fStack0000000000000104,0,
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
  if (lVar34 == 0) goto LAB_035574b8;
  uVar54 = *(uint *)(lVar42 + lVar36 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar34 + 0x50,0);
  if ((uVar54 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
      uVar54 = *(uint *)(lVar42 + lVar30 + -0x330);
      fVar62 = *(float *)(lVar42 + lVar30 + -0x30c);
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar55 = (ulong)uVar54;
      uVar52 = (ulong)(uint)fStack000000000000009c;
      uVar53 = (ulong)(uint)fStack0000000000000098;
      (*pcVar32)(fStack00000000000000a0,uVar52,uVar53,uVar55,
                 fStack00000000000000a8 * fVar45 + fVar62,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar42 = *in_stack_00000170;
    if ((lVar42 == 0) || (lVar39 = *(long *)(lVar42 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar39 + lVar36 * 0x178 + 0x174) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar7)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar14 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b97f8(uVar38,0);
        if ((uVar23 & 1) != 0) goto LAB_035564e8;
        lVar42 = *in_stack_00000170;
        if (lVar42 == 0) goto LAB_035574b8;
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar42 = lVar42 + lVar36 * 0x178;
      fStack0000000000000040 = *(float *)(lVar42 + 0x60);
      fStack0000000000000038 = *(float *)(lVar42 + 0x14c);
      uVar52 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar42 + 0x11c);
      uVar53 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar42 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar54 = *unaff_x20;
    if (uVar54 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar14 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar36 * 0x178;
          lVar21 = *unaff_x19;
          uVar54 = *(uint *)(lVar42 + 0x128);
          fVar62 = *(float *)(lVar42 + 0x14c);
LAB_03556654:
          pcVar32 = *(code **)(lVar21 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar14 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        uVar54 = *(uint *)(lVar42 + 0x18);
        if (uVar38 == 0x200b || (uVar23 & 1) != 0) {
          if (uVar54 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar21 = lVar36;
          if (uVar54 <= uVar14) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar42 = lVar42 + lVar21 * 0x178;
        fVar62 = *(float *)(lVar42 + 0x14c);
        uVar54 = *(uint *)(lVar42 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)uVar54) {
      lVar42 = *in_stack_00000170;
      if ((lVar42 != 0) && (lVar39 = *(long *)(lVar42 + 0x38), lVar39 != 0)) {
        if (uVar18 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar30 + -0x108) == fStack0000000000000040) {
            fVar47 = *(float *)(lVar39 + lVar30 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar52 = (ulong)(uint)fStack0000000000000038;
            uVar23 = FUN_03567bac(fVar62 + fVar47,uVar52,0);
            if ((uVar23 & 1) != 0) {
              uVar54 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar42 = *in_stack_00000170;
            if (lVar42 == 0) goto LAB_035574b8;
          }
          lVar42 = *(long *)(lVar42 + 0x38);
          if (lVar42 != 0) {
            uVar54 = *(uint *)(lVar42 + 0x18);
            if ((int)uVar14 <= (int)uVar6) goto FUN_035568e8;
            if (uVar6 < uVar54) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar14 < (int)uVar54) {
      iVar15 = FUN_036d3364(lVar34,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_035575f4;
      lVar42 = *(long *)(lVar27 + lVar30 + -0x130);
      if (lVar42 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar42,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 != 0))
      {
        if (uVar18 - 2 < *(uint *)(lVar42 + 0x18)) {
          lVar21 = *unaff_x19;
          uVar54 = *(uint *)(lVar42 + lVar30 + -0x330);
          fVar62 = *(float *)(lVar42 + lVar30 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
  goto LAB_035574b8;
  uVar54 = (uint)*(undefined8 *)(lVar42 + 0x18);
  if (uVar54 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar42 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar52 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar52,uVar53,uVar55,fStack00000000000000d0,uVar53);
    }
LAB_035569b4:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar7)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar42 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar14 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_026b97f8(uVar38,0);
        if ((uVar23 & 1) != 0) goto LAB_035569b4;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar21 = *(long *)puVar9;
      }
      if ((*in_stack_00000170 == 0) || (lVar42 = *(long *)(*in_stack_00000170 + 0x38), lVar42 == 0))
      goto LAB_035574b8;
      uVar54 = (uint)*(undefined8 *)(lVar42 + 0x18);
      if (uVar54 <= uVar14) goto LAB_035575f4;
      lVar21 = *(long *)(lVar21 + 0xb8);
      lVar34 = lVar42 + lVar36 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar34 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar34 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar21 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar21 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar34 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar21 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar21 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar54 <= uVar14) goto LAB_035575f4;
    lVar42 = lVar42 + lVar36 * 0x178;
    fVar45 = *(float *)(lVar42 + 0x128);
    fVar48 = *(float *)(lVar42 + 0x188);
    uVar20 = *(undefined8 *)(lVar42 + 0x17c);
    fVar60 = *(float *)(lVar42 + 0x184);
    uVar19 = *(undefined8 *)(lVar42 + 0x184);
    fVar49 = *(float *)(lVar42 + 0x18c);
    fVar62 = *(float *)(lVar42 + 0x11c);
    fVar64 = *(float *)(lVar42 + 0x148);
    fVar47 = *(float *)(lVar42 + 0x150);
    in_stack_00000178 = uVar20;
    fStack0000000000000180 = fVar60;
    fStack0000000000000184 = fVar48;
    in_stack_00000188 = fVar49;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar23 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar42 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar23 & 1) == 0) {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar42);
      }
      fVar45 = fVar45 + (float)in_stack_000017b8;
      uVar53 = (ulong)(uint)fVar45;
      fVar62 = fVar62 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar47 = fVar47 - in_stack_000017c0;
      uVar52 = (ulong)(uint)fVar47;
      fVar64 = fVar64 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar55 = (ulong)(uint)fVar64;
      if (fVar62 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar62;
      }
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      if (fStack00000000000000c8 <= fVar45) {
        fStack00000000000000c8 = fVar45;
      }
      if (fStack00000000000000d0 <= fVar64) {
        fStack00000000000000d0 = fVar64;
      }
    }
    else {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar42);
      }
      fVar62 = (fVar62 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar55 = (ulong)(uint)fVar62;
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      uVar52 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar64) {
        fStack00000000000000d0 = fVar64;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar52,uVar53,uVar55,fStack00000000000000d0,uVar53);
      fStack00000000000000dc = fVar47 - fVar49;
      fStack00000000000000c8 = fVar45 + fVar60;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar64 + fVar48;
      fStack00000000000000d8 = fVar62;
      in_stack_000017b0 = uVar20;
      in_stack_000017b8 = uVar19;
      in_stack_000017c0 = fVar49;
    }
    if (((*unaff_x20 == 1) || (uVar14 == uVar5)) || (((int)uVar6 <= (int)uVar14 || (!bVar1)))) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar52 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar52,uVar53,uVar55,fStack00000000000000d0,uVar53);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar14 = *unaff_x20;
  lVar30 = lVar30 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar14 <= (int)uVar18;
  unaff_x28 = in_stack_00000170;
  uVar18 = uVar18 + 1;
  uVar54 = uVar7;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar27 = *in_stack_00000170;
  if (lVar27 != 0) {
    iVar17 = uVar7 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar27 + 0x18) = uVar14;
    lVar30 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar17;
    if ((int)uVar14 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar30;
    *(float *)(lVar27 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar23 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar23 & 1) == 0)) {
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
                (*(undefined8 *)(lVar27 + 0x40),*unaff_x28,*(undefined8 *)(lVar27 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar17 != 0x19) {
      lVar27 = unaff_x19[0xe5];
      if (lVar27 == 0) goto LAB_035574b8;
      uVar14 = FUN_03911ee4(lVar27,0);
      FUN_03911f20(lVar27,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x60), lVar27 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
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
                            uVar19 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar14 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar27 = *unaff_x28;
                              if (lVar27 != 0) {
                                lVar42 = 0;
                                lVar30 = 0;
                                do {
                                  uVar23 = lVar30 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar23)
                                  goto LAB_03554724;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                  FUN_03596a20(lVar27 + lVar42 + 0x70,0);
                                  lVar27 = unaff_x19[0xe1];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                  uVar20 = *(undefined8 *)(lVar27 + lVar30 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036d35a8(uVar20,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar27 = *(long *)(*unaff_x28 + 0x60), lVar27 == 0))
                                      break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                      FUN_03596b20(lVar27 + lVar42 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar21 = *(long *)(*unaff_x28 + 0x60), lVar21 == 0)) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a460c(lVar27,*(undefined8 *)(lVar21 + lVar42 + 0x80),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar21 = *(long *)(*unaff_x28 + 0x60), lVar21 == 0)) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4810(lVar27,*(undefined8 *)(lVar21 + lVar42 + 0x98),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar21 = *(long *)(*unaff_x28 + 0x60), lVar21 == 0)) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a48bc(lVar27,*(undefined8 *)(lVar21 + lVar42 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = UnityEngine_Material__GetColorArray(lVar27,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar21 = *(long *)(*unaff_x28 + 0x60), lVar21 == 0)) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_035575f4;
                                    if (lVar27 == 0) break;
                                    FUN_036a4e24(lVar27,*(undefined8 *)(lVar21 + lVar42 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = UnityEngine_Material__GetColorArray(lVar27,0),
                                       lVar27 == 0)) break;
                                    FUN_036aa280(lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_037b514c(lVar27,0);
                                    lVar21 = unaff_x19[0xe1];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (uVar20 = UnityEngine_Material__GetColorArray(lVar21,0),
                                       lVar27 == 0)) break;
                                    FUN_0390f3a4(lVar27,uVar20,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390eec8(uVar19,uVar52,uVar53,uVar55,lVar27,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_037b514c(lVar27,0), lVar27 == 0)) break;
                                    FUN_0390ed78(lVar27,uVar14 & 1,0);
                                    lVar27 = unaff_x19[0xe1];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_035575f4;
                                    plVar40 = *(long **)(lVar27 + lVar30 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar18 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *unaff_x28;
                                  lVar30 = lVar30 + 1;
                                  lVar42 = lVar42 + 0x50;
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


