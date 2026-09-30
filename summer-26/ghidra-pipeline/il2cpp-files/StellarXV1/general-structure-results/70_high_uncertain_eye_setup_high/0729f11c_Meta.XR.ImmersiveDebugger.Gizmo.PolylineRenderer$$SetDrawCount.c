/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetDrawCount
ENTRY_POINT: 0729f11c
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetDrawCount(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  
  while (unaff_x23 != 0) {
    if ((*(uint *)(unaff_x23 + 0x18) & 0xfffffffc) == 0) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined4 *)(unaff_x23 + 0x2c) = param_1;
    puVar1 = PTR_DAT_092c2198;
    unaff_x21 = unaff_x21 + 1;
    uVar6 = (ulong)*(uint *)(unaff_x20 + 200);
    if ((int)*(uint *)(unaff_x20 + 200) <= (int)unaff_x21) {
      uVar13 = 0;
      do {
        if (0 < (int)uVar6) {
          uVar14 = 0;
          do {
            lVar9 = *(long *)(unaff_x20 + 0xe0);
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar7 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f1d0;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f1d0:
            uVar2 = (*(code *)*puVar5)();
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar7 = *(long *)(unaff_x20 + 0xe8);
            *(undefined4 *)(lVar9 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar9 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f264;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f264:
            uVar2 = (*(code *)*puVar5)();
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar9 = *(long *)(unaff_x20 + 0xf0);
            *(undefined4 *)(lVar7 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar7 = *(long *)puVar1;
            lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar7 = *(long *)puVar1;
            }
            lVar8 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
            lVar7 = **(long **)(lVar7 + 0xb8);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f314;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f314:
            uVar3 = (*(code *)*puVar5)();
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_072a0e30;
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar8 = *(long *)(unaff_x20 + 0xf8);
            *(undefined4 *)(lVar9 + uVar14 * 4 + 0x20) =
                 *(undefined4 *)(lVar7 + (long)(int)uVar3 * 4 + 0x20);
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar9 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            lVar7 = *(long *)(lVar8 + uVar13 * 8 + 0x20);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f3c0;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f3c0:
            uVar2 = (*(code *)*puVar5)();
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar9 = *(long *)(unaff_x20 + 0x100);
            *(undefined4 *)(lVar7 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar7 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729f454;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f454:
            iVar4 = (*(code *)*puVar5)();
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar7 = *(long *)(unaff_x20 + 0x100);
            *(bool *)(lVar9 + uVar14 + 0x20) = iVar4 == 1;
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
            if (*(char *)(lVar9 + uVar14 + 0x20) == '\0') {
              lVar9 = *(long *)(unaff_x20 + 0x118);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fb04;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fb04:
              uVar2 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar9 + 0x20) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fba8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fba8:
              uVar2 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar9 + 0x24) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fc50;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fc50:
              uVar2 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x128);
              *(undefined4 *)(lVar9 + 0x28) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fce0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fce0:
              uVar2 = (*(code *)*puVar5)();
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar9 = *(long *)(unaff_x20 + 0x130);
              *(undefined4 *)(lVar7 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto FUN_0729fd74;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
FUN_0729fd74:
              uVar2 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x110);
              *(undefined4 *)(lVar9 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              *(undefined4 *)(lVar9 + uVar14 * 4 + 0x20) = 0;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              uVar3 = *(uint *)(lVar9 + 0x18);
              if ((uVar3 == 0) || (*(undefined4 *)(lVar9 + 0x20) = 0, uVar3 == 1))
              goto LAB_072a0e30;
              fVar15 = 0.0;
              *(undefined4 *)(lVar9 + 0x24) = 0;
              if (uVar3 < 3) goto LAB_072a0e30;
            }
            else {
              lVar9 = *(long *)(unaff_x20 + 0x110);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f59c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f59c:
              uVar2 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x108);
              *(undefined4 *)(lVar9 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f630;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f630:
              iVar4 = (*(code *)*puVar5)();
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar9 = *(long *)(unaff_x20 + 0x118);
              *(bool *)(lVar7 + uVar14 + 0x20) = iVar4 == 1;
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f6e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f6e4:
              uVar2 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar9 + 0x20) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f788;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f788:
              uVar2 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x118);
              *(undefined4 *)(lVar9 + 0x24) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x110);
              *(undefined4 *)(lVar9 + 0x28) = 0;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              if (*(int *)(lVar9 + uVar14 * 4 + 0x20) == 2) {
                lVar9 = *(long *)(unaff_x20 + 0x108);
                if (lVar9 == 0) goto LAB_072a0e34;
                if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
                lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_072a0e34;
                if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
                if (*(char *)(lVar9 + uVar14 + 0x20) != '\0') goto LAB_0729f868;
                lVar9 = *(long *)(unaff_x20 + 0x128);
                if (lVar9 == 0) goto LAB_072a0e34;
                uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
                if (uVar6 <= uVar13) goto LAB_072a0e30;
                lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_072a0e34;
                uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
                if (uVar10 <= uVar14) goto LAB_072a0e30;
                uVar2 = 0xc;
                uVar12 = 8;
              }
              else {
LAB_0729f868:
                lVar9 = *(long *)(unaff_x20 + 0x128);
                if (lVar9 == 0) goto LAB_072a0e34;
                uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
                if (uVar6 <= uVar13) goto LAB_072a0e30;
                lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_072a0e34;
                uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
                if (uVar10 <= uVar14) goto LAB_072a0e30;
                uVar2 = 0xd;
                uVar12 = 7;
              }
              lVar7 = *(long *)(unaff_x20 + 0x130);
              *(undefined4 *)(lVar9 + uVar14 * 4 + 0x20) = uVar12;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (((*(uint *)(lVar7 + 0x18) <= uVar13) || (uVar6 <= uVar13)) || (uVar10 <= uVar14))
              goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              *(undefined4 *)(lVar9 + uVar14 * 4 + 0x20) = uVar2;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729f96c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f96c:
              iVar4 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              *(float *)(lVar9 + 0x20) = (float)iVar4 * -2.0;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fa18;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fa18:
              iVar4 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
              lVar7 = *(long *)(unaff_x20 + 0x120);
              *(float *)(lVar9 + 0x24) = (float)iVar4 * -2.0;
              if (lVar7 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
              lVar9 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
              lVar7 = *unaff_x19;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729fac8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fac8:
              iVar4 = (*(code *)*puVar5)();
              if (lVar9 == 0) goto LAB_072a0e34;
              if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_072a0e30;
              fVar15 = (float)iVar4 * -2.0;
            }
            lVar7 = *(long *)(unaff_x20 + 0x138);
            *(float *)(lVar9 + 0x28) = fVar15;
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar9 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729fe9c;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729fe9c:
            uVar2 = (*(code *)*puVar5)();
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar9 = *(long *)(unaff_x20 + 0x140);
            *(undefined4 *)(lVar7 + uVar14 * 4 + 0x20) = uVar2;
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar7 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729ff30;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729ff30:
            iVar4 = (*(code *)*puVar5)();
            if (lVar9 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar7 = *(long *)(unaff_x20 + 0x148);
            *(float *)(lVar9 + uVar14 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a0e30;
            lVar9 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            lVar7 = *(long *)(lVar7 + uVar13 * 8 + 0x20);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                  goto LAB_0729ffd0;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729ffd0:
            uVar2 = (*(code *)*puVar5)();
            if (lVar7 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_072a0e30;
            lVar9 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            *(undefined4 *)(lVar7 + lVar9 + 0x20) = uVar2;
            uVar6 = (ulong)*(int *)(unaff_x20 + 200);
          } while ((long)uVar14 < (long)uVar6);
        }
        uVar13 = uVar13 + 1;
        if (uVar13 == 2) {
          return;
        }
      } while( true );
    }
    lVar9 = *(long *)(unaff_x20 + 0xd8);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= unaff_x21) goto LAB_072a0e30;
    lVar7 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729ef60;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729ef60:
    uVar2 = (*(code *)*puVar5)();
    if (lVar9 == 0) break;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    *(undefined4 *)(lVar9 + 0x20) = uVar2;
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar7 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729efec;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729efec:
    uVar2 = (*(code *)*puVar5)();
    if (lVar7 == 0) break;
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
    lVar9 = *(long *)(unaff_x20 + 0xd8);
    *(undefined4 *)(lVar7 + 0x24) = uVar2;
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= unaff_x21) goto LAB_072a0e30;
    lVar7 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar9 = *(long *)(lVar9 + unaff_x21 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f07c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f07c:
    uVar2 = (*(code *)*puVar5)();
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_072a0e30;
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    *(undefined4 *)(lVar9 + 0x28) = uVar2;
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    unaff_x23 = *(long *)(lVar7 + unaff_x21 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f10c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729f10c:
    param_1 = (*(code *)*puVar5)();
  }
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


