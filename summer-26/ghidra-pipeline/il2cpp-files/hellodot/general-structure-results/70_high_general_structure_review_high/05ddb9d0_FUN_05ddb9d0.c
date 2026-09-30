/*
FUNCTION_NAME: FUN_05ddb9d0
ENTRY_POINT: 05ddb9d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_12;functionality_data_collection_or_telemetry_hits_12
*/


void FUN_05ddb9d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar5 = Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_TypeInfo;
  puVar4 = Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_TypeInfo;
  puVar3 = Niantic_Peridot_IPeridotTelemetryProvider<PeridotHdClientTelemetryOmniProto>_TypeInfo;
  puVar2 = Oculus_Interaction_Input_IOneEuroFilter<Vector3>_TypeInfo;
  puVar1 = System_Collections_Generic_IList<Variant>_TypeInfo;
  if ((DAT_06a7afb3 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryProvider<PeridotHdClientTelemetryOmniProto>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Input_IOneEuroFilter<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_IList<Variant>_TypeInfo);
    DAT_06a7afb3 = 1;
  }
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  UnityEngine_Texture2D__ValidateFormat();
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  UnityEngine_Texture2D__ValidateFormat();
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar6,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  thunk_FUN_05ef22b8(param_1,0);
  return;
}


