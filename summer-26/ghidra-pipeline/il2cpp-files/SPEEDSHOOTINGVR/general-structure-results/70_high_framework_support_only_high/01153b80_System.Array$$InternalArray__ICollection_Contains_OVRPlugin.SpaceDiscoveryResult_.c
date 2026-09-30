/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01153b80
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long *unaff_x22;
  
  lVar1 = thunk_FUN_0103fd0c();
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_0103ffe0(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar3,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_0106e12c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


