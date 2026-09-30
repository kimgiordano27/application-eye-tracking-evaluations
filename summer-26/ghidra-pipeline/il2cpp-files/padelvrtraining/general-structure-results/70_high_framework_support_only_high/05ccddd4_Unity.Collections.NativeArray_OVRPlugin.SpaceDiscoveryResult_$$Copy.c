/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ccddd4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  uVar1 = thunk_FUN_03d2ef40();
  FUN_06ae3328();
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0xd0),uVar1);
  uVar1 = thunk_FUN_03d2ef40(*unaff_x22);
  FUN_06ae3328();
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0xd8),uVar1);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar1 = thunk_FUN_03d2ef40();
  FUN_06ae3328();
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0xe0),uVar1);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar1 = thunk_FUN_03d2ef40();
  FUN_06ae3328();
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0xe8),uVar1);
  return;
}


