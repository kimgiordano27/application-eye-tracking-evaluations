/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 048d3e84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long in_x10;
  
  uVar2 = (**(code **)(in_x10 + 0x1b8))
                    (*(undefined4 *)(param_1 + 0x30),param_2,*(undefined8 *)(in_x10 + 0x1c0));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_048d51e0();
  }
  return bVar1;
}


