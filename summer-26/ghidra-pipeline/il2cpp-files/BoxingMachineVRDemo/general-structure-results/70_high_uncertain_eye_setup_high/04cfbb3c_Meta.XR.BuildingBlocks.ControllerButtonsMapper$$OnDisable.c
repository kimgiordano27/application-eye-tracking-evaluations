/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnDisable
ENTRY_POINT: 04cfbb3c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnDisable
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04cfbb70;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_04cfbb70:
  uVar9 = (*(code *)*puVar2)();
  plVar8 = *(long **)(unaff_x19 + 0x10);
  plVar4 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar4;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_04cfbbf4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar8,lVar3,3);
LAB_04cfbbf4:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      plVar4 = (long *)FUN_061c5b10(*(long *)(unaff_x19 + 0x18),0);
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0676a278 + 0x130);
        if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
            (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)PTR_DAT_0676a278)) &&
           (plVar4 = (long *)FUN_06307338(plVar4,0), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x04cfbc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x178))(plVar4,1,*(undefined8 *)(*plVar4 + 0x180));
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


