/*
FUNCTION_NAME: UnityEngine.Animator$$set_bodyRotation
ENTRY_POINT: 035543dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_Animator__set_bodyRotation
               (long param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4,
               undefined1 *param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  uint uVar27;
  long lVar28;
  undefined4 *puVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  long in_x9;
  code *pcVar33;
  uint uVar34;
  float *pfVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar42;
  ulong unaff_x24;
  long *plVar43;
  long lVar44;
  long *unaff_x28;
  uint uVar45;
  undefined8 *unaff_x29;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined8 uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  ulong unaff_d13;
  undefined4 uVar68;
  float fVar69;
  float fVar70;
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
  byte in_stack_00000070;
  uint uStack0000000000000074;
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
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  char in_stack_000017d4;
  float in_stack_000017d8;
  uint in_stack_000017dc;
  
code_r0x035543dc:
  FUN_0209b778(param_1 + in_x9,param_5,param_6);
  memcpy(&stack0x00001008,&stack0x000008a0,0x378);
  iVar16 = FUN_0358c15c();
  bVar7 = false;
LAB_035529e8:
  iVar12 = *(int *)((long)unaff_x19 + 0x494) + -1;
  *(int *)((long)unaff_x19 + 0x494) = iVar12;
  uVar19 = CONCAT44(0x2026,iVar12);
  in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
  uVar14 = iVar16 - 1;
  uVar11 = in_stack_000017dc;
LAB_03550bd0:
  fVar59 = (float)unaff_d13;
  uVar14 = uVar14 + 1;
  lVar28 = unaff_x19[0x8f];
  if (lVar28 != 0) {
    if ((int)uVar14 < (int)*(uint *)(lVar28 + 0x18)) {
      if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
      in_stack_000017dc = *(uint *)(lVar28 + (long)(int)uVar14 * 0xc + 0x20);
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
        uVar19 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017dc == 0x3c))
      goto code_r0x0355094c;
      if ((*unaff_x28 != 0) && (lVar28 = *(long *)(*unaff_x28 + 0x38), lVar28 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar28 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar28 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar28 + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_035509d4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_0355459c:
    fVar59 = (float)param_3;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar59 = DAT_00d389f8,
       DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar69 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar59 < fVar69) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar46 = (*(float *)((long)unaff_x19 + 0x23c) - fVar59) * 0.5;
        if (fVar46 <= DAT_00d38b84) {
          fVar46 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x48) = fVar59;
        fVar46 = (fVar59 + fVar46) * 20.0 + 0.5;
        fVar59 = DAT_00d38e60;
        if (fVar46 != INFINITY) {
          fVar59 = (float)(int)fVar46 / 20.0;
        }
        if (fVar69 <= fVar59) {
          fVar59 = fVar69;
        }
        goto LAB_03554658;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar8 = PTR_DAT_03cbdf88;
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
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar11 == 3)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      goto LAB_03554724;
    }
    lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar28 = *(long *)puVar9;
    }
    plVar43 = (long *)OVRPlugin_Media_TypeInfo;
    lVar28 = **(long **)(lVar28 + 0xb8);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
    iVar16 = *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x60), lVar28 == 0))
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
    iVar12 = (int)unaff_x19[0x4e];
    in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
    uStack00000000000000e8 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
    lVar28 = unaff_x19[0xe3];
    in_stack_000000b8 = (long *)uStack00000000000000e8;
    fStack00000000000000c4 = in_stack_000000f8._4_4_;
    if (iVar12 < 0x401) {
      if (iVar12 == 0x100) {
        if (lVar28 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) < 2) goto LAB_035575f4;
        uVar19 = *(undefined8 *)(lVar28 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar31 = *(long *)(*unaff_x28 + 0x58), lVar31 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar31 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          fVar59 = *(float *)(lVar31 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar59 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar28 + 0x2c);
        fVar59 = (0.0 - fVar59) - fStack0000000000000020;
      }
      else if (iVar12 == 0x200) {
        if (lVar28 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_035575f4;
        fStack00000000000000c4 = (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar28 + 0x24) +
                          (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x58), lVar28 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          lVar28 = lVar28 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar59 = ((fStack0000000000000020 + *(float *)(lVar28 + 0x28) + *(float *)(lVar28 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
          fVar59 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar12 != 0x400) goto LAB_03554c4c;
        if (lVar28 == 0) goto LAB_035574b8;
        if (*(int *)(lVar28 + 0x18) == 0) goto LAB_035575f4;
        uVar19 = *(undefined8 *)(lVar28 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*unaff_x28 == 0) || (lVar31 = *(long *)(*unaff_x28 + 0x58), lVar31 == 0))
          goto LAB_035574b8;
          if (*(uint *)(lVar31 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
          in_stack_000017d8 = *(float *)(lVar31 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar28 + 0x20);
        fVar59 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
      }
LAB_03554c3c:
      in_stack_000000b8 =
           (long *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar59);
    }
    else if (iVar12 == 0x800) {
      if (lVar28 == 0) goto LAB_035574b8;
      if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_035575f4;
      fVar59 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
      in_stack_000000b8 =
           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar28 + 0x24) +
                            (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5 + 0.0);
      fStack00000000000000c4 = fVar59;
    }
    else {
      if (iVar12 == 0x1000) {
        if (lVar28 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar28 + 0x18) != 1) && (*(int *)(lVar28 + 0x18) != 0)) {
          uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar28 + 0x24) +
                            (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          fVar59 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_03554c3c;
        }
        goto LAB_035575f4;
      }
      if (iVar12 == 0x2000) {
        if (lVar28 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_035575f4;
        fVar59 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar28 + 0x24) +
                              (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5 + fVar59);
        fStack00000000000000c4 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
      }
    }
LAB_03554c4c:
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    uVar19 = FUN_03912334(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar8);
    }
    uVar21 = FUN_036d35a8(uVar19,0,0);
    lVar28 = FUN_0357f060();
    if (lVar28 == 0) goto LAB_035574b8;
    FUN_036df824(lVar28,0);
    *(float *)(unaff_x19 + 0xe2) = fVar59;
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_039117fc(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    fVar69 = (float)FUN_03911954(unaff_x19[0xe5],0);
    uVar68 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
    }
    if (DAT_0412df1c == '\0') {
      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
      DAT_0412df1c = '\x01';
    }
    puVar8 = OVRPlugin_Mesh_TypeInfo;
    lVar28 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar28 = *(long *)puVar8;
    }
    puVar29 = *(undefined4 **)(lVar28 + 0xb8);
    uVar55 = (ulong)(uint)puVar29[1];
    uVar56 = (ulong)(uint)puVar29[2];
    uVar57 = (ulong)(uint)puVar29[3];
    FUN_035683a4(*puVar29,uVar55,uVar56,uVar57,&stack0x000017b0,0x4000ffff,0);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar28 = *unaff_x28;
    if (lVar28 == 0) goto LAB_035574b8;
    uVar14 = *unaff_x20;
    if ((int)uVar14 < 1) {
      fStack00000000000000d4 = 0.0;
      iVar16 = 0;
      goto LAB_03556f00;
    }
    lVar28 = *(long *)(lVar28 + 0x38);
    fVar59 = ABS(fVar59);
    fVar46 = 1.0;
    if ((uVar21 & 1) == 0) {
      fVar46 = fVar59;
    }
    if (lVar28 == 0) goto LAB_035574b8;
    bVar10 = false;
    bVar6 = false;
    _iStack0000000000000128 = 0;
    bVar7 = false;
    fStack00000000000000d4 = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000158 = 0.0;
    in_stack_00000068._4_4_ = 0;
    lVar31 = 0x2e0;
    fVar48 = 0.0;
    fVar65 = 0.0;
    fStack00000000000000c8 = fStack00000000000000d8;
    fStack0000000000000104 =
         *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
    fStack00000000000000d0 = fStack00000000000000dc;
    _in_stack_00000070 = fStack00000000000000dc;
    fStack000000000000009c = fStack00000000000000dc;
    fStack00000000000000a0 = fStack00000000000000d8;
    fStack0000000000000100 = 0.0;
    in_stack_00000088._4_4_ = 0.0;
    fStack0000000000000040 = 0.0;
    fStack00000000000000a8 = 0.0;
    fStack0000000000000038 = 0.0;
    uStack0000000000000074 = uStack00000000000000c0;
    fStack0000000000000078 = fStack00000000000000d8;
    fStack0000000000000098 = (float)uStack00000000000000c0;
    uVar11 = 1;
    uVar13 = 0;
    goto LAB_03554e78;
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar21 = FUN_03586568();
  if (((uVar21 & 1) != 0) &&
     (uVar14 = in_stack_0000178c, uVar11 = in_stack_000017dc, *(int *)((long)unaff_x19 + 0x644) == 0
     )) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  uVar11 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar44 = (long)(int)uVar11;
  cVar26 = *(char *)(lVar28 + lVar44 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar31 = unaff_x19[0x24];
  if ((uint)uVar19 == uVar11) {
    in_stack_000017dc = (uint)((ulong)uVar19 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar28 + lVar44 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      uVar11 = *unaff_x20;
      if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
      bVar6 = true;
      *(int *)(lVar28 + (long)(int)uVar11 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      uVar19 = CONCAT44(3,uVar11 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar22 = FUN_03568ac0(*unaff_x21,0), lVar22 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar22,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
      *(ulong *)(lVar28 + lVar44 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
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
  iVar16 = (int)unaff_x24;
  if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_000017dc != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)uVar11 * (long)iVar16;
    *(undefined1 *)(lVar28 + 0x194) = 0;
    *(undefined2 *)(lVar28 + 0x20) = 0x200b;
    *(undefined4 *)(lVar28 + 100) = 0;
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
          uVar21 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar21 & 1) != 0) {
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
        uVar21 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar21 & 1) != 0) {
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
      uVar21 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar21 & 1) != 0) {
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
    if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    unaff_x28 = in_stack_00000170;
    uVar11 = in_stack_000017dc;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
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
    uVar13 = *unaff_x20;
    uVar11 = *(uint *)(lVar28 + 0x18);
    if (uVar11 <= uVar13) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x58);
    if (bVar6) {
      lVar31 = unaff_x19[0x8f];
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar14) goto LAB_035575f4;
      if ((*(int *)(lVar31 + (long)(int)uVar14 * 0xc + 0x20) != 10) ||
         (uVar13 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar11 <= uVar13 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar69 = *(float *)(lVar28 + (long)(int)(uVar13 - 1) * (long)iVar16 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar28 = *unaff_x21;
    }
    else {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar69 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar28 = unaff_x19[0x20];
    }
    if (lVar28 == 0) goto LAB_035574b8;
    fVar65 = (float)FUN_03776960(lVar28 + 0x50,0);
    fVar46 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar46 = 1.0;
    }
    fVar64 = 0.0;
    fVar48 = 0.0;
    if (!(bool)(bVar6 & in_stack_000017dc == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar48 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar64 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar28 = unaff_x19[0xc9];
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_035574b8;
    fVar47 = *(float *)((long)unaff_x19 + 0x404);
    fVar49 = *(float *)(lVar28 + 0x2c);
    fVar59 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar66 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar51 = *(float *)((long)unaff_x19 + 0x404);
    fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar28 = unaff_x19[0x6d];
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar31 + 0x2c) = 0;
    fVar46 = ((fStack0000000000000158 * fVar69) / (float)iVar12) * fVar65 * fVar46;
    fVar59 = fVar46 * fVar47 * fVar49 * fVar59;
    *(float *)(lVar31 + 0x160) = fVar59;
    uVar11 = *(uint *)(unaff_x19 + 0x24);
    fVar50 = fVar46 * fVar66 * fVar51 * fVar50;
    if (uVar11 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar31 = unaff_x19[0xe1];
      if (lVar31 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar31 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar31 = *(long *)(lVar31 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar31 + 0x10c);
    }
LAB_035514b0:
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar69 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar69 = fVar59;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar12 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar12 == 1) {
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
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar28 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar28 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar44 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar44 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar59 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar46 = (float)FUN_03776960(&stack0x00001720,0);
      fVar69 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar69 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar69 = (fVar59 / (float)iVar12) * fVar46 * fVar69;
      iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar59 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar64 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar64 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar65 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar28 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar28 + 0x20),0);
        fVar47 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar28 + 0x20) == 0) goto LAB_035574b8;
        fVar66 = *(float *)(lVar28 + 0x2c);
        fVar49 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar48 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar51 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar50 = fVar69 * fVar51 * fVar62 * fVar50;
        fVar64 = (fVar59 / (float)iVar12) * fVar46 * fVar64;
        fVar59 = fVar64 * (fVar65 / fVar47) * fVar66 * fVar49;
        fVar64 = fVar64 / fVar59;
        fVar48 = fVar64 * fVar48;
        fVar69 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar64 = fVar64 * fVar69;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar28 + 0x20) == 0) goto LAB_035574b8;
        fVar64 = *(float *)(lVar28 + 0x2c);
        fVar65 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar65 = 1.0;
        }
        fVar47 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar48 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar49 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar66 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar50 = fVar69 * fVar49 * fVar66 * fVar50;
        fVar59 = (fVar59 / (float)iVar12) * fVar46 * fVar65 * fVar64 * fVar47;
        fVar64 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar28;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar28);
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar28 + 0x2c) = 1;
      *(float *)(lVar28 + 0x160) = fVar59;
      *(long *)(lVar28 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar28 = *in_stack_00000170;
      if ((lVar28 == 0) || (lVar44 = *(long *)(lVar28 + 0x38), lVar44 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar44 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar31;
      goto LAB_035514b0;
    }
    lVar28 = *in_stack_00000170;
    fVar50 = 0.0;
    fVar69 = fVar50;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar69 = fVar59;
    }
    if (lVar28 == 0) goto LAB_035574b8;
    fVar48 = 0.0;
    fVar64 = 0.0;
  }
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
  uVar11 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
  uVar54 = unaff_x29[1];
  uVar20 = *unaff_x29;
  lVar28 = lVar28 + (long)(int)uVar11 * unaff_x24;
  *(undefined4 *)(lVar28 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar28 + 0x184) = uVar54;
  *(undefined8 *)(lVar28 + 0x17c) = uVar20;
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar28 = *(long *)(unaff_x19[0xc9] + 0x20), lVar28 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar28,0);
  puVar8 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
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
  fVar46 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar47 = 0.0;
    fVar65 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar27 = *unaff_x20;
    uVar11 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar27 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar27 + 1) goto LAB_035575f4;
      lVar28 = *(long *)(lVar28 + (long)(int)(uVar27 + 1) * (long)iVar16 + 0x30);
      if ((((lVar28 == 0) || (*unaff_x21 == 0)) ||
          (lVar31 = *(long *)(*unaff_x21 + 0x128), lVar31 == 0)) ||
         (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar11 | *(int *)(lVar28 + 0x28) << 0x10;
      uVar21 = FUN_0219f8b8(lVar31,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar68 = 0;
      if ((uVar21 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar47 = 0.0;
        fVar65 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar68 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar65 = *(float *)(in_stack_000016f8 + 0x14);
        fVar47 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar46 = 0.0;
        }
      }
      uVar27 = *unaff_x20;
    }
    else {
      uVar68 = 0;
      fStack000000000000012c = 0.0;
      fVar47 = 0.0;
      fVar65 = 0.0;
    }
    if (0 < (int)uVar27) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar27 - 1) goto LAB_035575f4;
      lVar28 = *(long *)(lVar28 + (ulong)(uVar27 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar28 == 0) || (*unaff_x21 == 0)) ||
         ((lVar31 = *(long *)(*unaff_x21 + 0x128), lVar31 == 0 ||
          (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar28 + 0x28) | uVar11 << 0x10;
      uVar21 = FUN_0219f8b8(lVar31,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar21 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar65 = (float)FUN_03571cb4(fVar65,fVar47,fStack000000000000012c,uVar68,
                                         *(undefined4 *)(in_stack_000016f8 + 0x28),
                                         *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016f8 + 0x30),
                                         *(undefined4 *)(in_stack_000016f8 + 0x34),0),
           in_stack_000016f8 == 0)) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          fVar46 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar66 = *(float *)(unaff_x19 + 200);
    fVar49 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar66 = fVar66 - fVar69 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar66;
    if ((in_stack_000017dc == 0x200b) || (uVar13 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar66 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar66 = *(float *)(unaff_x19 + 0x56);
  fVar49 = 0.0;
  if (fVar66 != 0.0) {
    fVar49 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar51 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar66 * 0.5 - fVar69 * (fVar49 * 0.5 + fVar51));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar49;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar28 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_036cee6c(lVar28,0,0);
    fVar51 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar28 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar28 == 0) goto LAB_035574b8;
      uVar21 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar51 = 0.0;
      if ((uVar21 & 1) != 0) {
        lVar28 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar28 == 0) goto LAB_035574b8;
        fVar66 = (float)FUN_0369e060(lVar28,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar62 = *(float *)(*unaff_x21 + 0x1b0);
        fVar51 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar51 = fVar51 * fVar66 * fVar62 * 0.25;
        if (fVar66 < fStack000000000000015c + fVar51) {
          fStack000000000000015c = fVar66 - fVar51;
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
    uVar21 = FUN_036cee6c(lVar28,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar28 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar28 == 0) goto LAB_035574b8;
      uVar21 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar21 & 1) != 0) {
        lVar28 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar28 == 0) goto LAB_035574b8;
        uVar21 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar21 & 1) != 0) {
          lVar28 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar28 == 0) goto LAB_035574b8;
          fVar66 = (float)FUN_0369e060(lVar28,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar62 = *(float *)(*unaff_x21 + 0x1a8);
          fVar51 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar51 = fVar51 * fVar66 * fVar62 * 0.25;
          if (fVar66 < fStack000000000000015c + fVar51) {
            fStack000000000000015c = fVar66 - fVar51;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar51 = 0.0;
  }
FUN_03551b84:
  fVar66 = *(float *)(unaff_x19 + 200);
  fVar62 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar66 = fVar66 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar69 * (fVar65 + ((fVar62 - fStack000000000000015c) - fVar51));
  fVar65 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar70 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar50 + fVar69 * (fVar47 + fStack000000000000015c + fVar65)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar65 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar65 = fVar70 - fVar69 * (fStack000000000000015c + fStack000000000000015c + fVar65);
  fVar47 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar62 = fVar66 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar69 * (fVar51 + fVar51 +
                             fStack000000000000015c + fStack000000000000015c + fVar47);
  fStack0000000000000104 = fVar66;
  fVar47 = fVar62;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar61 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar47 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar60 = fVar61 * fVar69 * (fVar51 + fStack000000000000015c + fVar47);
    fVar47 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar58 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar70 = fVar70 + 0.0;
    fVar65 = fVar65 + 0.0;
    fVar61 = fVar61 * fVar69 * (((fVar47 - fVar58) - fStack000000000000015c) - fVar51);
    fVar58 = fVar66 + fVar60;
    fVar47 = fVar62 + fVar61;
    fVar52 = (fVar60 - fVar61) * 0.5;
    fVar66 = (fVar66 + fVar61) - fVar52;
    fVar62 = (fVar62 + fVar60) - fVar52;
    fStack0000000000000104 = fVar58 - fVar52;
    fVar47 = fVar47 - fVar52;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar52 = 0.0;
    fVar60 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar61 = fVar65;
    fVar58 = fVar70;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar63 = (fVar62 + fVar66) * 0.5;
    fVar67 = (fVar65 + fVar70) * 0.5;
    fVar70 = fVar70 - fVar67;
    fStack0000000000000100 = 0.0;
    fVar58 = fVar70;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar63,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar63 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar61 = fVar65 - fVar67;
    fStack0000000000000114 = 0.0;
    fVar65 = fVar61;
    fVar66 = (float)FUN_036bdd2c(fVar66 - fVar63,_fStack0000000000000078,0);
    fVar66 = fVar63 + fVar66;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar65 = fVar67 + fVar65;
    fVar60 = 0.0;
    fVar62 = (float)FUN_036bdd2c(fVar62 - fVar63,_fStack0000000000000078,0);
    fVar62 = fVar63 + fVar62;
    fVar70 = fVar67 + fVar70;
    fVar60 = fVar60 + 0.0;
    fVar52 = 0.0;
    fVar47 = (float)FUN_036bdd2c(fVar47 - fVar63,_fStack0000000000000078,0);
    fVar47 = fVar63 + fVar47;
    fVar52 = fVar52 + 0.0;
    fVar61 = fVar67 + fVar61;
    fVar58 = fVar67 + fVar58;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar28 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar69;
  if (lVar28 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x11c) = fVar66;
  *(float *)(lVar28 + 0x120) = fVar65;
  *(float *)(lVar28 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x114) = fVar58;
  *(float *)(lVar28 + 0x110) = fStack0000000000000104;
  *(float *)(lVar28 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x128) = fVar62;
  *(float *)(lVar28 + 300) = fVar70;
  *(float *)(lVar28 + 0x130) = fVar60;
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar28 + 0x134) = fVar47;
  *(float *)(lVar28 + 0x138) = fVar61;
  *(float *)(lVar28 + 0x13c) = fVar52;
  if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
  goto LAB_035574b8;
  uVar27 = *unaff_x20;
  lVar31 = (long)(int)uVar27;
  if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_035575f4;
  lVar44 = lVar28 + lVar31 * unaff_x24;
  *(int *)(lVar44 + 0x140) = (int)unaff_x19[200];
  fVar70 = *(float *)(unaff_x19 + 0x9b);
  param_3 = (ulong)(uint)fVar70;
  fVar47 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar44 + 0x15c) = (fVar62 - fVar66) / (fVar58 - fVar65);
  *(float *)(lVar44 + 0x14c) = (fVar50 - fVar70) + fVar47;
  fVar48 = fVar48 * fVar69;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar48 = fVar48 / fStack0000000000000158;
    fVar64 = (fVar64 * fVar69) / fStack0000000000000158;
  }
  else {
    fVar64 = fVar64 * fVar69;
  }
  uVar45 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar13 == 0) || (uVar27 == uVar45)) {
    fVar64 = fVar47 + fVar64;
    fVar48 = fVar47 + fVar48;
    fVar66 = fVar64;
    fVar65 = fVar48;
    if (fVar47 != 0.0) {
      fVar65 = (fVar48 - fVar47) / *(float *)((long)unaff_x19 + 0x404);
      fVar66 = (fVar64 - fVar47) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar65 <= fVar48) {
        fVar65 = fVar48;
      }
      if (fVar64 <= fVar66) {
        fVar66 = fVar64;
      }
    }
    lVar28 = lVar28 + lVar31 * unaff_x24;
    fVar47 = fVar65;
    if (fVar65 <= *(float *)(unaff_x19 + 0x99)) {
      fVar47 = *(float *)(unaff_x19 + 0x99);
    }
    fVar50 = fVar66;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar66) {
      fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar50;
    *(float *)(unaff_x19 + 0x99) = fVar47;
    *(float *)(lVar28 + 0x154) = fVar65;
    *(float *)(lVar28 + 0x158) = fVar66;
    *(float *)(lVar28 + 0x148) = fVar48 - fVar70;
    *(float *)(unaff_x19 + 0x98) = fVar48 - fVar70;
    *(float *)(lVar28 + 0x150) = fVar64 - fVar70;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar64 - fVar70;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar47;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar65 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar64 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar69 * fVar64) / fStack0000000000000158;
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar65 <= fStack0000000000000158) {
        fVar65 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar65;
    }
    if ((float)param_3 == 0.0) {
      fVar65 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar48) {
        fVar65 = fVar48;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar65;
    }
  }
  else {
    fVar65 = *(float *)(unaff_x19 + 0x99);
    lVar28 = lVar28 + lVar31 * unaff_x24;
    *(float *)(lVar28 + 0x154) = fVar65;
    fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar65 = fVar65 - fVar70;
    *(float *)(lVar28 + 0x148) = fVar65;
    *(float *)(lVar28 + 0x158) = fVar48;
    *(float *)(unaff_x19 + 0x98) = fVar65;
    fVar48 = fVar48 - fVar70;
    *(float *)(lVar28 + 0x150) = fVar48;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar48;
  }
  lVar28 = *in_stack_00000170;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_035574b8;
  uVar15 = *unaff_x20;
  if (*(uint *)(lVar31 + 0x18) <= uVar15) goto LAB_035575f4;
  lVar31 = lVar31 + (long)(int)uVar15 * unaff_x24;
  *(undefined1 *)(lVar31 + 0x194) = 0;
  uVar34 = *(uint *)(unaff_x19 + 0x4f);
  uVar11 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((uVar13 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((bool)(in_stack_000017dc == 0xad & (bVar7 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x644) == 1)
       ))))) {
    *(undefined1 *)(lVar31 + 0x194) = 1;
    pfVar32 = _fStack00000000000000a0;
    pfVar35 = _fStack00000000000000a8;
    if (bVar6) {
      lVar28 = *(long *)(lVar28 + 0x50);
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar35 = (float *)(lVar28 + 0x60);
      pfVar32 = (float *)(lVar28 + 100);
    }
    fVar48 = *pfVar35;
    fVar64 = *pfVar32;
    fVar65 = *(float *)(unaff_x19 + 0x6c);
    fVar47 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar48) - fVar64;
    bVar10 = true;
    if ((fVar65 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar65))) {
      bVar10 = fVar65 == -1.0;
    }
    if (!bVar10) {
      in_stack_000000f8._4_4_ = fVar65;
    }
    fVar65 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar65 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      fVar59 = fVar69;
    }
    fVar70 = (float)param_3;
    fVar62 = 0.0;
    if ((0.0 < fVar70) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar62 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar15 = *unaff_x20;
    fVar62 = (*(float *)(unaff_x19 + 0x97) - (fVar50 - fVar70)) + fVar62;
    if (fStack00000000000000c4 < fVar62) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar15;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar20 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar58 = *(float *)(unaff_x19 + 0x59);
        if (((fVar58 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar70)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar59 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar62) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar59 <= fVar58) {
            fVar59 = fVar58;
          }
          goto LAB_03554b48;
        }
        fVar70 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar62 = *(float *)(unaff_x19 + 0x4a);
        param_3 = (ulong)(uint)fVar62;
        if ((fVar62 < fVar70) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar59 = (fVar70 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar59 <= DAT_00d38b84) {
            fVar59 = DAT_00d38b84;
          }
          fVar69 = (fVar70 - fVar59) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar70;
          fVar59 = DAT_00d38e60;
          if (fVar69 != INFINITY) {
            fVar59 = (float)(int)fVar69 / 20.0;
          }
          if (fVar59 <= fVar62) {
            fVar59 = fVar62;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar8;
        }
        lVar31 = *(long *)(lVar28 + 0xb8);
        lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = FUN_01a46ff8(lVar28);
        }
        piVar23 = (int *)thunk_FUN_01a59484(lVar31 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar28 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar23 != 0) {
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)puVar8;
          }
          FUN_0209b778(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x000008a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
          goto LAB_035529dc;
        }
        goto LAB_03554580;
      default:
        goto UnityEngine_AnimationClip__set_wrapMode;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_03552550:
        uVar14 = FUN_0358c15c();
        break;
      case 5:
        if ((uVar15 == 0) || ((int)uVar14 < 0)) {
          uVar14 = 0xffffffff;
          *unaff_x20 = 0;
          uVar19 = uVar20;
UnityEngine_AnimatorStateInfo__get_fullPathHash:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          unaff_x28 = in_stack_00000170;
          uVar11 = in_stack_000017dc;
          goto LAB_03550bd0;
        }
        fVar59 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_0358c15c();
        if (fVar59 - fVar50 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_3 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar28 = NEON_rev64(param_3,4);
          unaff_x19[0x99] = lVar28;
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
        uVar14 = FUN_0358c15c();
        lVar28 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar21 = FUN_036cee6c(lVar28,0,0);
        if ((uVar21 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x528))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x530));
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
      goto UnityEngine_AnimationClip__get_hasMotionCurves;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar65 = ABS(fVar47) + fVar65 * (1.0 - fVar66) * fVar59;
    fVar59 = 1.0;
    if ((uVar34 & 0x18) != 0) {
      fVar59 = DAT_00d38acc;
    }
    fVar47 = fVar59 * in_stack_000000f8._4_4_;
    if (fVar47 < fVar65) {
      param_3 = (ulong)(uint)fVar51;
      if (((char)unaff_x19[0x5b] != '\0') && (uVar15 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        uVar14 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar28 = *in_stack_00000170;
          if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar47 = *(float *)(unaff_x19 + 0x9b);
          fVar66 = 0.0;
          if ((0.0 < fVar47) && (fVar66 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar66 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar66 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar31 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar66 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar28 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar28 == 0) goto LAB_035574b8;
          fVar47 = *(float *)(unaff_x19 + 0x9b);
          fVar66 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_035574b8;
        uVar40 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar28 + 0x18) <= uVar40) ||
           (uVar5 = uVar40 - 1, *(uint *)(lVar28 + 0x18) <= uVar5)) goto LAB_035575f4;
        param_3 = (ulong)(uint)(fVar66 + *(float *)(unaff_x19 + 0x97));
        fVar50 = (fVar66 + *(float *)(unaff_x19 + 0x97) + fVar47) -
                 *(float *)(lVar28 + (long)(int)uVar40 * unaff_x24 + 0x158);
        if ((!bVar7 && *(short *)(lVar28 + (long)(int)uVar5 * (long)iVar16 + 0x20) == 0xad) &&
           ((fVar50 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bVar7 = false;
          uVar19 = CONCAT44(0x2d,uVar5);
          *unaff_x20 = uVar5;
          unaff_x28 = in_stack_00000170;
          uVar14 = uVar14 - 1;
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar28 + (long)(int)uVar40 * unaff_x24 + 0x20) == 0xad) {
          bVar7 = true;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if ((in_stack_00000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar66 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar47 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar47 <= fVar66) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar66 = *(float *)((long)unaff_x19 + 0x1e4);
            param_3 = (ulong)(uint)fVar66;
            fVar47 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar47 < fVar66) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_03557594:
              fVar59 = (fVar66 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar59 <= DAT_00d38b84) {
                fVar59 = DAT_00d38b84;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar66;
              fVar66 = fVar66 - fVar59;
LAB_03557524:
              fVar69 = fVar66 * 20.0 + 0.5;
              fVar59 = DAT_00d38e60;
              if (fVar69 != INFINITY) {
                fVar59 = (float)(int)fVar69 / 20.0;
              }
              if (fVar59 <= fVar47) {
                fVar59 = fVar47;
              }
LAB_03554658:
              *(float *)((long)unaff_x19 + 0x1e4) = fVar59;
              return;
            }
            goto LAB_03552d44;
          }
LAB_03557558:
          fVar69 = fVar65;
          if (0.0 < fVar66) {
            fVar69 = fVar65 / (1.0 - fVar66);
          }
          fVar66 = fVar66 + (fVar65 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar69;
LAB_035574e8:
          if (fVar47 <= fVar66) {
            fVar66 = fVar47;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar66;
          return;
        }
LAB_03552d44:
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar8;
        }
        iVar12 = *(int *)(*(long *)(lVar28 + 0xb8) + 0xe78);
        if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
           (((in_stack_00000070 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x38), lVar28 == 0))
          goto LAB_035574b8;
          uVar40 = *unaff_x20 - 1;
          if (*(uint *)(lVar28 + 0x18) <= uVar40) goto LAB_035575f4;
          iStack0000000000000034 = iVar12;
          if (*(short *)(lVar28 + (long)(int)uVar40 * (long)iVar16 + 0x20) == 0xad) {
            bVar7 = false;
            uVar19 = CONCAT44(0x2d,uVar40);
            *unaff_x20 = uVar40;
            unaff_x28 = in_stack_00000170;
            uVar14 = uVar14 - 1;
            goto LAB_03550bd0;
          }
        }
        if (fVar50 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
          param_3 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar46,
                       in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
          in_stack_00000070 = 1;
          bVar7 = false;
          in_stack_00000068._4_4_ = 1;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar47 = fStack00000000000000c4;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar47 = *(float *)(unaff_x19 + 0x59);
          if ((fVar47 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar59 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar50) / (float)((int)unaff_x19[0x95] + 1)) /
                     fStack0000000000000058;
            if (fVar59 <= fVar47) {
              fVar59 = fVar47;
            }
LAB_03554b48:
            *(float *)((long)unaff_x19 + 700) = fVar59;
            return;
          }
          fVar66 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar47 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar66 < fVar47) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_03557558;
          fVar66 = *(float *)((long)unaff_x19 + 0x1e4);
          param_3 = (ulong)(uint)fVar66;
          fVar47 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar47 < fVar66) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
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
          lVar31 = *(long *)(lVar28 + 0xb8);
          lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
            lVar28 = FUN_01a46ff8(lVar28);
          }
          piVar23 = (int *)thunk_FUN_01a59484(lVar31 + 0x11f0,
                                              *(long *)(*(long *)(*(long *)(lVar28 + 0xc0) + 8) +
                                                       0x80) + 0xa0);
          if (*piVar23 != 0) {
            lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            param_1 = *(long *)(lVar28 + 0xb8);
            param_5 = &stack0x000008a0;
            param_6 = *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo;
            in_x9 = 0x11f0;
            unaff_x28 = in_stack_00000170;
            goto code_r0x035543dc;
          }
          bVar7 = false;
LAB_03554580:
          uVar19 = DAT_00d37868;
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          unaff_x28 = in_stack_00000170;
          uVar14 = 0xffffffff;
          goto LAB_03550bd0;
        case 3:
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar14 = FUN_0358c15c();
          bVar7 = false;
UnityEngine_AnimationClip__get_hasMotionCurves:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          uVar19 = CONCAT44(3,uVar15);
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          param_3 = unaff_d13;
          FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,fVar46,
                       in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03552f38;
        case 6:
          lVar28 = unaff_x19[0x5d];
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_036cee6c(lVar28,0,0);
          if ((uVar21 & 1) != 0) {
            plVar43 = (long *)unaff_x19[0x5d];
            uVar19 = (**(code **)(*unaff_x19 + 0x518))();
            if (plVar43 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar43 + 0x528))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x530));
            lVar28 = unaff_x19[0x5d];
            if (lVar28 == 0) goto LAB_035574b8;
            *(int *)(lVar28 + 0x400) = (int)unaff_x19[0x80];
            FUN_0357ee30(lVar28,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar43 = (long *)unaff_x19[0x5d];
            if (plVar43 == (long *)0x0) goto LAB_035574b8;
            (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bVar7 = false;
LAB_03552b00:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          uVar19 = CONCAT44(3,*unaff_x20);
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        default:
          bVar7 = false;
          goto LAB_03552f54;
        }
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar47 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar66 < fVar47) {
          fVar69 = fVar65 / (1.0 - fVar66);
          if (fVar66 <= 0.0) {
            fVar69 = fVar65;
          }
          fVar66 = fVar66 + (fVar65 - fVar59 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar69;
          goto LAB_035574e8;
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar47 = *(float *)(unaff_x19 + 0x4a);
        if (fVar47 < fVar66) {
          fVar59 = (fVar66 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar59 <= DAT_00d38b84) {
            fVar59 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar66;
          fVar66 = fVar66 - fVar59;
          goto LAB_03557524;
        }
      }
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar8;
        }
        lVar31 = *(long *)(lVar28 + 0xb8);
        lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
          lVar28 = FUN_01a46ff8(lVar28);
        }
        piVar23 = (int *)thunk_FUN_01a59484(lVar31 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar28 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar23 != 0) goto code_r0x0355298c;
        goto LAB_03554580;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_0358c15c();
        lVar28 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar21 = FUN_036cee6c(lVar28,0,0);
        if ((uVar21 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x528))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x530));
          lVar28 = unaff_x19[0x5d];
          if (lVar28 == 0) goto LAB_035574b8;
          *(int *)(lVar28 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar28,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar43 = (long *)unaff_x19[0x5d];
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_03552b00;
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
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017dc == 9) {
        lVar28 = *in_stack_00000170;
        if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_035574b8;
        uVar15 = *unaff_x20;
        if (*(uint *)(lVar31 + 0x18) <= uVar15) goto LAB_035575f4;
        *(undefined1 *)(lVar31 + (long)(int)uVar15 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar15;
        lVar31 = *(long *)(lVar28 + 0x50);
        if (lVar31 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar47,fVar51);
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
      if ((unaff_x19[0x6d] == 0) || (lVar28 = *(long *)(unaff_x19[0x6d] + 0x50), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar28 + 0x60) = fVar48;
      *(float *)(lVar28 + 100) = fVar64;
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar65 = (float)param_3;
      fVar59 = 0.0;
      if ((0.0 < fVar65) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar59 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_3 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar65)) + fVar59)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar15;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_0358c15c();
        lVar28 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar21 = FUN_036cee6c(lVar28,0,0);
        if ((uVar21 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x528))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x530));
          lVar28 = unaff_x19[0x5d];
          if (lVar28 == 0) goto LAB_035574b8;
          *(int *)(lVar28 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar28,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar43 = (long *)unaff_x19[0x5d];
          if (plVar43 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar43 + 0x7a8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7b0));
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
        lVar28 = *in_stack_00000170;
        if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
        *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar21 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x50), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
    }
  }
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (!bVar6)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar59 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar48 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar28 = unaff_x19[0xca];
    fVar65 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar65 = 1.0;
    }
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_035574b8;
    fVar47 = *(float *)((long)unaff_x19 + 0x404);
    fVar50 = *(float *)(lVar28 + 0x2c);
    fVar64 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
    fVar66 = *_fStack00000000000000a8;
    fVar64 = fVar47 * (fVar59 / (float)iVar12) * fVar48 * fVar65 * fVar50 * fVar64;
    fVar59 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0))
      goto LAB_035574b8;
      uVar15 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar65 = *(float *)(lVar28 + (long)(int)uVar15 * (long)iVar16 + 0x60);
      iVar12 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar47 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar28 = unaff_x19[0xca];
      fVar48 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar48 = 1.0;
      }
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_035574b8;
      fVar50 = *(float *)((long)unaff_x19 + 0x404);
      fVar51 = *(float *)(lVar28 + 0x2c);
      fVar64 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar28 = *(long *)(*in_stack_00000170 + 0x50), lVar28 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar66 = *(float *)(lVar28 + 0x60);
      fVar59 = *(float *)(lVar28 + 100);
      fVar64 = fVar50 * (fVar65 / (float)iVar12) * fVar47 * fVar48 * fVar51 * fVar64;
    }
    fVar47 = *(float *)(unaff_x19 + 0x9b);
    fVar65 = 0.0;
    fVar48 = 0.0;
    if ((0.0 < fVar47) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar48 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar51 = *(float *)(unaff_x19 + 0x97);
    fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar50 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar28 = *(long *)(unaff_x19[0xca] + 0x20), lVar28 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar28,0);
      fVar65 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar70 = *(float *)(unaff_x19 + 0x6c);
    fVar59 = (fStack000000000000009c - fVar66) - fVar59;
    bVar10 = true;
    if ((fVar70 <= fVar59) && (bVar10 = false, !NAN(fVar70))) {
      bVar10 = fVar70 == -1.0;
    }
    if (!bVar10) {
      fVar59 = fVar70;
    }
    fVar66 = 1.0;
    if ((uVar34 & 0x18) != 0) {
      fVar66 = DAT_00d38acc;
    }
    if (((fVar51 - (fVar62 - fVar47)) + fVar48 < fStack00000000000000c4) &&
       (ABS(fVar50) + fVar64 * fVar65 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar66 * fVar59)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar28 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar28 + 0x788),0x378);
      FUN_0209b210(lVar28 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar28 = *in_stack_00000170;
  if (lVar28 == 0) goto LAB_035574b8;
  lVar31 = *(long *)(lVar28 + 0x38);
  unaff_d13 = (ulong)(uint)fVar69;
  if (lVar31 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar31 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar15 = *(uint *)(unaff_x19 + 0x95);
  lVar31 = lVar31 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar31 + 100) = uVar15;
  *(int *)(lVar31 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar6) ||
     ((in_stack_000017dc < 0xe && ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) != 0)))) {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_035575f4;
    if (*(int *)(lVar28 + (long)(int)uVar15 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_035575f4;
    *(int *)(lVar28 + (long)(int)uVar15 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar59 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar48 = *(float *)(unaff_x19 + 200);
    fVar65 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar59 = fVar69 * fVar59 * fVar65;
    fVar65 = fVar59 * (float)(int)(fVar48 / fVar59);
    param_3 = (ulong)(uint)fVar65;
    if (fVar65 <= fVar48) {
      fVar65 = fVar48 + fVar59;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar65;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar48 = 1.0;
      }
      else {
        fVar48 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar65 = *(float *)(unaff_x19 + 200);
      fVar64 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar59 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar65 = fVar65 + fVar59 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar69 * (fStack000000000000012c + fVar48 * fVar64) +
                                 fStack00000000000000d4 *
                                 (fStack00000000000000d0 +
                                 fVar46 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar65;
      goto joined_r0x035535c0;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar65 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar69 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + fVar46 + *(float *)(*unaff_x21 + 0x1ac)));
    param_3 = (ulong)(uint)fVar65;
    fVar65 = *(float *)(unaff_x19 + 200) - fVar65;
    *(float *)(unaff_x19 + 200) = fVar65;
    if ((in_stack_000017dc == 0x200b) || (uVar13 != 0)) {
      fVar59 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar59;
      fVar65 = fVar65 - fVar59;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar59 = *(float *)(unaff_x19 + 200);
    fVar65 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar49) +
                      fStack00000000000000d4 * (fVar46 + *(float *)(*unaff_x21 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar65;
joined_r0x035535c0:
    if ((in_stack_000017dc == 0x200b) || (param_3 = (ulong)(uint)fVar59, uVar13 != 0)) {
      fVar59 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar59;
      fVar65 = fVar65 + fVar59;
      goto LAB_03553678;
    }
  }
  lVar28 = *in_stack_00000170;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_035574b8;
  uVar15 = *unaff_x20;
  uVar34 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar34 <= uVar15) goto LAB_035575f4;
  *(float *)(lVar31 + (long)(int)uVar15 * unaff_x24 + 0x144) = fVar65;
  uVar40 = in_stack_000017dc;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((bool)(bVar6 & in_stack_000017dc == 0x2d)) || ((float)uVar15 == in_stack_00000088._4_4_))
    goto LAB_0355371c;
  }
  else {
    if (1 < in_stack_000017dc - 0x2028) {
      if (in_stack_000017dc != 0xd) goto LAB_03553700;
      param_3 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar15 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar59 = *(float *)(unaff_x19 + 0x99);
      fVar65 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar59 = fVar59 - fVar65;
      if (((fStack000000000000005c < ABS(fVar59)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar59);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar59;
        *(float *)(unaff_x19 + 0x9b) = fVar59 + *(float *)(unaff_x19 + 0x9b);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar8;
        }
        lVar31 = *(long *)(lVar28 + 0xb8);
        if (*(int *)(lVar31 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar31 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar31 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar28 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar28 + 0xb8) + 0x818,0);
          lVar28 = *(long *)(*(long *)puVar8 + 0xb8);
          *(float *)(lVar28 + 0x7bc) = fVar59 + *(float *)(lVar28 + 0x7bc);
          *(float *)(lVar28 + 0x800) = fVar59 + *(float *)(lVar28 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar28 + 0x788),0x378);
          FUN_0209b210(lVar28 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar48 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar65 = *(float *)((long)unaff_x19 + 0x4cc) - fVar48;
    fVar59 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar65 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar59 = fVar65;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar59;
    fVar64 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017d4 == '\0') {
      in_stack_000017d8 = fVar59;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017d4 = '\x01';
    }
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_035574b8;
    uVar15 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar31 + 0x18) <= uVar15) goto LAB_035575f4;
    lVar44 = unaff_x19[0x93];
    lVar22 = lVar31 + (long)(int)uVar15 * 0x5c;
    *(int *)(lVar22 + 0x34) = (int)lVar44;
    uVar34 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar44 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar34 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar34;
    *(uint *)(lVar22 + 0x38) = uVar34;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar22 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar34 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar22 + 0x40) = iVar12;
    *(int *)(lVar22 + 0x24) = (*(int *)(lVar22 + 0x3c) - *(int *)(lVar22 + 0x34)) + 1;
    *(undefined4 *)(lVar22 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar34) goto LAB_035575f4;
    uVar68 = *(undefined4 *)(lVar28 + (long)(int)uVar34 * (long)iVar16 + 0x11c);
    lVar31 = lVar31 + (long)(int)uVar15 * 0x5c;
    *(float *)(lVar31 + 0x70) = fVar65;
    *(undefined4 *)(lVar31 + 0x6c) = uVar68;
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar64 = fVar64 - fVar48;
    param_3 = (ulong)(uint)fVar64;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar31 + 0x74) =
         *(undefined4 *)(lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar31 + 0x78) = fVar64;
    lVar28 = *in_stack_00000170;
    if ((lVar28 == 0) || (lVar44 = *(long *)(lVar28 + 0x50), lVar44 == 0)) goto LAB_035574b8;
    lVar22 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar31 = lVar44 + lVar22 * 0x5c;
    *(float *)(lVar31 + 0x44) = *(float *)(lVar31 + 0x74) - fVar69 * fStack000000000000015c;
    *(float *)(lVar31 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar31 + 0x24) == 1) {
      *(int *)(lVar44 + lVar22 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_035574b8;
    lVar38 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar34 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar34 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar31 + lVar38 * unaff_x24 + 0x194) == '\0') &&
       (lVar38 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar34 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar44 = lVar44 + lVar22 * 0x5c;
    fVar69 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + fVar46 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar59 = -fVar69;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar59 = fVar69;
    }
    *(float *)(lVar44 + 0x58) = *(float *)(lVar31 + lVar38 * unaff_x24 + 0x144) + fVar59;
    *(float *)(lVar44 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar44 + 0x54) = fVar65;
    *(float *)(lVar44 + 0x48) = in_stack_00000060 + (fVar64 - fVar65);
    *(float *)(lVar44 + 0x4c) = fVar64;
    if ((int)in_stack_000017dc < 0x2d) {
      if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar28 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar16 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar16;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar28 == 0) || (*(long *)(lVar28 + 0x50) == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)(lVar28 + 0x50) + 0x18) <= iVar16) {
          FUN_0358ca18();
          lVar28 = unaff_x19[0x6d];
          if (lVar28 == 0) goto LAB_035574b8;
        }
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar59 = *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((in_stack_000017dc == 0x2029) || (fVar69 = 0.0, in_stack_000017dc == 10)) {
            fVar69 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar25 = 0;
          fVar69 = fVar59 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar69) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_000017dc == 0x2029) || (fVar69 = 0.0, in_stack_000017dc == 10)) {
            fVar69 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar25 = 1;
          fVar69 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar69);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar69;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar28 = *(long *)puVar8;
        }
        uVar20 = *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar59;
        param_3 = NEON_rev64(uVar20,4);
        unaff_x19[0x99] = param_3;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_0358c4f0();
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068._4_4_ = 1;
        in_stack_00000070 = 1;
        unaff_x28 = in_stack_00000170;
        goto LAB_03550bd0;
      }
      if (in_stack_000017dc == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
        uVar14 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar40 = 3;
      }
    }
    else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
  }
LAB_03553c8c:
  uVar15 = *unaff_x20;
  if (uVar34 <= uVar15) goto LAB_035575f4;
  if (*(char *)(lVar31 + (long)(int)uVar15 * unaff_x24 + 0x194) != '\0') {
    lVar31 = lVar31 + (long)(int)uVar15 * unaff_x24;
    uVar55 = *(ulong *)(lVar31 + 0x11c);
    uVar21 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar21 ^ (uVar21 ^ uVar55) &
                  ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar55 >> 0x20)),
                            -(uint)((float)uVar21 < (float)uVar55));
    uVar21 = *(ulong *)(in_stack_00000080 + 0x238);
    param_3 = *(ulong *)(lVar31 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar21 ^ (uVar21 ^ param_3) &
                  ~CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar21 >> 0x20)),
                            -(uint)((float)param_3 < (float)uVar21));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar40 || ((1 << (ulong)(uVar40 & 0x1f) & 0x2c00U) == 0)))) {
    lVar31 = *(long *)(lVar28 + 0x58);
    if (lVar31 == 0) goto LAB_035574b8;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar31 + 0x18) < iVar12) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar28 + 0x58),iVar12,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar28 = *in_stack_00000170;
      if (lVar28 == 0) goto LAB_035574b8;
    }
    lVar31 = *(long *)(lVar28 + 0x58);
    if (lVar31 == 0) goto LAB_035574b8;
    uVar34 = *(uint *)(unaff_x19 + 0x96);
    lVar44 = (long)(int)uVar34;
    uVar15 = *(uint *)(lVar31 + 0x18);
    if (uVar15 <= uVar34) goto LAB_035575f4;
    lVar22 = lVar31 + lVar44 * 0x14;
    fVar69 = *(float *)(lVar22 + 0x30);
    param_3 = (ulong)(uint)fVar69;
    *(undefined4 *)(lVar22 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar59 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar69 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar59 = fVar69;
    }
    *(float *)(lVar22 + 0x30) = fVar59;
    uVar40 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar40 == 0 && uVar34 == 0) {
      *(uint *)(lVar31 + (ulong)uVar34 * 0x14 + 0x20) = uVar40;
    }
    else {
      uVar5 = uVar40 - 1;
      if (0 < (int)uVar40) {
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= uVar5) goto LAB_035575f4;
        if (uVar34 != *(uint *)(lVar28 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar15 <= uVar34 - 1) goto LAB_035575f4;
          *(uint *)(lVar31 + 0x20 + (long)(int)(uVar34 - 1) * 0x14 + 4) = uVar5;
          *(uint *)(lVar31 + 0x20 + lVar44 * 0x14) = uVar40;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar40 == in_stack_00000088._4_4_) {
        *(float *)(lVar31 + lVar44 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((uVar13 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((in_stack_00000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
         (0x1d < in_stack_000017dc - 0xa961)) || (uVar21 = FUN_03597a54(0), (uVar21 & 1) != 0)) &&
       ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
         (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
    goto LAB_03553f78;
    lVar28 = FUN_035978e8(0);
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x10) == 0)) goto LAB_035574b8;
    uVar15 = FUN_0219c130(*(long *)(lVar28 + 0x10),&stack0x000008a0,
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
      if (uVar27 != uVar45 || ((in_stack_00000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (uVar13 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar28 = FUN_035978e8(0);
    if (((lVar28 == 0) || (*in_stack_00000170 == 0)) ||
       (lVar31 = *(long *)(*in_stack_00000170 + 0x38), lVar31 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar31 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar28 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar31 + (long)(int)(*unaff_x20 + 1) * (long)iVar16 + 0x20);
    uVar21 = FUN_0219c130(*(long *)(lVar28 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar15 & 1) != 0) goto LAB_035541dc;
    if ((uVar21 & 1) == 0) goto LAB_03554270;
    if ((in_stack_00000070 & 1) == 0) goto LAB_035542a8;
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
        in_stack_00000070 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_035542ac;
      }
      goto LAB_03553ef0;
    }
LAB_03553f78:
    if ((in_stack_00000070 & 1) == 0) {
LAB_035542a8:
      in_stack_00000070 = 0;
      goto LAB_035542ac;
    }
    if (uVar13 == 0) {
UnityEngine_Animator__set_animatePhysics:
      if (!bVar7 && in_stack_000017dc == 0xad) goto UnityEngine_Animator__get_bodyPositionInternal;
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
  in_stack_00000070 = 1;
LAB_035542ac:
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0358c4f0();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  unaff_x28 = in_stack_00000170;
  goto LAB_03550bd0;
code_r0x0355298c:
  lVar28 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar28 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar28 = *(long *)puVar8;
  }
  FUN_0209b778(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
  memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
LAB_035529dc:
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  iVar16 = FUN_0358c15c();
  unaff_x28 = in_stack_00000170;
  goto LAB_035529e8;
LAB_03554e78:
  uVar14 = uVar11 - 1;
  if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar44 = *(long *)(*unaff_x28 + 0x50), lVar44 == 0)) goto LAB_035574b8;
  lVar38 = (long)(int)uVar14;
  lVar22 = lVar28 + lVar38 * 0x178;
  uVar27 = *(uint *)(lVar22 + 100);
  if (*(uint *)(lVar44 + 0x18) <= uVar27) goto LAB_035575f4;
  lVar41 = (long)(int)uVar27;
  lVar44 = lVar44 + lVar41 * 0x5c;
  lVar36 = *(long *)(lVar22 + 0x38);
  uVar3 = *(ushort *)(lVar22 + 0x20);
  uVar15 = *(uint *)(lVar44 + 0x3c);
  uVar45 = *(uint *)(lVar44 + 0x68);
  iVar2 = *(int *)(lVar44 + 0x20);
  iVar17 = *(int *)(lVar44 + 0x28);
  iVar18 = *(int *)(lVar44 + 0x2c);
  uVar34 = *(uint *)(lVar44 + 0x40);
  lVar22 = (long)(int)uVar34;
  fVar49 = *(float *)(lVar44 + 0x4c);
  fVar50 = *(float *)(lVar44 + 0x54);
  fVar64 = *(float *)(lVar44 + 0x58);
  fVar70 = *(float *)(lVar44 + 0x5c);
  fVar51 = *(float *)(lVar44 + 0x60);
  fVar62 = *(float *)(lVar44 + 0x6c);
  fVar58 = *(float *)(lVar44 + 0x70);
  fVar47 = *(float *)(lVar44 + 0x74);
  fVar66 = *(float *)(lVar44 + 0x78);
  uVar40 = (uint)uVar3;
  if ((int)uVar45 < 9) {
    switch(uVar45) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar51 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar64;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar51 + fVar70 * 0.5) - fVar64 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar70 + fVar51) - fVar64;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar70 + fVar51;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar45 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_03554fac;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar28 + (long)(int)uVar15 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b8cc4(uVar4,0);
      if ((uVar21 & 1) == 0) {
        bVar1 = (int)uVar27 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar64 <= fVar70) && (!bVar1 && uVar45 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar70 + fVar51;
        }
        goto LAB_03555088;
      }
      if (((uVar11 == 1) || (uVar27 != uVar13)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar51;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar70 + fVar51;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar40,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar26 = (char)unaff_x19[0x1e];
        fVar51 = -fVar64;
        if (cVar26 != '\0') {
          fVar51 = fVar64;
        }
        if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_035575f4;
        iVar18 = (int)*(char *)(lVar28 + (long)(int)uVar15 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar18 + -1;
        if (iVar18 < 1) {
          fVar64 = 1.0;
          iVar18 = 1;
        }
        else {
          fVar64 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar40 == 9) {
LAB_03556e74:
          fVar64 = 1.0 - fVar64;
        }
        else {
          if (uVar40 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_026b97f8(uVar40,0);
            cVar26 = (char)unaff_x19[0x1e];
            if ((uVar21 & 1) != 0) goto LAB_03556e74;
          }
          iVar18 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar17;
        }
        fVar64 = ((fVar70 + fVar51) * fVar64) / (float)iVar18;
        if (cVar26 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar64;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar64;
        }
      }
    }
  }
  else if (uVar45 == 0x20) {
    fVar64 = fVar62 + fVar47;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar45 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar45 <= uVar14) goto LAB_035575f4;
  lVar44 = lVar28 + lVar38 * 0x178;
  fVar70 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar64 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar51 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar44 + 0x194) == '\0') goto LAB_03555938;
  iVar17 = *(int *)(lVar28 + lVar38 * 0x178 + 0x2c);
  if (iVar17 != 0) goto LAB_0355574c;
  fVar48 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar27,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar30 = lVar28 + lVar38 * 0x178;
    *(undefined4 *)(lVar30 + 0x84) = 0;
    *(undefined4 *)(lVar30 + 0xac) = 0;
    *(undefined4 *)(lVar30 + 0xd4) = 0x3f800000;
    fVar48 = 1.0;
    break;
  case 1:
    fVar66 = *(float *)(lVar28 + lVar38 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar30 = lVar28 + lVar38 * 0x178;
      fVar47 = (in_stack_000000f8._4_4_ + fVar66) - *(float *)(in_stack_00000080 + 0x230);
      fVar66 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar30 = lVar28 + lVar38 * 0x178;
    fVar47 = fVar47 - fVar62;
    *(float *)(lVar30 + 0x84) = fVar48 + (fVar66 - fVar62) / fVar47;
    *(float *)(lVar30 + 0xac) = fVar48 + (*(float *)(lVar30 + 0x98) - fVar62) / fVar47;
    *(float *)(lVar30 + 0xd4) = fVar48 + (*(float *)(lVar30 + 0xc0) - fVar62) / fVar47;
    fVar48 = fVar48 + (*(float *)(lVar30 + 0xe8) - fVar62) / fVar47;
    break;
  case 2:
    lVar30 = lVar28 + lVar38 * 0x178;
    fVar66 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar47 = (in_stack_000000f8._4_4_ + *(float *)(lVar30 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar30 + 0x84) = fVar48 + fVar47 / fVar66;
    *(float *)(lVar30 + 0xac) =
         fVar48 + ((in_stack_000000f8._4_4_ + *(float *)(lVar30 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar30 + 0xd4) =
         fVar48 + ((in_stack_000000f8._4_4_ + *(float *)(lVar30 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar48 = fVar48 + ((in_stack_000000f8._4_4_ + *(float *)(lVar30 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar30 = lVar28 + lVar38 * 0x178;
      *(undefined4 *)(lVar30 + 0x88) = 0;
      *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0xd8) = 0;
      *(undefined4 *)(lVar30 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar30 = lVar28 + lVar38 * 0x178;
      fVar66 = fVar66 - fVar58;
      fVar47 = fVar48 + (*(float *)(lVar30 + 0x74) - fVar58) / fVar66;
      fVar66 = fVar48 + (*(float *)(lVar30 + 0x9c) - fVar58) / fVar66;
      *(float *)(lVar30 + 0x88) = fVar47;
      *(float *)(lVar30 + 0xb0) = fVar66;
      *(float *)(lVar30 + 0xd8) = fVar47;
      *(float *)(lVar30 + 0x100) = fVar66;
      break;
    case 2:
      lVar30 = lVar28 + lVar38 * 0x178;
      fVar47 = fVar48 + (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar30 + 0x88) = fVar47;
      fVar66 = *(float *)(unaff_x19 + 0x9c);
      fVar62 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar30 + 0xd8) = fVar47;
      fVar47 = fVar48 + (*(float *)(lVar30 + 0x9c) - fVar66) / (fVar62 - fVar66);
      *(float *)(lVar30 + 0xb0) = fVar47;
      *(float *)(lVar30 + 0x100) = fVar47;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar45 = (uint)*(undefined8 *)(lVar28 + 0x18);
    }
    if (uVar45 <= uVar14) goto LAB_035575f4;
    lVar30 = lVar28 + lVar38 * 0x178;
    fVar47 = *(float *)(lVar30 + 0x15c);
    fVar66 = (1.0 - (*(float *)(lVar30 + 0x88) + *(float *)(lVar30 + 0xb0)) * fVar47) * 0.5;
    fVar62 = fVar48 + *(float *)(lVar30 + 0x88) * fVar47 + fVar66;
    fVar48 = fVar48 + fVar66 + *(float *)(lVar30 + 0xb0) * fVar47;
    *(float *)(lVar30 + 0x84) = fVar62;
    *(float *)(lVar30 + 0xac) = fVar62;
    *(float *)(lVar30 + 0xd4) = fVar48;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar28 + lVar38 * 0x178 + 0xfc) = fVar48;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar45 <= uVar14) goto LAB_035575f4;
    lVar30 = lVar28 + lVar38 * 0x178;
    *(undefined4 *)(lVar30 + 0x88) = 0;
    *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar30 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar30 + 0x100) = 0;
    break;
  case 1:
    if (uVar14 < uVar45) {
      lVar30 = lVar28 + lVar38 * 0x178;
      fVar49 = fVar49 - fVar50;
      fVar48 = (*(float *)(lVar30 + 0x74) - fVar50) / fVar49;
      fVar49 = (*(float *)(lVar30 + 0x9c) - fVar50) / fVar49;
      *(float *)(lVar30 + 0x88) = fVar48;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar45 <= uVar14) goto LAB_035575f4;
    lVar30 = lVar28 + lVar38 * 0x178;
    fVar48 = (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar30 + 0x88) = fVar48;
    fVar49 = (*(float *)(lVar30 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar30 + 0xb0) = fVar49;
    *(float *)(lVar30 + 0xd8) = fVar49;
    *(float *)(lVar30 + 0x100) = fVar48;
    break;
  case 3:
    if (uVar45 <= uVar14) goto LAB_035575f4;
    lVar30 = lVar28 + lVar38 * 0x178;
    fVar49 = *(float *)(lVar30 + 0x15c);
    fVar47 = (1.0 - (*(float *)(lVar30 + 0x84) + *(float *)(lVar30 + 0xd4)) / fVar49) * 0.5;
    fVar48 = *(float *)(lVar30 + 0x84) / fVar49 + fVar47;
    fVar47 = fVar47 + *(float *)(lVar30 + 0xd4) / fVar49;
    *(float *)(lVar30 + 0x88) = fVar48;
    *(float *)(lVar30 + 0xb0) = fVar47;
    *(float *)(lVar30 + 0x100) = fVar48;
    *(float *)(lVar30 + 0xd8) = fVar47;
  }
  if (uVar45 <= uVar14) goto LAB_035575f4;
  lVar30 = lVar28 + lVar38 * 0x178;
  fVar48 = *(float *)(lVar30 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar30 + 0x5c) == '\0') && ((*(byte *)(lVar28 + lVar38 * 0x178 + 400) & 1) != 0)) {
    fVar48 = -fVar48;
  }
  fVar47 = fVar59;
  if (((iVar12 == 2) || (fVar47 = fVar46, iVar12 == 1)) || (fVar47 = fVar59 / fVar69, iVar12 == 0))
  {
    fVar48 = fVar47 * fVar48;
  }
  lVar30 = lVar28 + lVar38 * 0x178;
  fVar49 = *(float *)(lVar30 + 0x88);
  fVar66 = *(float *)(lVar30 + 0x84);
  fVar47 = -2.1474836e+09;
  if (fVar66 != INFINITY) {
    fVar47 = (float)(int)fVar66;
  }
  fVar62 = *(float *)(lVar30 + 0xd4);
  fVar58 = *(float *)(lVar30 + 0xd8);
  fVar50 = -2.1474836e+09;
  if (fVar49 != INFINITY) {
    fVar50 = (float)(int)fVar49;
  }
  uVar53 = FUN_03591d3c(fVar66 - fVar47,fVar49 - fVar50);
  *(undefined4 *)(lVar30 + 0x84) = uVar53;
  if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar58 = fVar58 - fVar50;
  *(float *)(lVar30 + 0x88) = fVar48;
  uVar53 = FUN_03591d3c(fVar66 - fVar47,fVar58);
  *(undefined4 *)(lVar28 + lVar38 * 0x178 + 0xac) = uVar53;
  if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar62 = fVar62 - fVar47;
  *(float *)(lVar28 + lVar38 * 0x178 + 0xb0) = fVar48;
  fVar47 = (float)FUN_03591d3c(fVar62,fVar58);
  *(float *)(lVar30 + 0xd4) = fVar47;
  if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_035575f4;
  *(float *)(lVar30 + 0xd8) = fVar48;
  uVar53 = FUN_03591d3c(fVar62,fVar49 - fVar50);
  *(undefined4 *)(lVar28 + lVar38 * 0x178 + 0xfc) = uVar53;
  uVar45 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar45 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar28 + lVar38 * 0x178 + 0x100) = fVar48;
LAB_0355574c:
  if (((int)uVar14 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar27 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar45 <= uVar14) goto LAB_035575f4;
      lVar44 = lVar28 + lVar38 * 0x178;
      *(ulong *)(lVar44 + 0x70) =
           CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar44 + 0x70));
      *(float *)(lVar44 + 0x78) = fVar51 + *(float *)(lVar44 + 0x78);
      *(ulong *)(lVar44 + 0x98) =
           CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar44 + 0x98));
      *(float *)(lVar44 + 0xa0) = fVar51 + *(float *)(lVar44 + 0xa0);
      *(ulong *)(lVar44 + 0xc0) =
           CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar44 + 0xc0));
      *(float *)(lVar44 + 200) = fVar51 + *(float *)(lVar44 + 200);
      *(ulong *)(lVar44 + 0xe8) =
           CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar44 + 0xe8));
      *(float *)(lVar44 + 0xf0) = fVar51 + *(float *)(lVar44 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar27 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar14 < uVar45) {
        if (*(uint *)(lVar28 + lVar38 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar44 = lVar28 + lVar38 * 0x178;
          *(ulong *)(lVar44 + 0x70) =
               CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                        fVar70 + (float)*(undefined8 *)(lVar44 + 0x70));
          *(float *)(lVar44 + 0x78) = fVar51 + *(float *)(lVar44 + 0x78);
          *(ulong *)(lVar44 + 0x98) =
               CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                        fVar70 + (float)*(undefined8 *)(lVar44 + 0x98));
          *(float *)(lVar44 + 0xa0) = fVar51 + *(float *)(lVar44 + 0xa0);
          *(ulong *)(lVar44 + 0xc0) =
               CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                        fVar70 + (float)*(undefined8 *)(lVar44 + 0xc0));
          *(float *)(lVar44 + 200) = fVar51 + *(float *)(lVar44 + 200);
          *(ulong *)(lVar44 + 0xe8) =
               CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                        fVar70 + (float)*(undefined8 *)(lVar44 + 0xe8));
          *(float *)(lVar44 + 0xf0) = fVar51 + *(float *)(lVar44 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar45 <= uVar14) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar45 = *(uint *)(lVar28 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar30 = lVar28 + lVar38 * 0x178;
  *(undefined8 *)(lVar30 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar30 + 0x78) = uVar53;
  if (uVar45 <= uVar14) goto LAB_035575f4;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar30 = lVar28 + lVar38 * 0x178;
  *(undefined8 *)(lVar30 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar30 + 0xa0) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar30 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar30 + 200) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar30 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar30 + 0xf0) = uVar53;
  *(undefined1 *)(lVar44 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar17 == 0) {
    pcVar33 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar33)();
  }
  else if (iVar17 == 1) {
    pcVar33 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  uVar19 = *(undefined8 *)(lVar44 + 0x11c);
  *(undefined8 *)(lVar44 + 0x11c) =
       CONCAT44(fVar64 + (float)((ulong)uVar19 >> 0x20),fVar70 + (float)uVar19);
  *(float *)(lVar44 + 0x124) = fVar51 + *(float *)(lVar44 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  *(ulong *)(lVar44 + 0x110) =
       CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0x110) >> 0x20),
                fVar70 + (float)*(undefined8 *)(lVar44 + 0x110));
  *(float *)(lVar44 + 0x118) = fVar51 + *(float *)(lVar44 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  *(ulong *)(lVar44 + 0x128) =
       CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0x128) >> 0x20),
                fVar70 + (float)*(undefined8 *)(lVar44 + 0x128));
  *(float *)(lVar44 + 0x130) = fVar51 + *(float *)(lVar44 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar44 = lVar44 + lVar38 * 0x178;
  *(float *)(lVar44 + 0x134) = fVar70 + *(float *)(lVar44 + 0x134);
  *(ulong *)(lVar44 + 0x138) =
       CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar44 + 0x138) >> 0x20),
                fVar64 + (float)*(undefined8 *)(lVar44 + 0x138));
  lVar44 = *in_stack_00000170;
  if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x38), lVar30 == 0)) goto LAB_035574b8;
  uVar45 = *(uint *)(lVar30 + 0x18);
  if (uVar45 <= uVar14) goto LAB_035575f4;
  lVar37 = lVar30 + lVar38 * 0x178;
  uVar55 = CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar37 + 0x140) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar37 + 0x140));
  fVar47 = fVar64 + *(float *)(lVar37 + 0x150);
  uVar56 = (ulong)(uint)fVar47;
  uVar57 = CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar37 + 0x148) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar37 + 0x148));
  *(float *)(lVar37 + 0x150) = fVar47;
  *(ulong *)(lVar37 + 0x140) = uVar55;
  *(ulong *)(lVar37 + 0x148) = uVar57;
  if (uVar27 == uVar13) {
    uVar13 = *unaff_x20 - 1;
    if (uVar14 == uVar13) goto LAB_03555b44;
  }
  else {
    lVar44 = *(long *)(lVar44 + 0x50);
    if (lVar44 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar44 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar37 = (long)(int)uVar13;
    lVar39 = lVar44 + lVar37 * 0x5c;
    uVar57 = (ulong)(uint)*(float *)(lVar39 + 0x58);
    fVar47 = fVar64 + *(float *)(lVar39 + 0x54);
    uVar55 = (ulong)(uint)fVar47;
    fVar49 = fVar70 + *(float *)(lVar39 + 0x58);
    uVar56 = (ulong)(uint)fVar49;
    *(ulong *)(lVar39 + 0x4c) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                  fVar64 + (float)*(undefined8 *)(lVar39 + 0x4c));
    *(float *)(lVar39 + 0x54) = fVar47;
    *(float *)(lVar39 + 0x58) = fVar49;
    if (uVar45 <= *(uint *)(lVar39 + 0x34)) goto LAB_035575f4;
    uVar53 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
    lVar44 = lVar44 + lVar37 * 0x5c;
    *(float *)(lVar44 + 0x70) = fVar47;
    *(undefined4 *)(lVar44 + 0x6c) = uVar53;
    lVar44 = *in_stack_00000170;
    if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x50), lVar30 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar44 = *(long *)(lVar44 + 0x38);
    if (lVar44 == 0) goto LAB_035574b8;
    uVar13 = *(uint *)(lVar30 + lVar37 * 0x5c + 0x40);
    if (*(uint *)(lVar44 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar30 = lVar30 + lVar37 * 0x5c;
    *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar13 * 0x178 + 0x128);
    *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
    uVar13 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar14 == uVar13) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x50), lVar30 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar27) goto LAB_035575f4;
      lVar37 = lVar30 + lVar41 * 0x5c;
      uVar57 = (ulong)(uint)*(float *)(lVar37 + 0x58);
      uVar55 = CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                        fVar64 + (float)*(undefined8 *)(lVar37 + 0x4c));
      fVar47 = fVar64 + *(float *)(lVar37 + 0x54);
      fVar70 = fVar70 + *(float *)(lVar37 + 0x58);
      uVar56 = (ulong)(uint)fVar70;
      *(ulong *)(lVar37 + 0x4c) = uVar55;
      *(float *)(lVar37 + 0x54) = fVar47;
      *(float *)(lVar37 + 0x58) = fVar70;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
      uVar53 = *(undefined4 *)(lVar44 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
      lVar30 = lVar30 + lVar41 * 0x5c;
      *(float *)(lVar30 + 0x70) = fVar47;
      *(undefined4 *)(lVar30 + 0x6c) = uVar53;
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x50), lVar30 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar27) goto LAB_035575f4;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      uVar13 = *(uint *)(lVar30 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar44 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar30 = lVar30 + lVar41 * 0x5c;
      *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar13 * 0x178 + 0x128);
      *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar21 = FUN_026b82c4(uVar40,0);
  if (((((uVar21 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
    if (bVar6) {
      if (((uVar11 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
         (((int)uVar14 < (int)*unaff_x20 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
        if (*(uint *)(lVar28 + 0x18) <= uVar11 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar28 + lVar31 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b82c4(uVar4,0);
        if ((uVar21 & 1) != 0) {
          if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar28 + lVar31 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar4,0);
          if ((uVar21 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar11 != 1) {
LAB_0355686c:
        bVar6 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b81f8(uVar40,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b63d8(uVar40,0);
        if (((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar14 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b82c4(uVar40,0);
      iVar17 = iStack0000000000000128;
      if ((uVar21 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar17 = uVar11 - 2;
    }
    lVar44 = *in_stack_00000170;
    if (lVar44 == 0) goto LAB_035574b8;
    lVar30 = *(long *)(lVar44 + 0x40);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar13 = *(uint *)(lVar44 + 0x24);
    iVar18 = *(int *)(lVar30 + 0x18);
    if (iVar18 < (int)(uVar13 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar44 + 0x40),iVar18 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar44 = *in_stack_00000170;
      if (lVar44 == 0) goto LAB_035574b8;
    }
    lVar44 = *(long *)(lVar44 + 0x40);
    if (lVar44 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar44 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar44 = lVar44 + (long)(int)uVar13 * 0x18;
    *(long **)(lVar44 + 0x20) = unaff_x19;
    *(float *)(lVar44 + 0x28) = fStack0000000000000158;
    *(int *)(lVar44 + 0x2c) = iVar17;
    *(int *)(lVar44 + 0x30) = (iVar17 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar44 = unaff_x19[0x6d];
    if (lVar44 == 0) goto LAB_035574b8;
    lVar30 = *(long *)(lVar44 + 0x50);
    *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar27) goto LAB_035575f4;
    lVar30 = lVar30 + lVar41 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      fStack0000000000000158 = (float)uVar14;
    }
    if (uVar14 == *unaff_x20 - 1) {
      lVar44 = *in_stack_00000170;
      if (lVar44 == 0) goto LAB_035574b8;
      lVar30 = *(long *)(lVar44 + 0x40);
      if (lVar30 == 0) goto LAB_035574b8;
      uVar13 = *(uint *)(lVar44 + 0x24);
      iVar17 = *(int *)(lVar30 + 0x18);
      if (iVar17 < (int)(uVar13 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar44 + 0x40),iVar17 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar44 = *in_stack_00000170;
        if (lVar44 == 0) goto LAB_035574b8;
      }
      lVar44 = *(long *)(lVar44 + 0x40);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar44 = lVar44 + (long)(int)uVar13 * 0x18;
      *(long **)(lVar44 + 0x20) = unaff_x19;
      *(float *)(lVar44 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar44 + 0x2c) = uVar14;
      *(uint *)(lVar44 + 0x30) = uVar11 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar44 = unaff_x19[0x6d];
      if (lVar44 == 0) goto LAB_035574b8;
      lVar30 = *(long *)(lVar44 + 0x50);
      *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar27) goto LAB_035575f4;
      lVar30 = lVar30 + lVar41 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  uVar13 = *(uint *)(lVar44 + 0x18);
  if (uVar13 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar44 + lVar38 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar13 <= uVar11 - 2) goto LAB_035575f4;
      lVar41 = *unaff_x19;
      uVar13 = *(uint *)(lVar44 + lVar31 + -0x330);
      uVar53 = *(undefined4 *)(lVar44 + lVar31 + -0x2f8);
LAB_035562ec:
      pcVar33 = *(code **)(lVar41 + 0x8d8);
LAB_035562f4:
      uVar57 = (ulong)uVar13;
      uVar55 = (ulong)(uint)_in_stack_00000070;
      uVar56 = (ulong)uStack0000000000000074;
      (*pcVar33)(fStack0000000000000078,uVar55,uVar56,uVar57,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar53);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar44 = *(long *)puVar8;
      }
LAB_03556348:
      bVar10 = false;
      fVar65 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar44 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar44 = lVar44 + lVar38 * 0x178;
    iVar17 = *(int *)(lVar44 + 0x68);
    *(int *)(lVar44 + 0x16c) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar27)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar17 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b63d8(uVar40,0);
    if ((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_035575f4;
      fVar47 = *(float *)(lVar41 + lVar38 * 0x178 + 0x160);
      if (fVar65 <= fVar47) {
        fVar65 = fVar47;
      }
      if (fStack0000000000000100 <= ABS(fVar48)) {
        fStack0000000000000100 = ABS(fVar48);
      }
      if (iVar17 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar44 = *in_stack_00000170;
          if (lVar44 == 0) goto LAB_035574b8;
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar41 + 0x15a8);
      }
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar49 = *(float *)(lVar44 + lVar38 * 0x178 + 0x14c);
      fVar47 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar49 = fVar49 + fVar65 * fVar47;
      if (fVar49 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar49;
      }
      uVar55 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar17;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar14)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar14 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar40,0);
        if ((uVar21 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar44 = lVar44 + lVar38 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar44 + 0x160);
      fStack0000000000000078 = *(float *)(lVar44 + 0x11c);
      uVar56 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar65 != 0.0;
      fVar47 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar47 = fVar65;
      }
      fVar65 = fVar47;
      uVar68 = *(undefined4 *)(lVar44 + 0x168);
      uStack0000000000000074 = 0;
      fVar47 = fVar48;
      if (bVar10) {
        fVar47 = fStack0000000000000100;
      }
      uVar55 = (ulong)(uint)fVar47;
      _in_stack_00000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar47;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar14 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar38 * 0x178;
          lVar41 = *unaff_x19;
          uVar13 = *(uint *)(lVar44 + 0x128);
          uVar53 = *(undefined4 *)(lVar44 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar14 == uVar15) || ((int)uVar34 <= (int)uVar14)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        lVar41 = lVar38;
        uVar13 = uVar14;
        if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
          lVar41 = lVar22;
          uVar13 = uVar34;
        }
        if (uVar13 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar41 * 0x178;
          uVar13 = *(uint *)(lVar44 + 0x128);
          uVar53 = *(undefined4 *)(lVar44 + 0x160);
          pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        uVar13 = *(uint *)(lVar44 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar11) goto LAB_035575f4;
      uVar21 = FUN_03567ad8(uVar68,*(undefined4 *)(lVar44 + lVar31),0);
      if ((uVar21 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0)) {
          if (uVar14 < *(uint *)(lVar44 + 0x18)) {
            lVar44 = lVar44 + lVar38 * 0x178;
            uVar57 = (ulong)*(uint *)(lVar44 + 0x128);
            uVar56 = (ulong)uStack0000000000000074;
            uVar55 = (ulong)(uint)_in_stack_00000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar55,uVar56,uVar57,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar44 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar44 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar44 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar44 = *(long *)puVar8;
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
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
  if (lVar36 == 0) goto LAB_035574b8;
  uVar13 = *(uint *)(lVar44 + lVar38 * 0x178 + 400);
  fVar47 = (float)FUN_03776a30(lVar36 + 0x50,0);
  if ((uVar13 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar11 - 2) goto LAB_035575f4;
      uVar13 = *(uint *)(lVar44 + lVar31 + -0x330);
      fVar64 = *(float *)(lVar44 + lVar31 + -0x30c);
      pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar57 = (ulong)uVar13;
      uVar55 = (ulong)(uint)fStack000000000000009c;
      uVar56 = (ulong)(uint)fStack0000000000000098;
      (*pcVar33)(fStack00000000000000a0,uVar55,uVar56,uVar57,
                 fStack00000000000000a8 * fVar47 + fVar64,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar44 = *in_stack_00000170;
    if ((lVar44 == 0) || (lVar41 = *(long *)(lVar44 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar41 + lVar38 * 0x178 + 0x174) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar27)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar41 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar14)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar14 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar40,0);
        if ((uVar21 & 1) != 0) goto LAB_035564e8;
        lVar44 = *in_stack_00000170;
        if (lVar44 == 0) goto LAB_035574b8;
      }
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar44 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar44 = lVar44 + lVar38 * 0x178;
      fStack0000000000000040 = *(float *)(lVar44 + 0x60);
      fStack0000000000000038 = *(float *)(lVar44 + 0x14c);
      uVar55 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar44 + 0x11c);
      uVar56 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar44 + 0x160);
      fStack000000000000009c = fVar47 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar13 = *unaff_x20;
    if (uVar13 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar14 < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + lVar38 * 0x178;
          lVar22 = *unaff_x19;
          uVar13 = *(uint *)(lVar44 + 0x128);
          fVar64 = *(float *)(lVar44 + 0x14c);
LAB_03556654:
          pcVar33 = *(code **)(lVar22 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar14 == uVar15) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        uVar13 = *(uint *)(lVar44 + 0x18);
        if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
          if (uVar13 <= uVar34) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar22 = lVar38;
          if (uVar13 <= uVar14) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar44 = lVar44 + lVar22 * 0x178;
        fVar64 = *(float *)(lVar44 + 0x14c);
        uVar13 = *(uint *)(lVar44 + 0x128);
        pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)uVar13) {
      lVar44 = *in_stack_00000170;
      if ((lVar44 != 0) && (lVar41 = *(long *)(lVar44 + 0x38), lVar41 != 0)) {
        if (uVar11 < *(uint *)(lVar41 + 0x18)) {
          if (*(float *)(lVar41 + lVar31 + -0x108) == fStack0000000000000040) {
            fVar49 = *(float *)(lVar41 + lVar31 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar55 = (ulong)(uint)fStack0000000000000038;
            uVar21 = FUN_03567bac(fVar64 + fVar49,uVar55,0);
            if ((uVar21 & 1) != 0) {
              uVar13 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar44 = *in_stack_00000170;
            if (lVar44 == 0) goto LAB_035574b8;
          }
          lVar44 = *(long *)(lVar44 + 0x38);
          if (lVar44 != 0) {
            uVar13 = *(uint *)(lVar44 + 0x18);
            if ((int)uVar14 <= (int)uVar34) goto FUN_035568e8;
            if (uVar34 < uVar13) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar14 < (int)uVar13) {
      iVar17 = FUN_036d3364(lVar36,0);
      if (*(uint *)(lVar28 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar44 = *(long *)(lVar28 + lVar31 + -0x130);
      if (lVar44 == 0) goto LAB_035574b8;
      iVar18 = FUN_036d3364(lVar44,0);
      if (iVar17 != iVar18) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 != 0))
      {
        if (uVar11 - 2 < *(uint *)(lVar44 + 0x18)) {
          lVar22 = *unaff_x19;
          uVar13 = *(uint *)(lVar44 + lVar31 + -0x330);
          fVar64 = *(float *)(lVar44 + lVar31 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
  goto LAB_035574b8;
  uVar13 = (uint)*(undefined8 *)(lVar44 + 0x18);
  if (uVar13 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar44 + lVar38 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      uVar56 = (ulong)uStack00000000000000c0;
      uVar55 = (ulong)(uint)fStack00000000000000dc;
      uVar57 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar55,uVar56,uVar57,fStack00000000000000d0,uVar56);
    }
LAB_035569b4:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar27)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar44 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar34 < (int)uVar14)) ||
         (!bVar1)) goto LAB_035569b4;
      if (uVar14 == uVar34) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar40,0);
        if ((uVar21 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar22 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar22 = *(long *)puVar8;
      }
      if ((*in_stack_00000170 == 0) || (lVar44 = *(long *)(*in_stack_00000170 + 0x38), lVar44 == 0))
      goto LAB_035574b8;
      uVar13 = (uint)*(undefined8 *)(lVar44 + 0x18);
      if (uVar13 <= uVar14) goto LAB_035575f4;
      lVar22 = *(long *)(lVar22 + 0xb8);
      lVar36 = lVar44 + lVar38 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar36 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar36 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar22 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar22 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar36 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar22 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar22 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar13 <= uVar14) goto LAB_035575f4;
    lVar44 = lVar44 + lVar38 * 0x178;
    fVar47 = *(float *)(lVar44 + 0x128);
    fVar50 = *(float *)(lVar44 + 0x188);
    uVar20 = *(undefined8 *)(lVar44 + 0x17c);
    fVar62 = *(float *)(lVar44 + 0x184);
    uVar19 = *(undefined8 *)(lVar44 + 0x184);
    fVar51 = *(float *)(lVar44 + 0x18c);
    fVar64 = *(float *)(lVar44 + 0x11c);
    fVar66 = *(float *)(lVar44 + 0x148);
    fVar49 = *(float *)(lVar44 + 0x150);
    in_stack_00000178 = uVar20;
    fStack0000000000000180 = fVar62;
    fStack0000000000000184 = fVar50;
    in_stack_00000188 = fVar51;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar21 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar44 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar21 & 1) == 0) {
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar44);
      }
      fVar47 = fVar47 + (float)in_stack_000017b8;
      uVar56 = (ulong)(uint)fVar47;
      fVar64 = fVar64 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar49 = fVar49 - in_stack_000017c0;
      uVar55 = (ulong)(uint)fVar49;
      fVar66 = fVar66 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar57 = (ulong)(uint)fVar66;
      if (fVar64 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar64;
      }
      if (fVar49 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar49;
      }
      if (fStack00000000000000c8 <= fVar47) {
        fStack00000000000000c8 = fVar47;
      }
      if (fStack00000000000000d0 <= fVar66) {
        fStack00000000000000d0 = fVar66;
      }
    }
    else {
      if (*(int *)(lVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar44);
      }
      fVar64 = (fVar64 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar57 = (ulong)(uint)fVar64;
      if (fVar49 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar49;
      }
      uVar55 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar66) {
        fStack00000000000000d0 = fVar66;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar55,uVar56,uVar57,fStack00000000000000d0,uVar56);
      fStack00000000000000dc = fVar49 - fVar51;
      fStack00000000000000c8 = fVar47 + fVar62;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar66 + fVar50;
      fStack00000000000000d8 = fVar64;
      in_stack_000017b0 = uVar20;
      in_stack_000017b8 = uVar19;
      in_stack_000017c0 = fVar51;
    }
    if (((*unaff_x20 == 1) || (uVar14 == uVar15)) || (((int)uVar34 <= (int)uVar14 || (!bVar1)))) {
      uVar56 = (ulong)uStack00000000000000c0;
      uVar55 = (ulong)(uint)fStack00000000000000dc;
      uVar57 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar55,uVar56,uVar57,fStack00000000000000d0,uVar56);
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  uVar14 = *unaff_x20;
  lVar31 = lVar31 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar14 <= (int)uVar11;
  unaff_x28 = in_stack_00000170;
  uVar11 = uVar11 + 1;
  uVar13 = uVar27;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar28 = *in_stack_00000170;
  if (lVar28 != 0) {
    iVar16 = uVar27 + 1;
    plVar43 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar28 + 0x18) = uVar14;
    lVar31 = unaff_x19[0xd4];
    *(int *)(lVar28 + 0x2c) = iVar16;
    if ((int)uVar14 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar28 + 0x1c) = (int)lVar31;
    *(float *)(lVar28 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar28 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
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
                (*(undefined8 *)(lVar28 + 0x40),*unaff_x28,*(undefined8 *)(lVar28 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar16 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar16 != 0x19) {
      lVar28 = unaff_x19[0xe5];
      if (lVar28 == 0) goto LAB_035574b8;
      uVar14 = FUN_03911ee4(lVar28,0);
      FUN_03911f20(lVar28,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar28 = *(long *)(*unaff_x28 + 0x60), lVar28 == 0))
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
                            uVar19 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar14 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar28 = *unaff_x28;
                              if (lVar28 != 0) {
                                lVar44 = 0;
                                lVar31 = 0;
                                do {
                                  uVar21 = lVar31 + 1;
                                  if ((long)*(int *)(lVar28 + 0x34) <= (long)uVar21)
                                  goto LAB_03554724;
                                  lVar28 = *(long *)(lVar28 + 0x60);
                                  if (lVar28 == 0) break;
                                  if (*(int *)(*plVar43 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                  FUN_03596a20(lVar28 + lVar44 + 0x70,0);
                                  lVar28 = unaff_x19[0xe1];
                                  if (lVar28 == 0) break;
                                  if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                  uVar20 = *(undefined8 *)(lVar28 + lVar31 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036d35a8(uVar20,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar28 = *(long *)(*unaff_x28 + 0x60), lVar28 == 0))
                                      break;
                                      if (*(int *)(*plVar43 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                      FUN_03596b20(lVar28 + lVar44 + 0x70,1,0);
                                    }
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0)) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a460c(lVar28,*(undefined8 *)(lVar22 + lVar44 + 0x80),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0)) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a4810(lVar28,*(undefined8 *)(lVar22 + lVar44 + 0x98),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0)) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a48bc(lVar28,*(undefined8 *)(lVar22 + lVar44 + 0xa0),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = UnityEngine_Material__GetColorArray(lVar28,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar22 = *(long *)(*unaff_x28 + 0x60), lVar22 == 0)) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (lVar28 == 0) break;
                                    FUN_036a4e24(lVar28,*(undefined8 *)(lVar22 + lVar44 + 0xa8),0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = UnityEngine_Material__GetColorArray(lVar28,0),
                                       lVar28 == 0)) break;
                                    FUN_036aa280(lVar28,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_037b514c(lVar28,0);
                                    lVar22 = unaff_x19[0xe1];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar22 = *(long *)(lVar22 + lVar31 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (uVar20 = UnityEngine_Material__GetColorArray(lVar22,0),
                                       lVar28 == 0)) break;
                                    FUN_0390f3a4(lVar28,uVar20,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_037b514c(lVar28,0), lVar28 == 0)) break;
                                    FUN_0390eec8(uVar19,uVar55,uVar56,uVar57,lVar28,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_037b514c(lVar28,0), lVar28 == 0)) break;
                                    FUN_0390ed78(lVar28,uVar14 & 1,0);
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_035575f4;
                                    plVar42 = *(long **)(lVar28 + lVar31 * 8 + 0x28);
                                    uVar11 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar42 == (long *)0x0) break;
                                    (**(code **)(*plVar42 + 0x2c8))
                                              (plVar42,uVar11 & 1,*(undefined8 *)(*plVar42 + 0x2d0))
                                    ;
                                  }
                                  lVar28 = *unaff_x28;
                                  lVar31 = lVar31 + 1;
                                  lVar44 = lVar44 + 0x50;
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


