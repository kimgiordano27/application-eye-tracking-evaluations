/*
FUNCTION_NAME: OVRSceneManager$$OnFloorAnchorsFetchCompleted
ENTRY_POINT: 02cec97c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 OVRSceneManager__OnFloorAnchorsFetchCompleted(void)

{
  long unaff_x29;
  Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 *in_stack_00000018;
  ulong in_stack_00000020;
  
                    /* catch() { ... } // from try @ 02cec76c with catch @ 02cec980 */
  Request_1__ctor_m029D713284EB47C08C4139CC986ED7BF3348F0DC
            (in_stack_00000018,in_stack_00000020,
             *(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_58__);
                    /* try { // try from 02cec998 to 02dec9b3 has its CatchHandler @ 02cec610 */
  *(Request_1_tB0D397F1B11033FAFA93EE15D75151B14D42DDD8 **)(unaff_x29 + -8) = in_stack_00000018;
  return *(undefined8 *)(unaff_x29 + -8);
}


