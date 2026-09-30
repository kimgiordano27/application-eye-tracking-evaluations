/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 050a28a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  uVar1 = thunk_FUN_03ac74bc();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090(*(long *)(unaff_x19 + 0x20));
  }
  FUN_0679343c(uVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  thunk_FUN_03afed3c(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


