/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 03b5dc50
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo(void)

{
  long lVar1;
  undefined4 *puVar2;
  long *unaff_x19;
  
  lVar1 = FUN_02ce0978();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
    puVar2 = (undefined4 *)thunk_FUN_02cea9e8();
    FUN_03b5db18(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce8018();
}


