/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.RoomFace>
ENTRY_POINT: 0382ac54
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_RoomFace>(void)

{
  long *plVar1;
  long lVar2;
  char *in_stack_00000020;
  undefined8 *in_stack_00000028;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (*in_stack_00000020 != '\0') {
    thunk_FUN_036509ac(*in_stack_00000028,0);
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00(lVar2);
}


