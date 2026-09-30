/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger.<>c$$<GetClosestSeatPoseDebugger>b__82_1
ENTRY_POINT: 077204cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c__<GetClosestSeatPoseDebugger>b__82_1
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_044822ac();
LAB_077204f0:
                    /* WARNING: Could not recover jumptable at 0x07720524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)();
      return;
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x12) * 0x10 + 0x138);
      goto LAB_077204f0;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


