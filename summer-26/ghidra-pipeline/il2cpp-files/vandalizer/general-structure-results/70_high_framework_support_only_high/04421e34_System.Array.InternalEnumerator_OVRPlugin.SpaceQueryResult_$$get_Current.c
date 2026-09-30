/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 04421e34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  int *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
                    /* try { // try from 04421e38 to 04521e4f has its CatchHandler @ 04421f14 */
    puVar1 = (undefined8 *)(param_1 + unaff_x21);
    *puVar1 = 0;
    puVar1[1] = 0;
    thunk_FUN_0329bf60(puVar1,0);
    unaff_x20 = unaff_x20 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)(*unaff_x19 + -1) <= (long)unaff_x20) break;
    param_1 = *(long *)(unaff_x19 + 6);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x20;
  }
  *unaff_x19 = 0;
                    /* try { // try from 04421e6c to 04521ebf has its CatchHandler @ 04421f1c */
  return;
}


