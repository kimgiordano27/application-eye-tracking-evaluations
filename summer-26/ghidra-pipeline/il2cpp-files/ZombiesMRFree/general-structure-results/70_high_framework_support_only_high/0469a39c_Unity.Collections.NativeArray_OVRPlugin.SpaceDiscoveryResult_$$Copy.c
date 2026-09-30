/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 0469a39c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  uVar4 = FUN_02fe9340(lVar3,unaff_w21);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  FUN_0469a84c(uVar1,uVar2,uVar4,uVar2 & 0xffffffff,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x88))
  ;
  return uVar4;
}


