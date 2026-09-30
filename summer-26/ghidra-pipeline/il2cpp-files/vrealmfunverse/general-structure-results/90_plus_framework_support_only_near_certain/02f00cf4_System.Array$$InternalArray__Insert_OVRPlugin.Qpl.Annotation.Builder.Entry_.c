/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 02f00cf4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__Insert<OVRPlugin_Qpl_Annotation_Builder_Entry>(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_035410a4(&stack0x00000010);
    uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  }
  return uVar1;
}


