/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_8
ENTRY_POINT: 072a0e7c
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_8(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x19;
  long *unaff_x20;
  
  puVar4 = PTR_DAT_092c21c0;
  lVar10 = *unaff_x20;
  iVar12 = *(int *)(unaff_x19 + 0x178);
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c21c0) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_072a0ed4;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0ed4:
  iVar5 = (*(code *)*puVar8)();
  if (iVar12 == iVar5) {
    return;
  }
  lVar10 = *unaff_x20;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_072a0f34;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a0f34:
  uVar6 = (*(code *)*puVar8)();
  puVar3 = PTR_DAT_092c2198;
  if ((int)uVar6 < 0x3e81) {
    if ((int)uVar6 < 0x2b12) {
      if (uVar6 == 8000) {
        lVar10 = *(long *)PTR_DAT_092c2198;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar10 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar10 + 0x18) < 9) goto LAB_072a1544;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x60);
        thunk_FUN_040ec700(unaff_x19 + 0x150);
        lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar10 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar10 + 0x18) < 9) goto LAB_072a1544;
        uVar9 = *(undefined8 *)(lVar10 + 0x60);
      }
      else {
        if (uVar6 != 0x2b11) goto LAB_072a1378;
        lVar10 = *(long *)PTR_DAT_092c2198;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar10 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar10 + 0x18) < 7) goto LAB_072a1544;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x50);
        thunk_FUN_040ec700(unaff_x19 + 0x150);
        lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar10 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar10 + 0x18) < 7) goto LAB_072a1544;
        uVar9 = *(undefined8 *)(lVar10 + 0x50);
      }
      goto LAB_072a136c;
    }
    if (uVar6 == 12000) {
      lVar10 = *(long *)PTR_DAT_092c2198;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_072a1540;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) == 0) goto LAB_072a1544;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x58);
      thunk_FUN_040ec700(unaff_x19 + 0x150);
      lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar10 == 0) goto LAB_072a1540;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) == 0) goto LAB_072a1544;
      uVar9 = *(undefined8 *)(lVar10 + 0x58);
      goto LAB_072a136c;
    }
    if (uVar6 == 16000) {
      lVar10 = *(long *)PTR_DAT_092c2198;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_072a1540;
      if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_072a1544;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x48);
      thunk_FUN_040ec700(unaff_x19 + 0x150);
      lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar10 == 0) goto LAB_072a1540;
      if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_072a1544;
      uVar9 = *(undefined8 *)(lVar10 + 0x48);
      goto LAB_072a136c;
    }
  }
  else {
    if (uVar6 < 0x5dc1) {
      if (uVar6 == 0x5622) {
        lVar10 = *(long *)PTR_DAT_092c2198;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar10 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_072a1540;
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_072a1544;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x38);
        thunk_FUN_040ec700(unaff_x19 + 0x150);
        lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar10 == 0) goto LAB_072a1540;
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_072a1544;
        uVar9 = *(undefined8 *)(lVar10 + 0x38);
      }
      else {
        if (uVar6 != 24000) goto LAB_072a1378;
        lVar10 = *(long *)PTR_DAT_092c2198;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar10 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_072a1544;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x40);
        thunk_FUN_040ec700(unaff_x19 + 0x150);
        lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar10 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_072a1544;
        uVar9 = *(undefined8 *)(lVar10 + 0x40);
      }
    }
    else if (uVar6 == 32000) {
      lVar10 = *(long *)PTR_DAT_092c2198;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_072a1540;
      if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_072a1544;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x30);
      thunk_FUN_040ec700(unaff_x19 + 0x150);
      lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar10 == 0) goto LAB_072a1540;
      if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_072a1544;
      uVar9 = *(undefined8 *)(lVar10 + 0x30);
    }
    else if (uVar6 == 48000) {
      lVar10 = *(long *)PTR_DAT_092c2198;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_072a1540;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_072a1544;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x28);
      thunk_FUN_040ec700(unaff_x19 + 0x150);
      lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar10 == 0) goto LAB_072a1540;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_072a1544;
      uVar9 = *(undefined8 *)(lVar10 + 0x28);
    }
    else {
      if (uVar6 != 0xac44) goto LAB_072a1378;
      lVar10 = *(long *)PTR_DAT_092c2198;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_072a1540;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a1544;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar10 + 0x20);
      thunk_FUN_040ec700(unaff_x19 + 0x150);
      lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar10 == 0) goto LAB_072a1540;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a1544;
      uVar9 = *(undefined8 *)(lVar10 + 0x20);
    }
LAB_072a136c:
    *(undefined8 *)(unaff_x19 + 0x158) = uVar9;
    thunk_FUN_040ec700(unaff_x19 + 0x158);
  }
LAB_072a1378:
  lVar10 = *(long *)(unaff_x19 + 0x150);
  if (lVar10 == 0) {
LAB_072a1540:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
    lVar14 = *(long *)(unaff_x19 + 0x158);
    if (lVar14 == 0) goto LAB_072a1540;
    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
      uVar11 = (ulong)*(uint *)(lVar10 + 0x24);
      iVar12 = 0;
      iVar5 = 0;
      lVar10 = 0x20;
      uVar6 = *(int *)(lVar14 + 0x24) * 3;
      do {
        uVar15 = lVar10 - 0x20;
        if (uVar15 == uVar11) {
          lVar14 = *(long *)(unaff_x19 + 0x150);
          if (lVar14 == 0) goto LAB_072a1540;
          uVar1 = iVar12 + 2;
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_072a1544;
          iVar12 = iVar12 + 1;
          uVar11 = (ulong)*(uint *)(lVar14 + (long)(int)uVar1 * 4 + 0x20);
        }
        if (uVar15 == uVar6) {
          lVar14 = *(long *)(unaff_x19 + 0x158);
          if (lVar14 == 0) goto LAB_072a1540;
          uVar6 = iVar5 + 2;
          if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_072a1544;
          iVar5 = iVar5 + 1;
          uVar6 = *(int *)(lVar14 + (long)(int)uVar6 * 4 + 0x20) * 3;
        }
        lVar14 = *(long *)(unaff_x19 + 0x160);
        if (lVar14 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_072a1544;
        *(char *)(lVar14 + lVar10) = (char)iVar12;
        lVar14 = *(long *)(unaff_x19 + 0x168);
        if (lVar14 == 0) goto LAB_072a1540;
        if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_072a1544;
        *(char *)(lVar14 + lVar10) = (char)iVar5;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x260);
      uVar6 = 0;
      uVar11 = 0;
      do {
        lVar10 = *(long *)(unaff_x19 + 0x158);
        if (lVar10 == 0) goto LAB_072a1540;
        uVar15 = uVar11 + 1;
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_072a1544;
        iVar12 = 0;
        iVar5 = *(int *)(lVar10 + 0x20 + uVar15 * 4) - *(int *)(lVar10 + 0x20 + uVar11 * 4);
        do {
          iVar2 = iVar5;
          if (0 < iVar5) {
            do {
              lVar10 = *(long *)(unaff_x19 + 0x170);
              if (lVar10 == 0) goto LAB_072a1540;
              if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_072a1544;
              lVar14 = (long)(int)uVar6;
              iVar2 = iVar2 + -1;
              uVar6 = uVar6 + 1;
              *(char *)(lVar10 + lVar14 + 0x20) = (char)iVar12;
            } while (iVar2 != 0);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 3);
        uVar11 = uVar15;
      } while (uVar15 != 0xc);
      lVar10 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_072a1520;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00();
LAB_072a1520:
      uVar7 = (*(code *)*puVar8)();
      *(undefined4 *)(unaff_x19 + 0x178) = uVar7;
      return;
    }
  }
LAB_072a1544:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


