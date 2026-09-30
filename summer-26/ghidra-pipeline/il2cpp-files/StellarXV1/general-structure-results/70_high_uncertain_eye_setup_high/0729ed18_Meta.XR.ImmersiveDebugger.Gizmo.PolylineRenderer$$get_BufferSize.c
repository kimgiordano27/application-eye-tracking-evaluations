/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$get_BufferSize
ENTRY_POINT: 0729ed18
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__get_BufferSize(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int in_w9;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar14;
  
  uVar3 = (**(code **)(param_1 + (long)(in_w9 + 0xe) * 0x10 + 0x138))();
  *(undefined4 *)(unaff_x20 + 0xd0) = uVar3;
  lVar8 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *unaff_x22) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 6) * 0x10 + 0x138);
        goto LAB_0729ee20;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00();
LAB_0729ee20:
  iVar4 = (*(code *)*puVar7)();
  lVar8 = *unaff_x19;
  uVar1 = *(ushort *)(lVar8 + 0x12e);
  uVar11 = (ulong)uVar1;
  if (iVar4 == 3) {
    if (uVar1 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          uVar3 = 1;
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a009c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
    uVar3 = 1;
  }
  else {
    if (uVar1 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0098;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0098:
    uVar3 = 2;
  }
LAB_072a009c:
  uVar5 = (*(code *)*puVar7)();
  puVar2 = PTR_DAT_092c2198;
  uVar11 = 0;
  *(undefined4 *)(unaff_x20 + 200) = uVar3;
  *(undefined4 *)(unaff_x20 + 0xcc) = uVar5;
  do {
    lVar8 = *(long *)(unaff_x20 + 0xe0);
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a012c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a012c:
    uVar3 = (*(code *)*puVar7)();
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
    lVar9 = *(long *)(unaff_x20 + 0xe8);
    *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar3;
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
    lVar8 = *unaff_x19;
    lVar9 = *(long *)(lVar9 + 0x20);
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a01b8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a01b8:
    uVar3 = (*(code *)*puVar7)();
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_072a0e30;
    lVar8 = *(long *)(unaff_x20 + 0xf0);
    *(undefined4 *)(lVar9 + uVar11 * 4 + 0x20) = uVar3;
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *(long *)puVar2;
    lVar8 = *(long *)(lVar8 + 0x20);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar2;
    }
    lVar10 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar9 = **(long **)(lVar9 + 0xb8);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0260;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0260:
    uVar6 = (*(code *)*puVar7)();
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_072a0e30;
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
    lVar10 = *(long *)(unaff_x20 + 0xf8);
    *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) =
         *(undefined4 *)(lVar9 + (long)(int)uVar6 * 4 + 0x20);
    if (lVar10 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
    lVar8 = *unaff_x19;
    lVar9 = *(long *)(lVar10 + 0x20);
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0304;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0304:
    uVar3 = (*(code *)*puVar7)();
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_072a0e30;
    lVar8 = *(long *)(unaff_x20 + 0x100);
    *(undefined4 *)(lVar9 + uVar11 * 4 + 0x20) = uVar3;
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0390;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0390:
    iVar4 = (*(code *)*puVar7)();
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
    lVar9 = *(long *)(unaff_x20 + 0x100);
    *(bool *)(lVar8 + uVar11 + 0x20) = iVar4 == 1;
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
    lVar8 = *(long *)(lVar9 + 0x20);
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
    if (*(char *)(lVar8 + uVar11 + 0x20) == '\0') {
      lVar8 = *(long *)(unaff_x20 + 0x118);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a09cc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a09cc:
      uVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar8 + 0x20) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0a68;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0a68:
      uVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar8 + 0x24) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0b08;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0b08:
      uVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x128);
      *(undefined4 *)(lVar8 + 0x28) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0b90;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0b90:
      uVar3 = (*(code *)*puVar7)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar8 = *(long *)(unaff_x20 + 0x130);
      *(undefined4 *)(lVar9 + uVar11 * 4 + 0x20) = uVar3;
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0c1c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0c1c:
      uVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x110);
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x120);
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = 0;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      uVar6 = *(uint *)(lVar8 + 0x18);
      if ((uVar6 == 0) || (*(undefined4 *)(lVar8 + 0x20) = 0, uVar6 == 1)) goto LAB_072a0e30;
      fVar14 = 0.0;
      *(undefined4 *)(lVar8 + 0x24) = 0;
      if (uVar6 < 3) goto LAB_072a0e30;
    }
    else {
      lVar8 = *(long *)(unaff_x20 + 0x110);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a04c0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a04c0:
      uVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x108);
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a054c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a054c:
      iVar4 = (*(code *)*puVar7)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar8 = *(long *)(unaff_x20 + 0x118);
      *(bool *)(lVar9 + uVar11 + 0x20) = iVar4 == 1;
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a05f8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a05f8:
      uVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar8 + 0x20) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0694;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0694:
      uVar3 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar8 + 0x24) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x110);
      *(undefined4 *)(lVar8 + 0x28) = 0;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      if (*(int *)(lVar8 + uVar11 * 4 + 0x20) == 2) {
        lVar8 = *(long *)(unaff_x20 + 0x108);
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
        if (*(char *)(lVar8 + uVar11 + 0x20) != '\0') goto LAB_072a075c;
        lVar8 = *(long *)(unaff_x20 + 0x128);
        if (lVar8 == 0) goto LAB_072a0e34;
        iVar4 = *(int *)(lVar8 + 0x18);
        if (iVar4 == 0) goto LAB_072a0e30;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_072a0e34;
        uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
        if (uVar12 <= uVar11) goto LAB_072a0e30;
        uVar3 = 0xc;
        uVar5 = 8;
      }
      else {
LAB_072a075c:
        lVar8 = *(long *)(unaff_x20 + 0x128);
        if (lVar8 == 0) goto LAB_072a0e34;
        iVar4 = *(int *)(lVar8 + 0x18);
        if (iVar4 == 0) goto LAB_072a0e30;
        lVar8 = *(long *)(lVar8 + 0x20);
        if (lVar8 == 0) goto LAB_072a0e34;
        uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
        if (uVar12 <= uVar11) goto LAB_072a0e30;
        uVar3 = 0xd;
        uVar5 = 7;
      }
      lVar9 = *(long *)(unaff_x20 + 0x130);
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar5;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (((*(int *)(lVar9 + 0x18) == 0) || (iVar4 == 0)) || (uVar12 <= uVar11)) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x120);
      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar3;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1:
      iVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x120);
      *(float *)(lVar8 + 0x20) = (float)iVar4 * -2.0;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a08e8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a08e8:
      iVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x120);
      *(float *)(lVar8 + 0x24) = (float)iVar4 * -2.0;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar8 = *(long *)(lVar9 + 0x20);
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0990;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0990:
      iVar4 = (*(code *)*puVar7)();
      if (lVar8 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a0e30;
      fVar14 = (float)iVar4 * -2.0;
    }
    lVar9 = *(long *)(unaff_x20 + 0x140);
    *(float *)(lVar8 + 0x28) = fVar14;
    if (lVar9 == 0) {
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar8 = *unaff_x19;
    lVar9 = *(long *)(lVar9 + 0x20);
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0d2c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0d2c:
    iVar4 = (*(code *)*puVar7)();
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_072a0e30;
    lVar8 = *(long *)(unaff_x20 + 0x148);
    *(float *)(lVar9 + uVar11 * 4 + 0x20) = ((float)iVar4 + 1.0) * 0.5;
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0dc4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00();
LAB_072a0dc4:
    uVar3 = (*(code *)*puVar7)();
    if (lVar8 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a0e30;
    lVar9 = uVar11 * 4;
    uVar11 = uVar11 + 1;
    *(undefined4 *)(lVar8 + lVar9 + 0x20) = uVar3;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)uVar11) {
      return;
    }
  } while( true );
}


