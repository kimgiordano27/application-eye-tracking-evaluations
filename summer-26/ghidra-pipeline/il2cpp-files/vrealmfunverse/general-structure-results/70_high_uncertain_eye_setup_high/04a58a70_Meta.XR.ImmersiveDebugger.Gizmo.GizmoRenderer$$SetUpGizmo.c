/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$SetUpGizmo
ENTRY_POINT: 04a58a70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a58d2c) */

uint Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__SetUpGizmo(ulong param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    *(undefined1 *)(unaff_x22 + 0xa6a) = 1;
  }
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar6 = thunk_FUN_02b79644();
    uVar7 = thunk_FUN_02ba3594(PTR_DAT_0631f410);
    FUN_04cee07c(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6);
  }
  if ((int)param_2[4] == 0) {
    uVar2 = 0;
  }
  else if (unaff_x21 == param_2) {
    uVar2 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218(lVar8);
    }
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a58b2c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c();
LAB_04a58b2c:
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar1 = PTR_DAT_06312f90;
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a58ba0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar1,0);
LAB_04a58ba0:
      uVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        break;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a58c28;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,lVar8,0);
LAB_04a58c28:
      uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      uVar10 = FUN_04a57494(param_2,uVar3,
                            *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
    } while ((uVar10 & 1) == 0);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a58cc0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06312f78,0);
LAB_04a58cc0:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
  }
  return uVar2 & 1;
}


