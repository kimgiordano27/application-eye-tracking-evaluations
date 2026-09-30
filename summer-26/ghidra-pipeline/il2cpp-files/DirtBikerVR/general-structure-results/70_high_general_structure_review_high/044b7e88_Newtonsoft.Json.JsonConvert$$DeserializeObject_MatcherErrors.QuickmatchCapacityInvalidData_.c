/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.QuickmatchCapacityInvalidData>
ENTRY_POINT: 044b7e88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_QuickmatchCapacityInvalidData>
          (long param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  uVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b7ea8 to 045b7ecf has its CatchHandler @ 044b7f78 */
  UnityEngine_InputSystem_InputControl<Pose>__CompareValue();
  return uVar1;
}


