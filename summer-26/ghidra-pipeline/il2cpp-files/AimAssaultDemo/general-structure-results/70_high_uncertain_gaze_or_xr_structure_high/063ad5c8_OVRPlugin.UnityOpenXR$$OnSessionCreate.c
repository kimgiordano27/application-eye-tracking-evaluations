/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 063ad5c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_062d5fcc();
                    /* try { // try from 063ad5d4 to 064ad5df has its CatchHandler @ 063ad804 */
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6f18);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar1,uVar2);
}


