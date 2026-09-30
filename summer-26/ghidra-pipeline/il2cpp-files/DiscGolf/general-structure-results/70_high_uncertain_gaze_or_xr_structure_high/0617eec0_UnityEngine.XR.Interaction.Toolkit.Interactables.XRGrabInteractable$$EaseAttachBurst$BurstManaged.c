/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable$$EaseAttachBurst$BurstManaged
ENTRY_POINT: 0617eec0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__EaseAttachBurst_BurstManaged
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
          long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  uint unaff_w19;
  uint *puVar18;
  long *unaff_x20;
  undefined8 uVar19;
  long unaff_x22;
  uint uVar20;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
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
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  long in_stack_00000328;
  undefined8 in_stack_00000340;
  long in_stack_00000348;
  undefined4 in_stack_00000350;
  undefined8 in_stack_00000358;
  
code_r0x0617eec0:
                    /* try { // try from 0617eec4 to 0627eecb has its CatchHandler @ 0617f080 */
  lVar13 = *(long *)(param_5 + 0xb8);
LAB_0617eec8:
  lVar13 = *(long *)(lVar13 + 0x90);
  if (lVar13 != 0) {
                    /* try { // try from 0617eed8 to 0627eef7 has its CatchHandler @ 0617f088 */
    if (unaff_w19 < *(uint *)(lVar13 + 0x18)) {
      uVar9 = 4;
LAB_0617f0ec:
      lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
LAB_0617f0f0:
      iVar8 = 1;
      *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
LAB_0617f0fc:
      do {
        iVar10 = (int)unaff_x23;
        if (iVar10 == 0x3d) {
          iVar8 = 1;
        }
        if ((iVar10 == 0x20) && (iVar8 == 0)) {
          if ((unaff_w29 & 1) != 0) {
            return 0;
          }
          if (*(int *)(param_5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            param_5 = *unaff_x20;
          }
          lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
          if (lVar13 == 0) goto LAB_06183bb8;
          unaff_w19 = unaff_w19 + 1;
          if (unaff_w19 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
            iVar8 = 0;
            unaff_w29 = 1;
            goto LAB_0617f168;
          }
          break;
        }
        if (iVar8 == 2) {
          iVar8 = (uint)(iVar10 != 0x20) << 1;
        }
        else if (iVar8 == 0) {
          if (*(int *)(param_5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            param_5 = *unaff_x20;
          }
          lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
          if (lVar13 == 0) goto LAB_06183bb8;
          if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
          puVar18 = (uint *)(lVar13 + (long)(int)unaff_w19 * 0x18 + 0x20);
          uVar6 = *puVar18;
          if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar20 = FUN_061acd28(unaff_x23 & 0xffffffff,0);
          if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
          iVar8 = 0;
          *puVar18 = uVar6 * 0x21 ^ uVar20 & 0xffff;
        }
LAB_0617f25c:
        unaff_x26 = unaff_x26 + 1;
        uVar6 = (uint)unaff_x26;
        if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)(unaff_w25 + uVar6)) {
          return 0;
        }
        uVar20 = unaff_w25 + uVar6;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar20) break;
        puVar18 = (uint *)(unaff_x24 + (long)(int)uVar20 * 0x10 + 4);
        if (*puVar18 == 0) {
          return 0;
        }
        param_5 = *unaff_x20;
        if (*(int *)(param_5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          param_5 = *unaff_x20;
        }
        uVar23 = (undefined4)param_4;
        fVar21 = (float)param_3;
        uVar7 = (undefined4)param_2;
        lVar13 = *(long *)(param_5 + 0xb8);
        lVar14 = *(long *)(lVar13 + 0x88);
        if (lVar14 == 0) goto LAB_06183bb8;
        if ((long)*(int *)(lVar14 + 0x18) <= (long)unaff_x26) {
          return 0;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= uVar20) break;
        uVar20 = *puVar18;
        unaff_x23 = (ulong)uVar20;
        if (uVar20 == 0x3c) {
          return 0;
        }
        if (uVar20 == 0x3e) {
          *in_stack_00000010 = in_stack_00000018._4_4_ + uVar6;
          if (*(int *)(param_5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            param_5 = *unaff_x20;
            lVar13 = *(long *)(param_5 + 0xb8);
            lVar14 = *(long *)(lVar13 + 0x88);
            if (lVar14 == 0) goto LAB_06183bb8;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar6) break;
          *(undefined2 *)(lVar14 + unaff_x26 * 2 + 0x20) = 0;
          if (*(char *)(in_stack_00000020 + 0x468) != '\0') {
            if (*(int *)(param_5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              param_5 = *unaff_x20;
              lVar13 = *(long *)(param_5 + 0xb8);
            }
            lVar13 = *(long *)(lVar13 + 0x90);
            if (lVar13 == 0) goto LAB_06183bb8;
            if (*(int *)(lVar13 + 0x18) == 0) break;
            if (*(int *)(lVar13 + 0x20) != -0x11878bc5) {
              return 0;
            }
          }
          if (*(int *)(param_5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            param_5 = *unaff_x20;
          }
          plVar15 = *(long **)(param_5 + 0xb8);
          lVar13 = plVar15[0x12];
          if (lVar13 == 0) goto LAB_06183bb8;
          if (*(int *)(lVar13 + 0x18) == 0) break;
          if (*(int *)(lVar13 + 0x20) == -0x11878bc5) {
            *(undefined1 *)(in_stack_00000020 + 0x468) = 0;
            return 1;
          }
          if (*(int *)(param_5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            param_5 = *unaff_x20;
            plVar15 = *(long **)(param_5 + 0xb8);
          }
          lVar13 = plVar15[0x11];
          if (lVar13 == 0) goto LAB_06183bb8;
          if (*(int *)(lVar13 + 0x18) == 0) break;
          if ((uVar6 == 4) && (*(short *)(lVar13 + 0x20) == 0x23)) {
            if (*(int *)(param_5 + 0xe4) == 0) {
              param_5 = thunk_FUN_02df485c();
              lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
            }
            uVar12 = 4;
          }
          else {
            if (*(int *)(param_5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              param_5 = *unaff_x20;
              plVar15 = *(long **)(param_5 + 0xb8);
              lVar13 = plVar15[0x11];
              if (lVar13 == 0) goto LAB_06183bb8;
            }
            if (*(int *)(lVar13 + 0x18) == 0) break;
            if ((uVar6 == 5) && (*(short *)(lVar13 + 0x20) == 0x23)) {
              if (*(int *)(param_5 + 0xe4) == 0) {
                param_5 = thunk_FUN_02df485c();
                lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
              }
              uVar12 = 5;
            }
            else {
              if (*(int *)(param_5 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                param_5 = *unaff_x20;
                plVar15 = *(long **)(param_5 + 0xb8);
                lVar13 = plVar15[0x11];
                if (lVar13 == 0) goto LAB_06183bb8;
              }
              if (*(int *)(lVar13 + 0x18) == 0) break;
              if ((uVar6 == 7) && (*(short *)(lVar13 + 0x20) == 0x23)) {
                if (*(int *)(param_5 + 0xe4) == 0) {
                  param_5 = thunk_FUN_02df485c();
                  lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                }
                uVar12 = 7;
              }
              else {
                if (*(int *)(param_5 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  param_5 = *unaff_x20;
                  plVar15 = *(long **)(param_5 + 0xb8);
                  lVar13 = plVar15[0x11];
                  if (lVar13 == 0) goto LAB_06183bb8;
                }
                if (*(int *)(lVar13 + 0x18) == 0) break;
                if ((uVar6 != 9) || (*(short *)(lVar13 + 0x20) != 0x23)) {
                  if (*(int *)(param_5 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    param_5 = *unaff_x20;
                    plVar15 = *(long **)(param_5 + 0xb8);
                  }
                  lVar13 = plVar15[0x12];
                  if (lVar13 == 0) goto LAB_06183bb8;
                  if (*(int *)(lVar13 + 0x18) == 0) break;
                  uVar9 = *(uint *)(lVar13 + 0x20);
                  if ((int)uVar9 < 0x65d) {
                    if ((int)uVar9 < -0x325312e0) {
                      if (uVar9 < 0xa6c747d4) {
                        if (0x9dac6cf1 < uVar9) {
                          if (uVar9 < 0xa1903fc8) {
                            if (uVar9 == 0x9e50e566) {
                              *(undefined4 *)(in_stack_00000020 + 0x2d8) = 0;
                              *(undefined1 *)(in_stack_00000020 + 0x2dc) = 0;
                              return 1;
                            }
                            if (uVar9 != 0xa1903fc7) {
                              return 0;
                            }
                            if (*(int *)(param_5 + 0xe4) == 0) {
                              param_5 = thunk_FUN_02df485c();
                              plVar15 = *(long **)(*unaff_x20 + 0xb8);
                              lVar13 = plVar15[0x12];
                              if (lVar13 == 0) goto LAB_06183bb8;
                            }
                            if (*(int *)(lVar13 + 0x18) != 0) {
                              fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                           *(undefined4 *)(lVar13 + 0x2c),
                                                           *(undefined4 *)(lVar13 + 0x30),
                                                           &stack0x00000340);
                              if (fVar21 == -32768.0) {
                                return 0;
                              }
                              if (in_stack_00000038._4_4_ != 2) {
                                if (in_stack_00000038._4_4_ == 1) {
                                  fVar22 = DAT_010fd060;
                                  if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                    fVar22 = 1.0;
                                  }
                                  fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                                }
                                else {
                                  fVar22 = DAT_010fd060;
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
                          }
                          else {
                            if (uVar9 != 0xa5c050bc) {
                              if (uVar9 != 0xa62e8917) {
                                if (uVar9 != 0xa6c747d3) {
                                  return 0;
                                }
                                uVar7 = FUN_047e1df0(in_stack_00000020 + 0x448,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__
                                                  );
                                *(undefined4 *)(in_stack_00000020 + 0x444) = uVar7;
                                return 1;
                              }
                              uVar12 = 8;
                              uVar9 = *(uint *)(in_stack_00000020 + 0x284) | 8;
                              goto LAB_06181d60;
                            }
                            if (*(int *)(param_5 + 0xe4) == 0) {
                              param_5 = thunk_FUN_02df485c();
                              plVar15 = *(long **)(*unaff_x20 + 0xb8);
                              lVar13 = plVar15[0x12];
                              if (lVar13 == 0) goto LAB_06183bb8;
                            }
                            if (*(int *)(lVar13 + 0x18) != 0) {
                              fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                           *(undefined4 *)(lVar13 + 0x2c),
                                                           *(undefined4 *)(lVar13 + 0x30),
                                                           &stack0x00000340);
                              if (fVar21 == -32768.0) {
                                return 0;
                              }
                              if (in_stack_00000038._4_4_ == 2) {
                                fVar21 = (fVar21 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                              }
                              else if (in_stack_00000038._4_4_ == 1) {
                                fVar22 = DAT_010fd060;
                                if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                  fVar22 = 1.0;
                                }
                                fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                              }
                              else {
                                fVar22 = DAT_010fd060;
                                if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                  fVar22 = 1.0;
                                }
                                fVar21 = fVar21 * fVar22;
                              }
                              uVar12 = *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputControl_WriteValueFromBufferIntoState__
                              ;
                              *(float *)(in_stack_00000020 + 0x444) = fVar21;
                              FUN_047e1dac(in_stack_00000020 + 0x448,uVar12);
                              *(undefined4 *)(in_stack_00000020 + 0x658) =
                                   *(undefined4 *)(in_stack_00000020 + 0x444);
                              return 1;
                            }
                          }
                          break;
                        }
                        if (0x8f5a791e < uVar9) {
                          if (uVar9 == 0x9176b2c9) {
                            in_stack_00000328 =
                                 FUN_047e1810(in_stack_00000020 + 0x5a0,
                                              *(undefined8 *)
                                               Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__
                                             );
                            *(long *)(in_stack_00000020 + 0x598) = in_stack_00000328;
                            lVar13 = in_stack_00000020 + 0x598;
LAB_0618362c:
                            LeanTween__value(lVar13,in_stack_00000328);
                            return 1;
                          }
                          if (uVar9 != 0x9312449e) {
                            if (uVar9 != 0x9dac6cf1) {
                              return 0;
                            }
                            *(undefined8 *)(in_stack_00000020 + 0x388) = 0;
                            return 1;
                          }
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          if (*(int *)(lVar13 + 0x18) != 0) {
                            if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                              return 1;
                            }
                            FUN_047e0414(in_stack_00000020 + 0x610,*(undefined4 *)(lVar13 + 0x24),
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__
                                        );
                            uVar12 = FUN_054e5768(&stack0x0000030c,0);
                            uVar19 = FUN_054e5768(in_stack_00000020 + 0x4a4,0);
                            uVar12 = FUN_0536dcdc(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ,uVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_EnumerateControls__
                                                  ,uVar19,0);
                            if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                              thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                            }
                            FUN_0630b598(uVar12,0);
                            return 1;
                          }
                          break;
                        }
                        if (uVar9 != 0x88ce15e6) {
                          if (uVar9 != 0x8f5a791e) {
                            return 0;
                          }
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            plVar15 = *(long **)(*unaff_x20 + 0xb8);
                            lVar13 = plVar15[0x12];
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          if (*(int *)(lVar13 + 0x18) != 0) {
                            fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                         *(undefined4 *)(lVar13 + 0x2c),
                                                         *(undefined4 *)(lVar13 + 0x30),
                                                         &stack0x00000340);
                            if (fVar21 == -32768.0) {
                              return 0;
                            }
                            uVar9 = 0x80000000;
                            if (fVar21 != INFINITY) {
                              uVar9 = (int)fVar21;
                            }
                            if ((int)uVar9 < 0x191) {
                              if ((int)uVar9 < 0xc9) {
                                if ((uVar9 == 100) || (uVar9 == 200)) goto LAB_06182d08;
                              }
                              else if ((uVar9 == 300) || (uVar9 == 400)) goto LAB_06182d08;
                            }
                            else if (uVar9 < 0x259) {
                              if ((uVar9 == 500) || (uVar9 == 600)) goto LAB_06182d08;
                            }
                            else if ((uVar9 == 700) || ((uVar9 == 800 || (uVar9 == 900)))) {
LAB_06182d08:
                              *(uint *)(in_stack_00000020 + 0x23c) = uVar9;
                            }
                            uVar7 = *(undefined4 *)(in_stack_00000020 + 0x23c);
                            uVar12 = *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControlExtensions_CopyState<MouseState>__
                            ;
                            in_stack_00000020 = in_stack_00000020 + 0x240;
LAB_06183000:
                            FUN_047e09d0(in_stack_00000020,uVar7,uVar12);
                            return 1;
                          }
                          break;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) == 0) break;
                        uVar7 = *(undefined4 *)(lVar13 + 0x24);
                        uVar11 = FUN_061402cc(uVar7,&stack0x00000318,0);
                        puVar2 = PTR_DAT_069fb990;
                        if ((uVar11 & 1) == 0) {
                          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar11 = FUN_06350670(in_stack_00000318,0,0);
                          if ((uVar11 & 1) != 0) {
                            if (*(int *)(*(long *)
                                          Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                        + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            uVar12 = FUN_0619f550(0);
                            lVar13 = *unaff_x20;
                            if (*(int *)(lVar13 + 0xe4) == 0) {
                              thunk_FUN_02df485c(lVar13);
                              lVar13 = *unaff_x20;
                            }
                            lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
                            if (lVar14 == 0) goto LAB_06183bb8;
                            if (*(int *)(lVar14 + 0x18) == 0) break;
                            uVar19 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x88)
                                                  ,*(undefined4 *)(lVar14 + 0x2c),
                                                  *(undefined4 *)(lVar14 + 0x30),0);
                            uVar12 = FUN_05362cb4(uVar12,uVar19,0);
                            in_stack_00000318 =
                                 FUN_038026b0(uVar12,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector2Control>__
                                             );
                          }
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar11 = FUN_06350670(in_stack_00000318,0,0);
                          if ((uVar11 & 1) != 0) {
                            return 0;
                          }
                          FUN_0613ffd0(uVar7,in_stack_00000318,0);
                          *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000318;
                        }
                        else {
                          *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000318;
                        }
                        LeanTween__value(in_stack_00000020 + 0x598,in_stack_00000318);
                        lVar13 = *unaff_x20;
                        uVar9 = 1;
                        *(undefined1 *)(in_stack_00000020 + 0x5c8) = 0;
                        goto LAB_06182658;
                      }
                      if (uVar9 < 0xb93c7ef2) {
                        if (uVar9 < 0xace2bca9) {
                          if (uVar9 == 0xa97f2798) {
                            if ((*(byte *)(in_stack_00000020 + 0x280) >> 3 & 1) != 0) {
                              return 1;
                            }
                            cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,8,0);
                            if (cVar4 != '\0') {
                              return 1;
                            }
                            uVar9 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffff7;
                            goto LAB_06181724;
                          }
                          if (uVar9 != 0xace2bca8) {
                            return 0;
                          }
                          if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                            return 1;
                          }
                          uVar9 = *(int *)(in_stack_00000020 + 0x4a4) - 1;
                          if (0 < *(int *)(in_stack_00000020 + 0x4a4)) {
                            fVar21 = *(float *)(in_stack_00000020 + 0x658) -
                                     *(float *)(in_stack_00000020 + 0x2d4);
                            *(float *)(in_stack_00000020 + 0x658) = fVar21;
                            if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                               (lVar13 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x38),
                               lVar13 == 0)) goto LAB_06183bb8;
                            if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
                            *(float *)(lVar13 + (ulong)uVar9 * 0x178 + 0x13c) = fVar21;
                          }
                          *(undefined4 *)(in_stack_00000020 + 0x2d4) = 0;
                          return 1;
                        }
                        if (uVar9 == 0xaf32f89e) {
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            param_5 = *unaff_x20;
                            plVar15 = *(long **)(param_5 + 0xb8);
                            lVar13 = plVar15[0x12];
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          fVar21 = DAT_010fd060;
                          if (*(int *)(lVar13 + 0x18) == 0) break;
                          if (*(int *)(lVar13 + 0x28) != 1) {
                            if (*(int *)(lVar13 + 0x28) != 0) {
                              return 0;
                            }
                            uVar9 = 1;
                            goto LAB_06181a78;
                          }
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            plVar15 = *(long **)(*unaff_x20 + 0xb8);
                            lVar13 = plVar15[0x12];
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          if (*(int *)(lVar13 + 0x18) != 0) {
                            fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                         *(undefined4 *)(lVar13 + 0x2c),
                                                         *(undefined4 *)(lVar13 + 0x30),
                                                         &stack0x00000340);
                            if (fVar21 == -32768.0) {
                              return 0;
                            }
                            if (in_stack_00000038._4_4_ == 2) {
                              fVar22 = 0.0;
                              if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                                fVar22 = *(float *)(in_stack_00000020 + 0x398);
                              }
                              fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar22)) /
                                       100.0;
                            }
                            else if (in_stack_00000038._4_4_ == 1) {
                              fVar22 = DAT_010fd060;
                              if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                fVar22 = 1.0;
                              }
                              fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                            }
                            else {
                              fVar22 = DAT_010fd060;
                              if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                fVar22 = 1.0;
                              }
                              fVar21 = fVar21 * fVar22;
                            }
                            if (fVar21 < 0.0) {
                              fVar21 = 0.0;
                            }
                            *(float *)(in_stack_00000020 + 0x388) = fVar21;
                            goto LAB_06182a1c;
                          }
                          break;
                        }
                        if (uVar9 != 0xb01dd609) {
                          if (uVar9 == 0xb93c7ef1) {
                            if (*(char *)(in_stack_00000020 + 0x469) != '\0') {
                              FUN_047e066c(in_stack_00000020 + 0x610,
                                           *(undefined8 *)
                                            Method_UnityEngine_InputSystem_InputControlExtensions_FindInParentChain<TouchControl>__
                                          );
                              uVar12 = FUN_054e5768(&stack0x0000029c,0);
                              uVar19 = FUN_054e5768(&stack0x0000029c,0);
                              uVar12 = FUN_0536dcdc(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ,uVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEventUnchecked__
                                                  ,uVar19,0);
                              if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                                thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
                              }
                              FUN_0630b598(uVar12,0);
                            }
                            FUN_047e045c(in_stack_00000020 + 0x610,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__
                                        );
                            return 1;
                          }
                          return 0;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          lVar13 = plVar15[0x12];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) == 0) break;
                        fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                     *(undefined4 *)(lVar13 + 0x2c),
                                                     *(undefined4 *)(lVar13 + 0x30),&stack0x00000340
                                                    );
                        if (fVar21 == -32768.0) {
                          return 0;
                        }
                        lVar13 = *unaff_x20;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        lVar14 = *(long *)(lVar13 + 0xb8);
                        lVar16 = *(long *)(lVar14 + 0x90);
                        if (lVar16 == 0) goto LAB_06183bb8;
                        if (*(int *)(lVar16 + 0x18) == 0) break;
                        iVar8 = *(int *)(lVar16 + 0x34);
                        if (iVar8 == 2) {
                          return 0;
                        }
                        if (iVar8 == 1) {
                          fVar22 = DAT_010fd060;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar22 = 1.0;
                          }
                          fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
LAB_061830a8:
                          *(float *)(in_stack_00000020 + 0x2d8) = fVar21;
                        }
                        else if (iVar8 == 0) {
                          fVar22 = DAT_010fd060;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar22 = 1.0;
                          }
                          fVar21 = fVar21 * fVar22;
                          goto LAB_061830a8;
                        }
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                          lVar14 = *(long *)(lVar13 + 0xb8);
                          lVar16 = *(long *)(lVar14 + 0x90);
                          if (lVar16 == 0) goto LAB_06183bb8;
                        }
                        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
                        if (*(int *)(lVar16 + 0x38) != 0x22bcfb9a) {
                          return 1;
                        }
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          lVar13 = thunk_FUN_02df485c();
                          lVar14 = *(long *)(*unaff_x20 + 0xb8);
                          lVar16 = *(long *)(lVar14 + 0x90);
                          if (lVar16 == 0) goto LAB_06183bb8;
                        }
                        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) {
                          fVar21 = (float)FUN_0618a78c(lVar13,*(undefined8 *)(lVar14 + 0x88),
                                                       *(undefined4 *)(lVar16 + 0x44),
                                                       *(undefined4 *)(lVar16 + 0x48),
                                                       &stack0x00000340);
                          *(bool *)(in_stack_00000020 + 0x2dc) = fVar21 != 0.0;
                          return 1;
                        }
                        break;
                      }
                      if (uVar9 < 0xc465179a) {
                        if (uVar9 == 0xbe648664) {
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          }
                          FUN_047e10dc(&stack0x00000340,plVar15 + 2,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                                      );
                          *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000358;
                          LeanTween__value(in_stack_00000020 + 0x118);
                          *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_00000340;
                          return 1;
                        }
                        if (uVar9 != 0xc4651799) {
                          return 0;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          lVar13 = plVar15[0x12];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) != 0) {
                          fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                       *(undefined4 *)(lVar13 + 0x2c),
                                                       *(undefined4 *)(lVar13 + 0x30),
                                                       &stack0x00000340);
                          if (fVar21 == -32768.0) {
                            return 0;
                          }
                          fVar21 = fVar21 * DAT_010fd168;
                          uVar7 = 0;
                          uVar24 = FUN_0633f780(0,0);
LAB_061814dc:
                          *(undefined4 *)(in_stack_00000020 + 0x46c) = uVar24;
                          *(undefined4 *)(in_stack_00000020 + 0x470) = uVar7;
                          *(float *)(in_stack_00000020 + 0x474) = fVar21;
                          *(undefined4 *)(in_stack_00000020 + 0x478) = uVar23;
                          return 1;
                        }
                        break;
                      }
                      if (uVar9 != 0xc4e67de9) {
                        if (uVar9 != 0xcdaced1f) {
                          return 0;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          lVar13 = plVar15[0x12];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) != 0) {
                          fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                       *(undefined4 *)(lVar13 + 0x2c),
                                                       *(undefined4 *)(lVar13 + 0x30),
                                                       &stack0x00000340);
                          if (fVar21 == -32768.0) {
                            return 0;
                          }
                          if (in_stack_00000038._4_4_ == 2) {
                            fVar21 = (fVar21 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                          }
                          else if (in_stack_00000038._4_4_ == 1) {
                            fVar22 = DAT_010fd060;
                            if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                              fVar22 = 1.0;
                            }
                            fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                          }
                          else {
                            fVar22 = DAT_010fd060;
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
                        break;
                      }
                      if (*(int *)(param_5 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        param_5 = *unaff_x20;
                        lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
                        if (lVar13 == 0) goto LAB_06183bb8;
                      }
                      if (*(int *)(lVar13 + 0x18) == 0) break;
                      uVar7 = *(undefined4 *)(lVar13 + 0x24);
                      *(undefined4 *)(in_stack_00000020 + 0x6bc) = 0xffffffff;
                      if (*(int *)(lVar13 + 0x28) == 0) {
LAB_06180b84:
                        puVar2 = PTR_DAT_069fb990;
                        uVar12 = *(undefined8 *)(in_stack_00000020 + 0x1c8);
                        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar11 = FUN_0634eb94(uVar12,0,0);
                        if ((uVar11 & 1) == 0) {
                          uVar12 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar11 = FUN_0634eb94(uVar12,0,0);
                          uVar12 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                          if ((uVar11 & 1) != 0) {
                            *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar12;
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance__set_aimAssistRequiredAngle
                            ;
                          }
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar11 = FUN_06350670(uVar12,0,0);
                          puVar3 = Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__;
                          if ((uVar11 & 1) != 0) {
                            if (*(int *)(*(long *)
                                          Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                        + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            uVar12 = FUN_0619f1f8(0);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_02df485c(*(long *)puVar2);
                            }
                            uVar11 = FUN_0634eb94(uVar12,0,0);
                            if ((uVar11 & 1) == 0) {
                              uVar12 = FUN_038026b0(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_GetStatePtrFromStateEvent__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<AxisControl>__
                                                  );
                            }
                            else {
                              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              uVar12 = FUN_0619f1f8(0);
                            }
                            *(undefined8 *)(in_stack_00000020 + 0x6a8) = uVar12;
                            LeanTween__value((undefined8 *)(in_stack_00000020 + 0x6a8),uVar12);
                            uVar12 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                            *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar12;
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance__set_aimAssistRequiredAngle
                            ;
                          }
                        }
                        else {
                          uVar12 = *(undefined8 *)(in_stack_00000020 + 0x1c8);
                          *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar12;
UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance__set_aimAssistRequiredAngle:
                          LeanTween__value(in_stack_00000020 + 0x6b0,uVar12);
                        }
                        uVar12 = *(undefined8 *)(in_stack_00000020 + 0x6b0);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar11 = FUN_06350670(uVar12,0,0);
                        if ((uVar11 & 1) != 0) {
                          return 0;
                        }
                      }
                      else {
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) == 0) break;
                        if (*(int *)(lVar13 + 0x28) == 1) goto LAB_06180b84;
                        uVar11 = FUN_06140224(uVar7,&stack0x00000310,0);
                        puVar2 = PTR_DAT_069fb990;
                        if ((uVar11 & 1) == 0) {
                          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar11 = FUN_06350670(in_stack_00000310,0,0);
                          if ((uVar11 & 1) != 0) {
                            lVar13 = *unaff_x20;
                            if (*(int *)(lVar13 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                              lVar13 = *unaff_x20;
                            }
                            lVar14 = *(long *)(lVar13 + 0xb8);
                            lVar16 = *(long *)(lVar14 + 0x78);
                            in_stack_00000310 = 0;
                            if (lVar16 != 0) {
                              if (*(int *)(lVar13 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar14 = *(long *)(*unaff_x20 + 0xb8);
                              }
                              lVar13 = *(long *)(lVar14 + 0x90);
                              if (lVar13 == 0) goto LAB_06183bb8;
                              if (*(int *)(lVar13 + 0x18) == 0) break;
                              uVar12 = FUN_05373aa8(0,*(undefined8 *)(lVar14 + 0x88),
                                                    *(undefined4 *)(lVar13 + 0x2c),
                                                    *(undefined4 *)(lVar13 + 0x30),0);
                              in_stack_00000310 =
                                   (**(code **)(lVar16 + 0x18))
                                             (*(undefined8 *)(lVar16 + 0x40),uVar7,uVar12,
                                              *(undefined8 *)(lVar16 + 0x28));
                            }
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            uVar11 = FUN_06350670(in_stack_00000310,0,0);
                            if ((uVar11 & 1) != 0) {
                              if (*(int *)(*(long *)
                                            Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                          + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              uVar12 = FUN_0619f2b8(0);
                              lVar13 = *unaff_x20;
                              if (*(int *)(lVar13 + 0xe4) == 0) {
                                thunk_FUN_02df485c(lVar13);
                                lVar13 = *unaff_x20;
                              }
                              lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
                              if (lVar14 == 0) goto LAB_06183bb8;
                              if (*(int *)(lVar14 + 0x18) == 0) break;
                              uVar19 = FUN_05373aa8(0,*(undefined8 *)
                                                       (*(long *)(lVar13 + 0xb8) + 0x88),
                                                    *(undefined4 *)(lVar14 + 0x2c),
                                                    *(undefined4 *)(lVar14 + 0x30),0);
                              uVar12 = FUN_05362cb4(uVar12,uVar19,0);
                              in_stack_00000310 =
                                   FUN_038026b0(uVar12,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<AxisControl>__
                                               );
                            }
                          }
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar11 = FUN_06350670(in_stack_00000310,0,0);
                          if ((uVar11 & 1) != 0) {
                            return 0;
                          }
                          FUN_0613fe2c(uVar7,in_stack_00000310,0);
                          *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000310;
                        }
                        else {
                          *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000310;
                        }
                        LeanTween__value(in_stack_00000020 + 0x6b0,in_stack_00000310);
                      }
                      lVar13 = *unaff_x20;
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar13 = *unaff_x20;
                      }
                      lVar14 = *(long *)(lVar13 + 0xb8);
                      lVar16 = *(long *)(lVar14 + 0x90);
                      if (lVar16 == 0) goto LAB_06183bb8;
                      if (*(int *)(lVar16 + 0x18) == 0) break;
                      if (*(int *)(lVar16 + 0x28) == 1) {
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          lVar13 = thunk_FUN_02df485c();
                          lVar14 = *(long *)(*unaff_x20 + 0xb8);
                          lVar16 = *(long *)(lVar14 + 0x90);
                          if (lVar16 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar16 + 0x18) == 0) break;
                        fVar21 = (float)FUN_0618a78c(lVar13,*(undefined8 *)(lVar14 + 0x88),
                                                     *(undefined4 *)(lVar16 + 0x2c),
                                                     *(undefined4 *)(lVar16 + 0x30),&stack0x00000340
                                                    );
                        iVar8 = -0x80000000;
                        if (fVar21 != INFINITY) {
                          iVar8 = (int)fVar21;
                        }
                        if (iVar8 == -0x8000) {
                          return 0;
                        }
                        if ((*(long *)(in_stack_00000020 + 0x6b0) == 0) ||
                           (lVar13 = FUN_061a2bf0(*(long *)(in_stack_00000020 + 0x6b0),0),
                           lVar13 == 0)) goto LAB_06183bb8;
                        if (*(int *)(lVar13 + 0x18) + -1 < iVar8) {
                          return 0;
                        }
                        lVar13 = *unaff_x20;
                        *(int *)(in_stack_00000020 + 0x6bc) = iVar8;
                      }
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar13 = *unaff_x20;
                      }
                      uVar9 = 0;
                      uVar7 = *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x68);
                      plVar15 = (long *)(in_stack_00000020 + 0x6b0);
                      *(undefined1 *)(in_stack_00000020 + 0x1d1) = 0;
                      *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar7;
                      goto LAB_061837a8;
                    }
                    if (-0x1044a318 < (int)uVar9) {
                      if (0x53 < (int)uVar9) {
                        if (0x64d < uVar9) {
                          if (uVar9 != 0x64e) {
                            if (uVar9 == 0x65a) {
                              if (((*(byte *)(in_stack_00000020 + 0x280) >> 2 & 1) == 0) &&
                                 (cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,4,0), cVar4 == '\0'
                                 )) {
                                *(uint *)(in_stack_00000020 + 0x284) =
                                     *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffb;
                              }
                              uVar7 = FUN_047df77c(in_stack_00000020 + 0x528,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_BuildPath__
                                                  );
                              *(undefined4 *)(in_stack_00000020 + 0x158) = uVar7;
                              return 1;
                            }
                            if (uVar9 != 0x65c) {
                              return 0;
                            }
                            if (((*(byte *)(in_stack_00000020 + 0x280) >> 6 & 1) == 0) &&
                               (cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,0x40,0),
                               cVar4 == '\0')) {
                              *(uint *)(in_stack_00000020 + 0x284) =
                                   *(uint *)(in_stack_00000020 + 0x284) & 0xffffffbf;
                            }
                            uVar7 = FUN_047df77c(in_stack_00000020 + 0x548,
                                                 *(undefined8 *)
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_BuildPath__
                                                );
                            *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar7;
                            return 1;
                          }
                          if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                            return 1;
                          }
                          if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                            return 1;
                          }
                          lVar13 = *(long *)(in_stack_00000020 + 0x3a0);
                          if ((lVar13 != 0) && (lVar14 = *(long *)(lVar13 + 0x48), lVar14 != 0)) {
                            uVar6 = *(uint *)(lVar13 + 0x28);
                            uVar9 = *(uint *)(lVar14 + 0x18);
                            goto FUN_061817b4;
                          }
                          goto LAB_06183bb8;
                        }
                        if (uVar9 != 0x55) {
                          if (uVar9 == 0x646) {
                            if ((*(byte *)(in_stack_00000020 + 0x280) >> 1 & 1) != 0) {
                              return 1;
                            }
                            uVar7 = FUN_047e045c(in_stack_00000020 + 0x5e8,
                                                 *(undefined8 *)
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__
                                                );
                            *(undefined4 *)(in_stack_00000020 + 0x608) = uVar7;
                            cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,2,0);
                            if (cVar4 != '\0') {
                              return 1;
                            }
                            uVar9 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffd;
                            goto LAB_06181724;
                          }
                          if (uVar9 != 0x64d) {
                            return 0;
                          }
                          if ((*(byte *)(in_stack_00000020 + 0x280) & 1) != 0) {
                            return 1;
                          }
                          cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,1,0);
                          if (cVar4 != '\0') {
                            return 1;
                          }
                          uVar12 = *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<float>__
                          ;
                          *(uint *)(in_stack_00000020 + 0x284) =
                               *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffe;
LAB_06182380:
                          uVar7 = FUN_047e0be0(in_stack_00000020 + 0x240,uVar12);
                          *(undefined4 *)(in_stack_00000020 + 0x23c) = uVar7;
                          return 1;
                        }
                        *(uint *)(in_stack_00000020 + 0x284) =
                             *(uint *)(in_stack_00000020 + 0x284) | 4;
                        FUN_061a9b10(in_stack_00000020 + 0x288,4,0);
                        lVar13 = *unaff_x20;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        lVar14 = *(long *)(lVar13 + 0xb8);
                        lVar16 = *(long *)(lVar14 + 0x90);
                        if (lVar16 == 0) goto LAB_06183bb8;
                        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
                        if (*(int *)(lVar16 + 0x38) == 0x4e3381d) {
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            lVar13 = thunk_FUN_02df485c();
                            lVar14 = *(long *)(*unaff_x20 + 0xb8);
                            lVar16 = *(long *)(lVar14 + 0x90);
                            if (lVar16 == 0) goto LAB_06183bb8;
                          }
                          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
                          uVar9 = FUN_0618a494(lVar13,*(undefined8 *)(lVar14 + 0x88),
                                               *(undefined4 *)(lVar16 + 0x44),
                                               *(undefined4 *)(lVar16 + 0x48));
                          *(uint *)(in_stack_00000020 + 0x158) = uVar9;
                          bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                          if (uVar9 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                            bVar5 = (byte)(uVar9 >> 0x18);
                          }
                          *(byte *)(in_stack_00000020 + 0x15b) = bVar5;
                          uVar7 = *(undefined4 *)(in_stack_00000020 + 0x158);
                        }
                        else {
                          uVar7 = *(undefined4 *)(in_stack_00000020 + 0x500);
                          *(undefined4 *)(in_stack_00000020 + 0x158) = uVar7;
                        }
                        uVar12 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                        ;
                        in_stack_00000020 = in_stack_00000020 + 0x528;
                        goto LAB_0617f5d4;
                      }
                      if (0x41 < (int)uVar9) {
                        if (uVar9 == 0x42) {
                          *(uint *)(in_stack_00000020 + 0x284) =
                               *(uint *)(in_stack_00000020 + 0x284) | 1;
                          FUN_061a9b10(in_stack_00000020 + 0x288,1,0);
                          *(undefined4 *)(in_stack_00000020 + 0x23c) = 700;
                          return 1;
                        }
                        if (uVar9 == 0x49) {
                          *(uint *)(in_stack_00000020 + 0x284) =
                               *(uint *)(in_stack_00000020 + 0x284) | 2;
                          FUN_061a9b10(in_stack_00000020 + 0x288,2,0);
                          lVar13 = *unaff_x20;
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar13 = *unaff_x20;
                          }
                          lVar14 = *(long *)(lVar13 + 0xb8);
                          lVar16 = *(long *)(lVar14 + 0x90);
                          if (lVar16 == 0) goto LAB_06183bb8;
                          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
                          if (*(int *)(lVar16 + 0x38) == 0x47db7c1) {
                            if (*(int *)(lVar13 + 0xe4) == 0) {
                              lVar13 = thunk_FUN_02df485c();
                              lVar14 = *(long *)(*unaff_x20 + 0xb8);
                              lVar16 = *(long *)(lVar14 + 0x90);
                              if (lVar16 == 0) goto LAB_06183bb8;
                            }
                            if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
                            fVar21 = (float)FUN_0618a78c(lVar13,*(undefined8 *)(lVar14 + 0x88),
                                                         *(undefined4 *)(lVar16 + 0x44),
                                                         *(undefined4 *)(lVar16 + 0x48),
                                                         &stack0x00000340);
                            uVar9 = (uint)fVar21;
                            uVar6 = 0x80000000;
                            if (fVar21 != INFINITY) {
                              uVar6 = uVar9;
                            }
                            *(uint *)(in_stack_00000020 + 0x608) = uVar6;
                            if (0x168 < uVar6 + 0xb4) {
                              return 0;
                            }
                          }
                          else {
                            if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                            bVar5 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b0);
                            uVar9 = (uint)bVar5;
                            *(uint *)(in_stack_00000020 + 0x608) = (uint)bVar5;
                          }
                          FUN_047e0414(in_stack_00000020 + 0x5e8,uVar9,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__
                                      );
                          return 1;
                        }
                        if (uVar9 != 0x53) {
                          return 0;
                        }
                        *(uint *)(in_stack_00000020 + 0x284) =
                             *(uint *)(in_stack_00000020 + 0x284) | 0x40;
                        FUN_061a9b10(in_stack_00000020 + 0x288,0x40,0);
                        lVar13 = *unaff_x20;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        lVar14 = *(long *)(lVar13 + 0xb8);
                        lVar16 = *(long *)(lVar14 + 0x90);
                        if (lVar16 == 0) goto LAB_06183bb8;
                        if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
                        if (*(int *)(lVar16 + 0x38) == 0x4e3381d) {
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            lVar13 = thunk_FUN_02df485c();
                            lVar14 = *(long *)(*unaff_x20 + 0xb8);
                            lVar16 = *(long *)(lVar14 + 0x90);
                            if (lVar16 == 0) goto LAB_06183bb8;
                          }
                          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
                          uVar9 = FUN_0618a494(lVar13,*(undefined8 *)(lVar14 + 0x88),
                                               *(undefined4 *)(lVar16 + 0x44),
                                               *(undefined4 *)(lVar16 + 0x48));
                          *(uint *)(in_stack_00000020 + 0x15c) = uVar9;
                          bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                          if (uVar9 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                            bVar5 = (byte)(uVar9 >> 0x18);
                          }
                          *(byte *)(in_stack_00000020 + 0x15f) = bVar5;
                          uVar7 = *(undefined4 *)(in_stack_00000020 + 0x15c);
                        }
                        else {
                          uVar7 = *(undefined4 *)(in_stack_00000020 + 0x500);
                          *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar7;
                        }
                        uVar12 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                        ;
                        in_stack_00000020 = in_stack_00000020 + 0x548;
                        goto LAB_0617f5d4;
                      }
                      if (uVar9 == 0xff568194) {
                        *(undefined4 *)(in_stack_00000020 + 0x634) = 0;
                        return 1;
                      }
                      if (uVar9 != 0x41) {
                        return 0;
                      }
                      if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                        return 1;
                      }
                      if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                        return 1;
                      }
                      if (*(int *)(param_5 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                        if (lVar13 == 0) goto LAB_06183bb8;
                      }
                      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) break;
                      if (*(int *)(lVar13 + 0x38) != 0x26afb9) {
                        return 1;
                      }
                      lVar13 = *(long *)(in_stack_00000020 + 0x3a0);
                      if (lVar13 == 0) goto LAB_06183bb8;
                      lVar14 = *(long *)(lVar13 + 0x48);
                      if (lVar14 == 0) goto LAB_06183bb8;
                      uVar9 = *(uint *)(lVar13 + 0x28);
                      if (*(int *)(lVar14 + 0x18) < (int)(uVar9 + 1)) {
                        if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        FUN_0383ec34((long *)(lVar13 + 0x48),uVar9 + 1,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<Vector2Control>__
                                    );
                        lVar13 = *(long *)(in_stack_00000020 + 0x3a0);
                        if (lVar13 == 0) goto LAB_06183bb8;
                      }
                      lVar13 = *(long *)(lVar13 + 0x48);
                      if (lVar13 == 0) goto LAB_06183bb8;
                      if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
                      plVar15 = (long *)(lVar13 + (long)(int)uVar9 * 0x28 + 0x20);
                      *plVar15 = in_stack_00000020;
                      LeanTween__value(plVar15,in_stack_00000020);
                      if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                         (lVar13 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48),
                         lVar13 == 0)) goto LAB_06183bb8;
                      if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
                      lVar14 = lVar13 + (long)(int)uVar9 * 0x28;
                      *(undefined4 *)(lVar14 + 0x28) = 0x26afb9;
                      *(undefined4 *)(lVar14 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x4a4);
                      lVar16 = *unaff_x20;
                      if (*(int *)(lVar16 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar16 = *unaff_x20;
                      }
                      lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x90);
                      if (lVar17 == 0) goto LAB_06183bb8;
                      if (((*(uint *)(lVar17 + 0x18) & 0xfffffffe) != 0) &&
                         (uVar9 < *(uint *)(lVar13 + 0x18))) {
                        iVar8 = *(int *)(lVar17 + 0x44);
                        uVar7 = *(undefined4 *)(lVar17 + 0x48);
                        uVar12 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x88);
LAB_06181954:
                        FUN_06151c6c(lVar14 + 0x20,uVar12,iVar8,uVar7,0);
                        return 1;
                      }
                      break;
                    }
                    if (uVar9 < 0xd2d23292) {
                      if (0xd078112f < uVar9) {
                        if (uVar9 != 0xd256d1de) {
                          if (uVar9 == 0xd26babf6) {
                            uVar24 = FUN_0571b394(0);
                            goto LAB_061814dc;
                          }
                          if (uVar9 != 0xd2d23291) {
                            return 0;
                          }
                          FUN_047e0a18(in_stack_00000020 + 0x240,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputControlExtensions_CompareState__
                                      );
                          if (*(int *)(in_stack_00000020 + 0x284) == 1) {
                            *(undefined4 *)(in_stack_00000020 + 0x23c) = 700;
                            return 1;
                          }
                          uVar12 = *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<float>__
                          ;
                          goto LAB_06182380;
                        }
                        uVar12 = 0x20;
                        uVar9 = *(uint *)(in_stack_00000020 + 0x284) | 0x20;
                        goto LAB_06181d60;
                      }
                      if (uVar9 == 0xd05efa5c) {
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          lVar13 = plVar15[0x12];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) == 0) break;
                        fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                     *(undefined4 *)(lVar13 + 0x2c),
                                                     *(undefined4 *)(lVar13 + 0x30),&stack0x00000340
                                                    );
                        if (fVar21 == -32768.0) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ != 2) {
                          if (in_stack_00000038._4_4_ == 1) {
                            fVar22 = DAT_010fd060;
                            if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                              fVar22 = 1.0;
                            }
                            fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                          }
                          else {
                            fVar22 = DAT_010fd060;
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
                          memmove(&stack0x000002a0,
                                  (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                          fVar22 = (float)FUN_063ecbd8(&stack0x000002a0,0);
                          if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                            memmove(&stack0x000002a0,
                                    (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                            fVar26 = (float)FUN_063ecbe0(&stack0x000002a0,0);
                            if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
                              fVar30 = DAT_010fd060;
                              if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                fVar30 = 1.0;
                              }
                              memmove(&stack0x000002a0,
                                      (void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x28),0x60);
                              fVar25 = (float)FUN_063ecc00(&stack0x000002a0,0);
                              *(float *)(in_stack_00000020 + 0x2ec) =
                                   (fVar27 / fVar22) * fVar26 * fVar30 * ((fVar21 * fVar25) / 100.0)
                              ;
                              return 1;
                            }
                          }
                        }
                        goto LAB_06183bb8;
                      }
                      if (uVar9 != 0xd078112f) {
                        return 0;
                      }
                    }
                    else {
                      if (0xe554f6f3 < uVar9) {
                        if (uVar9 == 0xe7ae3cb4) {
                          *(undefined1 *)(in_stack_00000020 + 0x468) = 1;
                          return 1;
                        }
                        if (uVar9 == 0xedcbd276) goto LAB_0617fbc4;
                        if (uVar9 != 0xefbb5ce8) {
                          return 0;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          lVar13 = plVar15[0x12];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) != 0) {
                          fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                       *(undefined4 *)(lVar13 + 0x2c),
                                                       *(undefined4 *)(lVar13 + 0x30),
                                                       &stack0x00000340);
                          if (fVar21 == -32768.0) {
                            return 0;
                          }
                          if (in_stack_00000038._4_4_ == 2) {
                            fVar22 = 0.0;
                            if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                              fVar22 = *(float *)(in_stack_00000020 + 0x398);
                            }
                            fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar22)) /
                                     100.0;
                          }
                          else if (in_stack_00000038._4_4_ == 1) {
                            fVar22 = DAT_010fd060;
                            if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                              fVar22 = 1.0;
                            }
                            fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                          }
                          else {
                            fVar22 = DAT_010fd060;
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
                        break;
                      }
                      if (uVar9 != 0xdd49c439) {
                        if (uVar9 != 0xe554f6f3) {
                          return 0;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          lVar13 = plVar15[0x12];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) != 0) {
                          fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                       *(undefined4 *)(lVar13 + 0x2c),
                                                       *(undefined4 *)(lVar13 + 0x30),
                                                       &stack0x00000340);
                          if (fVar21 == -32768.0) {
                            return 0;
                          }
                          if (in_stack_00000038._4_4_ == 2) {
                            fVar22 = 0.0;
                            if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                              fVar22 = *(float *)(in_stack_00000020 + 0x398);
                            }
                            fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar22)) /
                                     100.0;
                          }
                          else if (in_stack_00000038._4_4_ == 1) {
                            fVar22 = DAT_010fd060;
                            if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                              fVar22 = 1.0;
                            }
                            fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                          }
                          else {
                            fVar22 = DAT_010fd060;
                            if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                              fVar22 = 1.0;
                            }
                            fVar21 = fVar21 * fVar22;
                          }
                          if (fVar21 < 0.0) {
                            fVar21 = 0.0;
                          }
LAB_06182a1c:
                          *(float *)(in_stack_00000020 + 0x38c) = fVar21;
                          return 1;
                        }
                        break;
                      }
                    }
                    if ((*(byte *)(in_stack_00000020 + 0x280) >> 4 & 1) != 0) {
                      return 1;
                    }
                    cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,0x10,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar9 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffffef;
LAB_06181724:
                    *(uint *)(in_stack_00000020 + 0x284) = uVar9;
                    return 1;
                  }
                  if (uVar9 < 0x37b920b) {
                    if (0x2adb73 < uVar9) {
                      if (0x597459 < uVar9) {
                        if (uVar9 < 0x36f95db) {
                          if (uVar9 == 0x36d097e) {
                            *(undefined1 *)(in_stack_00000020 + 0x309) = 0;
                            return 1;
                          }
                          if (uVar9 != 0x36f95da) {
                            return 0;
                          }
                          if ((*(byte *)(in_stack_00000020 + 0x281) >> 1 & 1) != 0) {
                            return 1;
                          }
                          FUN_047dfdc8(&stack0x00000340,in_stack_00000020 + 0x568,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                                      );
                          FUN_047dfb64(&stack0x00000340,in_stack_00000020 + 0x568,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputControlExtensions_CompareStateIgnoringNoise__
                                      );
                          *(long *)(in_stack_00000020 + 0x168) = in_stack_00000348;
                          *(undefined8 *)(in_stack_00000020 + 0x160) = in_stack_00000340;
                          *(undefined4 *)(in_stack_00000020 + 0x170) = in_stack_00000350;
                          cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,0x200,0);
                          if (cVar4 != '\0') {
                            return 1;
                          }
                          uVar9 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffdff;
                          goto LAB_06181724;
                        }
                        if (uVar9 != 0x37038af) {
                          if (uVar9 == 0x37128fc) {
                            if (*(int *)(param_5 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                              plVar15 = *(long **)(*unaff_x20 + 0xb8);
                            }
                            FUN_047e10dc(&stack0x00000340,plVar15 + 2,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefaultIgnoringNoise__
                                        );
                            *(long *)(in_stack_00000020 + 0x100) = in_stack_00000348;
                            LeanTween__value(in_stack_00000020 + 0x100);
                            *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000358;
                            LeanTween__value(in_stack_00000020 + 0x118,in_stack_00000358);
                            *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_00000340;
                            return 1;
                          }
                          if (uVar9 != 0x37b920a) {
                            return 0;
                          }
                          uVar7 = FUN_047e1df0(in_stack_00000020 + 0x218,
                                               *(undefined8 *)
                                                Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__
                                              );
                          *(undefined4 *)(in_stack_00000020 + 0x210) = uVar7;
                          return 1;
                        }
                        if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                          return 1;
                        }
                        if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                          return 1;
                        }
                        lVar13 = *(long *)(in_stack_00000020 + 0x3a0);
                        if ((lVar13 == 0) || (lVar14 = *(long *)(lVar13 + 0x48), lVar14 == 0))
                        goto LAB_06183bb8;
                        uVar6 = *(uint *)(lVar13 + 0x28);
                        uVar9 = *(uint *)(lVar14 + 0x18);
                        if ((int)uVar9 <= (int)uVar6) {
                          return 1;
                        }
FUN_061817b4:
                        if (uVar6 < uVar9) {
                          lVar14 = lVar14 + (long)(int)uVar6 * 0x28;
                          *(int *)(lVar14 + 0x38) =
                               *(int *)(in_stack_00000020 + 0x4a4) - *(int *)(lVar14 + 0x34);
                          *(uint *)(lVar13 + 0x28) = uVar6 + 1;
                          return 1;
                        }
                        break;
                      }
                      if (0x2eb625 < uVar9) {
                        return 0;
                      }
                      if (uVar9 == 0x2b96d1) {
                        *(undefined1 *)(in_stack_00000020 + 0x309) = 1;
                        return 1;
                      }
                      if (uVar9 != 0x2eb625) {
                        return 0;
                      }
                      if (*(int *)(param_5 + 0xe4) == 0) {
                        param_5 = thunk_FUN_02df485c();
                        plVar15 = *(long **)(*unaff_x20 + 0xb8);
                        lVar13 = plVar15[0x12];
                        if (lVar13 == 0) goto LAB_06183bb8;
                      }
                      if (*(int *)(lVar13 + 0x18) == 0) break;
                      fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                   *(undefined4 *)(lVar13 + 0x2c),
                                                   *(undefined4 *)(lVar13 + 0x30),&stack0x00000340);
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
                        lVar13 = *unaff_x20;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x88);
                        if (lVar14 == 0) goto LAB_06183bb8;
                        if (*(uint *)(lVar14 + 0x18) < 6) break;
                        if (*(short *)(lVar14 + 0x2a) != 0x2b) {
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                            if (lVar14 == 0) goto LAB_06183bb8;
                          }
                          if (*(uint *)(lVar14 + 0x18) < 6) break;
                          if (*(short *)(lVar14 + 0x2a) != 0x2d) {
                            uVar12 = *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControl_WriteValueFromBufferIntoState__
                            ;
                            *(float *)(in_stack_00000020 + 0x210) = fVar21;
                            goto LAB_061829e4;
                          }
                        }
                        fVar21 = fVar21 + *(float *)(in_stack_00000020 + 0x20c);
                      }
                      puVar2 = 
                      Method_UnityEngine_InputSystem_InputControl_WriteValueFromBufferIntoState__;
                      *(float *)(in_stack_00000020 + 0x210) = fVar21;
                      uVar12 = *(undefined8 *)puVar2;
LAB_061829e4:
                      FUN_047e1dac(fVar21,in_stack_00000020 + 0x218,uVar12);
                      return 1;
                    }
                    if (uVar9 < 0x1b02fa) {
                      if (uVar9 < 0x167e5) {
                        if (uVar9 == 0x14dac) {
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            plVar15 = *(long **)(*unaff_x20 + 0xb8);
                            lVar13 = plVar15[0x12];
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          if (*(int *)(lVar13 + 0x18) != 0) {
                            fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                         *(undefined4 *)(lVar13 + 0x2c),
                                                         *(undefined4 *)(lVar13 + 0x30),
                                                         &stack0x00000340);
                            if (fVar21 == -32768.0) {
                              return 0;
                            }
                            fVar22 = DAT_010fd060;
                            if (in_stack_00000038._4_4_ == 0) {
                              if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                fVar22 = 1.0;
                              }
                            }
                            else {
                              if (in_stack_00000038._4_4_ != 1) {
                                fVar21 = (fVar21 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                                goto LAB_06182ac0;
                              }
                              fVar21 = fVar21 * *(float *)(in_stack_00000020 + 0x210);
                              if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                fVar22 = 1.0;
                              }
                            }
                            fVar21 = fVar21 * fVar22;
                            goto LAB_06182a74;
                          }
                          break;
                        }
                        if (uVar9 != 0x167e4) {
                          return 0;
                        }
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar21 = (float)FUN_063ecc58(&stack0x000002a0,0);
                        fVar22 = 1.0;
                        if (0.0 < fVar21) {
                          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                          memmove(&stack0x000002a0,
                                  (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                          fVar22 = (float)FUN_063ecc58(&stack0x000002a0,0);
                        }
                        uVar12 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<uint>__
                        ;
                        *(float *)(in_stack_00000020 + 0x43c) = fVar27 * fVar22;
                        FUN_047e1e64(*(undefined4 *)(in_stack_00000020 + 0x634),
                                     in_stack_00000020 + 0x638,uVar12);
                        lVar13 = *unaff_x20;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        lVar14 = **(long **)(lVar13 + 0xb8);
                        if (lVar14 == 0) goto LAB_06183bb8;
                        if (*(uint *)(lVar14 + 0x18) <= *(uint *)(in_stack_00000020 + 0x120)) break;
                        FUN_047e1168(*(long **)(lVar13 + 0xb8) + 2,&stack0x00000340,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                                    );
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        fVar22 = *(float *)(in_stack_00000020 + 0x210);
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar21 = (float)FUN_063ecbd8(&stack0x000002a0,0);
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar27 = (float)FUN_063ecbe0(&stack0x000002a0,0);
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        fVar30 = *(float *)(in_stack_00000020 + 0x634);
                        fVar26 = DAT_010fd060;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar26 = 1.0;
                        }
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar25 = (float)FUN_063ecc50(&stack0x000002a0,0);
                        *(float *)(in_stack_00000020 + 0x634) =
                             fVar30 + (fVar22 / fVar21) * fVar27 * fVar26 * fVar25 *
                                      *(float *)(in_stack_00000020 + 0x43c);
                        FUN_061a9b10(in_stack_00000020 + 0x288,0x100,0);
                        uVar9 = *(uint *)(in_stack_00000020 + 0x284) | 0x100;
                      }
                      else {
                        if (uVar9 != 0x167f6) {
                          if (uVar9 == 0x1b02eb) {
                            if ((*(byte *)(in_stack_00000020 + 0x285) & 1) == 0) {
                              return 1;
                            }
                            if (*(int *)(param_5 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                              plVar15 = *(long **)(*unaff_x20 + 0xb8);
                            }
                            FUN_047e1260(&stack0x00000340,plVar15 + 2,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<Vector2>__
                                        );
                            if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                              uVar7 = FUN_047e1f38(in_stack_00000020 + 0x638,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<float>__
                                                  );
                              *(undefined4 *)(in_stack_00000020 + 0x634) = uVar7;
                              if (in_stack_00000348 == 0) goto LAB_06183bb8;
                              fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                              memmove(&stack0x000002a0,(void *)(in_stack_00000348 + 0x28),0x60);
                              fVar21 = (float)FUN_063ecc58(&stack0x000002a0,0);
                              fVar22 = 1.0;
                              if (0.0 < fVar21) {
                                memmove(&stack0x000002a0,(void *)(in_stack_00000348 + 0x28),0x60);
                                fVar22 = (float)FUN_063ecc58(&stack0x000002a0,0);
                              }
                              *(float *)(in_stack_00000020 + 0x43c) = fVar27 / fVar22;
                            }
                            cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,0x100,0);
                            if (cVar4 != '\0') {
                              return 1;
                            }
                            uVar9 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffeff;
                            goto LAB_06181724;
                          }
                          if (uVar9 != 0x1b02f9) {
                            return 0;
                          }
                          if (-1 < *(char *)(in_stack_00000020 + 0x284)) {
                            return 1;
                          }
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            plVar15 = *(long **)(*unaff_x20 + 0xb8);
                          }
                          FUN_047e1260(&stack0x00000340,plVar15 + 2,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<Vector2>__
                                      );
                          if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                            uVar7 = FUN_047e1f38(in_stack_00000020 + 0x638,
                                                 *(undefined8 *)
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<float>__
                                                );
                            *(undefined4 *)(in_stack_00000020 + 0x634) = uVar7;
                            if (in_stack_00000348 == 0) goto LAB_06183bb8;
                            fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                            memmove(&stack0x000002a0,(void *)(in_stack_00000348 + 0x28),0x60);
                            fVar21 = (float)FUN_063ecc48(&stack0x000002a0,0);
                            fVar22 = 1.0;
                            if (0.0 < fVar21) {
                              memmove(&stack0x000002a0,(void *)(in_stack_00000348 + 0x28),0x60);
                              fVar22 = (float)FUN_063ecc48(&stack0x000002a0,0);
                            }
                            *(float *)(in_stack_00000020 + 0x43c) = fVar27 / fVar22;
                          }
                          cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,0x80,0);
                          if (cVar4 != '\0') {
                            return 1;
                          }
                          uVar9 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffff7f;
                          goto LAB_06181724;
                        }
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        fVar27 = *(float *)(in_stack_00000020 + 0x43c);
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar21 = (float)FUN_063ecc48(&stack0x000002a0,0);
                        fVar22 = 1.0;
                        if (0.0 < fVar21) {
                          if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                          memmove(&stack0x000002a0,
                                  (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                          fVar22 = (float)FUN_063ecc48(&stack0x000002a0,0);
                        }
                        uVar12 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<uint>__
                        ;
                        *(float *)(in_stack_00000020 + 0x43c) = fVar27 * fVar22;
                        FUN_047e1e64(*(undefined4 *)(in_stack_00000020 + 0x634),
                                     in_stack_00000020 + 0x638,uVar12);
                        lVar13 = *unaff_x20;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        lVar14 = **(long **)(lVar13 + 0xb8);
                        if (lVar14 == 0) goto LAB_06183bb8;
                        if (*(uint *)(lVar14 + 0x18) <= *(uint *)(in_stack_00000020 + 0x120)) break;
                        FUN_047e1168(*(long **)(lVar13 + 0xb8) + 2,&stack0x00000340,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoEvent<Vector2>__
                                    );
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        fVar22 = *(float *)(in_stack_00000020 + 0x210);
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar21 = (float)FUN_063ecbd8(&stack0x000002a0,0);
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar27 = (float)FUN_063ecbe0(&stack0x000002a0,0);
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_06183bb8;
                        fVar30 = *(float *)(in_stack_00000020 + 0x634);
                        fVar26 = DAT_010fd060;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar26 = 1.0;
                        }
                        memmove(&stack0x000002a0,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar25 = (float)FUN_063ecc40(&stack0x000002a0,0);
                        *(float *)(in_stack_00000020 + 0x634) =
                             fVar30 + (fVar22 / fVar21) * fVar27 * fVar26 * fVar25 *
                                      *(float *)(in_stack_00000020 + 0x43c);
                        FUN_061a9b10(in_stack_00000020 + 0x288,0x80,0);
                        uVar9 = *(uint *)(in_stack_00000020 + 0x284) | 0x80;
                      }
                      *(uint *)(in_stack_00000020 + 0x284) = uVar9;
                      return 1;
                    }
                    if (0x277753 < uVar9) {
                      if (uVar9 != 0x288780) {
                        if (uVar9 != 0x292f75) {
                          if (uVar9 != 0x2adb73) {
                            return 0;
                          }
                          if (*(int *)(in_stack_00000020 + 0x310) != 5) {
                            return 1;
                          }
                          *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0;
                          *(undefined1 *)(in_stack_00000020 + 0x374) = 1;
                          *(int *)(in_stack_00000020 + 0x4c4) =
                               *(int *)(in_stack_00000020 + 0x4c4) + 1;
                          fVar21 = *(float *)(in_stack_00000020 + 0x440) + 0.0 +
                                   *(float *)(in_stack_00000020 + 0x444);
LAB_06182ac0:
                          *(float *)(in_stack_00000020 + 0x658) = fVar21;
                          return 1;
                        }
                        *(uint *)(in_stack_00000020 + 0x284) =
                             *(uint *)(in_stack_00000020 + 0x284) | 0x200;
                        FUN_061a9b10(in_stack_00000020 + 0x288,0x200,0);
                        puVar2 = Method_UnityEngine_Hash128_Append<Vector2Int>__;
                        if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4
                                    ) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar24 = FUN_061371d8(0);
                        uVar9 = 0;
                        uVar11 = 0x4000ffff;
                        goto LAB_061810c8;
                      }
                      if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                        return 1;
                      }
                      if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                        return 1;
                      }
                      lVar13 = *(long *)(in_stack_00000020 + 0x3a0);
                      if (lVar13 == 0) goto LAB_06183bb8;
                      lVar14 = *(long *)(lVar13 + 0x48);
                      if (lVar14 == 0) goto LAB_06183bb8;
                      uVar9 = *(uint *)(lVar13 + 0x28);
                      if (*(int *)(lVar14 + 0x18) < (int)(uVar9 + 1)) {
                        if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        FUN_0383ec34((long *)(lVar13 + 0x48),uVar9 + 1,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControl_TryGetChildControl<Vector2Control>__
                                    );
                        lVar13 = *(long *)(in_stack_00000020 + 0x3a0);
                        if (lVar13 == 0) goto LAB_06183bb8;
                      }
                      lVar13 = *(long *)(lVar13 + 0x48);
                      if (lVar13 == 0) goto LAB_06183bb8;
                      if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
                      plVar15 = (long *)(lVar13 + (long)(int)uVar9 * 0x28 + 0x20);
                      *plVar15 = in_stack_00000020;
                      LeanTween__value(plVar15,in_stack_00000020);
                      if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                         (lVar13 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48),
                         lVar13 == 0)) goto LAB_06183bb8;
                      lVar14 = *unaff_x20;
                      if (*(int *)(lVar14 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar14 = *unaff_x20;
                      }
                      lVar16 = *(long *)(lVar14 + 0xb8);
                      lVar17 = *(long *)(lVar16 + 0x90);
                      if (lVar17 == 0) goto LAB_06183bb8;
                      if ((*(int *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar13 + 0x18) <= uVar9))
                      break;
                      *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x28 + 0x28) =
                           *(undefined4 *)(lVar17 + 0x24);
                      if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                         (lVar14 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48),
                         lVar14 == 0)) goto LAB_06183bb8;
                      if (uVar9 < *(uint *)(lVar14 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)uVar9 * 0x28;
                        *(undefined4 *)(lVar14 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x4a4);
                        iVar8 = *(int *)(lVar17 + 0x2c);
                        *(int *)(lVar14 + 0x2c) = iVar8 + in_stack_00000018._4_4_;
                        uVar7 = *(undefined4 *)(lVar17 + 0x30);
                        *(undefined4 *)(lVar14 + 0x30) = uVar7;
                        uVar12 = *(undefined8 *)(lVar16 + 0x88);
                        goto LAB_06181954;
                      }
                      break;
                    }
                    if (uVar9 == 0x1b2023) {
                      *(undefined1 *)(in_stack_00000020 + 0x30a) = 0;
                      return 1;
                    }
                    if (uVar9 != 0x277753) {
                      return 0;
                    }
                    if (*(int *)(param_5 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      param_5 = *unaff_x20;
                      plVar15 = *(long **)(param_5 + 0xb8);
                      lVar13 = plVar15[0x12];
                      if (lVar13 == 0) goto LAB_06183bb8;
                    }
                    if ((*(int *)(lVar13 + 0x18) == 0) || (*(int *)(lVar13 + 0x18) == 1)) break;
                    iVar8 = *(int *)(lVar13 + 0x24);
                    if (iVar8 != -0x25034fb5) {
                      iVar10 = *(int *)(lVar13 + 0x38);
                      iVar1 = *(int *)(lVar13 + 0x3c);
                      FUN_0614017c(iVar8,&stack0x00000328,0);
                      puVar2 = PTR_DAT_069fb990;
                      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      uVar11 = FUN_06350670(in_stack_00000328,0,0);
                      if ((uVar11 & 1) != 0) {
                        lVar13 = *unaff_x20;
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        lVar14 = *(long *)(lVar13 + 0xb8);
                        lVar16 = *(long *)(lVar14 + 0x70);
                        if (lVar16 == 0) {
                          in_stack_00000328 = 0;
                        }
                        else {
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar14 = *(long *)(*unaff_x20 + 0xb8);
                          }
                          lVar13 = *(long *)(lVar14 + 0x90);
                          if (lVar13 == 0) goto LAB_06183bb8;
                          if (*(int *)(lVar13 + 0x18) == 0) break;
                          uVar12 = FUN_05373aa8(0,*(undefined8 *)(lVar14 + 0x88),
                                                *(undefined4 *)(lVar13 + 0x2c),
                                                *(undefined4 *)(lVar13 + 0x30),0);
                          in_stack_00000328 =
                               (**(code **)(lVar16 + 0x18))
                                         (*(undefined8 *)(lVar16 + 0x40),iVar8,uVar12,
                                          *(undefined8 *)(lVar16 + 0x28));
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar11 = FUN_06350670(in_stack_00000328,0,0);
                        if ((uVar11 & 1) != 0) {
                          if (*(int *)(*(long *)
                                        Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                      + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar12 = FUN_0619ed3c(0);
                          lVar13 = *unaff_x20;
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02df485c(lVar13);
                            lVar13 = *unaff_x20;
                          }
                          lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
                          if (lVar14 == 0) goto LAB_06183bb8;
                          if (*(int *)(lVar14 + 0x18) == 0) break;
                          uVar19 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x88),
                                                *(undefined4 *)(lVar14 + 0x2c),
                                                *(undefined4 *)(lVar14 + 0x30),0);
                          uVar12 = FUN_05362cb4(uVar12,uVar19,0);
                          in_stack_00000328 =
                               FUN_038026b0(uVar12,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector3Control>__
                                           );
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        uVar11 = FUN_06350670(in_stack_00000328,0,0);
                        if ((uVar11 & 1) != 0) {
                          return 0;
                        }
                        FUN_0613fc04(in_stack_00000328,0);
                      }
                      if (iVar10 == 0 && iVar1 == 0) {
                        if (in_stack_00000328 == 0) goto LAB_06183bb8;
                        *(undefined8 *)(in_stack_00000020 + 0x118) =
                             *(undefined8 *)(in_stack_00000328 + 0x88);
                        LeanTween__value(in_stack_00000020 + 0x118);
                        lVar13 = *unaff_x20;
                        uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                        if (*(int *)(lVar13 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          lVar13 = *unaff_x20;
                        }
                        uVar9 = FUN_061405e0(uVar12,in_stack_00000328,*(long *)(lVar13 + 0xb8),
                                             *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                        lVar13 = *unaff_x20;
                        *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                        plVar15 = *(long **)(lVar13 + 0xb8);
                        if (*plVar15 == 0) goto LAB_06183bb8;
                        if (*(uint *)(*plVar15 + 0x18) <= uVar9) break;
                      }
                      else {
                        if (iVar10 != 0x313400cb) {
                          return 0;
                        }
                        uVar11 = FUN_06140374(iVar1,&stack0x00000320,0);
                        if ((uVar11 & 1) == 0) {
                          if (*(int *)(*(long *)
                                        Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                      + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          uVar12 = FUN_0619ed3c(0);
                          lVar13 = *unaff_x20;
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02df485c(lVar13);
                            lVar13 = *unaff_x20;
                          }
                          lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
                          if (lVar14 == 0) goto LAB_06183bb8;
                          if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) break;
                          uVar19 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x88),
                                                *(undefined4 *)(lVar14 + 0x44),
                                                *(undefined4 *)(lVar14 + 0x48),0);
                          uVar12 = FUN_05362cb4(uVar12,uVar19,0);
                          uVar12 = FUN_038026b0(uVar12,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPressControl>__
                                               );
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_02df485c(*(long *)puVar2);
                          }
                          uVar11 = FUN_06350670(uVar12,0,0);
                          if ((uVar11 & 1) != 0) {
                            return 0;
                          }
                          FUN_0613ff38(iVar1,uVar12,0);
                          *(undefined8 *)(in_stack_00000020 + 0x118) = uVar12;
                          LeanTween__value(in_stack_00000020 + 0x118);
                          lVar13 = *unaff_x20;
                          uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar13 = *unaff_x20;
                          }
                          uVar9 = FUN_061405e0(uVar12,in_stack_00000328,*(long *)(lVar13 + 0xb8),
                                               *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                          lVar13 = *unaff_x20;
                          *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                          plVar15 = *(long **)(lVar13 + 0xb8);
                          if (*plVar15 == 0) goto LAB_06183bb8;
                          if (*(uint *)(*plVar15 + 0x18) <= uVar9) break;
                        }
                        else {
                          *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000320;
                          LeanTween__value(in_stack_00000020 + 0x118);
                          lVar13 = *unaff_x20;
                          uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                          if (*(int *)(lVar13 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar13 = *unaff_x20;
                          }
                          uVar9 = FUN_061405e0(uVar12,in_stack_00000328,*(long *)(lVar13 + 0xb8),
                                               *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                          lVar13 = *unaff_x20;
                          *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                          plVar15 = *(long **)(lVar13 + 0xb8);
                          if (*plVar15 == 0) goto LAB_06183bb8;
                          if (*(uint *)(*plVar15 + 0x18) <= uVar9) break;
                        }
                      }
                      FUN_047e1068(plVar15 + 2,&stack0x00000340,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputControl_get_Item__);
                      lVar13 = in_stack_00000020 + 0x100;
                      *(long *)(in_stack_00000020 + 0x100) = in_stack_00000328;
                      goto LAB_0618362c;
                    }
                    if (*(int *)(param_5 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      plVar15 = *(long **)(*unaff_x20 + 0xb8);
                    }
                    lVar13 = *plVar15;
                    if (lVar13 == 0) goto LAB_06183bb8;
                    if (*(int *)(lVar13 + 0x18) == 0) break;
                    *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar13 + 0x28);
                    LeanTween__value(in_stack_00000020 + 0x100);
                    lVar13 = **(long **)(*unaff_x20 + 0xb8);
                    if (lVar13 == 0) goto LAB_06183bb8;
                    if (*(int *)(lVar13 + 0x18) == 0) break;
                    *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar13 + 0x38);
                    LeanTween__value(in_stack_00000020 + 0x118);
                    lVar13 = *unaff_x20;
                    *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
                    plVar15 = *(long **)(lVar13 + 0xb8);
                    if (*plVar15 == 0) goto LAB_06183bb8;
                    if (*(int *)(*plVar15 + 0x18) == 0) break;
                  }
                  else {
                    if (uVar9 < 0xb863a17) {
                      if (0x5989790 < uVar9) {
                        if (uVar9 < 0x5fe5279) {
                          if (uVar9 == 0x5f72764) {
                            if (*(int *)(param_5 + 0xe4) == 0) {
                              param_5 = thunk_FUN_02df485c();
                              plVar15 = *(long **)(*unaff_x20 + 0xb8);
                              lVar13 = plVar15[0x12];
                              if (lVar13 == 0) goto LAB_06183bb8;
                            }
                            if (*(int *)(lVar13 + 0x18) != 0) {
                              fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                           *(undefined4 *)(lVar13 + 0x2c),
                                                           *(undefined4 *)(lVar13 + 0x30),
                                                           &stack0x00000340);
                              if (fVar21 == -32768.0) {
                                return 0;
                              }
                              if (in_stack_00000038._4_4_ == 2) {
                                return 0;
                              }
                              if (in_stack_00000038._4_4_ == 1) {
                                fVar22 = DAT_010fd060;
                                if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                  fVar22 = 1.0;
                                }
                                fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                              }
                              else {
                                fVar22 = DAT_010fd060;
                                if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                                  fVar22 = 1.0;
                                }
                                fVar21 = fVar21 * fVar22;
                              }
                              fVar21 = *(float *)(in_stack_00000020 + 0x658) + fVar21;
LAB_06182a74:
                              *(float *)(in_stack_00000020 + 0x658) = fVar21;
                              return 1;
                            }
                            break;
                          }
                          if (uVar9 != 0x5fe5278) {
                            return 0;
                          }
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            plVar15 = *(long **)(*unaff_x20 + 0xb8);
                            lVar13 = plVar15[0x12];
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          if (*(int *)(lVar13 + 0x18) != 0) {
                            fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                         *(undefined4 *)(lVar13 + 0x2c),
                                                         *(undefined4 *)(lVar13 + 0x30),
                                                         &stack0x00000340);
                            if (fVar21 == -32768.0) {
                              return 0;
                            }
                            uVar12 = NEON_fmov(0x3f800000,4);
                            *(float *)(in_stack_00000020 + 0x47c) = fVar21;
                            *(undefined8 *)(in_stack_00000020 + 0x480) = uVar12;
                            return 1;
                          }
                        }
                        else {
                          if (uVar9 != 0x64e48e6) {
                            return 0;
                          }
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            plVar15 = *(long **)(*unaff_x20 + 0xb8);
                            lVar13 = plVar15[0x12];
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          if (*(int *)(lVar13 + 0x18) != 0) {
                            fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                         *(undefined4 *)(lVar13 + 0x2c),
                                                         *(undefined4 *)(lVar13 + 0x30),
                                                         &stack0x00000340);
                            if (fVar21 == -32768.0) {
                              return 0;
                            }
                            if (in_stack_00000038._4_4_ != 2) {
                              if (in_stack_00000038._4_4_ == 1) {
                                return 0;
                              }
                              fVar22 = DAT_010fd060;
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
                        }
                        break;
                      }
                      if (uVar9 < 0x47af055) {
                        if (uVar9 == 0x47a86ed) {
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                            lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                            if (lVar13 == 0) goto LAB_06183bb8;
                          }
                          if (*(int *)(lVar13 + 0x18) != 0) {
                            iVar8 = *(int *)(lVar13 + 0x24);
                            if (iVar8 < 0x28989c) {
                              if (iVar8 != -0x5ed67635) {
                                if (iVar8 != 0x28989b) {
                                  return 0;
                                }
                                uVar12 = *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputControl_GetChildControl__
                                ;
                                *(undefined4 *)(in_stack_00000020 + 0x2a0) = 1;
                                FUN_047e09d0(in_stack_00000020 + 0x2a8,1,uVar12);
                                return 1;
                              }
                              uVar23 = 2;
                              uVar7 = 2;
                            }
                            else if (iVar8 == 0x5196c24) {
                              uVar23 = 0x10;
                              uVar7 = 0x10;
                            }
                            else if (iVar8 == 0x5f4ec60) {
                              uVar23 = 4;
                              uVar7 = 4;
                            }
                            else {
                              if (iVar8 != 0x30b3d31f) {
                                return 0;
                              }
                              uVar23 = 8;
                              uVar7 = 8;
                            }
                            uVar12 = *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControl_GetChildControl__;
                            *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar23;
                            in_stack_00000020 = in_stack_00000020 + 0x2a8;
                            goto LAB_06183000;
                          }
                          break;
                        }
                        if (uVar9 != 0x47af054) {
                          return 0;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          param_5 = *unaff_x20;
                          plVar15 = *(long **)(param_5 + 0xb8);
                          lVar13 = plVar15[0x12];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(int *)(lVar13 + 0x18) == 0) break;
                        if (*(int *)(lVar13 + 0x30) != 3) {
                          return 0;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                        }
                        lVar13 = plVar15[0x11];
                        if (lVar13 == 0) goto LAB_06183bb8;
                        if ((7 < *(uint *)(lVar13 + 0x18)) && (*(uint *)(lVar13 + 0x18) != 8)) {
                          uVar12 = FUN_0618a00c(param_5,*(undefined2 *)(lVar13 + 0x2e));
                          bVar5 = FUN_0618a00c(uVar12,*(undefined2 *)(lVar13 + 0x30));
                          *(byte *)(in_stack_00000020 + 0x503) = bVar5 | (byte)((int)uVar12 << 4);
                          return 1;
                        }
                        break;
                      }
                      if (uVar9 != 0x4e3381d) {
                        if (uVar9 != 0x5989790) {
                          return 0;
                        }
                        *(undefined4 *)(in_stack_00000020 + 0x440) = 0;
                        return 1;
                      }
                      if (*(int *)(param_5 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        param_5 = *unaff_x20;
                        plVar15 = *(long **)(param_5 + 0xb8);
                      }
                      lVar13 = plVar15[0x11];
                      if (lVar13 == 0) goto LAB_06183bb8;
                      if (*(uint *)(lVar13 + 0x18) < 7) break;
                      if ((uVar6 == 10) && (*(short *)(lVar13 + 0x2c) == 0x23)) {
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          param_5 = thunk_FUN_02df485c();
                          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                        }
                        uVar12 = 10;
LAB_0618305c:
                        uVar7 = FUN_0618a038(param_5,lVar13,uVar12);
LAB_06183060:
                        uVar12 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                        ;
                        *(undefined4 *)(in_stack_00000020 + 0x500) = uVar7;
                      }
                      else {
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          param_5 = *unaff_x20;
                          plVar15 = *(long **)(param_5 + 0xb8);
                          lVar13 = plVar15[0x11];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(uint *)(lVar13 + 0x18) < 7) break;
                        if ((uVar6 == 0xb) && (*(short *)(lVar13 + 0x2c) == 0x23)) {
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                          }
                          uVar12 = 0xb;
                          goto LAB_0618305c;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          param_5 = *unaff_x20;
                          plVar15 = *(long **)(param_5 + 0xb8);
                          lVar13 = plVar15[0x11];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(uint *)(lVar13 + 0x18) < 7) break;
                        if ((uVar6 == 0xd) && (*(short *)(lVar13 + 0x2c) == 0x23)) {
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                          }
                          uVar12 = 0xd;
                          goto LAB_0618305c;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          param_5 = *unaff_x20;
                          plVar15 = *(long **)(param_5 + 0xb8);
                          lVar13 = plVar15[0x11];
                          if (lVar13 == 0) goto LAB_06183bb8;
                        }
                        if (*(uint *)(lVar13 + 0x18) < 7) break;
                        if ((uVar6 == 0xf) && (*(short *)(lVar13 + 0x2c) == 0x23)) {
                          if (*(int *)(param_5 + 0xe4) == 0) {
                            param_5 = thunk_FUN_02df485c();
                            lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                          }
                          uVar12 = 0xf;
                          goto LAB_0618305c;
                        }
                        if (*(int *)(param_5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                          plVar15 = *(long **)(*unaff_x20 + 0xb8);
                        }
                        lVar13 = plVar15[0x12];
                        if (lVar13 == 0) goto LAB_06183bb8;
                        if (*(int *)(lVar13 + 0x18) == 0) break;
                        uVar9 = *(uint *)(lVar13 + 0x24);
                        if (0x257e7e < (int)uVar9) {
                          if (uVar9 < 0x4d51a28) {
                            if (uVar9 != 0x284209) {
                              if (uVar9 != 0x4d51a27) {
                                return 0;
                              }
                              uVar12 = 0;
                              uVar7 = 0;
                              uVar23 = 0;
                              goto LAB_06183d30;
                            }
                            uVar23 = 0xff808080;
                            uVar7 = 0xff808080;
                            goto LAB_06183ce0;
                          }
                          if (uVar9 != 0x53084fb) {
                            if (uVar9 == 0x64c8d87) {
                              uVar12 = 0x3f800000;
                              uVar7 = 0x3f800000;
                              goto LAB_06183cf8;
                            }
                            if (uVar9 != 0x145436c0) {
                              return 0;
                            }
                            uVar23 = 0xffe6d8ad;
                            uVar7 = 0xffe6d8ad;
                            goto LAB_06183ce0;
                          }
                          uVar12 = 0;
                          uVar23 = 0;
                          uVar7 = 0x3f800000;
LAB_06183d30:
                          uVar7 = FUN_02ea7f18(uVar12,uVar7,uVar23,0x3f800000,0);
                          goto LAB_06183060;
                        }
                        if (-0x4213b590 < (int)uVar9) {
                          uVar7 = DAT_010fcf14;
                          uVar23 = DAT_010fd0bc;
                          if (uVar9 != 0xcb66f684) {
                            if (uVar9 != 0x165f3) {
                              if (uVar9 != 0x257e7e) {
                                return 0;
                              }
                              uVar12 = 0;
                              uVar7 = 0;
LAB_06183cf8:
                              uVar23 = 0x3f800000;
                              goto LAB_06183d30;
                            }
                            uVar7 = 0;
                            uVar23 = 0;
                          }
                          uVar12 = 0x3f800000;
                          goto LAB_06183d30;
                        }
                        if (uVar9 == 0xb57b1fce) {
                          uVar23 = 0xfff020a0;
                          uVar7 = 0xfff020a0;
                        }
                        else {
                          if (uVar9 != 0xbdec4a70) {
                            return 0;
                          }
                          uVar23 = 0xff0080ff;
                          uVar7 = 0xff0080ff;
                        }
LAB_06183ce0:
                        uVar12 = *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__
                        ;
                        *(undefined4 *)(in_stack_00000020 + 0x500) = uVar23;
                      }
                      in_stack_00000020 = in_stack_00000020 + 0x508;
                      goto LAB_0617f5d4;
                    }
                    if (uVar9 < 0xd7fc39c) {
                      if (uVar9 < 0xbea90d2) {
                        if (uVar9 != 0xbea90d1) {
                          return 0;
                        }
                        if ((*(byte *)(in_stack_00000020 + 0x280) >> 5 & 1) != 0) {
                          return 1;
                        }
                        cVar4 = FUN_061a9c14(in_stack_00000020 + 0x288,0x20,0);
                        if (cVar4 != '\0') {
                          return 1;
                        }
                        uVar9 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffffdf;
                        goto LAB_06181724;
                      }
                      if (uVar9 == 0xbf2aad3) {
                        *(undefined4 *)(in_stack_00000020 + 0x2ec) = 0xc6fffe00;
                        return 1;
                      }
                      if (uVar9 != 0xd0298a0) {
                        return 0;
                      }
LAB_0617fbc4:
                      uVar12 = 0x10;
                      uVar9 = *(uint *)(in_stack_00000020 + 0x284) | 0x10;
LAB_06181d60:
                      *(uint *)(in_stack_00000020 + 0x284) = uVar9;
                      FUN_061a9b10(in_stack_00000020 + 0x288,uVar12,0);
                      return 1;
                    }
                    if (0x72343fa2 < uVar9) {
                      if (uVar9 == 0x72a5aa29) {
                        *(undefined4 *)(in_stack_00000020 + 0x398) = 0xbf800000;
                        return 1;
                      }
                      if (uVar9 == 0x72f142b7) {
                        uVar23 = FUN_057e35d4(0);
                        *(undefined4 *)(in_stack_00000020 + 0x47c) = uVar23;
                        *(undefined4 *)(in_stack_00000020 + 0x480) = uVar7;
                        *(float *)(in_stack_00000020 + 0x484) = fVar21;
                        return 1;
                      }
                      if (uVar9 != 0x745ef45b) {
                        return 0;
                      }
                      if (*(int *)(param_5 + 0xe4) == 0) {
                        param_5 = thunk_FUN_02df485c();
                        plVar15 = *(long **)(*unaff_x20 + 0xb8);
                        lVar13 = plVar15[0x12];
                        if (lVar13 == 0) goto LAB_06183bb8;
                      }
                      if (*(int *)(lVar13 + 0x18) != 0) {
                        fVar21 = (float)FUN_0618a78c(param_5,plVar15[0x11],
                                                     *(undefined4 *)(lVar13 + 0x2c),
                                                     *(undefined4 *)(lVar13 + 0x30),&stack0x00000340
                                                    );
                        if (fVar21 == -32768.0) {
                          return 0;
                        }
                        if (in_stack_00000038._4_4_ != 2) {
                          if (in_stack_00000038._4_4_ == 1) {
                            fVar22 = DAT_010fd060;
                            if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                              fVar22 = 1.0;
                            }
                            fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar22;
                          }
                          else {
                            fVar22 = DAT_010fd060;
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
                      break;
                    }
                    if (uVar9 != 0x313400cb) {
                      if (uVar9 == 0x71c96d92) {
                        uVar7 = FUN_047df77c(in_stack_00000020 + 0x508,
                                             *(undefined8 *)
                                              Method_UnityEngine_InputSystem_InputControlExtensions_BuildPath__
                                            );
                        *(undefined4 *)(in_stack_00000020 + 0x500) = uVar7;
                        return 1;
                      }
                      if (uVar9 != 0x72343fa2) {
                        return 0;
                      }
                      uVar7 = FUN_047e0a18(in_stack_00000020 + 0x2a8,
                                           *(undefined8 *)
                                            Method_UnityEngine_InputSystem_InputControlExtensions_CheckStateIsAtDefault__
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar7;
                      return 1;
                    }
                    if (*(int *)(param_5 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      param_5 = *unaff_x20;
                      plVar15 = *(long **)(param_5 + 0xb8);
                      lVar13 = plVar15[0x12];
                      if (lVar13 == 0) goto LAB_06183bb8;
                    }
                    if (*(int *)(lVar13 + 0x18) == 0) break;
                    iVar8 = *(int *)(lVar13 + 0x24);
                    if (iVar8 == -0x25034fb5) {
                      if (*(int *)(param_5 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        plVar15 = *(long **)(*unaff_x20 + 0xb8);
                      }
                      lVar13 = *plVar15;
                      if (lVar13 == 0) goto LAB_06183bb8;
                      if (*(int *)(lVar13 + 0x18) == 0) break;
                      *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar13 + 0x38);
                      LeanTween__value(in_stack_00000020 + 0x118);
                      lVar13 = *unaff_x20;
                      *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
                      plVar15 = *(long **)(lVar13 + 0xb8);
                      if (*plVar15 == 0) goto LAB_06183bb8;
                      if (*(int *)(*plVar15 + 0x18) != 0) goto LAB_06182c20;
                      break;
                    }
                    uVar11 = FUN_06140374(iVar8,&stack0x00000320,0);
                    if ((uVar11 & 1) == 0) {
                      if (*(int *)(*(long *)
                                    Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                  + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      uVar12 = FUN_0619ed3c(0);
                      lVar13 = *unaff_x20;
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_02df485c(lVar13);
                        lVar13 = *unaff_x20;
                      }
                      lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x90);
                      if (lVar14 == 0) goto LAB_06183bb8;
                      if (*(int *)(lVar14 + 0x18) == 0) break;
                      uVar19 = FUN_05373aa8(0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x88),
                                            *(undefined4 *)(lVar14 + 0x2c),
                                            *(undefined4 *)(lVar14 + 0x30),0);
                      uVar12 = FUN_05362cb4(uVar12,uVar19,0);
                      uVar12 = FUN_038026b0(uVar12,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputControl_GetChildControl<TouchPressControl>__
                                           );
                      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
                      }
                      uVar11 = FUN_06350670(uVar12,0,0);
                      if ((uVar11 & 1) != 0) {
                        return 0;
                      }
                      FUN_0613ff38(iVar8,uVar12,0);
                      *(undefined8 *)(in_stack_00000020 + 0x118) = uVar12;
                      LeanTween__value(in_stack_00000020 + 0x118);
                      lVar13 = *unaff_x20;
                      uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                      uVar19 = *(undefined8 *)(in_stack_00000020 + 0x100);
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar13 = *unaff_x20;
                      }
                      uVar9 = FUN_061405e0(uVar12,uVar19,*(long *)(lVar13 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                      lVar13 = *unaff_x20;
                      *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                      plVar15 = *(long **)(lVar13 + 0xb8);
                      if (*plVar15 == 0) goto LAB_06183bb8;
                      if (*(uint *)(*plVar15 + 0x18) <= uVar9) break;
                    }
                    else {
                      *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000320;
                      LeanTween__value(in_stack_00000020 + 0x118);
                      lVar13 = *unaff_x20;
                      uVar12 = *(undefined8 *)(in_stack_00000020 + 0x118);
                      uVar19 = *(undefined8 *)(in_stack_00000020 + 0x100);
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar13 = *unaff_x20;
                      }
                      uVar9 = FUN_061405e0(uVar12,uVar19,*(long *)(lVar13 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
                      lVar13 = *unaff_x20;
                      *(uint *)(in_stack_00000020 + 0x120) = uVar9;
                      plVar15 = *(long **)(lVar13 + 0xb8);
                      if (*plVar15 == 0) goto LAB_06183bb8;
                      if (*(uint *)(*plVar15 + 0x18) <= uVar9) break;
                    }
                  }
LAB_06182c20:
                  FUN_047e1068(plVar15 + 2,&stack0x00000340,
                               *(undefined8 *)Method_UnityEngine_InputSystem_InputControl_get_Item__
                              );
                  return 1;
                }
                if (*(int *)(param_5 + 0xe4) == 0) {
                  param_5 = thunk_FUN_02df485c();
                  lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                }
                uVar12 = 9;
              }
            }
          }
          uVar7 = FUN_0618a038(param_5,lVar13,uVar12);
          puVar2 = Method_UnityEngine_InputSystem_InputControl_WriteValueFromObjectIntoState__;
          *(undefined4 *)(in_stack_00000020 + 0x500) = uVar7;
          in_stack_00000020 = in_stack_00000020 + 0x508;
          uVar12 = *(undefined8 *)puVar2;
LAB_0617f5d4:
          FUN_047df734(in_stack_00000020,uVar7,uVar12);
          return 1;
        }
        if (*(int *)(param_5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          param_5 = *unaff_x20;
          lVar13 = *(long *)(param_5 + 0xb8);
          lVar14 = *(long *)(lVar13 + 0x88);
          if (lVar14 == 0) goto LAB_06183bb8;
        }
        if (*(uint *)(lVar14 + 0x18) <= unaff_x26) break;
        *(short *)(lVar14 + unaff_x26 * 2 + 0x20) = (short)uVar20;
        if (iVar8 != 1) goto LAB_0617f0fc;
        iVar8 = 1;
        if (uVar9 < 2) {
          if (uVar9 != 0) {
            if (uVar9 != 1) goto LAB_0617f0fc;
            if ((int)uVar20 < 0x65) {
              if (uVar20 == 0x20) {
LAB_0617efc0:
                if (*(int *)(param_5 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  param_5 = *unaff_x20;
                  lVar13 = *(long *)(param_5 + 0xb8);
                }
                lVar13 = *(long *)(lVar13 + 0x90);
                if (lVar13 == 0) goto LAB_06183bb8;
                if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
                in_stack_00000038._4_4_ = 0;
              }
              else {
                if (uVar20 != 0x25) {
LAB_0617f0b0:
                  if (*(int *)(param_5 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    param_5 = *unaff_x20;
                    lVar13 = *(long *)(param_5 + 0xb8);
                  }
                  lVar13 = *(long *)(lVar13 + 0x90);
                  if (lVar13 == 0) goto LAB_06183bb8;
                  if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
                  uVar9 = 1;
                  goto LAB_0617f0ec;
                }
                if (*(int *)(param_5 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  param_5 = *unaff_x20;
                  lVar13 = *(long *)(param_5 + 0xb8);
                }
                lVar13 = *(long *)(lVar13 + 0x90);
                if (lVar13 == 0) goto LAB_06183bb8;
                if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
                in_stack_00000038._4_4_ = 2;
              }
            }
            else {
              if (uVar20 == 0x70) goto LAB_0617efc0;
              if (uVar20 != 0x65) goto LAB_0617f0b0;
              if (*(int *)(param_5 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                param_5 = *unaff_x20;
                lVar13 = *(long *)(param_5 + 0xb8);
              }
              lVar13 = *(long *)(lVar13 + 0x90);
              if (lVar13 == 0) goto LAB_06183bb8;
              if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
              in_stack_00000038._4_4_ = 1;
            }
            *(int *)(lVar13 + (long)(int)unaff_w19 * 0x18 + 0x34) = in_stack_00000038._4_4_;
            if (*(int *)(param_5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              param_5 = *unaff_x20;
            }
            lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
            if (lVar13 == 0) goto LAB_06183bb8;
            if (*(uint *)(lVar13 + 0x18) <= unaff_w19 + 1) break;
            goto LAB_0617f038;
          }
          if (((uVar20 < 0x2f) && ((1L << (unaff_x23 & 0x3f) & 0x680000000000U) != 0)) ||
             (uVar20 - 0x30 < 10)) {
            if (*(int *)(param_5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)(*unaff_x20 + 0xb8);
            }
            lVar13 = *(long *)(lVar13 + 0x90);
            if (lVar13 == 0) goto LAB_06183bb8;
            if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
            uVar9 = 1;
          }
          else {
            iVar8 = *(int *)(param_5 + 0xe4);
            if (uVar20 == 0x22) {
              if (iVar8 == 0) {
                thunk_FUN_02df485c();
                lVar13 = *(long *)(*unaff_x20 + 0xb8);
              }
              lVar13 = *(long *)(lVar13 + 0x90);
              if (lVar13 == 0) goto LAB_06183bb8;
              if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
              uVar9 = 2;
              in_stack_00000038._4_4_ = 0;
              lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
              iVar8 = 1;
              *(undefined4 *)(lVar13 + 0x28) = 2;
              *(uint *)(lVar13 + 0x2c) = uVar6 + 1;
              goto LAB_0617f25c;
            }
            if (uVar20 != 0x23) {
              if (iVar8 == 0) {
                thunk_FUN_02df485c();
                lVar13 = *(long *)(*unaff_x20 + 0xb8);
              }
              lVar13 = *(long *)(lVar13 + 0x90);
              if (lVar13 == 0) goto LAB_06183bb8;
              if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
              lVar14 = lVar13 + (long)(int)unaff_w19 * 0x18;
              uVar9 = *(uint *)(lVar14 + 0x24);
              *(undefined4 *)(lVar14 + 0x28) = 2;
              *(uint *)(lVar14 + 0x2c) = uVar6;
              if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar6 = FUN_061acd28(uVar20,0);
              if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
              *(uint *)(lVar14 + 0x24) = uVar9 * 0x21 ^ uVar6 & 0xffff;
              param_5 = *unaff_x20;
              lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
              if (lVar13 == 0) goto LAB_06183bb8;
              if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
              lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
              in_stack_00000038._4_4_ = 0;
              uVar9 = 2;
              goto LAB_0617f0f0;
            }
            if (iVar8 == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)(*unaff_x20 + 0xb8);
            }
            lVar13 = *(long *)(lVar13 + 0x90);
            if (lVar13 == 0) goto LAB_06183bb8;
            if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
            uVar9 = 4;
          }
          in_stack_00000038._4_4_ = 0;
          lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
          *(uint *)(lVar13 + 0x28) = uVar9;
          *(uint *)(lVar13 + 0x2c) = uVar6;
          iVar8 = 1;
          *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
          goto LAB_0617f25c;
        }
        if (uVar9 == 2) {
          if (uVar20 != 0x22) {
            if (*(int *)(param_5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)(*unaff_x20 + 0xb8);
            }
            lVar13 = *(long *)(lVar13 + 0x90);
            if (lVar13 == 0) goto LAB_06183bb8;
            if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
            puVar18 = (uint *)(lVar13 + (long)(int)unaff_w19 * 0x18 + 0x24);
            uVar9 = *puVar18;
            if (*(int *)(*(long *)Method_System_Net_HttpWebRequest_set_Method__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar6 = FUN_061acd28(uVar20,0);
            if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
            *puVar18 = uVar9 * 0x21 ^ uVar6 & 0xffff;
            param_5 = *unaff_x20;
            lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
            if (lVar13 == 0) goto LAB_06183bb8;
            if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
            uVar9 = 2;
            lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
            goto LAB_0617f0f0;
          }
          if (*(int *)(param_5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar13 = *(long *)(*unaff_x20 + 0xb8);
          }
          lVar13 = *(long *)(lVar13 + 0x90);
          if (lVar13 == 0) goto LAB_06183bb8;
          unaff_w19 = unaff_w19 + 1;
          if (*(uint *)(lVar13 + 0x18) <= unaff_w19) break;
          lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
          iVar8 = 2;
LAB_0617f168:
          in_stack_00000038._4_4_ = 0;
          uVar9 = 0;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = 0;
          goto LAB_0617f25c;
        }
        if (uVar9 == 4) {
          if (uVar20 != 0x20) {
            if (*(int *)(param_5 + 0xe4) != 0) goto LAB_0617eec8;
            thunk_FUN_02df485c();
            param_5 = *unaff_x20;
            goto code_r0x0617eec0;
          }
          if (*(int *)(param_5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            param_5 = *unaff_x20;
            lVar13 = *(long *)(param_5 + 0xb8);
          }
          lVar13 = *(long *)(lVar13 + 0x90);
          if (lVar13 == 0) goto LAB_06183bb8;
          if (*(uint *)(lVar13 + 0x18) <= unaff_w19 + 1) break;
          in_stack_00000038._4_4_ = 0;
LAB_0617f038:
          unaff_w19 = unaff_w19 + 1;
          uVar9 = 0;
          iVar8 = 2;
          lVar13 = lVar13 + (long)(int)unaff_w19 * 0x18;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = 0;
        }
      } while( true );
    }
    goto LAB_06183b5c;
  }
LAB_06183bb8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_06182658:
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
  }
  lVar14 = *(long *)(lVar13 + 0xb8);
  lVar16 = *(long *)(lVar14 + 0x90);
  if (lVar16 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar16 + 0x18) <= (int)uVar9) {
LAB_0618274c:
    FUN_047e17c0(in_stack_00000020 + 0x5a0,*(undefined8 *)(in_stack_00000020 + 0x598),
                 *(undefined8 *)Method_UnityEngine_InputSystem_InputControl_TryGetChildControl__);
    return 1;
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
    lVar14 = *(long *)(lVar13 + 0xb8);
    lVar16 = *(long *)(lVar14 + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x20) == 0) goto LAB_0618274c;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
    lVar14 = *(long *)(lVar13 + 0xb8);
    lVar16 = *(long *)(lVar14 + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x20) == 0x2d2c87) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      lVar13 = thunk_FUN_02df485c();
      lVar14 = *(long *)(*unaff_x20 + 0xb8);
      lVar16 = *(long *)(lVar14 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar16 = lVar16 + (long)(int)uVar9 * 0x18;
    fVar21 = (float)FUN_0618a78c(lVar13,*(undefined8 *)(lVar14 + 0x88),
                                 *(undefined4 *)(lVar16 + 0x2c),*(undefined4 *)(lVar16 + 0x30),
                                 &stack0x00000340);
    lVar13 = *unaff_x20;
    *(bool *)(in_stack_00000020 + 0x5c8) = fVar21 != 0.0;
  }
  uVar9 = uVar9 + 1;
  goto LAB_06182658;
LAB_06181a78:
  if (*(int *)(param_5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    param_5 = *unaff_x20;
  }
  lVar13 = *(long *)(param_5 + 0xb8);
  lVar14 = *(long *)(lVar13 + 0x90);
  if (lVar14 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
    return 1;
  }
  if (*(int *)(param_5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    param_5 = *unaff_x20;
    lVar13 = *(long *)(param_5 + 0xb8);
    lVar14 = *(long *)(lVar13 + 0x90);
    if (lVar14 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar14 + (long)(int)uVar9 * 0x18 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    param_5 = *unaff_x20;
    lVar13 = *(long *)(param_5 + 0xb8);
    lVar14 = *(long *)(lVar13 + 0x90);
    if (lVar14 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
  iVar8 = *(int *)(lVar14 + (long)(int)uVar9 * 0x18 + 0x20);
  if (iVar8 == 0x5f4ec60) {
    if (*(int *)(param_5 + 0xe4) == 0) {
      param_5 = thunk_FUN_02df485c();
      lVar13 = *(long *)(*unaff_x20 + 0xb8);
      lVar14 = *(long *)(lVar13 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar14 = lVar14 + (long)(int)uVar9 * 0x18;
    fVar22 = (float)FUN_0618a78c(param_5,*(undefined8 *)(lVar13 + 0x88),
                                 *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                 &stack0x00000340);
    if (fVar22 == -32768.0) {
      return 0;
    }
    param_5 = *unaff_x20;
    if (*(int *)(param_5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      param_5 = *unaff_x20;
    }
    lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
    if (lVar13 == 0) goto LAB_06183bb8;
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_06183b5c;
    iVar8 = *(int *)(lVar13 + (long)(int)uVar9 * 0x18 + 0x34);
    if (iVar8 == 0) {
      fVar27 = fVar21;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar27 = 1.0;
      }
      fVar22 = fVar22 * fVar27;
UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume___ctor:
      *(float *)(in_stack_00000020 + 0x38c) = fVar22;
    }
    else {
      if (iVar8 == 1) {
        fVar27 = fVar21;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar27 = 1.0;
        }
        fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar27;
        goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume___ctor;
      }
      if (iVar8 == 2) {
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
  else if (iVar8 == 0x28989b) {
    if (*(int *)(param_5 + 0xe4) == 0) {
      param_5 = thunk_FUN_02df485c();
      lVar13 = *(long *)(*unaff_x20 + 0xb8);
      lVar14 = *(long *)(lVar13 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar14 = lVar14 + (long)(int)uVar9 * 0x18;
    fVar22 = (float)FUN_0618a78c(param_5,*(undefined8 *)(lVar13 + 0x88),
                                 *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                 &stack0x00000340);
    if (fVar22 == -32768.0) {
      return 0;
    }
    param_5 = *unaff_x20;
    if (*(int *)(param_5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      param_5 = *unaff_x20;
    }
    lVar13 = *(long *)(*(long *)(param_5 + 0xb8) + 0x90);
    if (lVar13 == 0) goto LAB_06183bb8;
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_06183b5c;
    iVar8 = *(int *)(lVar13 + (long)(int)uVar9 * 0x18 + 0x34);
    if (iVar8 == 0) {
      fVar27 = fVar21;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar27 = 1.0;
      }
      fVar22 = fVar22 * fVar27;
LAB_06181cec:
      *(float *)(in_stack_00000020 + 0x388) = fVar22;
    }
    else {
      if (iVar8 == 1) {
        fVar27 = fVar21;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar27 = 1.0;
        }
        fVar22 = *(float *)(in_stack_00000020 + 0x210) * fVar22 * fVar27;
        goto LAB_06181cec;
      }
      if (iVar8 == 2) {
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
  uVar9 = uVar9 + 1;
  goto LAB_06181a78;
LAB_061837a8:
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
  }
  lVar16 = *(long *)(lVar13 + 0xb8);
  lVar14 = *(long *)(lVar16 + 0x90);
  if (lVar14 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
LAB_06183b60:
    if (*(int *)(in_stack_00000020 + 0x6bc) == -1) {
      return 0;
    }
    lVar14 = *plVar15;
    if (lVar14 != 0) {
      uVar12 = *(undefined8 *)(lVar14 + 0x88);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar13 = *unaff_x20;
      }
      uVar7 = FUN_0614081c(uVar12,lVar14,*(long *)(lVar13 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar7;
      *(undefined4 *)(in_stack_00000020 + 0x65c) = 1;
      return 1;
    }
    goto LAB_06183bb8;
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
    lVar16 = *(long *)(lVar13 + 0xb8);
    lVar14 = *(long *)(lVar16 + 0x90);
    if (lVar14 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar14 + (long)(int)uVar9 * 0x18 + 0x20) == 0) goto LAB_06183b60;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
    lVar16 = *(long *)(lVar13 + 0xb8);
    lVar14 = *(long *)(lVar16 + 0x90);
    if (lVar14 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
  iVar10 = *(int *)(lVar14 + (long)(int)uVar9 * 0x18 + 0x20);
  iVar8 = -0x80000000;
  if (iVar10 < 0x2be0e8) {
    if (iVar10 != -0x3b198217) {
      if (iVar10 != 0x22d74b) {
        if (iVar10 != 0x2be0e7) {
          return 0;
        }
        lVar16 = *plVar15;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
          if (lVar14 == 0) goto LAB_06183bb8;
        }
        if (uVar9 < *(uint *)(lVar14 + 0x18)) {
          lVar13 = FUN_061a3ee0(lVar16,*(undefined4 *)(lVar14 + (long)(int)uVar9 * 0x18 + 0x24),1,
                                &stack0x00000298,0);
          *plVar15 = lVar13;
          LeanTween__value(plVar15,lVar13);
          iVar8 = 0;
          goto LAB_06183980;
        }
        goto LAB_06183b5c;
      }
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar16 = *(long *)(*unaff_x20 + 0xb8);
        lVar14 = *(long *)(lVar16 + 0x90);
        if (lVar14 == 0) goto LAB_06183bb8;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
      lVar14 = lVar14 + (long)(int)uVar9 * 0x18;
      iVar10 = FUN_0618a6e0(in_stack_00000020,*(undefined8 *)(lVar16 + 0x88),
                            *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                            lVar16 + 0x98);
      if (iVar10 != 3) {
        return 0;
      }
      lVar13 = *unaff_x20;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar13 = *unaff_x20;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x98);
      if (lVar13 == 0) goto LAB_06183bb8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_06183b5c;
      iVar10 = iVar8;
      if (*(float *)(lVar13 + 0x20) != INFINITY) {
        iVar10 = (int)*(float *)(lVar13 + 0x20);
      }
      *(int *)(in_stack_00000020 + 0x6bc) = iVar10;
      if (*(char *)(in_stack_00000020 + 0x469) != '\0') {
        lVar13 = FUN_06178390(in_stack_00000020);
        lVar14 = *unaff_x20;
        uVar7 = *(undefined4 *)(in_stack_00000020 + 0x4a4);
        uVar12 = *(undefined8 *)(in_stack_00000020 + 0x6b0);
        uVar23 = *(undefined4 *)(in_stack_00000020 + 0x6bc);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar14);
          lVar14 = *unaff_x20;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x98);
        if (lVar14 == 0) goto LAB_06183bb8;
        if ((*(uint *)(lVar14 + 0x18) < 2) || (*(uint *)(lVar14 + 0x18) == 2)) goto LAB_06183b5c;
        if (lVar13 == 0) goto LAB_06183bb8;
        iVar10 = iVar8;
        if (*(float *)(lVar14 + 0x24) != INFINITY) {
          iVar10 = (int)*(float *)(lVar14 + 0x24);
        }
        if (*(float *)(lVar14 + 0x28) != INFINITY) {
          iVar8 = (int)*(float *)(lVar14 + 0x28);
        }
        FUN_061a2050(lVar13,uVar7,uVar12,uVar23,iVar10,iVar8,0);
      }
    }
  }
  else if (iVar10 == 0x2d2c87) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      lVar13 = thunk_FUN_02df485c();
      lVar16 = *(long *)(*unaff_x20 + 0xb8);
      lVar14 = *(long *)(lVar16 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar14 = lVar14 + (long)(int)uVar9 * 0x18;
    fVar21 = (float)FUN_0618a78c(lVar13,*(undefined8 *)(lVar16 + 0x88),
                                 *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                 &stack0x00000340);
    *(bool *)(in_stack_00000020 + 0x1d1) = fVar21 != 0.0;
  }
  else if (iVar10 == 0x4e3381d) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      lVar13 = thunk_FUN_02df485c();
      lVar16 = *(long *)(*unaff_x20 + 0xb8);
      lVar14 = *(long *)(lVar16 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar14 = lVar14 + (long)(int)uVar9 * 0x18;
    uVar7 = FUN_0618a494(lVar13,*(undefined8 *)(lVar16 + 0x88),*(undefined4 *)(lVar14 + 0x2c),
                         *(undefined4 *)(lVar14 + 0x30));
    *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar7;
  }
  else {
    if (iVar10 != 0x505d3fe) {
      return 0;
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      lVar13 = thunk_FUN_02df485c();
      lVar16 = *(long *)(*unaff_x20 + 0xb8);
      lVar14 = *(long *)(lVar16 + 0x90);
      if (lVar14 == 0) goto LAB_06183bb8;
    }
    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_06183b5c;
    fVar21 = (float)FUN_0618a78c(lVar13,*(undefined8 *)(lVar16 + 0x88),
                                 *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),
                                 &stack0x00000340);
    if (fVar21 != INFINITY) {
      iVar8 = (int)fVar21;
    }
    if (iVar8 == -0x8000) {
      return 0;
    }
    if ((*plVar15 == 0) || (lVar13 = FUN_061a2bf0(*plVar15,0), lVar13 == 0)) goto LAB_06183bb8;
    if (*(int *)(lVar13 + 0x18) + -1 < iVar8) {
      return 0;
    }
LAB_06183980:
    *(int *)(in_stack_00000020 + 0x6bc) = iVar8;
  }
  lVar13 = *unaff_x20;
  uVar9 = uVar9 + 1;
  goto LAB_061837a8;
LAB_061810c8:
  lVar13 = *unaff_x20;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
  }
  lVar14 = *(long *)(lVar13 + 0xb8);
  lVar16 = *(long *)(lVar14 + 0x90);
  if (lVar16 == 0) goto LAB_06183bb8;
  if (*(int *)(lVar16 + 0x18) <= (int)uVar9) {
LAB_061820dc:
    uVar9 = (uint)*(byte *)(in_stack_00000020 + 0x503);
    if ((uint)uVar11 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
      uVar9 = (uint)(uVar11 >> 0x18);
    }
    FUN_06152bf0(uVar24,uVar7,fVar21,uVar23,&stack0x00000280,(uint)uVar11 & 0xffffff | uVar9 << 0x18
                 ,0);
    puVar2 = Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<bool>__;
    *(undefined8 *)(in_stack_00000020 + 0x168) = 0;
    *(undefined8 *)(in_stack_00000020 + 0x160) = 0;
    uVar12 = *(undefined8 *)puVar2;
    *(undefined4 *)(in_stack_00000020 + 0x170) = 0;
    FUN_047dfe4c(in_stack_00000020 + 0x568,&stack0x00000340,uVar12);
    return 1;
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
    lVar14 = *(long *)(lVar13 + 0xb8);
    lVar16 = *(long *)(lVar14 + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
  if (*(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x20) == 0) goto LAB_061820dc;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar13 = *unaff_x20;
    lVar14 = *(long *)(lVar13 + 0xb8);
    lVar16 = *(long *)(lVar14 + 0x90);
    if (lVar16 == 0) goto LAB_06183bb8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
  iVar8 = *(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x20);
  if (iVar8 == -0x7fd3848f) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)(*unaff_x20 + 0xb8);
      lVar16 = *(long *)(lVar14 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar9) {
LAB_06183b5c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar16 = lVar16 + (long)(int)uVar9 * 0x18;
    iVar8 = FUN_0618a6e0(in_stack_00000020,*(undefined8 *)(lVar14 + 0x88),
                         *(undefined4 *)(lVar16 + 0x2c),*(undefined4 *)(lVar16 + 0x30),lVar14 + 0x98
                        );
    if (iVar8 != 4) {
      return 0;
    }
    lVar13 = *unaff_x20;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar13 = *unaff_x20;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x98);
    if (lVar13 == 0) goto LAB_06183bb8;
    uVar6 = *(uint *)(lVar13 + 0x18);
    if ((((uVar6 == 0) || (uVar6 == 1)) || (uVar6 < 3)) || (uVar6 == 3)) goto LAB_06183b5c;
    uVar28 = *(undefined4 *)(lVar13 + 0x20);
    uVar29 = *(undefined4 *)(lVar13 + 0x24);
    uVar31 = *(undefined4 *)(lVar13 + 0x28);
    uVar32 = *(undefined4 *)(lVar13 + 0x2c);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_06152920(uVar28,uVar29,uVar31,uVar32,&stack0x00000330,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar24 = FUN_06152a10(uVar24,0);
  }
  else if (iVar8 == 0x4e3381d) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      lVar13 = thunk_FUN_02df485c();
      lVar14 = *(long *)(*unaff_x20 + 0xb8);
      lVar16 = *(long *)(lVar14 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
    lVar16 = lVar16 + (long)(int)uVar9 * 0x18;
LAB_06181200:
    uVar11 = FUN_0618a494(lVar13,*(undefined8 *)(lVar14 + 0x88),*(undefined4 *)(lVar16 + 0x2c),
                          *(undefined4 *)(lVar16 + 0x30));
    uVar11 = uVar11 & 0xffffffff;
  }
  else if (iVar8 == 0x292f75) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar13 = *unaff_x20;
      lVar14 = *(long *)(lVar13 + 0xb8);
      lVar16 = *(long *)(lVar14 + 0x90);
      if (lVar16 == 0) goto LAB_06183bb8;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_06183b5c;
    if (*(int *)(lVar16 + (long)(int)uVar9 * 0x18 + 0x28) == 4) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        lVar13 = thunk_FUN_02df485c();
        lVar14 = *(long *)(*unaff_x20 + 0xb8);
        lVar16 = *(long *)(lVar14 + 0x90);
        if (lVar16 == 0) goto LAB_06183bb8;
      }
      if (*(int *)(lVar16 + 0x18) != 0) goto LAB_06181200;
      goto LAB_06183b5c;
    }
  }
  uVar9 = uVar9 + 1;
  goto LAB_061810c8;
}


