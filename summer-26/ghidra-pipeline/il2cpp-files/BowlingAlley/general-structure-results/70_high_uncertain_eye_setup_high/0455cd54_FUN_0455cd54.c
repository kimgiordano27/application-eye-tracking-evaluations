/*
FUNCTION_NAME: FUN_0455cd54
ENTRY_POINT: 0455cd54
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] FUN_0455cd54(undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 local_40 [16];
  
  local_40._8_8_ = 0;
  local_40._0_8_ = 0;
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  uVar3 = FUN_0455c554(param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x110));
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  local_40 = FUN_0394f338(uVar3,param_2,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x150));
  lVar4 = *(long *)(param_3 + 0x20);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  auVar5 = FUN_0455cc30(uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x158));
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray
            (local_40,auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x160));
  return local_40;
}


