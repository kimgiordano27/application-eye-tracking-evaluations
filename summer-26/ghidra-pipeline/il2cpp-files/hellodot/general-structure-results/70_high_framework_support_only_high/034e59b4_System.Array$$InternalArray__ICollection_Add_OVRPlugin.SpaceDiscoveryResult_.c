/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 034e59b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  long unaff_x29;
  
  if (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
  pcVar2 = (char *)thunk_FUN_02cea9e8();
  cVar1 = *pcVar2;
  thunk_FUN_05e8e510();
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return cVar1 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


