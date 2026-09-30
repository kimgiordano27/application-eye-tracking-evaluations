/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04c3e28c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03775678(param_1);
  }
  if (param_4 != 0) {
    lVar1 = FUN_04c3e34c(param_4,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
    return lVar1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x60);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  lVar1 = FUN_0440a6e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x58));
  if (lVar1 != 0) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(lVar1 + 0x68) = param_2;
    *(undefined4 *)(lVar1 + 0x6c) = param_3;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(lVar1 + 0x70) = param_2;
    *(undefined4 *)(lVar1 + 0x74) = param_3;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


