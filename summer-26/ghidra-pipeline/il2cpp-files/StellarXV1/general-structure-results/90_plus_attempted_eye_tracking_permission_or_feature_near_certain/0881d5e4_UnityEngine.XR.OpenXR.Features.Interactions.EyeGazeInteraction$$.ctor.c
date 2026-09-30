/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 0881d5e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 131
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint in_w8;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint in_w11;
  int in_w12;
  uint *puVar18;
  long unaff_x20;
  long *plVar19;
  undefined8 uVar20;
  long unaff_x22;
  uint uVar21;
  long unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  char unaff_w28;
  uint unaff_w29;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  long in_stack_000002a8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined4 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  
  plVar19 = *(long **)(unaff_x20 + 0x670);
LAB_0881d5e8:
  uVar7 = (uint)unaff_x26;
  uVar21 = unaff_w25 + uVar7;
  if (in_w8 <= uVar21) goto LAB_0882241c;
  puVar18 = (uint *)(unaff_x24 + (long)(int)uVar21 * 0x10 + 4);
  if (*puVar18 == 0) {
    return 0;
  }
  lVar11 = *plVar19;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
  }
  uVar24 = (undefined4)param_4;
  fVar22 = (float)param_3;
  uVar8 = (undefined4)param_2;
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar15 = *(long *)(lVar14 + 0x88);
  if (lVar15 == 0) goto LAB_08822478;
  if ((long)*(int *)(lVar15 + 0x18) <= (long)unaff_x26) {
    return 0;
  }
  if (*(uint *)(unaff_x22 + 0x18) <= uVar21) goto LAB_0882241c;
  uVar21 = *puVar18;
  if (uVar21 == 0x3c) {
    return 0;
  }
  if (uVar21 == 0x3e) {
    *in_stack_00000010 = in_stack_00000018._4_4_ + uVar7;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *plVar19;
      lVar14 = *(long *)(lVar11 + 0xb8);
      lVar15 = *(long *)(lVar14 + 0x88);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
    *(undefined2 *)(lVar15 + unaff_x26 * 2 + 0x20) = 0;
    if (*(char *)(in_stack_00000020 + 0x468) != '\0') {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar11 = *plVar19;
        lVar14 = *(long *)(lVar11 + 0xb8);
      }
      lVar14 = *(long *)(lVar14 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
      if (*(int *)(lVar14 + 0x20) != -0x11878bc5) {
        return 0;
      }
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *plVar19;
    }
    plVar16 = *(long **)(lVar11 + 0xb8);
    lVar14 = plVar16[0x12];
    if (lVar14 == 0) goto LAB_08822478;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
    if (*(int *)(lVar14 + 0x20) == -0x11878bc5) {
      *(undefined1 *)(in_stack_00000020 + 0x468) = 0;
      return 1;
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *plVar19;
      plVar16 = *(long **)(lVar11 + 0xb8);
    }
    lVar14 = plVar16[0x11];
    if (lVar14 == 0) goto LAB_08822478;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
    if ((uVar7 == 4) && (*(short *)(lVar14 + 0x20) == 0x23)) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        lVar11 = thunk_FUN_040d65a8();
        lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
      }
      uVar13 = 4;
    }
    else {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar11 = *plVar19;
        plVar16 = *(long **)(lVar11 + 0xb8);
        lVar14 = plVar16[0x11];
        if (lVar14 == 0) goto LAB_08822478;
      }
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
      if ((uVar7 == 5) && (*(short *)(lVar14 + 0x20) == 0x23)) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          lVar11 = thunk_FUN_040d65a8();
          lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
        }
        uVar13 = 5;
      }
      else {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar11 = *plVar19;
          plVar16 = *(long **)(lVar11 + 0xb8);
          lVar14 = plVar16[0x11];
          if (lVar14 == 0) goto LAB_08822478;
        }
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
        if ((uVar7 == 7) && (*(short *)(lVar14 + 0x20) == 0x23)) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            lVar11 = thunk_FUN_040d65a8();
            lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
          }
          uVar13 = 7;
        }
        else {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar11 = *plVar19;
            plVar16 = *(long **)(lVar11 + 0xb8);
            lVar14 = plVar16[0x11];
            if (lVar14 == 0) goto LAB_08822478;
          }
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
          if ((uVar7 != 9) || (*(short *)(lVar14 + 0x20) != 0x23)) {
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar11 = *plVar19;
              plVar16 = *(long **)(lVar11 + 0xb8);
            }
            lVar14 = plVar16[0x12];
            if (lVar14 == 0) goto LAB_08822478;
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
            uVar21 = *(uint *)(lVar14 + 0x20);
            if ((int)uVar21 < 0x65d) {
              if ((int)uVar21 < -0x325312e0) {
                if (uVar21 < 0xa6c747d4) {
                  if (0x9dac6cf1 < uVar21) {
                    if (uVar21 < 0xa1903fc8) {
                      if (uVar21 == 0x9e50e566) {
                        *(undefined4 *)(in_stack_00000020 + 0x2d8) = 0;
                        *(undefined1 *)(in_stack_00000020 + 0x2dc) = 0;
                        return 1;
                      }
                      if (uVar21 != 0xa1903fc7) {
                        return 0;
                      }
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        lVar11 = thunk_FUN_040d65a8();
                        plVar16 = *(long **)(*plVar19 + 0xb8);
                        lVar14 = plVar16[0x12];
                        if (lVar14 == 0) goto LAB_08822478;
                      }
                      if (*(int *)(lVar14 + 0x18) != 0) {
                        fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                     *(undefined4 *)(lVar14 + 0x2c),
                                                     *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0
                                                    );
                        if (fVar22 == -32768.0) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ == 2) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ == 1) {
                          fVar23 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar23 = 1.0;
                          }
                          fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                        }
                        else {
                          fVar23 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar23 = 1.0;
                          }
                          fVar22 = fVar22 * fVar23;
                        }
                        *(float *)(in_stack_00000020 + 0x2d4) = fVar22;
                        return 1;
                      }
                    }
                    else {
                      if (uVar21 != 0xa5c050bc) {
                        if (uVar21 != 0xa62e8917) {
                          if (uVar21 != 0xa6c747d3) {
                            return 0;
                          }
                          uVar8 = FUN_065eacdc(in_stack_00000020 + 0x448,
                                               *(undefined8 *)PTR_DAT_09338838);
                          *(undefined4 *)(in_stack_00000020 + 0x444) = uVar8;
                          return 1;
                        }
                        uVar13 = 8;
                        uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 8;
                        goto LAB_0882069c;
                      }
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        lVar11 = thunk_FUN_040d65a8();
                        plVar16 = *(long **)(*plVar19 + 0xb8);
                        lVar14 = plVar16[0x12];
                        if (lVar14 == 0) goto LAB_08822478;
                      }
                      if (*(int *)(lVar14 + 0x18) != 0) {
                        fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                     *(undefined4 *)(lVar14 + 0x2c),
                                                     *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0
                                                    );
                        if (fVar22 == -32768.0) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ == 2) {
                          fVar22 = (fVar22 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                        }
                        else if (in_stack_00000038._4_4_ == 1) {
                          fVar23 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar23 = 1.0;
                          }
                          fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                        }
                        else {
                          fVar23 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar23 = 1.0;
                          }
                          fVar22 = fVar22 * fVar23;
                        }
                        uVar13 = *(undefined8 *)PTR_DAT_093387d0;
                        *(float *)(in_stack_00000020 + 0x444) = fVar22;
                        FUN_065eac98(in_stack_00000020 + 0x448,uVar13);
                        *(undefined4 *)(in_stack_00000020 + 0x658) =
                             *(undefined4 *)(in_stack_00000020 + 0x444);
                        return 1;
                      }
                    }
                    goto LAB_0882241c;
                  }
                  if (0x8f5a791e < uVar21) {
                    if (uVar21 == 0x9176b2c9) {
                      in_stack_000002a8 =
                           FUN_065ea6fc(in_stack_00000020 + 0x5a0,*(undefined8 *)PTR_DAT_09338818);
                      *(long *)(in_stack_00000020 + 0x598) = in_stack_000002a8;
                      lVar11 = in_stack_00000020 + 0x598;
LAB_08821eec:
                      thunk_FUN_040ec700(lVar11,in_stack_000002a8);
                      return 1;
                    }
                    if (uVar21 != 0x9312449e) {
                      if (uVar21 != 0x9dac6cf1) {
                        return 0;
                      }
                      *(undefined8 *)(in_stack_00000020 + 0x388) = 0;
                      return 1;
                    }
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x90);
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                        return 1;
                      }
                      FUN_065e9300(in_stack_00000020 + 0x610,*(undefined4 *)(lVar14 + 0x24),
                                   *(undefined8 *)PTR_DAT_093387c0);
                      uVar13 = FUN_07676bc4(&stack0x0000028c,0);
                      uVar20 = FUN_07676bc4(in_stack_00000020 + 0x4a4,0);
                      uVar13 = FUN_074e70a4(*(undefined8 *)PTR_DAT_09338860,uVar13,
                                            *(undefined8 *)PTR_DAT_09338868,uVar20,0);
                      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
                      }
                      FUN_0897e2a8(uVar13,0);
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar21 != 0x88ce15e6) {
                    if (uVar21 != 0x8f5a791e) {
                      return 0;
                    }
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      plVar16 = *(long **)(*plVar19 + 0xb8);
                      lVar14 = plVar16[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar22 == -32768.0) {
                        return 0;
                      }
                      uVar7 = 0x80000000;
                      if (fVar22 != INFINITY) {
                        uVar7 = (int)fVar22;
                      }
                      if ((int)uVar7 < 0x191) {
                        if ((int)uVar7 < 0xc9) {
                          if ((uVar7 == 100) || (uVar7 == 200)) goto LAB_088215c8;
                        }
                        else if ((uVar7 == 300) || (uVar7 == 400)) goto LAB_088215c8;
                      }
                      else if (uVar7 < 0x259) {
                        if ((uVar7 == 500) || (uVar7 == 600)) goto LAB_088215c8;
                      }
                      else if ((uVar7 == 700) || ((uVar7 == 800 || (uVar7 == 900)))) {
LAB_088215c8:
                        *(uint *)(in_stack_00000020 + 0x23c) = uVar7;
                      }
                      uVar8 = *(undefined4 *)(in_stack_00000020 + 0x23c);
                      uVar13 = *(undefined8 *)PTR_DAT_093387e8;
                      in_stack_00000020 = in_stack_00000020 + 0x240;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_graspReady:
                      FUN_065e98bc(in_stack_00000020,uVar8,uVar13);
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x90);
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  uVar8 = *(undefined4 *)(lVar14 + 0x24);
                  uVar12 = FUN_087deba8(uVar8,&stack0x00000298,0);
                  puVar2 = PTR_DAT_09285bb0;
                  if ((uVar12 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar12 = FUN_089cc398(in_stack_00000298,0,0);
                    if ((uVar12 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      uVar13 = FUN_0883de60(0);
                      lVar11 = *plVar19;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(lVar11);
                        lVar11 = *plVar19;
                      }
                      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                      if (lVar14 == 0) goto LAB_08822478;
                      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                      uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x88),
                                            *(undefined4 *)(lVar14 + 0x2c),
                                            *(undefined4 *)(lVar14 + 0x30),0);
                      uVar13 = FUN_074d875c(uVar13,uVar20,0);
                      in_stack_00000298 = FUN_05191970(uVar13,*(undefined8 *)PTR_DAT_09338798);
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar12 = FUN_089cc398(in_stack_00000298,0,0);
                    if ((uVar12 & 1) != 0) {
                      return 0;
                    }
                    FUN_087de8ac(uVar8,in_stack_00000298,0);
                    *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000298;
                  }
                  else {
                    *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000298;
                  }
                  thunk_FUN_040ec700(in_stack_00000020 + 0x598,in_stack_00000298);
                  lVar11 = *plVar19;
                  uVar7 = 1;
                  *(undefined1 *)(in_stack_00000020 + 0x5c8) = 0;
                  goto LAB_08820f18;
                }
                if (uVar21 < 0xb93c7ef2) {
                  if (uVar21 < 0xace2bca9) {
                    if (uVar21 == 0xa97f2798) {
                      if ((*(byte *)(in_stack_00000020 + 0x280) >> 3 & 1) != 0) {
                        return 1;
                      }
                      cVar4 = FUN_08848558(in_stack_00000020 + 0x288,8,0);
                      if (cVar4 != '\0') {
                        return 1;
                      }
                      uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffff7;
                      goto LAB_08820060;
                    }
                    if (uVar21 != 0xace2bca8) {
                      return 0;
                    }
                    if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                      return 1;
                    }
                    uVar7 = *(int *)(in_stack_00000020 + 0x4a4) - 1;
                    if (0 < *(int *)(in_stack_00000020 + 0x4a4)) {
                      fVar22 = *(float *)(in_stack_00000020 + 0x658) -
                               *(float *)(in_stack_00000020 + 0x2d4);
                      *(float *)(in_stack_00000020 + 0x658) = fVar22;
                      if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                         (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x38),
                         lVar11 == 0)) goto LAB_08822478;
                      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_0882241c;
                      *(float *)(lVar11 + (ulong)uVar7 * 0x178 + 0x13c) = fVar22;
                    }
                    *(undefined4 *)(in_stack_00000020 + 0x2d4) = 0;
                    return 1;
                  }
                  if (uVar21 == 0xaf32f89e) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar11 = *plVar19;
                      plVar16 = *(long **)(lVar11 + 0xb8);
                      lVar14 = plVar16[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    fVar22 = DAT_01aec9c8;
                    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                    if (*(int *)(lVar14 + 0x28) != 1) {
                      if (*(int *)(lVar14 + 0x28) != 0) {
                        return 0;
                      }
                      uVar7 = 1;
                      goto LAB_088203b4;
                    }
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      plVar16 = *(long **)(*plVar19 + 0xb8);
                      lVar14 = plVar16[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar22 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ == 2) {
                        fVar23 = 0.0;
                        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                          fVar23 = *(float *)(in_stack_00000020 + 0x398);
                        }
                        fVar22 = (fVar22 * (*(float *)(in_stack_00000020 + 0x390) - fVar23)) / 100.0
                        ;
                      }
                      else if (in_stack_00000038._4_4_ == 1) {
                        fVar23 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar23 = 1.0;
                        }
                        fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                      }
                      else {
                        fVar23 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar23 = 1.0;
                        }
                        fVar22 = fVar22 * fVar23;
                      }
                      if (fVar22 < 0.0) {
                        fVar22 = 0.0;
                      }
                      *(float *)(in_stack_00000020 + 0x388) = fVar22;
                      goto LAB_088212dc;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar21 != 0xb01dd609) {
                    if (uVar21 != 0xb93c7ef1) {
                      return 0;
                    }
                    if (*(char *)(in_stack_00000020 + 0x469) != '\0') {
                      FUN_065e9558(in_stack_00000020 + 0x610,*(undefined8 *)PTR_DAT_093387f0);
                      uVar13 = FUN_07676bc4(&stack0x0000021c,0);
                      uVar20 = FUN_07676bc4(&stack0x0000021c,0);
                      uVar13 = FUN_074e70a4(*(undefined8 *)PTR_DAT_09338860,uVar13,
                                            *(undefined8 *)PTR_DAT_09338878,uVar20,0);
                      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
                      }
                      FUN_0897e2a8(uVar13,0);
                    }
                    FUN_065e9348(in_stack_00000020 + 0x610,*(undefined8 *)PTR_DAT_09338820);
                    return 1;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                    lVar14 = plVar16[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                               *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                  if (fVar22 == -32768.0) {
                    return 0;
                  }
                  lVar11 = *plVar19;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                  }
                  lVar14 = *(long *)(lVar11 + 0xb8);
                  lVar15 = *(long *)(lVar14 + 0x90);
                  if (lVar15 == 0) goto LAB_08822478;
                  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0882241c;
                  iVar9 = *(int *)(lVar15 + 0x34);
                  if (iVar9 == 2) {
                    return 0;
                  }
                  if (iVar9 == 1) {
                    fVar23 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar23 = 1.0;
                    }
                    fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pokePosition
                    :
                    *(float *)(in_stack_00000020 + 0x2d8) = fVar22;
                  }
                  else if (iVar9 == 0) {
                    fVar23 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar23 = 1.0;
                    }
                    fVar22 = fVar22 * fVar23;
                    goto 
                    UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pokePosition
                    ;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                    lVar14 = *(long *)(lVar11 + 0xb8);
                    lVar15 = *(long *)(lVar14 + 0x90);
                    if (lVar15 == 0) goto LAB_08822478;
                  }
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar15 + 0x38) != 0x22bcfb9a) {
                    return 1;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*plVar19 + 0xb8);
                    lVar15 = *(long *)(lVar14 + 0x90);
                    if (lVar15 == 0) goto LAB_08822478;
                  }
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
                    fVar22 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                                 *(undefined4 *)(lVar15 + 0x44),
                                                 *(undefined4 *)(lVar15 + 0x48),&stack0x000002c0);
                    *(bool *)(in_stack_00000020 + 0x2dc) = fVar22 != 0.0;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar21 < 0xc465179a) {
                  if (uVar21 == 0xbe648664) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      plVar16 = *(long **)(*plVar19 + 0xb8);
                    }
                    FUN_065e9fc8(&stack0x000002c0,plVar16 + 2,*(undefined8 *)PTR_DAT_09338848);
                    *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002d8;
                    thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                    *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_000002c0;
                    return 1;
                  }
                  if (uVar21 != 0xc4651799) {
                    return 0;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                    lVar14 = plVar16[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c)
                                                 ,*(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar22 == -32768.0) {
                      return 0;
                    }
                    fVar22 = fVar22 * DAT_01aed080;
                    uVar8 = 0;
                    uVar25 = FUN_089b9180(0,0);
LAB_0881fe38:
                    *(undefined4 *)(in_stack_00000020 + 0x46c) = uVar25;
                    *(undefined4 *)(in_stack_00000020 + 0x470) = uVar8;
                    *(float *)(in_stack_00000020 + 0x474) = fVar22;
                    *(undefined4 *)(in_stack_00000020 + 0x478) = uVar24;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar21 != 0xc4e67de9) {
                  if (uVar21 != 0xcdaced1f) {
                    return 0;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                    lVar14 = plVar16[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c)
                                                 ,*(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar22 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ == 2) {
                      fVar22 = (fVar22 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                    }
                    else if (in_stack_00000038._4_4_ == 1) {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                    }
                    else {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = fVar22 * fVar23;
                    }
                    *(float *)(in_stack_00000020 + 0x440) = fVar22;
                    *(float *)(in_stack_00000020 + 0x658) =
                         *(float *)(in_stack_00000020 + 0x658) + fVar22;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar11 = *plVar19;
                  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                uVar8 = *(undefined4 *)(lVar14 + 0x24);
                *(undefined4 *)(in_stack_00000020 + 0x6bc) = 0xffffffff;
                if (*(int *)(lVar14 + 0x28) == 0) {
LAB_0881f4dc:
                  puVar2 = PTR_DAT_09285bb0;
                  uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1c8);
                  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar12 = FUN_089ca704(uVar13,0,0);
                  if ((uVar12 & 1) == 0) {
                    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar12 = FUN_089ca704(uVar13,0,0);
                    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                    if ((uVar12 & 1) != 0) {
                      *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar13;
                      goto LAB_08821f30;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar12 = FUN_089cc398(uVar13,0,0);
                    puVar3 = PTR_DAT_093375c8;
                    if ((uVar12 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      uVar13 = FUN_0883db08(0);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(*(long *)puVar2);
                      }
                      uVar12 = FUN_089ca704(uVar13,0,0);
                      if ((uVar12 & 1) == 0) {
                        uVar13 = FUN_05191970(*(undefined8 *)PTR_DAT_09338870,
                                              *(undefined8 *)PTR_DAT_093387a8);
                      }
                      else {
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                        }
                        uVar13 = FUN_0883db08(0);
                      }
                      *(undefined8 *)(in_stack_00000020 + 0x6a8) = uVar13;
                      thunk_FUN_040ec700((undefined8 *)(in_stack_00000020 + 0x6a8),uVar13);
                      uVar13 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                      *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar13;
                      goto LAB_08821f30;
                    }
                  }
                  else {
                    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x1c8);
                    *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar13;
LAB_08821f30:
                    thunk_FUN_040ec700(in_stack_00000020 + 0x6b0,uVar13);
                  }
                  uVar13 = *(undefined8 *)(in_stack_00000020 + 0x6b0);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar12 = FUN_089cc398(uVar13,0,0);
                  if ((uVar12 & 1) != 0) {
                    return 0;
                  }
                }
                else {
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x90);
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar14 + 0x28) == 1) goto LAB_0881f4dc;
                  uVar12 = FUN_087deb00(uVar8,&stack0x00000290,0);
                  puVar2 = PTR_DAT_09285bb0;
                  if ((uVar12 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar12 = FUN_089cc398(in_stack_00000290,0,0);
                    if ((uVar12 & 1) != 0) {
                      lVar11 = *plVar19;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                        lVar11 = *plVar19;
                      }
                      lVar14 = *(long *)(lVar11 + 0xb8);
                      lVar15 = *(long *)(lVar14 + 0x78);
                      in_stack_00000290 = 0;
                      if (lVar15 != 0) {
                        if (*(int *)(lVar11 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                          lVar14 = *(long *)(*plVar19 + 0xb8);
                        }
                        lVar11 = *(long *)(lVar14 + 0x90);
                        if (lVar11 == 0) goto LAB_08822478;
                        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0882241c;
                        uVar13 = FUN_074ecc38(0,*(undefined8 *)(lVar14 + 0x88),
                                              *(undefined4 *)(lVar11 + 0x2c),
                                              *(undefined4 *)(lVar11 + 0x30),0);
                        in_stack_00000290 =
                             (**(code **)(lVar15 + 0x18))
                                       (*(undefined8 *)(lVar15 + 0x40),uVar8,uVar13,
                                        *(undefined8 *)(lVar15 + 0x28));
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      uVar12 = FUN_089cc398(in_stack_00000290,0,0);
                      if ((uVar12 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                        }
                        uVar13 = FUN_0883dbc8(0);
                        lVar11 = *plVar19;
                        if (*(int *)(lVar11 + 0xe4) == 0) {
                          thunk_FUN_040d65a8(lVar11);
                          lVar11 = *plVar19;
                        }
                        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                        if (lVar14 == 0) goto LAB_08822478;
                        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                        uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x88),
                                              *(undefined4 *)(lVar14 + 0x2c),
                                              *(undefined4 *)(lVar14 + 0x30),0);
                        uVar13 = FUN_074d875c(uVar13,uVar20,0);
                        in_stack_00000290 = FUN_05191970(uVar13,*(undefined8 *)PTR_DAT_093387a8);
                      }
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar12 = FUN_089cc398(in_stack_00000290,0,0);
                    if ((uVar12 & 1) != 0) {
                      return 0;
                    }
                    FUN_087de708(uVar8,in_stack_00000290,0);
                    *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000290;
                  }
                  else {
                    *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000290;
                  }
                  thunk_FUN_040ec700(in_stack_00000020 + 0x6b0,in_stack_00000290);
                }
                lVar11 = *plVar19;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar11 = *plVar19;
                }
                lVar14 = *(long *)(lVar11 + 0xb8);
                lVar15 = *(long *)(lVar14 + 0x90);
                if (lVar15 == 0) goto LAB_08822478;
                if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0882241c;
                if (*(int *)(lVar15 + 0x28) == 1) {
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*plVar19 + 0xb8);
                    lVar15 = *(long *)(lVar14 + 0x90);
                    if (lVar15 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0882241c;
                  fVar22 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                               *(undefined4 *)(lVar15 + 0x2c),
                                               *(undefined4 *)(lVar15 + 0x30),&stack0x000002c0);
                  iVar9 = -0x80000000;
                  if (fVar22 != INFINITY) {
                    iVar9 = (int)fVar22;
                  }
                  if (iVar9 == -0x8000) {
                    return 0;
                  }
                  if ((*(long *)(in_stack_00000020 + 0x6b0) == 0) ||
                     (lVar11 = FUN_08841500(*(long *)(in_stack_00000020 + 0x6b0),0), lVar11 == 0))
                  goto LAB_08822478;
                  if (*(int *)(lVar11 + 0x18) + -1 < iVar9) {
                    return 0;
                  }
                  lVar11 = *plVar19;
                  *(int *)(in_stack_00000020 + 0x6bc) = iVar9;
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar11 = *plVar19;
                }
                uVar7 = 0;
                uVar8 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x68);
                plVar16 = (long *)(in_stack_00000020 + 0x6b0);
                *(undefined1 *)(in_stack_00000020 + 0x1d1) = 0;
                *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar8;
                goto LAB_08822068;
              }
              if (-0x1044a318 < (int)uVar21) {
                if (0x53 < (int)uVar21) {
                  if (0x64d < uVar21) {
                    if (uVar21 != 0x64e) {
                      if (uVar21 == 0x65a) {
                        if (((*(byte *)(in_stack_00000020 + 0x280) >> 2 & 1) == 0) &&
                           (cVar4 = FUN_08848558(in_stack_00000020 + 0x288,4,0), cVar4 == '\0')) {
                          *(uint *)(in_stack_00000020 + 0x284) =
                               *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffb;
                        }
                        uVar8 = FUN_065e8668(in_stack_00000020 + 0x528,
                                             *(undefined8 *)PTR_DAT_09338828);
                        *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
                        return 1;
                      }
                      if (uVar21 != 0x65c) {
                        return 0;
                      }
                      if (((*(byte *)(in_stack_00000020 + 0x280) >> 6 & 1) == 0) &&
                         (cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x40,0), cVar4 == '\0')) {
                        *(uint *)(in_stack_00000020 + 0x284) =
                             *(uint *)(in_stack_00000020 + 0x284) & 0xffffffbf;
                      }
                      uVar8 = FUN_065e8668(in_stack_00000020 + 0x548,*(undefined8 *)PTR_DAT_09338828
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
                      return 1;
                    }
                    if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                      return 1;
                    }
                    if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                      return 1;
                    }
                    lVar11 = *(long *)(in_stack_00000020 + 0x3a0);
                    if ((lVar11 != 0) && (lVar14 = *(long *)(lVar11 + 0x48), lVar14 != 0)) {
                      uVar21 = *(uint *)(lVar11 + 0x28);
                      uVar7 = *(uint *)(lVar14 + 0x18);
                      goto LAB_088200f0;
                    }
                    goto LAB_08822478;
                  }
                  if (uVar21 != 0x55) {
                    if (uVar21 == 0x646) {
                      if ((*(byte *)(in_stack_00000020 + 0x280) >> 1 & 1) != 0) {
                        return 1;
                      }
                      uVar8 = FUN_065e9348(in_stack_00000020 + 0x5e8,*(undefined8 *)PTR_DAT_09338820
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x608) = uVar8;
                      cVar4 = FUN_08848558(in_stack_00000020 + 0x288,2,0);
                      if (cVar4 != '\0') {
                        return 1;
                      }
                      uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffd;
                      goto LAB_08820060;
                    }
                    if (uVar21 != 0x64d) {
                      return 0;
                    }
                    if ((*(byte *)(in_stack_00000020 + 0x280) & 1) != 0) {
                      return 1;
                    }
                    cVar4 = FUN_08848558(in_stack_00000020 + 0x288,1,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar13 = *(undefined8 *)PTR_DAT_093387f8;
                    *(uint *)(in_stack_00000020 + 0x284) =
                         *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffe;
LAB_08820c40:
                    uVar8 = FUN_065e9acc(in_stack_00000020 + 0x240,uVar13);
                    *(undefined4 *)(in_stack_00000020 + 0x23c) = uVar8;
                    return 1;
                  }
                  *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 4;
                  FUN_08848454(in_stack_00000020 + 0x288,4,0);
                  lVar11 = *plVar19;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                  }
                  lVar14 = *(long *)(lVar11 + 0xb8);
                  lVar15 = *(long *)(lVar14 + 0x90);
                  if (lVar15 == 0) goto LAB_08822478;
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar15 + 0x38) == 0x4e3381d) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*plVar19 + 0xb8);
                      lVar15 = *(long *)(lVar14 + 0x90);
                      if (lVar15 == 0) goto LAB_08822478;
                    }
                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    uVar7 = FUN_08828d64(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                         *(undefined4 *)(lVar15 + 0x44),
                                         *(undefined4 *)(lVar15 + 0x48));
                    *(uint *)(in_stack_00000020 + 0x158) = uVar7;
                    bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                    if (uVar7 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                      bVar5 = (byte)(uVar7 >> 0x18);
                    }
                    *(byte *)(in_stack_00000020 + 0x15b) = bVar5;
                    uVar8 = *(undefined4 *)(in_stack_00000020 + 0x158);
                  }
                  else {
                    uVar8 = *(undefined4 *)(in_stack_00000020 + 0x500);
                    *(undefined4 *)(in_stack_00000020 + 0x158) = uVar8;
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  in_stack_00000020 = in_stack_00000020 + 0x528;
                  goto LAB_0881dfcc;
                }
                if (0x41 < (int)uVar21) {
                  if (uVar21 == 0x42) {
                    *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 1;
                    FUN_08848454(in_stack_00000020 + 0x288,1,0);
                    *(undefined4 *)(in_stack_00000020 + 0x23c) = 700;
                    return 1;
                  }
                  if (uVar21 == 0x49) {
                    *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 2;
                    FUN_08848454(in_stack_00000020 + 0x288,2,0);
                    lVar11 = *plVar19;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar11 = *plVar19;
                    }
                    lVar14 = *(long *)(lVar11 + 0xb8);
                    lVar15 = *(long *)(lVar14 + 0x90);
                    if (lVar15 == 0) goto LAB_08822478;
                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    if (*(int *)(lVar15 + 0x38) == 0x47db7c1) {
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        lVar11 = thunk_FUN_040d65a8();
                        lVar14 = *(long *)(*plVar19 + 0xb8);
                        lVar15 = *(long *)(lVar14 + 0x90);
                        if (lVar15 == 0) goto LAB_08822478;
                      }
                      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                      fVar22 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                                   *(undefined4 *)(lVar15 + 0x44),
                                                   *(undefined4 *)(lVar15 + 0x48),&stack0x000002c0);
                      uVar7 = (uint)fVar22;
                      uVar21 = 0x80000000;
                      if (fVar22 != INFINITY) {
                        uVar21 = uVar7;
                      }
                      *(uint *)(in_stack_00000020 + 0x608) = uVar21;
                      if (0x168 < uVar21 + 0xb4) {
                        return 0;
                      }
                    }
                    else {
                      if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                      bVar5 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b0);
                      uVar7 = (uint)bVar5;
                      *(uint *)(in_stack_00000020 + 0x608) = (uint)bVar5;
                    }
                    FUN_065e9300(in_stack_00000020 + 0x5e8,uVar7,*(undefined8 *)PTR_DAT_093387c0);
                    return 1;
                  }
                  if (uVar21 != 0x53) {
                    return 0;
                  }
                  *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 0x40
                  ;
                  FUN_08848454(in_stack_00000020 + 0x288,0x40,0);
                  lVar11 = *plVar19;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                  }
                  lVar14 = *(long *)(lVar11 + 0xb8);
                  lVar15 = *(long *)(lVar14 + 0x90);
                  if (lVar15 == 0) goto LAB_08822478;
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar15 + 0x38) == 0x4e3381d) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*plVar19 + 0xb8);
                      lVar15 = *(long *)(lVar14 + 0x90);
                      if (lVar15 == 0) goto LAB_08822478;
                    }
                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    uVar7 = FUN_08828d64(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                         *(undefined4 *)(lVar15 + 0x44),
                                         *(undefined4 *)(lVar15 + 0x48));
                    *(uint *)(in_stack_00000020 + 0x15c) = uVar7;
                    bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                    if (uVar7 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                      bVar5 = (byte)(uVar7 >> 0x18);
                    }
                    *(byte *)(in_stack_00000020 + 0x15f) = bVar5;
                    uVar8 = *(undefined4 *)(in_stack_00000020 + 0x15c);
                  }
                  else {
                    uVar8 = *(undefined4 *)(in_stack_00000020 + 0x500);
                    *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar8;
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  in_stack_00000020 = in_stack_00000020 + 0x548;
                  goto LAB_0881dfcc;
                }
                if (uVar21 == 0xff568194) {
                  *(undefined4 *)(in_stack_00000020 + 0x634) = 0;
                  return 1;
                }
                if (uVar21 != 0x41) {
                  return 0;
                }
                if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                  return 1;
                }
                if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                  return 1;
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x90);
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                if (*(int *)(lVar14 + 0x38) != 0x26afb9) {
                  return 1;
                }
                lVar11 = *(long *)(in_stack_00000020 + 0x3a0);
                if (lVar11 == 0) goto LAB_08822478;
                lVar14 = *(long *)(lVar11 + 0x48);
                if (lVar14 == 0) goto LAB_08822478;
                uVar7 = *(uint *)(lVar11 + 0x28);
                if (*(int *)(lVar14 + 0x18) < (int)(uVar7 + 1)) {
                  if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  FUN_05202238((long *)(lVar11 + 0x48),uVar7 + 1,*(undefined8 *)PTR_DAT_093387b0);
                  lVar11 = *(long *)(in_stack_00000020 + 0x3a0);
                  if (lVar11 == 0) goto LAB_08822478;
                }
                lVar11 = *(long *)(lVar11 + 0x48);
                if (lVar11 == 0) goto LAB_08822478;
                if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_0882241c;
                plVar16 = (long *)(lVar11 + (long)(int)uVar7 * 0x28 + 0x20);
                *plVar16 = in_stack_00000020;
                thunk_FUN_040ec700(plVar16,in_stack_00000020);
                if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                   (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar11 == 0))
                goto LAB_08822478;
                if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_0882241c;
                lVar14 = lVar11 + (long)(int)uVar7 * 0x28;
                *(undefined4 *)(lVar14 + 0x28) = 0x26afb9;
                *(undefined4 *)(lVar14 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x4a4);
                lVar15 = *plVar19;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar15 = *plVar19;
                }
                lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x90);
                if (lVar17 == 0) goto LAB_08822478;
                if (((*(uint *)(lVar17 + 0x18) & 0xfffffffe) != 0) &&
                   (uVar7 < *(uint *)(lVar11 + 0x18))) {
                  iVar9 = *(int *)(lVar17 + 0x44);
                  uVar8 = *(undefined4 *)(lVar17 + 0x48);
                  uVar13 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x88);
LAB_08820290:
                  FUN_087f06e0(lVar14 + 0x20,uVar13,iVar9,uVar8,0);
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (uVar21 < 0xd2d23292) {
                if (0xd078112f < uVar21) {
                  if (uVar21 != 0xd256d1de) {
                    if (uVar21 == 0xd26babf6) {
                      uVar25 = FUN_07ad6874(0);
                      goto LAB_0881fe38;
                    }
                    if (uVar21 != 0xd2d23291) {
                      return 0;
                    }
                    FUN_065e9904(in_stack_00000020 + 0x240,*(undefined8 *)PTR_DAT_09338850);
                    if (*(int *)(in_stack_00000020 + 0x284) == 1) {
                      *(undefined4 *)(in_stack_00000020 + 0x23c) = 700;
                      return 1;
                    }
                    uVar13 = *(undefined8 *)PTR_DAT_093387f8;
                    goto LAB_08820c40;
                  }
                  uVar13 = 0x20;
                  uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 0x20;
                  goto LAB_0882069c;
                }
                if (uVar21 == 0xd05efa5c) {
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                    lVar14 = plVar16[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                               *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                  if (fVar22 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ != 2) {
                    if (in_stack_00000038._4_4_ == 1) {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                    }
                    else {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = fVar22 * fVar23;
                    }
                    *(float *)(in_stack_00000020 + 0x2ec) = fVar22;
                    return 1;
                  }
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    fVar28 = *(float *)(in_stack_00000020 + 0x210);
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar23 = (float)FUN_08a73b44(&stack0x00000220,0);
                    if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                      memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28)
                              ,0x60);
                      fVar27 = (float)FUN_08a73b4c(&stack0x00000220,0);
                      if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
                        fVar31 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar31 = 1.0;
                        }
                        memmove(&stack0x00000220,
                                (void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x28),0x60);
                        fVar26 = (float)FUN_08a73b6c(&stack0x00000220,0);
                        *(float *)(in_stack_00000020 + 0x2ec) =
                             (fVar28 / fVar23) * fVar27 * fVar31 * ((fVar22 * fVar26) / 100.0);
                        return 1;
                      }
                    }
                  }
                  goto LAB_08822478;
                }
                if (uVar21 != 0xd078112f) {
                  return 0;
                }
              }
              else {
                if (0xe554f6f3 < uVar21) {
                  if (uVar21 == 0xe7ae3cb4) {
                    *(undefined1 *)(in_stack_00000020 + 0x468) = 1;
                    return 1;
                  }
                  if (uVar21 == 0xedcbd276) goto LAB_0881e5bc;
                  if (uVar21 != 0xefbb5ce8) {
                    return 0;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                    lVar14 = plVar16[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c)
                                                 ,*(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar22 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ == 2) {
                      fVar23 = 0.0;
                      if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                        fVar23 = *(float *)(in_stack_00000020 + 0x398);
                      }
                      fVar22 = (fVar22 * (*(float *)(in_stack_00000020 + 0x390) - fVar23)) / 100.0;
                    }
                    else if (in_stack_00000038._4_4_ == 1) {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                    }
                    else {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = fVar22 * fVar23;
                    }
                    if (fVar22 < 0.0) {
                      fVar22 = 0.0;
                    }
                    *(float *)(in_stack_00000020 + 0x388) = fVar22;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar21 != 0xdd49c439) {
                  if (uVar21 != 0xe554f6f3) {
                    return 0;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                    lVar14 = plVar16[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c)
                                                 ,*(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar22 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ == 2) {
                      fVar23 = 0.0;
                      if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                        fVar23 = *(float *)(in_stack_00000020 + 0x398);
                      }
                      fVar22 = (fVar22 * (*(float *)(in_stack_00000020 + 0x390) - fVar23)) / 100.0;
                    }
                    else if (in_stack_00000038._4_4_ == 1) {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                    }
                    else {
                      fVar23 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar23 = 1.0;
                      }
                      fVar22 = fVar22 * fVar23;
                    }
                    if (fVar22 < 0.0) {
                      fVar22 = 0.0;
                    }
LAB_088212dc:
                    *(float *)(in_stack_00000020 + 0x38c) = fVar22;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
              }
              if ((*(byte *)(in_stack_00000020 + 0x280) >> 4 & 1) != 0) {
                return 1;
              }
              cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x10,0);
              if (cVar4 != '\0') {
                return 1;
              }
              uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffffef;
LAB_08820060:
              *(uint *)(in_stack_00000020 + 0x284) = uVar7;
              return 1;
            }
            if (uVar21 < 0x37b920b) {
              if (0x2adb73 < uVar21) {
                if (0x597459 < uVar21) {
                  if (uVar21 < 0x36f95db) {
                    if (uVar21 == 0x36d097e) {
                      *(undefined1 *)(in_stack_00000020 + 0x309) = 0;
                      return 1;
                    }
                    if (uVar21 != 0x36f95da) {
                      return 0;
                    }
                    if ((*(byte *)(in_stack_00000020 + 0x281) >> 1 & 1) != 0) {
                      return 1;
                    }
                    FUN_065e8cb4(&stack0x000002c0,in_stack_00000020 + 0x568,
                                 *(undefined8 *)PTR_DAT_09338840);
                    FUN_065e8a50(&stack0x000002c0,in_stack_00000020 + 0x568,
                                 *(undefined8 *)PTR_DAT_09338858);
                    *(undefined8 *)(in_stack_00000020 + 0x168) = in_stack_000002c8;
                    *(undefined8 *)(in_stack_00000020 + 0x160) = in_stack_000002c0;
                    *(undefined4 *)(in_stack_00000020 + 0x170) = in_stack_000002d0;
                    cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x200,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffdff;
                    goto LAB_08820060;
                  }
                  if (uVar21 != 0x37038af) {
                    if (uVar21 == 0x37128fc) {
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                        plVar16 = *(long **)(*plVar19 + 0xb8);
                      }
                      FUN_065e9fc8(&stack0x000002c0,plVar16 + 2,*(undefined8 *)PTR_DAT_09338848);
                      *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_000002c8;
                      thunk_FUN_040ec700(in_stack_00000020 + 0x100);
                      *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002d8;
                      thunk_FUN_040ec700(in_stack_00000020 + 0x118,in_stack_000002d8);
                      *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_000002c0;
                      return 1;
                    }
                    if (uVar21 != 0x37b920a) {
                      return 0;
                    }
                    uVar8 = FUN_065eacdc(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_09338838);
                    *(undefined4 *)(in_stack_00000020 + 0x210) = uVar8;
                    return 1;
                  }
                  if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                    return 1;
                  }
                  if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                    return 1;
                  }
                  lVar11 = *(long *)(in_stack_00000020 + 0x3a0);
                  if ((lVar11 == 0) || (lVar14 = *(long *)(lVar11 + 0x48), lVar14 == 0))
                  goto LAB_08822478;
                  uVar21 = *(uint *)(lVar11 + 0x28);
                  uVar7 = *(uint *)(lVar14 + 0x18);
                  if ((int)uVar7 <= (int)uVar21) {
                    return 1;
                  }
LAB_088200f0:
                  if (uVar21 < uVar7) {
                    lVar14 = lVar14 + (long)(int)uVar21 * 0x28;
                    *(int *)(lVar14 + 0x38) =
                         *(int *)(in_stack_00000020 + 0x4a4) - *(int *)(lVar14 + 0x34);
                    *(uint *)(lVar11 + 0x28) = uVar21 + 1;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (0x2eb625 < uVar21) {
                  return 0;
                }
                if (uVar21 == 0x2b96d1) {
                  *(undefined1 *)(in_stack_00000020 + 0x309) = 1;
                  return 1;
                }
                if (uVar21 != 0x2eb625) {
                  return 0;
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  lVar11 = thunk_FUN_040d65a8();
                  plVar16 = *(long **)(*plVar19 + 0xb8);
                  lVar14 = plVar16[0x12];
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                             *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                if (fVar22 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000038._4_4_ == 2) {
                  fVar22 = (fVar22 * *(float *)(in_stack_00000020 + 0x20c)) / 100.0;
                }
                else if (in_stack_00000038._4_4_ == 1) {
                  fVar22 = fVar22 * *(float *)(in_stack_00000020 + 0x20c);
                }
                else {
                  lVar11 = *plVar19;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                  }
                  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                  if (lVar14 == 0) goto LAB_08822478;
                  if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_0882241c;
                  if (*(short *)(lVar14 + 0x2a) != 0x2b) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_0882241c;
                    if (*(short *)(lVar14 + 0x2a) != 0x2d) {
                      uVar13 = *(undefined8 *)PTR_DAT_093387d0;
                      *(float *)(in_stack_00000020 + 0x210) = fVar22;
                      goto LAB_088212a4;
                    }
                  }
                  fVar22 = fVar22 + *(float *)(in_stack_00000020 + 0x20c);
                }
                puVar2 = PTR_DAT_093387d0;
                *(float *)(in_stack_00000020 + 0x210) = fVar22;
                uVar13 = *(undefined8 *)puVar2;
LAB_088212a4:
                FUN_065eac98(fVar22,in_stack_00000020 + 0x218,uVar13);
                return 1;
              }
              if (uVar21 < 0x1b02fa) {
                if (uVar21 < 0x167e5) {
                  if (uVar21 == 0x14dac) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      plVar16 = *(long **)(*plVar19 + 0xb8);
                      lVar14 = plVar16[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar22 == -32768.0) {
                        return 0;
                      }
                      fVar23 = DAT_01aec9c8;
                      if (in_stack_00000038._4_4_ == 0) {
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar23 = 1.0;
                        }
                      }
                      else {
                        if (in_stack_00000038._4_4_ != 1) {
                          fVar22 = (fVar22 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                          goto LAB_08821380;
                        }
                        fVar22 = fVar22 * *(float *)(in_stack_00000020 + 0x210);
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar23 = 1.0;
                        }
                      }
                      fVar22 = fVar22 * fVar23;
                      goto LAB_08821334;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar21 != 0x167e4) {
                    return 0;
                  }
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar28 = *(float *)(in_stack_00000020 + 0x43c);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar22 = (float)FUN_08a73bc4(&stack0x00000220,0);
                  fVar23 = 1.0;
                  if (0.0 < fVar22) {
                    if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar23 = (float)FUN_08a73bc4(&stack0x00000220,0);
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_09338810;
                  *(float *)(in_stack_00000020 + 0x43c) = fVar28 * fVar23;
                  FUN_065ead50(*(undefined4 *)(in_stack_00000020 + 0x634),in_stack_00000020 + 0x638,
                               uVar13);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar23 = *(float *)(in_stack_00000020 + 0x210);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar22 = (float)FUN_08a73b44(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar28 = (float)FUN_08a73b4c(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar31 = *(float *)(in_stack_00000020 + 0x634);
                  fVar27 = DAT_01aec9c8;
                  if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                    fVar27 = 1.0;
                  }
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar26 = (float)FUN_08a73bbc(&stack0x00000220,0);
                  *(float *)(in_stack_00000020 + 0x634) =
                       fVar31 + (fVar23 / fVar22) * fVar28 * fVar27 * fVar26 *
                                *(float *)(in_stack_00000020 + 0x43c);
                  FUN_08848454(in_stack_00000020 + 0x288,0x100,0);
                  uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 0x100;
                }
                else {
                  if (uVar21 != 0x167f6) {
                    if (uVar21 == 0x1b02eb) {
                      if ((*(byte *)(in_stack_00000020 + 0x285) & 1) == 0) {
                        return 1;
                      }
                      if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                        uVar8 = FUN_065eae24(in_stack_00000020 + 0x638,
                                             *(undefined8 *)PTR_DAT_09338800);
                        *(undefined4 *)(in_stack_00000020 + 0x634) = uVar8;
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                        fVar28 = *(float *)(in_stack_00000020 + 0x43c);
                        memmove(&stack0x00000220,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar22 = (float)FUN_08a73bc4(&stack0x00000220,0);
                        fVar23 = 1.0;
                        if (0.0 < fVar22) {
                          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                          memmove(&stack0x00000220,
                                  (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                          fVar23 = (float)FUN_08a73bc4(&stack0x00000220,0);
                        }
                        *(float *)(in_stack_00000020 + 0x43c) = fVar28 / fVar23;
                      }
                      cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x100,0);
                      if (cVar4 != '\0') {
                        return 1;
                      }
                      uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffeff;
                      goto LAB_08820060;
                    }
                    if (uVar21 != 0x1b02f9) {
                      return 0;
                    }
                    if (-1 < *(char *)(in_stack_00000020 + 0x284)) {
                      return 1;
                    }
                    if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                      uVar8 = FUN_065eae24(in_stack_00000020 + 0x638,*(undefined8 *)PTR_DAT_09338800
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x634) = uVar8;
                      if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                      fVar28 = *(float *)(in_stack_00000020 + 0x43c);
                      memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28)
                              ,0x60);
                      fVar22 = (float)FUN_08a73bb4(&stack0x00000220,0);
                      fVar23 = 1.0;
                      if (0.0 < fVar22) {
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                        memmove(&stack0x00000220,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar23 = (float)FUN_08a73bb4(&stack0x00000220,0);
                      }
                      *(float *)(in_stack_00000020 + 0x43c) = fVar28 / fVar23;
                    }
                    cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x80,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffff7f;
                    goto LAB_08820060;
                  }
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar28 = *(float *)(in_stack_00000020 + 0x43c);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar22 = (float)FUN_08a73bb4(&stack0x00000220,0);
                  fVar23 = 1.0;
                  if (0.0 < fVar22) {
                    if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar23 = (float)FUN_08a73bb4(&stack0x00000220,0);
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_09338810;
                  *(float *)(in_stack_00000020 + 0x43c) = fVar28 * fVar23;
                  FUN_065ead50(*(undefined4 *)(in_stack_00000020 + 0x634),in_stack_00000020 + 0x638,
                               uVar13);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar23 = *(float *)(in_stack_00000020 + 0x210);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar22 = (float)FUN_08a73b44(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar28 = (float)FUN_08a73b4c(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar31 = *(float *)(in_stack_00000020 + 0x634);
                  fVar27 = DAT_01aec9c8;
                  if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                    fVar27 = 1.0;
                  }
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar26 = (float)FUN_08a73bac(&stack0x00000220,0);
                  *(float *)(in_stack_00000020 + 0x634) =
                       fVar31 + (fVar23 / fVar22) * fVar28 * fVar27 * fVar26 *
                                *(float *)(in_stack_00000020 + 0x43c);
                  FUN_08848454(in_stack_00000020 + 0x288,0x80,0);
                  uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 0x80;
                }
                *(uint *)(in_stack_00000020 + 0x284) = uVar7;
                return 1;
              }
              if (0x277753 < uVar21) {
                if (uVar21 != 0x288780) {
                  if (uVar21 != 0x292f75) {
                    if (uVar21 != 0x2adb73) {
                      return 0;
                    }
                    if (*(int *)(in_stack_00000020 + 0x310) != 5) {
                      return 1;
                    }
                    *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0;
                    *(undefined1 *)(in_stack_00000020 + 0x374) = 1;
                    *(int *)(in_stack_00000020 + 0x4c4) = *(int *)(in_stack_00000020 + 0x4c4) + 1;
                    fVar22 = *(float *)(in_stack_00000020 + 0x440) + 0.0 +
                             *(float *)(in_stack_00000020 + 0x444);
LAB_08821380:
                    *(float *)(in_stack_00000020 + 0x658) = fVar22;
                    return 1;
                  }
                  *(uint *)(in_stack_00000020 + 0x284) =
                       *(uint *)(in_stack_00000020 + 0x284) | 0x200;
                  FUN_08848454(in_stack_00000020 + 0x288,0x200,0);
                  puVar2 = PTR_DAT_093375c0;
                  if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar25 = FUN_087d5b70(0);
                  uVar7 = 0;
                  uVar12 = 0x4000ffff;
                  goto LAB_0881fa24;
                }
                if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                  return 1;
                }
                if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                  return 1;
                }
                lVar11 = *(long *)(in_stack_00000020 + 0x3a0);
                if (lVar11 == 0) goto LAB_08822478;
                lVar14 = *(long *)(lVar11 + 0x48);
                if (lVar14 == 0) goto LAB_08822478;
                uVar7 = *(uint *)(lVar11 + 0x28);
                if (*(int *)(lVar14 + 0x18) < (int)(uVar7 + 1)) {
                  if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  FUN_05202238((long *)(lVar11 + 0x48),uVar7 + 1,*(undefined8 *)PTR_DAT_093387b0);
                  lVar11 = *(long *)(in_stack_00000020 + 0x3a0);
                  if (lVar11 == 0) goto LAB_08822478;
                }
                lVar11 = *(long *)(lVar11 + 0x48);
                if (lVar11 == 0) goto LAB_08822478;
                if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_0882241c;
                plVar16 = (long *)(lVar11 + (long)(int)uVar7 * 0x28 + 0x20);
                *plVar16 = in_stack_00000020;
                thunk_FUN_040ec700(plVar16,in_stack_00000020);
                if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                   (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar11 == 0))
                goto LAB_08822478;
                lVar14 = *plVar19;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar14 = *plVar19;
                }
                lVar15 = *(long *)(lVar14 + 0xb8);
                lVar17 = *(long *)(lVar15 + 0x90);
                if (lVar17 == 0) goto LAB_08822478;
                if ((*(int *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar11 + 0x18) <= uVar7))
                goto LAB_0882241c;
                *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x28 + 0x28) =
                     *(undefined4 *)(lVar17 + 0x24);
                if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                   (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar14 == 0))
                goto LAB_08822478;
                if (uVar7 < *(uint *)(lVar14 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)uVar7 * 0x28;
                  *(undefined4 *)(lVar14 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x4a4);
                  iVar9 = *(int *)(lVar17 + 0x2c);
                  *(int *)(lVar14 + 0x2c) = iVar9 + in_stack_00000018._4_4_;
                  uVar8 = *(undefined4 *)(lVar17 + 0x30);
                  *(undefined4 *)(lVar14 + 0x30) = uVar8;
                  uVar13 = *(undefined8 *)(lVar15 + 0x88);
                  goto LAB_08820290;
                }
                goto LAB_0882241c;
              }
              if (uVar21 == 0x1b2023) {
                *(undefined1 *)(in_stack_00000020 + 0x30a) = 0;
                return 1;
              }
              if (uVar21 != 0x277753) {
                return 0;
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar11 = *plVar19;
                plVar16 = *(long **)(lVar11 + 0xb8);
                lVar14 = plVar16[0x12];
                if (lVar14 == 0) goto LAB_08822478;
              }
              if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1))
              goto LAB_0882241c;
              iVar9 = *(int *)(lVar14 + 0x24);
              if (iVar9 != -0x25034fb5) {
                iVar10 = *(int *)(lVar14 + 0x38);
                iVar1 = *(int *)(lVar14 + 0x3c);
                FUN_087dea58(iVar9,&stack0x000002a8,0);
                puVar2 = PTR_DAT_09285bb0;
                if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar12 = FUN_089cc398(in_stack_000002a8,0,0);
                if ((uVar12 & 1) != 0) {
                  lVar11 = *plVar19;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                  }
                  lVar14 = *(long *)(lVar11 + 0xb8);
                  lVar15 = *(long *)(lVar14 + 0x70);
                  if (lVar15 == 0) {
                    in_stack_000002a8 = 0;
                  }
                  else {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*plVar19 + 0xb8);
                    }
                    lVar11 = *(long *)(lVar14 + 0x90);
                    if (lVar11 == 0) goto LAB_08822478;
                    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0882241c;
                    uVar13 = FUN_074ecc38(0,*(undefined8 *)(lVar14 + 0x88),
                                          *(undefined4 *)(lVar11 + 0x2c),
                                          *(undefined4 *)(lVar11 + 0x30),0);
                    in_stack_000002a8 =
                         (**(code **)(lVar15 + 0x18))
                                   (*(undefined8 *)(lVar15 + 0x40),iVar9,uVar13,
                                    *(undefined8 *)(lVar15 + 0x28));
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar12 = FUN_089cc398(in_stack_000002a8,0,0);
                  if ((uVar12 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar13 = FUN_0883d64c(0);
                    lVar11 = *plVar19;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(lVar11);
                      lVar11 = *plVar19;
                    }
                    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                    if (lVar14 == 0) goto LAB_08822478;
                    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                    uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x88),
                                          *(undefined4 *)(lVar14 + 0x2c),
                                          *(undefined4 *)(lVar14 + 0x30),0);
                    uVar13 = FUN_074d875c(uVar13,uVar20,0);
                    in_stack_000002a8 = FUN_05191970(uVar13,*(undefined8 *)PTR_DAT_093387a0);
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar12 = FUN_089cc398(in_stack_000002a8,0,0);
                  if ((uVar12 & 1) != 0) {
                    return 0;
                  }
                  FUN_087de4e0(in_stack_000002a8,0);
                }
                if (iVar10 == 0 && iVar1 == 0) {
                  if (in_stack_000002a8 == 0) goto LAB_08822478;
                  *(undefined8 *)(in_stack_00000020 + 0x118) =
                       *(undefined8 *)(in_stack_000002a8 + 0x88);
                  thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                  lVar11 = *plVar19;
                  uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                  }
                  uVar7 = FUN_087deebc(uVar13,in_stack_000002a8,*(long *)(lVar11 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
                  lVar11 = *plVar19;
                  *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                  plVar19 = *(long **)(lVar11 + 0xb8);
                  if (*plVar19 == 0) goto LAB_08822478;
                  if (*(uint *)(*plVar19 + 0x18) <= uVar7) goto LAB_0882241c;
                }
                else {
                  if (iVar10 != 0x313400cb) {
                    return 0;
                  }
                  uVar12 = FUN_087dec50(iVar1,&stack0x000002a0,0);
                  if ((uVar12 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar13 = FUN_0883d64c(0);
                    lVar11 = *plVar19;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(lVar11);
                      lVar11 = *plVar19;
                    }
                    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                    if (lVar14 == 0) goto LAB_08822478;
                    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x88),
                                          *(undefined4 *)(lVar14 + 0x44),
                                          *(undefined4 *)(lVar14 + 0x48),0);
                    uVar13 = FUN_074d875c(uVar13,uVar20,0);
                    uVar13 = FUN_05191970(uVar13,*(undefined8 *)PTR_DAT_09287b40);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(*(long *)puVar2);
                    }
                    uVar12 = FUN_089cc398(uVar13,0,0);
                    if ((uVar12 & 1) != 0) {
                      return 0;
                    }
                    FUN_087de814(iVar1,uVar13,0);
                    *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
                    thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                    lVar11 = *plVar19;
                    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar11 = *plVar19;
                    }
                    uVar7 = FUN_087deebc(uVar13,in_stack_000002a8,*(long *)(lVar11 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
                    lVar11 = *plVar19;
                    *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                    plVar19 = *(long **)(lVar11 + 0xb8);
                    if (*plVar19 == 0) goto LAB_08822478;
                    if (*(uint *)(*plVar19 + 0x18) <= uVar7) goto LAB_0882241c;
                  }
                  else {
                    *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002a0;
                    thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                    lVar11 = *plVar19;
                    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar11 = *plVar19;
                    }
                    uVar7 = FUN_087deebc(uVar13,in_stack_000002a8,*(long *)(lVar11 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
                    lVar11 = *plVar19;
                    *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                    plVar19 = *(long **)(lVar11 + 0xb8);
                    if (*plVar19 == 0) goto LAB_08822478;
                    if (*(uint *)(*plVar19 + 0x18) <= uVar7) goto LAB_0882241c;
                  }
                }
                FUN_065e9f54(plVar19 + 2,&stack0x000002c0,*(undefined8 *)PTR_DAT_093387e0);
                lVar11 = in_stack_00000020 + 0x100;
                *(long *)(in_stack_00000020 + 0x100) = in_stack_000002a8;
                goto LAB_08821eec;
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                plVar16 = *(long **)(*plVar19 + 0xb8);
              }
              lVar11 = *plVar16;
              if (lVar11 == 0) goto LAB_08822478;
              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0882241c;
              *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar11 + 0x28);
              thunk_FUN_040ec700(in_stack_00000020 + 0x100);
              lVar11 = **(long **)(*plVar19 + 0xb8);
              if (lVar11 == 0) goto LAB_08822478;
              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0882241c;
              *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar11 + 0x38);
              thunk_FUN_040ec700(in_stack_00000020 + 0x118);
              lVar11 = *plVar19;
              *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
              plVar19 = *(long **)(lVar11 + 0xb8);
              if (*plVar19 == 0) goto LAB_08822478;
              if (*(int *)(*plVar19 + 0x18) == 0) goto LAB_0882241c;
            }
            else {
              if (uVar21 < 0xb863a17) {
                if (0x5989790 < uVar21) {
                  if (uVar21 < 0x5fe5279) {
                    if (uVar21 == 0x5f72764) {
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        lVar11 = thunk_FUN_040d65a8();
                        plVar16 = *(long **)(*plVar19 + 0xb8);
                        lVar14 = plVar16[0x12];
                        if (lVar14 == 0) goto LAB_08822478;
                      }
                      if (*(int *)(lVar14 + 0x18) != 0) {
                        fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                     *(undefined4 *)(lVar14 + 0x2c),
                                                     *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0
                                                    );
                        if (fVar22 == -32768.0) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ == 2) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ == 1) {
                          fVar23 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar23 = 1.0;
                          }
                          fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                        }
                        else {
                          fVar23 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar23 = 1.0;
                          }
                          fVar22 = fVar22 * fVar23;
                        }
                        fVar22 = *(float *)(in_stack_00000020 + 0x658) + fVar22;
LAB_08821334:
                        *(float *)(in_stack_00000020 + 0x658) = fVar22;
                        return 1;
                      }
                      goto LAB_0882241c;
                    }
                    if (uVar21 != 0x5fe5278) {
                      return 0;
                    }
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      plVar16 = *(long **)(*plVar19 + 0xb8);
                      lVar14 = plVar16[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar22 == -32768.0) {
                        return 0;
                      }
                      uVar13 = NEON_fmov(0x3f800000,4);
                      *(float *)(in_stack_00000020 + 0x47c) = fVar22;
                      *(undefined8 *)(in_stack_00000020 + 0x480) = uVar13;
                      return 1;
                    }
                  }
                  else {
                    if (uVar21 != 0x64e48e6) {
                      return 0;
                    }
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      plVar16 = *(long **)(*plVar19 + 0xb8);
                      lVar14 = plVar16[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar22 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ != 2) {
                        if (in_stack_00000038._4_4_ == 1) {
                          return 0;
                        }
                        fVar23 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar23 = 1.0;
                        }
                        *(float *)(in_stack_00000020 + 0x398) = fVar22 * fVar23;
                        return 1;
                      }
                      *(float *)(in_stack_00000020 + 0x398) =
                           (fVar22 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                      return 1;
                    }
                  }
                  goto LAB_0882241c;
                }
                if (uVar21 < 0x47af055) {
                  if (uVar21 == 0x47a86ed) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x90);
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      iVar9 = *(int *)(lVar14 + 0x24);
                      if (iVar9 < 0x28989c) {
                        if (iVar9 != -0x5ed67635) {
                          if (iVar9 != 0x28989b) {
                            return 0;
                          }
                          uVar13 = *(undefined8 *)PTR_DAT_093387b8;
                          *(undefined4 *)(in_stack_00000020 + 0x2a0) = 1;
                          FUN_065e98bc(in_stack_00000020 + 0x2a8,1,uVar13);
                          return 1;
                        }
                        uVar24 = 2;
                        uVar8 = 2;
                      }
                      else if (iVar9 == 0x5196c24) {
                        uVar24 = 0x10;
                        uVar8 = 0x10;
                      }
                      else if (iVar9 == 0x5f4ec60) {
                        uVar24 = 4;
                        uVar8 = 4;
                      }
                      else {
                        if (iVar9 != 0x30b3d31f) {
                          return 0;
                        }
                        uVar24 = 8;
                        uVar8 = 8;
                      }
                      uVar13 = *(undefined8 *)PTR_DAT_093387b8;
                      *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar24;
                      in_stack_00000020 = in_stack_00000020 + 0x2a8;
                      goto 
                      UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_graspReady
                      ;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar21 != 0x47af054) {
                    return 0;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                    plVar16 = *(long **)(lVar11 + 0xb8);
                    lVar14 = plVar16[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar14 + 0x30) != 3) {
                    return 0;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                  }
                  lVar14 = plVar16[0x11];
                  if (lVar14 == 0) goto LAB_08822478;
                  if ((7 < *(uint *)(lVar14 + 0x18)) && (*(uint *)(lVar14 + 0x18) != 8)) {
                    uVar13 = FUN_088288dc(lVar11,*(undefined2 *)(lVar14 + 0x2e));
                    bVar5 = FUN_088288dc(uVar13,*(undefined2 *)(lVar14 + 0x30));
                    *(byte *)(in_stack_00000020 + 0x503) = bVar5 | (byte)((int)uVar13 << 4);
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar21 != 0x4e3381d) {
                  if (uVar21 != 0x5989790) {
                    return 0;
                  }
                  *(undefined4 *)(in_stack_00000020 + 0x440) = 0;
                  return 1;
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar11 = *plVar19;
                  plVar16 = *(long **)(lVar11 + 0xb8);
                }
                lVar14 = plVar16[0x11];
                if (lVar14 == 0) goto LAB_08822478;
                if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                if ((uVar7 == 10) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    lVar11 = thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
                  }
                  uVar13 = 10;
LAB_0882191c:
                  uVar8 = FUN_08828908(lVar11,lVar14,uVar13);

                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_deviceRotation
                  :
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  *(undefined4 *)(in_stack_00000020 + 0x500) = uVar8;
                }
                else {
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                    plVar16 = *(long **)(lVar11 + 0xb8);
                    lVar14 = plVar16[0x11];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                  if ((uVar7 == 0xb) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
                    }
                    uVar13 = 0xb;
                    goto LAB_0882191c;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                    plVar16 = *(long **)(lVar11 + 0xb8);
                    lVar14 = plVar16[0x11];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                  if ((uVar7 == 0xd) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
                    }
                    uVar13 = 0xd;
                    goto LAB_0882191c;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar11 = *plVar19;
                    plVar16 = *(long **)(lVar11 + 0xb8);
                    lVar14 = plVar16[0x11];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                  if ((uVar7 == 0xf) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      lVar11 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
                    }
                    uVar13 = 0xf;
                    goto LAB_0882191c;
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    plVar16 = *(long **)(*plVar19 + 0xb8);
                  }
                  lVar11 = plVar16[0x12];
                  if (lVar11 == 0) goto LAB_08822478;
                  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0882241c;
                  uVar7 = *(uint *)(lVar11 + 0x24);
                  if (0x257e7e < (int)uVar7) {
                    if (uVar7 < 0x4d51a28) {
                      if (uVar7 != 0x284209) {
                        if (uVar7 != 0x4d51a27) {
                          return 0;
                        }
                        uVar13 = 0;
                        uVar8 = 0;
                        uVar24 = 0;
                        goto LAB_088225f0;
                      }
                      uVar24 = 0xff808080;
                      uVar8 = 0xff808080;
                      goto LAB_088225a0;
                    }
                    if (uVar7 != 0x53084fb) {
                      if (uVar7 == 0x64c8d87) {
                        uVar13 = 0x3f800000;
                        uVar8 = 0x3f800000;
                        goto LAB_088225b8;
                      }
                      if (uVar7 != 0x145436c0) {
                        return 0;
                      }
                      uVar24 = 0xffe6d8ad;
                      uVar8 = 0xffe6d8ad;
                      goto LAB_088225a0;
                    }
                    uVar13 = 0;
                    uVar24 = 0;
                    uVar8 = 0x3f800000;
LAB_088225f0:
                    uVar8 = FUN_0421d10c(uVar13,uVar8,uVar24,0x3f800000,0);
                    goto 
                    UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_deviceRotation
                    ;
                  }
                  if (-0x4213b590 < (int)uVar7) {
                    uVar8 = DAT_01aec1cc;
                    uVar24 = DAT_01aecd14;
                    if (uVar7 != 0xcb66f684) {
                      if (uVar7 != 0x165f3) {
                        if (uVar7 != 0x257e7e) {
                          return 0;
                        }
                        uVar13 = 0;
                        uVar8 = 0;
LAB_088225b8:
                        uVar24 = 0x3f800000;
                        goto LAB_088225f0;
                      }
                      uVar8 = 0;
                      uVar24 = 0;
                    }
                    uVar13 = 0x3f800000;
                    goto LAB_088225f0;
                  }
                  if (uVar7 == 0xb57b1fce) {
                    uVar24 = 0xfff020a0;
                    uVar8 = 0xfff020a0;
                  }
                  else {
                    if (uVar7 != 0xbdec4a70) {
                      return 0;
                    }
                    uVar24 = 0xff0080ff;
                    uVar8 = 0xff0080ff;
                  }
LAB_088225a0:
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  *(undefined4 *)(in_stack_00000020 + 0x500) = uVar24;
                }
                in_stack_00000020 = in_stack_00000020 + 0x508;
                goto LAB_0881dfcc;
              }
              if (uVar21 < 0xd7fc39c) {
                if (uVar21 < 0xbea90d2) {
                  if (uVar21 != 0xbea90d1) {
                    return 0;
                  }
                  if ((*(byte *)(in_stack_00000020 + 0x280) >> 5 & 1) != 0) {
                    return 1;
                  }
                  cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x20,0);
                  if (cVar4 != '\0') {
                    return 1;
                  }
                  uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffffdf;
                  goto LAB_08820060;
                }
                if (uVar21 == 0xbf2aad3) {
                  *(undefined4 *)(in_stack_00000020 + 0x2ec) = 0xc6fffe00;
                  return 1;
                }
                if (uVar21 != 0xd0298a0) {
                  return 0;
                }
LAB_0881e5bc:
                uVar13 = 0x10;
                uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 0x10;
LAB_0882069c:
                *(uint *)(in_stack_00000020 + 0x284) = uVar7;
                FUN_08848454(in_stack_00000020 + 0x288,uVar13,0);
                return 1;
              }
              if (0x72343fa2 < uVar21) {
                if (uVar21 == 0x72a5aa29) {
                  *(undefined4 *)(in_stack_00000020 + 0x398) = 0xbf800000;
                  return 1;
                }
                if (uVar21 == 0x72f142b7) {
                  uVar24 = FUN_073cdcc0(0);
                  *(undefined4 *)(in_stack_00000020 + 0x47c) = uVar24;
                  *(undefined4 *)(in_stack_00000020 + 0x480) = uVar8;
                  *(float *)(in_stack_00000020 + 0x484) = fVar22;
                  return 1;
                }
                if (uVar21 != 0x745ef45b) {
                  return 0;
                }
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  lVar11 = thunk_FUN_040d65a8();
                  plVar16 = *(long **)(*plVar19 + 0xb8);
                  lVar14 = plVar16[0x12];
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar14 + 0x18) != 0) {
                  fVar22 = (float)FUN_0882905c(lVar11,plVar16[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                               *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                  if (fVar22 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ == 2) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ == 1) {
                    fVar23 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar23 = 1.0;
                    }
                    fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar23;
                  }
                  else {
                    fVar23 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar23 = 1.0;
                    }
                    fVar22 = fVar22 * fVar23;
                  }
                  *(float *)(in_stack_00000020 + 0x634) = fVar22;
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (uVar21 != 0x313400cb) {
                if (uVar21 == 0x71c96d92) {
                  uVar8 = FUN_065e8668(in_stack_00000020 + 0x508,*(undefined8 *)PTR_DAT_09338828);
                  *(undefined4 *)(in_stack_00000020 + 0x500) = uVar8;
                  return 1;
                }
                if (uVar21 != 0x72343fa2) {
                  return 0;
                }
                uVar8 = FUN_065e9904(in_stack_00000020 + 0x2a8,*(undefined8 *)PTR_DAT_09338830);
                *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar8;
                return 1;
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar11 = *plVar19;
                plVar16 = *(long **)(lVar11 + 0xb8);
                lVar14 = plVar16[0x12];
                if (lVar14 == 0) goto LAB_08822478;
              }
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
              iVar9 = *(int *)(lVar14 + 0x24);
              if (iVar9 == -0x25034fb5) {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  plVar16 = *(long **)(*plVar19 + 0xb8);
                }
                lVar11 = *plVar16;
                if (lVar11 == 0) goto LAB_08822478;
                if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0882241c;
                *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar11 + 0x38);
                thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                lVar11 = *plVar19;
                *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
                plVar19 = *(long **)(lVar11 + 0xb8);
                if (*plVar19 == 0) goto LAB_08822478;
                if (*(int *)(*plVar19 + 0x18) != 0) goto LAB_088214e0;
                goto LAB_0882241c;
              }
              uVar12 = FUN_087dec50(iVar9,&stack0x000002a0,0);
              if ((uVar12 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar13 = FUN_0883d64c(0);
                lVar11 = *plVar19;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8(lVar11);
                  lVar11 = *plVar19;
                }
                lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                if (lVar14 == 0) goto LAB_08822478;
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x88),
                                      *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                      0);
                uVar13 = FUN_074d875c(uVar13,uVar20,0);
                uVar13 = FUN_05191970(uVar13,*(undefined8 *)PTR_DAT_09287b40);
                if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
                }
                uVar12 = FUN_089cc398(uVar13,0,0);
                if ((uVar12 & 1) != 0) {
                  return 0;
                }
                FUN_087de814(iVar9,uVar13,0);
                *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
                thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                lVar11 = *plVar19;
                uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                uVar20 = *(undefined8 *)(in_stack_00000020 + 0x100);
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar11 = *plVar19;
                }
                uVar7 = FUN_087deebc(uVar13,uVar20,*(long *)(lVar11 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
                lVar11 = *plVar19;
                *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                plVar19 = *(long **)(lVar11 + 0xb8);
                if (*plVar19 == 0) goto LAB_08822478;
                if (*(uint *)(*plVar19 + 0x18) <= uVar7) goto LAB_0882241c;
              }
              else {
                *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002a0;
                thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                lVar11 = *plVar19;
                uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                uVar20 = *(undefined8 *)(in_stack_00000020 + 0x100);
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar11 = *plVar19;
                }
                uVar7 = FUN_087deebc(uVar13,uVar20,*(long *)(lVar11 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
                lVar11 = *plVar19;
                *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                plVar19 = *(long **)(lVar11 + 0xb8);
                if (*plVar19 == 0) goto LAB_08822478;
                if (*(uint *)(*plVar19 + 0x18) <= uVar7) goto LAB_0882241c;
              }
            }
LAB_088214e0:
            FUN_065e9f54(plVar19 + 2,&stack0x000002c0,*(undefined8 *)PTR_DAT_093387e0);
            return 1;
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            lVar11 = thunk_FUN_040d65a8();
            lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x88);
          }
          uVar13 = 9;
        }
      }
    }
    uVar8 = FUN_08828908(lVar11,lVar14,uVar13);
    puVar2 = PTR_DAT_093387d8;
    *(undefined4 *)(in_stack_00000020 + 0x500) = uVar8;
    in_stack_00000020 = in_stack_00000020 + 0x508;
    uVar13 = *(undefined8 *)puVar2;
LAB_0881dfcc:
    FUN_065e8620(in_stack_00000020,uVar8,uVar13);
    return 1;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar15 = *(long *)(lVar14 + 0x88);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= unaff_x26) goto LAB_0882241c;
  *(short *)(lVar15 + unaff_x26 * 2 + 0x20) = (short)uVar21;
  if (unaff_w28 != '\x01') goto LAB_0881daf4;
  unaff_w28 = '\x01';
  if (in_w12 < 2) {
    if (in_w12 != 0) {
      if (in_w12 != 1) goto LAB_0881daf4;
      if ((int)uVar21 < 0x65) {
        if (uVar21 == 0x20) {
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout:
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar11 = *plVar19;
            lVar14 = *(long *)(lVar11 + 0xb8);
          }
          lVar14 = *(long *)(lVar14 + 0x90);
          if (lVar14 == 0) goto LAB_08822478;
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          in_stack_00000038._4_4_ = 0;
        }
        else {
          if (uVar21 != 0x25) {
LAB_0881daa8:
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar11 = *plVar19;
              lVar14 = *(long *)(lVar11 + 0xb8);
            }
            lVar14 = *(long *)(lVar14 + 0x90);
            if (lVar14 != 0) {
              if (in_w11 < *(uint *)(lVar14 + 0x18)) {
                in_w12 = 1;
                goto LAB_0881dae4;
              }
              goto LAB_0882241c;
            }
            goto LAB_08822478;
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar11 = *plVar19;
            lVar14 = *(long *)(lVar11 + 0xb8);
          }
          lVar14 = *(long *)(lVar14 + 0x90);
          if (lVar14 == 0) goto LAB_08822478;
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          in_stack_00000038._4_4_ = 2;
        }
      }
      else {
        if (uVar21 == 0x70)
        goto 
        UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout
        ;
        if (uVar21 != 0x65) goto LAB_0881daa8;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar11 = *plVar19;
          lVar14 = *(long *)(lVar11 + 0xb8);
        }
        lVar14 = *(long *)(lVar14 + 0x90);
        if (lVar14 == 0) goto LAB_08822478;
        if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
        in_stack_00000038._4_4_ = 1;
      }
      *(int *)(lVar14 + (long)(int)in_w11 * 0x18 + 0x34) = in_stack_00000038._4_4_;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar11 = *plVar19;
      }
      lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
      if (lVar14 != 0) {
        if (in_w11 + 1 < *(uint *)(lVar14 + 0x18)) {
LAB_0881da30:
          in_w11 = in_w11 + 1;
          in_w12 = 0;
          unaff_w28 = '\x02';
          lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined8 *)(lVar14 + 0x28) = 0;
          *(undefined8 *)(lVar14 + 0x30) = 0;
          goto LAB_0881daf4;
        }
        goto LAB_0882241c;
      }
      goto LAB_08822478;
    }
    if (((uVar21 < 0x2f) && ((1L << ((ulong)uVar21 & 0x3f) & 0x680000000000U) != 0)) ||
       (uVar21 - 0x30 < 10)) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar14 = *(long *)(*plVar19 + 0xb8);
      }
      lVar11 = *(long *)(lVar14 + 0x90);
      if (lVar11 == 0) goto LAB_08822478;
      if (*(uint *)(lVar11 + 0x18) <= in_w11) goto LAB_0882241c;
      in_w12 = 1;
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__get_IsAdditive:
      in_stack_00000038._4_4_ = 0;
      lVar11 = lVar11 + (long)(int)in_w11 * 0x18;
      *(int *)(lVar11 + 0x28) = in_w12;
      *(uint *)(lVar11 + 0x2c) = uVar7;
      unaff_w28 = '\x01';
      *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
    }
    else {
      iVar9 = *(int *)(lVar11 + 0xe4);
      if (uVar21 != 0x22) {
        if (uVar21 == 0x23) {
          if (iVar9 == 0) {
            thunk_FUN_040d65a8();
            lVar14 = *(long *)(*plVar19 + 0xb8);
          }
          lVar11 = *(long *)(lVar14 + 0x90);
          if (lVar11 != 0) {
            if (in_w11 < *(uint *)(lVar11 + 0x18)) {
              in_w12 = 4;
              goto 
              UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__get_IsAdditive
              ;
            }
            goto LAB_0882241c;
          }
          goto LAB_08822478;
        }
        if (iVar9 == 0) {
          thunk_FUN_040d65a8();
          lVar14 = *(long *)(*plVar19 + 0xb8);
        }
        lVar11 = *(long *)(lVar14 + 0x90);
        if (lVar11 != 0) {
          if (in_w11 < *(uint *)(lVar11 + 0x18)) {
            lVar14 = lVar11 + (long)(int)in_w11 * 0x18;
            uVar6 = *(uint *)(lVar14 + 0x24);
            *(undefined4 *)(lVar14 + 0x28) = 2;
            *(uint *)(lVar14 + 0x2c) = uVar7;
            if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar7 = FUN_0884b66c(uVar21,0);
            if (in_w11 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar14 + 0x24) = uVar6 * 0x21 ^ uVar7 & 0xffff;
              lVar11 = *plVar19;
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
              if (lVar14 != 0) {
                if (in_w11 < *(uint *)(lVar14 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
                  in_stack_00000038._4_4_ = 0;
                  in_w12 = 2;
                  goto LAB_0881dae8;
                }
                goto LAB_0882241c;
              }
              goto LAB_08822478;
            }
          }
          goto LAB_0882241c;
        }
        goto LAB_08822478;
      }
      if (iVar9 == 0) {
        thunk_FUN_040d65a8();
        lVar14 = *(long *)(*plVar19 + 0xb8);
      }
      lVar11 = *(long *)(lVar14 + 0x90);
      if (lVar11 == 0) goto LAB_08822478;
      if (*(uint *)(lVar11 + 0x18) <= in_w11) goto LAB_0882241c;
      in_w12 = 2;
      in_stack_00000038._4_4_ = 0;
      lVar11 = lVar11 + (long)(int)in_w11 * 0x18;
      unaff_w28 = '\x01';
      *(undefined4 *)(lVar11 + 0x28) = 2;
      *(uint *)(lVar11 + 0x2c) = uVar7 + 1;
    }
  }
  else {
    if (in_w12 == 2) {
      if (uVar21 != 0x22) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar14 = *(long *)(*plVar19 + 0xb8);
        }
        lVar11 = *(long *)(lVar14 + 0x90);
        if (lVar11 != 0) {
          if (in_w11 < *(uint *)(lVar11 + 0x18)) {
            puVar18 = (uint *)(lVar11 + (long)(int)in_w11 * 0x18 + 0x24);
            uVar7 = *puVar18;
            if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar6 = FUN_0884b66c(uVar21,0);
            if (in_w11 < *(uint *)(lVar11 + 0x18)) {
              *puVar18 = uVar7 * 0x21 ^ uVar6 & 0xffff;
              lVar11 = *plVar19;
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
              if (lVar14 != 0) {
                if (in_w11 < *(uint *)(lVar14 + 0x18)) {
                  in_w12 = 2;
                  lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
LAB_0881dae8:
                  unaff_w28 = '\x01';
                  *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
                  goto LAB_0881daf4;
                }
                goto LAB_0882241c;
              }
              goto LAB_08822478;
            }
          }
          goto LAB_0882241c;
        }
        goto LAB_08822478;
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar14 = *(long *)(*plVar19 + 0xb8);
      }
      lVar11 = *(long *)(lVar14 + 0x90);
      if (lVar11 == 0) goto LAB_08822478;
      in_w11 = in_w11 + 1;
      if (*(uint *)(lVar11 + 0x18) <= in_w11) goto LAB_0882241c;
      lVar11 = lVar11 + (long)(int)in_w11 * 0x18;
      unaff_w28 = '\x02';
    }
    else {
      if (in_w12 == 4) {
        if (uVar21 == 0x20) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar11 = *plVar19;
            lVar14 = *(long *)(lVar11 + 0xb8);
          }
          lVar14 = *(long *)(lVar14 + 0x90);
          if (lVar14 != 0) {
            if (in_w11 + 1 < *(uint *)(lVar14 + 0x18)) {
              in_stack_00000038._4_4_ = 0;
              goto LAB_0881da30;
            }
            goto LAB_0882241c;
          }
          goto LAB_08822478;
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar11 = *plVar19;
          lVar14 = *(long *)(lVar11 + 0xb8);
        }
        lVar14 = *(long *)(lVar14 + 0x90);
        if (lVar14 != 0) {
          if (in_w11 < *(uint *)(lVar14 + 0x18)) {
            in_w12 = 4;
LAB_0881dae4:
            lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
            goto LAB_0881dae8;
          }
          goto LAB_0882241c;
        }
        goto LAB_08822478;
      }
LAB_0881daf4:
      if (uVar21 == 0x3d) {
        unaff_w28 = '\x01';
      }
      if ((uVar21 != 0x20) || (unaff_w28 != '\0')) {
        if (unaff_w28 == '\x02') {
          unaff_w28 = (uVar21 != 0x20) << 1;
        }
        else {
          if (unaff_w28 != '\0') goto LAB_0881dc54;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar11 = *plVar19;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
          if (lVar11 == 0) goto LAB_08822478;
          if (*(uint *)(lVar11 + 0x18) <= in_w11) goto LAB_0882241c;
          puVar18 = (uint *)(lVar11 + (long)(int)in_w11 * 0x18 + 0x20);
          uVar7 = *puVar18;
          if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar21 = FUN_0884b66c(uVar21,0);
          if (*(uint *)(lVar11 + 0x18) <= in_w11) goto LAB_0882241c;
          unaff_w28 = '\0';
          *puVar18 = uVar7 * 0x21 ^ uVar21 & 0xffff;
        }
        goto LAB_0881dc54;
      }
      if ((unaff_w29 & 1) != 0) {
        return 0;
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar11 = *plVar19;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
      if (lVar11 == 0) goto LAB_08822478;
      in_w11 = in_w11 + 1;
      if (*(uint *)(lVar11 + 0x18) <= in_w11) goto LAB_0882241c;
      lVar11 = lVar11 + (long)(int)in_w11 * 0x18;
      unaff_w28 = '\0';
      unaff_w29 = 1;
    }
    in_stack_00000038._4_4_ = 0;
    in_w12 = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x30) = 0;
  }
LAB_0881dc54:
  unaff_x26 = unaff_x26 + 1;
  in_w8 = *(uint *)(unaff_x22 + 0x18);
  if ((int)in_w8 <= unaff_w25 + (int)unaff_x26) {
    return 0;
  }
  goto LAB_0881d5e8;
LAB_08820f18:
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar15 = *(long *)(lVar14 + 0x90);
  if (lVar15 == 0) goto LAB_08822478;
  if (*(int *)(lVar15 + 0x18) <= (int)uVar7) {
LAB_0882100c:
    FUN_065ea6ac(in_stack_00000020 + 0x5a0,*(undefined8 *)(in_stack_00000020 + 0x598),
                 *(undefined8 *)PTR_DAT_093387c8);
    return 1;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar15 = *(long *)(lVar14 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar15 + (long)(int)uVar7 * 0x18 + 0x20) == 0) goto LAB_0882100c;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar15 = *(long *)(lVar14 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar15 + (long)(int)uVar7 * 0x18 + 0x20) == 0x2d2c87) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      lVar11 = thunk_FUN_040d65a8();
      lVar14 = *(long *)(*plVar19 + 0xb8);
      lVar15 = *(long *)(lVar14 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar15 = lVar15 + (long)(int)uVar7 * 0x18;
    fVar22 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                 *(undefined4 *)(lVar15 + 0x2c),*(undefined4 *)(lVar15 + 0x30),
                                 &stack0x000002c0);
    lVar11 = *plVar19;
    *(bool *)(in_stack_00000020 + 0x5c8) = fVar22 != 0.0;
  }
  uVar7 = uVar7 + 1;
  goto LAB_08820f18;
LAB_088203b4:
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar15 = *(long *)(lVar14 + 0x90);
  if (lVar15 == 0) goto LAB_08822478;
  if (*(int *)(lVar15 + 0x18) <= (int)uVar7) {
    return 1;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar15 = *(long *)(lVar14 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar15 + (long)(int)uVar7 * 0x18 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar15 = *(long *)(lVar14 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
  iVar9 = *(int *)(lVar15 + (long)(int)uVar7 * 0x18 + 0x20);
  if (iVar9 == 0x5f4ec60) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      lVar11 = thunk_FUN_040d65a8();
      lVar14 = *(long *)(*plVar19 + 0xb8);
      lVar15 = *(long *)(lVar14 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar15 = lVar15 + (long)(int)uVar7 * 0x18;
    fVar23 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                 *(undefined4 *)(lVar15 + 0x2c),*(undefined4 *)(lVar15 + 0x30),
                                 &stack0x000002c0);
    if (fVar23 == -32768.0) {
      return 0;
    }
    lVar11 = *plVar19;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *plVar19;
    }
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
    if (lVar14 == 0) goto LAB_08822478;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
    iVar9 = *(int *)(lVar14 + (long)(int)uVar7 * 0x18 + 0x34);
    if (iVar9 == 0) {
      fVar28 = fVar22;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar28 = 1.0;
      }
      fVar23 = fVar23 * fVar28;
LAB_08820660:
      *(float *)(in_stack_00000020 + 0x38c) = fVar23;
    }
    else {
      if (iVar9 == 1) {
        fVar28 = fVar22;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar28 = 1.0;
        }
        fVar23 = *(float *)(in_stack_00000020 + 0x210) * fVar23 * fVar28;
        goto LAB_08820660;
      }
      if (iVar9 == 2) {
        fVar28 = 0.0;
        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
          fVar28 = *(float *)(in_stack_00000020 + 0x398);
        }
        fVar23 = (fVar23 * (*(float *)(in_stack_00000020 + 0x390) - fVar28)) / 100.0;
        *(float *)(in_stack_00000020 + 0x38c) = fVar23;
      }
      else {
        fVar23 = *(float *)(in_stack_00000020 + 0x38c);
      }
    }
    if (fVar23 < 0.0) {
      fVar23 = 0.0;
    }
    *(float *)(in_stack_00000020 + 0x38c) = fVar23;
  }
  else if (iVar9 == 0x28989b) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      lVar11 = thunk_FUN_040d65a8();
      lVar14 = *(long *)(*plVar19 + 0xb8);
      lVar15 = *(long *)(lVar14 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar15 = lVar15 + (long)(int)uVar7 * 0x18;
    fVar23 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar14 + 0x88),
                                 *(undefined4 *)(lVar15 + 0x2c),*(undefined4 *)(lVar15 + 0x30),
                                 &stack0x000002c0);
    if (fVar23 == -32768.0) {
      return 0;
    }
    lVar11 = *plVar19;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *plVar19;
    }
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
    if (lVar14 == 0) goto LAB_08822478;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
    iVar9 = *(int *)(lVar14 + (long)(int)uVar7 * 0x18 + 0x34);
    if (iVar9 == 0) {
      fVar28 = fVar22;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar28 = 1.0;
      }
      fVar23 = fVar23 * fVar28;
LAB_08820628:
      *(float *)(in_stack_00000020 + 0x388) = fVar23;
    }
    else {
      if (iVar9 == 1) {
        fVar28 = fVar22;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar28 = 1.0;
        }
        fVar23 = *(float *)(in_stack_00000020 + 0x210) * fVar23 * fVar28;
        goto LAB_08820628;
      }
      if (iVar9 == 2) {
        fVar28 = 0.0;
        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
          fVar28 = *(float *)(in_stack_00000020 + 0x398);
        }
        fVar23 = (fVar23 * (*(float *)(in_stack_00000020 + 0x390) - fVar28)) / 100.0;
        *(float *)(in_stack_00000020 + 0x388) = fVar23;
      }
      else {
        fVar23 = *(float *)(in_stack_00000020 + 0x388);
      }
    }
    if (fVar23 < 0.0) {
      fVar23 = 0.0;
    }
    *(float *)(in_stack_00000020 + 0x388) = fVar23;
  }
  uVar7 = uVar7 + 1;
  goto LAB_088203b4;
LAB_08822068:
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
  }
  lVar15 = *(long *)(lVar11 + 0xb8);
  lVar14 = *(long *)(lVar15 + 0x90);
  if (lVar14 == 0) goto LAB_08822478;
  if (*(int *)(lVar14 + 0x18) <= (int)uVar7) {
LAB_08822420:
    if (*(int *)(in_stack_00000020 + 0x6bc) == -1) {
      return 0;
    }
    lVar14 = *plVar16;
    if (lVar14 != 0) {
      uVar13 = *(undefined8 *)(lVar14 + 0x88);
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar11 = *plVar19;
      }
      uVar8 = FUN_087df0f8(uVar13,lVar14,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar8;
      *(undefined4 *)(in_stack_00000020 + 0x65c) = 1;
      return 1;
    }
    goto LAB_08822478;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar15 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar15 + 0x90);
    if (lVar14 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar14 + (long)(int)uVar7 * 0x18 + 0x20) == 0) goto LAB_08822420;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar15 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar15 + 0x90);
    if (lVar14 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
  iVar10 = *(int *)(lVar14 + (long)(int)uVar7 * 0x18 + 0x20);
  iVar9 = -0x80000000;
  if (iVar10 < 0x2be0e8) {
    if (iVar10 != -0x3b198217) {
      if (iVar10 != 0x22d74b) {
        if (iVar10 != 0x2be0e7) {
          return 0;
        }
        lVar15 = *plVar16;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar14 = *(long *)(*(long *)(*plVar19 + 0xb8) + 0x90);
          if (lVar14 == 0) goto LAB_08822478;
        }
        if (uVar7 < *(uint *)(lVar14 + 0x18)) {
          lVar11 = FUN_088427f0(lVar15,*(undefined4 *)(lVar14 + (long)(int)uVar7 * 0x18 + 0x24),1,
                                &stack0x00000218,0);
          *plVar16 = lVar11;
          thunk_FUN_040ec700(plVar16,lVar11);
          iVar9 = 0;
          goto FUN_08822240;
        }
        goto LAB_0882241c;
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar15 = *(long *)(*plVar19 + 0xb8);
        lVar14 = *(long *)(lVar15 + 0x90);
        if (lVar14 == 0) goto LAB_08822478;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
      lVar14 = lVar14 + (long)(int)uVar7 * 0x18;
      iVar10 = FUN_08828fb0(in_stack_00000020,*(undefined8 *)(lVar15 + 0x88),
                            *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                            lVar15 + 0x98);
      if (iVar10 != 3) {
        return 0;
      }
      lVar11 = *plVar19;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar11 = *plVar19;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x98);
      if (lVar11 == 0) goto LAB_08822478;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0882241c;
      iVar10 = iVar9;
      if (*(float *)(lVar11 + 0x20) != INFINITY) {
        iVar10 = (int)*(float *)(lVar11 + 0x20);
      }
      *(int *)(in_stack_00000020 + 0x6bc) = iVar10;
      if (*(char *)(in_stack_00000020 + 0x469) != '\0') {
        lVar11 = FUN_08816df4(in_stack_00000020);
        lVar14 = *plVar19;
        uVar8 = *(undefined4 *)(in_stack_00000020 + 0x4a4);
        uVar13 = *(undefined8 *)(in_stack_00000020 + 0x6b0);
        uVar24 = *(undefined4 *)(in_stack_00000020 + 0x6bc);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar14);
          lVar14 = *plVar19;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x98);
        if (lVar14 == 0) goto LAB_08822478;
        if ((*(uint *)(lVar14 + 0x18) < 2) || (*(uint *)(lVar14 + 0x18) == 2)) goto LAB_0882241c;
        if (lVar11 == 0) goto LAB_08822478;
        iVar10 = iVar9;
        if (*(float *)(lVar14 + 0x24) != INFINITY) {
          iVar10 = (int)*(float *)(lVar14 + 0x24);
        }
        if (*(float *)(lVar14 + 0x28) != INFINITY) {
          iVar9 = (int)*(float *)(lVar14 + 0x28);
        }
        FUN_08840960(lVar11,uVar8,uVar13,uVar24,iVar10,iVar9,0);
      }
    }
  }
  else if (iVar10 == 0x2d2c87) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      lVar11 = thunk_FUN_040d65a8();
      lVar15 = *(long *)(*plVar19 + 0xb8);
      lVar14 = *(long *)(lVar15 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar14 = lVar14 + (long)(int)uVar7 * 0x18;
    fVar22 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar15 + 0x88),
                                 *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                 &stack0x000002c0);
    *(bool *)(in_stack_00000020 + 0x1d1) = fVar22 != 0.0;
  }
  else if (iVar10 == 0x4e3381d) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      lVar11 = thunk_FUN_040d65a8();
      lVar15 = *(long *)(*plVar19 + 0xb8);
      lVar14 = *(long *)(lVar15 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar14 = lVar14 + (long)(int)uVar7 * 0x18;
    uVar8 = FUN_08828d64(lVar11,*(undefined8 *)(lVar15 + 0x88),*(undefined4 *)(lVar14 + 0x2c),
                         *(undefined4 *)(lVar14 + 0x30));
    *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar8;
  }
  else {
    if (iVar10 != 0x505d3fe) {
      return 0;
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      lVar11 = thunk_FUN_040d65a8();
      lVar15 = *(long *)(*plVar19 + 0xb8);
      lVar14 = *(long *)(lVar15 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
    }
    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
    fVar22 = (float)FUN_0882905c(lVar11,*(undefined8 *)(lVar15 + 0x88),
                                 *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),
                                 &stack0x000002c0);
    if (fVar22 != INFINITY) {
      iVar9 = (int)fVar22;
    }
    if (iVar9 == -0x8000) {
      return 0;
    }
    if ((*plVar16 == 0) || (lVar11 = FUN_08841500(*plVar16,0), lVar11 == 0)) goto LAB_08822478;
    if (*(int *)(lVar11 + 0x18) + -1 < iVar9) {
      return 0;
    }
FUN_08822240:
    *(int *)(in_stack_00000020 + 0x6bc) = iVar9;
  }
  lVar11 = *plVar19;
  uVar7 = uVar7 + 1;
  goto LAB_08822068;
LAB_0881fa24:
  lVar11 = *plVar19;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar15 = *(long *)(lVar14 + 0x90);
  if (lVar15 == 0) goto LAB_08822478;
  if (*(int *)(lVar15 + 0x18) <= (int)uVar7) {
LAB_0882099c:
    uVar7 = (uint)*(byte *)(in_stack_00000020 + 0x503);
    if ((uint)uVar12 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
      uVar7 = (uint)(uVar12 >> 0x18);
    }
    FUN_087f1664(uVar25,uVar8,fVar22,uVar24,&stack0x00000200,(uint)uVar12 & 0xffffff | uVar7 << 0x18
                 ,0);
    puVar2 = PTR_DAT_09338808;
    *(undefined8 *)(in_stack_00000020 + 0x168) = 0;
    *(undefined8 *)(in_stack_00000020 + 0x160) = 0;
    uVar13 = *(undefined8 *)puVar2;
    *(undefined4 *)(in_stack_00000020 + 0x170) = 0;
    FUN_065e8d38(in_stack_00000020 + 0x568,&stack0x000002c0,uVar13);
    return 1;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar15 = *(long *)(lVar14 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar15 + (long)(int)uVar7 * 0x18 + 0x20) == 0) goto LAB_0882099c;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *plVar19;
    lVar14 = *(long *)(lVar11 + 0xb8);
    lVar15 = *(long *)(lVar14 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
  iVar9 = *(int *)(lVar15 + (long)(int)uVar7 * 0x18 + 0x20);
  if (iVar9 == -0x7fd3848f) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar14 = *(long *)(*plVar19 + 0xb8);
      lVar15 = *(long *)(lVar14 + 0x90);
      if (lVar15 == 0) {
LAB_08822478:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7) {
LAB_0882241c:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar15 = lVar15 + (long)(int)uVar7 * 0x18;
    iVar9 = FUN_08828fb0(in_stack_00000020,*(undefined8 *)(lVar14 + 0x88),
                         *(undefined4 *)(lVar15 + 0x2c),*(undefined4 *)(lVar15 + 0x30),lVar14 + 0x98
                        );
    if (iVar9 != 4) {
      return 0;
    }
    lVar11 = *plVar19;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *plVar19;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x98);
    if (lVar11 == 0) goto LAB_08822478;
    uVar21 = *(uint *)(lVar11 + 0x18);
    if ((((uVar21 == 0) || (uVar21 == 1)) || (uVar21 < 3)) || (uVar21 == 3)) goto LAB_0882241c;
    uVar29 = *(undefined4 *)(lVar11 + 0x20);
    uVar30 = *(undefined4 *)(lVar11 + 0x24);
    uVar32 = *(undefined4 *)(lVar11 + 0x28);
    uVar33 = *(undefined4 *)(lVar11 + 0x2c);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_087f1394(uVar29,uVar30,uVar32,uVar33,&stack0x000002b0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar25 = FUN_087f1484(uVar25,0);
  }
  else if (iVar9 == 0x4e3381d) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      lVar11 = thunk_FUN_040d65a8();
      lVar14 = *(long *)(*plVar19 + 0xb8);
      lVar15 = *(long *)(lVar14 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar15 = lVar15 + (long)(int)uVar7 * 0x18;
LAB_0881fb5c:
    uVar12 = FUN_08828d64(lVar11,*(undefined8 *)(lVar14 + 0x88),*(undefined4 *)(lVar15 + 0x2c),
                          *(undefined4 *)(lVar15 + 0x30));
    uVar12 = uVar12 & 0xffffffff;
  }
  else if (iVar9 == 0x292f75) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *plVar19;
      lVar14 = *(long *)(lVar11 + 0xb8);
      lVar15 = *(long *)(lVar14 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_0882241c;
    if (*(int *)(lVar15 + (long)(int)uVar7 * 0x18 + 0x28) == 4) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        lVar11 = thunk_FUN_040d65a8();
        lVar14 = *(long *)(*plVar19 + 0xb8);
        lVar15 = *(long *)(lVar14 + 0x90);
        if (lVar15 == 0) goto LAB_08822478;
      }
      if (*(int *)(lVar15 + 0x18) != 0) goto LAB_0881fb5c;
      goto LAB_0882241c;
    }
  }
  uVar7 = uVar7 + 1;
  goto LAB_0881fa24;
}


