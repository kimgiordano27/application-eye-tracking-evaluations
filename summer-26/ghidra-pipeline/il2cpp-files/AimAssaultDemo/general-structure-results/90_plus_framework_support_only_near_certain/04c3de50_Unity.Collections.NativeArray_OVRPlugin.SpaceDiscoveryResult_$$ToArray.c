/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 04c3de50
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int in_w9;
  
  plVar4 = (long *)(**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07d990b0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07d990b0)) {
      uVar2 = FUN_07837238(plVar4,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
      }
      FUN_0755e78c(~uVar2 & 1,*(undefined8 *)PTR_DAT_07d990b8,0);
      uVar5 = FUN_07834444();
      if ((uVar5 & 1) != 0) {
        FUN_07837088(plVar4,0);
      }
      uVar5 = FUN_07837098();
      if ((uVar5 & 1) != 0) {
        FUN_078370c4(plVar4,0);
      }
      uVar2 = FUN_07837244(plVar4,0);
      uVar3 = FUN_07837244();
      FUN_07837250(plVar4,(uVar2 | uVar3) & 1,0);
    }
  }
  FUN_07836ecc();
  return;
}


