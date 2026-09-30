/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 0729f534
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x0729f534:
  if (in_x9 == 0) {
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(uint *)(in_x9 + 0x18) <= unaff_x24) goto LAB_072a0e30;
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  lVar11 = *(long *)(in_x9 + unaff_x24 * 8 + 0x20);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
        goto LAB_0729fb04;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fb04:
  uVar2 = (*(code *)*puVar4)();
  if (lVar11 == 0) goto LAB_072a0e34;
  if (*(int *)(lVar11 + 0x18) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x118);
    *(undefined4 *)(lVar11 + 0x20) = uVar2;
    if (lVar6 == 0) goto LAB_072a0e34;
    if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_072a0e34;
      if (unaff_x24 < *(uint *)(lVar6 + 0x18)) {
        lVar11 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_0729fba8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fba8:
        uVar2 = (*(code *)*puVar4)();
        if (lVar6 == 0) goto LAB_072a0e34;
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          lVar11 = *(long *)(unaff_x20 + 0x118);
          *(undefined4 *)(lVar6 + 0x24) = uVar2;
          if (lVar11 == 0) goto LAB_072a0e34;
          if (unaff_x23 < *(uint *)(lVar11 + 0x18)) {
            lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_072a0e34;
            if (unaff_x24 < *(uint *)(lVar6 + 0x18)) {
              lVar11 = *unaff_x19;
              uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
              lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x22) {
                    puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fc50;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fc50:
              uVar2 = (*(code *)*puVar4)();
              if (lVar6 == 0) goto LAB_072a0e34;
              if (2 < *(uint *)(lVar6 + 0x18)) {
                lVar11 = *(long *)(unaff_x20 + 0x128);
                *(undefined4 *)(lVar6 + 0x28) = uVar2;
                if (lVar11 == 0) goto LAB_072a0e34;
                if (unaff_x23 < *(uint *)(lVar11 + 0x18)) {
                  lVar6 = *unaff_x19;
                  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  lVar11 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                  if (uVar7 != 0) {
                    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *unaff_x22) {
                        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                        goto LAB_0729fce0;
                      }
                      uVar7 = uVar7 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fce0:
                  uVar2 = (*(code *)*puVar4)();
                  if (lVar11 == 0) goto LAB_072a0e34;
                  if (unaff_x24 < *(uint *)(lVar11 + 0x18)) {
                    lVar6 = *(long *)(unaff_x20 + 0x130);
                    *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
                    if (lVar6 == 0) goto LAB_072a0e34;
                    if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
                      lVar11 = *unaff_x19;
                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                      if (uVar7 != 0) {
                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                            goto FUN_0729fd74;
                          }
                          uVar7 = uVar7 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar4 = (undefined8 *)FUN_040b1e00();
FUN_0729fd74:
                      uVar2 = (*(code *)*puVar4)();
                      if (lVar6 == 0) goto LAB_072a0e34;
                      if (unaff_x24 < *(uint *)(lVar6 + 0x18)) {
                        lVar11 = *(long *)(unaff_x20 + 0x110);
                        *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
                        if (lVar11 == 0) goto LAB_072a0e34;
                        if (unaff_x23 < *(uint *)(lVar11 + 0x18)) {
                          lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_072a0e34;
                          if (unaff_x24 < *(uint *)(lVar6 + 0x18)) {
                            lVar11 = *(long *)(unaff_x20 + 0x120);
                            *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = 0;
                            if (lVar11 == 0) goto LAB_072a0e34;
                            if (unaff_x23 < *(uint *)(lVar11 + 0x18)) {
                              lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                              if (lVar6 == 0) goto LAB_072a0e34;
                              if (unaff_x24 < *(uint *)(lVar6 + 0x18)) {
                                lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                                if (lVar6 == 0) goto LAB_072a0e34;
                                uVar1 = *(uint *)(lVar6 + 0x18);
                                if ((uVar1 != 0) && (*(undefined4 *)(lVar6 + 0x20) = 0, uVar1 != 1))
                                {
                                  fVar12 = 0.0;
                                  *(undefined4 *)(lVar6 + 0x24) = 0;
                                  if (2 < uVar1) {
                                    do {
                                      lVar11 = *(long *)(unaff_x20 + 0x138);
                                      *(float *)(lVar6 + 0x28) = fVar12;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                      lVar11 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                            goto LAB_0729fe9c;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fe9c:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
                                      lVar6 = *(long *)(unaff_x20 + 0x140);
                                      *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729ff30;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729ff30:
                                      iVar3 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x148);
                                      *(float *)(lVar6 + unaff_x24 * 4 + 0x20) =
                                           ((float)iVar3 + unaff_s8) * unaff_s9;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                      lVar11 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                            goto LAB_0729ffd0;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729ffd0:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
                                      lVar6 = unaff_x24 * 4;
                                      unaff_x24 = unaff_x24 + 1;
                                      *(undefined4 *)(lVar11 + lVar6 + 0x20) = uVar2;
                                      if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x24) {
                                        do {
                                          unaff_x23 = unaff_x23 + 1;
                                          if (unaff_x23 == 2) {
                                            return;
                                          }
                                        } while (*(int *)(unaff_x20 + 200) < 1);
                                        unaff_x24 = 0;
                                      }
                                      lVar6 = *(long *)(unaff_x20 + 0xe0);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729f1d0;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f1d0:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *(long *)(unaff_x20 + 0xe8);
                                      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                      lVar11 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                            goto LAB_0729f264;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f264:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
                                      lVar6 = *(long *)(unaff_x20 + 0xf0);
                                      *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                      lVar11 = *unaff_x21;
                                      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                      if (*(int *)(lVar11 + 0xe4) == 0) {
                                        thunk_FUN_040d65a8();
                                        lVar11 = *unaff_x21;
                                      }
                                      lVar5 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                      lVar11 = **(long **)(lVar11 + 0xb8);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                            goto LAB_0729f314;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f314:
                                      uVar1 = (*(code *)*puVar4)();
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= uVar1) break;
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar5 = *(long *)(unaff_x20 + 0xf8);
                                      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) =
                                           *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20);
                                      if (lVar5 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) break;
                                      lVar6 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                      lVar11 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                            goto LAB_0729f3c0;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f3c0:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
                                      lVar6 = *(long *)(unaff_x20 + 0x100);
                                      *(undefined4 *)(lVar11 + unaff_x24 * 4 + 0x20) = uVar2;
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729f454;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f454:
                                      iVar3 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x100);
                                      *(bool *)(lVar6 + unaff_x24 + 0x20) = iVar3 == 1;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      if (*(char *)(lVar6 + unaff_x24 + 0x20) == '\0')
                                      goto LAB_0729f518;
                                      lVar6 = *(long *)(unaff_x20 + 0x110);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729f59c;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f59c:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x108);
                                      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                      lVar11 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                            goto LAB_0729f630;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f630:
                                      iVar3 = (*(code *)*puVar4)();
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x24) break;
                                      lVar6 = *(long *)(unaff_x20 + 0x118);
                                      *(bool *)(lVar11 + unaff_x24 + 0x20) = iVar3 == 1;
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729f6e4;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f6e4:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(int *)(lVar6 + 0x18) == 0) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x118);
                                      *(undefined4 *)(lVar6 + 0x20) = uVar2;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729f788;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f788:
                                      uVar2 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x118);
                                      *(undefined4 *)(lVar6 + 0x24) = uVar2;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) < 3) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x110);
                                      *(undefined4 *)(lVar6 + 0x28) = 0;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      if (*(int *)(lVar6 + unaff_x24 * 4 + 0x20) == 2) {
                                        lVar6 = *(long *)(unaff_x20 + 0x108);
                                        if (lVar6 == 0) goto LAB_072a0e34;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) break;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        if (lVar6 == 0) goto LAB_072a0e34;
                                        if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                        if (*(char *)(lVar6 + unaff_x24 + 0x20) != '\0')
                                        goto LAB_0729f868;
                                        lVar6 = *(long *)(unaff_x20 + 0x128);
                                        if (lVar6 == 0) goto LAB_072a0e34;
                                        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
                                        if (uVar7 <= unaff_x23) break;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        if (lVar6 == 0) goto LAB_072a0e34;
                                        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
                                        if (uVar8 <= unaff_x24) break;
                                        uVar2 = 0xc;
                                        uVar10 = 8;
                                      }
                                      else {
LAB_0729f868:
                                        lVar6 = *(long *)(unaff_x20 + 0x128);
                                        if (lVar6 == 0) goto LAB_072a0e34;
                                        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
                                        if (uVar7 <= unaff_x23) break;
                                        lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                                        if (lVar6 == 0) goto LAB_072a0e34;
                                        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
                                        if (uVar8 <= unaff_x24) break;
                                        uVar2 = 0xd;
                                        uVar10 = 7;
                                      }
                                      lVar11 = *(long *)(unaff_x20 + 0x130);
                                      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar10;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (((*(uint *)(lVar11 + 0x18) <= unaff_x23) ||
                                          (uVar7 <= unaff_x23)) || (uVar8 <= unaff_x24)) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x120);
                                      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar2;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729f96c;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f96c:
                                      iVar3 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(int *)(lVar6 + 0x18) == 0) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x120);
                                      *(float *)(lVar6 + 0x20) = (float)iVar3 * unaff_s10;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729fa18;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fa18:
                                      iVar3 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) break;
                                      lVar11 = *(long *)(unaff_x20 + 0x120);
                                      *(float *)(lVar6 + 0x24) = (float)iVar3 * unaff_s10;
                                      if (lVar11 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar11 + 0x18) <= unaff_x23) break;
                                      lVar6 = *(long *)(lVar11 + unaff_x23 * 8 + 0x20);
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                                      lVar11 = *unaff_x19;
                                      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                      lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                                      if (uVar7 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *unaff_x22) {
                                            puVar4 = (undefined8 *)
                                                     (lVar11 + (long)(*piVar9 + 0xe) * 0x10 + 0x138)
                                            ;
                                            goto LAB_0729fac8;
                                          }
                                          uVar7 = uVar7 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar7 != 0);
                                      }
                                      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fac8:
                                      iVar3 = (*(code *)*puVar4)();
                                      if (lVar6 == 0) goto LAB_072a0e34;
                                      if (*(uint *)(lVar6 + 0x18) < 3) break;
                                      fVar12 = (float)iVar3 * unaff_s10;
                                    } while( true );
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
  goto LAB_072a0e30;
LAB_0729f518:
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 == 0) goto LAB_072a0e34;
  if (unaff_x23 < *(uint *)(lVar6 + 0x18)) {
    in_x9 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
    goto code_r0x0729f534;
  }
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


