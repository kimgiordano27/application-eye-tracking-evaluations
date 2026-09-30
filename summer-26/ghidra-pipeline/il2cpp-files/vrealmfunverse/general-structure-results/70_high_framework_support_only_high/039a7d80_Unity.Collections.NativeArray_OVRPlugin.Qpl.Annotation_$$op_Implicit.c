/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 039a7d80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Implicit(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 039a7d7c with catch @ 039a7d8c */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(0x22);
  }
                    /* try { // try from 039a7d90 to 03aa7d97 has its CatchHandler @ 039a7da0 */
  iVar1 = *(int *)(param_1 + 0x18);
                    /* try { // try from 039a7d98 to 03aa7da3 has its CatchHandler @ 039a786c */
  if (1 < iVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039a7d90 with catch @ 039a7da0
                        */
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1b0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_03908cd0(uVar3,0,iVar1);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


