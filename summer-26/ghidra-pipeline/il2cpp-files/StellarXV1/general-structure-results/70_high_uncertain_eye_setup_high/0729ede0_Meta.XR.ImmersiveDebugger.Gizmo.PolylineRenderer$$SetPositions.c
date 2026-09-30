/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetPositions
ENTRY_POINT: 0729ede0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetPositions
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar13;
  long *unaff_x22;
  ulong uVar14;
  float fVar15;
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
      goto LAB_0729eed8;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729eed8:
  uVar2 = (*(code *)*puVar5)();
  uVar13 = 0;
  *(undefined4 *)(unaff_x20 + 200) = 2;
  *(undefined4 *)(unaff_x20 + 0xcc) = uVar2;
  while (lVar8 = *(long *)(unaff_x20 + 0xd8), lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= uVar13) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar6 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729ef60;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729ef60:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) break;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
    lVar6 = *(long *)(unaff_x20 + 0xd8);
    *(undefined4 *)(lVar8 + 0x20) = uVar2;
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729efec;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729efec:
    uVar2 = (*(code *)*puVar5)();
    if (lVar6 == 0) break;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
    lVar8 = *(long *)(unaff_x20 + 0xd8);
    *(undefined4 *)(lVar6 + 0x24) = uVar2;
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
    lVar6 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f07c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f07c:
    uVar2 = (*(code *)*puVar5)();
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
    lVar6 = *(long *)(unaff_x20 + 0xd8);
    *(undefined4 *)(lVar8 + 0x28) = uVar2;
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f10c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f10c:
    uVar2 = (*(code *)*puVar5)();
    if (lVar6 == 0) break;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_072a0e30;
    *(undefined4 *)(lVar6 + 0x2c) = uVar2;
    puVar1 = PTR_DAT_092c2198;
    uVar13 = uVar13 + 1;
    uVar9 = (ulong)*(uint *)(unaff_x20 + 200);
    if ((int)*(uint *)(unaff_x20 + 200) <= (int)uVar13) {
      uVar13 = 0;
      do {
        if (0 < (int)uVar9) {
          uVar14 = 0;
          do {
            lVar8 = *(long *)(unaff_x20 + 0xe0);
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar6 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f1d0;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f1d0:
            uVar2 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar6 = *(long *)(unaff_x20 + 0xe8);
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar8 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f264;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f264:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar8 = *(long *)(unaff_x20 + 0xf0);
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar6 = *(long *)puVar1;
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar6 = *(long *)puVar1;
            }
            lVar7 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            lVar6 = **(long **)(lVar6 + 0xb8);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f314;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f314:
            uVar3 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_072a0e30;
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar7 = *(long *)(unaff_x20 + 0xf8);
            *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) =
                 *(undefined4 *)(lVar6 + (long)(int)uVar3 * 4 + 0x20);
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar8 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            lVar6 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f3c0;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f3c0:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar8 = *(long *)(unaff_x20 + 0x100);
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar6 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f454;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f454:
            iVar4 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar6 = *(long *)(unaff_x20 + 0x100);
            *(bool *)(lVar8 + uVar14 + 0x20) = iVar4 == 1;
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
            if (*(char *)(lVar8 + uVar14 + 0x20) == '\0') {
              lVar8 = *(long *)(unaff_x20 + 0x118);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fb04;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fb04:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar8 + 0x20) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fba8;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fba8:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar8 + 0x24) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fc50;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fc50:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x128);
              *(undefined4 *)(lVar8 + 0x28) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fce0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fce0:
              uVar2 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar8 = *(long *)(unaff_x20 + 0x130);
              *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto FUN_0729fd74;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
FUN_0729fd74:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x110);
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = 0;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              uVar3 = *(uint *)(lVar8 + 0x18);
              if ((uVar3 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0, uVar3 == 1))
              goto LAB_072a0e30;
              fVar15 = 0.0;
              *(undefined4 *)(lVar8 + 0x24) = 0;
              if (uVar3 < 3) goto LAB_072a0e30;
            }
            else {
              lVar8 = *(long *)(unaff_x20 + 0x110);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f59c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f59c:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x108);
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f630;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f630:
              iVar4 = (*(code *)*puVar5)();
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar8 = *(long *)(unaff_x20 + 0x118);
              *(bool *)(lVar6 + uVar14 + 0x20) = iVar4 == 1;
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f6e4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f6e4:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar8 + 0x20) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f788;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f788:
              uVar2 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar8 + 0x24) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x110);
              *(undefined4 *)(lVar8 + 0x28) = 0;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              if (*(int *)(lVar8 + uVar14 * 4 + 0x20) == 2) {
                lVar8 = *(long *)(unaff_x20 + 0x108);
                if (lVar8 == 0) goto LAB_072a0e34;
                if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
                lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_072a0e34;
                if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
                if (*(char *)(lVar8 + uVar14 + 0x20) != '\0') goto LAB_0729f868;
                lVar8 = *(long *)(unaff_x20 + 0x128);
                if (lVar8 == 0) goto LAB_072a0e34;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar9 <= uVar13) goto LAB_072a0e30;
                lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_072a0e34;
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar10 <= uVar14) goto LAB_072a0e30;
                uVar2 = 0xc;
                uVar12 = 8;
              }
              else {
LAB_0729f868:
                lVar8 = *(long *)(unaff_x20 + 0x128);
                if (lVar8 == 0) goto LAB_072a0e34;
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar9 <= uVar13) goto LAB_072a0e30;
                lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_072a0e34;
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                if (uVar10 <= uVar14) goto LAB_072a0e30;
                uVar2 = 0xd;
                uVar12 = 7;
              }
              lVar6 = *(long *)(unaff_x20 + 0x130);
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar12;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (((*(uint *)(lVar6 + 0x18) <= uVar13) || (uVar9 <= uVar13)) || (uVar10 <= uVar14))
              goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              *(undefined4 *)(lVar8 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f96c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f96c:
              iVar4 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              *(float *)(lVar8 + 0x20) = (float)iVar4 * -2.0;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fa18;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fa18:
              iVar4 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
              lVar6 = *(long *)(unaff_x20 + 0x120);
              *(float *)(lVar8 + 0x24) = (float)iVar4 * -2.0;
              if (lVar6 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar8 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar6 = *unaff_x19;
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
              lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fac8;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fac8:
              iVar4 = (*(code *)*puVar5)();
              if (lVar8 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
              fVar15 = (float)iVar4 * -2.0;
            }
            lVar6 = *(long *)(unaff_x20 + 0x138);
            *(float *)(lVar8 + 0x28) = fVar15;
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar8 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729fe9c;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fe9c:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar8 = *(long *)(unaff_x20 + 0x140);
            *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar6 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            lVar8 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729ff30;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729ff30:
            iVar4 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar6 = *(long *)(unaff_x20 + 0x148);
            *(float *)(lVar8 + uVar14 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar8 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            lVar6 = *(long *)(lVar6 + uVar13 * 8 + 0x20);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729ffd0;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729ffd0:
            uVar2 = (*(code *)*puVar5)();
            if (lVar6 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar8 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            *(undefined4 *)(lVar6 + lVar8 + 0x20) = uVar2;
            uVar9 = (ulong)*(int *)(unaff_x20 + 200);
          } while ((long)uVar14 < (long)uVar9);
        }
        uVar13 = uVar13 + 1;
        if (uVar13 == 2) {
          return;
        }
      } while( true );
    }
  }
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


