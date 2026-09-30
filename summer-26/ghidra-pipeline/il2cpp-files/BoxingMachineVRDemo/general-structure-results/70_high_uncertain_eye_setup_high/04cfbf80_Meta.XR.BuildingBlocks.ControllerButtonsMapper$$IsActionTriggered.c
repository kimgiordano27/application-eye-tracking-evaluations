/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsActionTriggered
ENTRY_POINT: 04cfbf80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsActionTriggered(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 != 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04cfc0d4;
    uVar3 = FUN_061c5b10(*(long *)(unaff_x20 + 0x18),0);
    puVar2 = PTR_DAT_06769ce0;
    lVar6 = *(long *)PTR_DAT_06769ce0;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar2;
    }
    FUN_063063e4(uVar3,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 8),0);
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar4 = (long *)FUN_061c5b10(*(long *)(unaff_x20 + 0x18),0);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0676a278 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
          (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0676a278)
          ) && (plVar4 = (long *)FUN_06307338(plVar4,0), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      }
    }
    plVar4 = *(long **)(unaff_x20 + 0x10);
    if (plVar4 != (long *)0x0) {
      lVar6 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0(lVar6);
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_04cfc0b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,lVar6,4);
LAB_04cfc0b8:
                    /* WARNING: Could not recover jumptable at 0x04cfc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      return;
    }
  }
LAB_04cfc0d4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


