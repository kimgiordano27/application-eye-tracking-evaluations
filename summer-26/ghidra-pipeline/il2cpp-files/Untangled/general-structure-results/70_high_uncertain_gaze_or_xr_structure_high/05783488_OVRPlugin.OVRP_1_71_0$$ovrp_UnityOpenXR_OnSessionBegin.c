/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 05783488
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(ulong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5a000);
                    /* try { // try from 0578349c to 058834a3 has its CatchHandler @ 057834bc */
    *(undefined1 *)(unaff_x20 + 0x858) = 1;
  }
                    /* try { // try from 057834a4 to 058834b3 has its CatchHandler @ 05783434 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 057834b4 to 058834b7 has its CatchHandler @ 057834c4 */
  uVar1 = FUN_057834d8();
                    /* try { // try from 057834b8 to 058834bb has its CatchHandler @ 057834bc */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0578349c with catch @ 057834bc
                       catch(type#1 @ 069384f8) { ... } // from try @ 057834b8 with catch @ 057834bc
                       try { // try from 057834bc to 058834db has its CatchHandler @ 05783434 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0578347c with catch @ 057834c0
                        */
  uVar2 = FUN_05783554();
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 057834b4 with catch @ 057834c4
                        */
  FUN_05775854(uVar1,uVar2);
  return;
}


