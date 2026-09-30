/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 054dba5c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0xb0) + 8;
    do {
      if (*(long *)(lVar1 + -8) == param_3) goto LAB_054dbaa0;
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 != 0);
  }
  FUN_03cf1348();
LAB_054dbaa0:
  FUN_06731f30();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_054dc32c();
  return;
}


