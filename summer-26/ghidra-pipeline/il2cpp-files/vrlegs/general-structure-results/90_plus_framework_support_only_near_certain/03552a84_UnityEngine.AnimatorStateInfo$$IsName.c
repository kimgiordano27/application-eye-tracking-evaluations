/*
FUNCTION_NAME: UnityEngine.AnimatorStateInfo$$IsName
ENTRY_POINT: 03552a84
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


void UnityEngine_AnimatorStateInfo__IsName(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
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
  long lVar38;
  uint uVar39;
  long lVar40;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar41;
  ulong unaff_x24;
  long *plVar42;
  long lVar43;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined8 uVar52;
  ulong uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  ulong unaff_d13;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
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
  char in_stack_000017d4;
  float in_stack_000017d8;
  uint in_stack_000017dc;
  
code_r0x03552a84:
  if ((param_3 & 1) != 0) {
    plVar42 = (long *)unaff_x19[0x5d];
    uVar22 = (**(code **)(*unaff_x19 + 0x518))();
    if (plVar42 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar42 + 0x528))(plVar42,uVar22,*(undefined8 *)(*plVar42 + 0x530));
    lVar23 = unaff_x19[0x5d];
    if (lVar23 == 0) goto LAB_035574b8;
    *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
    FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar42 = (long *)unaff_x19[0x5d];
    if (plVar42 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
LAB_03552b00:
  uVar22 = CONCAT44(3,*unaff_x20);
  uVar11 = in_stack_000017dc;
LAB_03550bd0:
  fVar58 = (float)unaff_d13;
  in_stack_000017a8 = in_stack_000017a8 + 1;
  lVar23 = unaff_x19[0x8f];
  if (lVar23 != 0) {
    if ((int)in_stack_000017a8 < (int)*(uint *)(lVar23 + 0x18)) {
      if (*(uint *)(lVar23 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      in_stack_000017dc = *(uint *)(lVar23 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
      if (in_stack_000017dc == 0) goto LAB_0355459c;
      if (5 < in_stack_00000168._4_4_) {
        uVar22 = FUN_0276793c(&stack0x000017dc,0);
        uVar18 = FUN_0276793c(&stack0x000017a8,0);
        uVar22 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar22,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar18,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367ae18(uVar22,0);
        uVar22 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017dc == 0x3c))
      goto code_r0x0355094c;
      if ((*unaff_x28 != 0) && (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar23 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar23 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar23 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_035509d4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_0355459c:
    fVar58 = (float)param_2;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar58 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar68 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar58 < fVar68) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar44 = (*(float *)((long)unaff_x19 + 0x23c) - fVar58) * 0.5;
        if (fVar44 <= DAT_00d38b84) {
          fVar44 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar58;
        fVar44 = (fVar58 + fVar44) * 20.0 + 0.5;
        fVar58 = DAT_00d38e60;
        if (fVar44 != INFINITY) {
          fVar58 = (float)(int)fVar44 / 20.0;
        }
        if (fVar68 <= fVar58) {
          fVar58 = fVar68;
        }
        goto LAB_03554658;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar7 = PTR_DAT_03cbdf88;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar22 = FUN_0276793c(_fStack0000000000000038,0);
      uVar18 = FUN_0277fa90(_fStack0000000000000040,0);
      uVar22 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar22,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar18,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367a6ec(uVar22,0);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar11 == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar23 = *(long *)puVar8;
    }
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
    lVar23 = **(long **)(lVar23 + 0xb8);
    if (lVar23 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar14 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x60), lVar23 == 0))
    goto LAB_035574b8;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
    FUN_035968e8(lVar23 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar12 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar23 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)uStack00000000000000e8;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar12 < 0x401) {
      if (iVar12 == 0x100) {
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_035575f4;
        uVar22 = *(undefined8 *)(lVar23 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar29 = *(long *)(*unaff_x28 + 0x58), lVar29 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar58 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar58 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x2c);
        fVar58 = (0.0 - fVar58) - fStack0000000000000020;
      }
      else if (iVar12 == 0x200) {
        if (lVar23 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
        uVar22 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar23 + 0x24) +
                          (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x58), lVar23 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar23 = lVar23 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar58 = ((fStack0000000000000020 + *(float *)(lVar23 + 0x28) + *(float *)(lVar23 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar12 != 0x400) goto LAB_03554c4c;
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
        uVar22 = *(undefined8 *)(lVar23 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar29 = *(long *)(*unaff_x28 + 0x58), lVar29 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x20);
        fVar58 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar22 >> 0x20) + 0.0,(float)uVar22 + fVar58);
    }
    else if (iVar12 == 0x800) {
      if (lVar23 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_035575f4;
      fVar58 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar23 + 0x24) +
                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar58;
    }
    else {
      if (iVar12 == 0x1000) {
        if (lVar23 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar23 + 0x18) != 1) && (*(int *)(lVar23 + 0x18) != 0)) {
          uVar22 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar23 + 0x24) +
                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
          fVar58 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_03554c3c;
        }
        goto LAB_035575f4;
      }
      if (iVar12 == 0x2000) {
        if (lVar23 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_035575f4;
        fVar58 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar23 + 0x24) +
                              (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + fVar58);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    uVar22 = FUN_03912334(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar7);
    }
    uVar19 = FUN_036d35a8(uVar22,0,0);
    lVar23 = FUN_0357f060();
    if (lVar23 == 0) goto LAB_035574b8;
    FUN_036df824(lVar23,0);
    *(float *)(unaff_x19 + 0xe2) = fVar58;
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_039117fc(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    fVar68 = (float)FUN_03911954(unaff_x19[0xe5],0);
    uVar67 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar7 = OVRPlugin_Mesh_TypeInfo;
    lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar23 = *(long *)puVar7;
    }
    puVar27 = *(undefined4 **)(lVar23 + 0xb8);
    uVar53 = (ulong)(uint)puVar27[1];
    uVar54 = (ulong)(uint)puVar27[2];
    uVar56 = (ulong)(uint)puVar27[3];
    FUN_035683a4(*puVar27,uVar53,uVar54,uVar56,&stack0x000017b0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar23 = *unaff_x28;
    if (lVar23 == 0) goto LAB_035574b8;
    uVar11 = *unaff_x20;
    if ((int)uVar11 < 1) {
      fStack00000000000000d4 = 0.0;
      iVar14 = 0;
      goto LAB_03556f00;
    }
    lVar23 = *(long *)(lVar23 + 0x38);
    fVar58 = ABS(fVar58);
    fVar44 = 1.0;
    if ((uVar19 & 1) == 0) {
      fVar44 = fVar58;
    }
    if (lVar23 == 0) goto LAB_035574b8;
    bVar10 = false;
    bVar9 = false;
    _iStack0000000000000128 = 0;
    bVar6 = false;
    fStack00000000000000d4 = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000158 = 0.0;
    in_stack_00000068._4_4_ = 0;
    lVar29 = 0x2e0;
    fVar46 = 0.0;
    fVar64 = 0.0;
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
    uVar13 = 1;
    uVar55 = 0;
    goto LAB_03554e78;
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar19 = FUN_03586568();
  if (((uVar19 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, uVar11 = in_stack_000017dc,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  uVar11 = *unaff_x20;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar43 = (long)(int)uVar11;
  cVar26 = *(char *)(lVar23 + lVar43 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar29 = unaff_x19[0x24];
  if ((uint)uVar22 == uVar11) {
    in_stack_000017dc = (uint)((ulong)uVar22 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar23 + lVar43 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar23 + 0x2c) = 0;
      *(long *)(lVar23 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      uVar11 = *unaff_x20;
      if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
      bVar6 = true;
      *(int *)(lVar23 + (long)(int)uVar11 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      uVar22 = CONCAT44(3,uVar11 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar20 = FUN_03568ac0(*unaff_x21,0), lVar20 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar20,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
      *(ulong *)(lVar23 + lVar43 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar11 = *(uint *)((long)unaff_x19 + 0x494);
      bVar6 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar6 = true;
    }
  }
  else {
    bVar6 = false;
  }
  iVar14 = (int)unaff_x24;
  if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar23 = lVar23 + (long)(int)uVar11 * (long)iVar14;
    *(undefined1 *)(lVar23 + 0x194) = 0;
    *(undefined2 *)(lVar23 + 0x20) = 0x200b;
    *(undefined4 *)(lVar23 + 100) = 0;
    *unaff_x20 = uVar11 + 1;
    unaff_x28 = in_stack_00000170;
    uVar11 = in_stack_000017dc;
    goto LAB_03550bd0;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar11 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar11 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar19 & 1) != 0) {
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
        uVar19 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar19 & 1) != 0) {
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
      uVar19 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8410(in_stack_000017dc,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        in_stack_000017dc = uVar11 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    unaff_x28 = in_stack_00000170;
    uVar11 = in_stack_000017dc;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
    goto LAB_035574b8;
    uVar13 = *unaff_x20;
    uVar11 = *(uint *)(lVar23 + 0x18);
    if (uVar11 <= uVar13) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar23 + (long)(int)uVar13 * unaff_x24 + 0x58);
    if (bVar6) {
      lVar29 = unaff_x19[0x8f];
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar29 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar13 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar11 <= uVar13 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar68 = *(float *)(lVar23 + (long)(int)(uVar13 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar23 = *unaff_x21;
    }
    else {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar68 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar23 = unaff_x19[0x20];
    }
    if (lVar23 == 0) goto LAB_035574b8;
    fVar64 = (float)FUN_03776960(lVar23 + 0x50,0);
    fVar44 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar44 = 1.0;
    }
    fVar63 = 0.0;
    fVar46 = 0.0;
    if (!(bool)(bVar6 & in_stack_000017dc == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar63 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar23 = unaff_x19[0xc9];
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_035574b8;
    fVar45 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = *(float *)(lVar23 + 0x2c);
    fVar58 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar65 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar49 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar23 = unaff_x19[0x6d];
    if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar44 = ((fStack0000000000000158 * fVar68) / (float)iVar12) * fVar64 * fVar44;
    fVar58 = fVar44 * fVar45 * fVar47 * fVar58;
    *(float *)(lVar29 + 0x160) = fVar58;
    uVar11 = *(uint *)(unaff_x19 + 0x24);
    fVar48 = fVar44 * fVar65 * fVar49 * fVar48;
    if (uVar11 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar29 = unaff_x19[0xe1];
      if (lVar29 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar29 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar29 = *(long *)(lVar29 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar29 + 0x10c);
    }
LAB_035514b0:
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar68 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar68 = fVar58;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar12 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar12 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar23 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar23 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar23,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar23 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar23 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar43 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar43 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar44 = (float)FUN_03776960(&stack0x00001720,0);
      fVar68 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar68 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar68 = (fVar58 / (float)iVar12) * fVar44 * fVar68;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar63 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar63 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar64 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar23 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar23 + 0x20),0);
        fVar45 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar23 + 0x20) == 0) goto LAB_035574b8;
        fVar65 = *(float *)(lVar23 + 0x2c);
        fVar47 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar49 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar61 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar48 = fVar68 * fVar49 * fVar61 * fVar48;
        fVar63 = (fVar58 / (float)iVar12) * fVar44 * fVar63;
        fVar58 = fVar63 * (fVar64 / fVar45) * fVar65 * fVar47;
        fVar63 = fVar63 / fVar58;
        fVar46 = fVar63 * fVar46;
        fVar68 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar63 = fVar63 * fVar68;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar23 + 0x20) == 0) goto LAB_035574b8;
        fVar63 = *(float *)(lVar23 + 0x2c);
        fVar64 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar64 = 1.0;
        }
        fVar45 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar65 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar48 = fVar68 * fVar47 * fVar65 * fVar48;
        fVar58 = (fVar58 / (float)iVar12) * fVar44 * fVar64 * fVar63 * fVar45;
        fVar63 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar23;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar23);
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar23 + 0x2c) = 1;
      *(float *)(lVar23 + 0x160) = fVar58;
      *(long *)(lVar23 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar23 = *in_stack_00000170;
      if ((lVar23 == 0) || (lVar43 = *(long *)(lVar23 + 0x38), lVar43 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar43 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar29;
      goto LAB_035514b0;
    }
    lVar23 = *in_stack_00000170;
    fVar48 = 0.0;
    fVar68 = fVar48;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar68 = fVar58;
    }
    if (lVar23 == 0) goto LAB_035574b8;
    fVar46 = 0.0;
    fVar63 = 0.0;
  }
  lVar23 = *(long *)(lVar23 + 0x38);
  if (lVar23 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar23 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  uVar11 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
  uVar52 = unaff_x29[1];
  uVar18 = *unaff_x29;
  lVar23 = lVar23 + (long)(int)uVar11 * unaff_x24;
  *(undefined4 *)(lVar23 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar23 + 0x184) = uVar52;
  *(undefined8 *)(lVar23 + 0x17c) = uVar18;
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar23,0);
  puVar7 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x29[0x1df] = in_stack_00000c20;
  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(in_stack_000017dc,0);
    uVar13 = uVar13 & 1;
  }
  else {
    uVar13 = 0;
  }
  fVar44 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar45 = 0.0;
    fVar64 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar55 = *unaff_x20;
    uVar11 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar55 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uVar55 + 1) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + (long)(int)(uVar55 + 1) * (long)iVar14 + 0x30);
      if ((((lVar23 == 0) || (*unaff_x21 == 0)) ||
          (lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar11 | *(int *)(lVar23 + 0x28) << 0x10;
      uVar19 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar67 = 0;
      if ((uVar19 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar45 = 0.0;
        fVar64 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar67 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar64 = *(float *)(in_stack_000016f8 + 0x14);
        fVar45 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar44 = 0.0;
        }
      }
      uVar55 = *unaff_x20;
    }
    else {
      uVar67 = 0;
      fStack000000000000012c = 0.0;
      fVar45 = 0.0;
      fVar64 = 0.0;
    }
    if (0 < (int)uVar55) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= uVar55 - 1) goto LAB_035575f4;
      lVar23 = *(long *)(lVar23 + (ulong)(uVar55 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar23 == 0) || (*unaff_x21 == 0)) ||
         ((lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar23 + 0x28) | uVar11 << 0x10;
      uVar19 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar19 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar64 = (float)FUN_03571cb4(fVar64,fVar45,fStack000000000000012c,uVar67,
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
    fVar65 = *(float *)(unaff_x19 + 200);
    fVar47 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar65 = fVar65 - fVar68 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar65;
    if ((in_stack_000017dc == 0x200b) || (uVar13 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar65 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar65 = *(float *)(unaff_x19 + 0x56);
  fVar47 = 0.0;
  if (fVar65 != 0.0) {
    fVar47 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar49 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar47 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar65 * 0.5 - fVar68 * (fVar47 * 0.5 + fVar49));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar47;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar23 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar23,0,0);
    fVar49 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar23 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar23 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      fVar49 = 0.0;
      if ((uVar19 & 1) != 0) {
        lVar23 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar23 == 0) goto LAB_035574b8;
        fVar65 = (float)FUN_0369e060(lVar23,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar61 = *(float *)(*unaff_x21 + 0x1b0);
        fVar49 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        fVar49 = fVar49 * fVar65 * fVar61 * 0.25;
        if (fVar65 < fStack000000000000015c + fVar49) {
          fStack000000000000015c = fVar65 - fVar49;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar23 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_036cee6c(lVar23,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar23 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar23 == 0) goto LAB_035574b8;
      uVar19 = FUN_03699d3c(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar23 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar23 == 0) goto LAB_035574b8;
        uVar19 = FUN_03699d3c(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar23 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar23 == 0) goto LAB_035574b8;
          fVar65 = (float)FUN_0369e060(lVar23,*(undefined4 *)
                                               (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar61 = *(float *)(*unaff_x21 + 0x1a8);
          fVar49 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
          fVar49 = fVar49 * fVar65 * fVar61 * 0.25;
          if (fVar65 < fStack000000000000015c + fVar49) {
            fStack000000000000015c = fVar65 - fVar49;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar49 = 0.0;
  }
FUN_03551b84:
  fVar65 = *(float *)(unaff_x19 + 200);
  fVar61 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar65 = fVar65 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar68 * (fVar64 + ((fVar61 - fStack000000000000015c) - fVar49));
  fVar64 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar69 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar48 + fVar68 * (fVar45 + fStack000000000000015c + fVar64)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar64 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar64 = fVar69 - fVar68 * (fStack000000000000015c + fStack000000000000015c + fVar64);
  fVar45 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar61 = fVar65 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar68 * (fVar49 + fVar49 +
                             fStack000000000000015c + fStack000000000000015c + fVar45);
  fStack0000000000000104 = fVar65;
  fVar45 = fVar61;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar60 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar59 = fVar60 * fVar68 * (fVar49 + fStack000000000000015c + fVar45);
    fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar57 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar69 = fVar69 + 0.0;
    fVar64 = fVar64 + 0.0;
    fVar60 = fVar60 * fVar68 * (((fVar45 - fVar57) - fStack000000000000015c) - fVar49);
    fVar57 = fVar65 + fVar59;
    fVar45 = fVar61 + fVar60;
    fVar50 = (fVar59 - fVar60) * 0.5;
    fVar65 = (fVar65 + fVar60) - fVar50;
    fVar61 = (fVar61 + fVar59) - fVar50;
    fStack0000000000000104 = fVar57 - fVar50;
    fVar45 = fVar45 - fVar50;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar50 = 0.0;
    fVar59 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar60 = fVar64;
    fVar57 = fVar69;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar62 = (fVar61 + fVar65) * 0.5;
    fVar66 = (fVar64 + fVar69) * 0.5;
    fVar69 = fVar69 - fVar66;
    fStack0000000000000100 = 0.0;
    fVar57 = fVar69;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar62,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar62 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar60 = fVar64 - fVar66;
    fStack0000000000000114 = 0.0;
    fVar64 = fVar60;
    fVar65 = (float)FUN_036bdd2c(fVar65 - fVar62,_fStack0000000000000078,0);
    fVar65 = fVar62 + fVar65;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar64 = fVar66 + fVar64;
    fVar59 = 0.0;
    fVar61 = (float)FUN_036bdd2c(fVar61 - fVar62,_fStack0000000000000078,0);
    fVar61 = fVar62 + fVar61;
    fVar69 = fVar66 + fVar69;
    fVar59 = fVar59 + 0.0;
    fVar50 = 0.0;
    fVar45 = (float)FUN_036bdd2c(fVar45 - fVar62,_fStack0000000000000078,0);
    fVar45 = fVar62 + fVar45;
    fVar50 = fVar50 + 0.0;
    fVar60 = fVar66 + fVar60;
    fVar57 = fVar66 + fVar57;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar23 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar68;
  if (lVar23 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x11c) = fVar65;
  *(float *)(lVar23 + 0x120) = fVar64;
  *(float *)(lVar23 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x114) = fVar57;
  *(float *)(lVar23 + 0x110) = fStack0000000000000104;
  *(float *)(lVar23 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x128) = fVar61;
  *(float *)(lVar23 + 300) = fVar69;
  *(float *)(lVar23 + 0x130) = fVar59;
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x134) = fVar45;
  *(float *)(lVar23 + 0x138) = fVar60;
  *(float *)(lVar23 + 0x13c) = fVar50;
  if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
  goto LAB_035574b8;
  uVar55 = *unaff_x20;
  lVar29 = (long)(int)uVar55;
  if (*(uint *)(lVar23 + 0x18) <= uVar55) goto LAB_035575f4;
  lVar43 = lVar23 + lVar29 * unaff_x24;
  *(int *)(lVar43 + 0x140) = (int)unaff_x19[200];
  fVar69 = *(float *)(unaff_x19 + 0x9b);
  param_2 = (ulong)(uint)fVar69;
  fVar45 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar43 + 0x15c) = (fVar61 - fVar65) / (fVar57 - fVar64);
  *(float *)(lVar43 + 0x14c) = (fVar48 - fVar69) + fVar45;
  fVar46 = fVar46 * fVar68;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar46 = fVar46 / fStack0000000000000158;
    fVar63 = (fVar63 * fVar68) / fStack0000000000000158;
  }
  else {
    fVar63 = fVar63 * fVar68;
  }
  uVar2 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar13 == 0) || (uVar55 == uVar2)) {
    fVar63 = fVar45 + fVar63;
    fVar46 = fVar45 + fVar46;
    fVar65 = fVar63;
    fVar64 = fVar46;
    if (fVar45 != 0.0) {
      fVar64 = (fVar46 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
      fVar65 = (fVar63 - fVar45) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar64 <= fVar46) {
        fVar64 = fVar46;
      }
      if (fVar63 <= fVar65) {
        fVar65 = fVar63;
      }
    }
    lVar23 = lVar23 + lVar29 * unaff_x24;
    fVar45 = fVar64;
    if (fVar64 <= *(float *)(unaff_x19 + 0x99)) {
      fVar45 = *(float *)(unaff_x19 + 0x99);
    }
    fVar48 = fVar65;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar65) {
      fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar48;
    *(float *)(unaff_x19 + 0x99) = fVar45;
    *(float *)(lVar23 + 0x154) = fVar64;
    *(float *)(lVar23 + 0x158) = fVar65;
    *(float *)(lVar23 + 0x148) = fVar46 - fVar69;
    *(float *)(unaff_x19 + 0x98) = fVar46 - fVar69;
    *(float *)(lVar23 + 0x150) = fVar63 - fVar69;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar63 - fVar69;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar45;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar64 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar63 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar68 * fVar63) / fStack0000000000000158;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar64 <= fStack0000000000000158) {
        fVar64 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar64;
    }
    if ((float)param_2 == 0.0) {
      fVar64 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar46) {
        fVar64 = fVar46;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar64;
    }
  }
  else {
    fVar64 = *(float *)(unaff_x19 + 0x99);
    lVar23 = lVar23 + lVar29 * unaff_x24;
    *(float *)(lVar23 + 0x154) = fVar64;
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar64 = fVar64 - fVar69;
    *(float *)(lVar23 + 0x148) = fVar64;
    *(float *)(lVar23 + 0x158) = fVar46;
    *(float *)(unaff_x19 + 0x98) = fVar64;
    fVar46 = fVar46 - fVar69;
    *(float *)(lVar23 + 0x150) = fVar46;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
  }
  lVar23 = *in_stack_00000170;
  if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar15 = *unaff_x20;
  if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_035575f4;
  lVar29 = lVar29 + (long)(int)uVar15 * unaff_x24;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4f);
  uVar11 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((uVar13 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar30 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000a8;
    if (bVar6) {
      lVar23 = *(long *)(lVar23 + 0x50);
      if (lVar23 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar23 + 0x60);
      pfVar30 = (float *)(lVar23 + 100);
    }
    fVar46 = *pfVar33;
    fVar63 = *pfVar30;
    fVar64 = *(float *)(unaff_x19 + 0x6c);
    fVar45 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar46) - fVar63;
    bVar9 = true;
    if ((fVar64 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar64))) {
      bVar9 = fVar64 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000f8._4_4_ = fVar64;
    }
    fVar64 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar64 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar65 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      fVar58 = fVar68;
    }
    fVar69 = (float)param_2;
    fVar61 = 0.0;
    if ((0.0 < fVar69) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar61 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar15 = *unaff_x20;
    fVar61 = (*(float *)(unaff_x19 + 0x97) - (fVar48 - fVar69)) + fVar61;
    if (fStack00000000000000c4 < fVar61) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar15;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar18 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar57 = *(float *)(unaff_x19 + 0x59);
        if (((fVar57 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar69)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar61) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar58 <= fVar57) {
            fVar58 = fVar57;
          }
          goto LAB_03554b48;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar61 = *(float *)(unaff_x19 + 0x4a);
        param_2 = (ulong)(uint)fVar61;
        if ((fVar61 < fVar69) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = (fVar69 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar58 <= DAT_00d38b84) {
            fVar58 = DAT_00d38b84;
          }
          fVar68 = (fVar69 - fVar58) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar69;
          fVar58 = DAT_00d38e60;
          if (fVar68 != INFINITY) {
            fVar58 = (float)(int)fVar68 / 20.0;
          }
          if (fVar58 <= fVar61) {
            fVar58 = fVar61;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        lVar29 = *(long *)(lVar23 + 0xb8);
        lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = FUN_01a46ff8(lVar23);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
        iVar14 = FUN_0358c15c();
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
        if ((uVar15 == 0) || ((int)in_stack_000017a8 < 0)) {
          in_stack_000017a8 = 0xffffffff;
          *unaff_x20 = 0;
          uVar22 = uVar18;
UnityEngine_AnimatorStateInfo__get_fullPathHash:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          unaff_x28 = in_stack_00000170;
          uVar11 = in_stack_000017dc;
          goto LAB_03550bd0;
        }
        fVar58 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (fVar58 - fVar48 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_2 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar23 = NEON_rev64(param_2,4);
          unaff_x19[0x99] = lVar23;
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
        lVar23 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar23,0,0);
        if ((uVar19 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar22 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar22,*(undefined8 *)(*plVar42 + 0x530));
          lVar23 = unaff_x19[0x5d];
          if (lVar23 == 0) goto LAB_035574b8;
          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto UnityEngine_AnimationClip__get_hasMotionCurves;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar64 = ABS(fVar45) + fVar64 * (1.0 - fVar65) * fVar58;
    fVar58 = 1.0;
    if ((uVar32 & 0x18) != 0) {
      fVar58 = DAT_00d38acc;
    }
    fVar45 = fVar58 * in_stack_000000f8._4_4_;
    if (fVar45 < fVar64) {
      param_2 = (ulong)(uint)fVar49;
      if (((char)unaff_x19[0x5b] != '\0') && (uVar15 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar23 = *in_stack_00000170;
          if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar45 = *(float *)(unaff_x19 + 0x9b);
          fVar65 = 0.0;
          if ((0.0 < fVar45) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar65 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar65 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar65 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar23 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar23 == 0) goto LAB_035574b8;
          fVar45 = *(float *)(unaff_x19 + 0x9b);
          fVar65 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_035574b8;
        uVar34 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar23 + 0x18) <= uVar34) ||
           (uVar39 = uVar34 - 1, *(uint *)(lVar23 + 0x18) <= uVar39)) goto LAB_035575f4;
        param_2 = (ulong)(uint)(fVar65 + *(float *)(unaff_x19 + 0x97));
        fVar48 = (fVar65 + *(float *)(unaff_x19 + 0x97) + fVar45) -
                 *(float *)(lVar23 + (long)(int)uVar34 * unaff_x24 + 0x158);
        if (((bStack0000000000000074 & 1) == 0 &&
             *(short *)(lVar23 + (long)(int)uVar39 * (long)iVar14 + 0x20) == 0xad) &&
           ((fVar48 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack0000000000000074 = 0;
          uVar22 = CONCAT44(0x2d,uVar39);
          *unaff_x20 = uVar39;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar23 + (long)(int)uVar34 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar65 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar45 <= fVar65) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar65 = *(float *)((long)unaff_x19 + 0x1e4);
            param_2 = (ulong)(uint)fVar65;
            fVar45 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar45 < fVar65) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_03557594;
            goto LAB_03552d44;
          }
LAB_03557558:
          fVar68 = fVar64;
          if (0.0 < fVar65) {
            fVar68 = fVar64 / (1.0 - fVar65);
          }
          fVar65 = fVar65 + (fVar64 - fVar58 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar68;
LAB_035574e8:
          if (fVar45 <= fVar65) {
            fVar65 = fVar45;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar65;
          return;
        }
LAB_03552d44:
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        iVar12 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
        if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
           (((bStack0000000000000070 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
          goto LAB_035574b8;
          uVar34 = *unaff_x20 - 1;
          if (*(uint *)(lVar23 + 0x18) <= uVar34) goto LAB_035575f4;
          iStack0000000000000034 = iVar12;
          if (*(short *)(lVar23 + (long)(int)uVar34 * (long)iVar14 + 0x20) == 0xad) {
            bStack0000000000000074 = 0;
            uVar22 = CONCAT44(0x2d,uVar34);
            *unaff_x20 = uVar34;
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
            fVar58 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar48) / (float)((int)unaff_x19[0x95] + 1)) /
                     fStack0000000000000058;
            if (fVar58 <= fVar45) {
              fVar58 = fVar45;
            }
LAB_03554b48:
            *(float *)((long)unaff_x19 + 700) = fVar58;
            return;
          }
          fVar65 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar65 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557558;
          fVar65 = *(float *)((long)unaff_x19 + 0x1e4);
          param_2 = (ulong)(uint)fVar65;
          fVar45 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar45 < fVar65) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_03557594:
            fVar58 = (fVar65 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar58 <= DAT_00d38b84) {
              fVar58 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar65;
            fVar65 = fVar65 - fVar58;
            goto LAB_03557524;
          }
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          goto switchD_03552ef4_caseD_0;
        case 1:
          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar29 = *(long *)(lVar23 + 0xb8);
          lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
            lVar23 = FUN_01a46ff8(lVar23);
          }
          piVar21 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar21 == 0) {
            bStack0000000000000074 = 0;
LAB_03554580:
            uVar22 = DAT_00d37868;
            unaff_x29 = (undefined8 *)&stack0x000008a0;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            unaff_x28 = in_stack_00000170;
            in_stack_000017a8 = 0xffffffff;
            goto LAB_03550bd0;
          }
          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001008,&stack0x000008a0,0x378);
          iVar14 = FUN_0358c15c();
          bStack0000000000000074 = 0;
LAB_035529e8:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          iVar12 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar12;
          uVar22 = CONCAT44(0x2026,iVar12);
          in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = iVar14 - 1;
          goto LAB_03550bd0;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          bStack0000000000000074 = 0;
UnityEngine_AnimationClip__get_hasMotionCurves:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          uVar22 = CONCAT44(3,uVar15);
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
          goto switchD_03552ef4_caseD_6;
        default:
          bStack0000000000000074 = 0;
          goto LAB_03552f54;
        }
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar65 < fVar45) {
          fVar68 = fVar64 / (1.0 - fVar65);
          if (fVar65 <= 0.0) {
            fVar68 = fVar64;
          }
          fVar65 = fVar65 + (fVar64 - fVar58 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar68;
          goto LAB_035574e8;
        }
        fVar65 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar45 = *(float *)(unaff_x19 + 0x4a);
        if (fVar45 < fVar65) {
          fVar58 = (fVar65 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar58 <= DAT_00d38b84) {
            fVar58 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar65;
          fVar65 = fVar65 - fVar58;
LAB_03557524:
          fVar68 = fVar65 * 20.0 + 0.5;
          fVar58 = DAT_00d38e60;
          if (fVar68 != INFINITY) {
            fVar58 = (float)(int)fVar68 / 20.0;
          }
          if (fVar58 <= fVar45) {
            fVar58 = fVar45;
          }
LAB_03554658:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar58;
          return;
        }
      }
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        lVar29 = *(long *)(lVar23 + 0xb8);
        lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
          lVar23 = FUN_01a46ff8(lVar23);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar23 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        lVar23 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        param_3 = FUN_036cee6c(lVar23,0,0);
        unaff_x28 = in_stack_00000170;
        goto code_r0x03552a84;
      }
      if (iVar12 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_03552550;
      }
    }
LAB_03552f54:
    if (in_stack_000017dc == 0xad) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017dc == 9) {
        lVar23 = *in_stack_00000170;
        if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_035574b8;
        uVar15 = *unaff_x20;
        if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_035575f4;
        *(undefined1 *)(lVar29 + (long)(int)uVar15 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar15;
        lVar29 = *(long *)(lVar23 + 0x50);
        if (lVar29 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar45,fVar49);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      }
      uVar15 = *unaff_x20;
      if ((in_stack_00000068._4_4_ & 1) != 0) {
        *(uint *)(in_stack_00000080 + 0x1f0) = uVar15;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar15;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x50), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar23 + 0x60) = fVar46;
      *(float *)(lVar23 + 100) = fVar63;
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar64 = (float)param_2;
      fVar58 = 0.0;
      if ((0.0 < fVar64) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_2 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar64)) + fVar58)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar15;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar23 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar19 = FUN_036cee6c(lVar23,0,0);
        if ((uVar19 & 1) != 0) {
          plVar42 = (long *)unaff_x19[0x5d];
          uVar22 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x528))(plVar42,uVar22,*(undefined8 *)(*plVar42 + 0x530));
          lVar23 = unaff_x19[0x5d];
          if (lVar23 == 0) goto LAB_035574b8;
          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar42 = (long *)unaff_x19[0x5d];
          if (plVar42 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
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
        lVar23 = *in_stack_00000170;
        if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x50), lVar29 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
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
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x50), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
    }
  }
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (!bVar6)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar58 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar23 = unaff_x19[0xca];
    fVar64 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar64 = 1.0;
    }
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_035574b8;
    fVar45 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = *(float *)(lVar23 + 0x2c);
    fVar63 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
    fVar65 = *_fStack00000000000000a8;
    fVar63 = fVar45 * (fVar58 / (float)iVar12) * fVar46 * fVar64 * fVar48 * fVar63;
    fVar58 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x38), lVar23 == 0))
      goto LAB_035574b8;
      uVar15 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar64 = *(float *)(lVar23 + (long)(int)uVar15 * (long)iVar14 + 0x60);
      iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar45 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar23 = unaff_x19[0xca];
      fVar46 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar46 = 1.0;
      }
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_035574b8;
      fVar48 = *(float *)((long)unaff_x19 + 0x404);
      fVar49 = *(float *)(lVar23 + 0x2c);
      fVar63 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar23 = *(long *)(*in_stack_00000170 + 0x50), lVar23 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar65 = *(float *)(lVar23 + 0x60);
      fVar58 = *(float *)(lVar23 + 100);
      fVar63 = fVar48 * (fVar64 / (float)iVar12) * fVar45 * fVar46 * fVar49 * fVar63;
    }
    fVar45 = *(float *)(unaff_x19 + 0x9b);
    fVar64 = 0.0;
    fVar46 = 0.0;
    if ((0.0 < fVar45) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar49 = *(float *)(unaff_x19 + 0x97);
    fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar48 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar23 = *(long *)(unaff_x19[0xca] + 0x20), lVar23 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar23,0);
      fVar64 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar69 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = (fStack000000000000009c - fVar65) - fVar58;
    bVar9 = true;
    if ((fVar69 <= fVar58) && (bVar9 = false, !NAN(fVar69))) {
      bVar9 = fVar69 == -1.0;
    }
    if (!bVar9) {
      fVar58 = fVar69;
    }
    fVar65 = 1.0;
    if ((uVar32 & 0x18) != 0) {
      fVar65 = DAT_00d38acc;
    }
    if (((fVar49 - (fVar61 - fVar45)) + fVar46 < fStack00000000000000c4) &&
       (ABS(fVar48) + fVar63 * fVar64 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar65 * fVar58)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar23 = *(long *)(*(long *)puVar7 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar23 + 0x788),0x378);
      FUN_0209b210(lVar23 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar23 = *in_stack_00000170;
  if (lVar23 == 0) goto LAB_035574b8;
  lVar29 = *(long *)(lVar23 + 0x38);
  unaff_d13 = (ulong)(uint)fVar68;
  if (lVar29 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar15 = *(uint *)(unaff_x19 + 0x95);
  lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar29 + 100) = uVar15;
  *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar6) ||
     ((in_stack_000017dc < 0xe && ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) != 0)))) {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_035575f4;
    if (*(int *)(lVar23 + (long)(int)uVar15 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_035575f4;
    *(int *)(lVar23 + (long)(int)uVar15 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar58 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar46 = *(float *)(unaff_x19 + 200);
    fVar64 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar58 = fVar68 * fVar58 * fVar64;
    fVar64 = fVar58 * (float)(int)(fVar46 / fVar58);
    param_2 = (ulong)(uint)fVar64;
    if (fVar64 <= fVar46) {
      fVar64 = fVar46 + fVar58;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar64;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar46 = 1.0;
      }
      else {
        fVar46 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar64 = *(float *)(unaff_x19 + 200);
      fVar63 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar64 = fVar64 + fVar58 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar68 * (fStack000000000000012c + fVar46 * fVar63) +
                                 fStack00000000000000d4 *
                                 (fStack00000000000000d0 +
                                 fVar44 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar64;
      goto joined_r0x035535c0;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar64 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar68 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + fVar44 + *(float *)(*unaff_x21 + 0x1ac)));
    param_2 = (ulong)(uint)fVar64;
    fVar64 = *(float *)(unaff_x19 + 200) - fVar64;
    *(float *)(unaff_x19 + 200) = fVar64;
    if ((in_stack_000017dc == 0x200b) || (uVar13 != 0)) {
      fVar58 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar58;
      fVar64 = fVar64 - fVar58;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar58 = *(float *)(unaff_x19 + 200);
    fVar64 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar47) +
                      fStack00000000000000d4 * (fVar44 + *(float *)(*unaff_x21 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar64;
joined_r0x035535c0:
    if ((in_stack_000017dc == 0x200b) || (param_2 = (ulong)(uint)fVar58, uVar13 != 0)) {
      fVar58 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar58;
      fVar64 = fVar64 + fVar58;
      goto LAB_03553678;
    }
  }
  lVar23 = *in_stack_00000170;
  if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar15 = *unaff_x20;
  uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar32 <= uVar15) goto LAB_035575f4;
  *(float *)(lVar29 + (long)(int)uVar15 * unaff_x24 + 0x144) = fVar64;
  uVar34 = in_stack_000017dc;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((bool)(bVar6 & in_stack_000017dc == 0x2d)) || ((float)uVar15 == in_stack_00000088._4_4_))
    goto LAB_0355371c;
  }
  else {
    if (1 < in_stack_000017dc - 0x2028) {
      if (in_stack_000017dc != 0xd) goto LAB_03553700;
      param_2 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar15 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar58 = *(float *)(unaff_x19 + 0x99);
      fVar64 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar58 = fVar58 - fVar64;
      if (((fStack000000000000005c < ABS(fVar58)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar58);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar58;
        *(float *)(unaff_x19 + 0x9b) = fVar58 + *(float *)(unaff_x19 + 0x9b);
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        lVar29 = *(long *)(lVar23 + 0xb8);
        if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar29 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar29 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar23 + 0xb8) + 0x818,0);
          lVar23 = *(long *)(*(long *)puVar7 + 0xb8);
          *(float *)(lVar23 + 0x7bc) = fVar58 + *(float *)(lVar23 + 0x7bc);
          *(float *)(lVar23 + 0x800) = fVar58 + *(float *)(lVar23 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar23 + 0x788),0x378);
          FUN_0209b210(lVar23 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar46 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar64 = *(float *)((long)unaff_x19 + 0x4cc) - fVar46;
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar64 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar58 = fVar64;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar58;
    fVar63 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017d4 == '\0') {
      in_stack_000017d8 = fVar58;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017d4 = '\x01';
    }
    lVar23 = *in_stack_00000170;
    if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    uVar15 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_035575f4;
    lVar43 = unaff_x19[0x93];
    lVar20 = lVar29 + (long)(int)uVar15 * 0x5c;
    *(int *)(lVar20 + 0x34) = (int)lVar43;
    uVar32 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar43 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar32 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar32;
    *(uint *)(lVar20 + 0x38) = uVar32;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar32 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar20 + 0x40) = iVar12;
    *(int *)(lVar20 + 0x24) = (*(int *)(lVar20 + 0x3c) - *(int *)(lVar20 + 0x34)) + 1;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_035575f4;
    uVar67 = *(undefined4 *)(lVar23 + (long)(int)uVar32 * (long)iVar14 + 0x11c);
    lVar29 = lVar29 + (long)(int)uVar15 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar64;
    *(undefined4 *)(lVar29 + 0x6c) = uVar67;
    lVar23 = *in_stack_00000170;
    if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x50), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar63 = fVar63 - fVar46;
    param_2 = (ulong)(uint)fVar63;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) =
         *(undefined4 *)(lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar29 + 0x78) = fVar63;
    lVar23 = *in_stack_00000170;
    if ((lVar23 == 0) || (lVar43 = *(long *)(lVar23 + 0x50), lVar43 == 0)) goto LAB_035574b8;
    lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar29 = lVar43 + lVar20 * 0x5c;
    *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - fVar68 * fStack000000000000015c;
    *(float *)(lVar29 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar29 + 0x24) == 1) {
      *(int *)(lVar43 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    lVar37 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar32 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar29 + lVar37 * unaff_x24 + 0x194) == '\0') &&
       (lVar37 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar32 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar43 = lVar43 + lVar20 * 0x5c;
    fVar68 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + fVar44 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar58 = -fVar68;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar58 = fVar68;
    }
    *(float *)(lVar43 + 0x58) = *(float *)(lVar29 + lVar37 * unaff_x24 + 0x144) + fVar58;
    *(float *)(lVar43 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar43 + 0x54) = fVar64;
    *(float *)(lVar43 + 0x48) = in_stack_00000060 + (fVar63 - fVar64);
    *(float *)(lVar43 + 0x4c) = fVar63;
    if ((int)in_stack_000017dc < 0x2d) {
      if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar23 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar14 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar14;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x50) == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar14) {
          FUN_0358ca18();
          lVar23 = unaff_x19[0x6d];
          if (lVar23 == 0) goto LAB_035574b8;
        }
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar58 = *(float *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((in_stack_000017dc == 0x2029) || (fVar68 = 0.0, in_stack_000017dc == 10)) {
            fVar68 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar25 = 0;
          fVar68 = fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar68) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_000017dc == 0x2029) || (fVar68 = 0.0, in_stack_000017dc == 10)) {
            fVar68 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar25 = 1;
          fVar68 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar68);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar68;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        uVar18 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar58;
        param_2 = NEON_rev64(uVar18,4);
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
  uVar15 = *unaff_x20;
  if (uVar32 <= uVar15) goto LAB_035575f4;
  if (*(char *)(lVar29 + (long)(int)uVar15 * unaff_x24 + 0x194) != '\0') {
    lVar29 = lVar29 + (long)(int)uVar15 * unaff_x24;
    uVar53 = *(ulong *)(lVar29 + 0x11c);
    uVar19 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar19 ^ (uVar19 ^ uVar53) &
                  ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar53 >> 0x20)),
                            -(uint)((float)uVar19 < (float)uVar53));
    uVar19 = *(ulong *)(in_stack_00000080 + 0x238);
    param_2 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar19 ^ (uVar19 ^ param_2) &
                  ~CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar19 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar19));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
    lVar29 = *(long *)(lVar23 + 0x58);
    if (lVar29 == 0) goto LAB_035574b8;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar29 + 0x18) < iVar12) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar23 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar23 = *in_stack_00000170;
      if (lVar23 == 0) goto LAB_035574b8;
    }
    lVar29 = *(long *)(lVar23 + 0x58);
    if (lVar29 == 0) goto LAB_035574b8;
    uVar32 = *(uint *)(unaff_x19 + 0x96);
    lVar43 = (long)(int)uVar32;
    uVar15 = *(uint *)(lVar29 + 0x18);
    if (uVar15 <= uVar32) goto LAB_035575f4;
    lVar20 = lVar29 + lVar43 * 0x14;
    fVar68 = *(float *)(lVar20 + 0x30);
    param_2 = (ulong)(uint)fVar68;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar68 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar58 = fVar68;
    }
    *(float *)(lVar20 + 0x30) = fVar58;
    uVar34 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar34 == 0 && uVar32 == 0) {
      *(uint *)(lVar29 + (ulong)uVar32 * 0x14 + 0x20) = uVar34;
    }
    else {
      uVar39 = uVar34 - 1;
      if (0 < (int)uVar34) {
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar23 + 0x18) <= uVar39) goto LAB_035575f4;
        if (uVar32 != *(uint *)(lVar23 + (ulong)uVar39 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar15 <= uVar32 - 1) goto LAB_035575f4;
          *(uint *)(lVar29 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar39;
          *(uint *)(lVar29 + 0x20 + lVar43 * 0x14) = uVar34;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar34 == in_stack_00000088._4_4_) {
        *(float *)(lVar29 + lVar43 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((uVar13 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
         (0x1d < in_stack_000017dc - 0xa961)) || (uVar19 = FUN_03597a54(0), (uVar19 & 1) != 0)) &&
       ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
         (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
    goto LAB_03553f78;
    lVar23 = FUN_035978e8(0);
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_035574b8;
    uVar15 = FUN_0219c130(*(long *)(lVar23 + 0x10),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
      in_stack_000008a0 = in_stack_000017dc;
      if ((uVar15 & 1) == 0) {
LAB_03554270:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_035542a8;
      }
LAB_035541dc:
      if (uVar55 != uVar2 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (uVar13 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar23 = FUN_035978e8(0);
    if (((lVar23 == 0) || (*in_stack_00000170 == 0)) ||
       (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar23 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar29 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20);
    uVar19 = FUN_0219c130(*(long *)(lVar23 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar15 & 1) != 0) goto LAB_035541dc;
    if ((uVar19 & 1) == 0) goto LAB_03554270;
    if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
    if (uVar13 != 0) {
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
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_000017dc - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017dc != 0xa0 && (in_stack_000017dc != 0x2060)))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        bStack0000000000000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_035542ac;
      }
      goto LAB_03553ef0;
    }
LAB_03553f78:
    if ((bStack0000000000000070 & 1) == 0) {
LAB_035542a8:
      bStack0000000000000070 = 0;
      goto LAB_035542ac;
    }
    if (uVar13 == 0) {
UnityEngine_Animator__set_animatePhysics:
      if ((bStack0000000000000074 & 1) == 0 && in_stack_000017dc == 0xad)
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    else {
UnityEngine_Animator__get_bodyPositionInternal:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
    }
LAB_0355422c:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0358c4f0();
  }
  bStack0000000000000070 = 1;
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  unaff_x28 = in_stack_00000170;
  goto LAB_03550bd0;
switchD_03552ef4_caseD_6:
  lVar23 = unaff_x19[0x5d];
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_036cee6c(lVar23,0,0);
  if ((uVar19 & 1) != 0) {
    plVar42 = (long *)unaff_x19[0x5d];
    uVar22 = (**(code **)(*unaff_x19 + 0x518))();
    if (plVar42 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar42 + 0x528))(plVar42,uVar22,*(undefined8 *)(*plVar42 + 0x530));
    lVar23 = unaff_x19[0x5d];
    if (lVar23 == 0) goto LAB_035574b8;
    *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
    FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar42 = (long *)unaff_x19[0x5d];
    if (plVar42 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar42 + 0x7a8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7b0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
  bStack0000000000000074 = 0;
  unaff_x28 = in_stack_00000170;
  goto LAB_03552b00;
LAB_03554e78:
  uVar11 = uVar13 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar43 = *(long *)(*unaff_x28 + 0x50), lVar43 == 0)) goto LAB_035574b8;
  lVar37 = (long)(int)uVar11;
  lVar20 = lVar23 + lVar37 * 0x178;
  uVar2 = *(uint *)(lVar20 + 100);
  if (*(uint *)(lVar43 + 0x18) <= uVar2) goto LAB_035575f4;
  lVar40 = (long)(int)uVar2;
  lVar43 = lVar43 + lVar40 * 0x5c;
  lVar35 = *(long *)(lVar20 + 0x38);
  uVar4 = *(ushort *)(lVar20 + 0x20);
  uVar32 = *(uint *)(lVar43 + 0x3c);
  uVar15 = *(uint *)(lVar43 + 0x68);
  iVar3 = *(int *)(lVar43 + 0x20);
  iVar16 = *(int *)(lVar43 + 0x28);
  iVar17 = *(int *)(lVar43 + 0x2c);
  uVar34 = *(uint *)(lVar43 + 0x40);
  lVar20 = (long)(int)uVar34;
  fVar47 = *(float *)(lVar43 + 0x4c);
  fVar48 = *(float *)(lVar43 + 0x54);
  fVar63 = *(float *)(lVar43 + 0x58);
  fVar69 = *(float *)(lVar43 + 0x5c);
  fVar49 = *(float *)(lVar43 + 0x60);
  fVar61 = *(float *)(lVar43 + 0x6c);
  fVar57 = *(float *)(lVar43 + 0x70);
  fVar45 = *(float *)(lVar43 + 0x74);
  fVar65 = *(float *)(lVar43 + 0x78);
  uVar39 = (uint)uVar4;
  if ((int)uVar15 < 9) {
    switch(uVar15) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar49 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar63;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar49 + fVar69 * 0.5) - fVar63 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar69 + fVar49) - fVar63;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar69 + fVar49;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar15 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar4 < 0xad) {
      if ((uVar4 != 3) && (uVar4 != 10)) goto LAB_03554fac;
    }
    else if ((uVar4 != 0xad) && ((uVar4 != 0x200b && (uVar4 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_035575f4;
      uVar5 = *(undefined2 *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b8cc4(uVar5,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar63 <= fVar69) && (!bVar1 && uVar15 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar69 + fVar49;
        }
        goto LAB_03555088;
      }
      if (((uVar13 == 1) || (uVar2 != uVar55)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar49;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar69 + fVar49;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar39,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar26 = (char)unaff_x19[0x1e];
        fVar49 = -fVar63;
        if (cVar26 != '\0') {
          fVar49 = fVar63;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_035575f4;
        iVar17 = (int)*(char *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x194) +
                 (-iVar3 - ((uint)fStack0000000000000028 & 1)) + iVar17 + -1;
        if (iVar17 < 1) {
          fVar63 = 1.0;
          iVar17 = 1;
        }
        else {
          fVar63 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar39 == 9) {
LAB_03556e74:
          fVar63 = 1.0 - fVar63;
        }
        else {
          if (uVar39 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar19 = FUN_026b97f8(uVar39,0);
            cVar26 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_03556e74;
          }
          iVar17 = (iVar3 - (~(uint)fStack0000000000000028 & 1)) + iVar16;
        }
        fVar63 = ((fVar69 + fVar49) * fVar63) / (float)iVar17;
        if (cVar26 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar63;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar63;
        }
      }
    }
  }
  else if (uVar15 == 0x20) {
    fVar63 = fVar61 + fVar45;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar15 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar15 <= uVar11) goto LAB_035575f4;
  lVar43 = lVar23 + lVar37 * 0x178;
  fVar69 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar63 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar49 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar43 + 0x194) == '\0') goto LAB_03555938;
  iVar16 = *(int *)(lVar23 + lVar37 * 0x178 + 0x2c);
  if (iVar16 != 0) goto LAB_0355574c;
  fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar28 = lVar23 + lVar37 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar46 = 1.0;
    break;
  case 1:
    fVar65 = *(float *)(lVar23 + lVar37 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar28 = lVar23 + lVar37 * 0x178;
      fVar45 = (in_stack_000000f8._4_4_ + fVar65) - *(float *)(in_stack_00000080 + 0x230);
      fVar65 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar28 = lVar23 + lVar37 * 0x178;
    fVar45 = fVar45 - fVar61;
    *(float *)(lVar28 + 0x84) = fVar46 + (fVar65 - fVar61) / fVar45;
    *(float *)(lVar28 + 0xac) = fVar46 + (*(float *)(lVar28 + 0x98) - fVar61) / fVar45;
    *(float *)(lVar28 + 0xd4) = fVar46 + (*(float *)(lVar28 + 0xc0) - fVar61) / fVar45;
    fVar46 = fVar46 + (*(float *)(lVar28 + 0xe8) - fVar61) / fVar45;
    break;
  case 2:
    lVar28 = lVar23 + lVar37 * 0x178;
    fVar65 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar45 = (in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar28 + 0x84) = fVar46 + fVar45 / fVar65;
    *(float *)(lVar28 + 0xac) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar28 + 0xd4) =
         fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar46 = fVar46 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar28 = lVar23 + lVar37 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar23 + lVar37 * 0x178;
      fVar65 = fVar65 - fVar57;
      fVar45 = fVar46 + (*(float *)(lVar28 + 0x74) - fVar57) / fVar65;
      fVar65 = fVar46 + (*(float *)(lVar28 + 0x9c) - fVar57) / fVar65;
      *(float *)(lVar28 + 0x88) = fVar45;
      *(float *)(lVar28 + 0xb0) = fVar65;
      *(float *)(lVar28 + 0xd8) = fVar45;
      *(float *)(lVar28 + 0x100) = fVar65;
      break;
    case 2:
      lVar28 = lVar23 + lVar37 * 0x178;
      fVar45 = fVar46 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar28 + 0x88) = fVar45;
      fVar65 = *(float *)(unaff_x19 + 0x9c);
      fVar61 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar28 + 0xd8) = fVar45;
      fVar45 = fVar46 + (*(float *)(lVar28 + 0x9c) - fVar65) / (fVar61 - fVar65);
      *(float *)(lVar28 + 0xb0) = fVar45;
      *(float *)(lVar28 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar15 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar15 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar23 + lVar37 * 0x178;
    fVar45 = *(float *)(lVar28 + 0x15c);
    fVar65 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar45) * 0.5;
    fVar61 = fVar46 + *(float *)(lVar28 + 0x88) * fVar45 + fVar65;
    fVar46 = fVar46 + fVar65 + *(float *)(lVar28 + 0xb0) * fVar45;
    *(float *)(lVar28 + 0x84) = fVar61;
    *(float *)(lVar28 + 0xac) = fVar61;
    *(float *)(lVar28 + 0xd4) = fVar46;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar23 + lVar37 * 0x178 + 0xfc) = fVar46;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar15 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar23 + lVar37 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar15) {
      lVar28 = lVar23 + lVar37 * 0x178;
      fVar47 = fVar47 - fVar48;
      fVar46 = (*(float *)(lVar28 + 0x74) - fVar48) / fVar47;
      fVar47 = (*(float *)(lVar28 + 0x9c) - fVar48) / fVar47;
      *(float *)(lVar28 + 0x88) = fVar46;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar15 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar23 + lVar37 * 0x178;
    fVar46 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar28 + 0x88) = fVar46;
    fVar47 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar28 + 0xb0) = fVar47;
    *(float *)(lVar28 + 0xd8) = fVar47;
    *(float *)(lVar28 + 0x100) = fVar46;
    break;
  case 3:
    if (uVar15 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar23 + lVar37 * 0x178;
    fVar47 = *(float *)(lVar28 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar47) * 0.5;
    fVar46 = *(float *)(lVar28 + 0x84) / fVar47 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar28 + 0xd4) / fVar47;
    *(float *)(lVar28 + 0x88) = fVar46;
    *(float *)(lVar28 + 0xb0) = fVar45;
    *(float *)(lVar28 + 0x100) = fVar46;
    *(float *)(lVar28 + 0xd8) = fVar45;
  }
  if (uVar15 <= uVar11) goto LAB_035575f4;
  lVar28 = lVar23 + lVar37 * 0x178;
  fVar46 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar37 * 0x178 + 400) & 1) != 0)) {
    fVar46 = -fVar46;
  }
  fVar45 = fVar58;
  if (((iVar12 == 2) || (fVar45 = fVar44, iVar12 == 1)) || (fVar45 = fVar58 / fVar68, iVar12 == 0))
  {
    fVar46 = fVar45 * fVar46;
  }
  lVar28 = lVar23 + lVar37 * 0x178;
  fVar47 = *(float *)(lVar28 + 0x88);
  fVar65 = *(float *)(lVar28 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar65 != INFINITY) {
    fVar45 = (float)(int)fVar65;
  }
  fVar61 = *(float *)(lVar28 + 0xd4);
  fVar57 = *(float *)(lVar28 + 0xd8);
  fVar48 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar48 = (float)(int)fVar47;
  }
  uVar51 = FUN_03591d3c(fVar65 - fVar45,fVar47 - fVar48);
  *(undefined4 *)(lVar28 + 0x84) = uVar51;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar57 = fVar57 - fVar48;
  *(float *)(lVar28 + 0x88) = fVar46;
  uVar51 = FUN_03591d3c(fVar65 - fVar45,fVar57);
  *(undefined4 *)(lVar23 + lVar37 * 0x178 + 0xac) = uVar51;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar61 = fVar61 - fVar45;
  *(float *)(lVar23 + lVar37 * 0x178 + 0xb0) = fVar46;
  fVar45 = (float)FUN_03591d3c(fVar61,fVar57);
  *(float *)(lVar28 + 0xd4) = fVar45;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_035575f4;
  *(float *)(lVar28 + 0xd8) = fVar46;
  uVar51 = FUN_03591d3c(fVar61,fVar47 - fVar48);
  *(undefined4 *)(lVar23 + lVar37 * 0x178 + 0xfc) = uVar51;
  uVar15 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar15 <= uVar11) goto LAB_035575f4;
  *(float *)(lVar23 + lVar37 * 0x178 + 0x100) = fVar46;
LAB_0355574c:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar15 <= uVar11) goto LAB_035575f4;
      lVar43 = lVar23 + lVar37 * 0x178;
      *(ulong *)(lVar43 + 0x70) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar43 + 0x70));
      *(float *)(lVar43 + 0x78) = fVar49 + *(float *)(lVar43 + 0x78);
      *(ulong *)(lVar43 + 0x98) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar43 + 0x98));
      *(float *)(lVar43 + 0xa0) = fVar49 + *(float *)(lVar43 + 0xa0);
      *(ulong *)(lVar43 + 0xc0) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar43 + 0xc0));
      *(float *)(lVar43 + 200) = fVar49 + *(float *)(lVar43 + 200);
      *(ulong *)(lVar43 + 0xe8) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar43 + 0xe8));
      *(float *)(lVar43 + 0xf0) = fVar49 + *(float *)(lVar43 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar15) {
        if (*(uint *)(lVar23 + lVar37 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar43 = lVar23 + lVar37 * 0x178;
          *(ulong *)(lVar43 + 0x70) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar43 + 0x70));
          *(float *)(lVar43 + 0x78) = fVar49 + *(float *)(lVar43 + 0x78);
          *(ulong *)(lVar43 + 0x98) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar43 + 0x98));
          *(float *)(lVar43 + 0xa0) = fVar49 + *(float *)(lVar43 + 0xa0);
          *(ulong *)(lVar43 + 0xc0) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar43 + 0xc0));
          *(float *)(lVar43 + 200) = fVar49 + *(float *)(lVar43 + 200);
          *(ulong *)(lVar43 + 0xe8) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar43 + 0xe8));
          *(float *)(lVar43 + 0xf0) = fVar49 + *(float *)(lVar43 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar15 <= uVar11) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar15 = *(uint *)(lVar23 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar28 = lVar23 + lVar37 * 0x178;
  *(undefined8 *)(lVar28 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar28 + 0x78) = uVar51;
  if (uVar15 <= uVar11) goto LAB_035575f4;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar28 = lVar23 + lVar37 * 0x178;
  *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 0xa0) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 200) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 0xf0) = uVar51;
  *(undefined1 *)(lVar43 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar16 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar31)();
  }
  else if (iVar16 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  uVar22 = *(undefined8 *)(lVar43 + 0x11c);
  *(undefined8 *)(lVar43 + 0x11c) =
       CONCAT44(fVar63 + (float)((ulong)uVar22 >> 0x20),fVar69 + (float)uVar22);
  *(float *)(lVar43 + 0x124) = fVar49 + *(float *)(lVar43 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  *(ulong *)(lVar43 + 0x110) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0x110) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar43 + 0x110));
  *(float *)(lVar43 + 0x118) = fVar49 + *(float *)(lVar43 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  *(ulong *)(lVar43 + 0x128) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar43 + 0x128) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar43 + 0x128));
  *(float *)(lVar43 + 0x130) = fVar49 + *(float *)(lVar43 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar43 = lVar43 + lVar37 * 0x178;
  *(float *)(lVar43 + 0x134) = fVar69 + *(float *)(lVar43 + 0x134);
  *(ulong *)(lVar43 + 0x138) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar43 + 0x138) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar43 + 0x138));
  lVar43 = *in_stack_00000170;
  if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar15 = *(uint *)(lVar28 + 0x18);
  if (uVar15 <= uVar11) goto LAB_035575f4;
  lVar36 = lVar28 + lVar37 * 0x178;
  uVar53 = CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar36 + 0x140));
  fVar45 = fVar63 + *(float *)(lVar36 + 0x150);
  uVar54 = (ulong)(uint)fVar45;
  uVar56 = CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar45;
  *(ulong *)(lVar36 + 0x140) = uVar53;
  *(ulong *)(lVar36 + 0x148) = uVar56;
  if (uVar2 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar11 == uVar55) goto LAB_03555b44;
  }
  else {
    lVar43 = *(long *)(lVar43 + 0x50);
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar36 = (long)(int)uVar55;
    lVar38 = lVar43 + lVar36 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar38 + 0x58);
    fVar45 = fVar63 + *(float *)(lVar38 + 0x54);
    uVar53 = (ulong)(uint)fVar45;
    fVar47 = fVar69 + *(float *)(lVar38 + 0x58);
    uVar54 = (ulong)(uint)fVar47;
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar45;
    *(float *)(lVar38 + 0x58) = fVar47;
    if (uVar15 <= *(uint *)(lVar38 + 0x34)) goto LAB_035575f4;
    uVar51 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar43 = lVar43 + lVar36 * 0x5c;
    *(float *)(lVar43 + 0x70) = fVar45;
    *(undefined4 *)(lVar43 + 0x6c) = uVar51;
    lVar43 = *in_stack_00000170;
    if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar43 = *(long *)(lVar43 + 0x38);
    if (lVar43 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar28 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar28 = lVar28 + lVar36 * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar11 == uVar55) {
      lVar43 = *in_stack_00000170;
      if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar36 = lVar28 + lVar40 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar36 + 0x58);
      uVar53 = CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                        fVar63 + (float)*(undefined8 *)(lVar36 + 0x4c));
      fVar45 = fVar63 + *(float *)(lVar36 + 0x54);
      fVar69 = fVar69 + *(float *)(lVar36 + 0x58);
      uVar54 = (ulong)(uint)fVar69;
      *(ulong *)(lVar36 + 0x4c) = uVar53;
      *(float *)(lVar36 + 0x54) = fVar45;
      *(float *)(lVar36 + 0x58) = fVar69;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(lVar36 + 0x34)) goto LAB_035575f4;
      uVar51 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar28 = lVar28 + lVar40 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar45;
      *(undefined4 *)(lVar28 + 0x6c) = uVar51;
      lVar43 = *in_stack_00000170;
      if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar28 + lVar40 * 0x5c + 0x40);
      if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar28 = lVar28 + lVar40 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar19 = FUN_026b82c4(uVar39,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar39 - 0x2010)) && (uVar39 != 0xad)) && (uVar39 != 0x2d)) {
    if (bVar9) {
      if (((uVar13 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*unaff_x20 && ((uVar39 == 0x2019 || (uVar39 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar13 - 2) goto LAB_035575f4;
        uVar5 = *(undefined2 *)(lVar23 + lVar29 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b82c4(uVar5,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar23 + lVar29 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_026b82c4(uVar5,0);
          if ((uVar19 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar13 != 1) {
LAB_0355686c:
        bVar9 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b81f8(uVar39,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b63d8(uVar39,0);
        if (((uVar39 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar11 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b82c4(uVar39,0);
      iVar16 = iStack0000000000000128;
      if ((uVar19 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar16 = uVar13 - 2;
    }
    lVar43 = *in_stack_00000170;
    if (lVar43 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar43 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar43 + 0x24);
    iVar17 = *(int *)(lVar28 + 0x18);
    if (iVar17 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar43 + 0x40),iVar17 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar43 = *in_stack_00000170;
      if (lVar43 == 0) goto LAB_035574b8;
    }
    lVar43 = *(long *)(lVar43 + 0x40);
    if (lVar43 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar43 = lVar43 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar43 + 0x20) = unaff_x19;
    *(float *)(lVar43 + 0x28) = fStack0000000000000158;
    *(int *)(lVar43 + 0x2c) = iVar16;
    *(int *)(lVar43 + 0x30) = (iVar16 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar43 = unaff_x19[0x6d];
    if (lVar43 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar43 + 0x50);
    *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar28 = lVar28 + lVar40 * 0x5c;
    bVar9 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
  }
  else {
    if (!bVar9) {
      fStack0000000000000158 = (float)uVar11;
    }
    if (uVar11 == *unaff_x20 - 1) {
      lVar43 = *in_stack_00000170;
      if (lVar43 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar43 + 0x40);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar43 + 0x24);
      iVar16 = *(int *)(lVar28 + 0x18);
      if (iVar16 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar43 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar43 = *in_stack_00000170;
        if (lVar43 == 0) goto LAB_035574b8;
      }
      lVar43 = *(long *)(lVar43 + 0x40);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar43 = lVar43 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar43 + 0x20) = unaff_x19;
      *(float *)(lVar43 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar43 + 0x2c) = uVar11;
      *(uint *)(lVar43 + 0x30) = uVar13 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar43 = unaff_x19[0x6d];
      if (lVar43 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar43 + 0x50);
      *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar28 = lVar28 + lVar40 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
LAB_03555d68:
    bVar9 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  uVar55 = *(uint *)(lVar43 + 0x18);
  if (uVar55 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar43 + lVar37 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar55 <= uVar13 - 2) goto LAB_035575f4;
      lVar40 = *unaff_x19;
      uVar55 = *(uint *)(lVar43 + lVar29 + -0x330);
      uVar51 = *(undefined4 *)(lVar43 + lVar29 + -0x2f8);
LAB_035562ec:
      pcVar31 = *(code **)(lVar40 + 0x8d8);
LAB_035562f4:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)_bStack0000000000000070;
      uVar54 = (ulong)_bStack0000000000000074;
      (*pcVar31)(fStack0000000000000078,uVar53,uVar54,uVar56,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar51);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar43 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar64 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar43 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar43 = lVar43 + lVar37 * 0x178;
    iVar16 = *(int *)(lVar43 + 0x68);
    *(int *)(lVar43 + 0x16c) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar16 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar19 = FUN_026b63d8(uVar39,0);
    if ((uVar39 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar43 = *in_stack_00000170;
      if ((lVar43 == 0) || (lVar40 = *(long *)(lVar43 + 0x38), lVar40 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar40 + 0x18) <= uVar11) goto LAB_035575f4;
      fVar45 = *(float *)(lVar40 + lVar37 * 0x178 + 0x160);
      if (fVar64 <= fVar45) {
        fVar64 = fVar45;
      }
      if (fStack0000000000000100 <= ABS(fVar46)) {
        fStack0000000000000100 = ABS(fVar46);
      }
      if (iVar16 != in_stack_00000068._4_4_) {
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
      if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar47 = *(float *)(lVar43 + lVar37 * 0x178 + 0x14c);
      fVar45 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar47 = fVar47 + fVar64 * fVar45;
      if (fVar47 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar47;
      }
      uVar53 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar16;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar11 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar39,0);
        if ((uVar19 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar43 = lVar43 + lVar37 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar43 + 0x160);
      fStack0000000000000078 = *(float *)(lVar43 + 0x11c);
      uVar54 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar64 != 0.0;
      fVar45 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar45 = fVar64;
      }
      fVar64 = fVar45;
      uVar67 = *(undefined4 *)(lVar43 + 0x168);
      _bStack0000000000000074 = 0;
      fVar45 = fVar46;
      if (bVar10) {
        fVar45 = fStack0000000000000100;
      }
      uVar53 = (ulong)(uint)fVar45;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        if (uVar11 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar37 * 0x178;
          lVar40 = *unaff_x19;
          uVar55 = *(uint *)(lVar43 + 0x128);
          uVar51 = *(undefined4 *)(lVar43 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar11 == uVar32) || ((int)uVar34 <= (int)uVar11)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar19 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        lVar40 = lVar37;
        uVar55 = uVar11;
        if (uVar39 == 0x200b || (uVar19 & 1) != 0) {
          lVar40 = lVar20;
          uVar55 = uVar34;
        }
        if (uVar55 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar40 * 0x178;
          uVar55 = *(uint *)(lVar43 + 0x128);
          uVar51 = *(undefined4 *)(lVar43 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        uVar55 = *(uint *)(lVar43 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar13) goto LAB_035575f4;
      uVar19 = FUN_03567ad8(uVar67,*(undefined4 *)(lVar43 + lVar29),0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0)) {
          if (uVar11 < *(uint *)(lVar43 + 0x18)) {
            lVar43 = lVar43 + lVar37 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar43 + 0x128);
            uVar54 = (ulong)_bStack0000000000000074;
            uVar53 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar53,uVar54,uVar56,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar43 + 0x160));
            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar43 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar43 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar43 = *(long *)puVar7;
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
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
  if (lVar35 == 0) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar43 + lVar37 * 0x178 + 400);
  fVar45 = (float)FUN_03776a30(lVar35 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar13 - 2) goto LAB_035575f4;
      uVar55 = *(uint *)(lVar43 + lVar29 + -0x330);
      fVar63 = *(float *)(lVar43 + lVar29 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)fStack000000000000009c;
      uVar54 = (ulong)(uint)fStack0000000000000098;
      (*pcVar31)(fStack00000000000000a0,uVar53,uVar54,uVar56,
                 fStack00000000000000a8 * fVar45 + fVar63,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar43 = *in_stack_00000170;
    if ((lVar43 == 0) || (lVar40 = *(long *)(lVar43 + 0x38), lVar40 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar40 + 0x18) <= uVar11) goto LAB_035575f4;
    *(int *)(lVar40 + lVar37 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar40 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar11)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar11 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar39,0);
        if ((uVar19 & 1) != 0) goto LAB_035564e8;
        lVar43 = *in_stack_00000170;
        if (lVar43 == 0) goto LAB_035574b8;
      }
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar43 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar43 = lVar43 + lVar37 * 0x178;
      fStack0000000000000040 = *(float *)(lVar43 + 0x60);
      fStack0000000000000038 = *(float *)(lVar43 + 0x14c);
      uVar53 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar43 + 0x11c);
      uVar54 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar43 + 0x160);
      fStack000000000000009c = fVar45 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        if (uVar11 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + lVar37 * 0x178;
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar43 + 0x128);
          fVar63 = *(float *)(lVar43 + 0x14c);
LAB_03556654:
          pcVar31 = *(code **)(lVar20 + 0x8d8);
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
      uVar19 = FUN_026b63d8(uVar39,0);
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        uVar55 = *(uint *)(lVar43 + 0x18);
        if (uVar39 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar55 <= uVar34) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar20 = lVar37;
          if (uVar55 <= uVar11) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar43 = lVar43 + lVar20 * 0x178;
        fVar63 = *(float *)(lVar43 + 0x14c);
        uVar55 = *(uint *)(lVar43 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)uVar55) {
      lVar43 = *in_stack_00000170;
      if ((lVar43 != 0) && (lVar40 = *(long *)(lVar43 + 0x38), lVar40 != 0)) {
        if (uVar13 < *(uint *)(lVar40 + 0x18)) {
          if (*(float *)(lVar40 + lVar29 + -0x108) == fStack0000000000000040) {
            fVar47 = *(float *)(lVar40 + lVar29 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar53 = (ulong)(uint)fStack0000000000000038;
            uVar19 = FUN_03567bac(fVar63 + fVar47,uVar53,0);
            if ((uVar19 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar43 = *in_stack_00000170;
            if (lVar43 == 0) goto LAB_035574b8;
          }
          lVar43 = *(long *)(lVar43 + 0x38);
          if (lVar43 != 0) {
            uVar55 = *(uint *)(lVar43 + 0x18);
            if ((int)uVar11 <= (int)uVar34) goto FUN_035568e8;
            if (uVar34 < uVar55) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar11 < (int)uVar55) {
      iVar16 = FUN_036d3364(lVar35,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar43 = *(long *)(lVar23 + lVar29 + -0x130);
      if (lVar43 == 0) goto LAB_035574b8;
      iVar17 = FUN_036d3364(lVar43,0);
      if (iVar16 != iVar17) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 != 0))
      {
        if (uVar13 - 2 < *(uint *)(lVar43 + 0x18)) {
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar43 + lVar29 + -0x330);
          fVar63 = *(float *)(lVar43 + lVar29 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
  goto LAB_035574b8;
  uVar55 = (uint)*(undefined8 *)(lVar43 + 0x18);
  if (uVar55 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar43 + lVar37 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      uVar54 = (ulong)uStack00000000000000c0;
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
    }
LAB_035569b4:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar43 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar6) {
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar11)) ||
         (!bVar1)) goto LAB_035569b4;
      if (uVar11 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar19 = FUN_026b97f8(uVar39,0);
        if ((uVar19 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar20 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar20 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar43 = *(long *)(*in_stack_00000170 + 0x38), lVar43 == 0))
      goto LAB_035574b8;
      uVar55 = (uint)*(undefined8 *)(lVar43 + 0x18);
      if (uVar55 <= uVar11) goto LAB_035575f4;
      lVar20 = *(long *)(lVar20 + 0xb8);
      lVar35 = lVar43 + lVar37 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar35 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar35 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar20 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar20 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar35 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar20 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar20 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar55 <= uVar11) goto LAB_035575f4;
    lVar43 = lVar43 + lVar37 * 0x178;
    fVar45 = *(float *)(lVar43 + 0x128);
    fVar48 = *(float *)(lVar43 + 0x188);
    uVar18 = *(undefined8 *)(lVar43 + 0x17c);
    fVar61 = *(float *)(lVar43 + 0x184);
    uVar22 = *(undefined8 *)(lVar43 + 0x184);
    fVar49 = *(float *)(lVar43 + 0x18c);
    fVar63 = *(float *)(lVar43 + 0x11c);
    fVar65 = *(float *)(lVar43 + 0x148);
    fVar47 = *(float *)(lVar43 + 0x150);
    in_stack_00000178 = uVar18;
    fStack0000000000000180 = fVar61;
    fStack0000000000000184 = fVar48;
    in_stack_00000188 = fVar49;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar19 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar43 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar43);
      }
      fVar45 = fVar45 + (float)in_stack_000017b8;
      uVar54 = (ulong)(uint)fVar45;
      fVar63 = fVar63 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar47 = fVar47 - in_stack_000017c0;
      uVar53 = (ulong)(uint)fVar47;
      fVar65 = fVar65 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar56 = (ulong)(uint)fVar65;
      if (fVar63 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar63;
      }
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      if (fStack00000000000000c8 <= fVar45) {
        fStack00000000000000c8 = fVar45;
      }
      if (fStack00000000000000d0 <= fVar65) {
        fStack00000000000000d0 = fVar65;
      }
    }
    else {
      if (*(int *)(lVar43 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar43);
      }
      fVar63 = (fVar63 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar56 = (ulong)(uint)fVar63;
      if (fVar47 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar47;
      }
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar54 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar65) {
        fStack00000000000000d0 = fVar65;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
      fStack00000000000000dc = fVar47 - fVar49;
      fStack00000000000000c8 = fVar45 + fVar61;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar65 + fVar48;
      fStack00000000000000d8 = fVar63;
      in_stack_000017b0 = uVar18;
      in_stack_000017b8 = uVar22;
      in_stack_000017c0 = fVar49;
    }
    if (((*unaff_x20 == 1) || (uVar11 == uVar32)) || (((int)uVar34 <= (int)uVar11 || (!bVar1)))) {
      uVar54 = (ulong)uStack00000000000000c0;
      uVar53 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar53,uVar54,uVar56,fStack00000000000000d0,uVar54);
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  uVar11 = *unaff_x20;
  lVar29 = lVar29 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar11 <= (int)uVar13;
  unaff_x28 = in_stack_00000170;
  uVar13 = uVar13 + 1;
  uVar55 = uVar2;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar23 = *in_stack_00000170;
  if (lVar23 != 0) {
    iVar14 = uVar2 + 1;
    plVar42 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar23 + 0x18) = uVar11;
    lVar29 = unaff_x19[0xd4];
    *(int *)(lVar23 + 0x2c) = iVar14;
    if ((int)uVar11 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar29;
    *(float *)(lVar23 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar23 = unaff_x19[0xdf];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*unaff_x28,*(undefined8 *)(lVar23 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar14 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar23 = unaff_x19[0xe5];
      if (lVar23 == 0) goto LAB_035574b8;
      uVar11 = FUN_03911ee4(lVar23,0);
      FUN_03911f20(lVar23,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x60), lVar23 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar42 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
            if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar22 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar23 = *unaff_x28;
                              if (lVar23 != 0) {
                                lVar43 = 0;
                                lVar29 = 0;
                                do {
                                  uVar19 = lVar29 + 1;
                                  if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar19)
                                  goto LAB_03554724;
                                  lVar23 = *(long *)(lVar23 + 0x60);
                                  if (lVar23 == 0) break;
                                  if (*(int *)(*plVar42 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                  FUN_03596a20(lVar23 + lVar43 + 0x70,0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                  uVar18 = *(undefined8 *)(lVar23 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036d35a8(uVar18,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar23 = *(long *)(*unaff_x28 + 0x60), lVar23 == 0))
                                      break;
                                      if (*(int *)(*plVar42 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                      FUN_03596b20(lVar23 + lVar43 + 0x70,1,0);
                                    }
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar23 == 0) break;
                                    FUN_036a460c(lVar23,*(undefined8 *)(lVar20 + lVar43 + 0x80),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar23 == 0) break;
                                    FUN_036a4810(lVar23,*(undefined8 *)(lVar20 + lVar43 + 0x98),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar23 == 0) break;
                                    FUN_036a48bc(lVar23,*(undefined8 *)(lVar20 + lVar43 + 0xa0),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar20 = *(long *)(*unaff_x28 + 0x60), lVar20 == 0)) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    if (lVar23 == 0) break;
                                    FUN_036a4e24(lVar23,*(undefined8 *)(lVar20 + lVar43 + 0xa8),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = UnityEngine_Material__GetColorArray(lVar23,0),
                                       lVar23 == 0)) break;
                                    FUN_036aa280(lVar23,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_037b514c(lVar23,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar20 = *(long *)(lVar20 + lVar29 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar18 = UnityEngine_Material__GetColorArray(lVar20,0),
                                       lVar23 == 0)) break;
                                    FUN_0390f3a4(lVar23,uVar18,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_037b514c(lVar23,0), lVar23 == 0)) break;
                                    FUN_0390eec8(uVar22,uVar53,uVar54,uVar56,lVar23,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_037b514c(lVar23,0), lVar23 == 0)) break;
                                    FUN_0390ed78(lVar23,uVar11 & 1,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar19) goto LAB_035575f4;
                                    plVar41 = *(long **)(lVar23 + lVar29 * 8 + 0x28);
                                    uVar13 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar41 == (long *)0x0) break;
                                    (**(code **)(*plVar41 + 0x2c8))
                                              (plVar41,uVar13 & 1,*(undefined8 *)(*plVar41 + 0x2d0))
                                    ;
                                  }
                                  lVar23 = *unaff_x28;
                                  lVar29 = lVar29 + 1;
                                  lVar43 = lVar43 + 0x50;
                                } while (lVar23 != 0);
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


