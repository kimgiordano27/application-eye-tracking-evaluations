/*
FUNCTION_NAME: UnityEngine.UI.DefaultControls$$CreateButton
ENTRY_POINT: 075bc5f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 114
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4 UnityEngine_UI_DefaultControls__CreateButton(ulong param_1,long param_2)

{
  long unaff_x19;
  long lVar1;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(OVRManager_<>c_TypeInfo);
    *(undefined1 *)(unaff_x19 + 0x512) = 1;
  }
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_2,0);
    }
    if (DAT_0826e620 == (code *)0x0) {
      DAT_0826e620 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Transform::get_lossyScale_Injected(System.IntPtr,UnityEngine.Vector3&)"
                                         );
    }
    (*DAT_0826e620)(lVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


