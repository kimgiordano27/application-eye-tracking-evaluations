/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 06ad85e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  uVar1 = FUN_070cc3bc();
  *(undefined4 *)(unaff_x19 + 0x24) = 0xffffffff;
  uVar2 = FUN_03c8f97c(*unaff_x22,uVar1);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  thunk_FUN_03d233cc();
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x1b0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  uVar2 = FUN_03c8f97c(lVar3,uVar1);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x18),uVar2);
  return uVar1;
}


