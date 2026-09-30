/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 054db934
PROGRAM: MRTraveler-libil2cpp.so
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
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  lVar1 = FUN_03cf1244();
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0xa0) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  uVar2 = thunk_FUN_03cf5234();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244(*(long *)(unaff_x19 + 0x20));
  }
  FUN_07145224(uVar2,0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  thunk_FUN_03d233cc(*(undefined8 *)(lVar1 + 0xb8),uVar2);
  return;
}


