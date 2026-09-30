/*
FUNCTION_NAME: UnityEngine.Android.Permission$$RequestUserPermissions
ENTRY_POINT: 0355130c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 235
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Android_Permission__RequestUserPermissions
               (undefined1 param_1 [16],undefined1 *param_2)

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
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  undefined1 *in_x9;
  long lVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  float *pfVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  long lVar41;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar42;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar43;
  int unaff_w25;
  long *plVar44;
  uint unaff_w26;
  undefined4 unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float unaff_s8;
  float fVar57;
  float fVar58;
  float fVar59;
  float unaff_s9;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float unaff_s12;
  float fVar65;
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
  float in_stack_00000150;
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
  
  uVar18 = param_1._8_8_;
  uVar21 = param_1._0_8_;
code_r0x0355130c:
  *(undefined8 *)(in_x9 + 0xe68) = uVar18;
  *(undefined8 *)(in_x9 + 0xe60) = uVar21;
  fVar45 = (float)FUN_03776c9c(param_2,0);
  if (*(long *)(unaff_x29 + 0x20) != 0) {
    fVar61 = *(float *)(unaff_x29 + 0x2c);
    fVar46 = (float)FUN_03776ea8(*(long *)(unaff_x29 + 0x20),0);
    if (*unaff_x21 != 0) {
      fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
      if (*unaff_x21 != 0) {
        fVar48 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
        if (*unaff_x21 != 0) {
          fVar57 = *(float *)((long)unaff_x19 + 0x404);
          fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          if (unaff_x19[0x20] != 0) {
            fVar49 = in_stack_00000150 * fVar48 * fVar57 * fVar49;
            fVar48 = (fStack000000000000015c / (float)unaff_w25) * unaff_s8 * unaff_s9;
            fVar46 = fVar48 * (unaff_s12 / fVar45) * fVar61 * fVar46;
            fVar48 = fVar48 / fVar46;
            fVar47 = fVar48 * fVar47;
            fVar45 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
            fVar48 = fVar48 * fVar45;
LAB_035513e0:
            uVar20 = (ulong)(uint)fVar46;
            *in_stack_000000e0 = unaff_x29;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (in_stack_000000e0,unaff_x29);
            if ((*unaff_x28 != 0) && (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 != 0)) {
              if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
                lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                *(undefined4 *)(lVar26 + 0x2c) = 1;
                *(float *)(lVar26 + 0x160) = fVar46;
                *(long *)(lVar26 + 0x40) = *in_stack_000000b8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                if ((*unaff_x28 != 0) && (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 != 0)) {
                  if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
                    *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    lVar26 = *unaff_x28;
                    if ((lVar26 != 0) && (lVar29 = *(long *)(lVar26 + 0x38), lVar29 != 0)) {
                      if (*unaff_x20 < *(uint *)(lVar29 + 0x18)) {
                        fStack000000000000015c = 0.0;
                        *(int *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) =
                             (int)unaff_x19[0x24];
                        *(undefined4 *)(unaff_x19 + 0x24) = unaff_w27;
LAB_035514b0:
                        uVar54 = 0;
                        uVar21 = in_stack_000017c8;
                        if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
                          uVar54 = uVar20;
                        }
LAB_035514cc:
                        lVar26 = *(long *)(lVar26 + 0x38);
                        if (lVar26 == 0) goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                        *(short *)(lVar26 + 0x20) = (short)in_stack_000017dc;
                        *(int *)(lVar26 + 0x60) = (int)unaff_x19[0x3d];
                        *(undefined4 *)(lVar26 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
                        goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        *(int *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) =
                             (int)unaff_x19[0x2b];
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
                        goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
                             *(undefined4 *)((long)unaff_x19 + 0x15c);
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
                        goto LAB_035574b8;
                        uVar11 = *unaff_x20;
                        FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
                                     *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                        if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_035575f4;
                        lVar26 = lVar26 + (long)(int)uVar11 * unaff_x24;
                        *(undefined4 *)(lVar26 + 0x18c) = in_stack_000008b0;
                        *(undefined8 *)(lVar26 + 0x184) = in_stack_000008a8;
                        *(ulong *)(lVar26 + 0x17c) = CONCAT44(in_stack_000008a4,in_stack_000008a0);
                        if ((*unaff_x28 == 0) ||
                           (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
                             *(undefined4 *)((long)unaff_x19 + 0x25c);
                        if ((unaff_x19[0xc9] == 0) ||
                           (lVar26 = *(long *)(unaff_x19[0xc9] + 0x20), lVar26 == 0))
                        goto LAB_035574b8;
                        FUN_03776e6c(&stack0x00000c18,lVar26,0);
                        puVar7 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                        if ((int)in_stack_000017dc < 0x10000) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar11 = FUN_026b63d8(in_stack_000017dc,0);
                          uVar11 = uVar11 & 1;
                        }
                        else {
                          uVar11 = 0;
                        }
                        fVar45 = *(float *)(unaff_x19 + 0x55);
                        *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                        iVar12 = (int)unaff_x24;
                        if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                          fStack000000000000012c = 0.0;
                          fVar61 = 0.0;
                          fVar46 = 0.0;
                        }
                        else {
                          if (*in_stack_000000e0 == 0) goto LAB_035574b8;
                          uVar55 = *unaff_x20;
                          uVar17 = *(uint *)(*in_stack_000000e0 + 0x28);
                          if ((int)uVar55 < (int)in_stack_00000088._4_4_) {
                            if ((*unaff_x28 == 0) ||
                               (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar26 + 0x18) <= uVar55 + 1) goto LAB_035575f4;
                            lVar26 = *(long *)(lVar26 + (long)(int)(uVar55 + 1) * (long)iVar12 +
                                              0x30);
                            if ((((lVar26 == 0) || (*unaff_x21 == 0)) ||
                                (lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0)) ||
                               (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_035574b8;
                            in_stack_000008a0 = uVar17 | *(int *)(lVar26 + 0x28) << 0x10;
                            uVar19 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                            uVar66 = 0;
                            if ((uVar19 & 1) == 0) {
                              fStack000000000000012c = 0.0;
                              fVar61 = 0.0;
                              fVar46 = 0.0;
                            }
                            else {
                              if (in_stack_000016f8 == 0) goto LAB_035574b8;
                              fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
                              uVar66 = *(undefined4 *)(in_stack_000016f8 + 0x20);
                              fVar46 = *(float *)(in_stack_000016f8 + 0x14);
                              fVar61 = *(float *)(in_stack_000016f8 + 0x18);
                              if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                                fVar45 = 0.0;
                              }
                            }
                            uVar55 = *unaff_x20;
                          }
                          else {
                            uVar66 = 0;
                            fStack000000000000012c = 0.0;
                            fVar61 = 0.0;
                            fVar46 = 0.0;
                          }
                          if (0 < (int)uVar55) {
                            if ((*unaff_x28 == 0) ||
                               (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar26 + 0x18) <= uVar55 - 1) goto LAB_035575f4;
                            lVar26 = *(long *)(lVar26 + (ulong)(uVar55 - 1) *
                                                        (unaff_x24 & 0xffffffff) + 0x30);
                            if (((lVar26 == 0) || (*unaff_x21 == 0)) ||
                               ((lVar29 = *(long *)(*unaff_x21 + 0x128), lVar29 == 0 ||
                                (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0))))
                            goto LAB_035574b8;
                            in_stack_000008a0 = *(uint *)(lVar26 + 0x28) | uVar17 << 0x10;
                            uVar19 = FUN_0219f8b8(lVar29,&stack0x000008a0,&stack0x000016f8,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                            if ((uVar19 & 1) != 0) {
                              if ((in_stack_000016f8 == 0) ||
                                 (fVar46 = (float)FUN_03571cb4(fVar46,fVar61,fStack000000000000012c,
                                                               uVar66,*(undefined4 *)
                                                                       (in_stack_000016f8 + 0x28),
                                                               *(undefined4 *)
                                                                (in_stack_000016f8 + 0x2c),
                                                               *(undefined4 *)
                                                                (in_stack_000016f8 + 0x30),
                                                               *(undefined4 *)
                                                                (in_stack_000016f8 + 0x34),0),
                                 in_stack_000016f8 == 0)) goto LAB_035574b8;
                              if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                                fVar45 = 0.0;
                              }
                            }
                          }
                          *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
                        }
                        fVar57 = (float)uVar54;
                        if ((char)unaff_x19[0x1e] != '\0') {
                          fVar58 = *(float *)(unaff_x19 + 200);
                          fVar50 = (float)FUN_03776cb4(&stack0x00001790,0);
                          fVar58 = fVar58 - fVar57 * fVar50 * (1.0 - *(float *)((long)unaff_x19 +
                                                                               0x2d4));
                          *(float *)(unaff_x19 + 200) = fVar58;
                          if ((in_stack_000017dc == 0x200b) || (uVar11 != 0)) {
                            *(float *)(unaff_x19 + 200) =
                                 fVar58 - fStack00000000000000d4 *
                                          *(float *)((long)unaff_x19 + 0x2b4);
                          }
                        }
                        fVar58 = *(float *)(unaff_x19 + 0x56);
                        fVar50 = 0.0;
                        if (fVar58 != 0.0) {
                          fVar50 = (float)FUN_03776c94(&stack0x00001790,0);
                          fVar51 = (float)FUN_03776ca4(&stack0x00001790,0);
                          fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (fVar58 * 0.5 - fVar57 * (fVar50 * 0.5 + fVar51));
                          *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar50;
                        }
                        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                           ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                          lVar26 = *in_stack_00000160;
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar19 = FUN_036cee6c(lVar26,0,0);
                          fVar51 = 0.0;
                          if ((uVar19 & 1) != 0) {
                            lVar26 = *in_stack_00000160;
                            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (lVar26 == 0) goto LAB_035574b8;
                            uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)
                                                          (*(long *)(*(long *)puVar7 + 0xb8) + 0x54)
                                                  ,0);
                            fVar51 = 0.0;
                            if ((uVar19 & 1) != 0) {
                              lVar26 = *in_stack_00000160;
                              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (lVar26 == 0) goto LAB_035574b8;
                              fVar58 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                                                   (*(long *)(*(long *)puVar7 + 0xb8
                                                                             ) + 0x54),0);
                              if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
                              fVar62 = *(float *)(*unaff_x21 + 0x1b0);
                              fVar51 = (float)FUN_0369e060(*in_stack_00000160,
                                                           *(undefined4 *)
                                                            (*(long *)(*(long *)puVar7 + 0xb8) +
                                                            0xcc),0);
                              fVar51 = fVar51 * fVar58 * fVar62 * 0.25;
                              if (fVar58 < fStack000000000000015c + fVar51) {
                                fStack000000000000015c = fVar58 - fVar51;
                              }
                            }
                          }
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
                        }
                        else {
                          lVar26 = *in_stack_00000160;
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar19 = FUN_036cee6c(lVar26,0,0);
                          fStack00000000000000d0 = 0.0;
                          if ((uVar19 & 1) != 0) {
                            lVar26 = *in_stack_00000160;
                            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (lVar26 == 0) goto LAB_035574b8;
                            uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)
                                                          (*(long *)(*(long *)puVar7 + 0xb8) + 0x54)
                                                  ,0);
                            if ((uVar19 & 1) != 0) {
                              lVar26 = *in_stack_00000160;
                              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (lVar26 == 0) goto LAB_035574b8;
                              uVar19 = FUN_03699d3c(lVar26,*(undefined4 *)
                                                            (*(long *)(*(long *)puVar7 + 0xb8) +
                                                            0xcc),0);
                              if ((uVar19 & 1) != 0) {
                                lVar26 = *in_stack_00000160;
                                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (lVar26 != 0) {
                                  fVar58 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                                                       (*(long *)(*(long *)puVar7 +
                                                                                 0xb8) + 0x54),0);
                                  if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
                                    fVar62 = *(float *)(*unaff_x21 + 0x1a8);
                                    fVar51 = (float)FUN_0369e060(*in_stack_00000160,
                                                                 *(undefined4 *)
                                                                  (*(long *)(*(long *)puVar7 + 0xb8)
                                                                  + 0xcc),0);
                                    fVar51 = fVar51 * fVar58 * fVar62 * 0.25;
                                    if (fVar58 < fStack000000000000015c + fVar51) {
                                      fStack000000000000015c = fVar58 - fVar51;
                                    }
                                    goto FUN_03551b84;
                                  }
                                }
                                goto LAB_035574b8;
                              }
                            }
                          }
                          fVar51 = 0.0;
                        }
FUN_03551b84:
                        fVar58 = *(float *)(unaff_x19 + 200);
                        fVar62 = (float)FUN_03776ca4(&stack0x00001790,0);
                        fVar58 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                          fVar57 * (fVar46 + ((fVar62 - fStack000000000000015c) -
                                                             fVar51));
                        fVar46 = (float)FUN_03776cac(&stack0x00001790,0);
                        fVar67 = *(float *)((long)unaff_x19 + 0x61c) +
                                 ((fVar49 + fVar57 * (fVar61 + fStack000000000000015c + fVar46)) -
                                 *(float *)(unaff_x19 + 0x9b));
                        fVar46 = (float)FUN_03776c9c(&stack0x00001790,0);
                        fVar46 = fVar67 - fVar57 * (fStack000000000000015c + fStack000000000000015c
                                                   + fVar46);
                        fVar61 = (float)FUN_03776c94(&stack0x00001790,0);
                        fVar62 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                          fVar57 * (fVar51 + fVar51 +
                                                   fStack000000000000015c + fStack000000000000015c +
                                                   fVar61);
                        fStack0000000000000104 = fVar58;
                        fVar61 = fVar62;
                        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                           ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                          fVar60 = (float)(int)unaff_x19[0xbe] * fStack000000000000005c;
                          fVar61 = (float)FUN_03776cac(&stack0x00001790,0);
                          fVar59 = fVar60 * fVar57 * (fVar51 + fStack000000000000015c + fVar61);
                          fVar61 = (float)FUN_03776cac(&stack0x00001790,0);
                          fVar64 = (float)FUN_03776c9c(&stack0x00001790,0);
                          fVar67 = fVar67 + 0.0;
                          fVar46 = fVar46 + 0.0;
                          fVar60 = fVar60 * fVar57 * (((fVar61 - fVar64) - fStack000000000000015c) -
                                                     fVar51);
                          fVar64 = fVar58 + fVar59;
                          fVar61 = fVar62 + fVar60;
                          fVar52 = (fVar59 - fVar60) * 0.5;
                          fVar58 = (fVar58 + fVar60) - fVar52;
                          fVar62 = (fVar62 + fVar59) - fVar52;
                          fStack0000000000000104 = fVar64 - fVar52;
                          fVar61 = fVar61 - fVar52;
                        }
                        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                          fStack0000000000000114 = 0.0;
                          fVar52 = 0.0;
                          fVar59 = 0.0;
                          fStack0000000000000100 = 0.0;
                          fVar60 = fVar46;
                          fVar64 = fVar67;
                        }
                        else {
                          thunk_FUN_036bc400(_fStack0000000000000078,0);
                          fVar63 = (fVar62 + fVar58) * 0.5;
                          fVar65 = (fVar46 + fVar67) * 0.5;
                          fVar67 = fVar67 - fVar65;
                          fStack0000000000000100 = 0.0;
                          fVar64 = fVar67;
                          fStack0000000000000104 =
                               (float)FUN_036bdd2c(fStack0000000000000104 - fVar63,
                                                   _fStack0000000000000078,0);
                          fStack0000000000000104 = fVar63 + fStack0000000000000104;
                          fStack0000000000000100 = fStack0000000000000100 + 0.0;
                          fVar60 = fVar46 - fVar65;
                          fStack0000000000000114 = 0.0;
                          fVar46 = fVar60;
                          fVar58 = (float)FUN_036bdd2c(fVar58 - fVar63,_fStack0000000000000078,0);
                          fVar58 = fVar63 + fVar58;
                          fStack0000000000000114 = fStack0000000000000114 + 0.0;
                          fVar46 = fVar65 + fVar46;
                          fVar59 = 0.0;
                          fVar62 = (float)FUN_036bdd2c(fVar62 - fVar63,_fStack0000000000000078,0);
                          fVar62 = fVar63 + fVar62;
                          fVar67 = fVar65 + fVar67;
                          fVar59 = fVar59 + 0.0;
                          fVar52 = 0.0;
                          fVar61 = (float)FUN_036bdd2c(fVar61 - fVar63,_fStack0000000000000078,0);
                          fVar61 = fVar63 + fVar61;
                          fVar52 = fVar52 + 0.0;
                          fVar60 = fVar65 + fVar60;
                          fVar64 = fVar65 + fVar64;
                        }
                        if ((*unaff_x28 == 0) ||
                           (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar26 + 0x11c) = fVar58;
                        *(float *)(lVar26 + 0x120) = fVar46;
                        *(float *)(lVar26 + 0x124) = fStack0000000000000114;
                        if ((*unaff_x28 == 0) ||
                           (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar26 + 0x114) = fVar64;
                        *(float *)(lVar26 + 0x110) = fStack0000000000000104;
                        *(float *)(lVar26 + 0x118) = fStack0000000000000100;
                        if ((*unaff_x28 == 0) ||
                           (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar26 + 0x128) = fVar62;
                        *(float *)(lVar26 + 300) = fVar67;
                        *(float *)(lVar26 + 0x130) = fVar59;
                        if ((*unaff_x28 == 0) ||
                           (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                        *(float *)(lVar26 + 0x134) = fVar61;
                        *(float *)(lVar26 + 0x138) = fVar60;
                        *(float *)(lVar26 + 0x13c) = fVar52;
                        if ((*unaff_x28 == 0) ||
                           (lVar26 = *(long *)(*unaff_x28 + 0x38), lVar26 == 0)) goto LAB_035574b8;
                        uVar17 = *unaff_x20;
                        lVar29 = (long)(int)uVar17;
                        if (*(uint *)(lVar26 + 0x18) <= uVar17) goto LAB_035575f4;
                        lVar30 = lVar26 + lVar29 * unaff_x24;
                        *(int *)(lVar30 + 0x140) = (int)unaff_x19[200];
                        fVar67 = *(float *)(unaff_x19 + 0x9b);
                        uVar19 = (ulong)(uint)fVar67;
                        fVar61 = *(float *)((long)unaff_x19 + 0x61c);
                        *(float *)(lVar30 + 0x15c) = (fVar62 - fVar58) / (fVar64 - fVar46);
                        *(float *)(lVar30 + 0x14c) = (fVar49 - fVar67) + fVar61;
                        fVar47 = fVar47 * fVar57;
                        if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                          fVar47 = fVar47 / fStack0000000000000158;
                          fVar48 = (fVar48 * fVar57) / fStack0000000000000158;
                        }
                        else {
                          fVar48 = fVar48 * fVar57;
                        }
                        uVar55 = *(uint *)(unaff_x19 + 0x93);
                        if ((uVar11 == 0) || (uVar17 == uVar55)) {
                          fVar48 = fVar61 + fVar48;
                          fVar47 = fVar61 + fVar47;
                          fVar49 = fVar48;
                          fVar46 = fVar47;
                          if (fVar61 != 0.0) {
                            fVar46 = (fVar47 - fVar61) / *(float *)((long)unaff_x19 + 0x404);
                            fVar49 = (fVar48 - fVar61) / *(float *)((long)unaff_x19 + 0x404);
                            if (fVar46 <= fVar47) {
                              fVar46 = fVar47;
                            }
                            if (fVar48 <= fVar49) {
                              fVar49 = fVar48;
                            }
                          }
                          lVar26 = lVar26 + lVar29 * unaff_x24;
                          fVar61 = fVar46;
                          if (fVar46 <= *(float *)(unaff_x19 + 0x99)) {
                            fVar61 = *(float *)(unaff_x19 + 0x99);
                          }
                          fVar58 = fVar49;
                          if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar49) {
                            fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
                          }
                          *(float *)((long)unaff_x19 + 0x4cc) = fVar58;
                          *(float *)(unaff_x19 + 0x99) = fVar61;
                          *(float *)(lVar26 + 0x154) = fVar46;
                          *(float *)(lVar26 + 0x158) = fVar49;
                          *(float *)(lVar26 + 0x148) = fVar47 - fVar67;
                          *(float *)(unaff_x19 + 0x98) = fVar47 - fVar67;
                          *(float *)(lVar26 + 0x150) = fVar48 - fVar67;
                          *(float *)((long)unaff_x19 + 0x4c4) = fVar48 - fVar67;
                          if (((int)unaff_x19[0x95] == 0) ||
                             (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                            *(float *)(unaff_x19 + 0x97) = fVar61;
                            if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                            fVar46 = *(float *)((long)unaff_x19 + 0x4bc);
                            fVar61 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                            fStack0000000000000158 = (fVar57 * fVar61) / fStack0000000000000158;
                            uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                            if (fVar46 <= fStack0000000000000158) {
                              fVar46 = fStack0000000000000158;
                            }
                            *(float *)((long)unaff_x19 + 0x4bc) = fVar46;
                          }
                          if ((float)uVar19 == 0.0) {
                            fVar46 = *(float *)(in_stack_00000080 + 0x208);
                            if (*(float *)(in_stack_00000080 + 0x208) <= fVar47) {
                              fVar46 = fVar47;
                            }
                            *(float *)(in_stack_00000080 + 0x208) = fVar46;
                          }
                        }
                        else {
                          fVar46 = *(float *)(unaff_x19 + 0x99);
                          lVar26 = lVar26 + lVar29 * unaff_x24;
                          *(float *)(lVar26 + 0x154) = fVar46;
                          fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar46 = fVar46 - fVar67;
                          *(float *)(lVar26 + 0x148) = fVar46;
                          *(float *)(lVar26 + 0x158) = fVar61;
                          *(float *)(unaff_x19 + 0x98) = fVar46;
                          fVar61 = fVar61 - fVar67;
                          *(float *)(lVar26 + 0x150) = fVar61;
                          *(float *)((long)unaff_x19 + 0x4c4) = fVar61;
                        }
                        lVar26 = *unaff_x28;
                        if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0))
                        goto LAB_035574b8;
                        uVar13 = *unaff_x20;
                        if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
                        lVar29 = lVar29 + (long)(int)uVar13 * unaff_x24;
                        *(undefined1 *)(lVar29 + 0x194) = 0;
                        uVar33 = *(uint *)(unaff_x19 + 0x4f);
                        if (((in_stack_000017dc == 9) ||
                            ((((uVar11 == 0 && (in_stack_000017dc != 3)) &&
                              (in_stack_000017dc != 0x200b)) && (in_stack_000017dc != 0xad)))) ||
                           (((in_stack_000017dc == 0xad & (bStack0000000000000074 ^ 0xff)) != 0 ||
                            (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
                          *(undefined1 *)(lVar29 + 0x194) = 1;
                          pfVar31 = _fStack00000000000000a0;
                          pfVar34 = _fStack00000000000000a8;
                          if (unaff_w23 != 0) {
                            lVar26 = *(long *)(lVar26 + 0x50);
                            if (lVar26 == 0) goto LAB_035574b8;
                            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto LAB_035575f4;
                            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            pfVar34 = (float *)(lVar26 + 0x60);
                            pfVar31 = (float *)(lVar26 + 100);
                          }
                          fVar61 = *pfVar34;
                          fVar47 = *pfVar31;
                          fVar46 = *(float *)(unaff_x19 + 0x6c);
                          fVar48 = *(float *)(unaff_x19 + 200);
                          in_stack_000000f8._4_4_ = (fStack000000000000009c - fVar61) - fVar47;
                          bVar9 = true;
                          if ((fVar46 <= in_stack_000000f8._4_4_) && (bVar9 = false, !NAN(fVar46)))
                          {
                            bVar9 = fVar46 == -1.0;
                          }
                          if (!bVar9) {
                            in_stack_000000f8._4_4_ = fVar46;
                          }
                          fVar46 = 0.0;
                          if ((char)unaff_x19[0x1e] == '\0') {
                            fVar46 = (float)FUN_03776cb4(&stack0x00001790,0);
                            uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                          }
                          fVar58 = *(float *)((long)unaff_x19 + 0x2d4);
                          fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar49 = (float)uVar20;
                          if (in_stack_000017dc != 0xad) {
                            fVar49 = fVar57;
                          }
                          fVar64 = (float)uVar19;
                          fVar67 = 0.0;
                          if ((0.0 < fVar64) &&
                             (fVar67 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar67 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          uVar13 = *unaff_x20;
                          fVar67 = (*(float *)(unaff_x19 + 0x97) - (fVar62 - fVar64)) + fVar67;
                          if (fStack00000000000000c4 < fVar67) {
                            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                              *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                            }
                            puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            in_stack_000017c8 = DAT_00d37868;
                            if ((char)unaff_x19[0x47] != '\0') {
                              fVar60 = *(float *)(unaff_x19 + 0x59);
                              if (((fVar60 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar64))
                                 && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar45 = *(float *)((long)unaff_x19 + 700) +
                                         ((in_stack_00000018._4_4_ - fVar67) /
                                         (float)(int)unaff_x19[0x95]) / fStack0000000000000058;
                                if (fVar45 <= fVar60) {
                                  fVar45 = fVar60;
                                }
                                goto LAB_03554b48;
                              }
                              fVar64 = *(float *)((long)unaff_x19 + 0x1e4);
                              fVar67 = *(float *)(unaff_x19 + 0x4a);
                              uVar19 = (ulong)(uint)fVar67;
                              if ((fVar67 < fVar64) &&
                                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar45 = (fVar64 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                if (fVar45 <= DAT_00d38b84) {
                                  fVar45 = DAT_00d38b84;
                                }
                                fVar46 = (fVar64 - fVar45) * 20.0 + 0.5;
                                *(float *)((long)unaff_x19 + 0x23c) = fVar64;
                                fVar45 = DAT_00d38e60;
                                if (fVar46 != INFINITY) {
                                  fVar45 = (float)(int)fVar46 / 20.0;
                                }
                                if (fVar45 <= fVar67) {
                                  fVar45 = fVar67;
                                }
                                goto LAB_03554658;
                              }
                            }
                            switch((int)unaff_x19[0x5c]) {
                            case 1:
                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar26 = *(long *)puVar7;
                              }
                              lVar29 = *(long *)(lVar26 + 0xb8);
                              lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                              if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                lVar26 = FUN_01a46ff8(lVar26);
                              }
                              piVar22 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                                                  *(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0xc0) + 8) + 0x80) + 0xa0);
                              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*piVar22 == 0) {
LAB_03554580:
                                in_stack_000017c8 = DAT_00d37868;
                                unaff_x20[0] = 0;
                                unaff_x20[1] = 0;
                                in_stack_000017a8 = 0xffffffff;
                                goto LAB_03550bd0;
                              }
                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar26 = *(long *)puVar7;
                              }
                              FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                              memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
                              iVar14 = FUN_0358c15c();
LAB_035529e8:
                              iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
                              *(int *)((long)unaff_x19 + 0x494) = iVar15;
                              in_stack_00000168._4_4_ = in_stack_00000168._4_4_ + 1;
                              in_stack_000017a8 = iVar14 - 1;
                              in_stack_000017c8 = CONCAT44(0x2026,iVar15);
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
                              if ((uVar13 == 0) || ((int)in_stack_000017a8 < 0)) {
                                in_stack_000017a8 = 0xffffffff;
                                *unaff_x20 = 0;
                                goto LAB_03550bd0;
                              }
                              fVar45 = *(float *)(unaff_x19 + 0x99);
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017a8 = FUN_0358c15c();
                              if (fVar45 - fVar62 <= fStack00000000000000c4) {
                                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                *(undefined4 *)(unaff_x19 + 0x93) =
                                     *(undefined4 *)((long)unaff_x19 + 0x494);
                                uVar19 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 200) =
                                     *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                lVar26 = NEON_rev64(uVar19,4);
                                unaff_x19[0x99] = lVar26;
                                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
                                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                in_stack_000017c8 = uVar21;
                                goto LAB_03550bd0;
                              }
                              break;
                            case 6:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017a8 = FUN_0358c15c();
                              lVar26 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar20 = FUN_036cee6c(lVar26,0,0);
                              if ((uVar20 & 1) != 0) {
                                plVar44 = (long *)unaff_x19[0x5d];
                                uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar44 == (long *)0x0) goto LAB_035574b8;
                                (**(code **)(*plVar44 + 0x528))
                                          (plVar44,uVar21,*(undefined8 *)(*plVar44 + 0x530));
                                lVar26 = unaff_x19[0x5d];
                                if (lVar26 == 0) goto LAB_035574b8;
                                *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar44 = (long *)unaff_x19[0x5d];
                                if (plVar44 == (long *)0x0) goto LAB_035574b8;
                                (**(code **)(*plVar44 + 0x7a8))
                                          (plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                              }
                            }
UnityEngine_AnimationClip__get_hasMotionCurves:
                            in_stack_000017c8 = CONCAT44(3,uVar13);
                            goto LAB_03550bd0;
                          }
UnityEngine_AnimationClip__set_wrapMode:
                          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          fVar48 = ABS(fVar48) + fVar46 * (1.0 - fVar58) * fVar49;
                          fVar46 = 1.0;
                          if ((uVar33 & 0x18) != 0) {
                            fVar46 = DAT_00d38acc;
                          }
                          fVar49 = fVar46 * in_stack_000000f8._4_4_;
                          if (fVar49 < fVar48) {
                            uVar19 = (ulong)(uint)fVar51;
                            if (((char)unaff_x19[0x5b] != '\0') &&
                               (uVar13 != *(uint *)(unaff_x19 + 0x93))) {
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017a8 = FUN_0358c15c();
                              if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                lVar26 = *in_stack_00000170;
                                if ((lVar26 == 0) ||
                                   (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                                fVar49 = *(float *)(unaff_x19 + 0x9b);
                                fVar58 = 0.0;
                                if ((0.0 < fVar49) &&
                                   (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                  fVar58 = *(float *)(unaff_x19 + 0x99) -
                                           *(float *)(unaff_x19 + 0x9a);
                                }
                                fVar58 = fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57) +
                                         *(float *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 +
                                                   0x154) +
                                         (fVar58 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                         fStack0000000000000058 *
                                         (in_stack_00000050._4_4_ +
                                         *(float *)((long)unaff_x19 + 700));
                              }
                              else {
                                lVar26 = unaff_x19[0x6d];
                                *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                                if (lVar26 == 0) goto LAB_035574b8;
                                fVar49 = *(float *)(unaff_x19 + 0x9b);
                                fVar58 = *(float *)(unaff_x19 + 0x58) +
                                         fStack00000000000000d4 * *(float *)(unaff_x19 + 0x57);
                              }
                              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              lVar26 = *(long *)(lVar26 + 0x38);
                              if (lVar26 != 0) {
                                uVar36 = *(uint *)((long)unaff_x19 + 0x494);
                                if ((*(uint *)(lVar26 + 0x18) <= uVar36) ||
                                   (uVar5 = uVar36 - 1, *(uint *)(lVar26 + 0x18) <= uVar5))
                                goto LAB_035575f4;
                                uVar19 = (ulong)(uint)(fVar58 + *(float *)(unaff_x19 + 0x97));
                                fVar62 = (fVar58 + *(float *)(unaff_x19 + 0x97) + fVar49) -
                                         *(float *)(lVar26 + (long)(int)uVar36 * unaff_x24 + 0x158);
                                if (((bStack0000000000000074 & 1) == 0 &&
                                     *(short *)(lVar26 + (long)(int)uVar5 * (long)iVar12 + 0x20) ==
                                     0xad) &&
                                   ((fVar62 < fStack00000000000000c4 || ((int)unaff_x19[0x5c] == 0))
                                   )) {
                                  bStack0000000000000074 = 0;
                                  *unaff_x20 = uVar5;
                                  in_stack_000017a8 = in_stack_000017a8 - 1;
                                  in_stack_000017c8 = CONCAT44(0x2d,uVar5);
                                  goto LAB_03550bd0;
                                }
                                if (*(short *)(lVar26 + (long)(int)uVar36 * unaff_x24 + 0x20) ==
                                    0xad) {
                                  bStack0000000000000074 = 1;
                                  in_stack_000017c8 = uVar21;
                                  goto LAB_03550bd0;
                                }
                                if ((bStack0000000000000070 & *(byte *)(unaff_x19 + 0x47) & 1) != 0)
                                {
                                  fVar58 = *(float *)((long)unaff_x19 + 0x2d4);
                                  fVar49 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                  if ((fVar49 <= fVar58) ||
                                     ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                                    fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
                                    uVar19 = (ulong)(uint)fVar58;
                                    fVar49 = *(float *)(unaff_x19 + 0x4a);
                                    if ((fVar58 <= fVar49) ||
                                       ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                                    goto LAB_03552d44;
LAB_03557594:
                                    fVar45 = (fVar58 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                    if (fVar45 <= DAT_00d38b84) {
                                      fVar45 = DAT_00d38b84;
                                    }
                                    *(float *)((long)unaff_x19 + 0x23c) = fVar58;
                                    fVar58 = fVar58 - fVar45;
                                    goto LAB_03557524;
                                  }
LAB_03557558:
                                  fVar45 = fVar48;
                                  if (0.0 < fVar58) {
                                    fVar45 = fVar48 / (1.0 - fVar58);
                                  }
                                  fVar58 = fVar58 + (fVar48 - fVar46 * (in_stack_000000f8._4_4_ +
                                                                       DAT_00d38cc4)) / fVar45;
LAB_035574e8:
                                  if (fVar49 <= fVar58) {
                                    fVar58 = fVar49;
                                  }
                                  *(float *)((long)unaff_x19 + 0x2d4) = fVar58;
                                  return;
                                }
LAB_03552d44:
                                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar26 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar26 = *(long *)puVar7;
                                }
                                iVar14 = *(int *)(*(long *)(lVar26 + 0xb8) + 0xe78);
                                if (((iVar14 != iStack0000000000000034) && (iVar14 != -1)) &&
                                   (((bStack0000000000000070 ^ 1) & 1) == 0)) {
                                  if (*(int *)(lVar26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  in_stack_000017a8 = FUN_0358c15c();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  uVar36 = *unaff_x20 - 1;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar36) goto LAB_035575f4;
                                  iStack0000000000000034 = iVar14;
                                  if (*(short *)(lVar26 + (long)(int)uVar36 * (long)iVar12 + 0x20)
                                      == 0xad) {
                                    bStack0000000000000074 = 0;
                                    *unaff_x20 = uVar36;
                                    in_stack_000017a8 = in_stack_000017a8 - 1;
                                    in_stack_000017c8 = CONCAT44(0x2d,uVar36);
                                    goto LAB_03550bd0;
                                  }
                                }
                                if (fVar62 <= fStack00000000000000c4) {
switchD_03552ef4_caseD_0:
                                  uVar19 = uVar54;
                                  FUN_0358cbd4(fStack0000000000000058,uVar54,fStack00000000000000d4,
                                               *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                               fStack00000000000000d0,fVar45,in_stack_000000f8._4_4_
                                               ,in_stack_00000050._4_4_);
                                }
                                else {
                                  if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                    *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                         *(undefined4 *)((long)unaff_x19 + 0x494);
                                  }
                                  fVar49 = fStack00000000000000c4;
                                  if ((char)unaff_x19[0x47] != '\0') {
                                    fVar49 = *(float *)(unaff_x19 + 0x59);
                                    if ((fVar49 < *(float *)((long)unaff_x19 + 700)) &&
                                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                      fVar45 = *(float *)((long)unaff_x19 + 700) +
                                               ((in_stack_00000018._4_4_ - fVar62) /
                                               (float)((int)unaff_x19[0x95] + 1)) /
                                               fStack0000000000000058;
                                      if (fVar45 <= fVar49) {
                                        fVar45 = fVar49;
                                      }
LAB_03554b48:
                                      *(float *)((long)unaff_x19 + 700) = fVar45;
                                      return;
                                    }
                                    fVar58 = *(float *)((long)unaff_x19 + 0x2d4);
                                    fVar49 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                    if ((fVar58 < fVar49) &&
                                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                    goto LAB_03557558;
                                    fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
                                    uVar19 = (ulong)(uint)fVar58;
                                    fVar49 = *(float *)(unaff_x19 + 0x4a);
                                    if ((fVar49 < fVar58) &&
                                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                    goto LAB_03557594;
                                  }
                                  switch((int)unaff_x19[0x5c]) {
                                  case 0:
                                  case 2:
                                  case 4:
                                    goto switchD_03552ef4_caseD_0;
                                  case 1:
                                    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    }
                                    lVar29 = *(long *)(lVar26 + 0xb8);
                                    lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20
                                                      );
                                    if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                      lVar26 = FUN_01a46ff8(lVar26);
                                    }
                                    piVar22 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                                                        *(long *)(*(long *)(*(long *
                                                  )(lVar26 + 0xc0) + 8) + 0x80) + 0xa0);
                                    if (*piVar22 == 0) {
                                      bStack0000000000000074 = 0;
                                      goto LAB_03554580;
                                    }
                                    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    }
                                    FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                                                 *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                    memcpy(&stack0x00001008,&stack0x000008a0,0x378);
                                    iVar14 = FUN_0358c15c();
                                    bStack0000000000000074 = 0;
                                    goto LAB_035529e8;
                                  case 3:
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    in_stack_000017a8 = FUN_0358c15c();
                                    bStack0000000000000074 = 0;
                                    goto UnityEngine_AnimationClip__get_hasMotionCurves;
                                  case 5:
                                    *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                    uVar19 = uVar54;
                                    FUN_0358cbd4(fStack0000000000000058,uVar54,
                                                 fStack00000000000000d4,
                                                 *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                 fStack00000000000000d0,fVar45,
                                                 in_stack_000000f8._4_4_,in_stack_00000050._4_4_);
                                    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                    *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                    *(undefined8 *)(in_stack_00000080 + 0x208) = 0;
                                    *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                    break;
                                  case 6:
                                    lVar26 = unaff_x19[0x5d];
                                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar20 = FUN_036cee6c(lVar26,0,0);
                                    if ((uVar20 & 1) != 0) {
                                      plVar44 = (long *)unaff_x19[0x5d];
                                      uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                                      if (plVar44 == (long *)0x0) goto LAB_035574b8;
                                      (**(code **)(*plVar44 + 0x528))
                                                (plVar44,uVar21,*(undefined8 *)(*plVar44 + 0x530));
                                      lVar26 = unaff_x19[0x5d];
                                      if (lVar26 == 0) goto LAB_035574b8;
                                      *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
                                      FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0
                                                  );
                                      plVar44 = (long *)unaff_x19[0x5d];
                                      if (plVar44 == (long *)0x0) goto LAB_035574b8;
                                      (**(code **)(*plVar44 + 0x7a8))
                                                (plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
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
                                goto LAB_03550bd0;
                              }
                              goto LAB_035574b8;
                            }
                            if (((char)unaff_x19[0x47] != '\0') &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                              fVar49 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                              if (fVar58 < fVar49) {
                                fVar45 = fVar48 / (1.0 - fVar58);
                                if (fVar58 <= 0.0) {
                                  fVar45 = fVar48;
                                }
                                fVar58 = fVar58 + (fVar48 - fVar46 * (in_stack_000000f8._4_4_ +
                                                                     DAT_00d38cc4)) / fVar45;
                                goto LAB_035574e8;
                              }
                              fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
                              fVar49 = *(float *)(unaff_x19 + 0x4a);
                              if (fVar49 < fVar58) {
                                fVar45 = (fVar58 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                if (fVar45 <= DAT_00d38b84) {
                                  fVar45 = DAT_00d38b84;
                                }
                                *(float *)((long)unaff_x19 + 0x23c) = fVar58;
                                fVar58 = fVar58 - fVar45;
LAB_03557524:
                                fVar46 = fVar58 * 20.0 + 0.5;
                                fVar45 = DAT_00d38e60;
                                if (fVar46 != INFINITY) {
                                  fVar45 = (float)(int)fVar46 / 20.0;
                                }
                                if (fVar45 <= fVar49) {
                                  fVar45 = fVar49;
                                }
LAB_03554658:
                                *(float *)((long)unaff_x19 + 0x1e4) = fVar45;
                                return;
                              }
                            }
                            iVar14 = (int)unaff_x19[0x5c];
                            if (iVar14 == 1) {
                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar26 = *(long *)puVar7;
                              }
                              lVar29 = *(long *)(lVar26 + 0xb8);
                              lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                              if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                lVar26 = FUN_01a46ff8(lVar26);
                              }
                              piVar22 = (int *)thunk_FUN_01a59484(lVar29 + 0x11f0,
                                                                  *(long *)(*(long *)(*(long *)(
                                                  lVar26 + 0xc0) + 8) + 0x80) + 0xa0);
                              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*piVar22 == 0) goto LAB_03554580;
                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar26 = *(long *)puVar7;
                              }
                              FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x000008a0,
                                           *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                              memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
                              goto LAB_035529dc;
                            }
                            if (iVar14 == 6) {
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017a8 = FUN_0358c15c();
                              lVar26 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar20 = FUN_036cee6c(lVar26,0,0);
                              if ((uVar20 & 1) != 0) {
                                plVar44 = (long *)unaff_x19[0x5d];
                                uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar44 == (long *)0x0) goto LAB_035574b8;
                                (**(code **)(*plVar44 + 0x528))
                                          (plVar44,uVar21,*(undefined8 *)(*plVar44 + 0x530));
                                lVar26 = unaff_x19[0x5d];
                                if (lVar26 == 0) goto LAB_035574b8;
                                *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar44 = (long *)unaff_x19[0x5d];
                                if (plVar44 == (long *)0x0) goto LAB_035574b8;
                                (**(code **)(*plVar44 + 0x7a8))
                                          (plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                              }
LAB_03552b00:
                              in_stack_000017c8 = CONCAT44(3,*unaff_x20);
                              goto LAB_03550bd0;
                            }
                            if (iVar14 == 3) {
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              goto LAB_03552550;
                            }
                          }
LAB_03552f54:
                          if (in_stack_000017dc == 0xad) {
                            if ((*in_stack_00000170 == 0) ||
                               (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                            *(undefined1 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
                          }
                          else {
                            if (in_stack_000017dc == 9) {
                              lVar26 = *in_stack_00000170;
                              if ((lVar26 != 0) && (lVar29 = *(long *)(lVar26 + 0x38), lVar29 != 0))
                              {
                                uVar13 = *unaff_x20;
                                if (uVar13 < *(uint *)(lVar29 + 0x18)) {
                                  *(undefined1 *)(lVar29 + (long)(int)uVar13 * unaff_x24 + 0x194) =
                                       0;
                                  *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                                  lVar29 = *(long *)(lVar26 + 0x50);
                                  if (lVar29 != 0) {
                                    if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar29 + 0x18)) {
                                      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
                                      *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
                                      goto LAB_03552fcc;
                                    }
                                    goto LAB_035575f4;
                                  }
                                  goto LAB_035574b8;
                                }
                                goto LAB_035575f4;
                              }
                              goto LAB_035574b8;
                            }
                            if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                              (**(code **)(*unaff_x19 + 0x898))(fVar49,fVar51);
                            }
                            else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                              (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
                            }
                            uVar13 = *unaff_x20;
                            if ((in_stack_00000068._4_4_ & 1) != 0) {
                              *(uint *)(in_stack_00000080 + 0x1f0) = uVar13;
                            }
                            *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                            *(int *)((long)unaff_x19 + 0x4ac) =
                                 *(int *)((long)unaff_x19 + 0x4ac) + 1;
                            if ((unaff_x19[0x6d] == 0) ||
                               (lVar26 = *(long *)(unaff_x19[0x6d] + 0x50), lVar26 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto LAB_035575f4;
                            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            in_stack_00000068._4_4_ = 0;
                            *(float *)(lVar26 + 0x60) = fVar61;
                            *(float *)(lVar26 + 100) = fVar47;
                          }
                        }
                        else {
                          if (((in_stack_000017dc & 0xfffffffe) == 10) &&
                             ((int)unaff_x19[0x5c] == 6)) {
                            fVar61 = (float)uVar19;
                            fVar46 = 0.0;
                            if ((0.0 < fVar61) &&
                               (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                              fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                            }
                            uVar19 = (ulong)(uint)fStack00000000000000c4;
                            if (fStack00000000000000c4 <
                                (*(float *)(unaff_x19 + 0x97) -
                                (*(float *)((long)unaff_x19 + 0x4cc) - fVar61)) + fVar46) {
                              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                              }
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              in_stack_000017a8 = FUN_0358c15c();
                              lVar26 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar20 = FUN_036cee6c(lVar26,0,0);
                              if ((uVar20 & 1) != 0) {
                                plVar44 = (long *)unaff_x19[0x5d];
                                uVar21 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar44 != (long *)0x0) {
                                  (**(code **)(*plVar44 + 0x528))
                                            (plVar44,uVar21,*(undefined8 *)(*plVar44 + 0x530));
                                  lVar26 = unaff_x19[0x5d];
                                  if (lVar26 != 0) {
                                    *(int *)(lVar26 + 0x400) = (int)unaff_x19[0x80];
                                    FUN_0357ee30(lVar26,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                    plVar44 = (long *)unaff_x19[0x5d];
                                    if (plVar44 != (long *)0x0) {
                                      (**(code **)(*plVar44 + 0x7a8))
                                                (plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7b0));
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
                               ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x600000001U)
                                != 0)) || (in_stack_000017dc - 10 < 2)) ||
                             (in_stack_000017dc == 0xa0)) {
LAB_03552b54:
                            if (((in_stack_000017dc != 0xad) && (in_stack_000017dc != 0x200b)) &&
                               (in_stack_000017dc != 0x2060)) {
                              lVar26 = *in_stack_00000170;
                              if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x50), lVar29 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                              goto LAB_035575f4;
                              lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
                              *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
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
                            if ((*in_stack_00000170 == 0) ||
                               (lVar26 = *(long *)(*in_stack_00000170 + 0x50), lVar26 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto LAB_035575f4;
                            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
                            *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
                          }
                        }
                        if (((int)unaff_x19[0x5c] == 1) &&
                           ((in_stack_000017dc == 0x2d || (unaff_w23 != 1)))) {
                          if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                          fVar46 = *(float *)(unaff_x19 + 0x3d);
                          iVar14 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                          if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                          fVar47 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                          lVar26 = unaff_x19[0xca];
                          fVar61 = fStack0000000000000098;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar61 = 1.0;
                          }
                          if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
                          fVar49 = *(float *)((long)unaff_x19 + 0x404);
                          fVar51 = *(float *)(lVar26 + 0x2c);
                          fVar48 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
                          fVar58 = *_fStack00000000000000a8;
                          fVar48 = fVar49 * (fVar46 / (float)iVar14) * fVar47 * fVar61 * fVar51 *
                                   fVar48;
                          fVar46 = *_fStack00000000000000a0;
                          if ((in_stack_000017dc == 10) &&
                             (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                            if ((*in_stack_00000170 == 0) ||
                               (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
                            goto LAB_035574b8;
                            uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
                            if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_035575f4;
                            if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                            fVar61 = *(float *)(lVar26 + (long)(int)uVar13 * (long)iVar12 + 0x60);
                            iVar14 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                            if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                            fVar49 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                            lVar26 = unaff_x19[0xca];
                            fVar47 = fStack0000000000000098;
                            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                              fVar47 = 1.0;
                            }
                            if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
                            fVar51 = *(float *)((long)unaff_x19 + 0x404);
                            fVar62 = *(float *)(lVar26 + 0x2c);
                            fVar48 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
                            if ((*in_stack_00000170 == 0) ||
                               (lVar26 = *(long *)(*in_stack_00000170 + 0x50), lVar26 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto LAB_035575f4;
                            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            fVar58 = *(float *)(lVar26 + 0x60);
                            fVar46 = *(float *)(lVar26 + 100);
                            fVar48 = fVar51 * (fVar61 / (float)iVar14) * fVar49 * fVar47 * fVar62 *
                                     fVar48;
                          }
                          fVar49 = *(float *)(unaff_x19 + 0x9b);
                          fVar61 = 0.0;
                          fVar47 = 0.0;
                          if ((0.0 < fVar49) &&
                             (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          fVar62 = *(float *)(unaff_x19 + 0x97);
                          fVar67 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar51 = *(float *)(unaff_x19 + 200);
                          if ((char)unaff_x19[0x1e] == '\0') {
                            if ((unaff_x19[0xca] == 0) ||
                               (lVar26 = *(long *)(unaff_x19[0xca] + 0x20), lVar26 == 0))
                            goto LAB_035574b8;
                            FUN_03776e6c(&stack0x000008a0,lVar26,0);
                            fVar61 = (float)FUN_03776cb4(&stack0x00001700,0);
                          }
                          puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          fVar64 = *(float *)(unaff_x19 + 0x6c);
                          fVar46 = (fStack000000000000009c - fVar58) - fVar46;
                          bVar9 = true;
                          if ((fVar64 <= fVar46) && (bVar9 = false, !NAN(fVar64))) {
                            bVar9 = fVar64 == -1.0;
                          }
                          if (!bVar9) {
                            fVar46 = fVar64;
                          }
                          fVar58 = 1.0;
                          if ((uVar33 & 0x18) != 0) {
                            fVar58 = DAT_00d38acc;
                          }
                          if (((fVar62 - (fVar67 - fVar49)) + fVar47 < fStack00000000000000c4) &&
                             (ABS(fVar51) +
                              fVar48 * fVar61 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                              fVar58 * fVar46)) {
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                            lVar26 = *(long *)(*(long *)puVar7 + 0xb8);
                            memcpy(&stack0x00000528,(void *)(lVar26 + 0x788),0x378);
                            FUN_0209b210(lVar26 + 0x11f0,&stack0x00000528,
                                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                          }
                        }
                        lVar26 = *in_stack_00000170;
                        if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0))
                        goto LAB_035574b8;
                        if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
                        uVar13 = *(uint *)(unaff_x19 + 0x95);
                        lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
                        *(uint *)(lVar29 + 100) = uVar13;
                        *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x96];
                        if (((unaff_w23 & 1) == 0) &&
                           ((0xd < in_stack_000017dc ||
                            ((1 << (ulong)(in_stack_000017dc & 0x1f) & 0x2c00U) == 0)))) {
                          lVar26 = *(long *)(lVar26 + 0x50);
                          if (lVar26 == 0) goto LAB_035574b8;
LAB_0355346c:
                          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_035575f4;
                          *(int *)(lVar26 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                        }
                        else {
                          lVar26 = *(long *)(lVar26 + 0x50);
                          if (lVar26 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_035575f4;
                          if (*(int *)(lVar26 + (long)(int)uVar13 * 0x5c + 0x24) == 1)
                          goto LAB_0355346c;
                        }
                        if (in_stack_000017dc == 9) {
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar46 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar47 = *(float *)(unaff_x19 + 200);
                          fVar61 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
                          fVar46 = fVar57 * fVar46 * fVar61;
                          fVar61 = fVar46 * (float)(int)(fVar47 / fVar46);
                          uVar19 = (ulong)(uint)fVar61;
                          if (fVar61 <= fVar47) {
                            fVar61 = fVar47 + fVar46;
                          }
LAB_03553678:
                          *(float *)(unaff_x19 + 200) = fVar61;
                        }
                        else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                          if ((char)unaff_x19[0x1e] == '\0') {
                            if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                              fVar47 = 1.0;
                            }
                            else {
                              fVar47 = (float)thunk_FUN_036bc400(_fStack0000000000000078,0);
                            }
                            fVar61 = *(float *)(unaff_x19 + 200);
                            fVar48 = (float)FUN_03776cb4(&stack0x00001790,0);
                            if (unaff_x19[0x20] != 0) {
                              fVar46 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                              fVar61 = fVar61 + fVar46 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                         fVar57 * (fStack000000000000012c +
                                                                  fVar47 * fVar48) +
                                                         fStack00000000000000d4 *
                                                         (fStack00000000000000d0 +
                                                         fVar45 + *(float *)(unaff_x19[0x20] + 0x1ac
                                                                            )));
                              *(float *)(unaff_x19 + 200) = fVar61;
                              goto joined_r0x035535c0;
                            }
                            goto LAB_035574b8;
                          }
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fVar57 * fStack000000000000012c +
                                   fStack00000000000000d4 *
                                   (fStack00000000000000d0 + fVar45 + *(float *)(*unaff_x21 + 0x1ac)
                                   ));
                          uVar19 = (ulong)(uint)fVar61;
                          fVar61 = *(float *)(unaff_x19 + 200) - fVar61;
                          *(float *)(unaff_x19 + 200) = fVar61;
                          if ((in_stack_000017dc == 0x200b) || (uVar11 != 0)) {
                            fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
                            uVar19 = (ulong)(uint)fVar46;
                            fVar61 = fVar61 - fVar46;
                            goto LAB_03553678;
                          }
                        }
                        else {
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar46 = *(float *)(unaff_x19 + 200);
                          fVar61 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                            (*(float *)((long)unaff_x19 + 0x2ac) +
                                            (*(float *)(unaff_x19 + 0x56) - fVar50) +
                                            fStack00000000000000d4 *
                                            (fVar45 + *(float *)(*unaff_x21 + 0x1ac)));
                          *(float *)(unaff_x19 + 200) = fVar61;
joined_r0x035535c0:
                          if ((in_stack_000017dc == 0x200b) ||
                             (uVar19 = (ulong)(uint)fVar46, uVar11 != 0)) {
                            fVar46 = fStack00000000000000d4 * *(float *)((long)unaff_x19 + 0x2b4);
                            uVar19 = (ulong)(uint)fVar46;
                            fVar61 = fVar61 + fVar46;
                            goto LAB_03553678;
                          }
                        }
                        lVar26 = *in_stack_00000170;
                        if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0))
                        goto LAB_035574b8;
                        uVar13 = *unaff_x20;
                        uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
                        if (uVar33 <= uVar13) goto LAB_035575f4;
                        *(float *)(lVar29 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar61;
                        uVar36 = in_stack_000017dc;
                        if ((int)in_stack_000017dc < 0xd) {
                          if ((in_stack_000017dc - 10 < 2) || (in_stack_000017dc == 3))
                          goto LAB_0355371c;
LAB_03553700:
                          if (((unaff_w23 & in_stack_000017dc == 0x2d) != 0) ||
                             ((float)uVar13 == in_stack_00000088._4_4_)) goto LAB_0355371c;
                        }
                        else {
                          if (1 < in_stack_000017dc - 0x2028) {
                            if (in_stack_000017dc != 0xd) goto LAB_03553700;
                            uVar19 = 0;
                            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                            if ((float)uVar13 != in_stack_00000088._4_4_) goto LAB_03553c8c;
                          }
LAB_0355371c:
                          if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                            fVar46 = *(float *)(unaff_x19 + 0x99);
                            fVar61 = *(float *)(unaff_x19 + 0x9a);
                            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            fVar46 = fVar46 - fVar61;
                            if (((fStack000000000000005c < ABS(fVar46)) &&
                                (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                               (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                              FUN_0358c860(fVar46);
                              *(float *)((long)unaff_x19 + 0x4c4) =
                                   *(float *)((long)unaff_x19 + 0x4c4) - fVar46;
                              *(float *)(unaff_x19 + 0x9b) = fVar46 + *(float *)(unaff_x19 + 0x9b);
                              puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar26 = *(long *)puVar7;
                              }
                              lVar29 = *(long *)(lVar26 + 0xb8);
                              if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x95]) {
                                if (*(int *)(lVar26 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar29 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                }
                                FUN_0209b778(lVar29 + 0x11f0,&stack0x000008a0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x788),&stack0x000008a0,
                                       0x378);
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (*(long *)(lVar26 + 0xb8) + 0x818,0);
                                lVar26 = *(long *)(*(long *)puVar7 + 0xb8);
                                *(float *)(lVar26 + 0x7bc) = fVar46 + *(float *)(lVar26 + 0x7bc);
                                *(float *)(lVar26 + 0x800) = fVar46 + *(float *)(lVar26 + 0x800);
                                memcpy(&stack0x000001b0,(void *)(lVar26 + 0x788),0x378);
                                FUN_0209b210(lVar26 + 0x11f0,&stack0x000001b0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                              }
                            }
                          }
                          fVar47 = *(float *)(unaff_x19 + 0x9b);
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                          fVar61 = *(float *)((long)unaff_x19 + 0x4cc) - fVar47;
                          fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
                          if (fVar61 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                            fVar46 = fVar61;
                          }
                          *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
                          fVar48 = *(float *)(unaff_x19 + 0x99);
                          if (in_stack_000017d4 == '\0') {
                            in_stack_000017d8 = fVar46;
                          }
                          if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                             (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                              ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                            in_stack_000017d4 = '\x01';
                          }
                          lVar26 = *in_stack_00000170;
                          if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x50), lVar29 == 0))
                          goto LAB_035574b8;
                          uVar13 = *(uint *)(unaff_x19 + 0x95);
                          if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_035575f4;
                          lVar30 = unaff_x19[0x93];
                          lVar35 = lVar29 + (long)(int)uVar13 * 0x5c;
                          *(int *)(lVar35 + 0x34) = (int)lVar30;
                          uVar33 = *(uint *)(unaff_x19 + 0x93);
                          if ((int)lVar30 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                            uVar33 = *(uint *)((long)unaff_x19 + 0x49c);
                          }
                          *(uint *)((long)unaff_x19 + 0x49c) = uVar33;
                          *(uint *)(lVar35 + 0x38) = uVar33;
                          *(undefined4 *)(unaff_x19 + 0x94) =
                               *(undefined4 *)((long)unaff_x19 + 0x494);
                          *(undefined4 *)(lVar35 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                          iVar14 = *(int *)((long)unaff_x19 + 0x49c);
                          if ((int)uVar33 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                            iVar14 = *(int *)((long)unaff_x19 + 0x4a4);
                          }
                          *(int *)((long)unaff_x19 + 0x4a4) = iVar14;
                          *(int *)(lVar35 + 0x40) = iVar14;
                          *(int *)(lVar35 + 0x24) =
                               (*(int *)(lVar35 + 0x3c) - *(int *)(lVar35 + 0x34)) + 1;
                          *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                          lVar26 = *(long *)(lVar26 + 0x38);
                          if (lVar26 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar26 + 0x18) <= uVar33) goto LAB_035575f4;
                          uVar66 = *(undefined4 *)
                                    (lVar26 + (long)(int)uVar33 * (long)iVar12 + 0x11c);
                          lVar29 = lVar29 + (long)(int)uVar13 * 0x5c;
                          *(float *)(lVar29 + 0x70) = fVar61;
                          *(undefined4 *)(lVar29 + 0x6c) = uVar66;
                          lVar26 = *in_stack_00000170;
                          if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x50), lVar29 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto LAB_035575f4;
                          lVar26 = *(long *)(lVar26 + 0x38);
                          if (lVar26 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                          goto LAB_035575f4;
                          fVar48 = fVar48 - fVar47;
                          uVar19 = (ulong)(uint)fVar48;
                          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                          *(undefined4 *)(lVar29 + 0x74) =
                               *(undefined4 *)
                                (lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24
                                + 0x128);
                          *(float *)(lVar29 + 0x78) = fVar48;
                          lVar26 = *in_stack_00000170;
                          if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x50), lVar30 == 0))
                          goto LAB_035574b8;
                          lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto LAB_035575f4;
                          lVar29 = lVar30 + lVar35 * 0x5c;
                          *(float *)(lVar29 + 0x44) =
                               *(float *)(lVar29 + 0x74) - fVar57 * fStack000000000000015c;
                          *(float *)(lVar29 + 0x5c) = in_stack_000000f8._4_4_;
                          if (*(int *)(lVar29 + 0x24) == 1) {
                            *(int *)(lVar30 + lVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                          }
                          if ((*unaff_x21 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0))
                          goto LAB_035574b8;
                          lVar43 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                          uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
                          if (uVar33 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
                          if ((*(char *)(lVar29 + lVar43 * unaff_x24 + 0x194) == '\0') &&
                             (lVar43 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                             uVar33 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_035575f4;
                          lVar30 = lVar30 + lVar35 * 0x5c;
                          fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (fStack00000000000000d4 *
                                    (fStack00000000000000d0 +
                                    fVar45 + *(float *)(*unaff_x21 + 0x1ac)) -
                                   *(float *)((long)unaff_x19 + 0x2ac));
                          fVar45 = -fVar46;
                          if ((char)unaff_x19[0x1e] != '\0') {
                            fVar45 = fVar46;
                          }
                          *(float *)(lVar30 + 0x58) =
                               *(float *)(lVar29 + lVar43 * unaff_x24 + 0x144) + fVar45;
                          *(float *)(lVar30 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                          *(float *)(lVar30 + 0x54) = fVar61;
                          *(float *)(lVar30 + 0x48) = in_stack_00000060 + (fVar48 - fVar61);
                          *(float *)(lVar30 + 0x4c) = fVar48;
                          if ((int)in_stack_000017dc < 0x2d) {
                            if (in_stack_000017dc - 10 < 2) {
LAB_03553b60:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_0358c4f0();
                              lVar26 = unaff_x19[0x6d];
                              *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                              iVar14 = (int)unaff_x19[0x95] + 1;
                              *(int *)(unaff_x19 + 0x95) = iVar14;
                              *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                              if ((lVar26 != 0) && (*(long *)(lVar26 + 0x50) != 0)) {
                                if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar14) {
                                  FUN_0358ca18();
                                  lVar26 = unaff_x19[0x6d];
                                  if (lVar26 == 0) goto LAB_035574b8;
                                }
                                lVar26 = *(long *)(lVar26 + 0x38);
                                if (lVar26 != 0) {
                                  if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
                                    fVar45 = *(float *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 +
                                                       0x154);
                                    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                      if ((in_stack_000017dc == 0x2029) ||
                                         (fVar46 = 0.0, in_stack_000017dc == 10)) {
                                        fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                                      }
                                      uVar24 = 0;
                                      fVar46 = fVar45 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc))
                                               + fStack0000000000000058 *
                                                 (in_stack_00000050._4_4_ +
                                                 *(float *)((long)unaff_x19 + 700)) +
                                               fStack00000000000000d4 *
                                               (*(float *)(unaff_x19 + 0x57) + fVar46) +
                                               *(float *)(unaff_x19 + 0x9b);
                                    }
                                    else {
                                      if ((in_stack_000017dc == 0x2029) ||
                                         (fVar46 = 0.0, in_stack_000017dc == 10)) {
                                        fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                                      }
                                      uVar24 = 1;
                                      fVar46 = *(float *)(unaff_x19 + 0x9b) +
                                               *(float *)(unaff_x19 + 0x58) +
                                               fStack00000000000000d4 *
                                               (*(float *)(unaff_x19 + 0x57) + fVar46);
                                    }
                                    *(float *)(unaff_x19 + 0x9b) = fVar46;
                                    *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar24;
                                    puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar26 = *(long *)puVar7;
                                    }
                                    uVar18 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
                                    *(float *)(unaff_x19 + 0x9a) = fVar45;
                                    uVar19 = NEON_rev64(uVar18,4);
                                    unaff_x19[0x99] = uVar19;
                                    *(float *)(unaff_x19 + 200) =
                                         *(float *)(unaff_x19 + 0x81) + 0.0 +
                                         *(float *)((long)unaff_x19 + 0x40c);
                                    FUN_0358c4f0();
                                    FUN_0358c4f0();
                                    *(int *)((long)unaff_x19 + 0x494) =
                                         *(int *)((long)unaff_x19 + 0x494) + 1;
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
                              uVar36 = 3;
                            }
                          }
                          else if ((in_stack_000017dc - 0x2028 < 2) || (in_stack_000017dc == 0x2d))
                          goto LAB_03553b60;
                        }
LAB_03553c8c:
                        uVar13 = *unaff_x20;
                        if (uVar33 <= uVar13) goto LAB_035575f4;
                        if (*(char *)(lVar29 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
                          lVar29 = lVar29 + (long)(int)uVar13 * unaff_x24;
                          uVar19 = *(ulong *)(lVar29 + 0x11c);
                          uVar20 = *(ulong *)(in_stack_00000080 + 0x230);
                          *(ulong *)(in_stack_00000080 + 0x230) =
                               uVar20 ^ (uVar20 ^ uVar19) &
                                        ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) <
                                                         (float)(uVar19 >> 0x20)),
                                                  -(uint)((float)uVar20 < (float)uVar19));
                          uVar20 = *(ulong *)(in_stack_00000080 + 0x238);
                          uVar19 = *(ulong *)(lVar29 + 0x128);
                          *(ulong *)(in_stack_00000080 + 0x238) =
                               uVar20 ^ (uVar20 ^ uVar19) &
                                        ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) <
                                                         (float)(uVar20 >> 0x20)),
                                                  -(uint)((float)uVar19 < (float)uVar20));
                        }
                        if (((int)unaff_x19[0x5c] == 5) &&
                           ((0xd < uVar36 || ((1 << (ulong)(uVar36 & 0x1f) & 0x2c00U) == 0)))) {
                          lVar29 = *(long *)(lVar26 + 0x58);
                          if (lVar29 == 0) goto LAB_035574b8;
                          iVar14 = (int)unaff_x19[0x96] + 1;
                          if (*(int *)(lVar29 + 0x18) < iVar14) {
                            if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_01ff02b8((long *)(lVar26 + 0x58),iVar14,1,
                                         *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                            lVar26 = *in_stack_00000170;
                            if (lVar26 == 0) goto LAB_035574b8;
                          }
                          lVar29 = *(long *)(lVar26 + 0x58);
                          if (lVar29 == 0) goto LAB_035574b8;
                          uVar33 = *(uint *)(unaff_x19 + 0x96);
                          lVar30 = (long)(int)uVar33;
                          uVar13 = *(uint *)(lVar29 + 0x18);
                          if (uVar13 <= uVar33) goto LAB_035575f4;
                          lVar35 = lVar29 + lVar30 * 0x14;
                          fVar46 = *(float *)(lVar35 + 0x30);
                          uVar19 = (ulong)(uint)fVar46;
                          *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                          fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
                          if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                            fVar45 = fVar46;
                          }
                          *(float *)(lVar35 + 0x30) = fVar45;
                          uVar36 = *(uint *)((long)unaff_x19 + 0x494);
                          if (uVar36 == 0 && uVar33 == 0) {
                            *(uint *)(lVar29 + (ulong)uVar33 * 0x14 + 0x20) = uVar36;
                          }
                          else {
                            uVar5 = uVar36 - 1;
                            if (0 < (int)uVar36) {
                              lVar26 = *(long *)(lVar26 + 0x38);
                              if (lVar26 == 0) goto LAB_035574b8;
                              if (*(uint *)(lVar26 + 0x18) <= uVar5) goto LAB_035575f4;
                              if (uVar33 != *(uint *)(lVar26 + (ulong)uVar5 *
                                                               (unaff_x24 & 0xffffffff) + 0x68)) {
                                if (uVar33 - 1 < uVar13) {
                                  *(uint *)(lVar29 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) =
                                       uVar5;
                                  *(uint *)(lVar29 + 0x20 + lVar30 * 0x14) = uVar36;
                                  goto LAB_03553d10;
                                }
                                goto LAB_035575f4;
                              }
                            }
                            if ((float)uVar36 == in_stack_00000088._4_4_) {
                              *(float *)(lVar29 + lVar30 * 0x14 + 0x24) = in_stack_00000088._4_4_;
                            }
                          }
                        }
LAB_03553d10:
                        puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (((char)unaff_x19[0x5b] == '\0') &&
                           ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                            ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                        goto LAB_035542ac;
                        if ((uVar11 == 0) &&
                           (((in_stack_000017dc != 0x2d && (in_stack_000017dc != 0x200b)) &&
                            (in_stack_000017dc != 0xad)))) {
                          if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
                            if (((((0x2bfd < in_stack_000017dc - 0xac01) &&
                                  (0xfd < in_stack_000017dc - 0x1101)) &&
                                 (0x1d < in_stack_000017dc - 0xa961)) ||
                                (uVar20 = FUN_03597a54(0), (uVar20 & 1) != 0)) &&
                               ((((0xed < in_stack_000017dc - 0xff01 &&
                                  (0x1d < in_stack_000017dc - 0xfe31)) &&
                                 (0x717d < in_stack_000017dc - 0x2e81)) &&
                                (0x1fd < in_stack_000017dc - 0xf901)))) goto LAB_03553f78;
                            lVar26 = FUN_035978e8(0);
                            if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) goto LAB_035574b8;
                            uVar13 = FUN_0219c130(*(long *)(lVar26 + 0x10),&stack0x000008a0,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                            if ((int)in_stack_00000088._4_4_ <= (int)*unaff_x20) {
                              in_stack_000008a0 = in_stack_000017dc;
                              if ((uVar13 & 1) == 0) {
LAB_03554270:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                FUN_0358c4f0();
                                goto LAB_035542a8;
                              }
LAB_035541dc:
                              if (uVar17 != uVar55 || ((bStack0000000000000070 ^ 0xff) & 1) != 0)
                              goto LAB_035542ac;
                              if (uVar11 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
                              goto LAB_0355422c;
                            }
                            lVar26 = FUN_035978e8(0);
                            if (((lVar26 == 0) || (*in_stack_00000170 == 0)) ||
                               (lVar29 = *(long *)(*in_stack_00000170 + 0x38), lVar29 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar29 + 0x18) <= *unaff_x20 + 1) goto LAB_035575f4;
                            if (*(long *)(lVar26 + 0x18) == 0) goto LAB_035574b8;
                            in_stack_000008a0 =
                                 (uint)*(ushort *)
                                        (lVar29 + (long)(int)(*unaff_x20 + 1) * (long)iVar12 + 0x20)
                            ;
                            uVar20 = FUN_0219c130(*(long *)(lVar26 + 0x18),&stack0x000008a0,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                            if ((uVar13 & 1) != 0) goto LAB_035541dc;
                            if ((uVar20 & 1) == 0) goto LAB_03554270;
                            if ((bStack0000000000000070 & 1) == 0) goto LAB_035542a8;
                            if (uVar11 != 0) {
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
                            if (uVar11 == 0) goto UnityEngine_Animator__set_animatePhysics;
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
                              ((1L << ((ulong)(in_stack_000017dc - 0x2007) & 0x3f) & 0x10000000401U)
                               != 0)) ||
                             ((in_stack_000017dc == 0xa0 || (in_stack_000017dc == 0x2060))))
                          goto LAB_03553ef0;
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
LAB_03550bd0:
                        in_stack_000017a8 = in_stack_000017a8 + 1;
                        lVar26 = unaff_x19[0x8f];
                        if (lVar26 != 0) {
                          if ((int)in_stack_000017a8 < (int)*(uint *)(lVar26 + 0x18)) {
                            if (*(uint *)(lVar26 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
                            uVar11 = *(uint *)(lVar26 + (long)(int)in_stack_000017a8 * 0xc + 0x20);
                            if (uVar11 == 0) goto LAB_0355459c;
                            if (5 < in_stack_00000168._4_4_) {
                              uVar21 = FUN_0276793c(&stack0x000017dc,0);
                              uVar18 = FUN_0276793c(&stack0x000017a8,0);
                              uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,
                                                    uVar21,*(undefined8 *)
                                                            OVRPlugin_OVRP_1_42_0_TypeInfo,uVar18,0)
                              ;
                              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                              }
                              FUN_0367ae18(uVar21,0);
                              in_stack_000017c8 = CONCAT44(3,*unaff_x20);
                            }
                            if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (uVar11 == 0x3c))
                            goto code_r0x0355094c;
                            if ((*in_stack_00000170 != 0) &&
                               (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 != 0)) {
                              if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
                                lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                                *(undefined4 *)((long)unaff_x19 + 0x644) =
                                     *(undefined4 *)(lVar26 + 0x2c);
                                *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + 0x58);
                                unaff_x19[0x20] = *(long *)(lVar26 + 0x38);
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                goto LAB_035509d4;
                              }
                              goto LAB_035575f4;
                            }
                            goto LAB_035574b8;
                          }
LAB_0355459c:
                          fVar45 = (float)uVar19;
                          if (((char)unaff_x19[0x47] != '\0') &&
                             (fVar45 = DAT_00d389f8,
                             DAT_00d389f8 <
                             *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                            fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
                            fVar46 = *(float *)((long)unaff_x19 + 0x254);
                            if ((fVar45 < fVar46) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                              if (*(float *)((long)unaff_x19 + 0x2d4) <
                                  *(float *)(unaff_x19 + 0x5a) / 100.0) {
                                *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                              }
                              fVar61 = (*(float *)((long)unaff_x19 + 0x23c) - fVar45) * 0.5;
                              if (fVar61 <= DAT_00d38b84) {
                                fVar61 = DAT_00d38b84;
                              }
                              *(float *)(unaff_x19 + 0x48) = fVar45;
                              fVar61 = (fVar45 + fVar61) * 20.0 + 0.5;
                              fVar45 = DAT_00d38e60;
                              if (fVar61 != INFINITY) {
                                fVar45 = (float)(int)fVar61 / 20.0;
                              }
                              if (fVar46 <= fVar45) {
                                fVar45 = fVar46;
                              }
                              goto LAB_03554658;
                            }
                          }
                          *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                          puVar7 = PTR_DAT_03cbdf88;
                          if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                            uVar21 = FUN_0276793c(_fStack0000000000000038,0);
                            uVar18 = FUN_0277fa90(_fStack0000000000000040,0);
                            uVar21 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,
                                                  uVar21,*(undefined8 *)
                                                          OVRPlugin_OVRP_1_3_0_TypeInfo,uVar18,0);
                            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                            }
                            FUN_0367a6ec(uVar21,0);
                          }
                          puVar8 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_000017dc == 3))))
                          {
                            (**(code **)(*unaff_x19 + 0x918))();
                            goto LAB_03554724;
                          }
                          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar26 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar26 = *(long *)puVar8;
                          }
                          plVar44 = (long *)OVRPlugin_Media_TypeInfo;
                          lVar26 = **(long **)(lVar26 + 0xb8);
                          if (lVar26 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                          goto LAB_035575f4;
                          iVar12 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 +
                                           0x54) << 2;
                          if ((*in_stack_00000170 == 0) ||
                             (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
                          goto LAB_035574b8;
                          if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                          FUN_035968e8(lVar26 + 0x20,0,0);
                          if (DAT_0411f172 == '\0') {
                            FUN_01ab69ac(PTR_DAT_03cbded8);
                            DAT_0411f172 = '\x01';
                          }
                          iVar14 = (int)unaff_x19[0x4e];
                          in_stack_000000f8._4_4_ = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                          uStack00000000000000e8 =
                               *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                          lVar26 = unaff_x19[0xe3];
                          in_stack_000000b8 = (long *)uStack00000000000000e8;
                          fStack00000000000000c4 = in_stack_000000f8._4_4_;
                          if (iVar14 < 0x401) {
                            if (iVar14 == 0x100) {
                              if (lVar26 == 0) goto LAB_035574b8;
                              if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_035575f4;
                              uVar21 = *(undefined8 *)(lVar26 + 0x30);
                              if ((int)unaff_x19[0x5c] == 5) {
                                if ((*in_stack_00000170 == 0) ||
                                   (lVar29 = *(long *)(*in_stack_00000170 + 0x58), lVar29 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030)
                                goto LAB_035575f4;
                                fVar45 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 *
                                                             0x14 + 0x28);
                              }
                              else {
                                fVar45 = *(float *)(unaff_x19 + 0x97);
                              }
                              fStack00000000000000c4 =
                                   fStack000000000000002c + 0.0 + *(float *)(lVar26 + 0x2c);
                              fVar45 = (0.0 - fVar45) - fStack0000000000000020;
                            }
                            else if (iVar14 == 0x200) {
                              if (lVar26 == 0) goto LAB_035574b8;
                              if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
                              goto LAB_035575f4;
                              fStack00000000000000c4 =
                                   (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                              uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                              if ((int)unaff_x19[0x5c] == 5) {
                                if ((*in_stack_00000170 == 0) ||
                                   (lVar26 = *(long *)(*in_stack_00000170 + 0x58), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030)
                                goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)uStack0000000000000030 * 0x14;
                                fStack00000000000000c4 =
                                     fStack000000000000002c + 0.0 + fStack00000000000000c4;
                                fVar45 = ((fStack0000000000000020 + *(float *)(lVar26 + 0x28) +
                                          *(float *)(lVar26 + 0x30)) - fStack0000000000000024) *
                                         -0.5 + 0.0;
                              }
                              else {
                                fStack00000000000000c4 =
                                     fStack000000000000002c + 0.0 + fStack00000000000000c4;
                                fVar45 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) +
                                          in_stack_000017d8) - fStack0000000000000024) * -0.5 + 0.0;
                              }
                            }
                            else {
                              if (iVar14 != 0x400) goto LAB_03554c4c;
                              if (lVar26 == 0) goto LAB_035574b8;
                              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                              uVar21 = *(undefined8 *)(lVar26 + 0x24);
                              if ((int)unaff_x19[0x5c] == 5) {
                                if ((*in_stack_00000170 == 0) ||
                                   (lVar29 = *(long *)(*in_stack_00000170 + 0x58), lVar29 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030)
                                goto LAB_035575f4;
                                in_stack_000017d8 =
                                     *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 +
                                               0x30);
                              }
                              fStack00000000000000c4 =
                                   fStack000000000000002c + 0.0 + *(float *)(lVar26 + 0x20);
                              fVar45 = fStack0000000000000024 + (0.0 - in_stack_000017d8);
                            }
LAB_03554c3c:
                            in_stack_000000b8 =
                                 (long *)CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,
                                                  (float)uVar21 + fVar45);
                          }
                          else if (iVar14 == 0x800) {
                            if (lVar26 == 0) goto LAB_035574b8;
                            if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
                            goto LAB_035575f4;
                            fVar45 = fStack000000000000002c + 0.0 +
                                     (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                            in_stack_000000b8 =
                                 (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                         0x20)) * 0.5 + 0.0,
                                                  ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                  (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + 0.0
                                                 );
                            fStack00000000000000c4 = fVar45;
                          }
                          else {
                            if (iVar14 == 0x1000) {
                              if (lVar26 == 0) goto LAB_035574b8;
                              if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0))
                              {
                                uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                         0x20)) * 0.5,
                                                  ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                  (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                                fStack00000000000000c4 =
                                     fStack000000000000002c + 0.0 +
                                     (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                                fVar45 = 0.0 - ((fStack0000000000000020 +
                                                 *(float *)(unaff_x19 + 0x9d) +
                                                *(float *)(unaff_x19 + 0x9c)) -
                                               fStack0000000000000024) * 0.5;
                                goto LAB_03554c3c;
                              }
                              goto LAB_035575f4;
                            }
                            if (iVar14 == 0x2000) {
                              if (lVar26 == 0) goto LAB_035574b8;
                              if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
                              goto LAB_035575f4;
                              fVar45 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) -
                                              fStack0000000000000020) - fStack0000000000000024) *
                                             0.5;
                              in_stack_000000b8 =
                                   (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                           0x20)) * 0.5 + 0.0,
                                                    ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                    (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 +
                                                    fVar45);
                              fStack00000000000000c4 =
                                   fStack000000000000002c + 0.0 +
                                   (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                            }
                          }
LAB_03554c4c:
                          if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
                          uVar21 = FUN_03912334(unaff_x19[0xe5],0);
                          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)puVar7);
                          }
                          uVar20 = FUN_036d35a8(uVar21,0,0);
                          lVar26 = FUN_0357f060();
                          if (lVar26 == 0) goto LAB_035574b8;
                          FUN_036df824(lVar26,0);
                          *(float *)(unaff_x19 + 0xe2) = fVar45;
                          if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
                          iVar14 = FUN_039117fc(unaff_x19[0xe5],0);
                          if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
                          fVar46 = (float)FUN_03911954(unaff_x19[0xe5],0);
                          uVar66 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                          FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                          if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                          }
                          if (DAT_0412df1c == '\0') {
                            FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                            DAT_0412df1c = '\x01';
                          }
                          puVar7 = OVRPlugin_Mesh_TypeInfo;
                          lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
                          if (*(int *)(lVar26 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar26 = *(long *)puVar7;
                          }
                          puVar27 = *(undefined4 **)(lVar26 + 0xb8);
                          uVar54 = (ulong)(uint)puVar27[1];
                          uVar19 = (ulong)(uint)puVar27[2];
                          uVar56 = (ulong)(uint)puVar27[3];
                          FUN_035683a4(*puVar27,uVar54,uVar19,uVar56,&stack0x000017b0,0x4000ffff,0);
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          lVar26 = *in_stack_00000170;
                          if (lVar26 == 0) goto LAB_035574b8;
                          uVar11 = *unaff_x20;
                          if ((int)uVar11 < 1) {
                            fStack00000000000000d4 = 0.0;
                            iVar12 = 0;
                            goto LAB_03556f00;
                          }
                          lVar26 = *(long *)(lVar26 + 0x38);
                          fVar45 = ABS(fVar45);
                          fVar61 = 1.0;
                          if ((uVar20 & 1) == 0) {
                            fVar61 = fVar45;
                          }
                          if (lVar26 == 0) goto LAB_035574b8;
                          bVar10 = false;
                          bVar6 = false;
                          _iStack0000000000000128 = 0;
                          bVar9 = false;
                          fStack00000000000000d4 = 0.0;
                          fStack0000000000000028 = 0.0;
                          fStack0000000000000158 = 0.0;
                          in_stack_00000068._4_4_ = 0;
                          lVar29 = 0x2e0;
                          fVar48 = 0.0;
                          fVar47 = 0.0;
                          fStack00000000000000c8 = fStack00000000000000d8;
                          fStack0000000000000104 =
                               *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                         + 0x15a8);
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
                          uVar17 = 1;
                          uVar55 = 0;
                          goto LAB_03554e78;
                        }
                        goto LAB_035574b8;
                      }
                      goto LAB_035575f4;
                    }
                    goto LAB_035574b8;
                  }
                  goto LAB_035575f4;
                }
                goto LAB_035574b8;
              }
              goto LAB_035575f4;
            }
          }
        }
      }
    }
  }
  goto LAB_035574b8;
code_r0x0355094c:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar20 = FUN_03586568();
  if (((uVar20 & 1) != 0) &&
     (in_stack_000017a8 = in_stack_0000178c, in_stack_000017dc = uVar11,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_03550bd0;
LAB_035509d4:
  if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  uVar17 = *unaff_x20;
  if (*(uint *)(lVar26 + 0x18) <= uVar17) goto LAB_035575f4;
  lVar29 = (long)(int)uVar17;
  unaff_w26 = (uint)*(byte *)(lVar26 + lVar29 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  unaff_w27 = (undefined4)unaff_x19[0x24];
  if ((uint)in_stack_000017c8 == uVar17) {
    uVar11 = (uint)((ulong)in_stack_000017c8 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (uVar11 == 0x2026) {
      *(long *)(lVar26 + lVar29 * unaff_x24 + 0x30) = unaff_x19[0xca];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar26 + 0x2c) = 0;
      *(long *)(lVar26 + 0x38) = unaff_x19[0xcb];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((unaff_x19[0x6d] == 0) || (lVar26 = *(long *)(unaff_x19[0x6d] + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      uVar17 = *unaff_x20;
      if (*(uint *)(lVar26 + 0x18) <= uVar17) goto LAB_035575f4;
      unaff_w23 = 1;
      *(int *)(lVar26 + (long)(int)uVar17 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_000017c8 = CONCAT44(3,uVar17 + 1);
    }
    else if (uVar11 == 3) {
      if ((*unaff_x21 == 0) || (lVar30 = FUN_03568ac0(*unaff_x21,0), lVar30 == 0))
      goto LAB_035574b8;
      FUN_0219b634(lVar30,&stack0x00000c18,&stack0x000008a0,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (*(uint *)(lVar26 + 0x18) <= uVar17) goto LAB_035575f4;
      *(ulong *)(lVar26 + lVar29 * unaff_x24 + 0x30) = CONCAT44(in_stack_000008a4,in_stack_000008a0)
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar17 = *(uint *)((long)unaff_x19 + 0x494);
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
  in_stack_000017dc = uVar11;
  if (((int)uVar17 < *(int *)((long)unaff_x19 + 0x324)) && (uVar11 != 3)) {
    if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
    goto LAB_035574b8;
    if (*(uint *)(lVar26 + 0x18) <= uVar17) goto LAB_035575f4;
    lVar26 = lVar26 + (long)(int)uVar17 * (long)iVar12;
    *(undefined1 *)(lVar26 + 0x194) = 0;
    *(undefined2 *)(lVar26 + 0x20) = 0x200b;
    *(undefined4 *)(lVar26 + 100) = 0;
    *unaff_x20 = uVar17 + 1;
    goto LAB_03550bd0;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar14 == 0) {
    uVar17 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar17 >> 4 & 1) == 0) {
      if ((uVar17 >> 3 & 1) == 0) {
        fStack0000000000000158 = 1.0;
        if ((uVar17 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(uVar11,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b8410(uVar11,0);
            uVar11 = uVar11 & 0xffff;
            fStack0000000000000158 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8070(uVar11,0);
        fStack0000000000000158 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8594(uVar11,0);
          goto LAB_03550fdc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b812c(uVar11,0);
      fStack0000000000000158 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8410(uVar11,0);
LAB_03550fdc:
        fStack0000000000000158 = 1.0;
        uVar11 = uVar11 & 0xffff;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x644);
    in_stack_000017dc = uVar11;
  }
  else {
    fStack0000000000000158 = 1.0;
  }
  unaff_x28 = in_stack_00000170;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *in_stack_000000b8 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) ||
         (lVar26 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar26 == 0))
      goto LAB_035574b8;
      FUN_02215a88(lVar26,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                   *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      unaff_x29 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
      if (unaff_x29 != 0) {
        if (in_stack_000017dc == 0x3c) {
          in_stack_000017dc = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar26 = *(long *)puVar7;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_035574b8;
        fVar45 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar12 = FUN_03776950(&stack0x00001720,0);
        if (*unaff_x21 == 0) goto LAB_035574b8;
        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
        fVar46 = (float)FUN_03776960(&stack0x00001720,0);
        in_stack_00000150 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          in_stack_00000150 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        in_stack_00000150 = (fVar45 / (float)iVar12) * fVar46 * in_stack_00000150;
        iVar12 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
        fStack000000000000015c = *(float *)(unaff_x19 + 0x3d);
        if (iVar12 < 1) {
          if (*unaff_x21 == 0) goto LAB_035574b8;
          unaff_w25 = FUN_03776950(*unaff_x21 + 0x50,0);
          if (*unaff_x21 == 0) goto LAB_035574b8;
          unaff_s8 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
          unaff_s9 = fStack0000000000000098;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            unaff_s9 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
          unaff_s12 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_035574b8;
          FUN_03776e6c(&stack0x000008a0,*(long *)(unaff_x29 + 0x20),0);
          in_x9 = &stack0x000008a0;
          uVar21 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
          param_2 = &stack0x00001700;
          uVar18 = in_stack_000008a8;
          goto code_r0x0355130c;
        }
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        iVar12 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar45 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_035574b8;
        fVar61 = *(float *)(unaff_x29 + 0x2c);
        fVar46 = fStack0000000000000098;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar46 = 1.0;
        }
        fVar48 = (float)FUN_03776ea8(*(long *)(unaff_x29 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar47 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar57 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_035574b8;
        fVar50 = *(float *)((long)unaff_x19 + 0x404);
        fVar49 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
        fVar49 = in_stack_00000150 * fVar57 * fVar50 * fVar49;
        fVar46 = (fStack000000000000015c / (float)iVar12) * fVar45 * fVar46 * fVar61 * fVar48;
        fVar48 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
        goto LAB_035513e0;
      }
      goto LAB_03550bd0;
    }
    lVar26 = *in_stack_00000170;
    fVar49 = 0.0;
    uVar19 = 0;
    if (in_stack_000017dc != 3 && in_stack_000017dc != 0xad) {
      uVar19 = uVar54;
    }
    if (lVar26 == 0) goto LAB_035574b8;
    fVar47 = 0.0;
    fVar48 = 0.0;
    uVar20 = uVar54;
    uVar54 = uVar19;
    uVar21 = in_stack_000017c8;
    goto LAB_035514cc;
  }
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_000000e0 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000e0);
  if (*in_stack_000000e0 == 0) goto LAB_03550bd0;
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *unaff_x21 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  *in_stack_00000160 = *(long *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x38), lVar26 == 0))
  goto LAB_035574b8;
  uVar17 = *unaff_x20;
  uVar11 = *(uint *)(lVar26 + 0x18);
  if (uVar11 <= uVar17) goto LAB_035575f4;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + (long)(int)uVar17 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 != 0) {
    lVar29 = unaff_x19[0x8f];
    if (lVar29 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar29 + 0x18) <= in_stack_000017a8) goto LAB_035575f4;
    if ((*(int *)(lVar29 + (long)(int)in_stack_000017a8 * 0xc + 0x20) == 10) &&
       (uVar17 != *(uint *)(unaff_x19 + 0x93))) {
      if (uVar11 <= uVar17 - 1) goto LAB_035575f4;
      if (*unaff_x21 == 0) goto LAB_035574b8;
      fVar45 = *(float *)(lVar26 + (long)(int)(uVar17 - 1) * (long)iVar12 + 0x60);
      iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
      lVar26 = *unaff_x21;
      goto joined_r0x03552c2c;
    }
  }
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar45 = *(float *)(unaff_x19 + 0x3d);
  iVar12 = FUN_03776950(*unaff_x21 + 0x50,0);
  lVar26 = unaff_x19[0x20];
joined_r0x03552c2c:
  if (lVar26 == 0) goto LAB_035574b8;
  fVar61 = (float)FUN_03776960(lVar26 + 0x50,0);
  fVar46 = fStack0000000000000098;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar46 = 1.0;
  }
  fVar48 = 0.0;
  fVar47 = 0.0;
  if ((unaff_w23 & in_stack_000017dc == 0x2026) == 0) {
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar47 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_035574b8;
    fVar48 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
  }
  lVar26 = unaff_x19[0xc9];
  if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_035574b8;
  fVar50 = *(float *)((long)unaff_x19 + 0x404);
  fVar58 = *(float *)(lVar26 + 0x2c);
  fVar57 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar51 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
  if (*unaff_x21 == 0) goto LAB_035574b8;
  fVar62 = *(float *)((long)unaff_x19 + 0x404);
  fVar49 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
  lVar26 = unaff_x19[0x6d];
  if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_035575f4;
  lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar29 + 0x2c) = 0;
  fVar46 = ((fStack0000000000000158 * fVar45) / (float)iVar12) * fVar61 * fVar46;
  fVar57 = fVar46 * fVar50 * fVar58 * fVar57;
  uVar20 = (ulong)(uint)fVar57;
  *(float *)(lVar29 + 0x160) = fVar57;
  uVar11 = *(uint *)(unaff_x19 + 0x24);
  fVar49 = fVar46 * fVar51 * fVar62 * fVar49;
  if (uVar11 == 0) {
    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
    goto LAB_035514b0;
  }
  lVar29 = unaff_x19[0xe1];
  if (lVar29 == 0) goto LAB_035574b8;
  if (*(uint *)(lVar29 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar29 = *(long *)(lVar29 + (long)(int)uVar11 * 8 + 0x20);
  if (lVar29 == 0) goto LAB_035574b8;
  fStack000000000000015c = *(float *)(lVar29 + 0x10c);
  goto LAB_035514b0;
LAB_03554e78:
  uVar11 = uVar17 - 1;
  if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_035575f4;
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x50), lVar30 == 0))
  goto LAB_035574b8;
  lVar43 = (long)(int)uVar11;
  lVar35 = lVar26 + lVar43 * 0x178;
  uVar13 = *(uint *)(lVar35 + 100);
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_035575f4;
  lVar41 = (long)(int)uVar13;
  lVar30 = lVar30 + lVar41 * 0x5c;
  lVar37 = *(long *)(lVar35 + 0x38);
  uVar3 = *(ushort *)(lVar35 + 0x20);
  uVar36 = *(uint *)(lVar30 + 0x3c);
  uVar33 = *(uint *)(lVar30 + 0x68);
  iVar2 = *(int *)(lVar30 + 0x20);
  iVar15 = *(int *)(lVar30 + 0x28);
  iVar16 = *(int *)(lVar30 + 0x2c);
  uVar5 = *(uint *)(lVar30 + 0x40);
  lVar35 = (long)(int)uVar5;
  fVar50 = *(float *)(lVar30 + 0x4c);
  fVar51 = *(float *)(lVar30 + 0x54);
  fVar49 = *(float *)(lVar30 + 0x58);
  fVar64 = *(float *)(lVar30 + 0x5c);
  fVar62 = *(float *)(lVar30 + 0x60);
  fVar67 = *(float *)(lVar30 + 0x6c);
  fVar60 = *(float *)(lVar30 + 0x70);
  fVar57 = *(float *)(lVar30 + 0x74);
  fVar58 = *(float *)(lVar30 + 0x78);
  uVar40 = (uint)uVar3;
  if ((int)uVar33 < 9) {
    switch(uVar33) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000f8._4_4_ = fVar62 + 0.0;
      }
      else {
        in_stack_000000f8._4_4_ = 0.0 - fVar49;
      }
      break;
    case 2:
LAB_03555018:
      in_stack_000000f8._4_4_ = (fVar62 + fVar64 * 0.5) - fVar49 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      in_stack_000000f8._4_4_ = (fVar64 + fVar62) - fVar49;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000f8._4_4_ = fVar64 + fVar62;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar33 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) {
LAB_03554fac:
        if (*(uint *)(lVar26 + 0x18) <= uVar36) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar26 + (long)(int)uVar36 * 0x178 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b8cc4(uVar4,0);
        if ((uVar20 & 1) == 0) {
          bVar1 = (int)uVar13 < (int)unaff_x19[0x95];
        }
        else {
          bVar1 = false;
        }
        if ((fVar49 <= fVar64) && (!bVar1 && uVar33 >> 4 == 0)) {
          in_stack_000000f8._4_4_ = fVar62;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar64 + fVar62;
          }
          goto LAB_03555088;
        }
        if (((uVar17 == 1) || (uVar13 != uVar55)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x324)))
        {
          in_stack_000000f8._4_4_ = fVar62;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_000000f8._4_4_ = fVar64 + fVar62;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fStack0000000000000028 = (float)FUN_026b97f8(uVar40,0);
          uStack00000000000000e8 = 0;
        }
        else {
          cVar25 = (char)unaff_x19[0x1e];
          fVar62 = -fVar49;
          if (cVar25 != '\0') {
            fVar62 = fVar49;
          }
          if (*(uint *)(lVar26 + 0x18) <= uVar36) goto LAB_035575f4;
          iVar16 = (int)*(char *)(lVar26 + (long)(int)uVar36 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000028 & 1)) + iVar16 + -1;
          if (iVar16 < 1) {
            fVar49 = 1.0;
            iVar16 = 1;
          }
          else {
            fVar49 = *(float *)((long)unaff_x19 + 0x2dc);
          }
          if (uVar40 == 9) {
LAB_03556e74:
            fVar49 = 1.0 - fVar49;
          }
          else {
            if (uVar40 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar20 = FUN_026b97f8(uVar40,0);
              cVar25 = (char)unaff_x19[0x1e];
              if ((uVar20 & 1) != 0) goto LAB_03556e74;
            }
            iVar16 = (iVar2 - (~(uint)fStack0000000000000028 & 1)) + iVar15;
          }
          fVar49 = ((fVar64 + fVar62) * fVar49) / (float)iVar16;
          if (cVar25 == '\0') {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar49;
            uStack00000000000000e8 =
                 CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                          (float)uStack00000000000000e8 + 0.0);
          }
          else {
            in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar49;
          }
        }
      }
    }
    else if (((uVar3 != 0xad) && (uVar3 != 0x200b)) && (uVar3 != 0x2060)) goto LAB_03554fac;
  }
  else if (uVar33 == 0x20) {
    fVar49 = fVar67 + fVar57;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar33 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar33 <= uVar11) goto LAB_035575f4;
  lVar30 = lVar26 + lVar43 * 0x178;
  fVar64 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
  fVar49 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000e8;
  fVar62 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar30 + 0x194) == '\0') goto LAB_03555938;
  iVar15 = *(int *)(lVar26 + lVar43 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0355574c;
  fVar48 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar13,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar28 = lVar26 + lVar43 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar48 = 1.0;
    break;
  case 1:
    fVar58 = *(float *)(lVar26 + lVar43 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar28 = lVar26 + lVar43 * 0x178;
      fVar57 = (in_stack_000000f8._4_4_ + fVar58) - *(float *)(in_stack_00000080 + 0x230);
      fVar58 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
      goto LAB_035551cc;
    }
    lVar28 = lVar26 + lVar43 * 0x178;
    fVar57 = fVar57 - fVar67;
    *(float *)(lVar28 + 0x84) = fVar48 + (fVar58 - fVar67) / fVar57;
    *(float *)(lVar28 + 0xac) = fVar48 + (*(float *)(lVar28 + 0x98) - fVar67) / fVar57;
    *(float *)(lVar28 + 0xd4) = fVar48 + (*(float *)(lVar28 + 0xc0) - fVar67) / fVar57;
    fVar48 = fVar48 + (*(float *)(lVar28 + 0xe8) - fVar67) / fVar57;
    break;
  case 2:
    lVar28 = lVar26 + lVar43 * 0x178;
    fVar58 = *(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230);
    fVar57 = (in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x70)) -
             *(float *)(in_stack_00000080 + 0x230);
LAB_035551cc:
    *(float *)(lVar28 + 0x84) = fVar48 + fVar57 / fVar58;
    *(float *)(lVar28 + 0xac) =
         fVar48 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0x98)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    *(float *)(lVar28 + 0xd4) =
         fVar48 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xc0)) -
                  *(float *)(in_stack_00000080 + 0x230)) /
                  (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230));
    fVar48 = fVar48 + ((in_stack_000000f8._4_4_ + *(float *)(lVar28 + 0xe8)) -
                      *(float *)(in_stack_00000080 + 0x230)) /
                      (*(float *)(in_stack_00000080 + 0x238) - *(float *)(in_stack_00000080 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar28 = lVar26 + lVar43 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar26 + lVar43 * 0x178;
      fVar58 = fVar58 - fVar60;
      fVar57 = fVar48 + (*(float *)(lVar28 + 0x74) - fVar60) / fVar58;
      fVar58 = fVar48 + (*(float *)(lVar28 + 0x9c) - fVar60) / fVar58;
      *(float *)(lVar28 + 0x88) = fVar57;
      *(float *)(lVar28 + 0xb0) = fVar58;
      *(float *)(lVar28 + 0xd8) = fVar57;
      *(float *)(lVar28 + 0x100) = fVar58;
      break;
    case 2:
      lVar28 = lVar26 + lVar43 * 0x178;
      fVar57 = fVar48 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar28 + 0x88) = fVar57;
      fVar58 = *(float *)(unaff_x19 + 0x9c);
      fVar67 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar28 + 0xd8) = fVar57;
      fVar57 = fVar48 + (*(float *)(lVar28 + 0x9c) - fVar58) / (fVar67 - fVar58);
      *(float *)(lVar28 + 0xb0) = fVar57;
      *(float *)(lVar28 + 0x100) = fVar57;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar33 = (uint)*(undefined8 *)(lVar26 + 0x18);
    }
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar26 + lVar43 * 0x178;
    fVar57 = *(float *)(lVar28 + 0x15c);
    fVar58 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar57) * 0.5;
    fVar67 = fVar48 + *(float *)(lVar28 + 0x88) * fVar57 + fVar58;
    fVar48 = fVar48 + fVar58 + *(float *)(lVar28 + 0xb0) * fVar57;
    *(float *)(lVar28 + 0x84) = fVar67;
    *(float *)(lVar28 + 0xac) = fVar67;
    *(float *)(lVar28 + 0xd4) = fVar48;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar26 + lVar43 * 0x178 + 0xfc) = fVar48;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar26 + lVar43 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar33) {
      lVar28 = lVar26 + lVar43 * 0x178;
      fVar50 = fVar50 - fVar51;
      fVar48 = (*(float *)(lVar28 + 0x74) - fVar51) / fVar50;
      fVar50 = (*(float *)(lVar28 + 0x9c) - fVar51) / fVar50;
      *(float *)(lVar28 + 0x88) = fVar48;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar26 + lVar43 * 0x178;
    fVar48 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar28 + 0x88) = fVar48;
    fVar50 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar28 + 0xb0) = fVar50;
    *(float *)(lVar28 + 0xd8) = fVar50;
    *(float *)(lVar28 + 0x100) = fVar48;
    break;
  case 3:
    if (uVar33 <= uVar11) goto LAB_035575f4;
    lVar28 = lVar26 + lVar43 * 0x178;
    fVar50 = *(float *)(lVar28 + 0x15c);
    fVar57 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar50) * 0.5;
    fVar48 = *(float *)(lVar28 + 0x84) / fVar50 + fVar57;
    fVar57 = fVar57 + *(float *)(lVar28 + 0xd4) / fVar50;
    *(float *)(lVar28 + 0x88) = fVar48;
    *(float *)(lVar28 + 0xb0) = fVar57;
    *(float *)(lVar28 + 0x100) = fVar48;
    *(float *)(lVar28 + 0xd8) = fVar57;
  }
  if (uVar33 <= uVar11) goto LAB_035575f4;
  lVar28 = lVar26 + lVar43 * 0x178;
  fVar48 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar26 + lVar43 * 0x178 + 400) & 1) != 0)) {
    fVar48 = -fVar48;
  }
  fVar57 = fVar45;
  if (((iVar14 == 2) || (fVar57 = fVar61, iVar14 == 1)) || (fVar57 = fVar45 / fVar46, iVar14 == 0))
  {
    fVar48 = fVar57 * fVar48;
  }
  lVar28 = lVar26 + lVar43 * 0x178;
  fVar50 = *(float *)(lVar28 + 0x88);
  fVar58 = *(float *)(lVar28 + 0x84);
  fVar57 = -2.1474836e+09;
  if (fVar58 != INFINITY) {
    fVar57 = (float)(int)fVar58;
  }
  fVar67 = *(float *)(lVar28 + 0xd4);
  fVar60 = *(float *)(lVar28 + 0xd8);
  fVar51 = -2.1474836e+09;
  if (fVar50 != INFINITY) {
    fVar51 = (float)(int)fVar50;
  }
  uVar53 = FUN_03591d3c(fVar58 - fVar57,fVar50 - fVar51);
  *(undefined4 *)(lVar28 + 0x84) = uVar53;
  if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar60 = fVar60 - fVar51;
  *(float *)(lVar28 + 0x88) = fVar48;
  uVar53 = FUN_03591d3c(fVar58 - fVar57,fVar60);
  *(undefined4 *)(lVar26 + lVar43 * 0x178 + 0xac) = uVar53;
  if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_035575f4;
  fVar67 = fVar67 - fVar57;
  *(float *)(lVar26 + lVar43 * 0x178 + 0xb0) = fVar48;
  fVar57 = (float)FUN_03591d3c(fVar67,fVar60);
  *(float *)(lVar28 + 0xd4) = fVar57;
  if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_035575f4;
  *(float *)(lVar28 + 0xd8) = fVar48;
  uVar53 = FUN_03591d3c(fVar67,fVar50 - fVar51);
  *(undefined4 *)(lVar26 + lVar43 * 0x178 + 0xfc) = uVar53;
  uVar33 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar33 <= uVar11) goto LAB_035575f4;
  *(float *)(lVar26 + lVar43 * 0x178 + 0x100) = fVar48;
LAB_0355574c:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar33 <= uVar11) goto LAB_035575f4;
      lVar30 = lVar26 + lVar43 * 0x178;
      *(ulong *)(lVar30 + 0x70) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar30 + 0x70));
      *(float *)(lVar30 + 0x78) = fVar62 + *(float *)(lVar30 + 0x78);
      *(ulong *)(lVar30 + 0x98) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar30 + 0x98));
      *(float *)(lVar30 + 0xa0) = fVar62 + *(float *)(lVar30 + 0xa0);
      *(ulong *)(lVar30 + 0xc0) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar30 + 0xc0));
      *(float *)(lVar30 + 200) = fVar62 + *(float *)(lVar30 + 200);
      *(ulong *)(lVar30 + 0xe8) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar30 + 0xe8));
      *(float *)(lVar30 + 0xf0) = fVar62 + *(float *)(lVar30 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar33) {
        if (*(uint *)(lVar26 + lVar43 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar30 = lVar26 + lVar43 * 0x178;
          *(ulong *)(lVar30 + 0x70) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                        fVar64 + (float)*(undefined8 *)(lVar30 + 0x70));
          *(float *)(lVar30 + 0x78) = fVar62 + *(float *)(lVar30 + 0x78);
          *(ulong *)(lVar30 + 0x98) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                        fVar64 + (float)*(undefined8 *)(lVar30 + 0x98));
          *(float *)(lVar30 + 0xa0) = fVar62 + *(float *)(lVar30 + 0xa0);
          *(ulong *)(lVar30 + 0xc0) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                        fVar64 + (float)*(undefined8 *)(lVar30 + 0xc0));
          *(float *)(lVar30 + 200) = fVar62 + *(float *)(lVar30 + 200);
          *(ulong *)(lVar30 + 0xe8) =
               CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                        fVar64 + (float)*(undefined8 *)(lVar30 + 0xe8));
          *(float *)(lVar30 + 0xf0) = fVar62 + *(float *)(lVar30 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar33 <= uVar11) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar33 = *(uint *)(lVar26 + 0x18);
  }
  puVar7 = PTR_DAT_03cbded8;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar28 = lVar26 + lVar43 * 0x178;
  *(undefined8 *)(lVar28 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar28 + 0x78) = uVar53;
  if (uVar33 <= uVar11) goto LAB_035575f4;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar28 = lVar26 + lVar43 * 0x178;
  *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 0xa0) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 200) = uVar53;
  uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar28 + 0xf0) = uVar53;
  *(undefined1 *)(lVar30 + 0x194) = 0;
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
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  uVar21 = *(undefined8 *)(lVar30 + 0x11c);
  *(undefined8 *)(lVar30 + 0x11c) =
       CONCAT44(fVar49 + (float)((ulong)uVar21 >> 0x20),fVar64 + (float)uVar21);
  *(float *)(lVar30 + 0x124) = fVar62 + *(float *)(lVar30 + 0x124);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  *(ulong *)(lVar30 + 0x110) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x110) >> 0x20),
                fVar64 + (float)*(undefined8 *)(lVar30 + 0x110));
  *(float *)(lVar30 + 0x118) = fVar62 + *(float *)(lVar30 + 0x118);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  *(ulong *)(lVar30 + 0x128) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x128) >> 0x20),
                fVar64 + (float)*(undefined8 *)(lVar30 + 0x128));
  *(float *)(lVar30 + 0x130) = fVar62 + *(float *)(lVar30 + 0x130);
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  lVar30 = lVar30 + lVar43 * 0x178;
  *(float *)(lVar30 + 0x134) = fVar64 + *(float *)(lVar30 + 0x134);
  *(ulong *)(lVar30 + 0x138) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar30 + 0x138) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar30 + 0x138));
  lVar30 = *in_stack_00000170;
  if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x38), lVar28 == 0)) goto LAB_035574b8;
  uVar33 = *(uint *)(lVar28 + 0x18);
  if (uVar33 <= uVar11) goto LAB_035575f4;
  lVar38 = lVar28 + lVar43 * 0x178;
  uVar54 = CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar38 + 0x140));
  fVar57 = fVar49 + *(float *)(lVar38 + 0x150);
  uVar19 = (ulong)(uint)fVar57;
  uVar56 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar38 + 0x148));
  *(float *)(lVar38 + 0x150) = fVar57;
  *(ulong *)(lVar38 + 0x140) = uVar54;
  *(ulong *)(lVar38 + 0x148) = uVar56;
  if (uVar13 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar11 == uVar55) goto LAB_03555b44;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar38 = (long)(int)uVar55;
    lVar39 = lVar30 + lVar38 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar39 + 0x58);
    fVar57 = fVar49 + *(float *)(lVar39 + 0x54);
    uVar54 = (ulong)(uint)fVar57;
    fVar50 = fVar64 + *(float *)(lVar39 + 0x58);
    uVar19 = (ulong)(uint)fVar50;
    *(ulong *)(lVar39 + 0x4c) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar39 + 0x4c));
    *(float *)(lVar39 + 0x54) = fVar57;
    *(float *)(lVar39 + 0x58) = fVar50;
    if (uVar33 <= *(uint *)(lVar39 + 0x34)) goto LAB_035575f4;
    uVar53 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
    lVar30 = lVar30 + lVar38 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar57;
    *(undefined4 *)(lVar30 + 0x6c) = uVar53;
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar28 + lVar38 * 0x5c + 0x40);
    if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar28 = lVar28 + lVar38 * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_03555b44:
    if (uVar11 == uVar55) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar38 = lVar28 + lVar41 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar38 + 0x58);
      uVar54 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar38 + 0x4c));
      fVar57 = fVar49 + *(float *)(lVar38 + 0x54);
      fVar64 = fVar64 + *(float *)(lVar38 + 0x58);
      uVar19 = (ulong)(uint)fVar64;
      *(ulong *)(lVar38 + 0x4c) = uVar54;
      *(float *)(lVar38 + 0x54) = fVar57;
      *(float *)(lVar38 + 0x58) = fVar64;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar38 + 0x34)) goto LAB_035575f4;
      uVar53 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
      lVar28 = lVar28 + lVar41 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar57;
      *(undefined4 *)(lVar28 + 0x6c) = uVar53;
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar28 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar28 = lVar28 + lVar41 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_026b82c4(uVar40,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
    if (bVar6) {
      if (((uVar17 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*unaff_x20 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
        if (*(uint *)(lVar26 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
        uVar4 = *(undefined2 *)(lVar26 + lVar29 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b82c4(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar17) goto LAB_035575f4;
          uVar4 = *(undefined2 *)(lVar26 + lVar29 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar4,0);
          if ((uVar20 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_0355686c:
        bVar6 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b81f8(uVar40,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b63d8(uVar40,0);
        if (((uVar40 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar11 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b82c4(uVar40,0);
      iVar15 = iStack0000000000000128;
      if ((uVar20 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar15 = uVar17 - 2;
    }
    lVar30 = *in_stack_00000170;
    if (lVar30 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar30 + 0x40);
    if (lVar28 == 0) goto LAB_035574b8;
    uVar55 = *(uint *)(lVar30 + 0x24);
    iVar16 = *(int *)(lVar28 + 0x18);
    if (iVar16 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar30 + 0x40),iVar16 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
    }
    lVar30 = *(long *)(lVar30 + 0x40);
    if (lVar30 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
    lVar30 = lVar30 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar30 + 0x20) = unaff_x19;
    *(float *)(lVar30 + 0x28) = fStack0000000000000158;
    *(int *)(lVar30 + 0x2c) = iVar15;
    *(int *)(lVar30 + 0x30) = (iVar15 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar30 = unaff_x19[0x6d];
    if (lVar30 == 0) goto LAB_035574b8;
    lVar28 = *(long *)(lVar30 + 0x50);
    *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
    if (lVar28 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
    lVar28 = lVar28 + lVar41 * 0x5c;
    bVar6 = false;
    fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
    *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      fStack0000000000000158 = (float)uVar11;
    }
    if (uVar11 == *unaff_x20 - 1) {
      lVar30 = *in_stack_00000170;
      if (lVar30 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar30 + 0x40);
      if (lVar28 == 0) goto LAB_035574b8;
      uVar55 = *(uint *)(lVar30 + 0x24);
      iVar15 = *(int *)(lVar28 + 0x18);
      if (iVar15 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar30 + 0x40),iVar15 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x40);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar55) goto LAB_035575f4;
      lVar30 = lVar30 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      *(float *)(lVar30 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar30 + 0x2c) = uVar11;
      *(uint *)(lVar30 + 0x30) = uVar17 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar30 = unaff_x19[0x6d];
      if (lVar30 == 0) goto LAB_035574b8;
      lVar28 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_035575f4;
      lVar28 = lVar28 + lVar41 * 0x5c;
      fStack00000000000000d4 = (float)((int)fStack00000000000000d4 + 1);
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
LAB_03555d68:
    bVar6 = true;
  }
LAB_03555d70:
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar55 = *(uint *)(lVar30 + 0x18);
  if (uVar55 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar43 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_03555da0:
      if (uVar55 <= uVar17 - 2) goto LAB_035575f4;
      lVar41 = *unaff_x19;
      uVar55 = *(uint *)(lVar30 + lVar29 + -0x330);
      uVar53 = *(undefined4 *)(lVar30 + lVar29 + -0x2f8);
LAB_035562ec:
      pcVar32 = *(code **)(lVar41 + 0x8d8);
LAB_035562f4:
      uVar56 = (ulong)uVar55;
      uVar54 = (ulong)(uint)_bStack0000000000000070;
      uVar19 = (ulong)_bStack0000000000000074;
      (*pcVar32)(fStack0000000000000078,uVar54,uVar19,uVar56,fStack0000000000000104,0,
                 in_stack_00000088._4_4_,uVar53);
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar30 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar30 = *(long *)puVar7;
      }
LAB_03556348:
      bVar10 = false;
      fVar47 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar10 = false;
    }
  }
  else {
    lVar30 = lVar30 + lVar43 * 0x178;
    iVar15 = *(int *)(lVar30 + 0x68);
    *(int *)(lVar30 + 0x16c) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b63d8(uVar40,0);
    if ((uVar40 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 == 0) || (lVar41 = *(long *)(lVar30 + 0x38), lVar41 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar41 + 0x18) <= uVar11) goto LAB_035575f4;
      fVar57 = *(float *)(lVar41 + lVar43 * 0x178 + 0x160);
      if (fVar47 <= fVar57) {
        fVar47 = fVar57;
      }
      if (fStack0000000000000100 <= ABS(fVar48)) {
        fStack0000000000000100 = ABS(fVar48);
      }
      if (iVar15 != in_stack_00000068._4_4_) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar30 = *in_stack_00000170;
          if (lVar30 == 0) goto LAB_035574b8;
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar41 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar41 + 0x15a8);
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar50 = *(float *)(lVar30 + lVar43 * 0x178 + 0x14c);
      fVar57 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar50 = fVar50 + fVar47 * fVar57;
      if (fVar50 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar50;
      }
      uVar54 = (ulong)(uint)fStack0000000000000104;
      in_stack_00000068._4_4_ = iVar15;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_03556364;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar40,0);
        if ((uVar20 & 1) != 0) goto LAB_03556254;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar30 = lVar30 + lVar43 * 0x178;
      in_stack_00000088._4_4_ = *(float *)(lVar30 + 0x160);
      fStack0000000000000078 = *(float *)(lVar30 + 0x11c);
      uVar19 = (ulong)(uint)fStack0000000000000078;
      bVar10 = fVar47 != 0.0;
      fVar57 = in_stack_00000088._4_4_;
      if (bVar10) {
        fVar57 = fVar47;
      }
      fVar47 = fVar57;
      uVar66 = *(undefined4 *)(lVar30 + 0x168);
      _bStack0000000000000074 = 0;
      fVar57 = fVar48;
      if (bVar10) {
        fVar57 = fStack0000000000000100;
      }
      uVar54 = (ulong)(uint)fVar57;
      _bStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar57;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar11 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar43 * 0x178;
          lVar41 = *unaff_x19;
          uVar55 = *(uint *)(lVar30 + 0x128);
          uVar53 = *(undefined4 *)(lVar30 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar11 == uVar36) || ((int)uVar5 <= (int)uVar11)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        lVar41 = lVar43;
        uVar55 = uVar11;
        if (uVar40 == 0x200b || (uVar20 & 1) != 0) {
          lVar41 = lVar35;
          uVar55 = uVar5;
        }
        if (uVar55 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar41 * 0x178;
          uVar55 = *(uint *)(lVar30 + 0x128);
          uVar53 = *(undefined4 *)(lVar30 + 0x160);
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
        uVar55 = *(uint *)(lVar30 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar17) goto LAB_035575f4;
      uVar20 = FUN_03567ad8(uVar66,*(undefined4 *)(lVar30 + lVar29),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000170 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0)) {
          if (uVar11 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar43 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar30 + 0x128);
            uVar19 = (ulong)_bStack0000000000000074;
            uVar54 = (ulong)(uint)_bStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fStack0000000000000078,uVar54,uVar19,uVar56,fStack0000000000000104,0,
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
  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
  if (lVar37 == 0) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar30 + lVar43 * 0x178 + 400);
  fVar57 = (float)FUN_03776a30(lVar37 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar17 - 2) goto LAB_035575f4;
      uVar55 = *(uint *)(lVar30 + lVar29 + -0x330);
      fVar49 = *(float *)(lVar30 + lVar29 + -0x30c);
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar56 = (ulong)uVar55;
      uVar54 = (ulong)(uint)fStack000000000000009c;
      uVar19 = (ulong)(uint)fStack0000000000000098;
      (*pcVar32)(fStack00000000000000a0,uVar54,uVar19,uVar56,
                 fStack00000000000000a8 * fVar57 + fVar49,0,fStack00000000000000a8,
                 fStack00000000000000a8);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar30 = *in_stack_00000170;
    if ((lVar30 == 0) || (lVar41 = *(long *)(lVar30 + 0x38), lVar41 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar41 + 0x18) <= uVar11) goto LAB_035575f4;
    *(int *)(lVar41 + lVar43 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar41 + lVar43 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar1)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar40,0);
        if ((uVar20 & 1) != 0) goto LAB_035564e8;
        lVar30 = *in_stack_00000170;
        if (lVar30 == 0) goto LAB_035574b8;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_035575f4;
      lVar30 = lVar30 + lVar43 * 0x178;
      fStack0000000000000040 = *(float *)(lVar30 + 0x60);
      fStack0000000000000038 = *(float *)(lVar30 + 0x14c);
      uVar54 = (ulong)(uint)fStack0000000000000038;
      fStack00000000000000a0 = *(float *)(lVar30 + 0x11c);
      uVar19 = (ulong)(uint)fStack00000000000000a0;
      fStack00000000000000a8 = *(float *)(lVar30 + 0x160);
      fStack000000000000009c = fVar57 * fStack00000000000000a8 + fStack0000000000000038;
      fStack0000000000000098 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_03556628:
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar11 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar43 * 0x178;
          lVar35 = *unaff_x19;
          uVar55 = *(uint *)(lVar30 + 0x128);
          fVar49 = *(float *)(lVar30 + 0x14c);
LAB_03556654:
          pcVar32 = *(code **)(lVar35 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar11 == uVar36) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_026b63d8(uVar40,0);
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        uVar55 = *(uint *)(lVar30 + 0x18);
        if (uVar40 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar55 <= uVar5) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar35 = lVar43;
          if (uVar55 <= uVar11) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar30 = lVar30 + lVar35 * 0x178;
        fVar49 = *(float *)(lVar30 + 0x14c);
        uVar55 = *(uint *)(lVar30 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar11 < (int)uVar55) {
      lVar30 = *in_stack_00000170;
      if ((lVar30 != 0) && (lVar41 = *(long *)(lVar30 + 0x38), lVar41 != 0)) {
        if (uVar17 < *(uint *)(lVar41 + 0x18)) {
          if (*(float *)(lVar41 + lVar29 + -0x108) == fStack0000000000000040) {
            fVar50 = *(float *)(lVar41 + lVar29 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar54 = (ulong)(uint)fStack0000000000000038;
            uVar20 = FUN_03567bac(fVar49 + fVar50,uVar54,0);
            if ((uVar20 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_03556744;
            }
            lVar30 = *in_stack_00000170;
            if (lVar30 == 0) goto LAB_035574b8;
          }
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 != 0) {
            uVar55 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar11 <= (int)uVar5) goto FUN_035568e8;
            if (uVar5 < uVar55) goto LAB_035568f0;
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
      iVar15 = FUN_036d3364(lVar37,0);
      if (*(uint *)(lVar26 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar30 = *(long *)(lVar26 + lVar29 + -0x130);
      if (lVar30 == 0) goto LAB_035574b8;
      iVar16 = FUN_036d3364(lVar30,0);
      if (iVar15 != iVar16) goto LAB_03556628;
    }
    if (!bVar1) {
      if ((*in_stack_00000170 != 0) && (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar30 + 0x18)) {
          lVar35 = *unaff_x19;
          uVar55 = *(uint *)(lVar30 + lVar29 + -0x330);
          fVar49 = *(float *)(lVar30 + lVar29 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
  goto LAB_035574b8;
  uVar55 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar55 <= uVar11) goto LAB_035575f4;
  if ((*(byte *)(lVar30 + lVar43 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar19 = (ulong)uStack00000000000000c0;
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar19,uVar56,fStack00000000000000d0,uVar19);
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar30 + lVar43 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar40 == 0xd) || ((uVar40 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) || (!bVar1)
         ) goto LAB_035569b4;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_026b97f8(uVar40,0);
        if ((uVar20 & 1) != 0) goto LAB_035569b4;
      }
      puVar7 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar7;
      }
      if ((*in_stack_00000170 == 0) || (lVar30 = *(long *)(*in_stack_00000170 + 0x38), lVar30 == 0))
      goto LAB_035574b8;
      uVar55 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar55 <= uVar11) goto LAB_035575f4;
      lVar35 = *(long *)(lVar35 + 0xb8);
      lVar37 = lVar30 + lVar43 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar37 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar37 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar35 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar35 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar37 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar35 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar35 + 0x15a4);
      uStack00000000000000c0 = 0;
    }
    if (uVar55 <= uVar11) goto LAB_035575f4;
    lVar30 = lVar30 + lVar43 * 0x178;
    fVar57 = *(float *)(lVar30 + 0x128);
    fVar51 = *(float *)(lVar30 + 0x188);
    uVar18 = *(undefined8 *)(lVar30 + 0x17c);
    fVar67 = *(float *)(lVar30 + 0x184);
    uVar21 = *(undefined8 *)(lVar30 + 0x184);
    fVar62 = *(float *)(lVar30 + 0x18c);
    fVar49 = *(float *)(lVar30 + 0x11c);
    fVar58 = *(float *)(lVar30 + 0x148);
    fVar50 = *(float *)(lVar30 + 0x150);
    in_stack_00000178 = uVar18;
    fStack0000000000000180 = fVar67;
    fStack0000000000000184 = fVar51;
    in_stack_00000188 = fVar62;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar20 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar30 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar57 = fVar57 + (float)in_stack_000017b8;
      uVar19 = (ulong)(uint)fVar57;
      fVar49 = fVar49 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar50 = fVar50 - in_stack_000017c0;
      uVar54 = (ulong)(uint)fVar50;
      fVar58 = fVar58 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar56 = (ulong)(uint)fVar58;
      if (fVar49 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar49;
      }
      if (fVar50 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar50;
      }
      if (fStack00000000000000c8 <= fVar57) {
        fStack00000000000000c8 = fVar57;
      }
      if (fStack00000000000000d0 <= fVar58) {
        fStack00000000000000d0 = fVar58;
      }
    }
    else {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar30);
      }
      fVar49 = (fVar49 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar56 = (ulong)(uint)fVar49;
      if (fVar50 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar50;
      }
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar19 = (ulong)uStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar58) {
        fStack00000000000000d0 = fVar58;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar19,uVar56,fStack00000000000000d0,uVar19);
      fStack00000000000000dc = fVar50 - fVar62;
      fStack00000000000000c8 = fVar57 + fVar67;
      uStack00000000000000c0 = 0;
      fStack00000000000000d0 = fVar58 + fVar51;
      fStack00000000000000d8 = fVar49;
      in_stack_000017b0 = uVar18;
      in_stack_000017b8 = uVar21;
      in_stack_000017c0 = fVar62;
    }
    if (((*unaff_x20 == 1) || (uVar11 == uVar36)) || (((int)uVar5 <= (int)uVar11 || (!bVar1)))) {
      uVar19 = (ulong)uStack00000000000000c0;
      uVar54 = (ulong)(uint)fStack00000000000000dc;
      uVar56 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar54,uVar19,uVar56,fStack00000000000000d0,uVar19);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar11 = *unaff_x20;
  lVar29 = lVar29 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar1 = (int)uVar11 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar55 = uVar13;
  if (bVar1) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar26 = *in_stack_00000170;
  if (lVar26 != 0) {
    iVar12 = uVar13 + 1;
    plVar44 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar26 + 0x18) = uVar11;
    lVar29 = unaff_x19[0xd4];
    *(int *)(lVar26 + 0x2c) = iVar12;
    if ((int)uVar11 < 1 || fStack00000000000000d4 == 0.0) {
      fStack00000000000000d4 = 1.4013e-45;
    }
    *(int *)(lVar26 + 0x1c) = (int)lVar29;
    *(float *)(lVar26 + 0x24) = fStack00000000000000d4;
    *(int *)(lVar26 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar26 = unaff_x19[0xdf];
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x18))
                (*(undefined8 *)(lVar26 + 0x40),*in_stack_00000170,*(undefined8 *)(lVar26 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar12 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar12 != 0x19) {
      lVar26 = unaff_x19[0xe5];
      if (lVar26 == 0) goto LAB_035574b8;
      uVar11 = FUN_03911ee4(lVar26,0);
      FUN_03911f20(lVar26,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000170 == 0) || (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0))
      goto LAB_035574b8;
      if (*(int *)(*plVar44 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar26 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
        if (*(int *)(lVar26 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
            if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                    if (*(int *)(lVar26 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar21 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar26 = *in_stack_00000170;
                              if (lVar26 != 0) {
                                lVar30 = 0;
                                lVar29 = 0;
                                do {
                                  uVar20 = lVar29 + 1;
                                  if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar20)
                                  goto LAB_03554724;
                                  lVar26 = *(long *)(lVar26 + 0x60);
                                  if (lVar26 == 0) break;
                                  if (*(int *)(*plVar44 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                  FUN_03596a20(lVar26 + lVar30 + 0x70,0);
                                  lVar26 = unaff_x19[0xe1];
                                  if (lVar26 == 0) break;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                  uVar18 = *(undefined8 *)(lVar26 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar23 = FUN_036d35a8(uVar18,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000170 == 0) ||
                                         (lVar26 = *(long *)(*in_stack_00000170 + 0x60), lVar26 == 0
                                         )) break;
                                      if (*(int *)(*plVar44 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                      FUN_03596b20(lVar26 + lVar30 + 0x70,1,0);
                                    }
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a460c(lVar26,*(undefined8 *)(lVar35 + lVar30 + 0x80),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a4810(lVar26,*(undefined8 *)(lVar35 + lVar30 + 0x98),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a48bc(lVar26,*(undefined8 *)(lVar35 + lVar30 + 0xa0),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = UnityEngine_Material__GetColorArray(lVar26,0);
                                    if ((*in_stack_00000170 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000170 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    if (lVar26 == 0) break;
                                    FUN_036a4e24(lVar26,*(undefined8 *)(lVar35 + lVar30 + 0xa8),0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = UnityEngine_Material__GetColorArray(lVar26,0),
                                       lVar26 == 0)) break;
                                    FUN_036aa280(lVar26,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_037b514c(lVar26,0);
                                    lVar35 = unaff_x19[0xe1];
                                    if (lVar35 == 0) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar35 = *(long *)(lVar35 + lVar29 * 8 + 0x28);
                                    if ((lVar35 == 0) ||
                                       (uVar18 = UnityEngine_Material__GetColorArray(lVar35,0),
                                       lVar26 == 0)) break;
                                    FUN_0390f3a4(lVar26,uVar18,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_037b514c(lVar26,0), lVar26 == 0)) break;
                                    FUN_0390eec8(uVar21,uVar54,uVar19,uVar56,lVar26,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + lVar29 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_037b514c(lVar26,0), lVar26 == 0)) break;
                                    FUN_0390ed78(lVar26,uVar11 & 1,0);
                                    lVar26 = unaff_x19[0xe1];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_035575f4;
                                    plVar42 = *(long **)(lVar26 + lVar29 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar42 == (long *)0x0) break;
                                    (**(code **)(*plVar42 + 0x2c8))
                                              (plVar42,uVar17 & 1,*(undefined8 *)(*plVar42 + 0x2d0))
                                    ;
                                  }
                                  lVar26 = *in_stack_00000170;
                                  lVar29 = lVar29 + 1;
                                  lVar30 = lVar30 + 0x50;
                                } while (lVar26 != 0);
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


