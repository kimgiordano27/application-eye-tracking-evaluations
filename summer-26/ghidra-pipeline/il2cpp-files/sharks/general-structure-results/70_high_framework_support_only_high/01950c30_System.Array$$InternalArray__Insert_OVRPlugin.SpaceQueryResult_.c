/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01950c30
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>(void)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x20;
  
  uVar1 = thunk_FUN_02a4fb2c();
  if ((uVar1 & 1) != 0) {
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar2 = *unaff_x20;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = thunk_FUN_02a4fb2c(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)PTR_DAT_037f57b8,0);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


