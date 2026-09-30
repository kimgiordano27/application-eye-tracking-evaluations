/*
FUNCTION_NAME: UnityEngine.Material$$SetVectorArray
ENTRY_POINT: 0359dc58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 123
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_Material__SetVectorArray(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x9e0));
  *(undefined1 *)(unaff_x20 + 0xd6) = 1;
  puVar1 = PTR_DAT_03cbdf88;
  if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_036a0b88(*(long *)(unaff_x19 + 0x60),0,0);
  puVar3 = (undefined8 *)(unaff_x19 + 0x40);
  uVar4 = *puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036cee6c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *puVar3;
    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 0359dcc8 to 0369dccb has its CatchHandler @ 0359dcec */
                    /* try { // try from 0359dccc to 0369dcd3 has its CatchHandler @ 0359de80 */
    FUN_03595448(uVar4);
    *puVar3 = 0;
                    /* catch() { ... } // from try @ 0359db58 with catch @ 0359dcd4
                       try { // try from 0359dcd4 to 0369dd0b has its CatchHandler @ 0359d898 */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,0);
    return;
  }
                    /* catch() { ... } // from try @ 0359dab0 with catch @ 0359dce8 */
                    /* catch() { ... } // from try @ 0359dcc8 with catch @ 0359dcec */
                    /* catch() { ... } // from try @ 0359db24 with catch @ 0359dcf0 */
  return;
}


