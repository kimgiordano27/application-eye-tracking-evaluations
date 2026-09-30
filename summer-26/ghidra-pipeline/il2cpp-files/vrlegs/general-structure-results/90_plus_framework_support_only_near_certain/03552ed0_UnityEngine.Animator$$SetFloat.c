/*
FUNCTION_NAME: UnityEngine.Animator$$SetFloat
ENTRY_POINT: 03552ed0
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


void UnityEngine_Animator__SetFloat(ulong param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  char in_NG;
  bool bVar10;
  bool bVar11;
  char in_OV;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int *piVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  code *pcVar29;
  uint uVar30;
  float *pfVar31;
  long lVar32;
  long lVar33;
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
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar41;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint uVar42;
  undefined8 *unaff_x29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  ulong uVar48;
  ulong uVar49;
  float fVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  float fVar54;
  float unaff_s8;
  float fVar55;
  float fVar56;
  float fVar57;
  float unaff_s9;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  ulong unaff_d13;
  undefined4 uVar64;
  float fVar65;
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
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
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
  
code_r0x03552ed0:
  fVar55 = (float)param_2;
  if (in_NG != in_OV) {
LAB_03557594:
    fVar56 = (float)param_1;
    fVar45 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar45 <= DAT_00d38b84) {
      fVar45 = DAT_00d38b84;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar55;
    fVar55 = fVar55 - fVar45;
LAB_03557524:
    fVar45 = fVar55 * 20.0 + 0.5;
    fVar55 = DAT_00d38e60;
    if (fVar45 != INFINITY) {
      fVar55 = (float)(int)fVar45 / 20.0;
    }
    if (fVar55 <= fVar56) {
      fVar55 = fVar56;
    }
LAB_03554658:
    *(float *)((long)unaff_x19 + 0x1e4) = fVar55;
    return;
  }
LAB_03552ed4:
  uVar12 = (uint)unaff_x26;
  iVar16 = (int)unaff_x24;
  switch((int)unaff_x19[0x5c]) {
  case 0:
  case 2:
  case 4:
switchD_03552ef4_caseD_0:
    param_2 = unaff_d13;
    FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                 *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,in_stack_00000140,
                 in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
    in_stack_00000070 = 1;
    bVar7 = false;
    in_stack_00000068._4_4_ = 1;
    uVar17 = in_stack_000017dc;
LAB_03550bd0:
    fVar55 = (float)unaff_d13;
    in_stack_000017a8 = in_stack_000017a8 + 1;
    lVar24 = unaff_x19[0x8f];
    if (lVar24 != 0) {
      if ((int)in_stack_000017a8 < (int)*(uint *)(lVar24 + 0x18)) {
        if (*(uint *)(lVar24 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
        in_stack_000017dc = *(uint *)(lVar24 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
        if (in_stack_000017dc == 0) goto LAB_0355459c;
        if (5 < in_stack_00000168._4_4_) {
          uVar18 = FUN_0276793c(&stack0x000017dc,0);
          uVar19 = FUN_0276793c(&stack0x000017a8,0);
          uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                                *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar19,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367ae18(uVar18,0);
          in_stack_000017c8 = CONCAT44(3,*unaff_x20);
        }
        if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_000017dc == 0x3c))
        goto code_r0x0355094c;
        if ((*in_stack_00000170 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
            unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            goto LAB_035509d4;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
LAB_0355459c:
      fVar55 = (float)param_2;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar55 = DAT_00d389f8,
         DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar56 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar55 < fVar56) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar45 = (*(float *)((long)unaff_x19 + 0x23c) - fVar55) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x48) = fVar55;
          fVar45 = (fVar55 + fVar45) * 20.0 + 0.5;
          fVar55 = DAT_00d38e60;
          if (fVar45 != INFINITY) {
            fVar55 = (float)(int)fVar45 / 20.0;
          }
          if (fVar56 <= fVar55) {
            fVar55 = fVar56;
          }
          goto LAB_03554658;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar8 = PTR_DAT_03cbdf88;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar18 = FUN_0276793c(_fStack0000000000000038,0);
        uVar19 = FUN_0277fa90(_fStack0000000000000040,0);
        uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar19,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367a6ec(uVar18,0);
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar17 == 3)))) {
        (**(code **)(*unaff_x19 + 0x918))();
        goto LAB_03554724;
      }
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar9;
      }
      plVar41 = (long *)OVRPlugin_Media_TypeInfo;
      lVar24 = **(long **)(lVar24 + 0xb8);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
      iVar16 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
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
      iVar13 = (int)unaff_x19[0x4e];
      in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      in_stack_000000e8 = *(ulong *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
      lVar24 = unaff_x19[0xe3];
      in_stack_000000b8 = (long *)in_stack_000000e8;
      fStack00000000000000c4 = in_stack_000000f8._4_4_;
      if (iVar13 < 0x401) {
        if (iVar13 == 0x100) {
          if (lVar24 == 0) goto LAB_035574b8;
          if (*(uint *)(lVar24 + 0x18) < 2) goto LAB_035575f4;
          uVar18 = *(undefined8 *)(lVar24 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            fVar55 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar55 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
          fVar55 = (0.0 - fVar55) - fStack0000000000000020;
        }
        else if (iVar13 == 0x200) {
          if (lVar24 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
          fStack00000000000000c4 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar24 = *(long *)(*in_stack_00000170 + 0x58), lVar24 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar55 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) +
                      *(float *)(lVar24 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000c4 = fStack000000000000002c + 0.0 + fStack00000000000000c4;
            fVar55 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_000017d8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar13 != 0x400) goto LAB_03554c4c;
          if (lVar24 == 0) goto LAB_035574b8;
          if (*(int *)(lVar24 + 0x18) == 0) goto LAB_035575f4;
          uVar18 = *(undefined8 *)(lVar24 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000170 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000170 + 0x58), lVar28 == 0)) goto LAB_035574b8;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
            in_stack_000017d8 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000c4 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
          fVar55 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
        }
LAB_03554c3c:
        in_stack_000000b8 =
             (long *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar55);
      }
      else if (iVar13 == 0x800) {
        if (lVar24 == 0) goto LAB_035574b8;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
        fVar55 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        in_stack_000000b8 =
             (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0);
        fStack00000000000000c4 = fVar55;
      }
      else {
        if (iVar13 == 0x1000) {
          if (lVar24 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
            uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
            fStack00000000000000c4 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
            fVar55 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_03554c3c;
          }
          goto LAB_035575f4;
        }
        if (iVar13 == 0x2000) {
          if (lVar24 == 0) goto LAB_035574b8;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_035575f4;
          fVar55 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          in_stack_000000b8 =
               (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar24 + 0x24) +
                                (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar55);
          fStack00000000000000c4 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        }
      }
LAB_03554c4c:
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      uVar18 = FUN_03912334(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar8);
      }
      uVar48 = FUN_036d35a8(uVar18,0,0);
      lVar24 = FUN_0357f060();
      if (lVar24 == 0) goto LAB_035574b8;
      FUN_036df824(lVar24,0);
      *(float *)(unaff_x19 + 0xe2) = fVar55;
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
      fVar56 = (float)FUN_03911954(unaff_x19[0xe5],0);
      uVar64 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      puVar8 = OVRPlugin_Mesh_TypeInfo;
      lVar24 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar8;
      }
      puVar25 = *(undefined4 **)(lVar24 + 0xb8);
      uVar49 = (ulong)(uint)puVar25[1];
      uVar51 = (ulong)(uint)puVar25[2];
      uVar53 = (ulong)(uint)puVar25[3];
      FUN_035683a4(*puVar25,uVar49,uVar51,uVar53,&stack0x000017b0,0x4000ffff,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar24 = *in_stack_00000170;
      if (lVar24 == 0) goto LAB_035574b8;
      uVar12 = *unaff_x20;
      if ((int)uVar12 < 1) {
        fStack00000000000000d4 = 0.0;
        iVar16 = 0;
        goto LAB_03556f00;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      fVar55 = ABS(fVar55);
      fVar45 = 1.0;
      if ((uVar48 & 1) == 0) {
        fVar45 = fVar55;
      }
      if (lVar24 == 0) goto LAB_035574b8;
      bVar11 = false;
      bVar10 = false;
      _fStack0000000000000128 = 0;
      bVar7 = false;
      fStack00000000000000d4 = 0.0;
      fStack0000000000000028 = 0.0;
      fStack0000000000000158 = 0.0;
      in_stack_00000068._4_4_ = 0;
      lVar28 = 0x2e0;
      fVar59 = 0.0;
      fVar46 = 0.0;
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
      uVar17 = 1;
      uVar52 = 0;
      goto LAB_03554e78;
    }
    goto LAB_035574b8;
  case 1:
    lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    lVar28 = *(long *)(lVar24 + 0xb8);
    lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = FUN_01a46ff8(lVar24);
    }
    piVar20 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                        *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80) +
                                        0xa0);
    if (*piVar20 == 0) {
      bVar7 = false;
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
    iVar13 = FUN_0358c15c();
    bVar7 = false;
    goto LAB_035529e8;
  case 3:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_000017a8 = FUN_0358c15c();
    bVar7 = false;
    goto UnityEngine_AnimationClip__get_hasMotionCurves;
  case 5:
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
    param_2 = unaff_d13;
    FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                 *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,in_stack_00000140,
                 in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
    *(undefined4 *)(unaff_x19 + 0x9b) = 0;
    *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
    *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
    goto LAB_03552f38;
  case 6:
    break;
  default:
    bVar7 = false;
    goto LAB_03552f50;
  }
  lVar24 = unaff_x19[0x5d];
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar48 = FUN_036cee6c(lVar24,0,0);
  if ((uVar48 & 1) != 0) {
    plVar41 = (long *)unaff_x19[0x5d];
    uVar18 = (**(code **)(*unaff_x19 + 0x518))();
    if (plVar41 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
    lVar24 = unaff_x19[0x5d];
    if (lVar24 == 0) goto LAB_035574b8;
    *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
    FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar41 = (long *)unaff_x19[0x5d];
    if (plVar41 == (long *)0x0) goto LAB_035574b8;
    (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
  bVar7 = false;
  goto LAB_03552b00;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar48 = FUN_03586568();
  if (((uVar48 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, uVar17 = in_stack_000017dc,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar32 = (long)(int)uVar12;
  cVar23 = *(char *)(lVar24 + lVar32 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar28 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar12) {
    in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar24 + lVar32 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      uVar12 = *unaff_x20;
      if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar24 + (long)(int)uVar12 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar12 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar35 = FUN_03568ac0(*unaff_x21,0), lVar35 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar35,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
      *(ulong *)(lVar24 + lVar32 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
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
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
    lVar24 = lVar24 + (long)(int)uVar12 * (long)iVar16;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined2 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *unaff_x20 = uVar12 + 1;
    uVar17 = in_stack_000017dc;
    goto LAB_03550bd0;
  }
  iVar13 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar13 == 0) {
    uVar12 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar48 & 1) != 0) {
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
        uVar48 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar48 & 1) != 0) {
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
      uVar48 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar48 & 1) != 0) {
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
    if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    uVar17 = in_stack_000017dc;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
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
    uVar17 = *unaff_x20;
    uVar12 = *(uint *)(lVar24 + 0x18);
    if (uVar12 <= uVar17) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar24 + (long)(int)uVar17 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar56 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar24 = unaff_x19[0x20];
    }
    else {
      lVar28 = unaff_x19[0x8f];
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar28 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar12 <= uVar17 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar56 = *(float *)(lVar24 + (long)(int)(uVar17 - 1) * (long)iVar16 + 0x60);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar24 = *unaff_x21;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    fVar46 = (float)FUN_03776960(lVar24 + 0x50,0);
    fVar45 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar45 = 1.0;
    }
    fVar60 = 0.0;
    fVar59 = 0.0;
    if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar59 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar60 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar24 = unaff_x19[0xc9];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
    fVar61 = *(float *)((long)unaff_x19 + 0x404);
    fVar62 = *(float *)(lVar24 + 0x2c);
    fVar55 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar65 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar44 = *(float *)((long)unaff_x19 + 0x404);
    fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar24 = unaff_x19[0x6d];
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar45 = ((fStack0000000000000158 * fVar56) / (float)iVar13) * fVar46 * fVar45;
    fVar55 = fVar45 * fVar61 * fVar62 * fVar55;
    *(float *)(lVar28 + 0x160) = fVar55;
    uVar12 = *(uint *)(unaff_x19 + 0x24);
    fVar50 = fVar45 * fVar65 * fVar44 * fVar50;
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
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar56 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar56 = fVar55;
    }
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar13 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar13 == 1) {
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
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar24 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar24 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar32 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar55 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar13 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar45 = (float)FUN_03776960(&stack0x00001720,0);
      fVar56 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar56 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar56 = (fVar55 / (float)iVar13) * fVar45 * fVar56;
      iVar13 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar55 = *(float *)(unaff_x19 + 0x3d);
      if (iVar13 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar60 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar60 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar24 + 0x20),0);
        fVar61 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        fVar65 = *(float *)(lVar24 + 0x2c);
        fVar62 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar59 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar44 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar57 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar50 = fVar56 * fVar44 * fVar57 * fVar50;
        fVar60 = (fVar55 / (float)iVar13) * fVar45 * fVar60;
        fVar55 = fVar60 * (fVar46 / fVar61) * fVar65 * fVar62;
        fVar60 = fVar60 / fVar55;
        fVar59 = fVar60 * fVar59;
        fVar56 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar60 = fVar60 * fVar56;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_035574b8;
        fVar60 = *(float *)(lVar24 + 0x2c);
        fVar46 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar46 = 1.0;
        }
        fVar61 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar59 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar62 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar65 = *(float *)((long)unaff_x19 + 0x404);
        fVar50 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar50 = fVar56 * fVar62 * fVar65 * fVar50;
        fVar55 = (fVar55 / (float)iVar13) * fVar45 * fVar46 * fVar60 * fVar61;
        fVar60 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar24);
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 1;
      *(float *)(lVar24 + 0x160) = fVar55;
      *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar24 = *in_stack_00000170;
      if ((lVar24 == 0) || (lVar32 = *(long *)(lVar24 + 0x38), lVar32 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
      goto LAB_035514b0;
    }
    lVar24 = *in_stack_00000170;
    fVar50 = 0.0;
    fVar56 = fVar50;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar56 = fVar55;
    }
    if (lVar24 == 0) goto LAB_035574b8;
    fVar59 = 0.0;
    fVar60 = 0.0;
  }
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
  uVar12 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  uVar19 = unaff_x29[1];
  uVar18 = *unaff_x29;
  lVar24 = lVar24 + (long)(int)uVar12 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar24 + 0x184) = uVar19;
  *(undefined8 *)(lVar24 + 0x17c) = uVar18;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar24,0);
  puVar8 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  unaff_x29[0x1df] = in_stack_00000c20;
  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,in_stack_00000c18);
  if ((int)in_stack_000017dc < 0x10000) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_026b63d8(in_stack_000017dc,0);
    unaff_w25 = uVar12 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000128 = (ulong)(uint)fVar59;
    fVar46 = 0.0;
    fVar45 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar17 = *unaff_x20;
    uVar12 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar17 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar17 + 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar17 + 1) * (long)iVar16 + 0x30);
      if ((((lVar24 == 0) || (*unaff_x21 == 0)) ||
          (lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar12 | *(int *)(lVar24 + 0x28) << 0x10;
      uVar48 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar64 = 0;
      if ((uVar48 & 1) == 0) {
        _fStack0000000000000128 = (ulong)(uint)fVar59;
        fVar46 = 0.0;
        fVar45 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar64 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar45 = *(float *)(in_stack_000016f8 + 0x14);
        fVar46 = *(float *)(in_stack_000016f8 + 0x18);
        _fStack0000000000000128 = CONCAT44(*(undefined4 *)(in_stack_000016f8 + 0x1c),fVar59);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar17 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000128 = (ulong)(uint)fVar59;
      fVar46 = 0.0;
      fVar45 = 0.0;
    }
    if (0 < (int)uVar17) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= uVar17 - 1) goto LAB_035575f4;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar17 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*unaff_x21 == 0)) ||
         ((lVar28 = *(long *)(*unaff_x21 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar24 + 0x28) | uVar12 << 0x10;
      uVar48 = FUN_0219f8b8(lVar28,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar48 & 1) != 0) {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        uVar47 = (undefined4)(_fStack0000000000000128 >> 0x20);
        fVar45 = (float)FUN_03571cb4(fVar45,fVar46,_fStack0000000000000128 >> 0x20,uVar64,
                                     *(undefined4 *)(in_stack_000016f8 + 0x28),
                                     *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                     *(undefined4 *)(in_stack_000016f8 + 0x30),
                                     *(undefined4 *)(in_stack_000016f8 + 0x34),0);
        _fStack0000000000000128 = CONCAT44(uVar47,fStack0000000000000128);
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar61 = *(float *)(unaff_x19 + 200);
    fVar59 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar61 = fVar61 - fVar56 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar61;
    if ((in_stack_000017dc == 0x200b) || (unaff_w25 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar61 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar59 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000090 = 0.0;
  if (fVar59 != 0.0) {
    fVar61 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar62 = (float)FUN_03776ca4(&stack0x00001790,0);
    in_stack_00000090 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar59 * 0.5 - fVar56 * (fVar61 * 0.5 + fVar62));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000090;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_036cee6c(lVar24,0,0);
    fVar61 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar48 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar61 = 0.0;
      if ((uVar48 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        fVar59 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar62 = *(float *)(*unaff_x21 + 0x1b0);
        fVar61 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar61 = fVar61 * fVar59 * fVar62 * 0.25;
        if (fVar59 < fStack000000000000015c + fVar61) {
          fStack000000000000015c = fVar59 - fVar61;
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
    uVar48 = FUN_036cee6c(lVar24,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar24 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar24 == 0) goto LAB_035574b8;
      uVar48 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar48 & 1) != 0) {
        lVar24 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_035574b8;
        uVar48 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar48 & 1) != 0) {
          lVar24 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar24 == 0) goto LAB_035574b8;
          fVar59 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar62 = *(float *)(*unaff_x21 + 0x1a8);
          fVar61 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar61 = fVar61 * fVar59 * fVar62 * 0.25;
          if (fVar59 < fStack000000000000015c + fVar61) {
            fStack000000000000015c = fVar59 - fVar61;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar61 = 0.0;
  }
FUN_03551b84:
  fVar59 = *(float *)(unaff_x19 + 200);
  fVar62 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar59 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar56 * (fVar45 + ((fVar62 - fStack000000000000015c) - fVar61));
  fVar45 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar65 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar50 + fVar56 * (fVar46 + fStack000000000000015c + fVar45)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar45 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar45 = fVar65 - fVar56 * (fStack000000000000015c + fStack000000000000015c + fVar45);
  fVar46 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar62 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar56 * (fVar61 + fVar61 +
                             fStack000000000000015c + fStack000000000000015c + fVar46);
  in_stack_000000e8 = (ulong)(uint)fVar61;
  fStack0000000000000104 = fVar59;
  fVar46 = fVar62;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar57 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar46 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar54 = fVar57 * fVar56 * (fVar61 + fStack000000000000015c + fVar46);
    fVar46 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar44 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar65 = fVar65 + 0.0;
    fVar45 = fVar45 + 0.0;
    fVar57 = fVar57 * fVar56 * (((fVar46 - fVar44) - fStack000000000000015c) - fVar61);
    fVar44 = fVar59 + fVar54;
    fVar46 = fVar62 + fVar57;
    fVar43 = (fVar54 - fVar57) * 0.5;
    fVar59 = (fVar59 + fVar57) - fVar43;
    fVar62 = (fVar62 + fVar54) - fVar43;
    fStack0000000000000104 = fVar44 - fVar43;
    fVar46 = fVar46 - fVar43;
  }
  _fStack0000000000000150 = (ulong)(uint)fVar56;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar43 = 0.0;
    fVar54 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar57 = fVar45;
    fVar44 = fVar65;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar58 = (fVar62 + fVar59) * 0.5;
    fVar63 = (fVar45 + fVar65) * 0.5;
    fVar65 = fVar65 - fVar63;
    fStack0000000000000100 = 0.0;
    fVar44 = fVar65;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar58,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar58 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar57 = fVar45 - fVar63;
    fStack0000000000000114 = 0.0;
    fVar45 = fVar57;
    fVar59 = (float)FUN_036bdd2c(fVar59 - fVar58,_fStack0000000000000078,0);
    fVar59 = fVar58 + fVar59;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar45 = fVar63 + fVar45;
    fVar54 = 0.0;
    fVar62 = (float)FUN_036bdd2c(fVar62 - fVar58,_fStack0000000000000078,0);
    fVar62 = fVar58 + fVar62;
    fVar65 = fVar63 + fVar65;
    fVar54 = fVar54 + 0.0;
    fVar43 = 0.0;
    fVar46 = (float)FUN_036bdd2c(fVar46 - fVar58,_fStack0000000000000078,0);
    fVar46 = fVar58 + fVar46;
    fVar43 = fVar43 + 0.0;
    fVar57 = fVar63 + fVar57;
    fVar44 = fVar63 + fVar44;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar24 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar56;
  if (lVar24 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fVar59;
  *(float *)(lVar24 + 0x120) = fVar45;
  *(float *)(lVar24 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x114) = fVar44;
  *(float *)(lVar24 + 0x110) = fStack0000000000000104;
  *(float *)(lVar24 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = fVar62;
  *(float *)(lVar24 + 300) = fVar65;
  *(float *)(lVar24 + 0x130) = fVar54;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x134) = fVar46;
  *(float *)(lVar24 + 0x138) = fVar57;
  *(float *)(lVar24 + 0x13c) = fVar43;
  if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
  goto LAB_035574b8;
  uVar12 = *unaff_x20;
  unaff_x26 = (long)(int)uVar12;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar28 = lVar24 + unaff_x26 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar65 = *(float *)(unaff_x19 + 0x9b);
  param_2 = (ulong)(uint)fVar65;
  fVar46 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar62 - fVar59) / (fVar44 - fVar45);
  *(float *)(lVar28 + 0x14c) = (fVar50 - fVar65) + fVar46;
  fVar45 = fStack0000000000000128 * fVar56;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar45 = fVar45 / fStack0000000000000158;
    fVar60 = (fVar60 * fVar56) / fStack0000000000000158;
  }
  else {
    fVar60 = fVar60 * fVar56;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w25 == 0) || (uVar12 == unaff_w22)) {
    fVar60 = fVar46 + fVar60;
    fVar45 = fVar46 + fVar45;
    fVar62 = fVar60;
    fVar59 = fVar45;
    if (fVar46 != 0.0) {
      fVar59 = (fVar45 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      fVar62 = (fVar60 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar59 <= fVar45) {
        fVar59 = fVar45;
      }
      if (fVar60 <= fVar62) {
        fVar62 = fVar60;
      }
    }
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    fVar46 = fVar59;
    if (fVar59 <= *(float *)(unaff_x19 + 0x99)) {
      fVar46 = *(float *)(unaff_x19 + 0x99);
    }
    fVar50 = fVar62;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar62) {
      fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar50;
    *(float *)(unaff_x19 + 0x99) = fVar46;
    *(float *)(lVar24 + 0x154) = fVar59;
    *(float *)(lVar24 + 0x158) = fVar62;
    *(float *)(lVar24 + 0x148) = fVar45 - fVar65;
    *(float *)(unaff_x19 + 0x98) = fVar45 - fVar65;
    *(float *)(lVar24 + 0x150) = fVar60 - fVar65;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar60 - fVar65;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar46;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar46 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar59 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar56 * fVar59) / fStack0000000000000158;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar46 <= fStack0000000000000158) {
        fVar46 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar46;
    }
    if ((float)param_2 == 0.0) {
      fVar46 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar45) {
        fVar46 = fVar45;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar46;
    }
  }
  else {
    fVar45 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar45;
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = fVar45 - fVar65;
    *(float *)(lVar24 + 0x148) = fVar45;
    *(float *)(lVar24 + 0x158) = fVar46;
    *(float *)(unaff_x19 + 0x98) = fVar45;
    fVar46 = fVar46 - fVar65;
    *(float *)(lVar24 + 0x150) = fVar46;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
  }
  lVar24 = *in_stack_00000170;
  if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  unaff_w27 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= unaff_w27) goto LAB_035575f4;
  lVar28 = lVar28 + (long)(int)unaff_w27 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  if ((in_stack_000017dc == 9) ||
     (((((unaff_w25 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((bool)(in_stack_000017dc == 0xad & (bVar7 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x644) == 1)
       ))))) {
    *(undefined1 *)(lVar28 + 0x194) = 1;
    pfVar27 = _fStack00000000000000a0;
    pfVar31 = _fStack00000000000000a8;
    if (unaff_w23 != 0) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar24 + 0x60);
      pfVar27 = (float *)(lVar24 + 100);
    }
    unaff_s8 = *pfVar31;
    unaff_s9 = *pfVar27;
    fVar45 = *(float *)(unaff_x19 + 0x6c);
    fVar46 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - unaff_s8) - unaff_s9;
    bVar10 = true;
    if ((fVar45 <= in_stack_000000f8._4_4_) && (bVar10 = false, !NAN(fVar45))) {
      bVar10 = fVar45 == -1.0;
    }
    if (!bVar10) {
      in_stack_000000f8._4_4_ = fVar45;
    }
    fVar45 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar45 = (float)FUN_03776cb4(&stack0x00001790,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      fVar55 = fVar56;
    }
    fVar62 = (float)param_2;
    fVar56 = 0.0;
    if ((0.0 < fVar62) && (fVar56 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar56 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    unaff_w27 = *unaff_x20;
    fVar56 = (*(float *)(unaff_x19 + 0x97) - (fVar60 - fVar62)) + fVar56;
    uVar17 = in_stack_000017dc;
    if (fStack00000000000000c4 < fVar56) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar18 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar65 = *(float *)(unaff_x19 + 0x59);
        if (((fVar65 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar62)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar55 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar56) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar55 <= fVar65) {
            fVar55 = fVar65;
          }
          goto LAB_03554b48;
        }
        fVar62 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar56 = *(float *)(unaff_x19 + 0x4a);
        param_2 = (ulong)(uint)fVar56;
        if ((fVar56 < fVar62) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar55 = (fVar62 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar55 <= DAT_00d38b84) {
            fVar55 = DAT_00d38b84;
          }
          fVar45 = (fVar62 - fVar55) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar62;
          fVar55 = DAT_00d38e60;
          if (fVar45 != INFINITY) {
            fVar55 = (float)(int)fVar45 / 20.0;
          }
          if (fVar55 <= fVar56) {
            fVar55 = fVar56;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar20 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar20 == 0) goto LAB_03554580;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00001380,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      default:
        goto UnityEngine_AnimationClip__set_wrapMode;
      case 3:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
LAB_03552550:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        break;
      case 5:
        if ((unaff_w27 == 0) || ((int)in_stack_000017a8 < 0)) {
          in_stack_000017a8 = 0xffffffff;
          *unaff_x20 = 0;
          in_stack_000017c8 = uVar18;
UnityEngine_AnimatorStateInfo__get_fullPathHash:
          unaff_x29 = (undefined8 *)&stack0x000008a0;
          uVar17 = in_stack_000017dc;
          goto LAB_03550bd0;
        }
        fVar55 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        if (fVar55 - fVar60 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_2 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar24 = NEON_rev64(param_2,4);
          unaff_x19[0x99] = lVar24;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_03550bd0;
        }
        break;
      case 6:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar48 = FUN_036cee6c(lVar24,0,0);
        if ((uVar48 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
UnityEngine_AnimationClip__get_hasMotionCurves:
      in_stack_000017c8 = CONCAT44(3,unaff_w27);
      uVar17 = in_stack_000017dc;
      goto LAB_03550bd0;
    }
UnityEngine_AnimationClip__set_wrapMode:
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar45 = ABS(fVar46) + fVar45 * (1.0 - fVar59) * fVar55;
    fVar56 = 1.0;
    if (unaff_w28 != 0) {
      fVar56 = DAT_00d38acc;
    }
    param_1 = (ulong)(uint)(fVar56 * in_stack_000000f8._4_4_);
    if (fVar45 <= fVar56 * in_stack_000000f8._4_4_) {
LAB_03552f50:
      param_2 = in_stack_000000e8 & 0xffffffff;
    }
    else {
      param_2 = (ulong)(uint)fVar61;
      if (((char)unaff_x19[0x5b] != '\0') && (unaff_w27 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar24 = *in_stack_00000170;
          if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar55 = *(float *)(unaff_x19 + 0x9b);
          fVar46 = 0.0;
          if ((0.0 < fVar55) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar46 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar46 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar24 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar24 == 0) goto LAB_035574b8;
          fVar55 = *(float *)(unaff_x19 + 0x9b);
          fVar46 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        uVar12 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar24 + 0x18) <= uVar12) ||
           (uVar52 = uVar12 - 1, *(uint *)(lVar24 + 0x18) <= uVar52)) goto LAB_035575f4;
        param_2 = (ulong)(uint)(fVar46 + *(float *)(unaff_x19 + 0x97));
        fVar46 = (fVar46 + *(float *)(unaff_x19 + 0x97) + fVar55) -
                 *(float *)(lVar24 + (long)(int)uVar12 * unaff_x24 + 0x158);
        if ((bVar7 || *(short *)(lVar24 + (long)(int)uVar52 * (long)iVar16 + 0x20) != 0xad) ||
           ((fStack00000000000000c4 <= fVar46 && ((int)unaff_x19[0x5c] != 0)))) {
          if (*(short *)(lVar24 + (long)(int)uVar12 * unaff_x24 + 0x20) == 0xad) {
            bVar7 = true;
          }
          else {
            if ((in_stack_00000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
              fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar59 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_03557558;
              fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
              param_2 = (ulong)(uint)fVar55;
              param_1 = (ulong)(uint)*(float *)(unaff_x19 + 0x4a);
              if ((*(float *)(unaff_x19 + 0x4a) < fVar55) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) goto LAB_03557594;
            }
            lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar24 = *(long *)puVar8;
            }
            iVar13 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
            if (((iVar13 == iStack0000000000000034) || (iVar13 == -1)) ||
               (((in_stack_00000070 ^ 1) & 1) != 0)) goto LAB_03552e3c;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_000017a8 = FUN_0358c15c();
            if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
            goto LAB_035574b8;
            uVar12 = *unaff_x20 - 1;
            if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
            iStack0000000000000034 = iVar13;
            if (*(short *)(lVar24 + (long)(int)uVar12 * (long)iVar16 + 0x20) != 0xad)
            goto LAB_03552e3c;
            bVar7 = false;
            in_stack_000017c8 = CONCAT44(0x2d,uVar12);
            *unaff_x20 = uVar12;
            in_stack_000017a8 = in_stack_000017a8 - 1;
          }
        }
        else {
          bVar7 = false;
          in_stack_000017c8 = CONCAT44(0x2d,uVar52);
          *unaff_x20 = uVar52;
          in_stack_000017a8 = in_stack_000017a8 - 1;
        }
        goto LAB_03550bd0;
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar59 < fVar55) {
          fVar46 = fVar45 / (1.0 - fVar59);
          if (fVar59 <= 0.0) {
            fVar46 = fVar45;
          }
          fVar59 = fVar59 + (fVar45 - fVar56 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
          goto LAB_035574e8;
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar56 = *(float *)(unaff_x19 + 0x4a);
        param_1 = (ulong)(uint)fVar56;
        if (fVar56 < fVar55) {
          fVar45 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar45 <= DAT_00d38b84) {
            fVar45 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar55;
          fVar55 = fVar55 - fVar45;
          goto LAB_03557524;
        }
      }
      iVar13 = (int)unaff_x19[0x5c];
      if (iVar13 == 1) {
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01a46ff8(lVar24);
        }
        piVar20 = (int *)thunk_FUN_01a59484(lVar28 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar20 == 0) {
LAB_03554580:
          in_stack_000017c8 = DAT_00d37868;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_000017a8 = 0xffffffff;
          uVar17 = in_stack_000017dc;
          goto LAB_03550bd0;
        }
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        FUN_0209b778(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
LAB_035529dc:
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        iVar13 = FUN_0358c15c();
LAB_035529e8:
        iVar14 = *(int *)((long)unaff_x19 + 0x494) + -1;
        *(int *)((long)unaff_x19 + 0x494) = iVar14;
        in_stack_000017c8 = CONCAT44(0x2026,iVar14);
        in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
        in_stack_000017a8 = iVar13 - 1;
        uVar17 = in_stack_000017dc;
        goto LAB_03550bd0;
      }
      if (iVar13 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar48 = FUN_036cee6c(lVar24,0,0);
        if ((uVar48 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x7a8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7b0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
LAB_03552b00:
        in_stack_000017c8 = CONCAT44(3,*unaff_x20);
        uVar17 = in_stack_000017dc;
        goto LAB_03550bd0;
      }
      if (iVar13 == 3) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        goto LAB_03552550;
      }
    }
    if (in_stack_000017dc == 0xad) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017dc == 9) {
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
        uVar17 = *unaff_x20;
        if (*(uint *)(lVar28 + 0x18) <= uVar17) goto LAB_035575f4;
        *(undefined1 *)(lVar28 + (long)(int)uVar17 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
        lVar28 = *(long *)(lVar24 + 0x50);
        if (lVar28 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(param_1,param_2);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      }
      uVar17 = *unaff_x20;
      if ((in_stack_00000068._4_4_ & 1) != 0) {
        *(uint *)(in_stack_00000080 + 0x1f0) = uVar17;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar24 + 0x60) = unaff_s8;
      *(float *)(lVar24 + 100) = unaff_s9;
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar56 = (float)param_2;
      fVar55 = 0.0;
      if ((0.0 < fVar56) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar55 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_2 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar56)) + fVar55)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar48 = FUN_036cee6c(lVar24,0,0);
        if ((uVar48 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x530));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_035574b8;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
        lVar24 = *in_stack_00000170;
        if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar48 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
  }
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar55 = *(float *)(unaff_x19 + 0x3d);
    iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar45 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar24 = unaff_x19[0xca];
    fVar56 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar56 = 1.0;
    }
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
    fVar59 = *(float *)((long)unaff_x19 + 0x404);
    fVar61 = *(float *)(lVar24 + 0x2c);
    fVar46 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    fVar60 = *_fStack00000000000000a8;
    fVar46 = fVar59 * (fVar55 / (float)iVar13) * fVar45 * fVar56 * fVar61 * fVar46;
    fVar55 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x38), lVar24 == 0))
      goto LAB_035574b8;
      uVar17 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar56 = *(float *)(lVar24 + (long)(int)uVar17 * (long)iVar16 + 0x60);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar59 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar24 = unaff_x19[0xca];
      fVar45 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar45 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_035574b8;
      fVar61 = *(float *)((long)unaff_x19 + 0x404);
      fVar62 = *(float *)(lVar24 + 0x2c);
      fVar46 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x50), lVar24 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar60 = *(float *)(lVar24 + 0x60);
      fVar55 = *(float *)(lVar24 + 100);
      fVar46 = fVar61 * (fVar56 / (float)iVar13) * fVar59 * fVar45 * fVar62 * fVar46;
    }
    fVar59 = *(float *)(unaff_x19 + 0x9b);
    fVar56 = 0.0;
    fVar45 = 0.0;
    if ((0.0 < fVar59) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar62 = *(float *)(unaff_x19 + 0x97);
    fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar61 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar24,0);
      fVar56 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar50 = *(float *)(unaff_x19 + 0x6c);
    fVar55 = (fStack000000000000009c - fVar60) - fVar55;
    bVar10 = true;
    if ((fVar50 <= fVar55) && (bVar10 = false, !NAN(fVar50))) {
      bVar10 = fVar50 == -1.0;
    }
    if (!bVar10) {
      fVar55 = fVar50;
    }
    fVar60 = 1.0;
    if (unaff_w28 != 0) {
      fVar60 = DAT_00d38acc;
    }
    if (((fVar62 - (fVar65 - fVar59)) + fVar45 < fStack00000000000000c4) &&
       (ABS(fVar61) + fVar46 * fVar56 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar60 * fVar55)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar24 + 0x788),0x378);
      FUN_0209b210(lVar24 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar24 = *in_stack_00000170;
  if (lVar24 == 0) goto LAB_035574b8;
  lVar28 = *(long *)(lVar24 + 0x38);
  unaff_d13 = _fStack0000000000000150 & 0xffffffff;
  if (lVar28 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar17 = *(uint *)(unaff_x19 + 0x95);
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar28 + 100) = uVar17;
  *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_000017dc || ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
    *(int *)(lVar24 + (long)(int)uVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
    if (*(int *)(lVar24 + (long)(int)uVar17 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar55 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar45 = *(float *)(unaff_x19 + 200);
    fVar56 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar55 = fStack0000000000000150 * fVar55 * fVar56;
    fVar56 = fVar55 * (float)(int)(fVar45 / fVar55);
    param_2 = (ulong)(uint)fVar56;
    if (fVar56 <= fVar45) {
      fVar56 = fVar45 + fVar55;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar56;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar45 = 1.0;
      }
      else {
        fVar45 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
      }
      fVar56 = *(float *)(unaff_x19 + 200);
      fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar55 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar56 = fVar56 + fVar55 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fStack0000000000000150 * (fStack000000000000012c + fVar45 * fVar46)
                                 + fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar56;
      goto joined_r0x035535c0;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar56 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fStack0000000000000150 * fStack000000000000012c +
             fStack00000000000000d4 *
             (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
    param_2 = (ulong)(uint)fVar56;
    fVar56 = *(float *)(unaff_x19 + 200) - fVar56;
    *(float *)(unaff_x19 + 200) = fVar56;
    if ((in_stack_000017dc == 0x200b) || (unaff_w25 != 0)) {
      fVar55 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar55;
      fVar56 = fVar56 - fVar55;
      goto LAB_03553678;
    }
  }
  else {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar55 = *(float *)(unaff_x19 + 200);
    fVar56 = fVar55 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000090) +
                      fStack00000000000000d4 * (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 200) = fVar56;
joined_r0x035535c0:
    if ((in_stack_000017dc == 0x200b) || (param_2 = (ulong)(uint)fVar55, unaff_w25 != 0)) {
      fVar55 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar55;
      fVar56 = fVar56 + fVar55;
      goto LAB_03553678;
    }
  }
  lVar24 = *in_stack_00000170;
  if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar52 = *unaff_x20;
  uVar30 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar30 <= uVar52) goto LAB_035575f4;
  *(float *)(lVar28 + (long)(int)uVar52 * unaff_x24 + 0x144) = fVar56;
  uVar42 = in_stack_000017dc;
  uVar17 = in_stack_000017dc;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) || ((float)uVar52 == in_stack_00000088._4_4_)
       ) goto LAB_0355371c;
  }
  else {
    if (1 < in_stack_000017dc - 0x2028) {
      if (in_stack_000017dc != 0xd) goto LAB_03553700;
      param_2 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar52 != in_stack_00000088._4_4_) goto LAB_03553c8c;
    }
LAB_0355371c:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar55 = *(float *)(unaff_x19 + 0x99);
      fVar56 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar55 = fVar55 - fVar56;
      if (((fStack000000000000005c < ABS(fVar55)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_0358c860(fVar55);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar55;
        *(float *)(unaff_x19 + 0x9b) = fVar55 + *(float *)(unaff_x19 + 0x9b);
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar28 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          FUN_0209b778(lVar28 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo
                      );
          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000008a0,0x378);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(long *)(lVar24 + 0xb8) + 0x818,0);
          lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
          *(float *)(lVar24 + 0x7bc) = fVar55 + *(float *)(lVar24 + 0x7bc);
          *(float *)(lVar24 + 0x800) = fVar55 + *(float *)(lVar24 + 0x800);
          memcpy(&stack0x000001b0,(void *)(lVar24 + 0x788),0x378);
          FUN_0209b210(lVar24 + 0x11f0,&stack0x000001b0,
                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
        }
      }
    }
    fVar45 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar56 = *(float *)((long)unaff_x19 + 0x4cc) - fVar45;
    fVar55 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar56 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar55 = fVar56;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar55;
    fVar46 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_000017d4 == '\0') {
      in_stack_000017d8 = fVar55;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_000017d4 = '\x01';
    }
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    uVar52 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar28 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar32 = unaff_x19[0x93];
    lVar35 = lVar28 + (long)(int)uVar52 * 0x5c;
    *(int *)(lVar35 + 0x34) = (int)lVar32;
    uVar30 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar32 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
    *(uint *)(lVar35 + 0x38) = uVar30;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar35 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar13 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar13;
    *(int *)(lVar35 + 0x40) = iVar13;
    *(int *)(lVar35 + 0x24) = (*(int *)(lVar35 + 0x3c) - *(int *)(lVar35 + 0x34)) + 1;
    *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= uVar30) goto LAB_035575f4;
    uVar64 = *(undefined4 *)(lVar24 + (long)(int)uVar30 * (long)iVar16 + 0x11c);
    lVar28 = lVar28 + (long)(int)uVar52 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar56;
    *(undefined4 *)(lVar28 + 0x6c) = uVar64;
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    fVar46 = fVar46 - fVar45;
    param_2 = (ulong)(uint)fVar46;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) =
         *(undefined4 *)(lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar28 + 0x78) = fVar46;
    lVar24 = *in_stack_00000170;
    if ((lVar24 == 0) || (lVar32 = *(long *)(lVar24 + 0x50), lVar32 == 0)) goto LAB_035574b8;
    lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
    lVar28 = lVar32 + lVar35 * 0x5c;
    *(float *)(lVar28 + 0x44) =
         *(float *)(lVar28 + 0x74) - fStack0000000000000150 * fStack000000000000015c;
    *(float *)(lVar28 + 0x5c) = in_stack_000000f8._4_4_;
    if (*(int *)(lVar28 + 0x24) == 1) {
      *(int *)(lVar32 + lVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*unaff_x21 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar30 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
    if ((*(char *)(lVar28 + lVar36 * unaff_x24 + 0x194) == '\0') &&
       (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar30 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_035575f4;
    lVar32 = lVar32 + lVar35 * 0x5c;
    fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fStack00000000000000d4 *
              (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar55 = -fVar45;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar55 = fVar45;
    }
    *(float *)(lVar32 + 0x58) = *(float *)(lVar28 + lVar36 * unaff_x24 + 0x144) + fVar55;
    *(float *)(lVar32 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar32 + 0x54) = fVar56;
    *(float *)(lVar32 + 0x48) = in_stack_00000060 + (fVar46 - fVar56);
    *(float *)(lVar32 + 0x4c) = fVar46;
    if ((int)in_stack_000017dc < 0x2d) {
      if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        lVar24 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar13 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar13;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x50) == 0)) goto LAB_035574b8;
        if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar13) {
          FUN_0358ca18();
          lVar24 = unaff_x19[0x6d];
          if (lVar24 == 0) goto LAB_035574b8;
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_035575f4;
        fVar55 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          if ((in_stack_000017dc == 0x2029) || (fVar56 = 0.0, in_stack_000017dc == 10)) {
            fVar56 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar22 = 0;
          fVar56 = fVar55 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar56) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_000017dc == 0x2029) || (fVar56 = 0.0, in_stack_000017dc == 10)) {
            fVar56 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar22 = 1;
          fVar56 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar56);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar56;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
        puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar24 = *(long *)puVar8;
        }
        uVar18 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar55;
        param_2 = NEON_rev64(uVar18,4);
        unaff_x19[0x99] = param_2;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_0358c4f0();
        FUN_0358c4f0();
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068._4_4_ = 1;
        in_stack_00000070 = 1;
        goto LAB_03550bd0;
      }
      if (in_stack_000017dc == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
        in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar42 = 3;
      }
    }
    else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d)) goto LAB_03553b60;
  }
LAB_03553c8c:
  uVar52 = *unaff_x20;
  if (uVar30 <= uVar52) goto LAB_035575f4;
  if (*(char *)(lVar28 + (long)(int)uVar52 * unaff_x24 + 0x194) != '\0') {
    lVar28 = lVar28 + (long)(int)uVar52 * unaff_x24;
    uVar49 = *(ulong *)(lVar28 + 0x11c);
    uVar48 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar48 ^ (uVar48 ^ uVar49) &
                  ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar49 >> 0x20)),
                            -(uint)((float)uVar48 < (float)uVar49));
    uVar48 = *(ulong *)(in_stack_00000080 + 0x238);
    param_2 = *(ulong *)(lVar28 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar48 ^ (uVar48 ^ param_2) &
                  ~CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar48 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar48));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(lVar24 + 0x58);
    if (lVar28 == 0) goto LAB_035574b8;
    iVar13 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar28 + 0x18) < iVar13) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar24 + 0x58),iVar13,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar24 = *in_stack_00000170;
      if (lVar24 == 0) goto LAB_035574b8;
    }
    lVar28 = *(long *)(lVar24 + 0x58);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar30 = *(uint *)(unaff_x19 + 0x96);
    lVar32 = (long)(int)uVar30;
    uVar52 = *(uint *)(lVar28 + 0x18);
    if (uVar52 <= uVar30) goto LAB_035575f4;
    lVar35 = lVar28 + lVar32 * 0x14;
    fVar56 = *(float *)(lVar35 + 0x30);
    param_2 = (ulong)(uint)fVar56;
    *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar55 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar56 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar55 = fVar56;
    }
    *(float *)(lVar35 + 0x30) = fVar55;
    uVar42 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar42 == 0 && uVar30 == 0) {
      *(uint *)(lVar28 + (ulong)uVar30 * 0x14 + 0x20) = uVar42;
    }
    else {
      uVar5 = uVar42 - 1;
      if (0 < (int)uVar42) {
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_035575f4;
        if (uVar30 != *(uint *)(lVar24 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar52 <= uVar30 - 1) goto LAB_035575f4;
          *(uint *)(lVar28 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar5;
          *(uint *)(lVar28 + 0x20 + lVar32 * 0x14) = uVar42;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar42 == in_stack_00000088._4_4_) {
        *(float *)(lVar28 + lVar32 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((unaff_w25 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((in_stack_00000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
         (0x1d < in_stack_000017dc - 0xa961)) || (uVar48 = FUN_03597a54(0), (uVar48 & 1) != 0)) &&
       ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
         (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
    goto LAB_03553f78;
    lVar24 = FUN_035978e8(0);
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_035574b8;
    uVar52 = FUN_0219c130(*(long *)(lVar24 + 0x10),&stack0x000008a0,
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
      if (uVar12 != unaff_w22 || ((in_stack_00000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (unaff_w25 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar24 = FUN_035978e8(0);
    if (((lVar24 == 0) || (*in_stack_00000170 == 0)) ||
       (lVar28 = *(long *)(*in_stack_00000170 + 0x38), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar24 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar16 + 0x20);
    uVar48 = FUN_0219c130(*(long *)(lVar24 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar52 & 1) != 0) goto LAB_035541dc;
    if ((uVar48 & 1) == 0) goto LAB_03554270;
    if ((in_stack_00000070 & 1) == 0) goto LAB_035542a8;
    if (unaff_w25 != 0) {
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
    if (unaff_w25 == 0) {
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
  goto LAB_03550bd0;
LAB_03552e3c:
  param_1 = (ulong)(uint)fStack00000000000000c4;
  if (fStack00000000000000c4 < fVar46) goto code_r0x03552e48;
  goto switchD_03552ef4_caseD_0;
code_r0x03552e48:
  if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
    *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
  }
  if ((char)unaff_x19[0x47] == '\0') goto LAB_03552ed4;
  fVar59 = *(float *)(unaff_x19 + 0x59);
  if ((fVar59 < *(float *)((long)unaff_x19 + 700)) &&
     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
    fVar55 = *(float *)((long)unaff_x19 + 700) +
             ((in_stack_00000018._4_4_ - fVar46) / (float)((int)unaff_x19[0x95] + 1)) /
             fStack0000000000000058;
    if (fVar55 <= fVar59) {
      fVar55 = fVar59;
    }
LAB_03554b48:
    *(float *)((long)unaff_x19 + 700) = fVar55;
    return;
  }
  fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
  fVar55 = *(float *)(unaff_x19 + 0x5a) / 100.0;
  if ((fVar59 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_03557558:
    fVar46 = fVar45;
    if (0.0 < fVar59) {
      fVar46 = fVar45 / (1.0 - fVar59);
    }
    fVar59 = fVar59 + (fVar45 - fVar56 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar46;
LAB_035574e8:
    if (fVar55 <= fVar59) {
      fVar59 = fVar55;
    }
    *(float *)((long)unaff_x19 + 0x2d4) = fVar59;
    return;
  }
  param_2 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x1e4);
  param_1 = (ulong)(uint)*(float *)(unaff_x19 + 0x4a);
  if (*(float *)(unaff_x19 + 0x4a) < *(float *)((long)unaff_x19 + 0x1e4)) goto code_r0x03552ec4;
  goto LAB_03552ed4;
code_r0x03552ec4:
  in_OV = SBORROW4(*(int *)((long)unaff_x19 + 0x244),(int)unaff_x19[0x49]);
  in_NG = *(int *)((long)unaff_x19 + 0x244) - (int)unaff_x19[0x49] < 0;
  goto code_r0x03552ed0;
LAB_03554e78:
  uVar12 = uVar17 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x50), lVar32 == 0))
  goto LAB_035574b8;
  lVar36 = (long)(int)uVar12;
  lVar35 = lVar24 + lVar36 * 0x178;
  uVar30 = *(uint *)(lVar35 + 100);
  if (*(uint *)(lVar32 + 0x18) <= uVar30) goto LAB_035575f4;
  lVar39 = (long)(int)uVar30;
  lVar32 = lVar32 + lVar39 * 0x5c;
  lVar33 = *(long *)(lVar35 + 0x38);
  uVar3 = *(ushort *)(lVar35 + 0x20);
  uVar5 = *(uint *)(lVar32 + 0x3c);
  uVar42 = *(uint *)(lVar32 + 0x68);
  iVar2 = *(int *)(lVar32 + 0x20);
  iVar14 = *(int *)(lVar32 + 0x28);
  iVar15 = *(int *)(lVar32 + 0x2c);
  uVar6 = *(uint *)(lVar32 + 0x40);
  lVar35 = (long)(int)uVar6;
  fVar62 = *(float *)(lVar32 + 0x4c);
  fVar50 = *(float *)(lVar32 + 0x54);
  fVar60 = *(float *)(lVar32 + 0x58);
  fVar43 = *(float *)(lVar32 + 0x5c);
  fVar44 = *(float *)(lVar32 + 0x60);
  fVar57 = *(float *)(lVar32 + 0x6c);
  fVar54 = *(float *)(lVar32 + 0x70);
  fVar61 = *(float *)(lVar32 + 0x74);
  fVar65 = *(float *)(lVar32 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar44 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar60;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar44 + fVar43 * 0.5) - fVar60 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar43 + fVar44) - fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar43 + fVar44;
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
      if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_035575f4;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b8cc4(uVar4,0);
      if ((uVar48 & 1) == 0) {
        bVar1 = (int)uVar30 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 <= fVar43) && (!bVar1 && uVar42 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar44;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar43 + fVar44;
        }
        goto LAB_03555088;
      }
      if (((uVar17 == 1) || (uVar30 != uVar52)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar44;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar43 + fVar44;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        in_stack_000000e8 = 0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1e];
        fVar44 = -fVar60;
        if (cVar23 != '\0') {
          fVar44 = fVar60;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_035575f4;
        iVar15 = (int)*(char *)(lVar24 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar60 = 1.0;
          iVar15 = 1;
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
            uVar48 = FUN_026b97f8(uVar38,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar48 & 1) != 0) goto LAB_03556e74;
          }
          iVar15 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar14;
        }
        fVar60 = ((fVar43 + fVar44) * fVar60) / (float)iVar15;
        if (cVar23 == '\0') {
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
  else if (uVar42 == 0x20) {
    fVar60 = fVar57 + fVar61;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar42 <= uVar12) goto LAB_035575f4;
  lVar32 = lVar24 + lVar36 * 0x178;
  fVar43 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar60 = SUB84(in_stack_000000b8,0) + (float)in_stack_000000e8;
  fVar44 = (float)((ulong)in_stack_000000b8 >> 0x20) + (float)(in_stack_000000e8 >> 0x20);
  if (*(char *)(lVar32 + 0x194) == '\0') goto LAB_03555938;
  iVar14 = *(int *)(lVar24 + lVar36 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0355574c;
  fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar30,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar24 + lVar36 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar59 = 1.0;
    break;
  case 1:
    fVar65 = *(float *)(lVar24 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar24 + lVar36 * 0x178;
      fVar61 = (in_stack_000000f8._4_4_ + fVar65) - *(float *)(in_stack_00000080 + 0x230);
      fVar65 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar26 = lVar24 + lVar36 * 0x178;
    fVar61 = fVar61 - fVar57;
    *(float *)(lVar26 + 0x84) = fVar59 + (fVar65 - fVar57) / fVar61;
    *(float *)(lVar26 + 0xac) = fVar59 + (*(float *)(lVar26 + 0x98) - fVar57) / fVar61;
    *(float *)(lVar26 + 0xd4) = fVar59 + (*(float *)(lVar26 + 0xc0) - fVar57) / fVar61;
    fVar59 = fVar59 + (*(float *)(lVar26 + 0xe8) - fVar57) / fVar61;
    break;
  case 2:
    lVar26 = lVar24 + lVar36 * 0x178;
    fVar65 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar61 = (in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar26 + 0x84) = fVar59 + fVar61 / fVar65;
    *(float *)(lVar26 + 0xac) =
         fVar59 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar59 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar59 = fVar59 + ((in_stack_000000f8._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar26 = lVar24 + lVar36 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar24 + lVar36 * 0x178;
      fVar65 = fVar65 - fVar54;
      fVar61 = fVar59 + (*(float *)(lVar26 + 0x74) - fVar54) / fVar65;
      fVar65 = fVar59 + (*(float *)(lVar26 + 0x9c) - fVar54) / fVar65;
      *(float *)(lVar26 + 0x88) = fVar61;
      *(float *)(lVar26 + 0xb0) = fVar65;
      *(float *)(lVar26 + 0xd8) = fVar61;
      *(float *)(lVar26 + 0x100) = fVar65;
      break;
    case 2:
      lVar26 = lVar24 + lVar36 * 0x178;
      fVar61 = fVar59 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar61;
      fVar65 = *(float *)(unaff_x19 + 0x9c);
      fVar57 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar61;
      fVar61 = fVar59 + (*(float *)(lVar26 + 0x9c) - fVar65) / (fVar57 - fVar65);
      *(float *)(lVar26 + 0xb0) = fVar61;
      *(float *)(lVar26 + 0x100) = fVar61;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar42 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar24 + lVar36 * 0x178;
    fVar61 = *(float *)(lVar26 + 0x15c);
    fVar65 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar61) * 0.5;
    fVar57 = fVar59 + *(float *)(lVar26 + 0x88) * fVar61 + fVar65;
    fVar59 = fVar59 + fVar65 + *(float *)(lVar26 + 0xb0) * fVar61;
    *(float *)(lVar26 + 0x84) = fVar57;
    *(float *)(lVar26 + 0xac) = fVar57;
    *(float *)(lVar26 + 0xd4) = fVar59;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar24 + lVar36 * 0x178 + 0xfc) = fVar59;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar24 + lVar36 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar42) {
      lVar26 = lVar24 + lVar36 * 0x178;
      fVar62 = fVar62 - fVar50;
      fVar59 = (*(float *)(lVar26 + 0x74) - fVar50) / fVar62;
      fVar62 = (*(float *)(lVar26 + 0x9c) - fVar50) / fVar62;
      *(float *)(lVar26 + 0x88) = fVar59;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar42 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar24 + lVar36 * 0x178;
    fVar59 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar59;
    fVar62 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar26 + 0xb0) = fVar62;
    *(float *)(lVar26 + 0xd8) = fVar62;
    *(float *)(lVar26 + 0x100) = fVar59;
    break;
  case 3:
    if (uVar42 <= uVar12) goto LAB_035575f4;
    lVar26 = lVar24 + lVar36 * 0x178;
    fVar62 = *(float *)(lVar26 + 0x15c);
    fVar61 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar62) * 0.5;
    fVar59 = *(float *)(lVar26 + 0x84) / fVar62 + fVar61;
    fVar61 = fVar61 + *(float *)(lVar26 + 0xd4) / fVar62;
    *(float *)(lVar26 + 0x88) = fVar59;
    *(float *)(lVar26 + 0xb0) = fVar61;
    *(float *)(lVar26 + 0x100) = fVar59;
    *(float *)(lVar26 + 0xd8) = fVar61;
  }
  if (uVar42 <= uVar12) goto LAB_035575f4;
  lVar26 = lVar24 + lVar36 * 0x178;
  fVar59 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar59 = -fVar59;
  }
  fVar61 = fVar55;
  if (((iVar13 == 2) || (fVar61 = fVar45, iVar13 == 1)) || (fVar61 = fVar55 / fVar56, iVar13 == 0))
  {
    fVar59 = fVar61 * fVar59;
  }
  lVar26 = lVar24 + lVar36 * 0x178;
  fVar62 = *(float *)(lVar26 + 0x88);
  fVar65 = *(float *)(lVar26 + 0x84);
  fVar61 = -2.1474836e+09;
  if (fVar65 != INFINITY) {
    fVar61 = (float)(int)fVar65;
  }
  fVar57 = *(float *)(lVar26 + 0xd4);
  fVar54 = *(float *)(lVar26 + 0xd8);
  fVar50 = -2.1474836e+09;
  if (fVar62 != INFINITY) {
    fVar50 = (float)(int)fVar62;
  }
  uVar47 = FUN_03591d3c(fVar65 - fVar61,fVar62 - fVar50);
  *(undefined4 *)(lVar26 + 0x84) = uVar47;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar54 = fVar54 - fVar50;
  *(float *)(lVar26 + 0x88) = fVar59;
  uVar47 = FUN_03591d3c(fVar65 - fVar61,fVar54);
  *(undefined4 *)(lVar24 + lVar36 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  fVar57 = fVar57 - fVar61;
  *(float *)(lVar24 + lVar36 * 0x178 + 0xb0) = fVar59;
  fVar61 = (float)FUN_03591d3c(fVar57,fVar54);
  *(float *)(lVar26 + 0xd4) = fVar61;
  if (*(uint *)(lVar24 + 0x18) <= uVar12) goto LAB_035575f4;
  *(float *)(lVar26 + 0xd8) = fVar59;
  uVar47 = FUN_03591d3c(fVar57,fVar62 - fVar50);
  *(undefined4 *)(lVar24 + lVar36 * 0x178 + 0xfc) = uVar47;
  uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar42 <= uVar12) goto LAB_035575f4;
  *(float *)(lVar24 + lVar36 * 0x178 + 0x100) = fVar59;
LAB_0355574c:
  if (((int)uVar12 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar12) goto LAB_035575f4;
      lVar32 = lVar24 + lVar36 * 0x178;
      *(ulong *)(lVar32 + 0x70) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar32 + 0x70));
      *(float *)(lVar32 + 0x78) = fVar44 + *(float *)(lVar32 + 0x78);
      *(ulong *)(lVar32 + 0x98) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar32 + 0x98));
      *(float *)(lVar32 + 0xa0) = fVar44 + *(float *)(lVar32 + 0xa0);
      *(ulong *)(lVar32 + 0xc0) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar32 + 0xc0));
      *(float *)(lVar32 + 200) = fVar44 + *(float *)(lVar32 + 200);
      *(ulong *)(lVar32 + 0xe8) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar32 + 0xe8));
      *(float *)(lVar32 + 0xf0) = fVar44 + *(float *)(lVar32 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar12 < uVar42) {
        if (*(uint *)(lVar24 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar32 = lVar24 + lVar36 * 0x178;
          *(ulong *)(lVar32 + 0x70) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                        fVar43 + (float)*(undefined8 *)(lVar32 + 0x70));
          *(float *)(lVar32 + 0x78) = fVar44 + *(float *)(lVar32 + 0x78);
          *(ulong *)(lVar32 + 0x98) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                        fVar43 + (float)*(undefined8 *)(lVar32 + 0x98));
          *(float *)(lVar32 + 0xa0) = fVar44 + *(float *)(lVar32 + 0xa0);
          *(ulong *)(lVar32 + 0xc0) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                        fVar43 + (float)*(undefined8 *)(lVar32 + 0xc0));
          *(float *)(lVar32 + 200) = fVar44 + *(float *)(lVar32 + 200);
          *(ulong *)(lVar32 + 0xe8) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                        fVar43 + (float)*(undefined8 *)(lVar32 + 0xe8));
          *(float *)(lVar32 + 0xf0) = fVar44 + *(float *)(lVar32 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar42 <= uVar12) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar42 = *(uint *)(lVar24 + 0x18);
  }
  puVar8 = PTR_DAT_03cbded8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar26 = lVar24 + lVar36 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar47;
  if (uVar42 <= uVar12) goto LAB_035575f4;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar26 = lVar24 + lVar36 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar47;
  *(undefined1 *)(lVar32 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar14 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar29)();
  }
  else if (iVar14 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  uVar18 = *(undefined8 *)(lVar32 + 0x11c);
  *(undefined8 *)(lVar32 + 0x11c) =
       CONCAT44(fVar60 + (float)((ulong)uVar18 >> 0x20),fVar43 + (float)uVar18);
  *(float *)(lVar32 + 0x124) = fVar44 + *(float *)(lVar32 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  *(ulong *)(lVar32 + 0x110) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x110) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar32 + 0x110));
  *(float *)(lVar32 + 0x118) = fVar44 + *(float *)(lVar32 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  *(ulong *)(lVar32 + 0x128) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x128) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar32 + 0x128));
  *(float *)(lVar32 + 0x130) = fVar44 + *(float *)(lVar32 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
  lVar32 = lVar32 + lVar36 * 0x178;
  *(float *)(lVar32 + 0x134) = fVar43 + *(float *)(lVar32 + 0x134);
  *(ulong *)(lVar32 + 0x138) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar32 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar32 + 0x138));
  lVar32 = *in_stack_00000170;
  if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x38), lVar26 == 0)) goto LAB_035574b8;
  uVar42 = *(uint *)(lVar26 + 0x18);
  if (uVar42 <= uVar12) goto LAB_035575f4;
  lVar34 = lVar26 + lVar36 * 0x178;
  uVar49 = CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar61 = fVar60 + *(float *)(lVar34 + 0x150);
  uVar51 = (ulong)(uint)fVar61;
  uVar53 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar61;
  *(ulong *)(lVar34 + 0x140) = uVar49;
  *(ulong *)(lVar34 + 0x148) = uVar53;
  if (uVar30 == uVar52) {
    uVar52 = *unaff_x20 - 1;
    if (uVar12 == uVar52) goto LAB_03555b44;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar34 = (long)(int)uVar52;
    lVar37 = lVar32 + lVar34 * 0x5c;
    uVar53 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar61 = fVar60 + *(float *)(lVar37 + 0x54);
    uVar49 = (ulong)(uint)fVar61;
    fVar62 = fVar43 + *(float *)(lVar37 + 0x58);
    uVar51 = (ulong)(uint)fVar62;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar61;
    *(float *)(lVar37 + 0x58) = fVar62;
    if (uVar42 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar47 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar32 = lVar32 + lVar34 * 0x5c;
    *(float *)(lVar32 + 0x70) = fVar61;
    *(undefined4 *)(lVar32 + 0x6c) = uVar47;
    lVar32 = *in_stack_00000170;
    if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x50), lVar26 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar32 = *(long *)(lVar32 + 0x38);
    if (lVar32 == 0) goto LAB_035574b8;
    uVar52 = *(uint *)(lVar26 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar32 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar26 = lVar26 + lVar34 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar52 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar52 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar12 == uVar52) {
      lVar32 = *in_stack_00000170;
      if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar34 = lVar26 + lVar39 * 0x5c;
      uVar53 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar49 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar61 = fVar60 + *(float *)(lVar34 + 0x54);
      fVar43 = fVar43 + *(float *)(lVar34 + 0x58);
      uVar51 = (ulong)(uint)fVar43;
      *(ulong *)(lVar34 + 0x4c) = uVar49;
      *(float *)(lVar34 + 0x54) = fVar61;
      *(float *)(lVar34 + 0x58) = fVar43;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar47 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar61;
      *(undefined4 *)(lVar26 + 0x6c) = uVar47;
      lVar32 = *in_stack_00000170;
      if ((lVar32 == 0) || (lVar26 = *(long *)(lVar32 + 0x50), lVar26 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      uVar52 = *(uint *)(lVar26 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar32 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar52 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar48 = FUN_026b82c4(uVar38,0);
  if (((((uVar48 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar10) {
      if (((uVar17 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar24 + lVar28 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b82c4(uVar4,0);
        if ((uVar48 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar24 + lVar28 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar48 = FUN_026b82c4(uVar4,0);
          if ((uVar48 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_0355686c:
        bVar10 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b81f8(uVar38,0);
      if ((uVar48 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b63d8(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar48 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar12 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b82c4(uVar38,0);
      iVar14 = (int)fStack0000000000000128;
      if ((uVar48 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar14 = uVar17 - 2;
    }
    lVar32 = *in_stack_00000170;
    if (lVar32 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar32 + 0x40);
    if (lVar26 == 0) goto LAB_035574b8;
    uVar52 = *(uint *)(lVar32 + 0x24);
    iVar15 = *(int *)(lVar26 + 0x18);
    if (iVar15 < (int)(uVar52 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar32 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar32 = *in_stack_00000170;
      if (lVar32 == 0) goto LAB_035574b8;
    }
    lVar32 = *(long *)(lVar32 + 0x40);
    if (lVar32 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar52) goto LAB_035575f4;
    lVar32 = lVar32 + (long)(int)uVar52 * 0x18;
    *(long **)(lVar32 + 0x20) = unaff_x19;
    *(float *)(lVar32 + 0x28) = fStack0000000000000158;
    *(int *)(lVar32 + 0x2c) = iVar14;
    *(int *)(lVar32 + 0x30) = (iVar14 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar32 = unaff_x19[0x6d];
    if (lVar32 == 0) goto LAB_035574b8;
    lVar26 = *(long *)(lVar32 + 0x50);
    *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
    lVar26 = lVar26 + lVar39 * 0x5c;
    bVar10 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      fStack0000000000000158 = (float)uVar12;
    }
    if (uVar12 == *unaff_x20 - 1) {
      lVar32 = *in_stack_00000170;
      if (lVar32 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar32 + 0x40);
      if (lVar26 == 0) goto LAB_035574b8;
      uVar52 = *(uint *)(lVar32 + 0x24);
      iVar14 = *(int *)(lVar26 + 0x18);
      if (iVar14 < (int)(uVar52 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar32 + 0x40),iVar14 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar32 = *in_stack_00000170;
        if (lVar32 == 0) goto LAB_035574b8;
      }
      lVar32 = *(long *)(lVar32 + 0x40);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar52) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)uVar52 * 0x18;
      *(long **)(lVar32 + 0x20) = unaff_x19;
      *(float *)(lVar32 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar32 + 0x2c) = uVar12;
      *(uint *)(lVar32 + 0x30) = uVar17 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = unaff_x19[0x6d];
      if (lVar32 == 0) goto LAB_035574b8;
      lVar26 = *(long *)(lVar32 + 0x50);
      *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_035575f4;
      lVar26 = lVar26 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_03555d68:
    bVar10 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  uVar52 = *(uint *)(lVar32 + 0x18);
  if (uVar52 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar32 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_03555da0:
      if (uVar52 <= uVar17 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar52 = *(uint *)(lVar32 + lVar28 + -0x330);
      uVar47 = *(undefined4 *)(lVar32 + lVar28 + -0x2f8);
LAB_035562ec:
      pcVar29 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar53 = (ulong)uVar52;
      uVar49 = (ulong)(uint)_in_stack_00000070;
      uVar51 = (ulong)uStack0000000000000074;
      (*pcVar29)(fStack0000000000000078,uVar49,uVar51,uVar53,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar47);
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar32 = *(long *)puVar8;
      }
LAB_03556348:
      bVar11 = false;
      fVar46 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar32 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar11 = false;
    }
  }
  else {
    lVar32 = lVar32 + lVar36 * 0x178;
    iVar14 = *(int *)(lVar32 + 0x68);
    *(int *)(lVar32 + 0x16c) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar48 = FUN_026b63d8(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar48 & 1) == 0)) {
      lVar32 = *in_stack_00000170;
      if ((lVar32 == 0) || (lVar39 = *(long *)(lVar32 + 0x38), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar12) goto LAB_035575f4;
      fVar61 = *(float *)(lVar39 + lVar36 * 0x178 + 0x160);
      if (fVar46 <= fVar61) {
        fVar46 = fVar61;
      }
      if (fStack0000000000000100 <= ABS(fVar59)) {
        fStack0000000000000100 = ABS(fVar59);
      }
      if (iVar14 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *in_stack_00000170;
          if (lVar32 == 0) goto LAB_035574b8;
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar39 + 0x15a8);
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar62 = *(float *)(lVar32 + lVar36 * 0x178 + 0x14c);
      fVar61 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar62 = fVar62 + fVar46 * fVar61;
      if (fVar62 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar62;
      }
      uVar49 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar14;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar12)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar12 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar38,0);
        if ((uVar48 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar32 = lVar32 + lVar36 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar32 + 0x160);
      fStack0000000000000078 = *(float *)(lVar32 + 0x11c);
      uVar51 = (ulong)(uint)fStack0000000000000078;
      bVar11 = fVar46 != 0.0;
      fVar61 = in_stack_00000088._4_4_;
      if (bVar11) {
        fVar61 = fVar46;
      }
      fVar46 = fVar61;
      uVar64 = *(undefined4 *)(lVar32 + 0x168);
      uStack0000000000000074 = 0;
      fVar61 = fVar59;
      if (bVar11) {
        fVar61 = fStack0000000000000100;
      }
      uVar49 = (ulong)(uint)fVar61;
      _in_stack_00000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar61;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        if (uVar12 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar36 * 0x178;
          lVar39 = *unaff_x19;
          uVar52 = *(uint *)(lVar32 + 0x128);
          uVar47 = *(undefined4 *)(lVar32 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar12 == uVar5) || ((int)uVar6 <= (int)uVar12)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        lVar39 = lVar36;
        uVar52 = uVar12;
        if (uVar38 == 0x200b || (uVar48 & 1) != 0) {
          lVar39 = lVar35;
          uVar52 = uVar6;
        }
        if (uVar52 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar39 * 0x178;
          uVar52 = *(uint *)(lVar32 + 0x128);
          uVar47 = *(undefined4 *)(lVar32 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        uVar52 = *(uint *)(lVar32 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar48 = FUN_03567ad8(uVar64,*(undefined4 *)(lVar32 + lVar28),0);
      if ((uVar48 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0)) {
          if (uVar12 < *(uint *)(lVar32 + 0x18)) {
            lVar32 = lVar32 + lVar36 * 0x178;
            uVar53 = (ulong)*(uint *)(lVar32 + 0x128);
            uVar51 = (ulong)uStack0000000000000074;
            uVar49 = (ulong)(uint)_in_stack_00000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar49,uVar51,uVar53,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar32 + 0x160));
            puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar32 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar32 = *(long *)puVar8;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar11 = true;
  }
LAB_03556364:
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar52 = *(uint *)(lVar32 + lVar36 * 0x178 + 400);
  fVar61 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar52 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
      uVar52 = *(uint *)(lVar32 + lVar28 + -0x330);
      fVar60 = *(float *)(lVar32 + lVar28 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar53 = (ulong)uVar52;
      uVar49 = (ulong)(uint)fStack000000000000009c;
      uVar51 = (ulong)(uint)fStack0000000000000098;
      (*pcVar29)(fStack00000000000000a0,uVar49,uVar51,uVar53,
                 fStack00000000000000a8 * fVar61 + fVar60,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar32 = *in_stack_00000170;
    if ((lVar32 == 0) || (lVar39 = *(long *)(lVar32 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar12) goto LAB_035575f4;
    *(int *)(lVar39 + lVar36 * 0x178 + 0x174) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar12)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar12 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar38,0);
        if ((uVar48 & 1) != 0) goto LAB_035564e8;
        lVar32 = *in_stack_00000170;
        if (lVar32 == 0) goto LAB_035574b8;
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_035575f4;
      lVar32 = lVar32 + lVar36 * 0x178;
      fStack0000000000000040 = *(float *)(lVar32 + 0x60);
      fStack0000000000000038 = *(float *)(lVar32 + 0x14c);
      uVar49 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar32 + 0x11c);
      uVar51 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar32 + 0x160);
      fStack000000000000009c = fVar61 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar52 = *unaff_x20;
    if (uVar52 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        if (uVar12 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar36 * 0x178;
          lVar35 = *unaff_x19;
          uVar52 = *(uint *)(lVar32 + 0x128);
          fVar60 = *(float *)(lVar32 + 0x14c);
LAB_03556654:
          pcVar29 = *(code **)(lVar35 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar12 == uVar5) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar48 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        uVar52 = *(uint *)(lVar32 + 0x18);
        if (uVar38 == 0x200b || (uVar48 & 1) != 0) {
          if (uVar52 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar35 = lVar36;
          if (uVar52 <= uVar12) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar32 = lVar32 + lVar35 * 0x178;
        fVar60 = *(float *)(lVar32 + 0x14c);
        uVar52 = *(uint *)(lVar32 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar12 < (int)uVar52) {
      lVar32 = *in_stack_00000170;
      if ((lVar32 != 0) && (lVar39 = *(long *)(lVar32 + 0x38), lVar39 != 0)) {
        if (uVar17 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar28 + -0x108) == fStack0000000000000040) {
            fVar62 = *(float *)(lVar39 + lVar28 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar49 = (ulong)(uint)fStack0000000000000038;
            uVar48 = FUN_03567bac(fVar60 + fVar62,uVar49,0);
            if ((uVar48 & 1) != 0) {
              uVar52 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar32 = *in_stack_00000170;
            if (lVar32 == 0) goto LAB_035574b8;
          }
          lVar32 = *(long *)(lVar32 + 0x38);
          if (lVar32 != 0) {
            uVar52 = *(uint *)(lVar32 + 0x18);
            if ((int)uVar12 <= (int)uVar6) goto FUN_035568e8;
            if (uVar6 < uVar52) goto LAB_035568f0;
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
      iVar14 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar32 = *(long *)(lVar24 + lVar28 + -0x130);
      if (lVar32 == 0) goto LAB_035574b8;
      iVar15 = FUN_036d3364(lVar32,0);
      if (iVar14 != iVar15) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar32 + 0x18)) {
          lVar35 = *unaff_x19;
          uVar52 = *(uint *)(lVar32 + lVar28 + -0x330);
          fVar60 = *(float *)(lVar32 + lVar28 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  uVar52 = (uint)*(undefined8 *)(lVar32 + 0x18);
  if (uVar52 <= uVar12) goto LAB_035575f4;
  if ((*(byte *)(lVar32 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      uVar51 = (ulong)uStack00000000000000c0;
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar51,uVar53,fStack00000000000000d0,uVar51);
    }
LAB_035569b4:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar12) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar32 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar12)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar12 == uVar6) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar48 = FUN_026b97f8(uVar38,0);
        if ((uVar48 & 1) != 0) goto LAB_035569b4;
      }
      puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar8;
      }
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      uVar52 = (uint)*(undefined8 *)(lVar32 + 0x18);
      if (uVar52 <= uVar12) goto LAB_035575f4;
      lVar35 = *(long *)(lVar35 + 0xb8);
      lVar33 = lVar32 + lVar36 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar35 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar35 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar35 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar35 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar52 <= uVar12) goto LAB_035575f4;
    lVar32 = lVar32 + lVar36 * 0x178;
    fVar61 = *(float *)(lVar32 + 0x128);
    fVar50 = *(float *)(lVar32 + 0x188);
    uVar19 = *(undefined8 *)(lVar32 + 0x17c);
    fVar57 = *(float *)(lVar32 + 0x184);
    uVar18 = *(undefined8 *)(lVar32 + 0x184);
    fVar44 = *(float *)(lVar32 + 0x18c);
    fVar60 = *(float *)(lVar32 + 0x11c);
    fVar65 = *(float *)(lVar32 + 0x148);
    fVar62 = *(float *)(lVar32 + 0x150);
    in_stack_00000178 = uVar19;
    fStack0000000000000180 = fVar57;
    fStack0000000000000184 = fVar50;
    in_stack_00000188 = fVar44;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar48 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar32 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar48 & 1) == 0) {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar32);
      }
      fVar61 = fVar61 + (float)in_stack_000017b8;
      uVar51 = (ulong)(uint)fVar61;
      fVar60 = fVar60 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar62 = fVar62 - in_stack_000017c0;
      uVar49 = (ulong)(uint)fVar62;
      fVar65 = fVar65 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar53 = (ulong)(uint)fVar65;
      if (fVar60 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar60;
      }
      if (fVar62 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar62;
      }
      if (fStack00000000000000c8 <= fVar61) {
        fStack00000000000000c8 = fVar61;
      }
      if (fStack00000000000000d0 <= fVar65) {
        fStack00000000000000d0 = fVar65;
      }
    }
    else {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar32);
      }
      fVar60 = (fVar60 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar53 = (ulong)(uint)fVar60;
      if (fVar62 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar62;
      }
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar51 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar65) {
        fStack00000000000000d0 = fVar65;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar51,uVar53,fStack00000000000000d0,uVar51);
      fStack00000000000000dc = fVar62 - fVar44;
      fStack00000000000000c8 = fVar61 + fVar57;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar65 + fVar50;
      fStack00000000000000d8 = fVar60;
      in_stack_000017b0 = uVar19;
      in_stack_000017b8 = uVar18;
      in_stack_000017c0 = fVar44;
    }
    if (((*unaff_x20 == 1) || (uVar12 == uVar5)) || (((int)uVar6 <= (int)uVar12 || (!bVar1)))) {
      uVar51 = (ulong)uStack00000000000000c0;
      uVar49 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar49,uVar51,uVar53,fStack00000000000000d0,uVar51);
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  uVar12 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _fStack0000000000000128 = CONCAT44(fStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar1 = (int)uVar12 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar52 = uVar30;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar24 = *in_stack_00000170;
  if (lVar24 != 0) {
    iVar16 = uVar30 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar24 + 0x18) = uVar12;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar16;
    if ((int)uVar12 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar28;
    *(float *)(lVar24 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar48 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar48 & 1) == 0)) {
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
    iVar16 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar16 != 0x19) {
      lVar24 = unaff_x19[0xe5];
      if (lVar24 == 0) goto LAB_035574b8;
      uVar12 = FUN_03911ee4(lVar24,0);
      FUN_03911f20(lVar24,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
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
                            uVar18 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar12 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar24 = *in_stack_00000170;
                              if (lVar24 != 0) {
                                lVar32 = 0;
                                lVar28 = 0;
                                do {
                                  uVar48 = lVar28 + 1;
                                  if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar48)
                                  goto LAB_03554724;
                                  lVar24 = *(long *)(lVar24 + 0x60);
                                  if (lVar24 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                  FUN_03596a20(lVar24 + lVar32 + 0x70,0);
                                  lVar24 = unaff_x19[0xe1];
                                  if (lVar24 == 0) break;
                                  if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                  uVar19 = *(undefined8 *)(lVar24 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar21 = FUN_036d35a8(uVar19,0,0);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar24 = *(long *)(*in_stack_00000170 + 0x60), lVar24 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                      FUN_03596b20(lVar24 + lVar32 + 0x70,1,0);
                                    }
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a460c(lVar24,*(undefined8 *)(lVar35 + lVar32 + 0x80),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4810(lVar24,*(undefined8 *)(lVar35 + lVar32 + 0x98),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a48bc(lVar24,*(undefined8 *)(lVar35 + lVar32 + 0xa0),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = UnityEngine_Material__GetColorArray(lVar24,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar48) goto LAB_035575f4;
                                    if (lVar24 == 0) break;
                                    FUN_036a4e24(lVar24,*(undefined8 *)(lVar35 + lVar32 + 0xa8),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = UnityEngine_Material__GetColorArray(lVar24,0),
                                       lVar24 == 0)) break;
                                    FUN_036aa280(lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_037b514c(lVar24,0);
                                    lVar35 = unaff_x19[0xe1];
                                    if (lVar35 == 0) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar35 = *(long *)(lVar35 + lVar28 * 8 + 0x28);
                                    if ((lVar35 == 0) ||
                                       (uVar19 = UnityEngine_Material__GetColorArray(lVar35,0),
                                       lVar24 == 0)) break;
                                    FUN_0390f3a4(lVar24,uVar19,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390eec8(uVar18,uVar49,uVar51,uVar53,lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_037b514c(lVar24,0), lVar24 == 0)) break;
                                    FUN_0390ed78(lVar24,uVar12 & 1,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar48) goto LAB_035575f4;
                                    plVar40 = *(long **)(lVar24 + lVar28 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar17 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar24 = *in_stack_00000170;
                                  lVar28 = lVar28 + 1;
                                  lVar32 = lVar32 + 0x50;
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


