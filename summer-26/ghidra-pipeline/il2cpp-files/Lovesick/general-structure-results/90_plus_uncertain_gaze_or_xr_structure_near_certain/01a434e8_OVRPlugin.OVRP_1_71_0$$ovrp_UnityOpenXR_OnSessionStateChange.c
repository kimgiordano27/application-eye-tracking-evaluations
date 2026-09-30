/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 01a434e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(long *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000018;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x18);
  FUN_0129de0c(*param_1,&stack0x00000018,*unaff_x23);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00dbe778();
}


