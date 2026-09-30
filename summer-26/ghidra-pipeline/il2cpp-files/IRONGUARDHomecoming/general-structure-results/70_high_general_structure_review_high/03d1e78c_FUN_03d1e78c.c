/*
FUNCTION_NAME: FUN_03d1e78c
ENTRY_POINT: 03d1e78c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03d1e78c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,float param_5,
                 float param_6,float param_7,undefined8 param_8,long param_9,ulong param_10,
                 uint param_11,undefined8 *param_12,long param_13,ulong param_14,uint param_15,
                 undefined8 param_16,undefined8 param_17,undefined8 param_18,undefined4 param_19)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  undefined8 local_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  puVar5 = PTR_DAT_04573f38;
  uVar12 = param_3;
  if ((DAT_0483a009 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04573fc8);
    thunk_FUN_01efb3a4(PTR_DAT_04573fd0);
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__);
    thunk_FUN_01efb3a4(PTR_DAT_04573f98);
    thunk_FUN_01efb3a4(PTR_DAT_04573fa0);
    thunk_FUN_01efb3a4(PTR_DAT_04573fa8);
    thunk_FUN_01efb3a4(PTR_DAT_04573f38);
    thunk_FUN_01efb3a4(PTR_DAT_04573fb0);
    thunk_FUN_01efb3a4(PTR_DAT_04573f40);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_04573fd8);
    DAT_0483a009 = 1;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_03d1c8f4();
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = FUN_03d1ce00();
  if (lVar9 != 0) {
    uVar8 = FUN_03d1cfe4();
    if ((uVar8 & 1) != 0) {
      return;
    }
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar5;
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30);
    if (*(int *)(*(long *)Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__);
    }
    FUN_03d34f9c(param_13,uVar15,0,0,0xffffffff,0xffffffff,0);
    if ((param_14 & 1) == 0) {
      if (param_13 == 0) goto LAB_03d1f4d8;
      uVar12 = 0;
      FUN_0408a504(0,0,0,0x3f800000,param_13,0,1,0);
    }
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar5;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar5;
      }
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar9 != 0) {
      FUN_030f35d0(&local_100,lVar9,*(undefined8 *)PTR_DAT_04573fb0);
      puVar6 = PTR_DAT_04573fa0;
      puVar4 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
      fVar20 = (float)param_2 / (float)param_1;
      uVar8 = (ulong)(uint)fVar20;
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      local_b0 = local_f0;
LAB_03d1ea10:
      uVar10 = FUN_02c7ab6c(&local_c0,*(undefined8 *)puVar6);
      lVar9 = local_b0;
      if ((uVar10 & 1) != 0) {
        if (local_b0 != 0) {
          uVar15 = *(undefined8 *)(local_b0 + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (uVar15,0,0);
          if ((uVar10 & 1) == 0) {
            lVar16 = *(long *)(lVar9 + 0x18);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar17 = *(long *)(lVar16 + 0x20);
            uVar10 = FUN_0406f868(lVar16,0);
            if ((uVar10 & 1) != 0) {
              lVar11 = FUN_040703d4(lVar16,0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar10 = FUN_04073358(lVar11,0);
              if ((uVar10 & 1) != 0) {
                lVar11 = FUN_040703d4(lVar16,0);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar10 = FUN_04073394(lVar11,0);
                if ((uVar10 & 1) != 0) {
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar10 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                     (lVar17,0,0);
                  local_26c = (float)uVar12;
                  local_268 = (float)uVar8;
                  if ((uVar10 & 1) == 0) {
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if ((((*(long *)(lVar17 + 0x18) != 0) &&
                         (*(long *)(*(long *)(lVar17 + 0x18) + 0x18) != 0)) &&
                        (0.0 < *(float *)(lVar16 + 0x28))) &&
                       ((*(char *)(lVar16 + 0x58) != '\0' && (*(int *)(lVar16 + 100) != 0)))) {
                      lVar17 = FUN_022c59ec(lVar16,*(undefined8 *)PTR_DAT_04573fd0);
                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar12 = FUN_04073094(lVar17,0,0);
                      if ((uVar12 & 1) == 0) {
LAB_03d1ebac:
                        lVar17 = FUN_04070398(lVar16,0);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        local_264 = (float)FUN_0407d3c8(lVar17,0);
                        local_270 = 0.0;
                      }
                      else {
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        iVar7 = UnityEngine_UIElements_VisualElementFocusRing__GetNextFocusable
                                          (lVar17,0);
                        if (iVar7 != 1) goto LAB_03d1ebac;
                        lVar17 = FUN_04070398(lVar17,0);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        fVar18 = (float)FUN_0407d840(lVar17,0);
                        if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        fVar19 = (float)FUN_0403ba74(param_9,0);
                        local_264 = fVar19 * -fVar18;
                        local_268 = fVar19 * -local_268;
                        local_26c = fVar19 * -local_26c;
                        local_270 = 1.4013e-45;
                      }
                      uStack_d8 = param_12[5];
                      local_e0 = param_12[4];
                      uStack_c8 = param_12[7];
                      uStack_d0 = param_12[6];
                      uStack_f8 = param_12[1];
                      local_100 = *param_12;
                      uStack_e8 = param_12[3];
                      local_f0 = param_12[2];
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar1 = (uint)local_270 ^ 1;
                      uStack_138 = uStack_f8;
                      local_140 = local_100;
                      uStack_128 = uStack_e8;
                      lStack_130 = local_f0;
                      uStack_118 = uStack_d8;
                      local_120 = local_e0;
                      uStack_108 = uStack_c8;
                      uStack_110 = uStack_d0;
                      uVar10 = (ulong)(uint)local_268;
                      uVar22 = (ulong)(uint)local_26c;
                      local_278 = (float)FUN_03d1e03c(local_264,param_9,uVar1,param_11 & 1,
                                                      &local_140);
                      local_274 = (float)uVar10;
                      uVar8 = uVar10;
                      uVar12 = uVar22;
                      if ((param_10 & 1) == 0) {
LAB_03d1eca8:
                        fVar18 = (float)uVar8;
                        if ((float)uVar22 < 0.0) goto LAB_03d1ea10;
                      }
                      else {
                        uVar15 = FUN_0403cf28(0);
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar13 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                                           (param_9,uVar15,0);
                        if ((uVar13 & 1) == 0) goto LAB_03d1eca8;
                        if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        uVar15 = FUN_0403bafc(param_9,0);
                        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar12 = param_1;
                        fVar18 = local_274;
                        local_278 = (float)FUN_03d1f6f0(local_278,uVar10 & 0xffffffff,param_1,
                                                        param_2,uVar15,param_4,param_3);
                        local_274 = fVar18;
                      }
                      if ((*(char *)(lVar16 + 0x70) != '\0') ||
                         (((uVar8 = (ulong)(uint)local_274, local_274 <= 1.0 && (0.0 <= local_278))
                          && ((uVar8 = (ulong)(uint)local_278, local_278 <= 1.0 &&
                              (fVar18 = local_278, 0.0 <= local_274)))))) {
                        if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar17 = FUN_04070398(param_9,0);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        fVar19 = (float)FUN_0407d840(lVar17,0);
                        fVar25 = local_264 - param_5;
                        fVar24 = local_268 - param_6;
                        fVar23 = local_26c - param_7;
                        local_288 = (float)uVar12;
                        local_284 = fVar23 * local_288;
                        uVar8 = (ulong)(uint)local_284;
                        if (0.0 <= local_284 + fVar25 * fVar19 + fVar24 * fVar18) {
                          if (DAT_0482f03e == '\0') {
                            thunk_FUN_01efb3a4(
                                              Method_Oculus_Platform_Message<LeaderboardList>__ctor__
                                              );
                            DAT_0482f03e = '\x01';
                          }
                          if (*(int *)(*(long *)
                                        Method_Oculus_Platform_Message<LeaderboardList>__ctor__ +
                                      0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          if (local_270 == 0.0) {
                            if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            fVar18 = *(float *)(lVar16 + 0x2c);
                            fVar19 = *(float *)(lVar16 + 0x30);
                            iVar7 = FUN_04039560(*(long *)(lVar16 + 0x38),0);
                            fVar24 = fVar24 * fVar24;
                            fVar23 = fVar23 * fVar23;
                            fVar25 = SQRT(fVar23 + fVar25 * fVar25 + fVar24);
                            if (iVar7 < 1) {
                              local_28c = 1.0;
                            }
                            else {
                              if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01f08a3c();
                              }
                              local_28c = (float)FUN_040390ac(fVar25 / fVar18,
                                                              *(long *)(lVar16 + 0x38),0);
                            }
                            if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            iVar7 = FUN_04039560(*(long *)(lVar16 + 0x40),0);
                            if (0 < iVar7) {
                              if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01f08a3c();
                              }
                              FUN_040390ac(fVar25 / fVar19,*(long *)(lVar16 + 0x40),0);
                            }
                            lVar17 = FUN_04070398(param_9,0);
                            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            local_280 = (float)FUN_0407d3c8(lVar17,0);
                            fVar18 = fVar24;
                            fVar19 = fVar23;
                            lVar17 = FUN_04070398(lVar16,0);
                            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            fVar25 = (float)FUN_0407d3c8(lVar17,0);
                            if (DAT_0482ee9b == '\0') {
                              thunk_FUN_01efb3a4(
                                                Method_Oculus_Platform_Message<LeaderboardList>__ctor__
                                                );
                              DAT_0482ee9b = '\x01';
                            }
                            if (*(int *)(*(long *)
                                          Method_Oculus_Platform_Message<LeaderboardList>__ctor__ +
                                        0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            local_280 = local_280 - fVar25;
                            fVar24 = fVar24 - fVar18;
                            fVar23 = fVar23 - fVar19;
                            local_288 = SQRT(fVar23 * fVar23 +
                                             local_280 * local_280 + fVar24 * fVar24);
                            if (local_288 <= DAT_00c926ac) {
                              if (DAT_0482ee12 == '\0') {
                                thunk_FUN_01efb3a4(
                                                  Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                                                  );
                                DAT_0482ee12 = '\x01';
                              }
                              pfVar14 = *(float **)
                                         (*(long *)
                                           Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                                         + 0xb8);
                              local_280 = *pfVar14;
                              local_284 = pfVar14[1];
                              local_288 = pfVar14[2];
                            }
                            else {
                              local_280 = local_280 / local_288;
                              local_284 = fVar24 / local_288;
                              local_288 = fVar23 / local_288;
                            }
                          }
                          else {
                            lVar17 = FUN_04070398(lVar16,0);
                            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            local_280 = (float)FUN_0407d840(lVar17,0);
                            local_28c = 1.0;
                          }
                          uStack_d8 = param_12[5];
                          local_e0 = param_12[4];
                          uStack_c8 = param_12[7];
                          uStack_d0 = param_12[6];
                          uStack_f8 = param_12[1];
                          local_100 = *param_12;
                          uStack_e8 = param_12[3];
                          local_f0 = param_12[2];
                          fVar18 = *(float *)(lVar16 + 0x68);
                          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          uStack_178 = uStack_f8;
                          local_180 = local_100;
                          uStack_168 = uStack_e8;
                          uStack_170 = local_f0;
                          uStack_158 = uStack_d8;
                          local_160 = local_e0;
                          uStack_148 = uStack_c8;
                          uStack_150 = uStack_d0;
                          fVar19 = local_26c + local_288 * fVar18;
                          FUN_03d1e03c(local_264 + local_280 * fVar18,local_268 + local_284 * fVar18
                                       ,param_9,uVar1,param_11 & 1,&local_180);
                          if (local_270 == 0.0) {
                            local_270 = *(float *)(lVar16 + 0x5c);
                          }
                          else {
                            local_270 = (float)FUN_03d1f850(lVar16,param_9);
                          }
                          uStack_d8 = param_12[5];
                          uVar15 = param_12[4];
                          uStack_c8 = param_12[7];
                          uStack_d0 = param_12[6];
                          uStack_f8 = param_12[1];
                          local_100 = *param_12;
                          uStack_e8 = param_12[3];
                          lVar11 = param_12[2];
                          local_f0 = lVar11;
                          local_e0 = uVar15;
                          lVar17 = FUN_04070398(param_9,0);
                          fVar24 = (float)lVar11;
                          fVar18 = (float)uVar15;
                          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a3c();
                          }
                          fVar23 = (float)FUN_0407d7c4(lVar17,0);
                          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          local_268 = local_268 + local_270 * fVar18;
                          uStack_198 = uStack_d8;
                          local_1a0 = local_e0;
                          uStack_188 = uStack_c8;
                          uStack_190 = uStack_d0;
                          uStack_1b8 = uStack_f8;
                          local_1c0 = local_100;
                          uStack_1a8 = uStack_e8;
                          lStack_1b0 = local_f0;
                          fVar18 = (float)FUN_03d1e03c(local_264 + local_270 * fVar23,local_268,
                                                       local_26c + local_270 * fVar24,param_9,uVar1,
                                                       param_11 & 1,&local_1c0);
                          if (DAT_0482ee9d == '\0') {
                            thunk_FUN_01efb3a4(
                                              Method_Oculus_Platform_Message<LeaderboardList>__ctor__
                                              );
                            DAT_0482ee9d = '\x01';
                          }
                          if (*(int *)(*(long *)
                                        Method_Oculus_Platform_Message<LeaderboardList>__ctor__ +
                                      0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          if (param_13 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a3c();
                          }
                          uVar21 = NEON_ucvtf(*(undefined4 *)(lVar16 + 100));
                          FUN_0408a700(SQRT((fVar18 - local_278) * (fVar18 - local_278) +
                                            (local_268 - local_274) * (local_268 - local_274)),
                                       uVar21,fVar19,fVar20,param_13,in_stack_00000048,0);
                          FUN_03d1e600(param_13,*(undefined1 *)(lVar16 + 0x60),
                                       *(undefined1 *)(lVar16 + 0x71),param_15 & 1,param_19,
                                       in_stack_00000038,param_16,param_17);
                          FUN_0408a908(param_13,*(undefined8 *)PTR_DAT_04573fd8,0);
                          uVar8 = FUN_04079770(0);
                          fVar23 = local_278 + local_278 + -1.0;
                          fVar24 = local_274 + local_274 + -1.0;
                          fVar19 = ABS(fVar23);
                          uVar12 = (ulong)(uint)fVar19;
                          fVar18 = -fVar24;
                          if ((uVar8 & 1) == 0) {
                            fVar18 = fVar24;
                          }
                          if (fVar19 <= ABS(fVar24)) {
                            fVar19 = ABS(fVar24);
                          }
                          if (*(long *)(lVar16 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a3c();
                          }
                          iVar7 = FUN_04039560(*(long *)(lVar16 + 0x50),0);
                          if (iVar7 < 1) {
                            fVar19 = 1.0;
                          }
                          else {
                            if (*(long *)(lVar16 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            fVar19 = (float)FUN_040390ac(fVar19,*(long *)(lVar16 + 0x50),0);
                          }
                          uVar8 = (ulong)(uint)local_28c;
                          if (0.0 < local_28c * fVar19 * *(float *)(lVar16 + 0x28)) {
                            uVar21 = 0xbf800000;
                            if (*(char *)(lVar16 + 0x70) != '\0') {
                              uVar21 = 0x3f800000;
                            }
                            FUN_0408a700(uVar21,DAT_00c926ec,DAT_00c92930,DAT_00c92474,param_13,
                                         in_stack_00000058,0);
                            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            if (DAT_0483388a == '\0') {
                              thunk_FUN_01efb3a4(
                                                Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                );
                              DAT_0483388a = '\x01';
                            }
                            uVar26 = *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                + 0xb8) + 8);
                            uVar21 = *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                + 0xb8) + 0xc);
                            if (DAT_0482ee9c == '\0') {
                              thunk_FUN_01efb3a4(
                                                Method_Unity_Collections_NativeArray<float4>_Dispose__
                                                );
                              DAT_0482ee9c = '\x01';
                            }
                            FUN_03d1ddec(fVar23,fVar18,uVar26,uVar21,
                                         (fVar18 - fVar18) * 0.0 - (fVar23 - fVar23),
                                         -(fVar18 - fVar18) - (fVar23 - fVar23) * 0.0,
                                         (float)param_1 / (float)param_2,0x3f800000,0);
                            FUN_0408a700(param_13,in_stack_00000040,0);
                            FUN_0408a700(fVar23,fVar18,0,0,param_13,in_stack_00000050,0);
                            fVar18 = (float)(*(int *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28) +
                                            *(int *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38));
                            if ((param_14 & 1) == 0) {
                              fVar18 = 0.0;
                            }
                            uVar8 = (ulong)(uint)fVar18;
                            uVar12 = 0x3f800000;
                            FUN_0408a094((float)*(int *)(lVar9 + 0x10),uVar8,0x3f800000,0x3f800000,
                                         param_13,0);
                            if (*(int *)(*(long *)PTR_DAT_04573fc8 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            FUN_03d34280(param_13,param_8,4,0);
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
        goto LAB_03d1ea10;
      }
      FUN_02c7ab68(&local_c0,*(undefined8 *)PTR_DAT_04573f98);
      if ((param_14 & 1) == 0) {
LAB_03d1f470:
        lVar9 = *(long *)puVar5;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar5;
        }
        lVar9 = *(long *)(lVar9 + 0xb8);
        iVar2 = *(int *)(lVar9 + 0x24);
        iVar7 = *(int *)(lVar9 + 0x38) + 1;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = iVar7 / iVar2;
        }
        *(int *)(lVar9 + 0x38) = iVar7 - iVar3 * iVar2;
        return;
      }
      lVar9 = *(long *)puVar5;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar5;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
      if (lVar9 == 0) {
        local_1d0 = 0;
        uStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        lStack_1e0 = 0;
      }
      else {
        local_1d0 = *(undefined8 *)(lVar9 + 0x48);
        uStack_1d8 = *(undefined8 *)(lVar9 + 0x40);
        lStack_1e0 = *(long *)(lVar9 + 0x38);
        uStack_1e8 = *(undefined8 *)(lVar9 + 0x30);
        local_1f0 = *(undefined8 *)(lVar9 + 0x28);
      }
      uStack_f8 = uStack_1e8;
      local_100 = local_1f0;
      uStack_e8 = uStack_1d8;
      local_f0 = lStack_1e0;
      local_e0 = local_1d0;
      if (param_13 != 0) {
        uStack_218 = uStack_1e8;
        local_220 = local_1f0;
        uStack_208 = uStack_1d8;
        lStack_210 = lStack_1e0;
        local_200 = local_1d0;
        FUN_0408b1c0(param_13,&local_220,0);
        lVar9 = *(long *)(*(long *)puVar5 + 0xb8);
        if (*(long *)(lVar9 + 0x10) != 0) {
          iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18);
          FUN_0408a094((float)iVar7,0,(float)(*(int *)(lVar9 + 0x20) - iVar7),
                       (float)(*(int *)(lVar9 + 0x28) + *(int *)(lVar9 + 0x24)),param_13,0);
          FUN_0408a504(0,0,0,0x3f800000,param_13,0,1,0);
          goto LAB_03d1f470;
        }
      }
    }
  }
LAB_03d1f4d8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


