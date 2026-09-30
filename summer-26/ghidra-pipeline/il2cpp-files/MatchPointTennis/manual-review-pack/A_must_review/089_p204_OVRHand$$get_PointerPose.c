/*
FUNCTION_NAME: OVRHand$$get_PointerPose
ENTRY_POINT: 07cf1b94
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRHand__get_PointerPose(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x29;
  float fVar12;
  undefined8 *in_stack_00000008;
  
  if (*unaff_x27 != 0) {
    uVar6 = FUN_04d7a1ac(*unaff_x27,*(undefined8 *)PTR_DAT_09f52778);
                    /* catch() { ... } // from try @ 07cf1b80 with catch @ 07cf1bac */
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    /* try { // try from 07cf1bbc to 07df1bc3 has its CatchHandler @ 07cf1bd8 */
      thunk_FUN_044a54b4(*unaff_x21);
    }
                    /* try { // try from 07cf1bc4 to 07df1bcf has its CatchHandler @ 07cf1a60 */
    uVar7 = FUN_0952fedc(uVar6,0);
                    /* try { // try from 07cf1bd0 to 07df1bd7 has its CatchHandler @ 07cf1bd8 */
    if ((uVar7 & 1) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07cf1bbc with catch @ 07cf1bd8
                       catch(type#2 @ 00000000) { ... } // from try @ 07cf1bd0 with catch @ 07cf1bd8
                        */
      if (*unaff_x27 == 0) goto thunk_FUN_04447e44;
      uVar6 = FUN_04d7a1ac(*unaff_x27,*(undefined8 *)PTR_DAT_09f52778);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x21);
      }
      FUN_09530d4c(uVar6,0);
    }
    if (*unaff_x27 != 0) {
      uVar6 = FUN_04d7a1ac(*unaff_x27,*(undefined8 *)PTR_DAT_09f52780);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x21);
      }
      uVar7 = FUN_0952fedc(uVar6,0);
      if ((uVar7 & 1) != 0) {
        if (*unaff_x27 == 0) goto thunk_FUN_04447e44;
        uVar6 = FUN_04d7a1ac(*unaff_x27,*(undefined8 *)PTR_DAT_09f52780);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*unaff_x21);
        }
        FUN_09530d4c(uVar6,0);
      }
      if (*unaff_x27 != 0) {
        lVar8 = FUN_04d7a1ac(*unaff_x27,*(undefined8 *)PTR_DAT_09f30768);
        *unaff_x24 = lVar8;
        thunk_FUN_044bb4b4();
        if (*unaff_x24 != 0) {
          FUN_09526088(*unaff_x24,*(undefined8 *)PTR_DAT_09f527a8,0);
          lVar8 = Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest__ConstructHeaders
                            (*unaff_x24,0);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*unaff_x21);
          }
          uVar7 = FUN_09531730(lVar8,0,0);
          if ((uVar7 & 1) != 0) {
            if (lVar8 == 0) goto thunk_FUN_04447e44;
            *(undefined1 *)(lVar8 + 0x5b) = 0;
          }
          if (*unaff_x24 != 0) {
            FUN_094c10f0(DAT_01c763b8,*unaff_x24,0);
            if (*unaff_x24 != 0) {
              FUN_094c1d20(0,0,0x3f000000,0x3f800000,*unaff_x24,0);
              lVar8 = *unaff_x24;
              if (lVar8 != 0) {
                uVar2 = FUN_094c134c(lVar8,0);
                lVar10 = *unaff_x22;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *unaff_x29) {
                      puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                      goto FUN_07cf1db0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar7 != 0);
                }
                puVar9 = (undefined8 *)FUN_044822ac();
FUN_07cf1db0:
                uVar3 = (*(code *)*puVar9)();
                uVar4 = FUN_0952bd10(uVar3,0);
                lVar10 = *unaff_x22;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *unaff_x29) {
                      puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                      goto LAB_07cf1e1c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar7 != 0);
                }
                puVar9 = (undefined8 *)FUN_044822ac();
LAB_07cf1e1c:
                uVar3 = (*(code *)*puVar9)();
                uVar5 = FUN_0952bd10(uVar3,0);
                FUN_094c1400(lVar8,uVar5 | uVar2 & (uVar4 ^ 0xffffffff),0);
                puVar1 = PTR_DAT_09f52788;
                lVar8 = *(long *)(unaff_x20 + 0x88);
                if (lVar8 != 0) {
                  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_07cf2440;
                  if (*(long *)(unaff_x20 + 0x60) != 0) {
                    FUN_094c2340(*(long *)(unaff_x20 + 0x60),*(undefined8 *)(lVar8 + 0x20),0);
                    if (*(char *)(unaff_x20 + 0x71) == '\0') {
                      if (*unaff_x24 == 0) goto thunk_FUN_04447e44;
                      FUN_094c1d20(0,0,0x3f800000,0x3f800000,*unaff_x24,0);
                    }
                    lVar8 = *unaff_x22;
                    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar7 != 0) {
                      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x36) * 0x10 + 0x138);
                          goto LAB_07cf1eec;
                        }
                        uVar7 = uVar7 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_044822ac();
LAB_07cf1eec:
                    lVar8 = (*(code *)*puVar9)();
                    if (lVar8 == 0) {
                      uVar6 = FUN_095259a0();
                      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*unaff_x21);
                      }
                      lVar8 = FUN_04eb2a30(uVar6,*(undefined8 *)PTR_DAT_09f1e7c0);
                    }
                    else {
                      lVar8 = *unaff_x22;
                      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar7 != 0) {
                        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x36) * 0x10 + 0x138);
                            goto LAB_07cf1f88;
                          }
                          uVar7 = uVar7 - 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_044822ac();
LAB_07cf1f88:
                      lVar8 = (*(code *)*puVar9)();
                      uVar6 = FUN_095259a0();
                      if (lVar8 == 0) goto thunk_FUN_04447e44;
                      lVar8 = (**(code **)(lVar8 + 0x18))
                                        (*(undefined8 *)(lVar8 + 0x40),uVar6,1,
                                         *(undefined8 *)(lVar8 + 0x28));
                    }
                    *unaff_x26 = lVar8;
                    thunk_FUN_044bb4b4();
                    if (*unaff_x26 != 0) {
                      thunk_FUN_09530084(*unaff_x26,*(undefined8 *)PTR_DAT_09f527a0,0);
                      if (*unaff_x26 != 0) {
                        lVar8 = FUN_0952a094(*unaff_x26,0);
                        if (*(char *)(unaff_x20 + 0x10) == '\0') {
                          if (unaff_x25 == 0) goto thunk_FUN_04447e44;
                          uVar6 = FUN_0952a094();
                        }
                        else {
                          if (*(long *)(unaff_x20 + 0x18) == 0) goto thunk_FUN_04447e44;
                          uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x20);
                        }
                        if (lVar8 != 0) {
                          FUN_0953ab70(lVar8,uVar6,0);
                          if (*unaff_x26 != 0) {
                            uVar6 = FUN_04d7a1ac(*unaff_x26,*(undefined8 *)PTR_DAT_09f52778);
                            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                              thunk_FUN_044a54b4(*unaff_x21);
                            }
                            uVar7 = FUN_0952fedc(uVar6,0);
                            if ((uVar7 & 1) != 0) {
                              if (*unaff_x26 == 0) goto thunk_FUN_04447e44;
                              uVar6 = FUN_04d7a1ac(*unaff_x26,*(undefined8 *)PTR_DAT_09f52778);
                              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                                thunk_FUN_044a54b4(*unaff_x21);
                              }
                              FUN_09530d4c(uVar6,0);
                            }
                            if (*unaff_x26 != 0) {
                              uVar6 = FUN_04d7a1ac(*unaff_x26,*(undefined8 *)PTR_DAT_09f52780);
                              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                                thunk_FUN_044a54b4(*unaff_x21);
                              }
                              uVar7 = FUN_0952fedc(uVar6,0);
                              if ((uVar7 & 1) != 0) {
                                if (*unaff_x26 == 0) goto thunk_FUN_04447e44;
                                uVar6 = FUN_04d7a1ac(*unaff_x26,*(undefined8 *)PTR_DAT_09f52780);
                                if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                                  thunk_FUN_044a54b4(*unaff_x21);
                                }
                                FUN_09530d4c(uVar6,0);
                              }
                              if (*unaff_x26 != 0) {
                                lVar8 = FUN_04d7a1ac(*unaff_x26,*(undefined8 *)PTR_DAT_09f30768);
                                *unaff_x23 = lVar8;
                                thunk_FUN_044bb4b4();
                                if (*unaff_x23 != 0) {
                                  FUN_09526088(*unaff_x23,*(undefined8 *)PTR_DAT_09f527a8,0);
                                  lVar8 = Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest__ConstructHeaders
                                                    (*unaff_x23,0);
                                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                                    thunk_FUN_044a54b4(*unaff_x21);
                                  }
                                  uVar7 = FUN_09531730(lVar8,0,0);
                                  if ((uVar7 & 1) != 0) {
                                    if (lVar8 == 0) goto thunk_FUN_04447e44;
                                    *(undefined1 *)(lVar8 + 0x5b) = 0;
                                  }
                                  if (*unaff_x24 != 0) {
                                    lVar8 = *unaff_x23;
                                    fVar12 = (float)FUN_094c103c(*unaff_x24,0);
                                    if (lVar8 != 0) {
                                      FUN_094c10f0(fVar12 + 1.0,lVar8,0);
                                      if (*unaff_x23 != 0) {
                                        FUN_094c1d20(0x3f000000,0,0x3f000000,0x3f800000,*unaff_x23,0
                                                    );
                                        if (*unaff_x23 != 0) {
                                          FUN_094c188c(*unaff_x23,2,0);
                                          lVar8 = *unaff_x22;
                                          lVar10 = *unaff_x23;
                                          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                          if (uVar7 != 0) {
                                            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                                                puVar9 = (undefined8 *)
                                                         (lVar8 + (long)(*piVar11 + 0xc) * 0x10 +
                                                         0x138);
                                                goto LAB_07cf2270;
                                              }
                                              uVar7 = uVar7 - 1;
                                              piVar11 = piVar11 + 4;
                                            } while (uVar7 != 0);
                                          }
                                          puVar9 = (undefined8 *)FUN_044822ac();
LAB_07cf2270:
                                          (*(code *)*puVar9)();
                                          if (lVar10 != 0) {
                                            FUN_094c1704(lVar10,0);
                                            lVar8 = *unaff_x23;
                                            if (lVar8 != 0) {
                                              uVar2 = FUN_094c134c(lVar8,0);
                                              lVar10 = *unaff_x22;
                                              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                              if (uVar7 != 0) {
                                                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                                                    puVar9 = (undefined8 *)
                                                             (lVar10 + (long)(*piVar11 + 2) * 0x10 +
                                                             0x138);
                                                    goto LAB_07cf22f4;
                                                  }
                                                  uVar7 = uVar7 - 1;
                                                  piVar11 = piVar11 + 4;
                                                } while (uVar7 != 0);
                                              }
                                              puVar9 = (undefined8 *)FUN_044822ac();
LAB_07cf22f4:
                                              uVar3 = (*(code *)*puVar9)();
                                              uVar4 = FUN_0952bd10(uVar3,0);
                                              lVar10 = *unaff_x22;
                                              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                              if (uVar7 != 0) {
                                                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                                                    puVar9 = (undefined8 *)
                                                             (lVar10 + (long)(*piVar11 + 4) * 0x10 +
                                                             0x138);
                                                    goto LAB_07cf2360;
                                                  }
                                                  uVar7 = uVar7 - 1;
                                                  piVar11 = piVar11 + 4;
                                                } while (uVar7 != 0);
                                              }
                                              puVar9 = (undefined8 *)FUN_044822ac();
LAB_07cf2360:
                                              uVar3 = (*(code *)*puVar9)();
                                              uVar5 = FUN_0952bd10(uVar3,0);
                                              FUN_094c1400(lVar8,uVar5 | uVar2 & (uVar4 ^ 0xffffffff
                                                                                 ),0);
                                              lVar8 = *(long *)(unaff_x20 + 0x50);
                                              if (*(char *)(unaff_x20 + 0x71) == '\0') {
                                                lVar10 = *(long *)(unaff_x20 + 0x98);
                                                if (lVar10 != 0) {
                                                  if (*(int *)(lVar10 + 0x18) == 0)
                                                  goto LAB_07cf2440;
                                                  if (lVar8 != 0) {
                                                    FUN_094c2340(lVar8,*(undefined8 *)
                                                                        (lVar10 + 0x20),0);
                                                    if (*unaff_x23 != 0) {
                                                      FUN_094c1d20(0,0,0x3f800000,0x3f800000,
                                                                   *unaff_x23,0);
                                                      goto LAB_07cf2404;
                                                    }
                                                  }
                                                }
                                              }
                                              else {
                                                lVar10 = *(long *)(unaff_x20 + 0x88);
                                                if (lVar10 != 0) {
                                                  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_07cf2440:
                    /* WARNING: Subroutine does not return */
                                                    FUN_04447e4c();
                                                  }
                                                  if (lVar8 != 0) {
                                                    FUN_094c2340(lVar8,*(undefined8 *)
                                                                        (lVar10 + 0x20),0);
LAB_07cf2404:
                                                    uVar6 = FUN_095259a0();
                                                    *in_stack_00000008 = uVar6;
                                                    thunk_FUN_044bb4b4(in_stack_00000008,uVar6);
                                                    return;
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
thunk_FUN_04447e44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


