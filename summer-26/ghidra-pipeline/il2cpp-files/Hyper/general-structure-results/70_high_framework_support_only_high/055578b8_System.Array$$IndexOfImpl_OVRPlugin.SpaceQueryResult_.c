/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 055578b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined2 System_Array__IndexOfImpl<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  long *plVar1;
  undefined2 *puVar2;
  long lVar3;
  long unaff_x19;
  
  lVar3 = **(long **)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34(lVar3);
  }
  plVar1 = (long *)thunk_FUN_04983e64(param_1,lVar3);
  lVar3 = **(long **)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34(lVar3);
  }
  if (plVar1 != (long *)0x0) {
    if (*(long *)(*plVar1 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar2 = (undefined2 *)thunk_FUN_049840a8();
      return *puVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(plVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


