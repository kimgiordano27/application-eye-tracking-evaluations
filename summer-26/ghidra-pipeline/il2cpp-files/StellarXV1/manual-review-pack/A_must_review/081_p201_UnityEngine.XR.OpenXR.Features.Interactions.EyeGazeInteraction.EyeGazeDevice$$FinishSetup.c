/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 0881d654
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 143
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup
          (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long in_x9;
  long *plVar15;
  long lVar16;
  long lVar17;
  uint in_w11;
  int in_w12;
  uint *unaff_x19;
  long lVar18;
  long *unaff_x20;
  uint *puVar19;
  undefined8 uVar20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  char unaff_w28;
  uint unaff_w29;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
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
  
code_r0x0881d654:
  uVar23 = (undefined4)param_5;
  fVar21 = (float)param_4;
  uVar9 = (undefined4)param_3;
  if (in_x9 == 0) goto LAB_08822478;
  if ((long)*(int *)(in_x9 + 0x18) <= (long)unaff_x26) {
    return 0;
  }
  if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x23) goto LAB_0882241c;
  uVar7 = *unaff_x19;
  if (uVar7 == 0x3c) {
    return 0;
  }
  uVar8 = (uint)unaff_x26;
  if (uVar7 == 0x3e) {
    *in_stack_00000010 = in_stack_00000018._4_4_ + uVar8;
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
      param_1 = *(long *)(param_6 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x88);
      if (in_x9 == 0) goto LAB_08822478;
    }
    if (*(uint *)(in_x9 + 0x18) <= uVar8) goto LAB_0882241c;
    *(undefined2 *)(in_x9 + unaff_x26 * 2 + 0x20) = 0;
    if (*(char *)(in_stack_00000020 + 0x468) != '\0') {
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
        param_1 = *(long *)(param_6 + 0xb8);
      }
      lVar14 = *(long *)(param_1 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
      if (*(int *)(lVar14 + 0x20) != -0x11878bc5) {
        return 0;
      }
    }
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
    }
    plVar15 = *(long **)(param_6 + 0xb8);
    lVar14 = plVar15[0x12];
    if (lVar14 == 0) goto LAB_08822478;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
    if (*(int *)(lVar14 + 0x20) == -0x11878bc5) {
      *(undefined1 *)(in_stack_00000020 + 0x468) = 0;
      return 1;
    }
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
      plVar15 = *(long **)(param_6 + 0xb8);
    }
    lVar14 = plVar15[0x11];
    if (lVar14 == 0) goto LAB_08822478;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
    if ((uVar8 == 4) && (*(short *)(lVar14 + 0x20) == 0x23)) {
      if (*(int *)(param_6 + 0xe4) == 0) {
        param_6 = thunk_FUN_040d65a8();
        lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
      }
      uVar13 = 4;
    }
    else {
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
        plVar15 = *(long **)(param_6 + 0xb8);
        lVar14 = plVar15[0x11];
        if (lVar14 == 0) goto LAB_08822478;
      }
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
      if ((uVar8 == 5) && (*(short *)(lVar14 + 0x20) == 0x23)) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          param_6 = thunk_FUN_040d65a8();
          lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
        }
        uVar13 = 5;
      }
      else {
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_6 = *unaff_x20;
          plVar15 = *(long **)(param_6 + 0xb8);
          lVar14 = plVar15[0x11];
          if (lVar14 == 0) goto LAB_08822478;
        }
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
        if ((uVar8 == 7) && (*(short *)(lVar14 + 0x20) == 0x23)) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            param_6 = thunk_FUN_040d65a8();
            lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          }
          uVar13 = 7;
        }
        else {
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            plVar15 = *(long **)(param_6 + 0xb8);
            lVar14 = plVar15[0x11];
            if (lVar14 == 0) goto LAB_08822478;
          }
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
          if ((uVar8 != 9) || (*(short *)(lVar14 + 0x20) != 0x23)) {
            if (*(int *)(param_6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              param_6 = *unaff_x20;
              plVar15 = *(long **)(param_6 + 0xb8);
            }
            lVar14 = plVar15[0x12];
            if (lVar14 == 0) goto LAB_08822478;
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
            uVar7 = *(uint *)(lVar14 + 0x20);
            if ((int)uVar7 < 0x65d) {
              if ((int)uVar7 < -0x325312e0) {
                if (uVar7 < 0xa6c747d4) {
                  if (0x9dac6cf1 < uVar7) {
                    if (0xa1903fc7 < uVar7) {
                      if (uVar7 != 0xa5c050bc) {
                        if (uVar7 != 0xa62e8917) {
                          if (uVar7 != 0xa6c747d3) {
                            return 0;
                          }
                          uVar9 = FUN_065eacdc(in_stack_00000020 + 0x448,
                                               *(undefined8 *)PTR_DAT_09338838);
                          *(undefined4 *)(in_stack_00000020 + 0x444) = uVar9;
                          return 1;
                        }
                        uVar13 = 8;
                        uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 8;
                        goto LAB_0882069c;
                      }
                      if (*(int *)(param_6 + 0xe4) == 0) {
                        param_6 = thunk_FUN_040d65a8();
                        plVar15 = *(long **)(*unaff_x20 + 0xb8);
                        lVar14 = plVar15[0x12];
                        if (lVar14 == 0) goto LAB_08822478;
                      }
                      if (*(int *)(lVar14 + 0x18) != 0) {
                        fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                     *(undefined4 *)(lVar14 + 0x2c),
                                                     *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0
                                                    );
                        if (fVar21 == -32768.0) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ == 2) {
                          fVar21 = (fVar21 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                        }
                        else if (in_stack_00000038._4_4_ == 1) {
                          fVar22 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar22 = 1.0;
                          }
                          fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                        }
                        else {
                          fVar22 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar22 = 1.0;
                          }
                          fVar21 = fVar21 * fVar22;
                        }
                        uVar13 = *(undefined8 *)PTR_DAT_093387d0;
                        *(float *)(in_stack_00000020 + 0x444) = fVar21;
                        FUN_065eac98(in_stack_00000020 + 0x448,uVar13);
                        *(undefined4 *)(in_stack_00000020 + 0x658) =
                             *(undefined4 *)(in_stack_00000020 + 0x444);
                        return 1;
                      }
                      goto LAB_0882241c;
                    }
                    if (uVar7 == 0x9e50e566) {
                      *(undefined4 *)(in_stack_00000020 + 0x2d8) = 0;
                      *(undefined1 *)(in_stack_00000020 + 0x2dc) = 0;
                      return 1;
                    }
                    if (uVar7 != 0xa1903fc7) {
                      return 0;
                    }
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      lVar14 = plVar15[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar21 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ != 2) {
                        if (in_stack_00000038._4_4_ == 1) {
                          fVar22 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar22 = 1.0;
                          }
                          fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                        }
                        else {
                          fVar22 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar22 = 1.0;
                          }
                          fVar21 = fVar21 * fVar22;
                        }
                        *(float *)(in_stack_00000020 + 0x2d4) = fVar21;
                        return 1;
                      }
                      return 0;
                    }
                    goto LAB_0882241c;
                  }
                  if (0x8f5a791e < uVar7) {
                    if (uVar7 == 0x9176b2c9) {
                      in_stack_000002a8 =
                           FUN_065ea6fc(in_stack_00000020 + 0x5a0,*(undefined8 *)PTR_DAT_09338818);
                      *(long *)(in_stack_00000020 + 0x598) = in_stack_000002a8;
                      lVar14 = in_stack_00000020 + 0x598;
LAB_08821eec:
                      thunk_FUN_040ec700(lVar14,in_stack_000002a8);
                      return 1;
                    }
                    if (uVar7 != 0x9312449e) {
                      if (uVar7 != 0x9dac6cf1) {
                        return 0;
                      }
                      *(undefined8 *)(in_stack_00000020 + 0x388) = 0;
                      return 1;
                    }
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
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
                  if (uVar7 != 0x88ce15e6) {
                    if (uVar7 != 0x8f5a791e) {
                      return 0;
                    }
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      lVar14 = plVar15[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar21 == -32768.0) {
                        return 0;
                      }
                      uVar7 = 0x80000000;
                      if (fVar21 != INFINITY) {
                        uVar7 = (int)fVar21;
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
                      uVar9 = *(undefined4 *)(in_stack_00000020 + 0x23c);
                      uVar13 = *(undefined8 *)PTR_DAT_093387e8;
                      in_stack_00000020 = in_stack_00000020 + 0x240;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_graspReady:
                      FUN_065e98bc(in_stack_00000020,uVar9,uVar13);
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  uVar9 = *(undefined4 *)(lVar14 + 0x24);
                  uVar12 = FUN_087deba8(uVar9,&stack0x00000298,0);
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
                      lVar14 = *unaff_x20;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(lVar14);
                        lVar14 = *unaff_x20;
                      }
                      lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                      if (lVar18 == 0) goto LAB_08822478;
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0882241c;
                      uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                            *(undefined4 *)(lVar18 + 0x2c),
                                            *(undefined4 *)(lVar18 + 0x30),0);
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
                    FUN_087de8ac(uVar9,in_stack_00000298,0);
                    *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000298;
                  }
                  else {
                    *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000298;
                  }
                  thunk_FUN_040ec700(in_stack_00000020 + 0x598,in_stack_00000298);
                  lVar14 = *unaff_x20;
                  uVar7 = 1;
                  *(undefined1 *)(in_stack_00000020 + 0x5c8) = 0;
                  goto LAB_08820f18;
                }
                if (uVar7 < 0xb93c7ef2) {
                  if (uVar7 < 0xace2bca9) {
                    if (uVar7 == 0xa97f2798) {
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
                    if (uVar7 != 0xace2bca8) {
                      return 0;
                    }
                    if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                      return 1;
                    }
                    uVar7 = *(int *)(in_stack_00000020 + 0x4a4) - 1;
                    if (0 < *(int *)(in_stack_00000020 + 0x4a4)) {
                      fVar21 = *(float *)(in_stack_00000020 + 0x658) -
                               *(float *)(in_stack_00000020 + 0x2d4);
                      *(float *)(in_stack_00000020 + 0x658) = fVar21;
                      if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                         (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x38),
                         lVar14 == 0)) goto LAB_08822478;
                      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
                      *(float *)(lVar14 + (ulong)uVar7 * 0x178 + 0x13c) = fVar21;
                    }
                    *(undefined4 *)(in_stack_00000020 + 0x2d4) = 0;
                    return 1;
                  }
                  if (uVar7 == 0xaf32f89e) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      param_6 = *unaff_x20;
                      plVar15 = *(long **)(param_6 + 0xb8);
                      lVar14 = plVar15[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    fVar21 = DAT_01aec9c8;
                    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                    if (*(int *)(lVar14 + 0x28) != 1) {
                      if (*(int *)(lVar14 + 0x28) != 0) {
                        return 0;
                      }
                      uVar7 = 1;
                      goto LAB_088203b4;
                    }
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      lVar14 = plVar15[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar21 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ == 2) {
                        fVar22 = 0.0;
                        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                          fVar22 = *(float *)(in_stack_00000020 + 0x398);
                        }
                        fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar22)) / 100.0
                        ;
                      }
                      else if (in_stack_00000038._4_4_ == 1) {
                        fVar22 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar22 = 1.0;
                        }
                        fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                      }
                      else {
                        fVar22 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar22 = 1.0;
                        }
                        fVar21 = fVar21 * fVar22;
                      }
                      if (fVar21 < 0.0) {
                        fVar21 = 0.0;
                      }
                      *(float *)(in_stack_00000020 + 0x388) = fVar21;
                      goto LAB_088212dc;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar7 != 0xb01dd609) {
                    if (uVar7 == 0xb93c7ef1) {
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
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                               *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                  if (fVar21 == -32768.0) {
                    return 0;
                  }
                  lVar14 = *unaff_x20;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *unaff_x20;
                  }
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar16 = *(long *)(lVar18 + 0x90);
                  if (lVar16 == 0) goto LAB_08822478;
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0882241c;
                  iVar10 = *(int *)(lVar16 + 0x34);
                  if (iVar10 == 2) {
                    return 0;
                  }
                  if (iVar10 == 1) {
                    fVar22 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar22 = 1.0;
                    }
                    fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pokePosition
                    :
                    *(float *)(in_stack_00000020 + 0x2d8) = fVar21;
                  }
                  else if (iVar10 == 0) {
                    fVar22 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar22 = 1.0;
                    }
                    fVar21 = fVar21 * fVar22;
                    goto 
                    UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pokePosition
                    ;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *unaff_x20;
                    lVar18 = *(long *)(lVar14 + 0xb8);
                    lVar16 = *(long *)(lVar18 + 0x90);
                    if (lVar16 == 0) goto LAB_08822478;
                  }
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar16 + 0x38) != 0x22bcfb9a) {
                    return 1;
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_040d65a8();
                    lVar18 = *(long *)(*unaff_x20 + 0xb8);
                    lVar16 = *(long *)(lVar18 + 0x90);
                    if (lVar16 == 0) goto LAB_08822478;
                  }
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
                    fVar21 = (float)FUN_0882905c(lVar14,*(undefined8 *)(lVar18 + 0x88),
                                                 *(undefined4 *)(lVar16 + 0x44),
                                                 *(undefined4 *)(lVar16 + 0x48),&stack0x000002c0);
                    *(bool *)(in_stack_00000020 + 0x2dc) = fVar21 != 0.0;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar7 < 0xc465179a) {
                  if (uVar7 == 0xbe648664) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    }
                    FUN_065e9fc8(&stack0x000002c0,plVar15 + 2,*(undefined8 *)PTR_DAT_09338848);
                    *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002d8;
                    thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                    *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_000002c0;
                    return 1;
                  }
                  if (uVar7 != 0xc4651799) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                 *(undefined4 *)(lVar14 + 0x2c),
                                                 *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar21 == -32768.0) {
                      return 0;
                    }
                    fVar21 = fVar21 * DAT_01aed080;
                    uVar9 = 0;
                    uVar24 = FUN_089b9180(0,0);
LAB_0881fe38:
                    *(undefined4 *)(in_stack_00000020 + 0x46c) = uVar24;
                    *(undefined4 *)(in_stack_00000020 + 0x470) = uVar9;
                    *(float *)(in_stack_00000020 + 0x474) = fVar21;
                    *(undefined4 *)(in_stack_00000020 + 0x478) = uVar23;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar7 != 0xc4e67de9) {
                  if (uVar7 != 0xcdaced1f) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                 *(undefined4 *)(lVar14 + 0x2c),
                                                 *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar21 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ == 2) {
                      fVar21 = (fVar21 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                    }
                    else if (in_stack_00000038._4_4_ == 1) {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                    }
                    else {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = fVar21 * fVar22;
                    }
                    *(float *)(in_stack_00000020 + 0x440) = fVar21;
                    *(float *)(in_stack_00000020 + 0x658) =
                         *(float *)(in_stack_00000020 + 0x658) + fVar21;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  param_6 = *unaff_x20;
                  lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                uVar9 = *(undefined4 *)(lVar14 + 0x24);
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
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar14 + 0x28) == 1) goto LAB_0881f4dc;
                  uVar12 = FUN_087deb00(uVar9,&stack0x00000290,0);
                  puVar2 = PTR_DAT_09285bb0;
                  if ((uVar12 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar12 = FUN_089cc398(in_stack_00000290,0,0);
                    if ((uVar12 & 1) != 0) {
                      lVar14 = *unaff_x20;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                        lVar14 = *unaff_x20;
                      }
                      lVar18 = *(long *)(lVar14 + 0xb8);
                      lVar16 = *(long *)(lVar18 + 0x78);
                      in_stack_00000290 = 0;
                      if (lVar16 != 0) {
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                          lVar18 = *(long *)(*unaff_x20 + 0xb8);
                        }
                        lVar14 = *(long *)(lVar18 + 0x90);
                        if (lVar14 == 0) goto LAB_08822478;
                        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                        uVar13 = FUN_074ecc38(0,*(undefined8 *)(lVar18 + 0x88),
                                              *(undefined4 *)(lVar14 + 0x2c),
                                              *(undefined4 *)(lVar14 + 0x30),0);
                        in_stack_00000290 =
                             (**(code **)(lVar16 + 0x18))
                                       (*(undefined8 *)(lVar16 + 0x40),uVar9,uVar13,
                                        *(undefined8 *)(lVar16 + 0x28));
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
                        lVar14 = *unaff_x20;
                        if (*(int *)(lVar14 + 0xe4) == 0) {
                          thunk_FUN_040d65a8(lVar14);
                          lVar14 = *unaff_x20;
                        }
                        lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                        if (lVar18 == 0) goto LAB_08822478;
                        if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0882241c;
                        uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                              *(undefined4 *)(lVar18 + 0x2c),
                                              *(undefined4 *)(lVar18 + 0x30),0);
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
                    FUN_087de708(uVar9,in_stack_00000290,0);
                    *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000290;
                  }
                  else {
                    *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000290;
                  }
                  thunk_FUN_040ec700(in_stack_00000020 + 0x6b0,in_stack_00000290);
                }
                lVar14 = *unaff_x20;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar14 = *unaff_x20;
                }
                lVar18 = *(long *)(lVar14 + 0xb8);
                lVar16 = *(long *)(lVar18 + 0x90);
                if (lVar16 == 0) goto LAB_08822478;
                if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0882241c;
                if (*(int *)(lVar16 + 0x28) == 1) {
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    lVar14 = thunk_FUN_040d65a8();
                    lVar18 = *(long *)(*unaff_x20 + 0xb8);
                    lVar16 = *(long *)(lVar18 + 0x90);
                    if (lVar16 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_0882241c;
                  fVar21 = (float)FUN_0882905c(lVar14,*(undefined8 *)(lVar18 + 0x88),
                                               *(undefined4 *)(lVar16 + 0x2c),
                                               *(undefined4 *)(lVar16 + 0x30),&stack0x000002c0);
                  iVar10 = -0x80000000;
                  if (fVar21 != INFINITY) {
                    iVar10 = (int)fVar21;
                  }
                  if (iVar10 == -0x8000) {
                    return 0;
                  }
                  if ((*(long *)(in_stack_00000020 + 0x6b0) == 0) ||
                     (lVar14 = FUN_08841500(*(long *)(in_stack_00000020 + 0x6b0),0), lVar14 == 0))
                  goto LAB_08822478;
                  if (*(int *)(lVar14 + 0x18) + -1 < iVar10) {
                    return 0;
                  }
                  lVar14 = *unaff_x20;
                  *(int *)(in_stack_00000020 + 0x6bc) = iVar10;
                }
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar14 = *unaff_x20;
                }
                uVar7 = 0;
                uVar9 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x68);
                plVar15 = (long *)(in_stack_00000020 + 0x6b0);
                *(undefined1 *)(in_stack_00000020 + 0x1d1) = 0;
                *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar9;
                goto LAB_08822068;
              }
              if (-0x1044a318 < (int)uVar7) {
                if (0x53 < (int)uVar7) {
                  if (0x64d < uVar7) {
                    if (uVar7 != 0x64e) {
                      if (uVar7 == 0x65a) {
                        if (((*(byte *)(in_stack_00000020 + 0x280) >> 2 & 1) == 0) &&
                           (cVar4 = FUN_08848558(in_stack_00000020 + 0x288,4,0), cVar4 == '\0')) {
                          *(uint *)(in_stack_00000020 + 0x284) =
                               *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffb;
                        }
                        uVar9 = FUN_065e8668(in_stack_00000020 + 0x528,
                                             *(undefined8 *)PTR_DAT_09338828);
                        *(undefined4 *)(in_stack_00000020 + 0x158) = uVar9;
                        return 1;
                      }
                      if (uVar7 != 0x65c) {
                        return 0;
                      }
                      if (((*(byte *)(in_stack_00000020 + 0x280) >> 6 & 1) == 0) &&
                         (cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x40,0), cVar4 == '\0')) {
                        *(uint *)(in_stack_00000020 + 0x284) =
                             *(uint *)(in_stack_00000020 + 0x284) & 0xffffffbf;
                      }
                      uVar9 = FUN_065e8668(in_stack_00000020 + 0x548,*(undefined8 *)PTR_DAT_09338828
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar9;
                      return 1;
                    }
                    if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                      return 1;
                    }
                    if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                      return 1;
                    }
                    lVar14 = *(long *)(in_stack_00000020 + 0x3a0);
                    if ((lVar14 != 0) && (lVar18 = *(long *)(lVar14 + 0x48), lVar18 != 0)) {
                      uVar8 = *(uint *)(lVar14 + 0x28);
                      uVar7 = *(uint *)(lVar18 + 0x18);
                      goto LAB_088200f0;
                    }
                    goto LAB_08822478;
                  }
                  if (uVar7 != 0x55) {
                    if (uVar7 == 0x646) {
                      if ((*(byte *)(in_stack_00000020 + 0x280) >> 1 & 1) != 0) {
                        return 1;
                      }
                      uVar9 = FUN_065e9348(in_stack_00000020 + 0x5e8,*(undefined8 *)PTR_DAT_09338820
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x608) = uVar9;
                      cVar4 = FUN_08848558(in_stack_00000020 + 0x288,2,0);
                      if (cVar4 != '\0') {
                        return 1;
                      }
                      uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffd;
                      goto LAB_08820060;
                    }
                    if (uVar7 != 0x64d) {
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
                    uVar9 = FUN_065e9acc(in_stack_00000020 + 0x240,uVar13);
                    *(undefined4 *)(in_stack_00000020 + 0x23c) = uVar9;
                    return 1;
                  }
                  *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 4;
                  FUN_08848454(in_stack_00000020 + 0x288,4,0);
                  lVar14 = *unaff_x20;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *unaff_x20;
                  }
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar16 = *(long *)(lVar18 + 0x90);
                  if (lVar16 == 0) goto LAB_08822478;
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar16 + 0x38) == 0x4e3381d) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_040d65a8();
                      lVar18 = *(long *)(*unaff_x20 + 0xb8);
                      lVar16 = *(long *)(lVar18 + 0x90);
                      if (lVar16 == 0) goto LAB_08822478;
                    }
                    if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    uVar7 = FUN_08828d64(lVar14,*(undefined8 *)(lVar18 + 0x88),
                                         *(undefined4 *)(lVar16 + 0x44),
                                         *(undefined4 *)(lVar16 + 0x48));
                    *(uint *)(in_stack_00000020 + 0x158) = uVar7;
                    bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                    if (uVar7 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                      bVar5 = (byte)(uVar7 >> 0x18);
                    }
                    *(byte *)(in_stack_00000020 + 0x15b) = bVar5;
                    uVar9 = *(undefined4 *)(in_stack_00000020 + 0x158);
                  }
                  else {
                    uVar9 = *(undefined4 *)(in_stack_00000020 + 0x500);
                    *(undefined4 *)(in_stack_00000020 + 0x158) = uVar9;
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  in_stack_00000020 = in_stack_00000020 + 0x528;
                  goto LAB_0881dfcc;
                }
                if (0x41 < (int)uVar7) {
                  if (uVar7 == 0x42) {
                    *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 1;
                    FUN_08848454(in_stack_00000020 + 0x288,1,0);
                    *(undefined4 *)(in_stack_00000020 + 0x23c) = 700;
                    return 1;
                  }
                  if (uVar7 == 0x49) {
                    *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 2;
                    FUN_08848454(in_stack_00000020 + 0x288,2,0);
                    lVar14 = *unaff_x20;
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *unaff_x20;
                    }
                    lVar18 = *(long *)(lVar14 + 0xb8);
                    lVar16 = *(long *)(lVar18 + 0x90);
                    if (lVar16 == 0) goto LAB_08822478;
                    if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    if (*(int *)(lVar16 + 0x38) == 0x47db7c1) {
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        lVar14 = thunk_FUN_040d65a8();
                        lVar18 = *(long *)(*unaff_x20 + 0xb8);
                        lVar16 = *(long *)(lVar18 + 0x90);
                        if (lVar16 == 0) goto LAB_08822478;
                      }
                      if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                      fVar21 = (float)FUN_0882905c(lVar14,*(undefined8 *)(lVar18 + 0x88),
                                                   *(undefined4 *)(lVar16 + 0x44),
                                                   *(undefined4 *)(lVar16 + 0x48),&stack0x000002c0);
                      uVar7 = (uint)fVar21;
                      uVar8 = 0x80000000;
                      if (fVar21 != INFINITY) {
                        uVar8 = uVar7;
                      }
                      *(uint *)(in_stack_00000020 + 0x608) = uVar8;
                      if (0x168 < uVar8 + 0xb4) {
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
                  if (uVar7 != 0x53) {
                    return 0;
                  }
                  *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 0x40
                  ;
                  FUN_08848454(in_stack_00000020 + 0x288,0x40,0);
                  lVar14 = *unaff_x20;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *unaff_x20;
                  }
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar16 = *(long *)(lVar18 + 0x90);
                  if (lVar16 == 0) goto LAB_08822478;
                  if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar16 + 0x38) == 0x4e3381d) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      lVar14 = thunk_FUN_040d65a8();
                      lVar18 = *(long *)(*unaff_x20 + 0xb8);
                      lVar16 = *(long *)(lVar18 + 0x90);
                      if (lVar16 == 0) goto LAB_08822478;
                    }
                    if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    uVar7 = FUN_08828d64(lVar14,*(undefined8 *)(lVar18 + 0x88),
                                         *(undefined4 *)(lVar16 + 0x44),
                                         *(undefined4 *)(lVar16 + 0x48));
                    *(uint *)(in_stack_00000020 + 0x15c) = uVar7;
                    bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                    if (uVar7 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                      bVar5 = (byte)(uVar7 >> 0x18);
                    }
                    *(byte *)(in_stack_00000020 + 0x15f) = bVar5;
                    uVar9 = *(undefined4 *)(in_stack_00000020 + 0x15c);
                  }
                  else {
                    uVar9 = *(undefined4 *)(in_stack_00000020 + 0x500);
                    *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar9;
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  in_stack_00000020 = in_stack_00000020 + 0x548;
                  goto LAB_0881dfcc;
                }
                if (uVar7 == 0xff568194) {
                  *(undefined4 *)(in_stack_00000020 + 0x634) = 0;
                  return 1;
                }
                if (uVar7 != 0x41) {
                  return 0;
                }
                if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                  return 1;
                }
                if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                  return 1;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                if (*(int *)(lVar14 + 0x38) != 0x26afb9) {
                  return 1;
                }
                lVar14 = *(long *)(in_stack_00000020 + 0x3a0);
                if (lVar14 == 0) goto LAB_08822478;
                lVar18 = *(long *)(lVar14 + 0x48);
                if (lVar18 == 0) goto LAB_08822478;
                uVar7 = *(uint *)(lVar14 + 0x28);
                if (*(int *)(lVar18 + 0x18) < (int)(uVar7 + 1)) {
                  if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  FUN_05202238((long *)(lVar14 + 0x48),uVar7 + 1,*(undefined8 *)PTR_DAT_093387b0);
                  lVar14 = *(long *)(in_stack_00000020 + 0x3a0);
                  if (lVar14 == 0) goto LAB_08822478;
                }
                lVar14 = *(long *)(lVar14 + 0x48);
                if (lVar14 != 0) {
                  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
                  plVar15 = (long *)(lVar14 + (long)(int)uVar7 * 0x28 + 0x20);
                  *plVar15 = in_stack_00000020;
                  thunk_FUN_040ec700(plVar15,in_stack_00000020);
                  if ((*(long *)(in_stack_00000020 + 0x3a0) != 0) &&
                     (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar14 != 0))
                  {
                    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
                    lVar18 = lVar14 + (long)(int)uVar7 * 0x28;
                    *(undefined4 *)(lVar18 + 0x28) = 0x26afb9;
                    *(undefined4 *)(lVar18 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x4a4);
                    lVar16 = *unaff_x20;
                    if (*(int *)(lVar16 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar16 = *unaff_x20;
                    }
                    lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x90);
                    if (lVar17 != 0) {
                      if (((*(uint *)(lVar17 + 0x18) & 0xfffffffe) != 0) &&
                         (uVar7 < *(uint *)(lVar14 + 0x18))) {
                        iVar10 = *(int *)(lVar17 + 0x44);
                        uVar9 = *(undefined4 *)(lVar17 + 0x48);
                        uVar13 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x88);
LAB_08820290:
                        FUN_087f06e0(lVar18 + 0x20,uVar13,iVar10,uVar9,0);
                        return 1;
                      }
                      goto LAB_0882241c;
                    }
                  }
                }
                goto LAB_08822478;
              }
              if (uVar7 < 0xd2d23292) {
                if (0xd078112f < uVar7) {
                  if (uVar7 != 0xd256d1de) {
                    if (uVar7 == 0xd26babf6) {
                      uVar24 = FUN_07ad6874(0);
                      goto LAB_0881fe38;
                    }
                    if (uVar7 != 0xd2d23291) {
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
                if (uVar7 == 0xd05efa5c) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                               *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                  if (fVar21 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ != 2) {
                    if (in_stack_00000038._4_4_ == 1) {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                    }
                    else {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = fVar21 * fVar22;
                    }
                    *(float *)(in_stack_00000020 + 0x2ec) = fVar21;
                    return 1;
                  }
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    fVar27 = *(float *)(in_stack_00000020 + 0x210);
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar22 = (float)FUN_08a73b44(&stack0x00000220,0);
                    if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                      memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28)
                              ,0x60);
                      fVar26 = (float)FUN_08a73b4c(&stack0x00000220,0);
                      if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
                        fVar30 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar30 = 1.0;
                        }
                        memmove(&stack0x00000220,
                                (void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x28),0x60);
                        fVar25 = (float)FUN_08a73b6c(&stack0x00000220,0);
                        *(float *)(in_stack_00000020 + 0x2ec) =
                             (fVar27 / fVar22) * fVar26 * fVar30 * ((fVar21 * fVar25) / 100.0);
                        return 1;
                      }
                    }
                  }
                  goto LAB_08822478;
                }
                if (uVar7 != 0xd078112f) {
                  return 0;
                }
              }
              else {
                if (0xe554f6f3 < uVar7) {
                  if (uVar7 == 0xe7ae3cb4) {
                    *(undefined1 *)(in_stack_00000020 + 0x468) = 1;
                    return 1;
                  }
                  if (uVar7 == 0xedcbd276) goto LAB_0881e5bc;
                  if (uVar7 != 0xefbb5ce8) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                 *(undefined4 *)(lVar14 + 0x2c),
                                                 *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar21 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ == 2) {
                      fVar22 = 0.0;
                      if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                        fVar22 = *(float *)(in_stack_00000020 + 0x398);
                      }
                      fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar22)) / 100.0;
                    }
                    else if (in_stack_00000038._4_4_ == 1) {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                    }
                    else {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = fVar21 * fVar22;
                    }
                    if (fVar21 < 0.0) {
                      fVar21 = 0.0;
                    }
                    *(float *)(in_stack_00000020 + 0x388) = fVar21;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar7 != 0xdd49c439) {
                  if (uVar7 != 0xe554f6f3) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                 *(undefined4 *)(lVar14 + 0x2c),
                                                 *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar21 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ == 2) {
                      fVar22 = 0.0;
                      if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                        fVar22 = *(float *)(in_stack_00000020 + 0x398);
                      }
                      fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar22)) / 100.0;
                    }
                    else if (in_stack_00000038._4_4_ == 1) {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                    }
                    else {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = fVar21 * fVar22;
                    }
                    if (fVar21 < 0.0) {
                      fVar21 = 0.0;
                    }
LAB_088212dc:
                    *(float *)(in_stack_00000020 + 0x38c) = fVar21;
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
            if (uVar7 < 0x37b920b) {
              if (0x2adb73 < uVar7) {
                if (0x597459 < uVar7) {
                  if (uVar7 < 0x36f95db) {
                    if (uVar7 == 0x36d097e) {
                      *(undefined1 *)(in_stack_00000020 + 0x309) = 0;
                      return 1;
                    }
                    if (uVar7 != 0x36f95da) {
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
                  if (uVar7 != 0x37038af) {
                    if (uVar7 == 0x37128fc) {
                      if (*(int *)(param_6 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                        plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      }
                      FUN_065e9fc8(&stack0x000002c0,plVar15 + 2,*(undefined8 *)PTR_DAT_09338848);
                      *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_000002c8;
                      thunk_FUN_040ec700(in_stack_00000020 + 0x100);
                      *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002d8;
                      thunk_FUN_040ec700(in_stack_00000020 + 0x118,in_stack_000002d8);
                      *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_000002c0;
                      return 1;
                    }
                    if (uVar7 != 0x37b920a) {
                      return 0;
                    }
                    uVar9 = FUN_065eacdc(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_09338838);
                    *(undefined4 *)(in_stack_00000020 + 0x210) = uVar9;
                    return 1;
                  }
                  if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                    return 1;
                  }
                  if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                    return 1;
                  }
                  lVar14 = *(long *)(in_stack_00000020 + 0x3a0);
                  if ((lVar14 != 0) && (lVar18 = *(long *)(lVar14 + 0x48), lVar18 != 0)) {
                    uVar8 = *(uint *)(lVar14 + 0x28);
                    uVar7 = *(uint *)(lVar18 + 0x18);
                    if ((int)uVar7 <= (int)uVar8) {
                      return 1;
                    }
LAB_088200f0:
                    if (uVar8 < uVar7) {
                      lVar18 = lVar18 + (long)(int)uVar8 * 0x28;
                      *(int *)(lVar18 + 0x38) =
                           *(int *)(in_stack_00000020 + 0x4a4) - *(int *)(lVar18 + 0x34);
                      *(uint *)(lVar14 + 0x28) = uVar8 + 1;
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  goto LAB_08822478;
                }
                if (0x2eb625 < uVar7) {
                  return 0;
                }
                if (uVar7 == 0x2b96d1) {
                  *(undefined1 *)(in_stack_00000020 + 0x309) = 1;
                  return 1;
                }
                if (uVar7 != 0x2eb625) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar15 = *(long **)(*unaff_x20 + 0xb8);
                  lVar14 = plVar15[0x12];
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                             *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                if (fVar21 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000038._4_4_ == 2) {
                  fVar21 = (fVar21 * *(float *)(in_stack_00000020 + 0x20c)) / 100.0;
                }
                else if (in_stack_00000038._4_4_ == 1) {
                  fVar21 = fVar21 * *(float *)(in_stack_00000020 + 0x20c);
                }
                else {
                  lVar14 = *unaff_x20;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *unaff_x20;
                  }
                  lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x88);
                  if (lVar18 == 0) goto LAB_08822478;
                  if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_0882241c;
                  if (*(short *)(lVar18 + 0x2a) != 0x2b) {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar18 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                      if (lVar18 == 0) goto LAB_08822478;
                    }
                    if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_0882241c;
                    if (*(short *)(lVar18 + 0x2a) != 0x2d) {
                      uVar13 = *(undefined8 *)PTR_DAT_093387d0;
                      *(float *)(in_stack_00000020 + 0x210) = fVar21;
                      goto LAB_088212a4;
                    }
                  }
                  fVar21 = fVar21 + *(float *)(in_stack_00000020 + 0x20c);
                }
                puVar2 = PTR_DAT_093387d0;
                *(float *)(in_stack_00000020 + 0x210) = fVar21;
                uVar13 = *(undefined8 *)puVar2;
LAB_088212a4:
                FUN_065eac98(fVar21,in_stack_00000020 + 0x218,uVar13);
                return 1;
              }
              if (uVar7 < 0x1b02fa) {
                if (uVar7 < 0x167e5) {
                  if (uVar7 == 0x14dac) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      lVar14 = plVar15[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar21 == -32768.0) {
                        return 0;
                      }
                      fVar22 = DAT_01aec9c8;
                      if (in_stack_00000038._4_4_ == 0) {
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar22 = 1.0;
                        }
                      }
                      else {
                        if (in_stack_00000038._4_4_ != 1) {
                          fVar21 = (fVar21 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                          goto LAB_08821380;
                        }
                        fVar21 = fVar21 * *(float *)(in_stack_00000020 + 0x210);
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar22 = 1.0;
                        }
                      }
                      fVar21 = fVar21 * fVar22;
                      goto LAB_08821334;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar7 != 0x167e4) {
                    return 0;
                  }
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar21 = (float)FUN_08a73bc4(&stack0x00000220,0);
                  fVar22 = 1.0;
                  if (0.0 < fVar21) {
                    if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar22 = (float)FUN_08a73bc4(&stack0x00000220,0);
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_09338810;
                  *(float *)(in_stack_00000020 + 0x43c) = fVar27 * fVar22;
                  FUN_065ead50(*(undefined4 *)(in_stack_00000020 + 0x634),in_stack_00000020 + 0x638,
                               uVar13);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar22 = *(float *)(in_stack_00000020 + 0x210);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar21 = (float)FUN_08a73b44(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar27 = (float)FUN_08a73b4c(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar30 = *(float *)(in_stack_00000020 + 0x634);
                  fVar26 = DAT_01aec9c8;
                  if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                    fVar26 = 1.0;
                  }
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar25 = (float)FUN_08a73bbc(&stack0x00000220,0);
                  *(float *)(in_stack_00000020 + 0x634) =
                       fVar30 + (fVar22 / fVar21) * fVar27 * fVar26 * fVar25 *
                                *(float *)(in_stack_00000020 + 0x43c);
                  FUN_08848454(in_stack_00000020 + 0x288,0x100,0);
                  uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 0x100;
                }
                else {
                  if (uVar7 != 0x167f6) {
                    if (uVar7 == 0x1b02eb) {
                      if ((*(byte *)(in_stack_00000020 + 0x285) & 1) == 0) {
                        return 1;
                      }
                      if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                        uVar9 = FUN_065eae24(in_stack_00000020 + 0x638,
                                             *(undefined8 *)PTR_DAT_09338800);
                        *(undefined4 *)(in_stack_00000020 + 0x634) = uVar9;
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                        fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                        memmove(&stack0x00000220,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar21 = (float)FUN_08a73bc4(&stack0x00000220,0);
                        fVar22 = 1.0;
                        if (0.0 < fVar21) {
                          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                          memmove(&stack0x00000220,
                                  (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                          fVar22 = (float)FUN_08a73bc4(&stack0x00000220,0);
                        }
                        *(float *)(in_stack_00000020 + 0x43c) = fVar27 / fVar22;
                      }
                      cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x100,0);
                      if (cVar4 != '\0') {
                        return 1;
                      }
                      uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffeff;
                      goto LAB_08820060;
                    }
                    if (uVar7 != 0x1b02f9) {
                      return 0;
                    }
                    if (-1 < *(char *)(in_stack_00000020 + 0x284)) {
                      return 1;
                    }
                    if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                      uVar9 = FUN_065eae24(in_stack_00000020 + 0x638,*(undefined8 *)PTR_DAT_09338800
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x634) = uVar9;
                      if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                      fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                      memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28)
                              ,0x60);
                      fVar21 = (float)FUN_08a73bb4(&stack0x00000220,0);
                      fVar22 = 1.0;
                      if (0.0 < fVar21) {
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                        memmove(&stack0x00000220,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar22 = (float)FUN_08a73bb4(&stack0x00000220,0);
                      }
                      *(float *)(in_stack_00000020 + 0x43c) = fVar27 / fVar22;
                    }
                    cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x80,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar7 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffff7f;
                    goto LAB_08820060;
                  }
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar21 = (float)FUN_08a73bb4(&stack0x00000220,0);
                  fVar22 = 1.0;
                  if (0.0 < fVar21) {
                    if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar22 = (float)FUN_08a73bb4(&stack0x00000220,0);
                  }
                  uVar13 = *(undefined8 *)PTR_DAT_09338810;
                  *(float *)(in_stack_00000020 + 0x43c) = fVar27 * fVar22;
                  FUN_065ead50(*(undefined4 *)(in_stack_00000020 + 0x634),in_stack_00000020 + 0x638,
                               uVar13);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar22 = *(float *)(in_stack_00000020 + 0x210);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar21 = (float)FUN_08a73b44(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar27 = (float)FUN_08a73b4c(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  fVar30 = *(float *)(in_stack_00000020 + 0x634);
                  fVar26 = DAT_01aec9c8;
                  if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                    fVar26 = 1.0;
                  }
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar25 = (float)FUN_08a73bac(&stack0x00000220,0);
                  *(float *)(in_stack_00000020 + 0x634) =
                       fVar30 + (fVar22 / fVar21) * fVar27 * fVar26 * fVar25 *
                                *(float *)(in_stack_00000020 + 0x43c);
                  FUN_08848454(in_stack_00000020 + 0x288,0x80,0);
                  uVar7 = *(uint *)(in_stack_00000020 + 0x284) | 0x80;
                }
                *(uint *)(in_stack_00000020 + 0x284) = uVar7;
                return 1;
              }
              if (0x277753 < uVar7) {
                if (uVar7 != 0x288780) {
                  if (uVar7 != 0x292f75) {
                    if (uVar7 != 0x2adb73) {
                      return 0;
                    }
                    if (*(int *)(in_stack_00000020 + 0x310) != 5) {
                      return 1;
                    }
                    *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0;
                    *(undefined1 *)(in_stack_00000020 + 0x374) = 1;
                    *(int *)(in_stack_00000020 + 0x4c4) = *(int *)(in_stack_00000020 + 0x4c4) + 1;
                    fVar21 = *(float *)(in_stack_00000020 + 0x440) + 0.0 +
                             *(float *)(in_stack_00000020 + 0x444);
LAB_08821380:
                    *(float *)(in_stack_00000020 + 0x658) = fVar21;
                    return 1;
                  }
                  *(uint *)(in_stack_00000020 + 0x284) =
                       *(uint *)(in_stack_00000020 + 0x284) | 0x200;
                  FUN_08848454(in_stack_00000020 + 0x288,0x200,0);
                  puVar2 = PTR_DAT_093375c0;
                  if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar24 = FUN_087d5b70(0);
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
                lVar14 = *(long *)(in_stack_00000020 + 0x3a0);
                if (lVar14 == 0) goto LAB_08822478;
                lVar18 = *(long *)(lVar14 + 0x48);
                if (lVar18 == 0) goto LAB_08822478;
                uVar7 = *(uint *)(lVar14 + 0x28);
                if (*(int *)(lVar18 + 0x18) < (int)(uVar7 + 1)) {
                  if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  FUN_05202238((long *)(lVar14 + 0x48),uVar7 + 1,*(undefined8 *)PTR_DAT_093387b0);
                  lVar14 = *(long *)(in_stack_00000020 + 0x3a0);
                  if (lVar14 == 0) goto LAB_08822478;
                }
                lVar14 = *(long *)(lVar14 + 0x48);
                if (lVar14 != 0) {
                  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
                  plVar15 = (long *)(lVar14 + (long)(int)uVar7 * 0x28 + 0x20);
                  *plVar15 = in_stack_00000020;
                  thunk_FUN_040ec700(plVar15,in_stack_00000020);
                  if ((*(long *)(in_stack_00000020 + 0x3a0) != 0) &&
                     (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar14 != 0))
                  {
                    lVar18 = *unaff_x20;
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar18 = *unaff_x20;
                    }
                    lVar16 = *(long *)(lVar18 + 0xb8);
                    lVar17 = *(long *)(lVar16 + 0x90);
                    if (lVar17 != 0) {
                      if ((*(int *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar14 + 0x18) <= uVar7))
                      goto LAB_0882241c;
                      *(undefined4 *)(lVar14 + (long)(int)uVar7 * 0x28 + 0x28) =
                           *(undefined4 *)(lVar17 + 0x24);
                      if ((*(long *)(in_stack_00000020 + 0x3a0) != 0) &&
                         (lVar18 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48),
                         lVar18 != 0)) {
                        if (uVar7 < *(uint *)(lVar18 + 0x18)) {
                          lVar18 = lVar18 + (long)(int)uVar7 * 0x28;
                          *(undefined4 *)(lVar18 + 0x34) =
                               *(undefined4 *)(in_stack_00000020 + 0x4a4);
                          iVar10 = *(int *)(lVar17 + 0x2c);
                          *(int *)(lVar18 + 0x2c) = iVar10 + in_stack_00000018._4_4_;
                          uVar9 = *(undefined4 *)(lVar17 + 0x30);
                          *(undefined4 *)(lVar18 + 0x30) = uVar9;
                          uVar13 = *(undefined8 *)(lVar16 + 0x88);
                          goto LAB_08820290;
                        }
                        goto LAB_0882241c;
                      }
                    }
                  }
                }
                goto LAB_08822478;
              }
              if (uVar7 == 0x1b2023) {
                *(undefined1 *)(in_stack_00000020 + 0x30a) = 0;
                return 1;
              }
              if (uVar7 != 0x277753) {
                return 0;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                param_6 = *unaff_x20;
                plVar15 = *(long **)(param_6 + 0xb8);
                lVar14 = plVar15[0x12];
                if (lVar14 == 0) goto LAB_08822478;
              }
              if ((*(int *)(lVar14 + 0x18) == 0) || (*(int *)(lVar14 + 0x18) == 1))
              goto LAB_0882241c;
              iVar10 = *(int *)(lVar14 + 0x24);
              if (iVar10 != -0x25034fb5) {
                iVar11 = *(int *)(lVar14 + 0x38);
                iVar1 = *(int *)(lVar14 + 0x3c);
                FUN_087dea58(iVar10,&stack0x000002a8,0);
                puVar2 = PTR_DAT_09285bb0;
                if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar12 = FUN_089cc398(in_stack_000002a8,0,0);
                if ((uVar12 & 1) != 0) {
                  lVar14 = *unaff_x20;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *unaff_x20;
                  }
                  lVar18 = *(long *)(lVar14 + 0xb8);
                  lVar16 = *(long *)(lVar18 + 0x70);
                  if (lVar16 == 0) {
                    in_stack_000002a8 = 0;
                  }
                  else {
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar18 = *(long *)(*unaff_x20 + 0xb8);
                    }
                    lVar14 = *(long *)(lVar18 + 0x90);
                    if (lVar14 == 0) goto LAB_08822478;
                    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                    uVar13 = FUN_074ecc38(0,*(undefined8 *)(lVar18 + 0x88),
                                          *(undefined4 *)(lVar14 + 0x2c),
                                          *(undefined4 *)(lVar14 + 0x30),0);
                    in_stack_000002a8 =
                         (**(code **)(lVar16 + 0x18))
                                   (*(undefined8 *)(lVar16 + 0x40),iVar10,uVar13,
                                    *(undefined8 *)(lVar16 + 0x28));
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
                    lVar14 = *unaff_x20;
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(lVar14);
                      lVar14 = *unaff_x20;
                    }
                    lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                    if (lVar18 == 0) goto LAB_08822478;
                    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0882241c;
                    uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                          *(undefined4 *)(lVar18 + 0x2c),
                                          *(undefined4 *)(lVar18 + 0x30),0);
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
                if (iVar11 == 0 && iVar1 == 0) {
                  if (in_stack_000002a8 == 0) goto LAB_08822478;
                  *(undefined8 *)(in_stack_00000020 + 0x118) =
                       *(undefined8 *)(in_stack_000002a8 + 0x88);
                  thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                  lVar14 = *unaff_x20;
                  uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar14 = *unaff_x20;
                  }
                  uVar7 = FUN_087deebc(uVar13,in_stack_000002a8,*(long *)(lVar14 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                  lVar14 = *unaff_x20;
                  *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                  plVar15 = *(long **)(lVar14 + 0xb8);
                  if (*plVar15 == 0) goto LAB_08822478;
                  if (*(uint *)(*plVar15 + 0x18) <= uVar7) goto LAB_0882241c;
                }
                else {
                  if (iVar11 != 0x313400cb) {
                    return 0;
                  }
                  uVar12 = FUN_087dec50(iVar1,&stack0x000002a0,0);
                  if ((uVar12 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar13 = FUN_0883d64c(0);
                    lVar14 = *unaff_x20;
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(lVar14);
                      lVar14 = *unaff_x20;
                    }
                    lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                    if (lVar18 == 0) goto LAB_08822478;
                    if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                          *(undefined4 *)(lVar18 + 0x44),
                                          *(undefined4 *)(lVar18 + 0x48),0);
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
                    lVar14 = *unaff_x20;
                    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *unaff_x20;
                    }
                    uVar7 = FUN_087deebc(uVar13,in_stack_000002a8,*(long *)(lVar14 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                    lVar14 = *unaff_x20;
                    *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                    plVar15 = *(long **)(lVar14 + 0xb8);
                    if (*plVar15 == 0) goto LAB_08822478;
                    if (*(uint *)(*plVar15 + 0x18) <= uVar7) goto LAB_0882241c;
                  }
                  else {
                    *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002a0;
                    thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                    lVar14 = *unaff_x20;
                    uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                    if (*(int *)(lVar14 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *unaff_x20;
                    }
                    uVar7 = FUN_087deebc(uVar13,in_stack_000002a8,*(long *)(lVar14 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                    lVar14 = *unaff_x20;
                    *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                    plVar15 = *(long **)(lVar14 + 0xb8);
                    if (*plVar15 == 0) goto LAB_08822478;
                    if (*(uint *)(*plVar15 + 0x18) <= uVar7) goto LAB_0882241c;
                  }
                }
                FUN_065e9f54(plVar15 + 2,&stack0x000002c0,*(undefined8 *)PTR_DAT_093387e0);
                lVar14 = in_stack_00000020 + 0x100;
                *(long *)(in_stack_00000020 + 0x100) = in_stack_000002a8;
                goto LAB_08821eec;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                plVar15 = *(long **)(*unaff_x20 + 0xb8);
              }
              lVar14 = *plVar15;
              if (lVar14 == 0) goto LAB_08822478;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
              *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar14 + 0x28);
              thunk_FUN_040ec700(in_stack_00000020 + 0x100);
              lVar14 = **(long **)(*unaff_x20 + 0xb8);
              if (lVar14 == 0) goto LAB_08822478;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
              *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar14 + 0x38);
              thunk_FUN_040ec700(in_stack_00000020 + 0x118);
              lVar14 = *unaff_x20;
              *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
              plVar15 = *(long **)(lVar14 + 0xb8);
              if (*plVar15 == 0) goto LAB_08822478;
              if (*(int *)(*plVar15 + 0x18) == 0) goto LAB_0882241c;
            }
            else {
              if (uVar7 < 0xb863a17) {
                if (0x5989790 < uVar7) {
                  if (0x5fe5278 < uVar7) {
                    if (uVar7 != 0x64e48e6) {
                      return 0;
                    }
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      lVar14 = plVar15[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar21 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ != 2) {
                        if (in_stack_00000038._4_4_ == 1) {
                          return 0;
                        }
                        fVar22 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar22 = 1.0;
                        }
                        *(float *)(in_stack_00000020 + 0x398) = fVar21 * fVar22;
                        return 1;
                      }
                      *(float *)(in_stack_00000020 + 0x398) =
                           (fVar21 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar7 == 0x5f72764) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      lVar14 = plVar15[0x12];
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                   *(undefined4 *)(lVar14 + 0x2c),
                                                   *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                      if (fVar21 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ == 2) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ == 1) {
                        fVar22 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar22 = 1.0;
                        }
                        fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                      }
                      else {
                        fVar22 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar22 = 1.0;
                        }
                        fVar21 = fVar21 * fVar22;
                      }
                      fVar21 = *(float *)(in_stack_00000020 + 0x658) + fVar21;
LAB_08821334:
                      *(float *)(in_stack_00000020 + 0x658) = fVar21;
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar7 != 0x5fe5278) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) != 0) {
                    fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],
                                                 *(undefined4 *)(lVar14 + 0x2c),
                                                 *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                    if (fVar21 == -32768.0) {
                      return 0;
                    }
                    uVar13 = NEON_fmov(0x3f800000,4);
                    *(float *)(in_stack_00000020 + 0x47c) = fVar21;
                    *(undefined8 *)(in_stack_00000020 + 0x480) = uVar13;
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar7 < 0x47af055) {
                  if (uVar7 == 0x47a86ed) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                      if (lVar14 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      iVar10 = *(int *)(lVar14 + 0x24);
                      if (iVar10 < 0x28989c) {
                        if (iVar10 != -0x5ed67635) {
                          if (iVar10 != 0x28989b) {
                            return 0;
                          }
                          uVar13 = *(undefined8 *)PTR_DAT_093387b8;
                          *(undefined4 *)(in_stack_00000020 + 0x2a0) = 1;
                          FUN_065e98bc(in_stack_00000020 + 0x2a8,1,uVar13);
                          return 1;
                        }
                        uVar23 = 2;
                        uVar9 = 2;
                      }
                      else if (iVar10 == 0x5196c24) {
                        uVar23 = 0x10;
                        uVar9 = 0x10;
                      }
                      else if (iVar10 == 0x5f4ec60) {
                        uVar23 = 4;
                        uVar9 = 4;
                      }
                      else {
                        if (iVar10 != 0x30b3d31f) {
                          return 0;
                        }
                        uVar23 = 8;
                        uVar9 = 8;
                      }
                      uVar13 = *(undefined8 *)PTR_DAT_093387b8;
                      *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar23;
                      in_stack_00000020 = in_stack_00000020 + 0x2a8;
                      goto 
                      UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_graspReady
                      ;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar7 != 0x47af054) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    param_6 = *unaff_x20;
                    plVar15 = *(long **)(param_6 + 0xb8);
                    lVar14 = plVar15[0x12];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar14 + 0x30) != 3) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                  }
                  lVar14 = plVar15[0x11];
                  if (lVar14 != 0) {
                    if ((7 < *(uint *)(lVar14 + 0x18)) && (*(uint *)(lVar14 + 0x18) != 8)) {
                      uVar13 = FUN_088288dc(param_6,*(undefined2 *)(lVar14 + 0x2e));
                      bVar5 = FUN_088288dc(uVar13,*(undefined2 *)(lVar14 + 0x30));
                      *(byte *)(in_stack_00000020 + 0x503) = bVar5 | (byte)((int)uVar13 << 4);
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  goto LAB_08822478;
                }
                if (uVar7 != 0x4e3381d) {
                  if (uVar7 != 0x5989790) {
                    return 0;
                  }
                  *(undefined4 *)(in_stack_00000020 + 0x440) = 0;
                  return 1;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  param_6 = *unaff_x20;
                  plVar15 = *(long **)(param_6 + 0xb8);
                }
                lVar14 = plVar15[0x11];
                if (lVar14 == 0) goto LAB_08822478;
                if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                if ((uVar8 == 10) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                  }
                  uVar13 = 10;
LAB_0882191c:
                  uVar9 = FUN_08828908(param_6,lVar14,uVar13);

                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_deviceRotation
                  :
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  *(undefined4 *)(in_stack_00000020 + 0x500) = uVar9;
                }
                else {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    param_6 = *unaff_x20;
                    plVar15 = *(long **)(param_6 + 0xb8);
                    lVar14 = plVar15[0x11];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                  if ((uVar8 == 0xb) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                    }
                    uVar13 = 0xb;
                    goto LAB_0882191c;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    param_6 = *unaff_x20;
                    plVar15 = *(long **)(param_6 + 0xb8);
                    lVar14 = plVar15[0x11];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                  if ((uVar8 == 0xd) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                    }
                    uVar13 = 0xd;
                    goto LAB_0882191c;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    param_6 = *unaff_x20;
                    plVar15 = *(long **)(param_6 + 0xb8);
                    lVar14 = plVar15[0x11];
                    if (lVar14 == 0) goto LAB_08822478;
                  }
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_0882241c;
                  if ((uVar8 == 0xf) && (*(short *)(lVar14 + 0x2c) == 0x23)) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                    }
                    uVar13 = 0xf;
                    goto LAB_0882191c;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    plVar15 = *(long **)(*unaff_x20 + 0xb8);
                  }
                  lVar14 = plVar15[0x12];
                  if (lVar14 == 0) goto LAB_08822478;
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  uVar7 = *(uint *)(lVar14 + 0x24);
                  if (0x257e7e < (int)uVar7) {
                    if (uVar7 < 0x4d51a28) {
                      if (uVar7 != 0x284209) {
                        if (uVar7 != 0x4d51a27) {
                          return 0;
                        }
                        uVar13 = 0;
                        uVar9 = 0;
                        uVar23 = 0;
                        goto LAB_088225f0;
                      }
                      uVar23 = 0xff808080;
                      uVar9 = 0xff808080;
                      goto LAB_088225a0;
                    }
                    if (uVar7 != 0x53084fb) {
                      if (uVar7 == 0x64c8d87) {
                        uVar13 = 0x3f800000;
                        uVar9 = 0x3f800000;
                        goto LAB_088225b8;
                      }
                      if (uVar7 != 0x145436c0) {
                        return 0;
                      }
                      uVar23 = 0xffe6d8ad;
                      uVar9 = 0xffe6d8ad;
                      goto LAB_088225a0;
                    }
                    uVar13 = 0;
                    uVar23 = 0;
                    uVar9 = 0x3f800000;
LAB_088225f0:
                    uVar9 = FUN_0421d10c(uVar13,uVar9,uVar23,0x3f800000,0);
                    goto 
                    UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_deviceRotation
                    ;
                  }
                  if (-0x4213b590 < (int)uVar7) {
                    uVar9 = DAT_01aec1cc;
                    uVar23 = DAT_01aecd14;
                    if (uVar7 != 0xcb66f684) {
                      if (uVar7 != 0x165f3) {
                        if (uVar7 != 0x257e7e) {
                          return 0;
                        }
                        uVar13 = 0;
                        uVar9 = 0;
LAB_088225b8:
                        uVar23 = 0x3f800000;
                        goto LAB_088225f0;
                      }
                      uVar9 = 0;
                      uVar23 = 0;
                    }
                    uVar13 = 0x3f800000;
                    goto LAB_088225f0;
                  }
                  if (uVar7 == 0xb57b1fce) {
                    uVar23 = 0xfff020a0;
                    uVar9 = 0xfff020a0;
                  }
                  else {
                    if (uVar7 != 0xbdec4a70) {
                      return 0;
                    }
                    uVar23 = 0xff0080ff;
                    uVar9 = 0xff0080ff;
                  }
LAB_088225a0:
                  uVar13 = *(undefined8 *)PTR_DAT_093387d8;
                  *(undefined4 *)(in_stack_00000020 + 0x500) = uVar23;
                }
                in_stack_00000020 = in_stack_00000020 + 0x508;
                goto LAB_0881dfcc;
              }
              if (uVar7 < 0xd7fc39c) {
                if (uVar7 < 0xbea90d2) {
                  if (uVar7 != 0xbea90d1) {
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
                if (uVar7 == 0xbf2aad3) {
                  *(undefined4 *)(in_stack_00000020 + 0x2ec) = 0xc6fffe00;
                  return 1;
                }
                if (uVar7 != 0xd0298a0) {
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
              if (0x72343fa2 < uVar7) {
                if (uVar7 == 0x72a5aa29) {
                  *(undefined4 *)(in_stack_00000020 + 0x398) = 0xbf800000;
                  return 1;
                }
                if (uVar7 == 0x72f142b7) {
                  uVar23 = FUN_073cdcc0(0);
                  *(undefined4 *)(in_stack_00000020 + 0x47c) = uVar23;
                  *(undefined4 *)(in_stack_00000020 + 0x480) = uVar9;
                  *(float *)(in_stack_00000020 + 0x484) = fVar21;
                  return 1;
                }
                if (uVar7 != 0x745ef45b) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar15 = *(long **)(*unaff_x20 + 0xb8);
                  lVar14 = plVar15[0x12];
                  if (lVar14 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar14 + 0x18) != 0) {
                  fVar21 = (float)FUN_0882905c(param_6,plVar15[0x11],*(undefined4 *)(lVar14 + 0x2c),
                                               *(undefined4 *)(lVar14 + 0x30),&stack0x000002c0);
                  if (fVar21 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ != 2) {
                    if (in_stack_00000038._4_4_ == 1) {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                    }
                    else {
                      fVar22 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar22 = 1.0;
                      }
                      fVar21 = fVar21 * fVar22;
                    }
                    *(float *)(in_stack_00000020 + 0x634) = fVar21;
                    return 1;
                  }
                  return 0;
                }
                goto LAB_0882241c;
              }
              if (uVar7 != 0x313400cb) {
                if (uVar7 == 0x71c96d92) {
                  uVar9 = FUN_065e8668(in_stack_00000020 + 0x508,*(undefined8 *)PTR_DAT_09338828);
                  *(undefined4 *)(in_stack_00000020 + 0x500) = uVar9;
                  return 1;
                }
                if (uVar7 != 0x72343fa2) {
                  return 0;
                }
                uVar9 = FUN_065e9904(in_stack_00000020 + 0x2a8,*(undefined8 *)PTR_DAT_09338830);
                *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar9;
                return 1;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                param_6 = *unaff_x20;
                plVar15 = *(long **)(param_6 + 0xb8);
                lVar14 = plVar15[0x12];
                if (lVar14 == 0) goto LAB_08822478;
              }
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
              iVar10 = *(int *)(lVar14 + 0x24);
              if (iVar10 == -0x25034fb5) {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  plVar15 = *(long **)(*unaff_x20 + 0xb8);
                }
                lVar14 = *plVar15;
                if (lVar14 != 0) {
                  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
                  *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar14 + 0x38);
                  thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                  lVar14 = *unaff_x20;
                  *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
                  plVar15 = *(long **)(lVar14 + 0xb8);
                  if (*plVar15 != 0) {
                    if (*(int *)(*plVar15 + 0x18) != 0) goto LAB_088214e0;
                    goto LAB_0882241c;
                  }
                }
                goto LAB_08822478;
              }
              uVar12 = FUN_087dec50(iVar10,&stack0x000002a0,0);
              if ((uVar12 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar13 = FUN_0883d64c(0);
                lVar14 = *unaff_x20;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_040d65a8(lVar14);
                  lVar14 = *unaff_x20;
                }
                lVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
                if (lVar18 == 0) goto LAB_08822478;
                if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0882241c;
                uVar20 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x88),
                                      *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
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
                FUN_087de814(iVar10,uVar13,0);
                *(undefined8 *)(in_stack_00000020 + 0x118) = uVar13;
                thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                lVar14 = *unaff_x20;
                uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                uVar20 = *(undefined8 *)(in_stack_00000020 + 0x100);
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar14 = *unaff_x20;
                }
                uVar7 = FUN_087deebc(uVar13,uVar20,*(long *)(lVar14 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                lVar14 = *unaff_x20;
                *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                plVar15 = *(long **)(lVar14 + 0xb8);
                if (*plVar15 == 0) goto LAB_08822478;
                if (*(uint *)(*plVar15 + 0x18) <= uVar7) goto LAB_0882241c;
              }
              else {
                *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002a0;
                thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                lVar14 = *unaff_x20;
                uVar13 = *(undefined8 *)(in_stack_00000020 + 0x118);
                uVar20 = *(undefined8 *)(in_stack_00000020 + 0x100);
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar14 = *unaff_x20;
                }
                uVar7 = FUN_087deebc(uVar13,uVar20,*(long *)(lVar14 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
                lVar14 = *unaff_x20;
                *(uint *)(in_stack_00000020 + 0x120) = uVar7;
                plVar15 = *(long **)(lVar14 + 0xb8);
                if (*plVar15 == 0) goto LAB_08822478;
                if (*(uint *)(*plVar15 + 0x18) <= uVar7) goto LAB_0882241c;
              }
            }
LAB_088214e0:
            FUN_065e9f54(plVar15 + 2,&stack0x000002c0,*(undefined8 *)PTR_DAT_093387e0);
            return 1;
          }
          if (*(int *)(param_6 + 0xe4) == 0) {
            param_6 = thunk_FUN_040d65a8();
            lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
          }
          uVar13 = 9;
        }
      }
    }
    uVar9 = FUN_08828908(param_6,lVar14,uVar13);
    puVar2 = PTR_DAT_093387d8;
    *(undefined4 *)(in_stack_00000020 + 0x500) = uVar9;
    in_stack_00000020 = in_stack_00000020 + 0x508;
    uVar13 = *(undefined8 *)puVar2;
LAB_0881dfcc:
    FUN_065e8620(in_stack_00000020,uVar9,uVar13);
    return 1;
  }
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
    param_1 = *(long *)(param_6 + 0xb8);
    in_x9 = *(long *)(param_1 + 0x88);
    if (in_x9 == 0) goto LAB_08822478;
  }
  if (*(uint *)(in_x9 + 0x18) <= unaff_x26) goto LAB_0882241c;
  *(short *)(in_x9 + unaff_x26 * 2 + 0x20) = (short)uVar7;
  if (unaff_w28 != '\x01') goto LAB_0881daf4;
  unaff_w28 = '\x01';
  if (in_w12 < 2) {
    if (in_w12 != 0) {
      if (in_w12 != 1) goto LAB_0881daf4;
      if ((int)uVar7 < 0x65) {
        if (uVar7 == 0x20) {
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout:
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            param_1 = *(long *)(param_6 + 0xb8);
          }
          lVar14 = *(long *)(param_1 + 0x90);
          if (lVar14 == 0) goto LAB_08822478;
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          in_stack_00000038._4_4_ = 0;
        }
        else {
          if (uVar7 != 0x25) {
LAB_0881daa8:
            if (*(int *)(param_6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              param_6 = *unaff_x20;
              param_1 = *(long *)(param_6 + 0xb8);
            }
            lVar14 = *(long *)(param_1 + 0x90);
            if (lVar14 != 0) {
              if (in_w11 < *(uint *)(lVar14 + 0x18)) {
                in_w12 = 1;
                goto LAB_0881dae4;
              }
              goto LAB_0882241c;
            }
            goto LAB_08822478;
          }
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            param_1 = *(long *)(param_6 + 0xb8);
          }
          lVar14 = *(long *)(param_1 + 0x90);
          if (lVar14 == 0) goto LAB_08822478;
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          in_stack_00000038._4_4_ = 2;
        }
      }
      else {
        if (uVar7 == 0x70)
        goto 
        UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout
        ;
        if (uVar7 != 0x65) goto LAB_0881daa8;
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_6 = *unaff_x20;
          param_1 = *(long *)(param_6 + 0xb8);
        }
        lVar14 = *(long *)(param_1 + 0x90);
        if (lVar14 == 0) goto LAB_08822478;
        if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
        in_stack_00000038._4_4_ = 1;
      }
      *(int *)(lVar14 + (long)(int)in_w11 * 0x18 + 0x34) = in_stack_00000038._4_4_;
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
      }
      lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
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
    if (((uVar7 < 0x2f) && ((1L << ((ulong)uVar7 & 0x3f) & 0x680000000000U) != 0)) ||
       (uVar7 - 0x30 < 10)) {
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_1 = *(long *)(*unaff_x20 + 0xb8);
      }
      lVar14 = *(long *)(param_1 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
      if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
      in_w12 = 1;
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__get_IsAdditive:
      in_stack_00000038._4_4_ = 0;
      lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
      *(int *)(lVar14 + 0x28) = in_w12;
      *(uint *)(lVar14 + 0x2c) = uVar8;
      unaff_w28 = '\x01';
      *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
    }
    else {
      iVar10 = *(int *)(param_6 + 0xe4);
      if (uVar7 != 0x22) {
        if (uVar7 == 0x23) {
          if (iVar10 == 0) {
            thunk_FUN_040d65a8();
            param_1 = *(long *)(*unaff_x20 + 0xb8);
          }
          lVar14 = *(long *)(param_1 + 0x90);
          if (lVar14 != 0) {
            if (in_w11 < *(uint *)(lVar14 + 0x18)) {
              in_w12 = 4;
              goto 
              UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__get_IsAdditive
              ;
            }
            goto LAB_0882241c;
          }
        }
        else {
          if (iVar10 == 0) {
            thunk_FUN_040d65a8();
            param_1 = *(long *)(*unaff_x20 + 0xb8);
          }
          lVar14 = *(long *)(param_1 + 0x90);
          if (lVar14 != 0) {
            if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
            lVar18 = lVar14 + (long)(int)in_w11 * 0x18;
            uVar6 = *(uint *)(lVar18 + 0x24);
            *(undefined4 *)(lVar18 + 0x28) = 2;
            *(uint *)(lVar18 + 0x2c) = uVar8;
            if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar8 = FUN_0884b66c(uVar7,0);
            if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
            *(uint *)(lVar18 + 0x24) = uVar6 * 0x21 ^ uVar8 & 0xffff;
            param_6 = *unaff_x20;
            lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
            if (lVar14 != 0) {
              if (in_w11 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
                in_stack_00000038._4_4_ = 0;
                in_w12 = 2;
                goto LAB_0881dae8;
              }
              goto LAB_0882241c;
            }
          }
        }
        goto LAB_08822478;
      }
      if (iVar10 == 0) {
        thunk_FUN_040d65a8();
        param_1 = *(long *)(*unaff_x20 + 0xb8);
      }
      lVar14 = *(long *)(param_1 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
      if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
      in_w12 = 2;
      in_stack_00000038._4_4_ = 0;
      lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
      unaff_w28 = '\x01';
      *(undefined4 *)(lVar14 + 0x28) = 2;
      *(uint *)(lVar14 + 0x2c) = uVar8 + 1;
    }
  }
  else {
    if (in_w12 == 2) {
      if (uVar7 != 0x22) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_1 = *(long *)(*unaff_x20 + 0xb8);
        }
        lVar14 = *(long *)(param_1 + 0x90);
        if (lVar14 != 0) {
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          puVar19 = (uint *)(lVar14 + (long)(int)in_w11 * 0x18 + 0x24);
          uVar8 = *puVar19;
          if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar6 = FUN_0884b66c(uVar7,0);
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          *puVar19 = uVar8 * 0x21 ^ uVar6 & 0xffff;
          param_6 = *unaff_x20;
          lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
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
        }
        goto LAB_08822478;
      }
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_1 = *(long *)(*unaff_x20 + 0xb8);
      }
      lVar14 = *(long *)(param_1 + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
      in_w11 = in_w11 + 1;
      if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
      lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
      unaff_w28 = '\x02';
    }
    else {
      if (in_w12 == 4) {
        if (uVar7 == 0x20) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            param_1 = *(long *)(param_6 + 0xb8);
          }
          lVar14 = *(long *)(param_1 + 0x90);
          if (lVar14 != 0) {
            if (in_w11 + 1 < *(uint *)(lVar14 + 0x18)) {
              in_stack_00000038._4_4_ = 0;
              goto LAB_0881da30;
            }
            goto LAB_0882241c;
          }
        }
        else {
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            param_1 = *(long *)(param_6 + 0xb8);
          }
          lVar14 = *(long *)(param_1 + 0x90);
          if (lVar14 != 0) {
            if (in_w11 < *(uint *)(lVar14 + 0x18)) {
              in_w12 = 4;
LAB_0881dae4:
              lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
              goto LAB_0881dae8;
            }
            goto LAB_0882241c;
          }
        }
        goto LAB_08822478;
      }
LAB_0881daf4:
      if (uVar7 == 0x3d) {
        unaff_w28 = '\x01';
      }
      if ((uVar7 != 0x20) || (unaff_w28 != '\0')) {
        if (unaff_w28 == '\x02') {
          unaff_w28 = (uVar7 != 0x20) << 1;
        }
        else {
          if (unaff_w28 != '\0') goto LAB_0881dc54;
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
          }
          lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
          if (lVar14 == 0) goto LAB_08822478;
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          puVar19 = (uint *)(lVar14 + (long)(int)in_w11 * 0x18 + 0x20);
          uVar8 = *puVar19;
          if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_0884b66c(uVar7,0);
          if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
          unaff_w28 = '\0';
          *puVar19 = uVar8 * 0x21 ^ uVar7 & 0xffff;
        }
        goto LAB_0881dc54;
      }
      if ((unaff_w29 & 1) != 0) {
        return 0;
      }
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
      }
      lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
      if (lVar14 == 0) goto LAB_08822478;
      in_w11 = in_w11 + 1;
      if (*(uint *)(lVar14 + 0x18) <= in_w11) goto LAB_0882241c;
      lVar14 = lVar14 + (long)(int)in_w11 * 0x18;
      unaff_w28 = '\0';
      unaff_w29 = 1;
    }
    in_stack_00000038._4_4_ = 0;
    in_w12 = 0;
    *(undefined8 *)(lVar14 + 0x20) = 0;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined8 *)(lVar14 + 0x30) = 0;
  }
LAB_0881dc54:
  unaff_x26 = unaff_x26 + 1;
  if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_x25 + (int)unaff_x26) {
    return 0;
  }
  unaff_x23 = unaff_x25 + unaff_x26;
  if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x23) goto LAB_0882241c;
  unaff_x19 = (uint *)(unaff_x24 + (long)(int)(uint)unaff_x23 * 0x10 + 4);
  if (*unaff_x19 == 0) {
    return 0;
  }
  param_6 = *unaff_x20;
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
  }
  param_1 = *(long *)(param_6 + 0xb8);
  in_x9 = *(long *)(param_1 + 0x88);
  goto code_r0x0881d654;
LAB_08820f18:
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
  }
  lVar18 = *(long *)(lVar14 + 0xb8);
  lVar16 = *(long *)(lVar18 + 0x90);
  if (lVar16 == 0) goto LAB_08822478;
  if (*(int *)(lVar16 + 0x18) <= (int)uVar7) {
LAB_0882100c:
    FUN_065ea6ac(in_stack_00000020 + 0x5a0,*(undefined8 *)(in_stack_00000020 + 0x598),
                 *(undefined8 *)PTR_DAT_093387c8);
    return 1;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
    lVar18 = *(long *)(lVar14 + 0xb8);
    lVar16 = *(long *)(lVar18 + 0x90);
    if (lVar16 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar16 + (long)(int)uVar7 * 0x18 + 0x20) == 0) goto LAB_0882100c;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
    lVar18 = *(long *)(lVar14 + 0xb8);
    lVar16 = *(long *)(lVar18 + 0x90);
    if (lVar16 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar16 + (long)(int)uVar7 * 0x18 + 0x20) == 0x2d2c87) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_040d65a8();
      lVar18 = *(long *)(*unaff_x20 + 0xb8);
      lVar16 = *(long *)(lVar18 + 0x90);
      if (lVar16 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar16 = lVar16 + (long)(int)uVar7 * 0x18;
    fVar21 = (float)FUN_0882905c(lVar14,*(undefined8 *)(lVar18 + 0x88),
                                 *(undefined4 *)(lVar16 + 0x2c),*(undefined4 *)(lVar16 + 0x30),
                                 &stack0x000002c0);
    lVar14 = *unaff_x20;
    *(bool *)(in_stack_00000020 + 0x5c8) = fVar21 != 0.0;
  }
  uVar7 = uVar7 + 1;
  goto LAB_08820f18;
LAB_088203b4:
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
  }
  lVar14 = *(long *)(param_6 + 0xb8);
  lVar18 = *(long *)(lVar14 + 0x90);
  if (lVar18 == 0) goto LAB_08822478;
  if (*(int *)(lVar18 + 0x18) <= (int)uVar7) {
    return 1;
  }
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
    lVar14 = *(long *)(param_6 + 0xb8);
    lVar18 = *(long *)(lVar14 + 0x90);
    if (lVar18 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar18 + (long)(int)uVar7 * 0x18 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
    lVar14 = *(long *)(param_6 + 0xb8);
    lVar18 = *(long *)(lVar14 + 0x90);
    if (lVar18 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
  iVar10 = *(int *)(lVar18 + (long)(int)uVar7 * 0x18 + 0x20);
  if (iVar10 == 0x5f4ec60) {
    if (*(int *)(param_6 + 0xe4) == 0) {
      param_6 = thunk_FUN_040d65a8();
      lVar14 = *(long *)(*unaff_x20 + 0xb8);
      lVar18 = *(long *)(lVar14 + 0x90);
      if (lVar18 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar18 = lVar18 + (long)(int)uVar7 * 0x18;
    fVar22 = (float)FUN_0882905c(param_6,*(undefined8 *)(lVar14 + 0x88),
                                 *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                 &stack0x000002c0);
    if (fVar22 == -32768.0) {
      return 0;
    }
    param_6 = *unaff_x20;
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
    }
    lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
    if (lVar14 == 0) goto LAB_08822478;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
    iVar10 = *(int *)(lVar14 + (long)(int)uVar7 * 0x18 + 0x34);
    if (iVar10 == 0) {
      fVar27 = fVar21;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar27 = 1.0;
      }
      fVar22 = fVar22 * fVar27;
LAB_08820660:
      *(float *)(in_stack_00000020 + 0x38c) = fVar22;
    }
    else {
      if (iVar10 == 1) {
        fVar27 = fVar21;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar27 = 1.0;
        }
        fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar27;
        goto LAB_08820660;
      }
      if (iVar10 == 2) {
        fVar27 = 0.0;
        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
          fVar27 = *(float *)(in_stack_00000020 + 0x398);
        }
        fVar22 = (fVar22 * (*(float *)(in_stack_00000020 + 0x390) - fVar27)) / 100.0;
        *(float *)(in_stack_00000020 + 0x38c) = fVar22;
      }
      else {
        fVar22 = *(float *)(in_stack_00000020 + 0x38c);
      }
    }
    if (fVar22 < 0.0) {
      fVar22 = 0.0;
    }
    *(float *)(in_stack_00000020 + 0x38c) = fVar22;
  }
  else if (iVar10 == 0x28989b) {
    if (*(int *)(param_6 + 0xe4) == 0) {
      param_6 = thunk_FUN_040d65a8();
      lVar14 = *(long *)(*unaff_x20 + 0xb8);
      lVar18 = *(long *)(lVar14 + 0x90);
      if (lVar18 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar18 = lVar18 + (long)(int)uVar7 * 0x18;
    fVar22 = (float)FUN_0882905c(param_6,*(undefined8 *)(lVar14 + 0x88),
                                 *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                 &stack0x000002c0);
    if (fVar22 == -32768.0) {
      return 0;
    }
    param_6 = *unaff_x20;
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
    }
    lVar14 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
    if (lVar14 == 0) goto LAB_08822478;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0882241c;
    iVar10 = *(int *)(lVar14 + (long)(int)uVar7 * 0x18 + 0x34);
    if (iVar10 == 0) {
      fVar27 = fVar21;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar27 = 1.0;
      }
      fVar22 = fVar22 * fVar27;
LAB_08820628:
      *(float *)(in_stack_00000020 + 0x388) = fVar22;
    }
    else {
      if (iVar10 == 1) {
        fVar27 = fVar21;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar27 = 1.0;
        }
        fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar27;
        goto LAB_08820628;
      }
      if (iVar10 == 2) {
        fVar27 = 0.0;
        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
          fVar27 = *(float *)(in_stack_00000020 + 0x398);
        }
        fVar22 = (fVar22 * (*(float *)(in_stack_00000020 + 0x390) - fVar27)) / 100.0;
        *(float *)(in_stack_00000020 + 0x388) = fVar22;
      }
      else {
        fVar22 = *(float *)(in_stack_00000020 + 0x388);
      }
    }
    if (fVar22 < 0.0) {
      fVar22 = 0.0;
    }
    *(float *)(in_stack_00000020 + 0x388) = fVar22;
  }
  uVar7 = uVar7 + 1;
  goto LAB_088203b4;
LAB_08822068:
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
  }
  lVar16 = *(long *)(lVar14 + 0xb8);
  lVar18 = *(long *)(lVar16 + 0x90);
  if (lVar18 == 0) goto LAB_08822478;
  if (*(int *)(lVar18 + 0x18) <= (int)uVar7) {
LAB_08822420:
    if (*(int *)(in_stack_00000020 + 0x6bc) == -1) {
      return 0;
    }
    lVar18 = *plVar15;
    if (lVar18 != 0) {
      uVar13 = *(undefined8 *)(lVar18 + 0x88);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar14 = *unaff_x20;
      }
      uVar9 = FUN_087df0f8(uVar13,lVar18,*(long *)(lVar14 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar9;
      *(undefined4 *)(in_stack_00000020 + 0x65c) = 1;
      return 1;
    }
    goto LAB_08822478;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar18 = *(long *)(lVar16 + 0x90);
    if (lVar18 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar18 + (long)(int)uVar7 * 0x18 + 0x20) == 0) goto LAB_08822420;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
    lVar16 = *(long *)(lVar14 + 0xb8);
    lVar18 = *(long *)(lVar16 + 0x90);
    if (lVar18 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
  iVar11 = *(int *)(lVar18 + (long)(int)uVar7 * 0x18 + 0x20);
  iVar10 = -0x80000000;
  if (iVar11 < 0x2be0e8) {
    if (iVar11 != -0x3b198217) {
      if (iVar11 != 0x22d74b) {
        if (iVar11 != 0x2be0e7) {
          return 0;
        }
        lVar16 = *plVar15;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar18 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
          if (lVar18 == 0) goto LAB_08822478;
        }
        if (uVar7 < *(uint *)(lVar18 + 0x18)) {
          lVar14 = FUN_088427f0(lVar16,*(undefined4 *)(lVar18 + (long)(int)uVar7 * 0x18 + 0x24),1,
                                &stack0x00000218,0);
          *plVar15 = lVar14;
          thunk_FUN_040ec700(plVar15,lVar14);
          iVar10 = 0;
          goto FUN_08822240;
        }
        goto LAB_0882241c;
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar16 = *(long *)(*unaff_x20 + 0xb8);
        lVar18 = *(long *)(lVar16 + 0x90);
        if (lVar18 == 0) goto LAB_08822478;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
      lVar18 = lVar18 + (long)(int)uVar7 * 0x18;
      iVar11 = FUN_08828fb0(in_stack_00000020,*(undefined8 *)(lVar16 + 0x88),
                            *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                            lVar16 + 0x98);
      if (iVar11 != 3) {
        return 0;
      }
      lVar14 = *unaff_x20;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar14 = *unaff_x20;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x98);
      if (lVar14 == 0) goto LAB_08822478;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0882241c;
      iVar11 = iVar10;
      if (*(float *)(lVar14 + 0x20) != INFINITY) {
        iVar11 = (int)*(float *)(lVar14 + 0x20);
      }
      *(int *)(in_stack_00000020 + 0x6bc) = iVar11;
      if (*(char *)(in_stack_00000020 + 0x469) != '\0') {
        lVar14 = FUN_08816df4(in_stack_00000020);
        lVar18 = *unaff_x20;
        uVar9 = *(undefined4 *)(in_stack_00000020 + 0x4a4);
        uVar13 = *(undefined8 *)(in_stack_00000020 + 0x6b0);
        uVar23 = *(undefined4 *)(in_stack_00000020 + 0x6bc);
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar18);
          lVar18 = *unaff_x20;
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x98);
        if (lVar18 == 0) goto LAB_08822478;
        if ((*(uint *)(lVar18 + 0x18) < 2) || (*(uint *)(lVar18 + 0x18) == 2)) goto LAB_0882241c;
        if (lVar14 == 0) goto LAB_08822478;
        iVar11 = iVar10;
        if (*(float *)(lVar18 + 0x24) != INFINITY) {
          iVar11 = (int)*(float *)(lVar18 + 0x24);
        }
        if (*(float *)(lVar18 + 0x28) != INFINITY) {
          iVar10 = (int)*(float *)(lVar18 + 0x28);
        }
        FUN_08840960(lVar14,uVar9,uVar13,uVar23,iVar11,iVar10,0);
      }
    }
  }
  else if (iVar11 == 0x2d2c87) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_040d65a8();
      lVar16 = *(long *)(*unaff_x20 + 0xb8);
      lVar18 = *(long *)(lVar16 + 0x90);
      if (lVar18 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar18 = lVar18 + (long)(int)uVar7 * 0x18;
    fVar21 = (float)FUN_0882905c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                 *(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x30),
                                 &stack0x000002c0);
    *(bool *)(in_stack_00000020 + 0x1d1) = fVar21 != 0.0;
  }
  else if (iVar11 == 0x4e3381d) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_040d65a8();
      lVar16 = *(long *)(*unaff_x20 + 0xb8);
      lVar18 = *(long *)(lVar16 + 0x90);
      if (lVar18 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar18 = lVar18 + (long)(int)uVar7 * 0x18;
    uVar9 = FUN_08828d64(lVar14,*(undefined8 *)(lVar16 + 0x88),*(undefined4 *)(lVar18 + 0x2c),
                         *(undefined4 *)(lVar18 + 0x30));
    *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar9;
  }
  else {
    if (iVar11 != 0x505d3fe) {
      return 0;
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_040d65a8();
      lVar16 = *(long *)(*unaff_x20 + 0xb8);
      lVar18 = *(long *)(lVar16 + 0x90);
      if (lVar18 == 0) goto LAB_08822478;
    }
    if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
    fVar21 = (float)FUN_0882905c(lVar14,*(undefined8 *)(lVar16 + 0x88),
                                 *(undefined4 *)(lVar18 + 0x44),*(undefined4 *)(lVar18 + 0x48),
                                 &stack0x000002c0);
    if (fVar21 != INFINITY) {
      iVar10 = (int)fVar21;
    }
    if (iVar10 == -0x8000) {
      return 0;
    }
    if ((*plVar15 == 0) || (lVar14 = FUN_08841500(*plVar15,0), lVar14 == 0)) goto LAB_08822478;
    if (*(int *)(lVar14 + 0x18) + -1 < iVar10) {
      return 0;
    }
FUN_08822240:
    *(int *)(in_stack_00000020 + 0x6bc) = iVar10;
  }
  lVar14 = *unaff_x20;
  uVar7 = uVar7 + 1;
  goto LAB_08822068;
LAB_0881fa24:
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
  }
  lVar18 = *(long *)(lVar14 + 0xb8);
  lVar16 = *(long *)(lVar18 + 0x90);
  if (lVar16 == 0) goto LAB_08822478;
  if (*(int *)(lVar16 + 0x18) <= (int)uVar7) {
LAB_0882099c:
    uVar7 = (uint)*(byte *)(in_stack_00000020 + 0x503);
    if ((uint)uVar12 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
      uVar7 = (uint)(uVar12 >> 0x18);
    }
    FUN_087f1664(uVar24,uVar9,fVar21,uVar23,&stack0x00000200,(uint)uVar12 & 0xffffff | uVar7 << 0x18
                 ,0);
    puVar2 = PTR_DAT_09338808;
    *(undefined8 *)(in_stack_00000020 + 0x168) = 0;
    *(undefined8 *)(in_stack_00000020 + 0x160) = 0;
    uVar13 = *(undefined8 *)puVar2;
    *(undefined4 *)(in_stack_00000020 + 0x170) = 0;
    FUN_065e8d38(in_stack_00000020 + 0x568,&stack0x000002c0,uVar13);
    return 1;
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
    lVar18 = *(long *)(lVar14 + 0xb8);
    lVar16 = *(long *)(lVar18 + 0x90);
    if (lVar16 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0882241c;
  if (*(int *)(lVar16 + (long)(int)uVar7 * 0x18 + 0x20) == 0) goto LAB_0882099c;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar14 = *unaff_x20;
    lVar18 = *(long *)(lVar14 + 0xb8);
    lVar16 = *(long *)(lVar18 + 0x90);
    if (lVar16 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0882241c;
  iVar10 = *(int *)(lVar16 + (long)(int)uVar7 * 0x18 + 0x20);
  if (iVar10 == -0x7fd3848f) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar18 = *(long *)(*unaff_x20 + 0xb8);
      lVar16 = *(long *)(lVar18 + 0x90);
      if (lVar16 == 0) {
LAB_08822478:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar7) {
LAB_0882241c:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar16 = lVar16 + (long)(int)uVar7 * 0x18;
    iVar10 = FUN_08828fb0(in_stack_00000020,*(undefined8 *)(lVar18 + 0x88),
                          *(undefined4 *)(lVar16 + 0x2c),*(undefined4 *)(lVar16 + 0x30),
                          lVar18 + 0x98);
    if (iVar10 != 4) {
      return 0;
    }
    lVar14 = *unaff_x20;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar14 = *unaff_x20;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x98);
    if (lVar14 == 0) goto LAB_08822478;
    uVar8 = *(uint *)(lVar14 + 0x18);
    if ((((uVar8 == 0) || (uVar8 == 1)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_0882241c;
    uVar28 = *(undefined4 *)(lVar14 + 0x20);
    uVar29 = *(undefined4 *)(lVar14 + 0x24);
    uVar31 = *(undefined4 *)(lVar14 + 0x28);
    uVar32 = *(undefined4 *)(lVar14 + 0x2c);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_087f1394(uVar28,uVar29,uVar31,uVar32,&stack0x000002b0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar24 = FUN_087f1484(uVar24,0);
  }
  else if (iVar10 == 0x4e3381d) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      lVar14 = thunk_FUN_040d65a8();
      lVar18 = *(long *)(*unaff_x20 + 0xb8);
      lVar16 = *(long *)(lVar18 + 0x90);
      if (lVar16 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0882241c;
    lVar16 = lVar16 + (long)(int)uVar7 * 0x18;
LAB_0881fb5c:
    uVar12 = FUN_08828d64(lVar14,*(undefined8 *)(lVar18 + 0x88),*(undefined4 *)(lVar16 + 0x2c),
                          *(undefined4 *)(lVar16 + 0x30));
    uVar12 = uVar12 & 0xffffffff;
  }
  else if (iVar10 == 0x292f75) {
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar14 = *unaff_x20;
      lVar18 = *(long *)(lVar14 + 0xb8);
      lVar16 = *(long *)(lVar18 + 0x90);
      if (lVar16 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_0882241c;
    if (*(int *)(lVar16 + (long)(int)uVar7 * 0x18 + 0x28) == 4) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        lVar14 = thunk_FUN_040d65a8();
        lVar18 = *(long *)(*unaff_x20 + 0xb8);
        lVar16 = *(long *)(lVar18 + 0x90);
        if (lVar16 == 0) goto LAB_08822478;
      }
      if (*(int *)(lVar16 + 0x18) != 0) goto LAB_0881fb5c;
      goto LAB_0882241c;
    }
  }
  uVar7 = uVar7 + 1;
  goto LAB_0881fa24;
}


