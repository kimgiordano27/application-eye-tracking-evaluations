/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 01db4b4c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 in_stack_00000028;
  
  uVar1 = thunk_FUN_0102bfdc();
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar2 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&PTR_PTR_0220e3b8,0);
  }
  uVar3 = *unaff_x20;
  __cxa_end_catch();
  if (in_stack_00000028._4_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c(uVar3);
  }
  return;
}


