/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 04d62bdc
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long in_x9;
  long in_x10;
  ulong in_x12;
  long *unaff_x23;
  
  puVar1 = (ulong *)(in_x9 + param_1 * 8 + in_x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x12 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d62c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x23 + 0x188))();
  return;
}


