/*
FUNCTION_NAME: UnityEngine.Animator$$get_deltaPosition
ENTRY_POINT: 03553918
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


void UnityEngine_Animator__get_deltaPosition(long param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int *piVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  float *pfVar28;
  long in_x9;
  long lVar29;
  code *pcVar30;
  float *pfVar31;
  long in_x10;
  long lVar32;
  int in_w11;
  long lVar33;
  long lVar34;
  long in_x12;
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
  long *unaff_x28;
  uint uVar42;
  undefined8 *unaff_x29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  ulong uVar50;
  ulong uVar51;
  float fVar52;
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
  
code_r0x03553918:
  uVar18 = (uint)unaff_x26;
  *(int *)(in_x12 + 0x34) = in_w11;
  uVar14 = *(uint *)(unaff_x19 + 0x93);
  if (in_w11 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
    uVar14 = *(uint *)((long)unaff_x19 + 0x49c);
  }
  *(uint *)((long)unaff_x19 + 0x49c) = uVar14;
  *(uint *)(in_x12 + 0x38) = uVar14;
  *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
  *(undefined4 *)(in_x12 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
  iVar17 = *(int *)((long)unaff_x19 + 0x49c);
  if ((int)uVar14 <= *(int *)((long)unaff_x19 + 0x4a4)) {
    iVar17 = *(int *)((long)unaff_x19 + 0x4a4);
  }
  *(int *)((long)unaff_x19 + 0x4a4) = iVar17;
  *(int *)(in_x12 + 0x40) = iVar17;
  *(int *)(in_x12 + 0x24) = (*(int *)(in_x12 + 0x3c) - *(int *)(in_x12 + 0x34)) + 1;
  *(undefined4 *)(in_x12 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
  lVar32 = *(long *)(in_x10 + 0x38);
  if (lVar32 == 0) goto LAB_035574b8;
  if (uVar14 < *(uint *)(lVar32 + 0x18)) {
    iVar17 = (int)unaff_x24;
    uVar66 = *(undefined4 *)(lVar32 + (long)(int)uVar14 * (long)iVar17 + 0x11c);
    param_1 = param_1 + in_x9 * 0x5c;
    *(float *)(param_1 + 0x70) = param_2;
    *(undefined4 *)(param_1 + 0x6c) = uVar66;
    lVar32 = *unaff_x28;
    if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x50), lVar25 == 0)) goto LAB_035574b8;
    if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar25 + 0x18)) {
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)((long)unaff_x19 + 0x4a4) < *(uint *)(lVar32 + 0x18)) {
        param_4 = param_4 - param_3;
        uVar50 = (ulong)(uint)param_4;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(undefined4 *)(lVar25 + 0x74) =
             *(undefined4 *)
              (lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
        *(float *)(lVar25 + 0x78) = param_4;
        lVar32 = *unaff_x28;
        if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x50), lVar25 == 0)) goto LAB_035574b8;
        lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x95);
        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar25 + 0x18)) {
          lVar29 = lVar25 + lVar35 * 0x5c;
          *(float *)(lVar29 + 0x44) =
               *(float *)(lVar29 + 0x74) - (float)unaff_d13 * fStack000000000000015c;
          *(float *)(lVar29 + 0x5c) = in_stack_000000f8._4_4_;
          if (*(int *)(lVar29 + 0x24) == 1) {
            *(int *)(lVar25 + lVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
          }
          if ((*unaff_x21 == 0) || (lVar29 = *(long *)(lVar32 + 0x38), lVar29 == 0))
          goto LAB_035574b8;
          lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
          uVar14 = (uint)*(undefined8 *)(lVar29 + 0x18);
          if (*(uint *)((long)unaff_x19 + 0x4a4) < uVar14) {
            if ((*(char *)(lVar29 + lVar36 * unaff_x24 + 0x194) != '\0') ||
               (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94),
               *(uint *)(unaff_x19 + 0x94) < uVar14)) {
              lVar25 = lVar25 + lVar35 * 0x5c;
              fVar52 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                       (fStack00000000000000d4 *
                        (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)
                        ) - *(float *)((long)unaff_x19 + 0x2ac));
              fVar57 = -fVar52;
              if ((char)unaff_x19[0x1e] != '\0') {
                fVar57 = fVar52;
              }
              *(float *)(lVar25 + 0x58) = *(float *)(lVar29 + lVar36 * unaff_x24 + 0x144) + fVar57;
              *(float *)(lVar25 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
              *(float *)(lVar25 + 0x54) = param_2;
              *(float *)(lVar25 + 0x48) = in_stack_00000060 + (param_4 - param_2);
              *(float *)(lVar25 + 0x4c) = param_4;
              uVar54 = in_stack_000017dc;
              if ((int)in_stack_000017dc < 0x2d) {
                if (1 < in_stack_000017dc - 10) {
                  if (in_stack_000017dc != 3) goto LAB_03553c8c;
                  if (unaff_x19[0x8f] != 0) {
                    in_stack_000017a8 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                    uVar54 = 3;
                    goto LAB_03553c8c;
                  }
                  goto LAB_035574b8;
                }
              }
              else if ((1 < in_stack_000017dc - 0x2028) && (in_stack_000017dc != 0x2d))
              goto LAB_03553c8c;
              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0358c4f0();
              lVar32 = unaff_x19[0x6d];
              *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
              iVar13 = (int)unaff_x19[0x95] + 1;
              *(int *)(unaff_x19 + 0x95) = iVar13;
              *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
              if ((lVar32 == 0) || (*(long *)(lVar32 + 0x50) == 0)) goto LAB_035574b8;
              if (*(int *)(*(long *)(lVar32 + 0x50) + 0x18) <= iVar13) {
                FUN_0358ca18();
                lVar32 = unaff_x19[0x6d];
                if (lVar32 == 0) goto LAB_035574b8;
              }
              lVar32 = *(long *)(lVar32 + 0x38);
              if (lVar32 == 0) goto LAB_035574b8;
              if (*unaff_x20 < *(uint *)(lVar32 + 0x18)) {
                fVar57 = *(float *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                  if ((in_stack_000017dc == 0x2029) || (fVar52 = 0.0, in_stack_000017dc == 10)) {
                    fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 0;
                  fVar52 = fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           fStack0000000000000058 *
                           (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700)) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar52) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_000017dc == 0x2029) || (fVar52 = 0.0, in_stack_000017dc == 10)) {
                    fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar23 = 1;
                  fVar52 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           fStack00000000000000d4 * (*(float *)(unaff_x19 + 0x57) + fVar52);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar52;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
                puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar32 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar32 = *(long *)puVar9;
                }
                uVar19 = *(undefined8 *)(*(long *)(lVar32 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar57;
                uVar50 = NEON_rev64(uVar19,4);
                unaff_x19[0x99] = uVar50;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_0358c4f0();
                FUN_0358c4f0();
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068._4_4_ = 1;
                bStack0000000000000070 = 1;
                uVar14 = in_stack_000017dc;
LAB_03550bd0:
                fVar57 = (float)unaff_d13;
                in_stack_000017a8 = in_stack_000017a8 + 1;
                lVar32 = unaff_x19[0x8f];
                if (lVar32 != 0) {
                  if ((int)in_stack_000017a8 < (int)*(uint *)(lVar32 + 0x18)) {
                    if (*(uint *)(lVar32 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
                    in_stack_000017dc =
                         *(uint *)(lVar32 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
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
                    if ((*unaff_x28 != 0) && (lVar32 = *(long *)(*unaff_x28 + 0x38), lVar32 != 0)) {
                      if (*unaff_x20 < *(uint *)(lVar32 + 0x18)) {
                        lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
                        *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar32 + 0x2c);
                        *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar32 + 0x58);
                        unaff_x19[0x20] = *(long *)(lVar32 + 0x38);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        goto LAB_035509d4;
                      }
                      goto LAB_035575f4;
                    }
                    goto LAB_035574b8;
                  }
LAB_0355459c:
                  fVar57 = (float)uVar50;
                  if (((char)unaff_x19[0x47] != '\0') &&
                     (fVar57 = DAT_00d389f8,
                     DAT_00d389f8 <
                     *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                    fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
                    fVar52 = *(float *)((long)unaff_x19 + 0x254);
                    if ((fVar57 < fVar52) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                      if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0
                         ) {
                        *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                      }
                      fVar43 = (*(float *)((long)unaff_x19 + 0x23c) - fVar57) * 0.5;
                      if (fVar43 <= DAT_00d38b84) {
                        fVar43 = DAT_00d38b84;
                      }
                      *(float *)(unaff_x19 + 0x48) = fVar57;
                      fVar43 = (fVar57 + fVar43) * 20.0 + 0.5;
                      fVar57 = DAT_00d38e60;
                      if (fVar43 != INFINITY) {
                        fVar57 = (float)(int)fVar43 / 20.0;
                      }
                      if (fVar52 <= fVar57) {
                        fVar57 = fVar52;
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
                  lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar32 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar32 = *(long *)puVar10;
                  }
                  plVar41 = (long *)OVRPlugin_Media_TypeInfo;
                  lVar32 = **(long **)(lVar32 + 0xb8);
                  if (lVar32 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
                  iVar17 = *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54)
                           << 2;
                  if ((*unaff_x28 == 0) || (lVar32 = *(long *)(*unaff_x28 + 0x60), lVar32 == 0))
                  goto LAB_035574b8;
                  if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (*(int *)(lVar32 + 0x18) == 0) goto LAB_035575f4;
                  FUN_035968e8(lVar32 + 0x20,0,0);
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cbded8);
                    DAT_0411f172 = '\x01';
                  }
                  iVar13 = (int)unaff_x19[0x4e];
                  in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  uStack00000000000000e8 =
                       *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                  lVar32 = unaff_x19[0xe3];
                  in_stack_000000b8 = (long *)uStack00000000000000e8;
                  fStack00000000000000c4 = in_stack_000000f8._4_4_;
                  if (iVar13 < 0x401) {
                    if (iVar13 == 0x100) {
                      if (lVar32 == 0) goto LAB_035574b8;
                      if (*(uint *)(lVar32 + 0x18) < 2) goto LAB_035575f4;
                      uVar19 = *(undefined8 *)(lVar32 + 0x30);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*unaff_x28 == 0) ||
                           (lVar25 = *(long *)(*unaff_x28 + 0x58), lVar25 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
                        fVar57 = *(float *)(lVar25 + (long)(int)uStack0000000000000030 * 0x14 + 0x28
                                           );
                      }
                      else {
                        fVar57 = *(float *)(unaff_x19 + 0x97);
                      }
                      fStack00000000000000c4 =
                           fStack000000000000002c + 0.0 + *(float *)(lVar32 + 0x2c);
                      fVar57 = (0.0 - fVar57) - fStack0000000000000020;
                    }
                    else if (iVar13 == 0x200) {
                      if (lVar32 == 0) goto LAB_035574b8;
                      if ((*(int *)(lVar32 + 0x18) == 1) || (*(int *)(lVar32 + 0x18) == 0))
                      goto LAB_035575f4;
                      fStack00000000000000c4 =
                           (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
                      uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar32 + 0x24) +
                                            (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*unaff_x28 == 0) ||
                           (lVar32 = *(long *)(*unaff_x28 + 0x58), lVar32 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar32 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
                        lVar32 = lVar32 + (long)(int)uStack0000000000000030 * 0x14;
                        fStack00000000000000c4 =
                             fStack000000000000002c + 0.0 + fStack00000000000000c4;
                        fVar57 = ((fStack0000000000000020 + *(float *)(lVar32 + 0x28) +
                                  *(float *)(lVar32 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
                      }
                      else {
                        fStack00000000000000c4 =
                             fStack000000000000002c + 0.0 + fStack00000000000000c4;
                        fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) +
                                  in_stack_000017d8) - fStack0000000000000024) * -0.5 + 0.0;
                      }
                    }
                    else {
                      if (iVar13 != 0x400) goto LAB_03554c4c;
                      if (lVar32 == 0) goto LAB_035574b8;
                      if (*(int *)(lVar32 + 0x18) == 0) goto LAB_035575f4;
                      uVar19 = *(undefined8 *)(lVar32 + 0x24);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*unaff_x28 == 0) ||
                           (lVar25 = *(long *)(*unaff_x28 + 0x58), lVar25 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_035575f4;
                        in_stack_000017d8 =
                             *(float *)(lVar25 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
                      }
                      fStack00000000000000c4 =
                           fStack000000000000002c + 0.0 + *(float *)(lVar32 + 0x20);
                      fVar57 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
                    }
LAB_03554c3c:
                    in_stack_000000b8 =
                         (long *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,
                                          (float)uVar19 + fVar57);
                  }
                  else if (iVar13 == 0x800) {
                    if (lVar32 == 0) goto LAB_035574b8;
                    if ((*(int *)(lVar32 + 0x18) == 1) || (*(int *)(lVar32 + 0x18) == 0))
                    goto LAB_035575f4;
                    fVar57 = fStack000000000000002c + 0.0 +
                             (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
                    in_stack_000000b8 =
                         (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) *
                                          0.5 + 0.0,
                                          ((float)*(undefined8 *)(lVar32 + 0x24) +
                                          (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5 + 0.0);
                    fStack00000000000000c4 = fVar57;
                  }
                  else {
                    if (iVar13 == 0x1000) {
                      if (lVar32 == 0) goto LAB_035574b8;
                      if ((*(int *)(lVar32 + 0x18) != 1) && (*(int *)(lVar32 + 0x18) != 0)) {
                        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) *
                                          0.5,((float)*(undefined8 *)(lVar32 + 0x24) +
                                              (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5);
                        fStack00000000000000c4 =
                             fStack000000000000002c + 0.0 +
                             (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
                        fVar57 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                                        *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) *
                                       0.5;
                        goto LAB_03554c3c;
                      }
                      goto LAB_035575f4;
                    }
                    if (iVar13 == 0x2000) {
                      if (lVar32 == 0) goto LAB_035574b8;
                      if ((*(int *)(lVar32 + 0x18) == 1) || (*(int *)(lVar32 + 0x18) == 0))
                      goto LAB_035575f4;
                      fVar57 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020)
                                     - fStack0000000000000024) * 0.5;
                      in_stack_000000b8 =
                           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)
                                            ) * 0.5 + 0.0,
                                            ((float)*(undefined8 *)(lVar32 + 0x24) +
                                            (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5 + fVar57);
                      fStack00000000000000c4 =
                           fStack000000000000002c + 0.0 +
                           (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
                    }
                  }
LAB_03554c4c:
                  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
                  uVar19 = FUN_03912334(unaff_x19[0xe5],0);
                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)puVar9);
                  }
                  uVar50 = FUN_036d35a8(uVar19,0,0);
                  lVar32 = FUN_0357f060();
                  if (lVar32 == 0) goto LAB_035574b8;
                  FUN_036df824(lVar32,0);
                  *(float *)(unaff_x19 + 0xe2) = fVar57;
                  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
                  iVar13 = FUN_039117fc(unaff_x19[0xe5],0);
                  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
                  fVar52 = (float)FUN_03911954(unaff_x19[0xe5],0);
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
                  lVar32 = *(long *)OVRPlugin_Mesh_TypeInfo;
                  if (*(int *)(lVar32 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar32 = *(long *)puVar9;
                  }
                  puVar26 = *(undefined4 **)(lVar32 + 0xb8);
                  uVar51 = (ulong)(uint)puVar26[1];
                  uVar53 = (ulong)(uint)puVar26[2];
                  uVar55 = (ulong)(uint)puVar26[3];
                  FUN_035683a4(*puVar26,uVar51,uVar53,uVar55,&stack0x000017b0,0x4000ffff,0);
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  lVar32 = *unaff_x28;
                  if (lVar32 == 0) goto LAB_035574b8;
                  uVar14 = *unaff_x20;
                  if ((int)uVar14 < 1) {
                    fStack00000000000000d4 = 0.0;
                    iVar17 = 0;
                    goto LAB_03556f00;
                  }
                  lVar32 = *(long *)(lVar32 + 0x38);
                  fVar57 = ABS(fVar57);
                  fVar43 = 1.0;
                  if ((uVar50 & 1) == 0) {
                    fVar43 = fVar57;
                  }
                  if (lVar32 == 0) goto LAB_035574b8;
                  bVar12 = false;
                  bVar11 = false;
                  _iStack0000000000000128 = 0;
                  bVar8 = false;
                  fStack00000000000000d4 = 0.0;
                  fStack0000000000000028 = 0.0;
                  fStack0000000000000158 = 0.0;
                  in_stack_00000068._4_4_ = 0;
                  lVar25 = 0x2e0;
                  fVar62 = 0.0;
                  fVar63 = 0.0;
                  fStack00000000000000c8 = fStack00000000000000d8;
                  fStack0000000000000104 =
                       *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8
                                 );
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
              }
            }
          }
        }
      }
    }
  }
  goto LAB_035575f4;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar51 = FUN_03586568();
  if (((uVar51 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, uVar14 = in_stack_000017dc,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar35 = (long)(int)uVar14;
  cVar24 = *(char *)(lVar32 + lVar35 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar25 = unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar14) {
    in_stack_000017dc = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_000017dc == 0x2026) {
      *(long *)(lVar32 + lVar35 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar32 + 0x2c) = 0;
      *(long *)(lVar32 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      uVar14 = *unaff_x20;
      if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
      bVar8 = true;
      *(int *)(lVar32 + (long)(int)uVar14 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar14 + 1);
    }
    else if (in_stack_000017dc == 3) {
      if ((*unaff_x21 == 0) || (lVar29 = FUN_03568ac0(*unaff_x21,0), lVar29 == 0))
      goto LAB_035574b8;
      in_stack_00000c18 = 3;
      FUN_0219b634(lVar29,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
      *(ulong *)(lVar32 + lVar35 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
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
    if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
    lVar32 = lVar32 + (long)(int)uVar14 * (long)iVar17;
    *(undefined1 *)(lVar32 + 0x194) = 0;
    *(undefined2 *)(lVar32 + 0x20) = 0x200b;
    *(undefined4 *)(lVar32 + 100) = 0;
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
          uVar51 = FUN_026b812c(in_stack_000017dc,0);
          if ((uVar51 & 1) != 0) {
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
        uVar51 = FUN_026b8070(in_stack_000017dc,0);
        fStack0000000000000158 = 1.0;
        if ((uVar51 & 1) != 0) {
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
      uVar51 = FUN_026b812c(in_stack_000017dc,0);
      fStack0000000000000158 = 1.0;
      if ((uVar51 & 1) != 0) {
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
    if (iVar13 == 0) goto LAB_03550fec;
LAB_03550c00:
    if (iVar13 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar32 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar32 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar32,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar32 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (lVar32 == 0) goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
      if (in_stack_000017dc == 0x3c) {
        in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar35 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar35 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar13 = FUN_03776950(&stack0x00001720,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
      fVar43 = (float)FUN_03776960(&stack0x00001720,0);
      fVar52 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar52 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
      fVar52 = (fVar57 / (float)iVar13) * fVar43 * fVar52;
      iVar13 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      if (iVar13 < 1) {
        if (*unaff_x21 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar63 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        fVar43 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar43 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar62 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_035574b8;
        FUN_03776e6c(&stack0x000008a0,*(long *)(lVar32 + 0x20),0);
        fVar44 = (float)FUN_03776c9c(&stack0x00001700,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_035574b8;
        fVar64 = *(float *)(lVar32 + 0x2c);
        fVar46 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar60 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        fVar67 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar47 = fVar52 * fVar60 * fVar67 * fVar47;
        fVar43 = (fVar57 / (float)iVar13) * fVar63 * fVar43;
        fVar57 = fVar43 * (fVar62 / fVar44) * fVar64 * fVar46;
        fVar43 = fVar43 / fVar57;
        fVar45 = fVar43 * fVar45;
        fVar52 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
        fVar43 = fVar43 * fVar52;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar13 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar43 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_035574b8;
        fVar62 = *(float *)(lVar32 + 0x2c);
        fVar63 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar63 = 1.0;
        }
        fVar44 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar64 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar47 = fVar52 * fVar46 * fVar64 * fVar47;
        fVar57 = (fVar57 / (float)iVar13) * fVar43 * fVar63 * fVar62 * fVar44;
        fVar43 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000e0 = lVar32;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0,lVar32);
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar32 + 0x2c) = 1;
      *(float *)(lVar32 + 0x160) = fVar57;
      *(long *)(lVar32 + 0x40) = *in_stack_000000b8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = *in_stack_00000170;
      if ((lVar32 == 0) || (lVar35 = *(long *)(lVar32 + 0x38), lVar35 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      fStack000000000000015c = 0.0;
      *(int *)(lVar35 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar25;
      goto LAB_035514b0;
    }
    lVar32 = *in_stack_00000170;
    fVar47 = 0.0;
    fVar52 = fVar47;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar52 = fVar57;
    }
    if (lVar32 == 0) goto LAB_035574b8;
    fVar45 = 0.0;
    fVar43 = 0.0;
  }
  else {
    fStack0000000000000158 = 1.0;
    if (iVar13 != 0) goto LAB_03550c00;
LAB_03550fec:
    if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_000000e0 = *(long *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
    unaff_x28 = in_stack_00000170;
    uVar14 = in_stack_000017dc;
    if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
    if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *unaff_x21 = *(long *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    *in_stack_00000160 = *(long *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
    goto LAB_035574b8;
    uVar18 = *unaff_x20;
    uVar14 = *(uint *)(lVar32 + 0x18);
    if (uVar14 <= uVar18) goto LAB_035575f4;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar32 + (long)(int)uVar18 * unaff_x24 + 0x58);
    if (bVar8) {
      lVar25 = unaff_x19[0x8f];
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
      if ((*(int *)(lVar25 + (long)(int)in_stack_000017a8 * 0xc + 0x20) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
      if (uVar14 <= uVar18 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar52 = *(float *)(lVar32 + (long)(int)(uVar18 - 1) * (long)iVar17 + 0x60);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar32 = *unaff_x21;
    }
    else {
LAB_035510fc:
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      iVar13 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar32 = unaff_x19[0x20];
    }
    if (lVar32 == 0) goto LAB_035574b8;
    fVar62 = (float)FUN_03776960(lVar32 + 0x50,0);
    fVar63 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar63 = 1.0;
    }
    fVar43 = 0.0;
    fVar45 = 0.0;
    if (!(bool)(bVar8 & in_stack_000017dc == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar45 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar43 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
    }
    lVar32 = unaff_x19[0xc9];
    if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto LAB_035574b8;
    fVar44 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = *(float *)(lVar32 + 0x2c);
    fVar57 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar64 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar60 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
    lVar32 = unaff_x19[0x6d];
    if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x38), lVar25 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
    lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar25 + 0x2c) = 0;
    fVar63 = ((fStack0000000000000158 * fVar52) / (float)iVar13) * fVar62 * fVar63;
    fVar57 = fVar63 * fVar44 * fVar46 * fVar57;
    *(float *)(lVar25 + 0x160) = fVar57;
    uVar14 = *(uint *)(unaff_x19 + 0x24);
    fVar47 = fVar63 * fVar64 * fVar60 * fVar47;
    if (uVar14 == 0) {
      fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar25 = unaff_x19[0xe1];
      if (lVar25 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar25 = *(long *)(lVar25 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar25 == 0) goto LAB_035574b8;
      fStack000000000000015c = *(float *)(lVar25 + 0x10c);
    }
LAB_035514b0:
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    fVar52 = 0.0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      fVar52 = fVar57;
    }
  }
  lVar32 = *(long *)(lVar32 + 0x38);
  if (lVar32 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar32 + 0x20) = (short)in_stack_000017dc;
  *(int *)(lVar32 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar32 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(int *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  uVar14 = *unaff_x20;
  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
  uVar20 = unaff_x29[1];
  uVar19 = *unaff_x29;
  lVar32 = lVar32 + (long)(int)uVar14 * unaff_x24;
  *(undefined4 *)(lVar32 + 0x18c) = in_stack_000008b0;
  *(undefined8 *)(lVar32 + 0x184) = uVar20;
  *(undefined8 *)(lVar32 + 0x17c) = uVar19;
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *(undefined4 *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar32 = *(long *)(unaff_x19[0xc9] + 0x20), lVar32 == 0))
  goto LAB_035574b8;
  FUN_03776e6c(&stack0x00000c18,lVar32,0);
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
  in_stack_00000140 = *(float *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    fStack000000000000012c = 0.0;
    fVar62 = 0.0;
    fVar63 = 0.0;
  }
  else {
    if (*in_stack_000000e0 == 0) goto LAB_035574b8;
    uVar18 = *unaff_x20;
    uVar14 = *(uint *)(*in_stack_000000e0 + 0x28);
    if ((int)uVar18 < (int)in_stack_00000088._4_4_) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar18 + 1) goto LAB_035575f4;
      lVar32 = *(long *)(lVar32 + (long)(int)(uVar18 + 1) * (long)iVar17 + 0x30);
      if ((((lVar32 == 0) || (*unaff_x21 == 0)) ||
          (lVar25 = *(long *)(*unaff_x21 + 0x128), lVar25 == 0)) ||
         (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)) goto LAB_035574b8;
      in_stack_000008a0 = uVar14 | *(int *)(lVar32 + 0x28) << 0x10;
      uVar50 = FUN_0219f8b8(lVar25,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      uVar66 = 0;
      if ((uVar50 & 1) == 0) {
        fStack000000000000012c = 0.0;
        fVar62 = 0.0;
        fVar63 = 0.0;
      }
      else {
        if (in_stack_000016f8 == 0) goto LAB_035574b8;
        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
        uVar66 = *(undefined4 *)(in_stack_000016f8 + 0x20);
        fVar63 = *(float *)(in_stack_000016f8 + 0x14);
        fVar62 = *(float *)(in_stack_000016f8 + 0x18);
        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
          in_stack_00000140 = 0.0;
        }
      }
      uVar18 = *unaff_x20;
    }
    else {
      uVar66 = 0;
      fStack000000000000012c = 0.0;
      fVar62 = 0.0;
      fVar63 = 0.0;
    }
    if (0 < (int)uVar18) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= uVar18 - 1) goto LAB_035575f4;
      lVar32 = *(long *)(lVar32 + (ulong)(uVar18 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar32 == 0) || (*unaff_x21 == 0)) ||
         ((lVar25 = *(long *)(*unaff_x21 + 0x128), lVar25 == 0 ||
          (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)))) goto LAB_035574b8;
      in_stack_000008a0 = *(uint *)(lVar32 + 0x28) | uVar14 << 0x10;
      uVar50 = FUN_0219f8b8(lVar25,&stack0x000008a0,&stack0x000016f8,
                            *(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
      if ((uVar50 & 1) != 0) {
        if ((in_stack_000016f8 == 0) ||
           (fVar63 = (float)FUN_03571cb4(fVar63,fVar62,fStack000000000000012c,uVar66,
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
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar46 = *(float *)(unaff_x19 + 200);
    fVar44 = (float)FUN_03776cb4(&stack0x00001790,0);
    fVar46 = fVar46 - fVar52 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar46;
    if ((in_stack_000017dc == 0x200b) || (unaff_w27 != 0)) {
      *(float *)(unaff_x19 + 200) =
           fVar46 - fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
    }
  }
  fVar46 = *(float *)(unaff_x19 + 0x56);
  fVar44 = 0.0;
  if (fVar46 != 0.0) {
    fVar44 = (float)FUN_03776c94(&stack0x00001790,0);
    fVar64 = (float)FUN_03776ca4(&stack0x00001790,0);
    fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar46 * 0.5 - fVar52 * (fVar44 * 0.5 + fVar64));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar44;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar32 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar50 = FUN_036cee6c(lVar32,0,0);
    fVar64 = 0.0;
    if ((uVar50 & 1) != 0) {
      lVar32 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar32 == 0) goto LAB_035574b8;
      uVar50 = FUN_03699d3c(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar64 = 0.0;
      if ((uVar50 & 1) != 0) {
        lVar32 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar32 == 0) goto LAB_035574b8;
        fVar46 = (float)FUN_0369e060(lVar32,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
        fVar60 = *(float *)(*unaff_x21 + 0x1b0);
        fVar64 = (float)FUN_0369e060(*in_stack_00000160,
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar64 = fVar64 * fVar46 * fVar60 * 0.25;
        if (fVar46 < fStack000000000000015c + fVar64) {
          fStack000000000000015c = fVar46 - fVar64;
        }
      }
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
  }
  else {
    lVar32 = *in_stack_00000160;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar50 = FUN_036cee6c(lVar32,0,0);
    fStack00000000000000d0 = 0.0;
    if ((uVar50 & 1) != 0) {
      lVar32 = *in_stack_00000160;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar32 == 0) goto LAB_035574b8;
      uVar50 = FUN_03699d3c(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar50 & 1) != 0) {
        lVar32 = *in_stack_00000160;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar32 == 0) goto LAB_035574b8;
        uVar50 = FUN_03699d3c(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar50 & 1) != 0) {
          lVar32 = *in_stack_00000160;
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar32 == 0) goto LAB_035574b8;
          fVar46 = (float)FUN_0369e060(lVar32,*(undefined4 *)
                                               (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
          fVar60 = *(float *)(*unaff_x21 + 0x1a8);
          fVar64 = (float)FUN_0369e060(*in_stack_00000160,
                                       *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
          fVar64 = fVar64 * fVar46 * fVar60 * 0.25;
          if (fVar46 < fStack000000000000015c + fVar64) {
            fStack000000000000015c = fVar46 - fVar64;
          }
          goto FUN_03551b84;
        }
      }
    }
    fVar64 = 0.0;
  }
FUN_03551b84:
  fVar46 = *(float *)(unaff_x19 + 200);
  fVar60 = (float)FUN_03776ca4(&stack0x00001790,0);
  fVar46 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar52 * (fVar63 + ((fVar60 - fStack000000000000015c) - fVar64));
  fVar63 = (float)FUN_03776cac(&stack0x00001790,0);
  fVar67 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar47 + fVar52 * (fVar62 + fStack000000000000015c + fVar63)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar63 = (float)FUN_03776c9c(&stack0x00001790,0);
  fVar63 = fVar67 - fVar52 * (fStack000000000000015c + fStack000000000000015c + fVar63);
  fVar62 = (float)FUN_03776c94(&stack0x00001790,0);
  fVar60 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                    fVar52 * (fVar64 + fVar64 +
                             fStack000000000000015c + fStack000000000000015c + fVar62);
  fStack0000000000000104 = fVar46;
  fVar62 = fVar60;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar59 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
    fVar62 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar58 = fVar59 * fVar52 * (fVar64 + fStack000000000000015c + fVar62);
    fVar62 = (float)FUN_03776cac(&stack0x00001790,0);
    fVar56 = (float)FUN_03776c9c(&stack0x00001790,0);
    fVar67 = fVar67 + 0.0;
    fVar63 = fVar63 + 0.0;
    fVar59 = fVar59 * fVar52 * (((fVar62 - fVar56) - fStack000000000000015c) - fVar64);
    fVar56 = fVar46 + fVar58;
    fVar62 = fVar60 + fVar59;
    fVar48 = (fVar58 - fVar59) * 0.5;
    fVar46 = (fVar46 + fVar59) - fVar48;
    fVar60 = (fVar60 + fVar58) - fVar48;
    fStack0000000000000104 = fVar56 - fVar48;
    fVar62 = fVar62 - fVar48;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fStack0000000000000114 = 0.0;
    fVar48 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000100 = 0.0;
    fVar59 = fVar63;
    fVar56 = fVar67;
  }
  else {
    thunk_FUN_036bc400(_fStack0000000000000078,0);
    fVar61 = (fVar60 + fVar46) * 0.5;
    fVar65 = (fVar63 + fVar67) * 0.5;
    fVar67 = fVar67 - fVar65;
    fStack0000000000000100 = 0.0;
    fVar56 = fVar67;
    fStack0000000000000104 =
         (float)FUN_036bdd2c(fStack0000000000000104 - fVar61,_fStack0000000000000078,0);
    fStack0000000000000104 = fVar61 + fStack0000000000000104;
    fStack0000000000000100 = fStack0000000000000100 + 0.0;
    fVar59 = fVar63 - fVar65;
    fStack0000000000000114 = 0.0;
    fVar63 = fVar59;
    fVar46 = (float)FUN_036bdd2c(fVar46 - fVar61,_fStack0000000000000078,0);
    fVar46 = fVar61 + fVar46;
    fStack0000000000000114 = fStack0000000000000114 + 0.0;
    fVar63 = fVar65 + fVar63;
    fVar58 = 0.0;
    fVar60 = (float)FUN_036bdd2c(fVar60 - fVar61,_fStack0000000000000078,0);
    fVar60 = fVar61 + fVar60;
    fVar67 = fVar65 + fVar67;
    fVar58 = fVar58 + 0.0;
    fVar48 = 0.0;
    fVar62 = (float)FUN_036bdd2c(fVar62 - fVar61,_fStack0000000000000078,0);
    fVar62 = fVar61 + fVar62;
    fVar48 = fVar48 + 0.0;
    fVar59 = fVar65 + fVar59;
    fVar56 = fVar65 + fVar56;
  }
  if (*in_stack_00000170 == 0) goto LAB_035574b8;
  lVar32 = *(long *)(*in_stack_00000170 + 0x38);
  unaff_d13 = (ulong)(uint)fVar52;
  if (lVar32 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar32 + 0x11c) = fVar46;
  *(float *)(lVar32 + 0x120) = fVar63;
  *(float *)(lVar32 + 0x124) = fStack0000000000000114;
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar32 + 0x114) = fVar56;
  *(float *)(lVar32 + 0x110) = fStack0000000000000104;
  *(float *)(lVar32 + 0x118) = fStack0000000000000100;
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar32 + 0x128) = fVar60;
  *(float *)(lVar32 + 300) = fVar67;
  *(float *)(lVar32 + 0x130) = fVar58;
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar32 = lVar32 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar32 + 0x134) = fVar62;
  *(float *)(lVar32 + 0x138) = fVar59;
  *(float *)(lVar32 + 0x13c) = fVar48;
  if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
  goto LAB_035574b8;
  uVar18 = *unaff_x20;
  unaff_x26 = (long)(int)uVar18;
  if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_035575f4;
  lVar25 = lVar32 + unaff_x26 * unaff_x24;
  *(int *)(lVar25 + 0x140) = (int)unaff_x19[200];
  fVar67 = *(float *)(unaff_x19 + 0x9b);
  uVar50 = (ulong)(uint)fVar67;
  fVar62 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar25 + 0x15c) = (fVar60 - fVar46) / (fVar56 - fVar63);
  *(float *)(lVar25 + 0x14c) = (fVar47 - fVar67) + fVar62;
  fVar45 = fVar45 * fVar52;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar45 = fVar45 / fStack0000000000000158;
    fVar43 = (fVar43 * fVar52) / fStack0000000000000158;
  }
  else {
    fVar43 = fVar43 * fVar52;
  }
  unaff_w22 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w27 == 0) || (uVar18 == unaff_w22)) {
    fVar43 = fVar62 + fVar43;
    fVar45 = fVar62 + fVar45;
    fVar46 = fVar43;
    fVar63 = fVar45;
    if (fVar62 != 0.0) {
      fVar63 = (fVar45 - fVar62) / *(float *)((long)unaff_x19 + 0x404);
      fVar46 = (fVar43 - fVar62) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar63 <= fVar45) {
        fVar63 = fVar45;
      }
      if (fVar43 <= fVar46) {
        fVar46 = fVar43;
      }
    }
    lVar32 = lVar32 + unaff_x26 * unaff_x24;
    fVar62 = fVar63;
    if (fVar63 <= *(float *)(unaff_x19 + 0x99)) {
      fVar62 = *(float *)(unaff_x19 + 0x99);
    }
    fVar60 = fVar46;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar46) {
      fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar60;
    *(float *)(unaff_x19 + 0x99) = fVar62;
    *(float *)(lVar32 + 0x154) = fVar63;
    *(float *)(lVar32 + 0x158) = fVar46;
    *(float *)(lVar32 + 0x148) = fVar45 - fVar67;
    *(float *)(unaff_x19 + 0x98) = fVar45 - fVar67;
    *(float *)(lVar32 + 0x150) = fVar43 - fVar67;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar43 - fVar67;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar62;
      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
      fVar43 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar63 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
      fStack0000000000000158 = (fVar52 * fVar63) / fStack0000000000000158;
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar43 <= fStack0000000000000158) {
        fVar43 = fStack0000000000000158;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar43;
    }
    if ((float)uVar50 == 0.0) {
      fVar43 = *(float *)(in_stack_00000080 + 0x208);
      if (*(float *)(in_stack_00000080 + 0x208) <= fVar45) {
        fVar43 = fVar45;
      }
      *(float *)(in_stack_00000080 + 0x208) = fVar43;
    }
  }
  else {
    fVar43 = *(float *)(unaff_x19 + 0x99);
    lVar32 = lVar32 + unaff_x26 * unaff_x24;
    *(float *)(lVar32 + 0x154) = fVar43;
    fVar63 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar43 = fVar43 - fVar67;
    *(float *)(lVar32 + 0x148) = fVar43;
    *(float *)(lVar32 + 0x158) = fVar63;
    *(float *)(unaff_x19 + 0x98) = fVar43;
    fVar63 = fVar63 - fVar67;
    *(float *)(lVar32 + 0x150) = fVar63;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar63;
  }
  lVar32 = *in_stack_00000170;
  if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x38), lVar25 == 0)) goto LAB_035574b8;
  uVar54 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar54) goto LAB_035575f4;
  lVar25 = lVar25 + (long)(int)uVar54 * unaff_x24;
  *(undefined1 *)(lVar25 + 0x194) = 0;
  uVar2 = *(uint *)(unaff_x19 + 0x4f);
  uVar14 = in_stack_000017dc;
  if ((in_stack_000017dc == 9) ||
     (((((unaff_w27 == 0 && (in_stack_000017dc != 3)) && (in_stack_000017dc != 0x200b)) &&
       (in_stack_000017dc != 0xad)) ||
      (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar25 + 0x194) = 1;
    pfVar28 = _fStack00000000000000a0;
    pfVar31 = _fStack00000000000000a8;
    if (bVar8) {
      lVar32 = *(long *)(lVar32 + 0x50);
      if (lVar32 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar32 + 0x60);
      pfVar28 = (float *)(lVar32 + 100);
    }
    fVar63 = *pfVar31;
    fVar62 = *pfVar28;
    fVar43 = *(float *)(unaff_x19 + 0x6c);
    fVar46 = *(float *)(unaff_x19 + 200);
    in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar63) - fVar62;
    bVar11 = true;
    if ((fVar43 <= in_stack_000000f8._4_4_) && (bVar11 = false, !NAN(fVar43))) {
      bVar11 = fVar43 == -1.0;
    }
    if (!bVar11) {
      in_stack_000000f8._4_4_ = fVar43;
    }
    fVar43 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar43 = (float)FUN_03776cb4(&stack0x00001790,0);
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_000017dc != 0xad) {
      fVar57 = fVar52;
    }
    fVar67 = (float)uVar50;
    fVar47 = 0.0;
    if ((0.0 < fVar67) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar54 = *unaff_x20;
    fVar47 = (*(float *)(unaff_x19 + 0x97) - (fVar60 - fVar67)) + fVar47;
    if (fStack00000000000000c4 < fVar47) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar54;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      uVar19 = DAT_00d37868;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar56 = *(float *)(unaff_x19 + 0x59);
        if (((fVar56 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar67)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar47) / (float)(int)unaff_x19[0x95]) /
                   fStack0000000000000058;
          if (fVar57 <= fVar56) {
            fVar57 = fVar56;
          }
          goto LAB_03554b48;
        }
        fVar67 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar47 = *(float *)(unaff_x19 + 0x4a);
        uVar50 = (ulong)(uint)fVar47;
        if ((fVar47 < fVar67) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = (fVar67 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar57 <= DAT_00d38b84) {
            fVar57 = DAT_00d38b84;
          }
          fVar52 = (fVar67 - fVar57) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar67;
          fVar57 = DAT_00d38e60;
          if (fVar52 != INFINITY) {
            fVar57 = (float)(int)fVar52 / 20.0;
          }
          if (fVar57 <= fVar47) {
            fVar57 = fVar47;
          }
          goto LAB_03554658;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar9;
        }
        lVar25 = *(long *)(lVar32 + 0xb8);
        lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = FUN_01a46ff8(lVar32);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar32 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar32 + 0xb8) + 0x11f0,&stack0x000008a0,
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
        if ((uVar54 == 0) || ((int)in_stack_000017a8 < 0)) {
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
        if (fVar57 - fVar60 <= fStack00000000000000c4) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar50 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar32 = NEON_rev64(uVar50,4);
          unaff_x19[0x99] = lVar32;
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
        lVar32 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar51 = FUN_036cee6c(lVar32,0,0);
        if ((uVar51 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar32 = unaff_x19[0x5d];
          if (lVar32 == 0) goto LAB_035574b8;
          *(int *)(lVar32 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar32,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
    fVar43 = ABS(fVar46) + fVar43 * (1.0 - fVar45) * fVar57;
    fVar57 = 1.0;
    if ((uVar2 & 0x18) != 0) {
      fVar57 = DAT_00d38acc;
    }
    fVar46 = fVar57 * in_stack_000000f8._4_4_;
    if (fVar46 < fVar43) {
      uVar50 = (ulong)(uint)fVar64;
      if (((char)unaff_x19[0x5b] != '\0') && (uVar54 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (undefined8 *)&stack0x000008a0;
        in_stack_000017a8 = FUN_0358c15c();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
          lVar32 = *in_stack_00000170;
          if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x38), lVar25 == 0)) goto LAB_035574b8;
          if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
          fVar46 = *(float *)(unaff_x19 + 0x9b);
          fVar45 = 0.0;
          if ((0.0 < fVar46) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar45 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar45 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar45 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   fStack0000000000000058 *
                   (in_stack_00000050._4_4_ + *(float *)((long)unaff_x19 + 700));
        }
        else {
          lVar32 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar32 == 0) goto LAB_035574b8;
          fVar46 = *(float *)(unaff_x19 + 0x9b);
          fVar45 = *(float *)(unaff_x19 + 0x58) +
                   fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
        }
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar32 = *(long *)(lVar32 + 0x38);
        if (lVar32 == 0) goto LAB_035574b8;
        uVar42 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar32 + 0x18) <= uVar42) ||
           (uVar7 = uVar42 - 1, *(uint *)(lVar32 + 0x18) <= uVar7)) goto LAB_035575f4;
        uVar50 = (ulong)(uint)(fVar45 + *(float *)(unaff_x19 + 0x97));
        fVar60 = (fVar45 + *(float *)(unaff_x19 + 0x97) + fVar46) -
                 *(float *)(lVar32 + (long)(int)uVar42 * unaff_x24 + 0x158);
        if (((bStack0000000000000074 & 1) == 0 &&
             *(short *)(lVar32 + (long)(int)uVar7 * (long)iVar17 + 0x20) == 0xad) &&
           ((fVar60 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0)))) {
          bStack0000000000000074 = 0;
          in_stack_000017c8 = CONCAT44(0x2d,uVar7);
          *unaff_x20 = uVar7;
          unaff_x28 = in_stack_00000170;
          in_stack_000017a8 = in_stack_000017a8 - 1;
          goto LAB_03550bd0;
        }
        if (*(short *)(lVar32 + (long)(int)uVar42 * unaff_x24 + 0x20) == 0xad) {
          bStack0000000000000074 = 1;
          unaff_x28 = in_stack_00000170;
          goto LAB_03550bd0;
        }
        if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar46 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar46 <= fVar45) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar50 = (ulong)(uint)fVar45;
            fVar46 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar45 <= fVar46) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
            goto LAB_03552d44;
LAB_03557594:
            fVar57 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar57 <= DAT_00d38b84) {
              fVar57 = DAT_00d38b84;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar45;
            fVar45 = fVar45 - fVar57;
LAB_03557524:
            fVar52 = fVar45 * 20.0 + 0.5;
            fVar57 = DAT_00d38e60;
            if (fVar52 != INFINITY) {
              fVar57 = (float)(int)fVar52 / 20.0;
            }
            if (fVar57 <= fVar46) {
              fVar57 = fVar46;
            }
LAB_03554658:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar57;
            return;
          }
LAB_03557558:
          fVar52 = fVar43;
          if (0.0 < fVar45) {
            fVar52 = fVar43 / (1.0 - fVar45);
          }
          fVar45 = fVar45 + (fVar43 - fVar57 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar52;
LAB_035574e8:
          if (fVar46 <= fVar45) {
            fVar45 = fVar46;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar45;
          return;
        }
LAB_03552d44:
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar9;
        }
        iVar13 = *(int *)(*(long *)(lVar32 + 0xb8) + 0xe78);
        if (((iVar13 != iStack0000000000000034) && (iVar13 != -1)) &&
           (((bStack0000000000000070 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar32 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_000017a8 = FUN_0358c15c();
          if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x38), lVar32 == 0))
          goto LAB_035574b8;
          uVar42 = *unaff_x20 - 1;
          if (*(uint *)(lVar32 + 0x18) <= uVar42) goto LAB_035575f4;
          iStack0000000000000034 = iVar13;
          if (*(short *)(lVar32 + (long)(int)uVar42 * (long)iVar17 + 0x20) == 0xad) {
            bStack0000000000000074 = 0;
            in_stack_000017c8 = CONCAT44(0x2d,uVar42);
            *unaff_x20 = uVar42;
            unaff_x28 = in_stack_00000170;
            in_stack_000017a8 = in_stack_000017a8 - 1;
            goto LAB_03550bd0;
          }
        }
        if (fStack00000000000000c4 < fVar60) {
          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
          }
          fVar46 = fStack00000000000000c4;
          if ((char)unaff_x19[0x47] != '\0') {
            fVar46 = *(float *)(unaff_x19 + 0x59);
            if ((fVar46 < *(float *)((long)unaff_x19 + 700)) &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar57 = *(float *)((long)unaff_x19 + 700) +
                       ((in_stack_00000018._4_4_ - fVar60) / (float)((int)unaff_x19[0x95] + 1)) /
                       fStack0000000000000058;
              if (fVar57 <= fVar46) {
                fVar57 = fVar46;
              }
LAB_03554b48:
              *(float *)((long)unaff_x19 + 700) = fVar57;
              return;
            }
            fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar46 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar45 < fVar46) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_03557558;
            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar50 = (ulong)(uint)fVar45;
            fVar46 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar46 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_03557594;
          }
          switch((int)unaff_x19[0x5c]) {
          case 0:
          case 2:
          case 4:
            break;
          case 1:
            lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar32 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            lVar25 = *(long *)(lVar32 + 0xb8);
            lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
            if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
              lVar32 = FUN_01a46ff8(lVar32);
            }
            piVar21 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                                *(long *)(*(long *)(*(long *)(lVar32 + 0xc0) + 8) +
                                                         0x80) + 0xa0);
            if (*piVar21 == 0) {
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
            lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar32 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            FUN_0209b778(*(long *)(lVar32 + 0xb8) + 0x11f0,&stack0x000008a0,
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
            in_stack_000017c8 = CONCAT44(3,uVar54);
            unaff_x28 = in_stack_00000170;
            goto LAB_03550bd0;
          case 5:
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
            uVar50 = unaff_d13;
            FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                         in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            goto LAB_03552f38;
          case 6:
            lVar32 = unaff_x19[0x5d];
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar51 = FUN_036cee6c(lVar32,0,0);
            if ((uVar51 & 1) != 0) {
              plVar41 = (long *)unaff_x19[0x5d];
              uVar19 = (**(code **)(*unaff_x19 + 0x518))();
              if (plVar41 == (long *)0x0) goto LAB_035574b8;
              (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
              lVar32 = unaff_x19[0x5d];
              if (lVar32 == 0) goto LAB_035574b8;
              *(int *)(lVar32 + 0x400) = (int)unaff_x19[0x80];
              FUN_0357ee30(lVar32,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
        uVar50 = unaff_d13;
        FUN_0358cbd4(fStack0000000000000058,unaff_d13,fStack00000000000000d4,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000d0,
                     in_stack_00000140,in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
LAB_03552f38:
        bStack0000000000000070 = 1;
        bStack0000000000000074 = 0;
        in_stack_00000068._4_4_ = 1;
        unaff_x28 = in_stack_00000170;
        goto LAB_03550bd0;
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar46 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar45 < fVar46) {
          fVar52 = fVar43 / (1.0 - fVar45);
          if (fVar45 <= 0.0) {
            fVar52 = fVar43;
          }
          fVar45 = fVar45 + (fVar43 - fVar57 * (in_stack_000000f8._4_4_ + DAT_00d38cc4)) / fVar52;
          goto LAB_035574e8;
        }
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar46 = *(float *)(unaff_x19 + 0x4a);
        if (fVar46 < fVar45) {
          fVar57 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar57 <= DAT_00d38b84) {
            fVar57 = DAT_00d38b84;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar45;
          fVar45 = fVar45 - fVar57;
          goto LAB_03557524;
        }
      }
      iVar13 = (int)unaff_x19[0x5c];
      if (iVar13 == 1) {
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar9;
        }
        lVar25 = *(long *)(lVar32 + 0xb8);
        lVar32 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
        if ((*(byte *)(lVar32 + 0x135) & 1) == 0) {
          lVar32 = FUN_01a46ff8(lVar32);
        }
        piVar21 = (int *)thunk_FUN_01a59484(lVar25 + 0x11f0,
                                            *(long *)(*(long *)(*(long *)(lVar32 + 0xc0) + 8) + 0x80
                                                     ) + 0xa0);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*piVar21 == 0) goto LAB_03554580;
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar9;
        }
        FUN_0209b778(*(long *)(lVar32 + 0xb8) + 0x11f0,&stack0x000008a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
        goto LAB_035529dc;
      }
      if (iVar13 == 6) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar32 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar51 = FUN_036cee6c(lVar32,0,0);
        if ((uVar51 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar32 = unaff_x19[0x5d];
          if (lVar32 == 0) goto LAB_035574b8;
          *(int *)(lVar32 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar32,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined1 *)(lVar32 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_000017dc == 9) {
        lVar32 = *in_stack_00000170;
        if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x38), lVar25 == 0)) goto LAB_035574b8;
        uVar14 = *unaff_x20;
        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_035575f4;
        *(undefined1 *)(lVar25 + (long)(int)uVar14 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
        lVar25 = *(long *)(lVar32 + 0x50);
        if (lVar25 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
        goto LAB_03552fcc;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x898))(fVar46,fVar64);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
      }
      uVar14 = *unaff_x20;
      if ((in_stack_00000068._4_4_ & 1) != 0) {
        *(uint *)(in_stack_00000080 + 0x1f0) = uVar14;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar32 = *(long *)(unaff_x19[0x6d] + 0x50), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068._4_4_ = 0;
      *(float *)(lVar32 + 0x60) = fVar63;
      *(float *)(lVar32 + 100) = fVar62;
    }
  }
  else {
    if (((in_stack_000017dc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar43 = (float)uVar50;
      fVar57 = 0.0;
      if ((0.0 < fVar43) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar50 = (ulong)(uint)fStack00000000000000c4;
      if (fStack00000000000000c4 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar43)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar54;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_000017a8 = FUN_0358c15c();
        lVar32 = unaff_x19[0x5d];
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar51 = FUN_036cee6c(lVar32,0,0);
        if ((uVar51 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x518))();
          if (plVar41 == (long *)0x0) goto LAB_035574b8;
          (**(code **)(*plVar41 + 0x528))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x530));
          lVar32 = unaff_x19[0x5d];
          if (lVar32 == 0) goto LAB_035574b8;
          *(int *)(lVar32 + 0x400) = (int)unaff_x19[0x80];
          FUN_0357ee30(lVar32,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
        lVar32 = *in_stack_00000170;
        if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x50), lVar25 == 0)) goto LAB_035574b8;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
        *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar50 = FUN_026b97f8(in_stack_000017dc,0);
      if ((uVar50 & 1) != 0) goto LAB_03552b54;
    }
    if (in_stack_000017dc == 0xa0) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x50), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
      *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
    }
  }
  unaff_x29 = (undefined8 *)&stack0x000008a0;
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_000017dc == 0x2d || (!bVar8)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar57 = *(float *)(unaff_x19 + 0x3d);
    iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
    fVar63 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
    lVar32 = unaff_x19[0xca];
    fVar43 = fStack0000000000000098;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar43 = 1.0;
    }
    if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto LAB_035574b8;
    fVar46 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar32 + 0x2c);
    fVar62 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
    fVar64 = *_fStack00000000000000a8;
    fVar62 = fVar46 * (fVar57 / (float)iVar13) * fVar63 * fVar43 * fVar45 * fVar62;
    fVar57 = *_fStack00000000000000a0;
    if ((in_stack_000017dc == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x38), lVar32 == 0))
      goto LAB_035574b8;
      uVar14 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar43 = *(float *)(lVar32 + (long)(int)uVar14 * (long)iVar17 + 0x60);
      iVar13 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
      fVar46 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
      lVar32 = unaff_x19[0xca];
      fVar63 = fStack0000000000000098;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar63 = 1.0;
      }
      if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto LAB_035574b8;
      fVar45 = *(float *)((long)unaff_x19 + 0x404);
      fVar60 = *(float *)(lVar32 + 0x2c);
      fVar62 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
      if ((*in_stack_00000170 == 0) || (lVar32 = *(long *)(*in_stack_00000170 + 0x50), lVar32 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar64 = *(float *)(lVar32 + 0x60);
      fVar57 = *(float *)(lVar32 + 100);
      fVar62 = fVar45 * (fVar43 / (float)iVar13) * fVar46 * fVar63 * fVar60 * fVar62;
    }
    fVar46 = *(float *)(unaff_x19 + 0x9b);
    fVar43 = 0.0;
    fVar63 = 0.0;
    if ((0.0 < fVar46) && (fVar63 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar63 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar60 = *(float *)(unaff_x19 + 0x97);
    fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar32 = *(long *)(unaff_x19[0xca] + 0x20), lVar32 == 0))
      goto LAB_035574b8;
      FUN_03776e6c(&stack0x000008a0,lVar32,0);
      fVar43 = (float)FUN_03776cb4(&stack0x00001700,0);
    }
    puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
    fVar67 = *(float *)(unaff_x19 + 0x6c);
    fVar57 = (fStack000000000000009c - fVar64) - fVar57;
    bVar11 = true;
    if ((fVar67 <= fVar57) && (bVar11 = false, !NAN(fVar67))) {
      bVar11 = fVar67 == -1.0;
    }
    if (!bVar11) {
      fVar57 = fVar67;
    }
    fVar64 = 1.0;
    if ((uVar2 & 0x18) != 0) {
      fVar64 = DAT_00d38acc;
    }
    if (((fVar60 - (fVar47 - fVar46)) + fVar63 < fStack00000000000000c4) &&
       (ABS(fVar45) + fVar62 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar64 * fVar57)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0358c4f0();
      lVar32 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000528,(void *)(lVar32 + 0x788),0x378);
      FUN_0209b210(lVar32 + 0x11f0,&stack0x00000528,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
    }
  }
  lVar32 = *in_stack_00000170;
  if (lVar32 == 0) goto LAB_035574b8;
  lVar25 = *(long *)(lVar32 + 0x38);
  unaff_d13 = (ulong)(uint)fVar52;
  if (lVar25 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  uVar14 = *(uint *)(unaff_x19 + 0x95);
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar25 + 100) = uVar14;
  *(int *)(lVar25 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar8) ||
     ((in_stack_000017dc < 0xe && ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) != 0)))) {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
    if (*(int *)(lVar32 + (long)(int)uVar14 * 0x5c + 0x24) == 1) goto LAB_0355346c;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto LAB_035574b8;
LAB_0355346c:
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar32 + (long)(int)uVar14 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_000017dc == 9) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar57 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar63 = *(float *)(unaff_x19 + 200);
    fVar43 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
    fVar52 = fVar52 * fVar57 * fVar43;
    fVar43 = fVar52 * (float)(int)(fVar63 / fVar52);
    uVar50 = (ulong)(uint)fVar43;
    if (fVar43 <= fVar63) {
      fVar43 = fVar63 + fVar52;
    }
LAB_03553678:
    *(float *)(unaff_x19 + 200) = fVar43;
  }
  else {
    if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar57 = 1.0;
        }
        else {
          fVar57 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
        }
        fVar43 = *(float *)(unaff_x19 + 200);
        fVar63 = (float)FUN_03776cb4(&stack0x00001790,0);
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar62 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
        fVar43 = fVar43 + fVar62 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fVar52 * (fStack000000000000012c + fVar57 * fVar63) +
                                   fStack00000000000000d4 *
                                   (fStack00000000000000d0 +
                                   in_stack_00000140 + *(float *)(unaff_x19[0x20] + 0x1ac)));
        *(float *)(unaff_x19 + 200) = fVar43;
        if (in_stack_000017dc != 0x200b) goto LAB_03553664;
        goto LAB_03553668;
      }
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar52 * fStack000000000000012c +
               fStack00000000000000d4 *
               (fStack00000000000000d0 + in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)));
      uVar50 = (ulong)(uint)fVar43;
      fVar43 = *(float *)(unaff_x19 + 200) - fVar43;
      *(float *)(unaff_x19 + 200) = fVar43;
      if ((in_stack_000017dc != 0x200b) && (unaff_w27 == 0)) goto LAB_0355367c;
      fVar57 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar50 = (ulong)(uint)fVar57;
      fVar43 = fVar43 - fVar57;
      goto LAB_03553678;
    }
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar62 = *(float *)(unaff_x19 + 200);
    fVar43 = fVar62 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar44) +
                      fStack00000000000000d4 * (in_stack_00000140 + *(float *)(*unaff_x21 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 200) = fVar43;
    if (in_stack_000017dc == 0x200b) {
LAB_03553668:
      fVar57 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar50 = (ulong)(uint)fVar57;
      fVar43 = fVar43 + fVar57;
      goto LAB_03553678;
    }
LAB_03553664:
    uVar50 = (ulong)(uint)fVar62;
    if (unaff_w27 != 0) goto LAB_03553668;
  }
LAB_0355367c:
  lVar32 = *in_stack_00000170;
  if ((lVar32 == 0) || (lVar29 = *(long *)(lVar32 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  uVar2 = *unaff_x20;
  uVar14 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar14 <= uVar2) goto LAB_035575f4;
  *(float *)(lVar29 + (long)(int)uVar2 * unaff_x24 + 0x144) = fVar43;
  if ((int)in_stack_000017dc < 0xd) {
    if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3)) goto LAB_0355371c;
LAB_03553700:
    if ((bool)(bVar8 & in_stack_000017dc == 0x2d)) goto LAB_0355371c;
  }
  else {
    if (in_stack_000017dc - 0x2028 < 2) goto LAB_0355371c;
    if (in_stack_000017dc != 0xd) goto LAB_03553700;
    uVar50 = 0;
    *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
  }
  unaff_x28 = in_stack_00000170;
  uVar54 = in_stack_000017dc;
  if ((float)uVar2 == in_stack_00000088._4_4_) goto LAB_0355371c;
LAB_03553c8c:
  uVar2 = *unaff_x20;
  if (uVar14 <= uVar2) goto LAB_035575f4;
  if (*(char *)(lVar29 + (long)(int)uVar2 * unaff_x24 + 0x194) != '\0') {
    lVar29 = lVar29 + (long)(int)uVar2 * unaff_x24;
    uVar51 = *(ulong *)(lVar29 + 0x11c);
    uVar50 = *(ulong *)(in_stack_00000080 + 0x230);
    *(ulong *)(in_stack_00000080 + 0x230) =
         uVar50 ^ (uVar50 ^ uVar51) &
                  ~CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar51 >> 0x20)),
                            -(uint)((float)uVar50 < (float)uVar51));
    uVar51 = *(ulong *)(in_stack_00000080 + 0x238);
    uVar50 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000080 + 0x238) =
         uVar51 ^ (uVar51 ^ uVar50) &
                  ~CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar51 >> 0x20)),
                            -(uint)((float)uVar50 < (float)uVar51));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar54 || ((1 << (ulong)(uVar54 & 0x1f) & 0x2c00U) == 0)))) {
    lVar25 = *(long *)(lVar32 + 0x58);
    if (lVar25 == 0) goto LAB_035574b8;
    iVar13 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar25 + 0x18) < iVar13) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8((long *)(lVar32 + 0x58),iVar13,1,*(undefined8 *)OVRPlugin_MeshType_TypeInfo);
      lVar32 = *unaff_x28;
      if (lVar32 == 0) goto LAB_035574b8;
    }
    lVar25 = *(long *)(lVar32 + 0x58);
    if (lVar25 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(unaff_x19 + 0x96);
    lVar35 = (long)(int)uVar54;
    uVar14 = *(uint *)(lVar25 + 0x18);
    unaff_x29 = (undefined8 *)&stack0x000008a0;
    if (uVar14 <= uVar54) goto LAB_035575f4;
    lVar29 = lVar25 + lVar35 * 0x14;
    fVar52 = *(float *)(lVar29 + 0x30);
    uVar50 = (ulong)(uint)fVar52;
    *(undefined4 *)(lVar29 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar52 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar57 = fVar52;
    }
    *(float *)(lVar29 + 0x30) = fVar57;
    uVar2 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar2 == 0 && uVar54 == 0) {
      *(uint *)(lVar25 + (ulong)uVar54 * 0x14 + 0x20) = uVar2;
    }
    else {
      uVar42 = uVar2 - 1;
      if (0 < (int)uVar2) {
        lVar32 = *(long *)(lVar32 + 0x38);
        if (lVar32 == 0) goto LAB_035574b8;
        if (*(uint *)(lVar32 + 0x18) <= uVar42) goto LAB_035575f4;
        if (uVar54 != *(uint *)(lVar32 + (ulong)uVar42 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar14 <= uVar54 - 1) goto LAB_035575f4;
          *(uint *)(lVar25 + 0x20 + (long)(int)(uVar54 - 1) * 0x14 + 4) = uVar42;
          *(uint *)(lVar25 + 0x20 + lVar35 * 0x14) = uVar2;
          goto LAB_03553d10;
        }
      }
      if ((float)uVar2 == in_stack_00000088._4_4_) {
        *(float *)(lVar25 + lVar35 * 0x14 + 0x24) = in_stack_00000088._4_4_;
      }
    }
  }
LAB_03553d10:
  puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_035542ac;
  if ((unaff_w27 == 0) &&
     (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000070 & 1) != 0) goto UnityEngine_Animator__set_animatePhysics;
      goto LAB_035542a8;
    }
LAB_03553ef0:
    if (((((0x2bfd < in_stack_000017dc - 0xac01) && (0xfd < in_stack_000017dc - 0x1101)) &&
         (0x1d < in_stack_000017dc - 0xa961)) || (uVar51 = FUN_03597a54(0), (uVar51 & 1) != 0)) &&
       ((((0xed < in_stack_000017dc - 0xff01 && (0x1d < in_stack_000017dc - 0xfe31)) &&
         (0x717d < in_stack_000017dc - 0x2e81)) && (0x1fd < in_stack_000017dc - 0xf901))))
    goto LAB_03553f78;
    lVar32 = FUN_035978e8(0);
    if ((lVar32 == 0) || (*(long *)(lVar32 + 0x10) == 0)) goto LAB_035574b8;
    uVar14 = FUN_0219c130(*(long *)(lVar32 + 0x10),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
      in_stack_000008a0 = in_stack_000017dc;
      if ((uVar14 & 1) == 0) {
LAB_03554270:
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0358c4f0();
        goto LAB_035542a8;
      }
LAB_035541dc:
      if (uVar18 != unaff_w22 || ((bStack0000000000000070 ^ 0xff) & 1) != 0) goto LAB_035542ac;
      if (unaff_w27 == 0) goto LAB_0355422c;
      goto UnityEngine_Animator__get_bodyPositionInternal;
    }
    lVar32 = FUN_035978e8(0);
    if (((lVar32 == 0) || (*unaff_x28 == 0)) || (lVar25 = *(long *)(*unaff_x28 + 0x38), lVar25 == 0)
       ) goto LAB_035574b8;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
    if (*(long *)(lVar32 + 0x18) == 0) goto LAB_035574b8;
    in_stack_000008a0 =
         (uint)*(ushort *)(lVar25 + (long)(int)(*unaff_x20 + 1) * (long)iVar17 + 0x20);
    uVar51 = FUN_0219c130(*(long *)(lVar32 + 0x18),&stack0x000008a0,
                          *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if ((uVar14 & 1) != 0) goto LAB_035541dc;
    if ((uVar51 & 1) == 0) goto LAB_03554270;
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
      goto LAB_03553ef0;
    }
LAB_03553f78:
    if ((bStack0000000000000070 & 1) == 0) {
LAB_035542a8:
      bStack0000000000000070 = 0;
      goto LAB_035542ac;
    }
    if (unaff_w27 == 0) {
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
  uVar14 = in_stack_000017dc;
  goto LAB_03550bd0;
LAB_0355371c:
  if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
    fVar57 = *(float *)(unaff_x19 + 0x99);
    fVar52 = *(float *)(unaff_x19 + 0x9a);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar57 = fVar57 - fVar52;
    if (((fStack000000000000005c < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
       (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
      FUN_0358c860(fVar57);
      *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar57;
      *(float *)(unaff_x19 + 0x9b) = fVar57 + *(float *)(unaff_x19 + 0x9b);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar32 = *(long *)puVar9;
      }
      lVar25 = *(long *)(lVar32 + 0xb8);
      if (*(int *)(lVar25 + 0x7ac) == (int)unaff_x19[0x95]) {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        FUN_0209b778(lVar25 + 0x11f0,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar32 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        memcpy((void *)(*(long *)(lVar32 + 0xb8) + 0x788),&stack0x000008a0,0x378);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (*(long *)(lVar32 + 0xb8) + 0x818,0);
        lVar32 = *(long *)(*(long *)puVar9 + 0xb8);
        *(float *)(lVar32 + 0x7bc) = fVar57 + *(float *)(lVar32 + 0x7bc);
        *(float *)(lVar32 + 0x800) = fVar57 + *(float *)(lVar32 + 0x800);
        memcpy(&stack0x000001b0,(void *)(lVar32 + 0x788),0x378);
        FUN_0209b210(lVar32 + 0x11f0,&stack0x000001b0,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo)
        ;
      }
    }
  }
  param_3 = *(float *)(unaff_x19 + 0x9b);
  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
  param_2 = *(float *)((long)unaff_x19 + 0x4cc) - param_3;
  fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
  if (param_2 <= *(float *)((long)unaff_x19 + 0x4c4)) {
    fVar57 = param_2;
  }
  *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
  param_4 = *(float *)(unaff_x19 + 0x99);
  if (in_stack_000017d4 == '\0') {
    in_stack_000017d8 = fVar57;
  }
  if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
     (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
      ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
    in_stack_000017d4 = '\x01';
  }
  in_x10 = *in_stack_00000170;
  if ((in_x10 == 0) || (param_1 = *(long *)(in_x10 + 0x50), param_1 == 0)) goto LAB_035574b8;
  in_x9 = (long)(int)*(uint *)(unaff_x19 + 0x95);
  if (*(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
  in_w11 = (int)unaff_x19[0x93];
  in_x12 = param_1 + in_x9 * 0x5c;
  unaff_x28 = in_stack_00000170;
  goto code_r0x03553918;
LAB_03554e78:
  uVar14 = uVar18 - 1;
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
  if ((*unaff_x28 == 0) || (lVar35 = *(long *)(*unaff_x28 + 0x50), lVar35 == 0)) goto LAB_035574b8;
  lVar36 = (long)(int)uVar14;
  lVar29 = lVar32 + lVar36 * 0x178;
  uVar2 = *(uint *)(lVar29 + 100);
  if (*(uint *)(lVar35 + 0x18) <= uVar2) goto LAB_035575f4;
  lVar39 = (long)(int)uVar2;
  lVar35 = lVar35 + lVar39 * 0x5c;
  lVar33 = *(long *)(lVar29 + 0x38);
  uVar4 = *(ushort *)(lVar29 + 0x20);
  uVar7 = *(uint *)(lVar35 + 0x3c);
  uVar42 = *(uint *)(lVar35 + 0x68);
  iVar3 = *(int *)(lVar35 + 0x20);
  iVar15 = *(int *)(lVar35 + 0x28);
  iVar16 = *(int *)(lVar35 + 0x2c);
  uVar6 = *(uint *)(lVar35 + 0x40);
  lVar29 = (long)(int)uVar6;
  fVar64 = *(float *)(lVar35 + 0x4c);
  fVar60 = *(float *)(lVar35 + 0x54);
  fVar44 = *(float *)(lVar35 + 0x58);
  fVar56 = *(float *)(lVar35 + 0x5c);
  fVar47 = *(float *)(lVar35 + 0x60);
  fVar67 = *(float *)(lVar35 + 0x6c);
  fVar59 = *(float *)(lVar35 + 0x70);
  fVar46 = *(float *)(lVar35 + 0x74);
  fVar45 = *(float *)(lVar35 + 0x78);
  uVar38 = (uint)uVar4;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar47 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar44;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar47 + fVar56 * 0.5) - fVar44 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar56 + fVar47) - fVar44;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar56 + fVar47;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar42 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar4 < 0xad) {
      if ((uVar4 != 3) && (uVar4 != 10)) goto LAB_03554fac;
    }
    else if ((uVar4 != 0xad) && ((uVar4 != 0x200b && (uVar4 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_035575f4;
      uVar5 = *(undefined2 *)(lVar32 + (long)(int)uVar7 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar50 = FUN_026b8cc4(uVar5,0);
      if ((uVar50 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar44 <= fVar56) && (!bVar1 && uVar42 >> 4 == 0)) {
        in_stack_000000f8._4_4_ = fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar56 + fVar47;
        }
        goto LAB_03555088;
      }
      if (((uVar18 == 1) || (uVar2 != uVar54)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_000000f8._4_4_ = fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_000000f8._4_4_ = fVar56 + fVar47;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fStack0000000000000028 = (float)FUN_026b97f8(uVar38,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1e];
        fVar47 = -fVar44;
        if (cVar24 != '\0') {
          fVar47 = fVar44;
        }
        if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_035575f4;
        iVar16 = (int)*(char *)(lVar32 + (long)(int)uVar7 * 0x178 + 0x194) +
                 (-iVar3 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar44 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar44 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_03556e74:
          fVar44 = 1.0 - fVar44;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar50 = FUN_026b97f8(uVar38,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar50 & 1) != 0) goto LAB_03556e74;
          }
          iVar16 = (iVar3 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
        }
        fVar44 = ((fVar56 + fVar47) * fVar44) / (float)iVar16;
        if (cVar24 == '\0') {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar44;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar44;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar44 = fVar67 + fVar46;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar32 + 0x18);
  if (uVar42 <= uVar14) goto LAB_035575f4;
  lVar35 = lVar32 + lVar36 * 0x178;
  fVar56 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar44 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar47 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar35 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar32 + lVar36 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar62 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar32 + lVar36 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar62 = 1.0;
    break;
  case 1:
    fVar45 = *(float *)(lVar32 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar32 + lVar36 * 0x178;
      fVar46 = (in_stack_000000f8._4_4_ + fVar45) - *(float *)(in_stack_00000080 + 0x230);
      fVar45 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar27 = lVar32 + lVar36 * 0x178;
    fVar46 = fVar46 - fVar67;
    *(float *)(lVar27 + 0x84) = fVar62 + (fVar45 - fVar67) / fVar46;
    *(float *)(lVar27 + 0xac) = fVar62 + (*(float *)(lVar27 + 0x98) - fVar67) / fVar46;
    *(float *)(lVar27 + 0xd4) = fVar62 + (*(float *)(lVar27 + 0xc0) - fVar67) / fVar46;
    fVar62 = fVar62 + (*(float *)(lVar27 + 0xe8) - fVar67) / fVar46;
    break;
  case 2:
    lVar27 = lVar32 + lVar36 * 0x178;
    fVar45 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar46 = (in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar27 + 0x84) = fVar62 + fVar46 / fVar45;
    *(float *)(lVar27 + 0xac) =
         fVar62 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar62 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar62 = fVar62 + ((in_stack_000000f8._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar32 + lVar36 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar32 + lVar36 * 0x178;
      fVar45 = fVar45 - fVar59;
      fVar46 = fVar62 + (*(float *)(lVar27 + 0x74) - fVar59) / fVar45;
      fVar45 = fVar62 + (*(float *)(lVar27 + 0x9c) - fVar59) / fVar45;
      *(float *)(lVar27 + 0x88) = fVar46;
      *(float *)(lVar27 + 0xb0) = fVar45;
      *(float *)(lVar27 + 0xd8) = fVar46;
      *(float *)(lVar27 + 0x100) = fVar45;
      break;
    case 2:
      lVar27 = lVar32 + lVar36 * 0x178;
      fVar46 = fVar62 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar46;
      fVar45 = *(float *)(unaff_x19 + 0x9c);
      fVar67 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar46;
      fVar46 = fVar62 + (*(float *)(lVar27 + 0x9c) - fVar45) / (fVar67 - fVar45);
      *(float *)(lVar27 + 0xb0) = fVar46;
      *(float *)(lVar27 + 0x100) = fVar46;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar32 + 0x18);
    }
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar27 = lVar32 + lVar36 * 0x178;
    fVar46 = *(float *)(lVar27 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar46) * 0.5;
    fVar67 = fVar62 + *(float *)(lVar27 + 0x88) * fVar46 + fVar45;
    fVar62 = fVar62 + fVar45 + *(float *)(lVar27 + 0xb0) * fVar46;
    *(float *)(lVar27 + 0x84) = fVar67;
    *(float *)(lVar27 + 0xac) = fVar67;
    *(float *)(lVar27 + 0xd4) = fVar62;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar32 + lVar36 * 0x178 + 0xfc) = fVar62;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar27 = lVar32 + lVar36 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar14 < uVar42) {
      lVar27 = lVar32 + lVar36 * 0x178;
      fVar64 = fVar64 - fVar60;
      fVar62 = (*(float *)(lVar27 + 0x74) - fVar60) / fVar64;
      fVar64 = (*(float *)(lVar27 + 0x9c) - fVar60) / fVar64;
      *(float *)(lVar27 + 0x88) = fVar62;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar27 = lVar32 + lVar36 * 0x178;
    fVar62 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar62;
    fVar64 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar27 + 0xb0) = fVar64;
    *(float *)(lVar27 + 0xd8) = fVar64;
    *(float *)(lVar27 + 0x100) = fVar62;
    break;
  case 3:
    if (uVar42 <= uVar14) goto LAB_035575f4;
    lVar27 = lVar32 + lVar36 * 0x178;
    fVar64 = *(float *)(lVar27 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar64) * 0.5;
    fVar62 = *(float *)(lVar27 + 0x84) / fVar64 + fVar46;
    fVar46 = fVar46 + *(float *)(lVar27 + 0xd4) / fVar64;
    *(float *)(lVar27 + 0x88) = fVar62;
    *(float *)(lVar27 + 0xb0) = fVar46;
    *(float *)(lVar27 + 0x100) = fVar62;
    *(float *)(lVar27 + 0xd8) = fVar46;
  }
  if (uVar42 <= uVar14) goto LAB_035575f4;
  lVar27 = lVar32 + lVar36 * 0x178;
  fVar62 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar32 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar62 = -fVar62;
  }
  fVar46 = fVar57;
  if (((iVar13 == 2) || (fVar46 = fVar43, iVar13 == 1)) || (fVar46 = fVar57 / fVar52, iVar13 == 0))
  {
    fVar62 = fVar46 * fVar62;
  }
  lVar27 = lVar32 + lVar36 * 0x178;
  fVar64 = *(float *)(lVar27 + 0x88);
  fVar45 = *(float *)(lVar27 + 0x84);
  fVar46 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar46 = (float)(int)fVar45;
  }
  fVar67 = *(float *)(lVar27 + 0xd4);
  fVar59 = *(float *)(lVar27 + 0xd8);
  fVar60 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar60 = (float)(int)fVar64;
  }
  uVar49 = FUN_03591d3c(fVar45 - fVar46,fVar64 - fVar60);
  *(undefined4 *)(lVar27 + 0x84) = uVar49;
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar59 = fVar59 - fVar60;
  *(float *)(lVar27 + 0x88) = fVar62;
  uVar49 = FUN_03591d3c(fVar45 - fVar46,fVar59);
  *(undefined4 *)(lVar32 + lVar36 * 0x178 + 0xac) = uVar49;
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
  fVar67 = fVar67 - fVar46;
  *(float *)(lVar32 + lVar36 * 0x178 + 0xb0) = fVar62;
  fVar46 = (float)FUN_03591d3c(fVar67,fVar59);
  *(float *)(lVar27 + 0xd4) = fVar46;
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_035575f4;
  *(float *)(lVar27 + 0xd8) = fVar62;
  uVar49 = FUN_03591d3c(fVar67,fVar64 - fVar60);
  *(undefined4 *)(lVar32 + lVar36 * 0x178 + 0xfc) = uVar49;
  uVar42 = (uint)*(undefined8 *)(lVar32 + 0x18);
  if (uVar42 <= uVar14) goto LAB_035575f4;
  *(float *)(lVar32 + lVar36 * 0x178 + 0x100) = fVar62;
LAB_0355574c:
  if (((int)uVar14 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar14) goto LAB_035575f4;
      lVar35 = lVar32 + lVar36 * 0x178;
      *(ulong *)(lVar35 + 0x70) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar35 + 0x70));
      *(float *)(lVar35 + 0x78) = fVar47 + *(float *)(lVar35 + 0x78);
      *(ulong *)(lVar35 + 0x98) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar35 + 0x98));
      *(float *)(lVar35 + 0xa0) = fVar47 + *(float *)(lVar35 + 0xa0);
      *(ulong *)(lVar35 + 0xc0) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0xc0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar35 + 0xc0));
      *(float *)(lVar35 + 200) = fVar47 + *(float *)(lVar35 + 200);
      *(ulong *)(lVar35 + 0xe8) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0xe8) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar35 + 0xe8));
      *(float *)(lVar35 + 0xf0) = fVar47 + *(float *)(lVar35 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar2 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar14 < uVar42) {
        if (*(uint *)(lVar32 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar35 = lVar32 + lVar36 * 0x178;
          *(ulong *)(lVar35 + 0x70) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar35 + 0x70));
          *(float *)(lVar35 + 0x78) = fVar47 + *(float *)(lVar35 + 0x78);
          *(ulong *)(lVar35 + 0x98) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar35 + 0x98));
          *(float *)(lVar35 + 0xa0) = fVar47 + *(float *)(lVar35 + 0xa0);
          *(ulong *)(lVar35 + 0xc0) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0xc0) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar35 + 0xc0));
          *(float *)(lVar35 + 200) = fVar47 + *(float *)(lVar35 + 200);
          *(ulong *)(lVar35 + 0xe8) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0xe8) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar35 + 0xe8));
          *(float *)(lVar35 + 0xf0) = fVar47 + *(float *)(lVar35 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar42 <= uVar14) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar42 = *(uint *)(lVar32 + 0x18);
  }
  puVar9 = PTR_DAT_03cbded8;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar27 = lVar32 + lVar36 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar49;
  if (uVar42 <= uVar14) goto LAB_035575f4;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  lVar27 = lVar32 + lVar36 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar49;
  uVar49 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar49;
  *(undefined1 *)(lVar35 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar15 == 0) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar30)();
  }
  else if (iVar15 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar35 = lVar35 + lVar36 * 0x178;
  uVar19 = *(undefined8 *)(lVar35 + 0x11c);
  *(undefined8 *)(lVar35 + 0x11c) =
       CONCAT44(fVar44 + (float)((ulong)uVar19 >> 0x20),fVar56 + (float)uVar19);
  *(float *)(lVar35 + 0x124) = fVar47 + *(float *)(lVar35 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar35 = lVar35 + lVar36 * 0x178;
  *(ulong *)(lVar35 + 0x110) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x110) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar35 + 0x110));
  *(float *)(lVar35 + 0x118) = fVar47 + *(float *)(lVar35 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar35 = lVar35 + lVar36 * 0x178;
  *(ulong *)(lVar35 + 0x128) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x128) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar35 + 0x128));
  *(float *)(lVar35 + 0x130) = fVar47 + *(float *)(lVar35 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
  lVar35 = lVar35 + lVar36 * 0x178;
  *(float *)(lVar35 + 0x134) = fVar56 + *(float *)(lVar35 + 0x134);
  *(ulong *)(lVar35 + 0x138) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar35 + 0x138) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar35 + 0x138));
  lVar35 = *in_stack_00000170;
  if ((lVar35 == 0) || (lVar27 = *(long *)(lVar35 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar42 = *(uint *)(lVar27 + 0x18);
  if (uVar42 <= uVar14) goto LAB_035575f4;
  lVar34 = lVar27 + lVar36 * 0x178;
  uVar51 = CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar46 = fVar44 + *(float *)(lVar34 + 0x150);
  uVar53 = (ulong)(uint)fVar46;
  uVar55 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar46;
  *(ulong *)(lVar34 + 0x140) = uVar51;
  *(ulong *)(lVar34 + 0x148) = uVar55;
  if (uVar2 == uVar54) {
    uVar54 = *unaff_x20 - 1;
    if (uVar14 == uVar54) goto LAB_03555b44;
  }
  else {
    lVar35 = *(long *)(lVar35 + 0x50);
    if (lVar35 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar35 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar34 = (long)(int)uVar54;
    lVar37 = lVar35 + lVar34 * 0x5c;
    uVar55 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar46 = fVar44 + *(float *)(lVar37 + 0x54);
    uVar51 = (ulong)(uint)fVar46;
    fVar64 = fVar56 + *(float *)(lVar37 + 0x58);
    uVar53 = (ulong)(uint)fVar64;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar44 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar46;
    *(float *)(lVar37 + 0x58) = fVar64;
    if (uVar42 <= *(uint *)(lVar37 + 0x34)) goto LAB_035575f4;
    uVar49 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar35 = lVar35 + lVar34 * 0x5c;
    *(float *)(lVar35 + 0x70) = fVar46;
    *(undefined4 *)(lVar35 + 0x6c) = uVar49;
    lVar35 = *in_stack_00000170;
    if ((lVar35 == 0) || (lVar27 = *(long *)(lVar35 + 0x50), lVar27 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar35 = *(long *)(lVar35 + 0x38);
    if (lVar35 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar27 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar35 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar27 = lVar27 + lVar34 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar54 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar54 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar14 == uVar54) {
      lVar35 = *in_stack_00000170;
      if ((lVar35 == 0) || (lVar27 = *(long *)(lVar35 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar34 = lVar27 + lVar39 * 0x5c;
      uVar55 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar51 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar46 = fVar44 + *(float *)(lVar34 + 0x54);
      fVar56 = fVar56 + *(float *)(lVar34 + 0x58);
      uVar53 = (ulong)(uint)fVar56;
      *(ulong *)(lVar34 + 0x4c) = uVar51;
      *(float *)(lVar34 + 0x54) = fVar46;
      *(float *)(lVar34 + 0x58) = fVar56;
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_035575f4;
      uVar49 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar46;
      *(undefined4 *)(lVar27 + 0x6c) = uVar49;
      lVar35 = *in_stack_00000170;
      if ((lVar35 == 0) || (lVar27 = *(long *)(lVar35 + 0x50), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar27 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar35 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar54 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar50 = FUN_026b82c4(uVar38,0);
  if (((((uVar50 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar11) {
      if (((uVar18 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar32 + 0x18) - 1))) &&
         (((int)uVar14 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar32 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
        uVar5 = *(undefined2 *)(lVar32 + lVar25 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar50 = FUN_026b82c4(uVar5,0);
        if ((uVar50 & 1) != 0) {
          if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_035575f4;
          uVar5 = *(undefined2 *)(lVar32 + lVar25 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar50 = FUN_026b82c4(uVar5,0);
          if ((uVar50 & 1) != 0) goto LAB_03555d68;
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
      uVar50 = FUN_026b81f8(uVar38,0);
      if ((uVar50 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar50 = FUN_026b63d8(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar50 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar14 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar50 = FUN_026b82c4(uVar38,0);
      iVar15 = iStack0000000000000128;
      if ((uVar50 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar18 - 2;
    }
    lVar35 = *in_stack_00000170;
    if (lVar35 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar35 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar54 = *(uint *)(lVar35 + 0x24);
    iVar16 = *(int *)(lVar27 + 0x18);
    if (iVar16 < (int)(uVar54 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar35 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar35 = *in_stack_00000170;
      if (lVar35 == 0) goto LAB_035574b8;
    }
    lVar35 = *(long *)(lVar35 + 0x40);
    if (lVar35 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar35 + 0x18) <= uVar54) goto LAB_035575f4;
    lVar35 = lVar35 + (long)(int)uVar54 * 0x18;
    *(long **)(lVar35 + 0x20) = unaff_x19;
    *(float *)(lVar35 + 0x28) = fStack0000000000000158;
    *(int *)(lVar35 + 0x2c) = iVar15;
    *(int *)(lVar35 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar35 = unaff_x19[0x6d];
    if (lVar35 == 0) goto LAB_035574b8;
    lVar27 = *(long *)(lVar35 + 0x50);
    *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_035575f4;
    lVar27 = lVar27 + lVar39 * 0x5c;
    bVar11 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar11) {
      fStack0000000000000158 = (float)uVar14;
    }
    if (uVar14 == *unaff_x20 - 1) {
      lVar35 = *in_stack_00000170;
      if (lVar35 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar35 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar54 = *(uint *)(lVar35 + 0x24);
      iVar15 = *(int *)(lVar27 + 0x18);
      if (iVar15 < (int)(uVar54 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar35 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar35 = *in_stack_00000170;
        if (lVar35 == 0) goto LAB_035574b8;
      }
      lVar35 = *(long *)(lVar35 + 0x40);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar54) goto LAB_035575f4;
      lVar35 = lVar35 + (long)(int)uVar54 * 0x18;
      *(long **)(lVar35 + 0x20) = unaff_x19;
      *(float *)(lVar35 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar35 + 0x2c) = uVar14;
      *(uint *)(lVar35 + 0x30) = uVar18 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar35 = unaff_x19[0x6d];
      if (lVar35 == 0) goto LAB_035574b8;
      lVar27 = *(long *)(lVar35 + 0x50);
      *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_035575f4;
      lVar27 = lVar27 + lVar39 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_03555d68:
    bVar11 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
  goto LAB_035574b8;
  uVar54 = *(uint *)(lVar35 + 0x18);
  if (uVar54 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar35 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar12) {
LAB_03555da0:
      if (uVar54 <= uVar18 - 2) goto LAB_035575f4;
      lVar39 = *unaff_x19;
      uVar54 = *(uint *)(lVar35 + lVar25 + -0x330);
      uVar49 = *(undefined4 *)(lVar35 + lVar25 + -0x2f8);
LAB_035562ec:
      pcVar30 = *(code **)(lVar39 + 0x8d8);
LAB_035562f4:
      uVar55 = (ulong)uVar54;
      uVar51 = (ulong)(uint)_bStack0000000000000070;
      uVar53 = (ulong)_bStack0000000000000074;
      (*pcVar30)(fStack0000000000000078,uVar51,uVar53,uVar55,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar49);
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar9;
      }
LAB_03556348:
      bVar12 = false;
      fVar63 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar35 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar12 = false;
    }
  }
  else {
    lVar35 = lVar35 + lVar36 * 0x178;
    iVar15 = *(int *)(lVar35 + 0x68);
    *(int *)(lVar35 + 0x16c) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar50 = FUN_026b63d8(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar50 & 1) == 0)) {
      lVar35 = *in_stack_00000170;
      if ((lVar35 == 0) || (lVar39 = *(long *)(lVar35 + 0x38), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar14) goto LAB_035575f4;
      fVar46 = *(float *)(lVar39 + lVar36 * 0x178 + 0x160);
      if (fVar63 <= fVar46) {
        fVar63 = fVar46;
      }
      if (fStack0000000000000100 <= ABS(fVar62)) {
        fStack0000000000000100 = ABS(fVar62);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar35 = *in_stack_00000170;
          if (lVar35 == 0) goto LAB_035574b8;
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar39 + 0x15a8);
      }
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar64 = *(float *)(lVar35 + lVar36 * 0x178 + 0x14c);
      fVar46 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar64 = fVar64 + fVar63 * fVar46;
      if (fVar64 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar64;
      }
      uVar51 = (ulong)(uint)fStack0000000000000104;
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
        uVar50 = FUN_026b97f8(uVar38,0);
        if ((uVar50 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar35 = lVar35 + lVar36 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar35 + 0x160);
      fStack0000000000000078 = *(float *)(lVar35 + 0x11c);
      uVar53 = (ulong)(uint)fStack0000000000000078;
      bVar12 = fVar63 != 0.0;
      fVar46 = in_stack_00000088._4_4_;
      if (bVar12) {
        fVar46 = fVar63;
      }
      fVar63 = fVar46;
      uVar66 = *(undefined4 *)(lVar35 + 0x168);
      _bStack0000000000000074 = 0;
      fVar46 = fVar62;
      if (bVar12) {
        fVar46 = fStack0000000000000100;
      }
      uVar51 = (ulong)(uint)fVar46;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar46;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 != 0))
      {
        if (uVar14 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar36 * 0x178;
          lVar39 = *unaff_x19;
          uVar54 = *(uint *)(lVar35 + 0x128);
          uVar49 = *(undefined4 *)(lVar35 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar14 == uVar7) || ((int)uVar6 <= (int)uVar14)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar50 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 != 0))
      {
        lVar39 = lVar36;
        uVar54 = uVar14;
        if (uVar38 == 0x200b || (uVar50 & 1) != 0) {
          lVar39 = lVar29;
          uVar54 = uVar6;
        }
        if (uVar54 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar39 * 0x178;
          uVar54 = *(uint *)(lVar35 + 0x128);
          uVar49 = *(undefined4 *)(lVar35 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 != 0))
      {
        uVar54 = *(uint *)(lVar35 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar18) goto LAB_035575f4;
      uVar50 = FUN_03567ad8(uVar66,*(undefined4 *)(lVar35 + lVar25),0);
      if ((uVar50 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 != 0)) {
          if (uVar14 < *(uint *)(lVar35 + 0x18)) {
            lVar35 = lVar35 + lVar36 * 0x178;
            uVar55 = (ulong)*(uint *)(lVar35 + 0x128);
            uVar53 = (ulong)_bStack0000000000000074;
            uVar51 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar51,uVar53,uVar55,fStack0000000000000104,0,
                       in_stack_00000088._4_4_,*(undefined4 *)(lVar35 + 0x160));
            puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar35 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar35 = *(long *)puVar9;
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
  if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
  if (lVar33 == 0) goto LAB_035574b8;
  uVar54 = *(uint *)(lVar35 + lVar36 * 0x178 + 400);
  fVar46 = (float)FUN_03776a30(lVar33 + 0x50,0);
  if ((uVar54 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar18 - 2) goto LAB_035575f4;
      uVar54 = *(uint *)(lVar35 + lVar25 + -0x330);
      fVar44 = *(float *)(lVar35 + lVar25 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar55 = (ulong)uVar54;
      uVar51 = (ulong)(uint)fStack000000000000009c;
      uVar53 = (ulong)(uint)fStack0000000000000098;
      (*pcVar30)(fStack00000000000000a0,uVar51,uVar53,uVar55,
                 fStack00000000000000a8 * fVar46 + fVar44,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar35 = *in_stack_00000170;
    if ((lVar35 == 0) || (lVar39 = *(long *)(lVar35 + 0x38), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar14) goto LAB_035575f4;
    *(int *)(lVar39 + lVar36 * 0x178 + 0x174) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
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
        uVar50 = FUN_026b97f8(uVar38,0);
        if ((uVar50 & 1) != 0) goto LAB_035564e8;
        lVar35 = *in_stack_00000170;
        if (lVar35 == 0) goto LAB_035574b8;
      }
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_035575f4;
      lVar35 = lVar35 + lVar36 * 0x178;
      fStack0000000000000040 = *(float *)(lVar35 + 0x60);
      fStack0000000000000038 = *(float *)(lVar35 + 0x14c);
      uVar51 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar35 + 0x11c);
      uVar53 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar35 + 0x160);
      fStack000000000000009c = fVar46 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar54 = *unaff_x20;
    if (uVar54 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 != 0))
      {
        if (uVar14 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar36 * 0x178;
          lVar29 = *unaff_x19;
          uVar54 = *(uint *)(lVar35 + 0x128);
          fVar44 = *(float *)(lVar35 + 0x14c);
LAB_03556654:
          pcVar30 = *(code **)(lVar29 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar14 == uVar7) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar50 = FUN_026b63d8(uVar38,0);
      if ((*in_stack_00000170 != 0) && (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 != 0))
      {
        uVar54 = *(uint *)(lVar35 + 0x18);
        if (uVar38 == 0x200b || (uVar50 & 1) != 0) {
          if (uVar54 <= uVar6) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar29 = lVar36;
          if (uVar54 <= uVar14) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar35 = lVar35 + lVar29 * 0x178;
        fVar44 = *(float *)(lVar35 + 0x14c);
        uVar54 = *(uint *)(lVar35 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar14 < (int)uVar54) {
      lVar35 = *in_stack_00000170;
      if ((lVar35 != 0) && (lVar39 = *(long *)(lVar35 + 0x38), lVar39 != 0)) {
        if (uVar18 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar25 + -0x108) == fStack0000000000000040) {
            fVar64 = *(float *)(lVar39 + lVar25 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar51 = (ulong)(uint)fStack0000000000000038;
            uVar50 = FUN_03567bac(fVar44 + fVar64,uVar51,0);
            if ((uVar50 & 1) != 0) {
              uVar54 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar35 = *in_stack_00000170;
            if (lVar35 == 0) goto LAB_035574b8;
          }
          lVar35 = *(long *)(lVar35 + 0x38);
          if (lVar35 != 0) {
            uVar54 = *(uint *)(lVar35 + 0x18);
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
      iVar15 = FUN_036d3364(lVar33,0);
      if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_035575f4;
      lVar35 = *(long *)(lVar32 + lVar25 + -0x130);
      if (lVar35 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar35,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 != 0))
      {
        if (uVar18 - 2 < *(uint *)(lVar35 + 0x18)) {
          lVar29 = *unaff_x19;
          uVar54 = *(uint *)(lVar35 + lVar25 + -0x330);
          fVar44 = *(float *)(lVar35 + lVar25 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
  goto LAB_035574b8;
  uVar54 = (uint)*(undefined8 *)(lVar35 + 0x18);
  if (uVar54 <= uVar14) goto LAB_035575f4;
  if ((*(byte *)(lVar35 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar53,uVar55,fStack00000000000000d0,uVar53);
    }
LAB_035569b4:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar14) || ((int)unaff_x19[0x66] < (int)uVar2)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar35 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
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
        uVar50 = FUN_026b97f8(uVar38,0);
        if ((uVar50 & 1) != 0) goto LAB_035569b4;
      }
      puVar9 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar29 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar29 = *(long *)puVar9;
      }
      if ((*in_stack_00000170 == 0) || (lVar35 = *(long *)(*in_stack_00000170 + 0x38), lVar35 == 0))
      goto LAB_035574b8;
      uVar54 = (uint)*(undefined8 *)(lVar35 + 0x18);
      if (uVar54 <= uVar14) goto LAB_035575f4;
      lVar29 = *(long *)(lVar29 + 0xb8);
      lVar33 = lVar35 + lVar36 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar29 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar29 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar29 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar29 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar54 <= uVar14) goto LAB_035575f4;
    lVar35 = lVar35 + lVar36 * 0x178;
    fVar46 = *(float *)(lVar35 + 0x128);
    fVar60 = *(float *)(lVar35 + 0x188);
    uVar20 = *(undefined8 *)(lVar35 + 0x17c);
    fVar67 = *(float *)(lVar35 + 0x184);
    uVar19 = *(undefined8 *)(lVar35 + 0x184);
    fVar47 = *(float *)(lVar35 + 0x18c);
    fVar44 = *(float *)(lVar35 + 0x11c);
    fVar45 = *(float *)(lVar35 + 0x148);
    fVar64 = *(float *)(lVar35 + 0x150);
    in_stack_00000178 = uVar20;
    fStack0000000000000180 = fVar67;
    fStack0000000000000184 = fVar60;
    in_stack_00000188 = fVar47;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar50 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar35 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar50 & 1) == 0) {
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar35);
      }
      fVar46 = fVar46 + (float)in_stack_000017b8;
      uVar53 = (ulong)(uint)fVar46;
      fVar44 = fVar44 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar64 = fVar64 - in_stack_000017c0;
      uVar51 = (ulong)(uint)fVar64;
      fVar45 = fVar45 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar55 = (ulong)(uint)fVar45;
      if (fVar44 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar44;
      }
      if (fVar64 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar64;
      }
      if (fStack00000000000000c8 <= fVar46) {
        fStack00000000000000c8 = fVar46;
      }
      if (fStack00000000000000d0 <= fVar45) {
        fStack00000000000000d0 = fVar45;
      }
    }
    else {
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar35);
      }
      fVar44 = (fVar44 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar55 = (ulong)(uint)fVar44;
      if (fVar64 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar64;
      }
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar53 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar45) {
        fStack00000000000000d0 = fVar45;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar53,uVar55,fStack00000000000000d0,uVar53);
      fStack00000000000000dc = fVar64 - fVar47;
      fStack00000000000000c8 = fVar46 + fVar67;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar45 + fVar60;
      fStack00000000000000d8 = fVar44;
      in_stack_000017b0 = uVar20;
      in_stack_000017b8 = uVar19;
      in_stack_000017c0 = fVar47;
    }
    if (((*unaff_x20 == 1) || (uVar14 == uVar7)) || (((int)uVar6 <= (int)uVar14 || (!bVar1)))) {
      uVar53 = (ulong)uStack00000000000000c0;
      uVar51 = (ulong)(uint)fStack00000000000000dc;
      uVar55 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar51,uVar53,uVar55,fStack00000000000000d0,uVar53);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar14 = *unaff_x20;
  lVar25 = lVar25 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar14 <= (int)uVar18;
  unaff_x28 = in_stack_00000170;
  uVar18 = uVar18 + 1;
  uVar54 = uVar2;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar32 = *in_stack_00000170;
  if (lVar32 != 0) {
    iVar17 = uVar2 + 1;
    plVar41 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar32 + 0x18) = uVar14;
    lVar25 = unaff_x19[0xd4];
    *(int *)(lVar32 + 0x2c) = iVar17;
    if ((int)uVar14 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar32 + 0x1c) = (int)lVar25;
    *(float *)(lVar32 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar32 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar50 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar50 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar32 = unaff_x19[0xdf];
    if (lVar32 != 0) {
      (**(code **)(lVar32 + 0x18))
                (*(undefined8 *)(lVar32 + 0x40),*unaff_x28,*(undefined8 *)(lVar32 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar17 != 0x19) {
      lVar32 = unaff_x19[0xe5];
      if (lVar32 == 0) goto LAB_035574b8;
      uVar14 = FUN_03911ee4(lVar32,0);
      FUN_03911f20(lVar32,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar32 = *(long *)(*unaff_x28 + 0x60), lVar32 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar32 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar32 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar32 = *(long *)(unaff_x19[0x6d] + 0x60), lVar32 != 0)) {
        if (*(int *)(lVar32 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar32 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar32 = *(long *)(unaff_x19[0x6d] + 0x60), lVar32 != 0)) {
            if (*(int *)(lVar32 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar32 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar32 = *(long *)(unaff_x19[0x6d] + 0x60), lVar32 != 0)) {
                if (*(int *)(lVar32 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar32 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar32 = *(long *)(unaff_x19[0x6d] + 0x60), lVar32 != 0)) {
                    if (*(int *)(lVar32 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar32 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar19 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar14 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar32 = *unaff_x28;
                              if (lVar32 != 0) {
                                lVar35 = 0;
                                lVar25 = 0;
                                do {
                                  uVar50 = lVar25 + 1;
                                  if ((long)*(int *)(lVar32 + 0x34) <= (long)uVar50)
                                  goto LAB_03554724;
                                  lVar32 = *(long *)(lVar32 + 0x60);
                                  if (lVar32 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                  FUN_03596a20(lVar32 + lVar35 + 0x70,0);
                                  lVar32 = unaff_x19[0xe1];
                                  if (lVar32 == 0) break;
                                  if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                  uVar20 = *(undefined8 *)(lVar32 + lVar25 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_036d35a8(uVar20,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar32 = *(long *)(*unaff_x28 + 0x60), lVar32 == 0))
                                      break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                      FUN_03596b20(lVar32 + lVar35 + 0x70,1,0);
                                    }
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if (lVar32 == 0) break;
                                    lVar32 = UnityEngine_Material__GetColorArray(lVar32,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar29 = *(long *)(*unaff_x28 + 0x60), lVar29 == 0)) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar50) goto LAB_035575f4;
                                    if (lVar32 == 0) break;
                                    FUN_036a460c(lVar32,*(undefined8 *)(lVar29 + lVar35 + 0x80),0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if (lVar32 == 0) break;
                                    lVar32 = UnityEngine_Material__GetColorArray(lVar32,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar29 = *(long *)(*unaff_x28 + 0x60), lVar29 == 0)) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar50) goto LAB_035575f4;
                                    if (lVar32 == 0) break;
                                    FUN_036a4810(lVar32,*(undefined8 *)(lVar29 + lVar35 + 0x98),0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if (lVar32 == 0) break;
                                    lVar32 = UnityEngine_Material__GetColorArray(lVar32,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar29 = *(long *)(*unaff_x28 + 0x60), lVar29 == 0)) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar50) goto LAB_035575f4;
                                    if (lVar32 == 0) break;
                                    FUN_036a48bc(lVar32,*(undefined8 *)(lVar29 + lVar35 + 0xa0),0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if (lVar32 == 0) break;
                                    lVar32 = UnityEngine_Material__GetColorArray(lVar32,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar29 = *(long *)(*unaff_x28 + 0x60), lVar29 == 0)) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar50) goto LAB_035575f4;
                                    if (lVar32 == 0) break;
                                    FUN_036a4e24(lVar32,*(undefined8 *)(lVar29 + lVar35 + 0xa8),0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if ((lVar32 == 0) ||
                                       (lVar32 = UnityEngine_Material__GetColorArray(lVar32,0),
                                       lVar32 == 0)) break;
                                    FUN_036aa280(lVar32,0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if (lVar32 == 0) break;
                                    lVar32 = FUN_037b514c(lVar32,0);
                                    lVar29 = unaff_x19[0xe1];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar29 = *(long *)(lVar29 + lVar25 * 8 + 0x28);
                                    if ((lVar29 == 0) ||
                                       (uVar20 = UnityEngine_Material__GetColorArray(lVar29,0),
                                       lVar32 == 0)) break;
                                    FUN_0390f3a4(lVar32,uVar20,0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if ((lVar32 == 0) ||
                                       (lVar32 = FUN_037b514c(lVar32,0), lVar32 == 0)) break;
                                    FUN_0390eec8(uVar19,uVar51,uVar53,uVar55,lVar32,0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x28);
                                    if ((lVar32 == 0) ||
                                       (lVar32 = FUN_037b514c(lVar32,0), lVar32 == 0)) break;
                                    FUN_0390ed78(lVar32,uVar14 & 1,0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar50) goto LAB_035575f4;
                                    plVar40 = *(long **)(lVar32 + lVar25 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar18 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar32 = *unaff_x28;
                                  lVar25 = lVar25 + 1;
                                  lVar35 = lVar35 + 0x50;
                                } while (lVar32 != 0);
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


