/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 0143c814
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry___cctor(void)

{
  undefined8 uVar1;
  long unaff_x19;
  int unaff_w20;
  long in_stack_00000098;
  
  do {
    FUN_0132138c();
    uVar1 = FUN_0132138c();
    FUN_01436444(uVar1,in_stack_00000098,in_stack_00000098);
    FUN_0132138c();
    if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_014359a0();
    unaff_w20 = unaff_w20 + 1;
  } while (unaff_w20 < *(int *)(unaff_x19 + 0x18));
  FUN_01325140();
  return;
}


