/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 05b8f140
PROGRAM: waitwhat-libil2cpp.so
SCORE: 114
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x14) * 0x10 + 0x138);
      goto LAB_05b8f184;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05b8f184:
                    /* WARNING: Could not recover jumptable at 0x05b8f198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


