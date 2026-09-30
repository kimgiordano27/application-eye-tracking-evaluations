/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_4
ENTRY_POINT: 072a0a90
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_4(long param_1)

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
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x072a0a90:
  if (param_1 == 0) {
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 == 0) goto LAB_072a0e34;
    if (unaff_x23 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0b08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0b08:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_072a0e34;
      if (2 < *(uint *)(lVar7 + 0x18)) {
        lVar6 = *(long *)(unaff_x20 + 0x128);
        *(undefined4 *)(lVar7 + 0x28) = uVar2;
        if (lVar6 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar6 + 0x18) != 0) {
          lVar7 = *unaff_x19;
          lVar6 = *(long *)(lVar6 + 0x20);
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a0b90;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0b90:
          uVar2 = (*(code *)*puVar4)();
          if (lVar6 == 0) goto LAB_072a0e34;
          if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
            lVar7 = *(long *)(unaff_x20 + 0x130);
            *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(int *)(lVar7 + 0x18) != 0) {
              lVar6 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x22) {
                    puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                    goto LAB_072a0c1c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0c1c:
              uVar2 = (*(code *)*puVar4)();
              if (lVar7 == 0) goto LAB_072a0e34;
              if (unaff_x23 < *(uint *)(lVar7 + 0x18)) {
                lVar6 = *(long *)(unaff_x20 + 0x110);
                *(undefined4 *)(lVar7 + unaff_x23 * 4 + 0x20) = uVar2;
                if (lVar6 == 0) goto LAB_072a0e34;
                if (*(int *)(lVar6 + 0x18) != 0) {
                  lVar7 = *(long *)(lVar6 + 0x20);
                  if (lVar7 == 0) goto LAB_072a0e34;
                  if (unaff_x23 < *(uint *)(lVar7 + 0x18)) {
                    lVar6 = *(long *)(unaff_x20 + 0x120);
                    *(undefined4 *)(lVar7 + unaff_x23 * 4 + 0x20) = 0;
                    if (lVar6 == 0) goto LAB_072a0e34;
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      lVar7 = *(long *)(lVar6 + 0x20);
                      if (lVar7 == 0) goto LAB_072a0e34;
                      if (unaff_x23 < *(uint *)(lVar7 + 0x18)) {
                        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                        if (lVar7 != 0) {
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if ((uVar1 != 0) && (*(undefined4 *)(lVar7 + 0x20) = 0, uVar1 != 1)) {
                            fVar11 = 0.0;
                            *(undefined4 *)(lVar7 + 0x24) = 0;
                            if (2 < uVar1) {
                              do {
                                lVar6 = *(long *)(unaff_x20 + 0x140);
                                *(float *)(lVar7 + 0x28) = fVar11;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *unaff_x19;
                                lVar6 = *(long *)(lVar6 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a0d2c;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0d2c:
                                iVar3 = (*(code *)*puVar4)();
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                lVar7 = *(long *)(unaff_x20 + 0x148);
                                *(float *)(lVar6 + unaff_x23 * 4 + 0x20) =
                                     ((float)iVar3 + unaff_s8) * unaff_s9;
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar6 = *unaff_x19;
                                lVar7 = *(long *)(lVar7 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a0dc4;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0dc4:
                                uVar2 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = unaff_x23 * 4;
                                unaff_x23 = unaff_x23 + 1;
                                *(undefined4 *)(lVar7 + lVar6 + 0x20) = uVar2;
                                if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x23) {
                                  return;
                                }
                                lVar7 = *(long *)(unaff_x20 + 0xe0);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar6 = *unaff_x19;
                                lVar7 = *(long *)(lVar7 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a012c;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a012c:
                                uVar2 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *(long *)(unaff_x20 + 0xe8);
                                *(undefined4 *)(lVar7 + unaff_x23 * 4 + 0x20) = uVar2;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *unaff_x19;
                                lVar6 = *(long *)(lVar6 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a01b8;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a01b8:
                                uVar2 = (*(code *)*puVar4)();
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                lVar7 = *(long *)(unaff_x20 + 0xf0);
                                *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar6 = *unaff_x24;
                                lVar7 = *(long *)(lVar7 + 0x20);
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_040d65a8();
                                  lVar6 = *unaff_x24;
                                }
                                lVar5 = *unaff_x19;
                                uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                lVar6 = **(long **)(lVar6 + 0xb8);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a0260;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0260:
                                uVar1 = (*(code *)*puVar4)();
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar5 = *(long *)(unaff_x20 + 0xf8);
                                *(undefined4 *)(lVar7 + unaff_x23 * 4 + 0x20) =
                                     *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
                                if (lVar5 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar5 + 0x18) == 0) break;
                                lVar7 = *unaff_x19;
                                lVar6 = *(long *)(lVar5 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a0304;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0304:
                                uVar2 = (*(code *)*puVar4)();
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                lVar7 = *(long *)(unaff_x20 + 0x100);
                                *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar6 = *unaff_x19;
                                lVar7 = *(long *)(lVar7 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a0390;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0390:
                                iVar3 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *(long *)(unaff_x20 + 0x100);
                                *(bool *)(lVar7 + unaff_x23 + 0x20) = iVar3 == 1;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                if (*(char *)(lVar7 + unaff_x23 + 0x20) == '\0') goto LAB_072a0444;
                                lVar7 = *(long *)(unaff_x20 + 0x110);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar6 = *unaff_x19;
                                lVar7 = *(long *)(lVar7 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a04c0;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a04c0:
                                uVar2 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *(long *)(unaff_x20 + 0x108);
                                *(undefined4 *)(lVar7 + unaff_x23 * 4 + 0x20) = uVar2;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *unaff_x19;
                                lVar6 = *(long *)(lVar6 + 0x20);
                                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a054c;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a054c:
                                iVar3 = (*(code *)*puVar4)();
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                lVar7 = *(long *)(unaff_x20 + 0x118);
                                *(bool *)(lVar6 + unaff_x23 + 0x20) = iVar3 == 1;
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar7 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *unaff_x19;
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a05f8;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a05f8:
                                uVar2 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar6 = *(long *)(unaff_x20 + 0x118);
                                *(undefined4 *)(lVar7 + 0x20) = uVar2;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *unaff_x19;
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a0694;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0694:
                                uVar2 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) break;
                                lVar6 = *(long *)(unaff_x20 + 0x118);
                                *(undefined4 *)(lVar7 + 0x24) = uVar2;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) < 3) break;
                                lVar6 = *(long *)(unaff_x20 + 0x110);
                                *(undefined4 *)(lVar7 + 0x28) = 0;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                if (*(int *)(lVar7 + unaff_x23 * 4 + 0x20) == 2) {
                                  lVar7 = *(long *)(unaff_x20 + 0x108);
                                  if (lVar7 == 0) goto LAB_072a0e34;
                                  if (*(int *)(lVar7 + 0x18) == 0) break;
                                  lVar7 = *(long *)(lVar7 + 0x20);
                                  if (lVar7 == 0) goto LAB_072a0e34;
                                  if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                  if (*(char *)(lVar7 + unaff_x23 + 0x20) != '\0')
                                  goto LAB_072a075c;
                                  lVar7 = *(long *)(unaff_x20 + 0x128);
                                  if (lVar7 == 0) goto LAB_072a0e34;
                                  iVar3 = *(int *)(lVar7 + 0x18);
                                  if (iVar3 == 0) break;
                                  lVar7 = *(long *)(lVar7 + 0x20);
                                  if (lVar7 == 0) goto LAB_072a0e34;
                                  uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                                  if (uVar8 <= unaff_x23) break;
                                  uVar2 = 0xc;
                                  uVar10 = 8;
                                }
                                else {
LAB_072a075c:
                                  lVar7 = *(long *)(unaff_x20 + 0x128);
                                  if (lVar7 == 0) goto LAB_072a0e34;
                                  iVar3 = *(int *)(lVar7 + 0x18);
                                  if (iVar3 == 0) break;
                                  lVar7 = *(long *)(lVar7 + 0x20);
                                  if (lVar7 == 0) goto LAB_072a0e34;
                                  uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                                  if (uVar8 <= unaff_x23) break;
                                  uVar2 = 0xd;
                                  uVar10 = 7;
                                }
                                lVar6 = *(long *)(unaff_x20 + 0x130);
                                *(undefined4 *)(lVar7 + unaff_x23 * 4 + 0x20) = uVar10;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (((*(int *)(lVar6 + 0x18) == 0) || (iVar3 == 0)) ||
                                   (uVar8 <= unaff_x23)) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *(long *)(unaff_x20 + 0x120);
                                *(undefined4 *)(lVar7 + unaff_x23 * 4 + 0x20) = uVar2;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *unaff_x19;
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto 
                                      Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1
                                      ;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1:
                                iVar3 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar7 + 0x18) == 0) break;
                                lVar6 = *(long *)(unaff_x20 + 0x120);
                                *(float *)(lVar7 + 0x20) = (float)iVar3 * unaff_s10;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *unaff_x19;
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a08e8;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a08e8:
                                iVar3 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) break;
                                lVar6 = *(long *)(unaff_x20 + 0x120);
                                *(float *)(lVar7 + 0x24) = (float)iVar3 * unaff_s10;
                                if (lVar6 == 0) goto LAB_072a0e34;
                                if (*(int *)(lVar6 + 0x18) == 0) break;
                                lVar7 = *(long *)(lVar6 + 0x20);
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_x23) break;
                                lVar6 = *unaff_x19;
                                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                                if (uVar8 != 0) {
                                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                      puVar4 = (undefined8 *)
                                               (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                      goto LAB_072a0990;
                                    }
                                    uVar8 = uVar8 - 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar8 != 0);
                                }
                                puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0990:
                                iVar3 = (*(code *)*puVar4)();
                                if (lVar7 == 0) goto LAB_072a0e34;
                                if (*(uint *)(lVar7 + 0x18) < 3) break;
                                fVar11 = (float)iVar3 * unaff_s10;
                              } while( true );
                            }
                          }
                          goto LAB_072a0e30;
                        }
                        goto LAB_072a0e34;
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
  goto LAB_072a0e30;
LAB_072a0444:
  lVar7 = *(long *)(unaff_x20 + 0x118);
  if (lVar7 == 0) goto LAB_072a0e34;
  if (*(int *)(lVar7 + 0x18) != 0) {
    lVar7 = *(long *)(lVar7 + 0x20);
    if (lVar7 == 0) goto LAB_072a0e34;
    if (unaff_x23 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_072a09cc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a09cc:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar7 + 0x18) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x118);
        *(undefined4 *)(lVar7 + 0x20) = uVar2;
        if (lVar6 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar6 + 0x18) != 0) {
          lVar7 = *(long *)(lVar6 + 0x20);
          if (lVar7 == 0) goto LAB_072a0e34;
          if (unaff_x23 < *(uint *)(lVar7 + 0x18)) {
            lVar6 = *unaff_x19;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x22) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                  goto LAB_072a0a68;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0a68:
            uVar2 = (*(code *)*puVar4)();
            if (lVar7 == 0) goto LAB_072a0e34;
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
              param_1 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar7 + 0x24) = uVar2;
              goto code_r0x072a0a90;
            }
          }
        }
      }
    }
  }
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


