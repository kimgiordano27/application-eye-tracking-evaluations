/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 039fb040
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_03037804(*(undefined8 *)(param_1 + 0xda8));
  uVar1 = thunk_FUN_0301080c();
  uVar2 = thunk_FUN_03037804(PTR_DAT_06f98db0);
  FUN_05b00444(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar1);
}


