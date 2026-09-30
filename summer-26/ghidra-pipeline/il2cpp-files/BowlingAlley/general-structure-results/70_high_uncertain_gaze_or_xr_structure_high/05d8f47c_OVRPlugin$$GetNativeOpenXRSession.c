/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 05d8f47c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(code *param_1,undefined8 param_2,uint param_3)

{
  long unaff_x21;
  
  if (param_1 == (code *)0x0) {
                    /* try { // try from 05d8f490 to 05e8f4d7 has its CatchHandler @ 05d8f384 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d8f420 with catch @ 05d8f4b4
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d8f424 with catch @ 05d8f4b8
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d8f3f8 with catch @ 05d8f4bc
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d8f44c with catch @ 05d8f4c0
                        */
    param_1 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality
                                ();
    *(code **)(unaff_x21 + 0x488) = param_1;
  }
                    /* try { // try from 05d8f4d8 to 05e8f4db has its CatchHandler @ 05d8f500 */
  (*param_1)(param_2,param_3 & 1);
                    /* try { // try from 05d8f4dc to 05e8f503 has its CatchHandler @ 05d8f384 */
  return;
}


