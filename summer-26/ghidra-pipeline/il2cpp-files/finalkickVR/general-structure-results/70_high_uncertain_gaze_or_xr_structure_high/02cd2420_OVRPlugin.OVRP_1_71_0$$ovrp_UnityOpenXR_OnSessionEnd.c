/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 02cd2420
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 in_stack_00000010;
  
  uVar1 = (*CAPI_ovr_Microphone_ReadData_m3383CAA6F5C12FE3959ABF3640FB2918AF90B6F0::
            il2cppPInvokeFunc)
                    (*(undefined8 *)(unaff_x29 + -8),in_stack_00000010,
                     *(undefined8 *)(unaff_x29 + -0x18));
  return uVar1;
}


