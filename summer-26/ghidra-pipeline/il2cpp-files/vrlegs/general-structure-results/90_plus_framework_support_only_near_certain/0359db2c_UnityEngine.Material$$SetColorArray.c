/*
FUNCTION_NAME: UnityEngine.Material$$SetColorArray
ENTRY_POINT: 0359db2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 140
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void UnityEngine_Material__SetColorArray(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x798));
  *(undefined1 *)(unaff_x20 + 0xd5) = 1;
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    *(undefined1 *)(unaff_x19 + 0x78) = 1;
  }
  iVar2 = UnityEngine_UIElements_BaseTreeViewController__RegenerateWrappers();
                    /* try { // try from 0359db58 to 0369db67 has its CatchHandler @ 0359dcd4 */
  if (iVar2 != 0x34) {
    FUN_036d46a4();
  }
                    /* try { // try from 0359db74 to 0369dbab has its CatchHandler @ 0359dce0 */
  lVar3 = FUN_0359d484();
  uVar4 = FUN_0359d5ac();
  puVar1 = PTR_DAT_03cbdf88;
  if (lVar3 != 0) {
    FUN_036a0b88(lVar3,uVar4,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036cee6c(uVar4,0,0);
    puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar3 != 0) {
      thunk_FUN_0369b650(DAT_00d38ba4,DAT_00d38ba4,DAT_00d38d70,DAT_00d38d70,lVar3,
                         *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


