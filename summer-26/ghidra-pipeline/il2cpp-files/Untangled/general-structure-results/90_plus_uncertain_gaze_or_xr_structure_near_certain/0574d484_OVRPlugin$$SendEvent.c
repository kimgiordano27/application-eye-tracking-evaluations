/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 0574d484
PROGRAM: Untangled-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__SendEvent(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  long in_x11;
  long in_stack_00000018;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0574d4b4:
      uVar2 = (*(code *)*puVar1)();
      *(undefined8 *)(in_stack_00000018 + 0x18) = uVar2;
      thunk_FUN_02f411dc();
      *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
      return 1;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02eea86c();
      goto LAB_0574d4b4;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


