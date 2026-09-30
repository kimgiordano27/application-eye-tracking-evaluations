/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 087b0794
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0ac43bb0;
  if ((DAT_0b32b008 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac46ae8);
    FUN_04947ee4(PTR_DAT_0ac43bb0);
    DAT_0b32b008 = 1;
  }
  FUN_08dbf2f0(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar2 = FUN_08cff3a8(0);
  if (lVar2 != 0) {
    FUN_084659ac(lVar2,param_1,param_2,*(undefined8 *)PTR_DAT_0ac46ae8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


