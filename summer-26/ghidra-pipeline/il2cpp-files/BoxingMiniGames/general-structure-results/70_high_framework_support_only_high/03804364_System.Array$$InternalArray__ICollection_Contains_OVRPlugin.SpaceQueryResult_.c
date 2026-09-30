/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03804364
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((*(char *)(lVar1 + 0xe8) != '\0') && (*(char *)(lVar1 + 0x102) == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}


