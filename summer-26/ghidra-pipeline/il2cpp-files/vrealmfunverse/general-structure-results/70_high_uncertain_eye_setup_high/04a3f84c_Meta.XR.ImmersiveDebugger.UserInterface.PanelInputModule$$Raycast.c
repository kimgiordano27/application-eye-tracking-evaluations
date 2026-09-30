/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 04a3f84c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a3fa34) */

uint Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  
  puVar4 = (undefined8 *)FUN_02b7654c(param_1,param_2,0);
  puVar2 = PTR_DAT_06312f90;
  puVar1 = PTR_DAT_06312f78;
  plVar5 = (long *)(*(code *)*puVar4)();
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a3f8e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar2,0);
LAB_04a3f8e0:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a3f968;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar5,lVar6,0);
LAB_04a3f968:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    uVar8 = FUN_04a3d0b4();
  } while ((uVar8 & 1) != 0);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a3f9fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar1,0);
LAB_04a3f9fc:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  return (uVar3 ^ 1) & 1;
}


