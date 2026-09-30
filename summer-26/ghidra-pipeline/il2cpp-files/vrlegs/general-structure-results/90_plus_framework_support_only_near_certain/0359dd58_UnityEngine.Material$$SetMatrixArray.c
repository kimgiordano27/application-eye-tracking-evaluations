/*
FUNCTION_NAME: UnityEngine.Material$$SetMatrixArray
ENTRY_POINT: 0359dd58
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


void UnityEngine_Material__SetMatrixArray(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *unaff_x22;
  
  uVar1 = FUN_036cee6c(param_1,param_2,0);
                    /* try { // try from 0359dd60 to 0369dd7f has its CatchHandler @ 0359d898 */
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 0359dd80 to 0369dd8f has its CatchHandler @ 0359dd9c */
    FUN_036d441c(uVar3,0);
  }
  puVar4 = (undefined8 *)(unaff_x19 + 0x40);
  uVar3 = *puVar4;
                    /* catch() { ... } // from try @ 0359dd28 with catch @ 0359dd90 */
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
                    /* catch() { ... } // from try @ 0359dd0c with catch @ 0359dd9c
                       catch() { ... } // from try @ 0359dd80 with catch @ 0359dd9c */
                    /* try { // try from 0359dda4 to 0369dda7 has its CatchHandler @ 0359df30 */
                    /* try { // try from 0359dda8 to 0369ddcb has its CatchHandler @ 0359d898 */
  uVar1 = FUN_036cee6c(uVar3,0,0);
                    /* catch() { ... } // from try @ 0359dd2c with catch @ 0359ddac */
  if ((uVar1 & 1) != 0) {
    uVar3 = *puVar4;
    if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 0359ddcc to 0369ddcf has its CatchHandler @ 0359de60 */
    FUN_03595448(uVar3);
    *puVar4 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,0);
  }
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar1 = FUN_036cee6c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      FUN_0357f024(*(long *)(unaff_x19 + 0x70),1,0);
      plVar2 = *(long **)(unaff_x19 + 0x70);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0359de44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  return;
}


