/*
FUNCTION_NAME: Unity.Services.Analytics.AdImpressionEvent$$Validate
ENTRY_POINT: 05ab301c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Analytics_AdImpressionEvent__Validate(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_Remove__;
  puVar1 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Func<InputDevice,_InputEventPtr,_bool>>_AddCallback__
  ;
  if ((DAT_06b816be & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Func<InputDevice,_InputEventPtr,_bool>>_AddCallback__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_Remove__
                );
    DAT_06b816be = 1;
  }
  FUN_03528c10(param_1,param_1 + 0x48,param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  return;
}


