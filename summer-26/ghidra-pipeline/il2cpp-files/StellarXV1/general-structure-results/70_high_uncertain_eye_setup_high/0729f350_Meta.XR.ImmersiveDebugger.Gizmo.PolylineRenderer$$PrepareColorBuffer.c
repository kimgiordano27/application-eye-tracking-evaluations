/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$PrepareColorBuffer
ENTRY_POINT: 0729f350
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__PrepareColorBuffer(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  while (*(undefined4 *)(unaff_x25 + unaff_x24 * 4 + 0x20) = param_1, in_x9 != 0) {
    if (*(uint *)(in_x9 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar10 = *(long *)(in_x9 + unaff_x23 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f3c0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f3c0:
    uVar2 = (*(code *)*puVar4)();
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    lVar5 = *(long *)(unaff_x20 + 0x100);
    *(undefined4 *)(lVar10 + unaff_x24 * 4 + 0x20) = uVar2;
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar10 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f454;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f454:
    iVar3 = (*(code *)*puVar4)();
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    lVar10 = *(long *)(unaff_x20 + 0x100);
    *(bool *)(lVar5 + unaff_x24 + 0x20) = iVar3 == 1;
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    if (*(char *)(lVar5 + unaff_x24 + 0x20) == '\0') {
      lVar5 = *(long *)(unaff_x20 + 0x118);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729fb04;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fb04:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar5 + 0x20) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729fba8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fba8:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar5 + 0x24) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729fc50;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fc50:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x128);
      *(undefined4 *)(lVar5 + 0x28) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      lVar10 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729fce0;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fce0:
      uVar2 = (*(code *)*puVar4)();
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar5 = *(long *)(unaff_x20 + 0x130);
      *(undefined4 *)(lVar10 + unaff_x24 * 4 + 0x20) = uVar2;
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto FUN_0729fd74;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
FUN_0729fd74:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x110);
      *(undefined4 *)(lVar5 + unaff_x24 * 4 + 0x20) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(undefined4 *)(lVar5 + unaff_x24 * 4 + 0x20) = 0;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (lVar5 == 0) break;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((uVar1 == 0) || (*(undefined4 *)(lVar5 + 0x20) = 0, uVar1 == 1)) goto LAB_072a0e30;
      fVar11 = 0.0;
      *(undefined4 *)(lVar5 + 0x24) = 0;
      if (uVar1 < 3) goto LAB_072a0e30;
    }
    else {
      lVar5 = *(long *)(unaff_x20 + 0x110);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f59c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f59c:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x108);
      *(undefined4 *)(lVar5 + unaff_x24 * 4 + 0x20) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      lVar10 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f630;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f630:
      iVar3 = (*(code *)*puVar4)();
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar5 = *(long *)(unaff_x20 + 0x118);
      *(bool *)(lVar10 + unaff_x24 + 0x20) = iVar3 == 1;
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f6e4;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f6e4:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar5 + 0x20) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f788;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f788:
      uVar2 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar5 + 0x24) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x110);
      *(undefined4 *)(lVar5 + 0x28) = 0;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      if (*(int *)(lVar5 + unaff_x24 * 4 + 0x20) == 2) {
        lVar5 = *(long *)(unaff_x20 + 0x108);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
        lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
        if (*(char *)(lVar5 + unaff_x24 + 0x20) != '\0') goto LAB_0729f868;
        lVar5 = *(long *)(unaff_x20 + 0x128);
        if (lVar5 == 0) break;
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar6 <= unaff_x23) goto LAB_072a0e30;
        lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar7 <= unaff_x24) goto LAB_072a0e30;
        uVar2 = 0xc;
        uVar9 = 8;
      }
      else {
LAB_0729f868:
        lVar5 = *(long *)(unaff_x20 + 0x128);
        if (lVar5 == 0) break;
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar6 <= unaff_x23) goto LAB_072a0e30;
        lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar7 <= unaff_x24) goto LAB_072a0e30;
        uVar2 = 0xd;
        uVar9 = 7;
      }
      lVar10 = *(long *)(unaff_x20 + 0x130);
      *(undefined4 *)(lVar5 + unaff_x24 * 4 + 0x20) = uVar9;
      if (lVar10 == 0) break;
      if (((*(uint *)(lVar10 + 0x18) <= unaff_x23) || (uVar6 <= unaff_x23)) || (uVar7 <= unaff_x24))
      goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(undefined4 *)(lVar5 + unaff_x24 * 4 + 0x20) = uVar2;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729f96c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f96c:
      iVar3 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(float *)(lVar5 + 0x20) = (float)iVar3 * unaff_s10;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729fa18;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fa18:
      iVar3 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(float *)(lVar5 + 0x24) = (float)iVar3 * unaff_s10;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
      lVar5 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0729fac8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fac8:
      iVar3 = (*(code *)*puVar4)();
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_072a0e30;
      fVar11 = (float)iVar3 * unaff_s10;
    }
    lVar10 = *(long *)(unaff_x20 + 0x138);
    *(float *)(lVar5 + 0x28) = fVar11;
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x23) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar10 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729fe9c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729fe9c:
    uVar2 = (*(code *)*puVar4)();
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    lVar5 = *(long *)(unaff_x20 + 0x140);
    *(undefined4 *)(lVar10 + unaff_x24 * 4 + 0x20) = uVar2;
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar10 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729ff30;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729ff30:
    iVar3 = (*(code *)*puVar4)();
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    lVar10 = *(long *)(unaff_x20 + 0x148);
    *(float *)(lVar5 + unaff_x24 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar10 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729ffd0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729ffd0:
    uVar2 = (*(code *)*puVar4)();
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    lVar5 = unaff_x24 * 4;
    unaff_x24 = unaff_x24 + 1;
    *(undefined4 *)(lVar10 + lVar5 + 0x20) = uVar2;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x24) {
      do {
        unaff_x23 = unaff_x23 + 1;
        if (unaff_x23 == 2) {
          return;
        }
      } while (*(int *)(unaff_x20 + 200) < 1);
      unaff_x24 = 0;
    }
    lVar5 = *(long *)(unaff_x20 + 0xe0);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar10 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar5 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f1d0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f1d0:
    uVar2 = (*(code *)*puVar4)();
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    lVar10 = *(long *)(unaff_x20 + 0xe8);
    *(undefined4 *)(lVar5 + unaff_x24 * 4 + 0x20) = uVar2;
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar10 = *(long *)(lVar10 + unaff_x23 * 8 + 0x20);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f264;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f264:
    uVar2 = (*(code *)*puVar4)();
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    lVar5 = *(long *)(unaff_x20 + 0xf0);
    *(undefined4 *)(lVar10 + unaff_x24 * 4 + 0x20) = uVar2;
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_072a0e30;
    lVar10 = *unaff_x21;
    unaff_x25 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar10 = *unaff_x21;
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0729f314;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729f314:
    uVar1 = (*(code *)*puVar4)();
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_072a0e30;
    if (unaff_x25 == 0) break;
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x24) goto LAB_072a0e30;
    param_1 = *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20);
    in_x9 = *(long *)(unaff_x20 + 0xf8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


