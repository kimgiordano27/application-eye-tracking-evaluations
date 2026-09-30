/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 0339f7b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_01c72498();
LAB_0339f7d8:
      (*(code *)*puVar1)();
      return;
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0339f7d8;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


