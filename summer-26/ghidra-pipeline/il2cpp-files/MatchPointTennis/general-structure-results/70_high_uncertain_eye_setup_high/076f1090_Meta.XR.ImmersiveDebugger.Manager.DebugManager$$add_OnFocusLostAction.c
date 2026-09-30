/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$add_OnFocusLostAction
ENTRY_POINT: 076f1090
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__add_OnFocusLostAction(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long unaff_x19;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_076f10e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_076f10e8:
  (*(code *)*puVar2)();
  puVar1 = PTR_DAT_09f2f720;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_063928ec(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_09f2f720);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_063928ec(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


