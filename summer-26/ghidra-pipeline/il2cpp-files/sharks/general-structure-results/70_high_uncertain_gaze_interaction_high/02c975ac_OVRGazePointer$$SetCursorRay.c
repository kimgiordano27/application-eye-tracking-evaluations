/*
FUNCTION_NAME: OVRGazePointer$$SetCursorRay
ENTRY_POINT: 02c975ac
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;eye_or_gaze_keyword_boost_only;functionality_gaze_interaction_hits_2
*/


void OVRGazePointer__SetCursorRay(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long lVar11;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  float fVar12;
  
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    if (unaff_x29 == 0) goto LAB_02c979d0;
    uVar9 = FUN_033e98f0();
  }
  else {
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02c979d0;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x20);
  }
  if (param_1 != 0) {
    FUN_033f3594(param_1,uVar9,0);
    if (*unaff_x26 != 0) {
      uVar9 = FUN_01b26fcc(*unaff_x26,*(undefined8 *)PTR_DAT_0380e110);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*unaff_x25);
      }
      uVar6 = FUN_033ed0cc(uVar9,0);
      puVar1 = PTR_DAT_037f2b10;
      if ((uVar6 & 1) != 0) {
        if (*unaff_x26 == 0) goto LAB_02c979d0;
        uVar9 = FUN_01b26fcc(*unaff_x26,*(undefined8 *)PTR_DAT_0380e110);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)puVar1);
        }
        FUN_033edb2c(uVar9,0);
      }
      puVar1 = PTR_DAT_037f2b10;
      if (*unaff_x26 != 0) {
        uVar9 = FUN_01b26fcc(*unaff_x26,*(undefined8 *)PTR_DAT_0380e118);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)puVar1);
        }
        uVar6 = FUN_033ed0cc(uVar9,0);
        if ((uVar6 & 1) != 0) {
          if (*unaff_x26 == 0) goto LAB_02c979d0;
          uVar9 = FUN_01b26fcc(*unaff_x26,*(undefined8 *)PTR_DAT_0380e118);
          if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2b10);
          }
          FUN_033edb2c(uVar9,0);
        }
        if (*unaff_x26 != 0) {
          lVar7 = FUN_01b26fcc(*unaff_x26,*(undefined8 *)PTR_DAT_037fc460);
          *unaff_x23 = lVar7;
          thunk_FUN_0188fd20();
          if (*unaff_x23 != 0) {
            FUN_033e710c(*unaff_x23,*(undefined8 *)PTR_DAT_0380e140,0);
            if (*unaff_x23 != 0) {
              FUN_033bbf60(*unaff_x23,0,0);
              if (*unaff_x24 != 0) {
                lVar7 = *unaff_x23;
                fVar12 = (float)FUN_033bb150(*unaff_x24,0);
                if (lVar7 != 0) {
                  FUN_033bb18c(fVar12 + 1.0,lVar7,0);
                  if (*unaff_x23 != 0) {
                    FUN_033bb628(0x3f000000,0,0x3f000000,0x3f800000,*unaff_x23,0);
                    if (*unaff_x23 != 0) {
                      FUN_033bb4c8(*unaff_x23,2,0);
                      lVar7 = *unaff_x22;
                      lVar11 = *unaff_x23;
                      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar6 != 0) {
                        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *unaff_x28) {
                            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
                            goto FUN_02c9780c;
                          }
                          uVar6 = uVar6 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_0185dba8();
FUN_02c9780c:
                      (*(code *)*puVar8)();
                      if (lVar11 != 0) {
                        FUN_033bb3f4(lVar11,0);
                        lVar7 = *unaff_x23;
                        if (lVar7 != 0) {
                          uVar2 = FUN_033bb29c(lVar7,0);
                          lVar11 = *unaff_x22;
                          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
                          if (uVar6 != 0) {
                            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x28) {
                                puVar8 = (undefined8 *)
                                         (lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                                goto LAB_02c97890;
                              }
                              uVar6 = uVar6 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar6 != 0);
                          }
                          puVar8 = (undefined8 *)FUN_0185dba8();
LAB_02c97890:
                          uVar3 = (*(code *)*puVar8)();
                          uVar4 = FUN_033e9e90(uVar3,0);
                          lVar11 = *unaff_x22;
                          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
                          if (uVar6 != 0) {
                            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x28) {
                                puVar8 = (undefined8 *)
                                         (lVar11 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                                goto LAB_02c978fc;
                              }
                              uVar6 = uVar6 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar6 != 0);
                          }
                          puVar8 = (undefined8 *)FUN_0185dba8();
LAB_02c978fc:
                          uVar3 = (*(code *)*puVar8)();
                          uVar5 = FUN_033e9e90(uVar3,0);
                          FUN_033bb2d8(lVar7,uVar5 | uVar2 & (uVar4 ^ 0xffffffff),0);
                          lVar7 = *(long *)(unaff_x20 + 0x50);
                          if (*(char *)(unaff_x20 + 0x71) == '\0') {
                            lVar11 = *(long *)(unaff_x20 + 0x98);
                            if (lVar11 != 0) {
                              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_02c979d4;
                              if (lVar7 != 0) {
                                FUN_033bb830(lVar7,*(undefined8 *)(lVar11 + 0x20),0);
                                if (*unaff_x23 != 0) {
                                  FUN_033bb628(0,0,0x3f800000,0x3f800000,*unaff_x23,0);
                                  goto LAB_02c97998;
                                }
                              }
                            }
                          }
                          else {
                            lVar11 = *(long *)(unaff_x20 + 0x88);
                            if (lVar11 != 0) {
                              if (*(int *)(lVar11 + 0x18) == 0) {
LAB_02c979d4:
                    /* WARNING: Subroutine does not return */
                                FUN_017fc5b0();
                              }
                              if (lVar7 != 0) {
                                FUN_033bb830(lVar7,*(undefined8 *)(lVar11 + 0x20),0);
LAB_02c97998:
                                uVar9 = FUN_033e6c58();
                                *unaff_x21 = uVar9;
                                thunk_FUN_0188fd20();
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
LAB_02c979d0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


