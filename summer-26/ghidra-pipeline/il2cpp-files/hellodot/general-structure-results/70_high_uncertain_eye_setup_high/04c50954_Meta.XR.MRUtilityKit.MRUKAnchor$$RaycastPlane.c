/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastPlane
ENTRY_POINT: 04c50954
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastPlane(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  
  puVar1 = PTR_DAT_065dd4b8;
  uVar9 = *(undefined8 *)PTR_DAT_065e6920;
  *(undefined1 *)(unaff_x21 + 0x20) = 1;
  *(undefined8 *)(unaff_x21 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  puVar2 = PTR_DAT_065e01b8;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e01b8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_04c509d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_04c509d8:
    (*(code *)*puVar3)();
    plVar8 = *(long **)(unaff_x19 + 0x50);
    lVar4 = thunk_FUN_02cea894(*unaff_x23);
    FUN_04c2c1d8(lVar4,0);
    if (lVar4 != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_065e6df8;
      *(undefined1 *)(lVar4 + 0x20) = 1;
      *(undefined8 *)(lVar4 + 0x10) = uVar9;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
              goto LAB_04c50a7c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50a7c:
        (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
        plVar8 = *(long **)(unaff_x19 + 0x50);
        lVar4 = thunk_FUN_02cea894(*unaff_x23);
        FUN_04c2c1d8(lVar4,0);
        puVar1 = PTR_DAT_065e0200;
        if (lVar4 != 0) {
          uVar9 = *(undefined8 *)PTR_DAT_065e6e00;
          *(undefined1 *)(lVar4 + 0x20) = 0;
          *(undefined8 *)(lVar4 + 0x10) = uVar9;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar4 + 0x30) = 0;
          if (plVar8 != (long *)0x0) {
            lVar5 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                  goto LAB_04c50b24;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50b24:
            (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
            plVar8 = *(long **)(unaff_x19 + 0x50);
            lVar4 = thunk_FUN_02cea894(*unaff_x23);
            FUN_04c2c1d8(lVar4,0);
            if (lVar4 != 0) {
              uVar9 = *(undefined8 *)PTR_DAT_065e6ef8;
              *(undefined1 *)(lVar4 + 0x20) = 0;
              *(undefined8 *)(lVar4 + 0x10) = uVar9;
              *(undefined8 *)(lVar4 + 0x18) = 0;
              *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
              *(undefined8 *)(lVar4 + 0x30) = 0;
              if (plVar8 != (long *)0x0) {
                lVar5 = *plVar8;
                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                      goto LAB_04c50bc4;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50bc4:
                (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                plVar8 = *(long **)(unaff_x19 + 0x50);
                lVar4 = thunk_FUN_02cea894(*unaff_x23);
                FUN_04c2c1d8(lVar4,0);
                if (lVar4 != 0) {
                  uVar9 = *(undefined8 *)PTR_DAT_065e6f50;
                  *(undefined1 *)(lVar4 + 0x20) = 0;
                  *(undefined8 *)(lVar4 + 0x10) = uVar9;
                  *(undefined8 *)(lVar4 + 0x18) = 0;
                  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
                  *(undefined8 *)(lVar4 + 0x30) = 0;
                  if (plVar8 != (long *)0x0) {
                    lVar5 = *plVar8;
                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                          goto LAB_04c50c64;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50c64:
                    (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                    plVar8 = *(long **)(unaff_x19 + 0x50);
                    lVar4 = thunk_FUN_02cea894(*unaff_x23);
                    FUN_04c2c1d8(lVar4,0);
                    if (lVar4 != 0) {
                      uVar9 = *(undefined8 *)PTR_DAT_065e6ac0;
                      *(undefined1 *)(lVar4 + 0x20) = 0;
                      *(undefined8 *)(lVar4 + 0x10) = uVar9;
                      *(undefined8 *)(lVar4 + 0x18) = 0;
                      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
                      *(undefined8 *)(lVar4 + 0x30) = 0;
                      if (plVar8 != (long *)0x0) {
                        lVar5 = *plVar8;
                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        if (uVar6 != 0) {
                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                              goto LAB_04c50d04;
                            }
                            uVar6 = uVar6 - 1;
                            piVar7 = piVar7 + 4;
                          } while (uVar6 != 0);
                        }
                        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50d04:
                        (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                        plVar8 = *(long **)(unaff_x19 + 0x50);
                        lVar4 = thunk_FUN_02cea894(*unaff_x23);
                        FUN_04c2c1d8(lVar4,0);
                        if (lVar4 != 0) {
                          uVar9 = *(undefined8 *)PTR_DAT_065e6ac8;
                          *(undefined1 *)(lVar4 + 0x20) = 0;
                          *(undefined8 *)(lVar4 + 0x10) = uVar9;
                          *(undefined8 *)(lVar4 + 0x18) = 0;
                          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
                          *(undefined8 *)(lVar4 + 0x30) = 0;
                          if (plVar8 != (long *)0x0) {
                            lVar5 = *plVar8;
                            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                            if (uVar6 != 0) {
                              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                                  puVar3 = (undefined8 *)
                                           (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                  goto LAB_04c50da4;
                                }
                                uVar6 = uVar6 - 1;
                                piVar7 = piVar7 + 4;
                              } while (uVar6 != 0);
                            }
                            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50da4:
                            (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                            plVar8 = *(long **)(unaff_x19 + 0x50);
                            lVar4 = thunk_FUN_02cea894(*unaff_x23);
                            FUN_04c2c1d8(lVar4,0);
                            if (lVar4 != 0) {
                              uVar9 = *(undefined8 *)PTR_DAT_065dfac0;
                              *(undefined1 *)(lVar4 + 0x20) = 0;
                              *(undefined8 *)(lVar4 + 0x10) = uVar9;
                              *(undefined8 *)(lVar4 + 0x18) = 0;
                              *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
                              *(undefined8 *)(lVar4 + 0x30) = 0;
                              if (plVar8 != (long *)0x0) {
                                lVar5 = *plVar8;
                                uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                if (uVar6 != 0) {
                                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                                      puVar3 = (undefined8 *)
                                               (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                      goto LAB_04c50e44;
                                    }
                                    uVar6 = uVar6 - 1;
                                    piVar7 = piVar7 + 4;
                                  } while (uVar6 != 0);
                                }
                                puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50e44:
                                (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                                plVar8 = *(long **)(unaff_x19 + 0x50);
                                lVar4 = thunk_FUN_02cea894(*unaff_x23);
                                FUN_04c2c1d8(lVar4,0);
                                if (lVar4 != 0) {
                                  uVar9 = *(undefined8 *)PTR_DAT_065e6f70;
                                  *(undefined1 *)(lVar4 + 0x20) = 0;
                                  *(undefined8 *)(lVar4 + 0x10) = uVar9;
                                  *(undefined8 *)(lVar4 + 0x18) = 0;
                                  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
                                  *(undefined8 *)(lVar4 + 0x30) = 0;
                                  if (plVar8 != (long *)0x0) {
                                    lVar5 = *plVar8;
                                    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                    if (uVar6 != 0) {
                                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                                          puVar3 = (undefined8 *)
                                                   (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                          goto LAB_04c50ee4;
                                        }
                                        uVar6 = uVar6 - 1;
                                        piVar7 = piVar7 + 4;
                                      } while (uVar6 != 0);
                                    }
                                    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50ee4:
                                    (*(code *)*puVar3)(plVar8,uVar9,lVar4,puVar3[1]);
                                    plVar8 = *(long **)(unaff_x19 + 0x50);
                                    lVar4 = thunk_FUN_02cea894(*unaff_x23);
                                    FUN_04c2c1d8(lVar4,0);
                                    if (lVar4 != 0) {
                                      uVar9 = *(undefined8 *)PTR_DAT_065e6a08;
                                      *(undefined1 *)(lVar4 + 0x20) = 0;
                                      *(undefined8 *)(lVar4 + 0x10) = uVar9;
                                      *(undefined8 *)(lVar4 + 0x18) = 0;
                                      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)puVar1;
                                      *(undefined8 *)(lVar4 + 0x30) = 0;
                                      if (plVar8 != (long *)0x0) {
                                        lVar5 = *plVar8;
                                        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                        if (uVar6 != 0) {
                                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                                              puVar3 = (undefined8 *)
                                                       (lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                                              goto LAB_04c50f84;
                                            }
                                            uVar6 = uVar6 - 1;
                                            piVar7 = piVar7 + 4;
                                          } while (uVar6 != 0);
                                        }
                                        puVar3 = (undefined8 *)
                                                 FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c50f84:
                    /* WARNING: Could not recover jumptable at 0x04c50fa4. Too many branches */
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


