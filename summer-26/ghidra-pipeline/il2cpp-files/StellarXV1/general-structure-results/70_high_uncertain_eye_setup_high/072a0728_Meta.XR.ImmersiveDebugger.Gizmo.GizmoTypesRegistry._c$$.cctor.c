/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$.cctor
ENTRY_POINT: 072a0728
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c___cctor(void)

{
  undefined1 in_ZR;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined4 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x072a0728:
  if ((bool)in_ZR) {
    lVar6 = *(long *)(unaff_x20 + 0x108);
    if (lVar6 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    if (*(char *)(lVar6 + unaff_x23 + 0x20) != '\0') goto LAB_072a075c;
    lVar6 = *(long *)(unaff_x20 + 0x128);
    if (lVar6 == 0) goto LAB_072a0e34;
    iVar2 = *(int *)(lVar6 + 0x18);
    if (iVar2 == 0) goto LAB_072a0e30;
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_072a0e34;
    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar7 <= unaff_x23) goto LAB_072a0e30;
    uVar3 = 0xc;
    uVar10 = 8;
  }
  else {
LAB_072a075c:
    lVar6 = *(long *)(unaff_x20 + 0x128);
    if (lVar6 == 0) goto LAB_072a0e34;
    iVar2 = *(int *)(lVar6 + 0x18);
    if (iVar2 == 0) goto LAB_072a0e30;
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_072a0e34;
    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar7 <= unaff_x23) goto LAB_072a0e30;
    uVar3 = 0xd;
    uVar10 = 7;
  }
  lVar9 = *(long *)(unaff_x20 + 0x130);
  *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar10;
  if (lVar9 != 0) {
    if (((*(int *)(lVar9 + 0x18) == 0) || (iVar2 == 0)) || (uVar7 <= unaff_x23)) goto LAB_072a0e30;
    lVar6 = *(long *)(lVar9 + 0x20);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x120);
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar3;
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
        lVar6 = *(long *)(lVar9 + 0x20);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar9 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1:
          iVar2 = (*(code *)*puVar4)();
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_072a0e30;
            lVar9 = *(long *)(unaff_x20 + 0x120);
            *(float *)(lVar6 + 0x20) = (float)iVar2 * unaff_s10;
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
              lVar6 = *(long *)(lVar9 + 0x20);
              if (lVar6 != 0) {
                if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
                lVar9 = *unaff_x19;
                uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *unaff_x22) {
                      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                      goto LAB_072a08e8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a08e8:
                iVar2 = (*(code *)*puVar4)();
                if (lVar6 != 0) {
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
                  lVar9 = *(long *)(unaff_x20 + 0x120);
                  *(float *)(lVar6 + 0x24) = (float)iVar2 * unaff_s10;
                  if (lVar9 != 0) {
                    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
                    lVar6 = *(long *)(lVar9 + 0x20);
                    if (lVar6 != 0) {
                      if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
                        lVar9 = *unaff_x19;
                        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                        if (uVar7 != 0) {
                          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == *unaff_x22) {
                              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                              goto LAB_072a0990;
                            }
                            uVar7 = uVar7 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 != 0);
                        }
                        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0990:
                        iVar2 = (*(code *)*puVar4)();
                        if (lVar6 == 0) goto LAB_072a0e34;
                        if (2 < *(uint *)(lVar6 + 0x18)) {
                          fVar11 = (float)iVar2 * unaff_s10;
                          do {
                            lVar9 = *(long *)(unaff_x20 + 0x140);
                            *(float *)(lVar6 + 0x28) = fVar11;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *unaff_x19;
                            lVar9 = *(long *)(lVar9 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0d2c;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0d2c:
                            iVar2 = (*(code *)*puVar4)();
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar9 + 0x18) <= unaff_x23) break;
                            lVar6 = *(long *)(unaff_x20 + 0x148);
                            *(float *)(lVar9 + unaff_x23 * 4 + 0x20) =
                                 ((float)iVar2 + unaff_s8) * unaff_s9;
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar6 + 0x18) == 0) break;
                            lVar9 = *unaff_x19;
                            lVar6 = *(long *)(lVar6 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0dc4;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0dc4:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = unaff_x23 * 4;
                            unaff_x23 = unaff_x23 + 1;
                            *(undefined4 *)(lVar6 + lVar9 + 0x20) = uVar3;
                            if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x23) {
                              return;
                            }
                            lVar6 = *(long *)(unaff_x20 + 0xe0);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar6 + 0x18) == 0) break;
                            lVar9 = *unaff_x19;
                            lVar6 = *(long *)(lVar6 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a012c;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a012c:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = *(long *)(unaff_x20 + 0xe8);
                            *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar3;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *unaff_x19;
                            lVar9 = *(long *)(lVar9 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a01b8;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a01b8:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar9 + 0x18) <= unaff_x23) break;
                            lVar6 = *(long *)(unaff_x20 + 0xf0);
                            *(undefined4 *)(lVar9 + unaff_x23 * 4 + 0x20) = uVar3;
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar6 + 0x18) == 0) break;
                            lVar9 = *unaff_x24;
                            lVar6 = *(long *)(lVar6 + 0x20);
                            if (*(int *)(lVar9 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                              lVar9 = *unaff_x24;
                            }
                            lVar5 = *unaff_x19;
                            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                            lVar9 = **(long **)(lVar9 + 0xb8);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0260;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0260:
                            uVar1 = (*(code *)*puVar4)();
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar5 = *(long *)(unaff_x20 + 0xf8);
                            *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) =
                                 *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
                            if (lVar5 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar5 + 0x18) == 0) break;
                            lVar6 = *unaff_x19;
                            lVar9 = *(long *)(lVar5 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0304;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0304:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar9 + 0x18) <= unaff_x23) break;
                            lVar6 = *(long *)(unaff_x20 + 0x100);
                            *(undefined4 *)(lVar9 + unaff_x23 * 4 + 0x20) = uVar3;
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar6 + 0x18) == 0) break;
                            lVar9 = *unaff_x19;
                            lVar6 = *(long *)(lVar6 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0390;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0390:
                            iVar2 = (*(code *)*puVar4)();
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = *(long *)(unaff_x20 + 0x100);
                            *(bool *)(lVar6 + unaff_x23 + 0x20) = iVar2 == 1;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *(long *)(lVar9 + 0x20);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            if (*(char *)(lVar6 + unaff_x23 + 0x20) != '\0') goto code_r0x072a03f0;
                            lVar6 = *(long *)(unaff_x20 + 0x118);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar6 + 0x18) == 0) break;
                            lVar6 = *(long *)(lVar6 + 0x20);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = *unaff_x19;
                            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a09cc;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a09cc:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar6 + 0x18) == 0) break;
                            lVar9 = *(long *)(unaff_x20 + 0x118);
                            *(undefined4 *)(lVar6 + 0x20) = uVar3;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *(long *)(lVar9 + 0x20);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = *unaff_x19;
                            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0a68;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0a68:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) break;
                            lVar9 = *(long *)(unaff_x20 + 0x118);
                            *(undefined4 *)(lVar6 + 0x24) = uVar3;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *(long *)(lVar9 + 0x20);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = *unaff_x19;
                            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0b08;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0b08:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) < 3) break;
                            lVar9 = *(long *)(unaff_x20 + 0x128);
                            *(undefined4 *)(lVar6 + 0x28) = uVar3;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *unaff_x19;
                            lVar9 = *(long *)(lVar9 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0b90;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0b90:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar9 + 0x18) <= unaff_x23) break;
                            lVar6 = *(long *)(unaff_x20 + 0x130);
                            *(undefined4 *)(lVar9 + unaff_x23 * 4 + 0x20) = uVar3;
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar6 + 0x18) == 0) break;
                            lVar9 = *unaff_x19;
                            lVar6 = *(long *)(lVar6 + 0x20);
                            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *unaff_x22) {
                                  puVar4 = (undefined8 *)
                                           (lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                                  goto LAB_072a0c1c;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0c1c:
                            uVar3 = (*(code *)*puVar4)();
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = *(long *)(unaff_x20 + 0x110);
                            *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar3;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *(long *)(lVar9 + 0x20);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar9 = *(long *)(unaff_x20 + 0x120);
                            *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = 0;
                            if (lVar9 == 0) goto LAB_072a0e34;
                            if (*(int *)(lVar9 + 0x18) == 0) break;
                            lVar6 = *(long *)(lVar9 + 0x20);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                            lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                            if (lVar6 == 0) goto LAB_072a0e34;
                            uVar1 = *(uint *)(lVar6 + 0x18);
                            if ((uVar1 == 0) || (*(undefined4 *)(lVar6 + 0x20) = 0, uVar1 == 1))
                            break;
                            fVar11 = 0.0;
                            *(undefined4 *)(lVar6 + 0x24) = 0;
                            if (uVar1 < 3) break;
                          } while( true );
                        }
                      }
                      goto LAB_072a0e30;
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
  goto LAB_072a0e34;
code_r0x072a03f0:
  lVar6 = *(long *)(unaff_x20 + 0x110);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_072a04c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a04c0:
    uVar3 = (*(code *)*puVar4)();
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x108);
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar3;
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
        lVar6 = *unaff_x19;
        lVar9 = *(long *)(lVar9 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
              goto LAB_072a054c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a054c:
        iVar2 = (*(code *)*puVar4)();
        if (lVar9 != 0) {
          if (*(uint *)(lVar9 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar6 = *(long *)(unaff_x20 + 0x118);
          *(bool *)(lVar9 + unaff_x23 + 0x20) = iVar2 == 1;
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_072a0e30;
            lVar6 = *(long *)(lVar6 + 0x20);
            if (lVar6 != 0) {
              if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
              lVar9 = *unaff_x19;
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *unaff_x22) {
                    puVar4 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                    goto LAB_072a05f8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a05f8:
              uVar3 = (*(code *)*puVar4)();
              if (lVar6 != 0) {
                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_072a0e30;
                lVar9 = *(long *)(unaff_x20 + 0x118);
                *(undefined4 *)(lVar6 + 0x20) = uVar3;
                if (lVar9 != 0) {
                  if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
                  lVar6 = *(long *)(lVar9 + 0x20);
                  if (lVar6 != 0) {
                    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
                    lVar9 = *unaff_x19;
                    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *unaff_x22) {
                          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                          goto LAB_072a0694;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0694:
                    uVar3 = (*(code *)*puVar4)();
                    if (lVar6 != 0) {
                      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
                      lVar9 = *(long *)(unaff_x20 + 0x118);
                      *(undefined4 *)(lVar6 + 0x24) = uVar3;
                      if (lVar9 != 0) {
                        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
                        lVar6 = *(long *)(lVar9 + 0x20);
                        if (lVar6 != 0) {
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
                          lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                          if (lVar6 != 0) {
                            if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_072a0e30;
                            lVar9 = *(long *)(unaff_x20 + 0x110);
                            *(undefined4 *)(lVar6 + 0x28) = 0;
                            if (lVar9 != 0) {
                              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
                              lVar6 = *(long *)(lVar9 + 0x20);
                              if (lVar6 != 0) {
                                if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
                                in_ZR = *(int *)(lVar6 + unaff_x23 * 4 + 0x20) == 2;
                                goto code_r0x072a0728;
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
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


