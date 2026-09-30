/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawAxis
ENTRY_POINT: 06da4f70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawAxis(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x21) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_06da4fb8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da4fb8:
  iVar4 = (*(code *)*puVar6)();
  if (unaff_w22 == iVar4) {
    return;
  }
  lVar8 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x21) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_06da5018;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da5018:
  iVar4 = (*(code *)*puVar6)();
  puVar3 = PTR_DAT_08e8fae8;
  if (iVar4 < 0x3e81) {
    if (iVar4 < 0x2b12) {
      if (iVar4 == 8000) {
        lVar8 = *(long *)PTR_DAT_08e8fae8;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_06da5628;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x60);
        thunk_FUN_03d233cc(unaff_x19 + 0x150);
        lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_06da5628;
        uVar7 = *(undefined8 *)(lVar8 + 0x60);
      }
      else {
        if (iVar4 != 0x2b11) goto LAB_06da545c;
        lVar8 = *(long *)PTR_DAT_08e8fae8;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_06da5628;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x50);
        thunk_FUN_03d233cc(unaff_x19 + 0x150);
        lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_06da5628;
        uVar7 = *(undefined8 *)(lVar8 + 0x50);
      }
      goto LAB_06da5450;
    }
    if (iVar4 == 12000) {
      lVar8 = *(long *)PTR_DAT_08e8fae8;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_06da5628;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x58);
      thunk_FUN_03d233cc(unaff_x19 + 0x150);
      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_06da5628;
      uVar7 = *(undefined8 *)(lVar8 + 0x58);
      goto LAB_06da5450;
    }
    if (iVar4 == 16000) {
      lVar8 = *(long *)PTR_DAT_08e8fae8;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_06da5628;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x48);
      thunk_FUN_03d233cc(unaff_x19 + 0x150);
      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_06da5628;
      uVar7 = *(undefined8 *)(lVar8 + 0x48);
      goto LAB_06da5450;
    }
  }
  else {
    if (iVar4 < 0x5dc1) {
      if (iVar4 == 0x5622) {
        lVar8 = *(long *)PTR_DAT_08e8fae8;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da5628;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x38);
        thunk_FUN_03d233cc(unaff_x19 + 0x150);
        lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06da5628;
        uVar7 = *(undefined8 *)(lVar8 + 0x38);
      }
      else {
        if (iVar4 != 24000) goto LAB_06da545c;
        lVar8 = *(long *)PTR_DAT_08e8fae8;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_06da5628;
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x40);
        thunk_FUN_03d233cc(unaff_x19 + 0x150);
        lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar8 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_06da5628;
        uVar7 = *(undefined8 *)(lVar8 + 0x40);
      }
    }
    else if (iVar4 == 32000) {
      lVar8 = *(long *)PTR_DAT_08e8fae8;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da5628;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x30);
      thunk_FUN_03d233cc(unaff_x19 + 0x150);
      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06da5628;
      uVar7 = *(undefined8 *)(lVar8 + 0x30);
    }
    else if (iVar4 == 48000) {
      lVar8 = *(long *)PTR_DAT_08e8fae8;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da5628;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x28);
      thunk_FUN_03d233cc(unaff_x19 + 0x150);
      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06da5628;
      uVar7 = *(undefined8 *)(lVar8 + 0x28);
    }
    else {
      if (iVar4 != 0xac44) goto LAB_06da545c;
      lVar8 = *(long *)PTR_DAT_08e8fae8;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da5628;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(lVar8 + 0x20);
      thunk_FUN_03d233cc(unaff_x19 + 0x150);
      lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar8 == 0) goto LAB_06da5624;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06da5628;
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
    }
LAB_06da5450:
    *(undefined8 *)(unaff_x19 + 0x158) = uVar7;
    thunk_FUN_03d233cc(unaff_x19 + 0x158);
  }
LAB_06da545c:
  lVar8 = *(long *)(unaff_x19 + 0x150);
  if (lVar8 == 0) {
LAB_06da5624:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (1 < *(uint *)(lVar8 + 0x18)) {
    lVar13 = *(long *)(unaff_x19 + 0x158);
    if (lVar13 == 0) goto LAB_06da5624;
    if (1 < *(uint *)(lVar13 + 0x18)) {
      uVar12 = *(uint *)(lVar8 + 0x24);
      iVar4 = 0;
      iVar9 = 0;
      uVar14 = *(int *)(lVar13 + 0x24) * 3;
      lVar8 = 0x20;
      do {
        uVar10 = lVar8 - 0x20;
        if (uVar10 == uVar12) {
          lVar13 = *(long *)(unaff_x19 + 0x150);
          if (lVar13 == 0) goto LAB_06da5624;
          if (*(uint *)(lVar13 + 0x18) <= iVar4 + 2U) goto LAB_06da5628;
          uVar12 = *(uint *)(lVar13 + (long)(int)(iVar4 + 2U) * 4 + 0x20);
          iVar4 = iVar4 + 1;
        }
        if (uVar10 == uVar14) {
          lVar13 = *(long *)(unaff_x19 + 0x158);
          if (lVar13 == 0) goto LAB_06da5624;
          uVar14 = iVar9 + 2;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_06da5628;
          iVar9 = iVar9 + 1;
          uVar14 = *(int *)(lVar13 + (long)(int)uVar14 * 4 + 0x20) * 3;
        }
        lVar13 = *(long *)(unaff_x19 + 0x160);
        if (lVar13 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_06da5628;
        *(char *)(lVar13 + lVar8) = (char)iVar4;
        lVar13 = *(long *)(unaff_x19 + 0x168);
        if (lVar13 == 0) goto LAB_06da5624;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_06da5628;
        *(char *)(lVar13 + lVar8) = (char)iVar9;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x260);
      uVar12 = 0;
      uVar10 = 0;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x158);
        if (lVar8 == 0) goto LAB_06da5624;
        uVar1 = uVar10 + 1;
        if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_06da5628;
        iVar4 = 0;
        iVar9 = *(int *)(lVar8 + 0x20 + uVar1 * 4) - *(int *)(lVar8 + 0x20 + uVar10 * 4);
        do {
          iVar2 = iVar9;
          if (0 < iVar9) {
            do {
              lVar8 = *(long *)(unaff_x19 + 0x170);
              if (lVar8 == 0) goto LAB_06da5624;
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_06da5628;
              lVar13 = (long)(int)uVar12;
              iVar2 = iVar2 + -1;
              uVar12 = uVar12 + 1;
              *(char *)(lVar8 + lVar13 + 0x20) = (char)iVar4;
            } while (iVar2 != 0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 3);
        uVar10 = uVar1;
      } while (uVar1 != 0xc);
      lVar8 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x21) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06da5604;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06da5604:
      uVar5 = (*(code *)*puVar6)();
      *(undefined4 *)(unaff_x19 + 0x178) = uVar5;
      return;
    }
  }
LAB_06da5628:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


