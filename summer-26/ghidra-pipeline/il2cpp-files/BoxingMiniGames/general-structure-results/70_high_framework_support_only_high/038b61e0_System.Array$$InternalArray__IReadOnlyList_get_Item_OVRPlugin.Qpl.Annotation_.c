/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 038b61e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Qpl_Annotation>
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  *(long *)(unaff_x20 + 0x28) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x20) = param_2._0_8_;
  *(long *)(unaff_x20 + 0x38) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x30) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x18) = param_3._8_8_;
  *(long *)(unaff_x20 + 0x10) = param_3._0_8_;
  thunk_FUN_036b7ad0(param_4,0);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x038b6214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


