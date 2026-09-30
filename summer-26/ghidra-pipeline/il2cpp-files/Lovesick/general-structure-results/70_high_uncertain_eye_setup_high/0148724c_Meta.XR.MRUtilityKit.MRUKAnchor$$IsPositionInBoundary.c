/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$IsPositionInBoundary
ENTRY_POINT: 0148724c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__IsPositionInBoundary(code *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x0148724c:
  uVar2 = (*param_1)();
  if (unaff_x24 == 0) {
LAB_014876cc:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(unaff_x24 + 0x18) != 0) {
    *(undefined4 *)(unaff_x24 + 0x20) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0x118);
    if (lVar6 == 0) goto LAB_014876cc;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) goto LAB_014876cc;
      if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
        lVar7 = *unaff_x19;
        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_014872e0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724();
LAB_014872e0:
        uVar2 = (*(code *)*puVar4)();
        if (lVar6 == 0) goto LAB_014876cc;
        if (1 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + 0x24) = uVar2;
          lVar6 = *(long *)(unaff_x20 + 0x118);
          if (lVar6 == 0) goto LAB_014876cc;
          if (*(int *)(lVar6 + 0x18) != 0) {
            lVar6 = *(long *)(lVar6 + 0x20);
            if (lVar6 == 0) goto LAB_014876cc;
            if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
              lVar7 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                    goto LAB_01487380;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487380:
              uVar2 = (*(code *)*puVar4)();
              if (lVar6 == 0) goto LAB_014876cc;
              if (2 < *(uint *)(lVar6 + 0x18)) {
                *(undefined4 *)(lVar6 + 0x28) = uVar2;
                lVar6 = *(long *)(unaff_x20 + 0x128);
                if (lVar6 == 0) goto LAB_014876cc;
                if (*(int *)(lVar6 + 0x18) != 0) {
                  lVar7 = *unaff_x19;
                  lVar6 = *(long *)(lVar6 + 0x20);
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *unaff_x21) {
                        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                        goto LAB_01487408;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487408:
                  uVar2 = (*(code *)*puVar4)();
                  if (lVar6 == 0) goto LAB_014876cc;
                  if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                    lVar6 = *(long *)(unaff_x20 + 0x130);
                    if (lVar6 == 0) goto LAB_014876cc;
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      lVar7 = *unaff_x19;
                      lVar6 = *(long *)(lVar6 + 0x20);
                      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                      if (uVar8 != 0) {
                        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == *unaff_x21) {
                            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                            goto LAB_01487494;
                          }
                          uVar8 = uVar8 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar8 != 0);
                      }
                      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487494:
                      uVar2 = (*(code *)*puVar4)();
                      if (lVar6 == 0) goto LAB_014876cc;
                      if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                        lVar6 = *(long *)(unaff_x20 + 0x110);
                        if (lVar6 == 0) goto LAB_014876cc;
                        if (*(int *)(lVar6 + 0x18) != 0) {
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (lVar6 == 0) goto LAB_014876cc;
                          if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = 0;
                            lVar6 = *(long *)(unaff_x20 + 0x120);
                            if (lVar6 == 0) goto LAB_014876cc;
                            if (*(int *)(lVar6 + 0x18) != 0) {
                              lVar6 = *(long *)(lVar6 + 0x20);
                              if (lVar6 == 0) goto LAB_014876cc;
                              if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
                                lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                if (lVar6 != 0) {
                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                  if ((uVar1 != 0) &&
                                     (*(undefined4 *)(lVar6 + 0x20) = 0, uVar1 != 1)) {
                                    fVar11 = 0.0;
                                    *(undefined4 *)(lVar6 + 0x24) = 0;
                                    if (2 < uVar1) {
                                      do {
                                        *(float *)(lVar6 + 0x28) = fVar11;
                                        lVar6 = *(long *)(unaff_x20 + 0x140);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_014875a4;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_014875a4:
                                        iVar3 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(float *)(lVar6 + unaff_x23 * 4 + 0x20) =
                                             ((float)iVar3 + unaff_s8) * unaff_s9;
                                        lVar6 = *(long *)(unaff_x20 + 0x148);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_0148763c;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_0148763c:
                                        uVar2 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                        unaff_x23 = unaff_x23 + 1;
                                        if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x23) {
                                          return;
                                        }
                                        lVar6 = *(long *)(unaff_x20 + 0xe0);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_014869a4;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_014869a4:
                                        uVar2 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                        lVar6 = *(long *)(unaff_x20 + 0xe8);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486a30;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486a30:
                                        uVar2 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                        lVar6 = *(long *)(unaff_x20 + 0xf0);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x22;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (*(int *)(lVar7 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar7 = *unaff_x22;
                                        }
                                        lVar5 = *unaff_x19;
                                        lVar7 = **(long **)(lVar7 + 0xb8);
                                        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486ad8;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486ad8:
                                        uVar1 = (*(code *)*puVar4)();
                                        if (lVar7 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) =
                                             *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
                                        lVar6 = *(long *)(unaff_x20 + 0xf8);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486b7c;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486b7c:
                                        uVar2 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                        lVar6 = *(long *)(unaff_x20 + 0x100);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486c08;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486c08:
                                        iVar3 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(bool *)(lVar6 + unaff_x23 + 0x20) = iVar3 == 1;
                                        lVar6 = *(long *)(unaff_x20 + 0x100);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        if (*(char *)(lVar6 + unaff_x23 + 0x20) == '\0')
                                        goto LAB_01486cbc;
                                        lVar6 = *(long *)(unaff_x20 + 0x110);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486d38;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486d38:
                                        uVar2 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                        lVar6 = *(long *)(unaff_x20 + 0x108);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486dc4;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486dc4:
                                        iVar3 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(bool *)(lVar6 + unaff_x23 + 0x20) = iVar3 == 1;
                                        lVar6 = *(long *)(unaff_x20 + 0x118);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486e70;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486e70:
                                        uVar2 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        *(undefined4 *)(lVar6 + 0x20) = uVar2;
                                        lVar6 = *(long *)(unaff_x20 + 0x118);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01486f0c;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486f0c:
                                        uVar2 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) < 2) break;
                                        *(undefined4 *)(lVar6 + 0x24) = uVar2;
                                        lVar6 = *(long *)(unaff_x20 + 0x118);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) < 3) break;
                                        *(undefined4 *)(lVar6 + 0x28) = 0;
                                        lVar6 = *(long *)(unaff_x20 + 0x110);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        if (*(int *)(lVar6 + unaff_x23 * 4 + 0x20) == 2) {
                                          lVar6 = *(long *)(unaff_x20 + 0x108);
                                          if (lVar6 == 0) goto LAB_014876cc;
                                          if (*(int *)(lVar6 + 0x18) == 0) break;
                                          lVar6 = *(long *)(lVar6 + 0x20);
                                          if (lVar6 == 0) goto LAB_014876cc;
                                          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                          if (*(char *)(lVar6 + unaff_x23 + 0x20) != '\0')
                                          goto LAB_01486fd4;
                                          lVar6 = *(long *)(unaff_x20 + 0x128);
                                          if (lVar6 == 0) goto LAB_014876cc;
                                          iVar3 = (int)*(undefined8 *)(lVar6 + 0x18);
                                          if (iVar3 == 0) break;
                                          lVar6 = *(long *)(lVar6 + 0x20);
                                          if (lVar6 == 0) goto LAB_014876cc;
                                          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
                                          if (uVar8 <= unaff_x23) break;
                                          uVar2 = 0xc;
                                          uVar10 = 8;
                                        }
                                        else {
LAB_01486fd4:
                                          lVar6 = *(long *)(unaff_x20 + 0x128);
                                          if (lVar6 == 0) goto LAB_014876cc;
                                          iVar3 = (int)*(undefined8 *)(lVar6 + 0x18);
                                          if (iVar3 == 0) break;
                                          lVar6 = *(long *)(lVar6 + 0x20);
                                          if (lVar6 == 0) goto LAB_014876cc;
                                          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
                                          if (uVar8 <= unaff_x23) break;
                                          uVar2 = 0xd;
                                          uVar10 = 7;
                                        }
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar10;
                                        lVar6 = *(long *)(unaff_x20 + 0x130);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (((*(int *)(lVar6 + 0x18) == 0) || (iVar3 == 0)) ||
                                           (uVar8 <= unaff_x23)) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                        lVar6 = *(long *)(unaff_x20 + 0x120);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_014870bc;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_014870bc:
                                        iVar3 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        *(float *)(lVar6 + 0x20) = (float)iVar3 * unaff_s10;
                                        lVar6 = *(long *)(unaff_x20 + 0x120);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01487160;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487160:
                                        iVar3 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) < 2) break;
                                        *(float *)(lVar6 + 0x24) = (float)iVar3 * unaff_s10;
                                        lVar6 = *(long *)(unaff_x20 + 0x120);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(int *)(lVar6 + 0x18) == 0) break;
                                        lVar6 = *(long *)(lVar6 + 0x20);
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        lVar7 = *unaff_x19;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                        if (uVar8 != 0) {
                                          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                              puVar4 = (undefined8 *)
                                                       (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138
                                                       );
                                              goto LAB_01487208;
                                            }
                                            uVar8 = uVar8 - 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 != 0);
                                        }
                                        puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487208:
                                        iVar3 = (*(code *)*puVar4)();
                                        if (lVar6 == 0) goto LAB_014876cc;
                                        if (*(uint *)(lVar6 + 0x18) < 3) break;
                                        fVar11 = (float)iVar3 * unaff_s10;
                                      } while( true );
                                    }
                                  }
                                  goto LAB_014876c8;
                                }
                                goto LAB_014876cc;
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
  goto LAB_014876c8;
LAB_01486cbc:
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 == 0) goto LAB_014876cc;
  if (*(int *)(lVar6 + 0x18) != 0) {
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_014876cc;
    if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
      lVar7 = *unaff_x19;
      unaff_x24 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_01487244;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487244:
      param_1 = (code *)*puVar4;
      goto code_r0x0148724c;
    }
  }
LAB_014876c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


