/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPluginHelper$$GetPtr<NativeUtilityPlugin.SerializedShapePose>
ENTRY_POINT: 04629538
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_NativeUtilityPluginHelper__GetPtr<NativeUtilityPlugin_SerializedShapePose>
               (long param_1)

{
  long lVar1;
  
  lVar1 = thunk_FUN_03c86018(*(undefined8 *)(param_1 + 0x140));
                    /* WARNING: Could not recover jumptable at 0x0462955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


