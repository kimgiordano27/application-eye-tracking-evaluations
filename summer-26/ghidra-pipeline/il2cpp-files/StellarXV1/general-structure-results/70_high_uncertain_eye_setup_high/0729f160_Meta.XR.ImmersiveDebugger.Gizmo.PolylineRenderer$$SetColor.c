/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColor
ENTRY_POINT: 0729f160
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColor(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong uVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  do {
    uVar12 = 0;
    do {
      lVar7 = *(long *)(unaff_x20 + 0xe0);
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f1d0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f1d0:
      uVar1 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar5 = *(long *)(unaff_x20 + 0xe8);
      *(undefined4 *)(lVar7 + uVar12 * 4 + 0x20) = uVar1;
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f264;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f264:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar7 = *(long *)(unaff_x20 + 0xf0);
      *(undefined4 *)(lVar5 + uVar12 * 4 + 0x20) = uVar1;
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *unaff_x21;
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *unaff_x21;
      }
      lVar6 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f314;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f314:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_072a0e30;
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar6 = *(long *)(unaff_x20 + 0xf8);
      *(undefined4 *)(lVar7 + uVar12 * 4 + 0x20) =
           *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
      if (lVar6 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar5 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f3c0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f3c0:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar7 = *(long *)(unaff_x20 + 0x100);
      *(undefined4 *)(lVar5 + uVar12 * 4 + 0x20) = uVar1;
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f454;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f454:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar5 = *(long *)(unaff_x20 + 0x100);
      *(bool *)(lVar7 + uVar12 + 0x20) = iVar3 == 1;
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
      if (*(char *)(lVar7 + uVar12 + 0x20) == '\0') {
        lVar7 = *(long *)(unaff_x20 + 0x118);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729fb04;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fb04:
        uVar1 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x118);
        *(undefined4 *)(lVar7 + 0x20) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729fba8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fba8:
        uVar1 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x118);
        *(undefined4 *)(lVar7 + 0x24) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729fc50;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fc50:
        uVar1 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x128);
        *(undefined4 *)(lVar7 + 0x28) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729fce0;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fce0:
        uVar1 = (*(code *)*puVar4)();
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar7 = *(long *)(unaff_x20 + 0x130);
        *(undefined4 *)(lVar5 + uVar12 * 4 + 0x20) = uVar1;
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto FUN_0729fd74;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
FUN_0729fd74:
        uVar1 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x110);
        *(undefined4 *)(lVar7 + uVar12 * 4 + 0x20) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x120);
        *(undefined4 *)(lVar7 + uVar12 * 4 + 0x20) = 0;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if ((uVar2 == 0) || (*(undefined4 *)(lVar7 + 0x20) = 0, uVar2 == 1)) goto LAB_072a0e30;
        fVar13 = 0.0;
        *(undefined4 *)(lVar7 + 0x24) = 0;
        if (uVar2 < 3) goto LAB_072a0e30;
      }
      else {
        lVar7 = *(long *)(unaff_x20 + 0x110);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729f59c;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f59c:
        uVar1 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x108);
        *(undefined4 *)(lVar7 + uVar12 * 4 + 0x20) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729f630;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f630:
        iVar3 = (*(code *)*puVar4)();
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar7 = *(long *)(unaff_x20 + 0x118);
        *(bool *)(lVar5 + uVar12 + 0x20) = iVar3 == 1;
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729f6e4;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f6e4:
        uVar1 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x118);
        *(undefined4 *)(lVar7 + 0x20) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729f788;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f788:
        uVar1 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x118);
        *(undefined4 *)(lVar7 + 0x24) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x110);
        *(undefined4 *)(lVar7 + 0x28) = 0;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        if (*(int *)(lVar7 + uVar12 * 4 + 0x20) == 2) {
          lVar7 = *(long *)(unaff_x20 + 0x108);
          if (lVar7 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
          if (*(char *)(lVar7 + uVar12 + 0x20) != '\0') goto LAB_0729f868;
          lVar7 = *(long *)(unaff_x20 + 0x128);
          if (lVar7 == 0) goto LAB_072a0e34;
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          if (uVar8 <= unaff_x23) goto LAB_072a0e30;
          lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_072a0e34;
          uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
          if (uVar9 <= uVar12) goto LAB_072a0e30;
          uVar1 = 0xc;
          uVar11 = 8;
        }
        else {
LAB_0729f868:
          lVar7 = *(long *)(unaff_x20 + 0x128);
          if (lVar7 == 0) goto LAB_072a0e34;
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          if (uVar8 <= unaff_x23) goto LAB_072a0e30;
          lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_072a0e34;
          uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
          if (uVar9 <= uVar12) goto LAB_072a0e30;
          uVar1 = 0xd;
          uVar11 = 7;
        }
        lVar5 = *(long *)(unaff_x20 + 0x130);
        *(undefined4 *)(lVar7 + uVar12 * 4 + 0x20) = uVar11;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (((*(uint *)(lVar5 + 0x18) <= unaff_x23) || (uVar8 <= unaff_x23)) || (uVar9 <= uVar12))
        goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x120);
        *(undefined4 *)(lVar7 + uVar12 * 4 + 0x20) = uVar1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729f96c;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f96c:
        iVar3 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x120);
        *(float *)(lVar7 + 0x20) = (float)iVar3 * unaff_s10;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729fa18;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fa18:
        iVar3 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x120);
        *(float *)(lVar7 + 0x24) = (float)iVar3 * unaff_s10;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar7 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_0729fac8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fac8:
        iVar3 = (*(code *)*puVar4)();
        if (lVar7 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_072a0e30;
        fVar13 = (float)iVar3 * unaff_s10;
      }
      lVar5 = *(long *)(unaff_x20 + 0x138);
      *(float *)(lVar7 + 0x28) = fVar13;
      if (lVar5 == 0) {
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729fe9c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fe9c:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar7 = *(long *)(unaff_x20 + 0x140);
      *(undefined4 *)(lVar5 + uVar12 * 4 + 0x20) = uVar1;
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729ff30;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729ff30:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar5 = *(long *)(unaff_x20 + 0x148);
      *(float *)(lVar7 + uVar12 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_0729ffd0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729ffd0:
      uVar1 = (*(code *)*puVar4)();
      if (lVar5 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar7 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      *(undefined4 *)(lVar5 + lVar7 + 0x20) = uVar1;
    } while ((long)uVar12 < (long)*(int *)(unaff_x20 + 200));
    do {
      unaff_x23 = unaff_x23 + 1;
      if (unaff_x23 == 2) {
        return;
      }
    } while (*(int *)(unaff_x20 + 200) < 1);
  } while( true );
}


