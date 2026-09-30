/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 05353f40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long unaff_x22;
  
  pcVar2 = *(code **)(unaff_x22 + 0x6f8);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05353ee4 with catch @ 05353f4c
                        */
  if (pcVar2 == (code *)0x0) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05353ef0 with catch @ 05353f50
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05353ec4 with catch @ 05353f54
                        */
                    /* try { // try from 05353f70 to 05453f73 has its CatchHandler @ 05353f94 */
                    /* try { // try from 05353f74 to 05453f97 has its CatchHandler @ 05353e0c */
    pcVar2 = (code *)thunk_FUN_02f454a0();
                    /* catch() { ... } // from try @ 05353f70 with catch @ 05353f94 */
    *(code **)(unaff_x22 + 0x6f8) = pcVar2;
  }
                    /* try { // try from 05353f98 to 05453f9f has its CatchHandler @ 05353fa8 */
                    /* try { // try from 05353fa0 to 05453fab has its CatchHandler @ 05353e0c */
  iVar1 = (*pcVar2)(param_1,param_2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05353f98 with catch @ 05353fa8
                        */
  return iVar1 != 0;
}


