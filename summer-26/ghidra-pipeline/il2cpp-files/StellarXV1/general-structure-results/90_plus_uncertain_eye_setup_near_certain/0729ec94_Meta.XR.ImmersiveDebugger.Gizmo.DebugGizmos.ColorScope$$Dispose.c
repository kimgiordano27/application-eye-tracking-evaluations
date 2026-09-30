/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 0729ec94
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  ulong uVar13;
  int *in_x10;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar15;
  
  do {
    in_x9 = in_x9 + -1;
    piVar14 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar8 = (undefined8 *)FUN_040b1e00();
      goto LAB_0729ed24;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar14;
  } while (*plVar1 != param_3);
  puVar8 = (undefined8 *)(param_1 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
LAB_0729ed24:
  uVar4 = (*(code *)*puVar8)();
  *(undefined4 *)(unaff_x20 + 0xd0) = uVar4;
  lVar9 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x22) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 6) * 0x10 + 0x138);
        goto LAB_0729ee20;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00();
LAB_0729ee20:
  iVar5 = (*(code *)*puVar8)();
  lVar9 = *unaff_x19;
  uVar2 = *(ushort *)(lVar9 + 0x12e);
  uVar12 = (ulong)uVar2;
  if (iVar5 == 3) {
    if (uVar2 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          uVar4 = 1;
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a009c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
    uVar4 = 1;
  }
  else {
    if (uVar2 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0098;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0098:
    uVar4 = 2;
  }
LAB_072a009c:
  uVar6 = (*(code *)*puVar8)();
  puVar3 = PTR_DAT_092c2198;
  uVar12 = 0;
  *(undefined4 *)(unaff_x20 + 200) = uVar4;
  *(undefined4 *)(unaff_x20 + 0xcc) = uVar6;
  do {
    lVar9 = *(long *)(unaff_x20 + 0xe0);
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
    lVar10 = *unaff_x19;
    lVar9 = *(long *)(lVar9 + 0x20);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a012c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a012c:
    uVar4 = (*(code *)*puVar8)();
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
    lVar10 = *(long *)(unaff_x20 + 0xe8);
    *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar4;
    if (lVar10 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    lVar10 = *(long *)(lVar10 + 0x20);
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a01b8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a01b8:
    uVar4 = (*(code *)*puVar8)();
    if (lVar10 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_072a0e30;
    lVar9 = *(long *)(unaff_x20 + 0xf0);
    *(undefined4 *)(lVar10 + uVar12 * 4 + 0x20) = uVar4;
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
    lVar10 = *(long *)puVar3;
    lVar9 = *(long *)(lVar9 + 0x20);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar10 = *(long *)puVar3;
    }
    lVar11 = *unaff_x19;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0260;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0260:
    uVar7 = (*(code *)*puVar8)();
    if (lVar10 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_072a0e30;
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
    lVar11 = *(long *)(unaff_x20 + 0xf8);
    *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) =
         *(undefined4 *)(lVar10 + (long)(int)uVar7 * 4 + 0x20);
    if (lVar11 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *unaff_x19;
    lVar10 = *(long *)(lVar11 + 0x20);
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0304;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0304:
    uVar4 = (*(code *)*puVar8)();
    if (lVar10 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_072a0e30;
    lVar9 = *(long *)(unaff_x20 + 0x100);
    *(undefined4 *)(lVar10 + uVar12 * 4 + 0x20) = uVar4;
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
    lVar10 = *unaff_x19;
    lVar9 = *(long *)(lVar9 + 0x20);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0390;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0390:
    iVar5 = (*(code *)*puVar8)();
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
    lVar10 = *(long *)(unaff_x20 + 0x100);
    *(bool *)(lVar9 + uVar12 + 0x20) = iVar5 == 1;
    if (lVar10 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
    lVar9 = *(long *)(lVar10 + 0x20);
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
    if (*(char *)(lVar9 + uVar12 + 0x20) == '\0') {
      lVar9 = *(long *)(unaff_x20 + 0x118);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar9 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a09cc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a09cc:
      uVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar9 + 0x20) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0a68;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0a68:
      uVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar9 + 0x24) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0b08;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0b08:
      uVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x128);
      *(undefined4 *)(lVar9 + 0x28) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      lVar10 = *(long *)(lVar10 + 0x20);
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0b90;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0b90:
      uVar4 = (*(code *)*puVar8)();
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x130);
      *(undefined4 *)(lVar10 + uVar12 * 4 + 0x20) = uVar4;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0c1c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0c1c:
      uVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x110);
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = 0;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      uVar7 = *(uint *)(lVar9 + 0x18);
      if ((uVar7 == 0) || (*(undefined4 *)(lVar9 + 0x20) = 0, uVar7 == 1)) goto LAB_072a0e30;
      fVar15 = 0.0;
      *(undefined4 *)(lVar9 + 0x24) = 0;
      if (uVar7 < 3) goto LAB_072a0e30;
    }
    else {
      lVar9 = *(long *)(unaff_x20 + 0x110);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      lVar9 = *(long *)(lVar9 + 0x20);
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a04c0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a04c0:
      uVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x108);
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *unaff_x19;
      lVar10 = *(long *)(lVar10 + 0x20);
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a054c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a054c:
      iVar5 = (*(code *)*puVar8)();
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar9 = *(long *)(unaff_x20 + 0x118);
      *(bool *)(lVar10 + uVar12 + 0x20) = iVar5 == 1;
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar9 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a05f8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a05f8:
      uVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar9 + 0x20) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0694;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0694:
      uVar4 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x118);
      *(undefined4 *)(lVar9 + 0x24) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x110);
      *(undefined4 *)(lVar9 + 0x28) = 0;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      if (*(int *)(lVar9 + uVar12 * 4 + 0x20) == 2) {
        lVar9 = *(long *)(unaff_x20 + 0x108);
        if (lVar9 == 0) goto LAB_072a0e34;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_072a0e34;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
        if (*(char *)(lVar9 + uVar12 + 0x20) != '\0') goto LAB_072a075c;
        lVar9 = *(long *)(unaff_x20 + 0x128);
        if (lVar9 == 0) goto LAB_072a0e34;
        iVar5 = *(int *)(lVar9 + 0x18);
        if (iVar5 == 0) goto LAB_072a0e30;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_072a0e34;
        uVar13 = (ulong)*(uint *)(lVar9 + 0x18);
        if (uVar13 <= uVar12) goto LAB_072a0e30;
        uVar4 = 0xc;
        uVar6 = 8;
      }
      else {
LAB_072a075c:
        lVar9 = *(long *)(unaff_x20 + 0x128);
        if (lVar9 == 0) goto LAB_072a0e34;
        iVar5 = *(int *)(lVar9 + 0x18);
        if (iVar5 == 0) goto LAB_072a0e30;
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_072a0e34;
        uVar13 = (ulong)*(uint *)(lVar9 + 0x18);
        if (uVar13 <= uVar12) goto LAB_072a0e30;
        uVar4 = 0xd;
        uVar6 = 7;
      }
      lVar10 = *(long *)(unaff_x20 + 0x130);
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar6;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (((*(int *)(lVar10 + 0x18) == 0) || (iVar5 == 0)) || (uVar13 <= uVar12)) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar4;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1:
      iVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(float *)(lVar9 + 0x20) = (float)iVar5 * -2.0;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a08e8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a08e8:
      iVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a0e30;
      lVar10 = *(long *)(unaff_x20 + 0x120);
      *(float *)(lVar9 + 0x24) = (float)iVar5 * -2.0;
      if (lVar10 == 0) goto LAB_072a0e34;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a0e30;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
      lVar10 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
            goto LAB_072a0990;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0990:
      iVar5 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_072a0e34;
      if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_072a0e30;
      fVar15 = (float)iVar5 * -2.0;
    }
    lVar10 = *(long *)(unaff_x20 + 0x140);
    *(float *)(lVar9 + 0x28) = fVar15;
    if (lVar10 == 0) {
LAB_072a0e34:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_072a0e30:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar9 = *unaff_x19;
    lVar10 = *(long *)(lVar10 + 0x20);
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0d2c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0d2c:
    iVar5 = (*(code *)*puVar8)();
    if (lVar10 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_072a0e30;
    lVar9 = *(long *)(unaff_x20 + 0x148);
    *(float *)(lVar10 + uVar12 * 4 + 0x20) = ((float)iVar5 + 1.0) * 0.5;
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a0e30;
    lVar10 = *unaff_x19;
    lVar9 = *(long *)(lVar9 + 0x20);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x22) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_072a0dc4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0dc4:
    uVar4 = (*(code *)*puVar8)();
    if (lVar9 == 0) goto LAB_072a0e34;
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a0e30;
    lVar10 = uVar12 * 4;
    uVar12 = uVar12 + 1;
    *(undefined4 *)(lVar9 + lVar10 + 0x20) = uVar4;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)uVar12) {
      return;
    }
  } while( true );
}


