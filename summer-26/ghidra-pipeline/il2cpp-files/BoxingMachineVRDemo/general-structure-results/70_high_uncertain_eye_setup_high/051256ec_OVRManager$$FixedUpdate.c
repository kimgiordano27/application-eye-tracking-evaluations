/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 051256ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  long in_x10;
  int *piVar2;
  long unaff_x20;
  
  piVar2 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
      goto code_r0x05125724;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02d9a5d4();
code_r0x05125724:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e42304();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae0();
}


