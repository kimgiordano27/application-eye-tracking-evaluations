/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 03ca6134
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(void)

{
  int *unaff_x19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  int *piVar1;
  
  piVar1 = unaff_x19 + 2;
  FUN_0550b264(*(undefined8 *)piVar1,unaff_w20);
  *(undefined8 *)piVar1 = unaff_x21;
  LeanTween__value(piVar1);
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


