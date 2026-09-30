/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_7
ENTRY_POINT: 072a0d90
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_7
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  long lVar8;
  int *piVar9;
  int *in_x10;
  long in_x11;
  undefined4 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  do {
    if (in_x11 == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xe) * 0x10 + 0x138);
      goto LAB_072a0dc4;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0dc4:
        uVar3 = (*(code *)*puVar4)();
        if (unaff_x21 == 0) goto LAB_072a0e34;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar8 = unaff_x23 * 4;
        unaff_x23 = unaff_x23 + 1;
        *(undefined4 *)(unaff_x21 + lVar8 + 0x20) = uVar3;
        if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x23) {
          return;
        }
        lVar8 = *(long *)(unaff_x20 + 0xe0);
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_072a012c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a012c:
        uVar3 = (*(code *)*puVar4)();
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0xe8);
        *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = uVar3;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
        lVar8 = *unaff_x19;
        lVar5 = *(long *)(lVar5 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_072a01b8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a01b8:
        uVar3 = (*(code *)*puVar4)();
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar8 = *(long *)(unaff_x20 + 0xf0);
        *(undefined4 *)(lVar5 + unaff_x23 * 4 + 0x20) = uVar3;
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
        lVar5 = *unaff_x24;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar5 = *unaff_x24;
        }
        lVar6 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_072a0260;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0260:
        uVar1 = (*(code *)*puVar4)();
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_072a0e30;
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar6 = *(long *)(unaff_x20 + 0xf8);
        *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) =
             *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20);
        if (lVar6 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_072a0e30;
        lVar8 = *unaff_x19;
        lVar5 = *(long *)(lVar6 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_072a0304;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0304:
        uVar3 = (*(code *)*puVar4)();
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar8 = *(long *)(unaff_x20 + 0x100);
        *(undefined4 *)(lVar5 + unaff_x23 * 4 + 0x20) = uVar3;
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
        lVar5 = *unaff_x19;
        lVar8 = *(long *)(lVar8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_072a0390;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0390:
        iVar2 = (*(code *)*puVar4)();
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar5 = *(long *)(unaff_x20 + 0x100);
        *(bool *)(lVar8 + unaff_x23 + 0x20) = iVar2 == 1;
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
        lVar8 = *(long *)(lVar5 + 0x20);
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        if (*(char *)(lVar8 + unaff_x23 + 0x20) == '\0') {
          lVar8 = *(long *)(unaff_x20 + 0x118);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a09cc;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a09cc:
          uVar3 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x118);
          *(undefined4 *)(lVar8 + 0x20) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a0a68;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0a68:
          uVar3 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x118);
          *(undefined4 *)(lVar8 + 0x24) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a0b08;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0b08:
          uVar3 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x128);
          *(undefined4 *)(lVar8 + 0x28) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *unaff_x19;
          lVar5 = *(long *)(lVar5 + 0x20);
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a0b90;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0b90:
          uVar3 = (*(code *)*puVar4)();
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar8 = *(long *)(unaff_x20 + 0x130);
          *(undefined4 *)(lVar5 + unaff_x23 * 4 + 0x20) = uVar3;
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + 0x20);
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a0c1c;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0c1c:
          uVar3 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x110);
          *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x120);
          *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = 0;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if ((uVar1 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0, uVar1 == 1)) goto LAB_072a0e30;
          fVar11 = 0.0;
          *(undefined4 *)(lVar8 + 0x24) = 0;
          if (uVar1 < 3) goto LAB_072a0e30;
        }
        else {
          lVar8 = *(long *)(unaff_x20 + 0x110);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          lVar8 = *(long *)(lVar8 + 0x20);
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a04c0;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a04c0:
          uVar3 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x108);
          *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *unaff_x19;
          lVar5 = *(long *)(lVar5 + 0x20);
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a054c;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a054c:
          iVar2 = (*(code *)*puVar4)();
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar8 = *(long *)(unaff_x20 + 0x118);
          *(bool *)(lVar5 + unaff_x23 + 0x20) = iVar2 == 1;
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar8 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a05f8;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a05f8:
          uVar3 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x118);
          *(undefined4 *)(lVar8 + 0x20) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a0694;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0694:
          uVar3 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x118);
          *(undefined4 *)(lVar8 + 0x24) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x110);
          *(undefined4 *)(lVar8 + 0x28) = 0;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          if (*(int *)(lVar8 + unaff_x23 * 4 + 0x20) == 2) {
            lVar8 = *(long *)(unaff_x20 + 0x108);
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
            lVar8 = *(long *)(lVar8 + 0x20);
            if (lVar8 == 0) goto LAB_072a0e34;
            if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
            if (*(char *)(lVar8 + unaff_x23 + 0x20) != '\0') goto LAB_072a075c;
            lVar8 = *(long *)(unaff_x20 + 0x128);
            if (lVar8 == 0) goto LAB_072a0e34;
            iVar2 = *(int *)(lVar8 + 0x18);
            if (iVar2 == 0) goto LAB_072a0e30;
            lVar8 = *(long *)(lVar8 + 0x20);
            if (lVar8 == 0) goto LAB_072a0e34;
            uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
            if (uVar7 <= unaff_x23) goto LAB_072a0e30;
            uVar3 = 0xc;
            uVar10 = 8;
          }
          else {
LAB_072a075c:
            lVar8 = *(long *)(unaff_x20 + 0x128);
            if (lVar8 == 0) goto LAB_072a0e34;
            iVar2 = *(int *)(lVar8 + 0x18);
            if (iVar2 == 0) goto LAB_072a0e30;
            lVar8 = *(long *)(lVar8 + 0x20);
            if (lVar8 == 0) goto LAB_072a0e34;
            uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
            if (uVar7 <= unaff_x23) goto LAB_072a0e30;
            uVar3 = 0xd;
            uVar10 = 7;
          }
          lVar5 = *(long *)(unaff_x20 + 0x130);
          *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = uVar10;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (((*(int *)(lVar5 + 0x18) == 0) || (iVar2 == 0)) || (uVar7 <= unaff_x23))
          goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x120);
          *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = uVar3;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1:
          iVar2 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x120);
          *(float *)(lVar8 + 0x20) = (float)iVar2 * unaff_s10;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a08e8;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a08e8:
          iVar2 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
          lVar5 = *(long *)(unaff_x20 + 0x120);
          *(float *)(lVar8 + 0x24) = (float)iVar2 * unaff_s10;
          if (lVar5 == 0) goto LAB_072a0e34;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
          lVar8 = *(long *)(lVar5 + 0x20);
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_072a0e30;
          lVar5 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          lVar8 = *(long *)(lVar8 + unaff_x23 * 8 + 0x20);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_072a0990;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0990:
          iVar2 = (*(code *)*puVar4)();
          if (lVar8 == 0) goto LAB_072a0e34;
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
          fVar11 = (float)iVar2 * unaff_s10;
        }
        lVar5 = *(long *)(unaff_x20 + 0x140);
        *(float *)(lVar8 + 0x28) = fVar11;
        if (lVar5 == 0) {
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar8 = *unaff_x19;
        lVar5 = *(long *)(lVar5 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_072a0d2c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a0d2c:
        iVar2 = (*(code *)*puVar4)();
        if (lVar5 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar8 = *(long *)(unaff_x20 + 0x148);
        *(float *)(lVar5 + unaff_x23 * 4 + 0x20) = ((float)iVar2 + unaff_s8) * unaff_s9;
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
        param_1 = *unaff_x19;
        unaff_x21 = *(long *)(lVar8 + 0x20);
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


