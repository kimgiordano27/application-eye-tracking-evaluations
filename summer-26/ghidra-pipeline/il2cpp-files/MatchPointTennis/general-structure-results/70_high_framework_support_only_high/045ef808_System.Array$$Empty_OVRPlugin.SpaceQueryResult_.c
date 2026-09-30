/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 045ef808
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceQueryResult>(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  lVar1 = FUN_078a7764(param_1,param_2,0);
                    /* try { // try from 045ef814 to 046ef81b has its CatchHandler @ 045efeec */
  if (lVar1 != 0) {
    uVar2 = FUN_078b4364(lVar1,0);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
    thunk_FUN_044bb4b4(unaff_x19 + 0x148);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)PTR_DAT_09f23bc8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0460772c(uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


