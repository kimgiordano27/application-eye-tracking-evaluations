/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetFacingDirection
ENTRY_POINT: 04c53c84
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetFacingDirection(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  
  *(undefined1 *)(unaff_x21 + 0x20) = in_w8;
  *(undefined8 *)(unaff_x21 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x28) = *unaff_x25;
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  puVar1 = PTR_DAT_065e01b8;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e01b8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_04c53cf0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_04c53cf0:
    (*(code *)*puVar3)();
                    /* try { // try from 04c53d04 to 04d53d2b has its CatchHandler @ 04c53f24 */
    plVar8 = *(long **)(unaff_x19 + 0x50);
    lVar4 = thunk_FUN_02cea894(*unaff_x23);
    FUN_04c2c1d8(lVar4,0);
    if (lVar4 != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_065e6df8;
      *(undefined1 *)(lVar4 + 0x20) = 1;
      *(undefined8 *)(lVar4 + 0x10) = uVar9;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x28) = *unaff_x25;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_04c53d94;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c53d94:
        (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
        plVar8 = *(long **)(unaff_x19 + 0x50);
        lVar4 = thunk_FUN_02cea894(*unaff_x23);
        FUN_04c2c1d8(lVar4,0);
        puVar2 = PTR_DAT_065e0200;
        if (lVar4 != 0) {
          uVar9 = *(undefined8 *)PTR_DAT_065e6e00;
          *(undefined1 *)(lVar4 + 0x20) = 1;
          *(undefined8 *)(lVar4 + 0x10) = uVar9;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
          *(undefined8 *)(lVar4 + 0x30) = 0;
          if (plVar8 != (long *)0x0) {
            lVar5 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                  goto LAB_04c53e40;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c53e40:
            (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
            plVar8 = *(long **)(unaff_x19 + 0x50);
            lVar4 = thunk_FUN_02cea894(*unaff_x23);
            FUN_04c2c1d8(lVar4,0);
            if (lVar4 != 0) {
              uVar9 = *(undefined8 *)PTR_DAT_065e6fd8;
              *(undefined1 *)(lVar4 + 0x20) = 0;
              *(undefined8 *)(lVar4 + 0x10) = uVar9;
              *(undefined8 *)(lVar4 + 0x18) = 0;
              *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
              *(undefined8 *)(lVar4 + 0x30) = 0;
              if (plVar8 != (long *)0x0) {
                lVar5 = *plVar8;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                      goto LAB_04c53ee0;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c53ee0:
                (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                plVar8 = *(long **)(unaff_x19 + 0x50);
                lVar4 = thunk_FUN_02cea894(*unaff_x23);
                FUN_04c2c1d8(lVar4,0);
                if (lVar4 != 0) {
                  uVar9 = *(undefined8 *)PTR_DAT_065e6ef8;
                  *(undefined1 *)(lVar4 + 0x20) = 0;
                  *(undefined8 *)(lVar4 + 0x10) = uVar9;
                  *(undefined8 *)(lVar4 + 0x18) = 0;
                  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
                  *(undefined8 *)(lVar4 + 0x30) = 0;
                  if (plVar8 != (long *)0x0) {
                    lVar5 = *plVar8;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                          goto LAB_04c53f80;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c53f80:
                    (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                    plVar8 = *(long **)(unaff_x19 + 0x50);
                    lVar4 = thunk_FUN_02cea894(*unaff_x23);
                    FUN_04c2c1d8(lVar4,0);
                    if (lVar4 != 0) {
                      uVar9 = *(undefined8 *)PTR_DAT_065e6f50;
                      *(undefined1 *)(lVar4 + 0x20) = 0;
                      *(undefined8 *)(lVar4 + 0x10) = uVar9;
                      *(undefined8 *)(lVar4 + 0x18) = 0;
                      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
                      *(undefined8 *)(lVar4 + 0x30) = 0;
                      if (plVar8 != (long *)0x0) {
                        lVar5 = *plVar8;
                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        if (uVar6 != 0) {
                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                              goto LAB_04c54020;
                            }
                            uVar6 = uVar6 - 1;
                            piVar7 = piVar7 + 4;
                          } while (uVar6 != 0);
                        }
                        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c54020:
                        (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                        plVar8 = *(long **)(unaff_x19 + 0x50);
                        lVar4 = thunk_FUN_02cea894(*unaff_x23);
                        FUN_04c2c1d8(lVar4,0);
                        if (lVar4 != 0) {
                          uVar9 = *(undefined8 *)PTR_DAT_065e6ac0;
                          *(undefined1 *)(lVar4 + 0x20) = 0;
                          *(undefined8 *)(lVar4 + 0x10) = uVar9;
                          *(undefined8 *)(lVar4 + 0x18) = 0;
                          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
                          *(undefined8 *)(lVar4 + 0x30) = 0;
                          if (plVar8 != (long *)0x0) {
                            lVar5 = *plVar8;
                            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                            if (uVar6 != 0) {
                              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                  puVar3 = (undefined8 *)
                                           (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                  goto LAB_04c540c0;
                                }
                                uVar6 = uVar6 - 1;
                                piVar7 = piVar7 + 4;
                              } while (uVar6 != 0);
                            }
                            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c540c0:
                            (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                            plVar8 = *(long **)(unaff_x19 + 0x50);
                            lVar4 = thunk_FUN_02cea894(*unaff_x23);
                            FUN_04c2c1d8(lVar4,0);
                            if (lVar4 != 0) {
                              uVar9 = *(undefined8 *)PTR_DAT_065e6ac8;
                              *(undefined1 *)(lVar4 + 0x20) = 0;
                              *(undefined8 *)(lVar4 + 0x10) = uVar9;
                              *(undefined8 *)(lVar4 + 0x18) = 0;
                              *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
                              *(undefined8 *)(lVar4 + 0x30) = 0;
                              if (plVar8 != (long *)0x0) {
                                lVar5 = *plVar8;
                                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                if (uVar6 != 0) {
                                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                      puVar3 = (undefined8 *)
                                               (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                      goto LAB_04c54160;
                                    }
                                    uVar6 = uVar6 - 1;
                                    piVar7 = piVar7 + 4;
                                  } while (uVar6 != 0);
                                }
                                puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c54160:
                                (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                                plVar8 = *(long **)(unaff_x19 + 0x50);
                                lVar4 = thunk_FUN_02cea894(*unaff_x23);
                                FUN_04c2c1d8(lVar4,0);
                                if (lVar4 != 0) {
                                  uVar9 = *(undefined8 *)PTR_DAT_065dfac0;
                                  *(undefined1 *)(lVar4 + 0x20) = 0;
                                  *(undefined8 *)(lVar4 + 0x10) = uVar9;
                                  *(undefined8 *)(lVar4 + 0x18) = 0;
                                  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
                                  *(undefined8 *)(lVar4 + 0x30) = 0;
                                  if (plVar8 != (long *)0x0) {
                                    lVar5 = *plVar8;
                                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                    if (uVar6 != 0) {
                                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                          puVar3 = (undefined8 *)
                                                   (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                          goto LAB_04c54200;
                                        }
                                        uVar6 = uVar6 - 1;
                                        piVar7 = piVar7 + 4;
                                      } while (uVar6 != 0);
                                    }
                                    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c54200:
                                    (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                                    plVar8 = *(long **)(unaff_x19 + 0x50);
                                    lVar4 = thunk_FUN_02cea894(*unaff_x23);
                                    FUN_04c2c1d8(lVar4,0);
                                    if (lVar4 != 0) {
                                      uVar9 = *(undefined8 *)PTR_DAT_065e6a08;
                                      *(undefined1 *)(lVar4 + 0x20) = 0;
                                      *(undefined8 *)(lVar4 + 0x10) = uVar9;
                                      *(undefined8 *)(lVar4 + 0x18) = 0;
                                      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar2;
                                      *(undefined8 *)(lVar4 + 0x30) = 0;
                                      if (plVar8 != (long *)0x0) {
                                        lVar5 = *plVar8;
                                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                        if (uVar6 != 0) {
                                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                                              puVar3 = (undefined8 *)
                                                       (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                              goto LAB_04c542a0;
                                            }
                                            uVar6 = uVar6 - 1;
                                            piVar7 = piVar7 + 4;
                                          } while (uVar6 != 0);
                                        }
                                        puVar3 = (undefined8 *)
                                                 FUN_02ce0a7c(plVar8,*(long *)puVar1,5);
LAB_04c542a0:
                    /* WARNING: Could not recover jumptable at 0x04c542c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                        (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


