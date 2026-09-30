/*
FUNCTION_NAME: FUN_059c986c
ENTRY_POINT: 059c986c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_059c986c(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 059c9874 to 05ac987b has its CatchHandler @ 059c993c */
                    /* try { // try from 059c9884 to 05ac9897 has its CatchHandler @ 059c9944 */
  if ((DAT_06bc1d13 & 1) == 0) {
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    DAT_06bc1d13 = 1;
  }
  uVar3 = FUN_0511f388(*(undefined8 *)(param_1 + 0x2f8),param_2,0);
  *(long *)(param_1 + 0x2f8) = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(param_2 + 0x18))
                      (*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2d8),
                       *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
    uVar2 = uVar2 ^ 1;
  }
  FUN_059c9578(param_1,uVar2 & 1);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar1;
    }
    FUN_06361d7c(param_1,*(long *)(lVar4 + 0xb8) + 0x1c8,0);
    return;
  }
  return;
}


