/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 051234c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x22;
  int unaff_w23;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_051234ec;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_051234ec:
  (*(code *)*puVar3)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0();
  }
  if (((unaff_w23 == 7) || (unaff_w23 == 0)) && (uVar4 = FUN_050f1f10(), (uVar4 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 0;
  }
  return;
}


