/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 02cb4d68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void OVRPlugin__RecenterTrackingOrigin(long param_1)

{
  code *extraout_x0;
  long unaff_x29;
  
  if ((*(long *)(param_1 + 0xce0) == 0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long),18ul,32ul>_char_const____18ul__char_const____32ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1),
     CAPI_ovr_AvatarEditorOptions_Destroy_m80B54FA105B02E17746CB9D0A61FE252E7984C52::
     il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x7680);
  }
  (*CAPI_ovr_AvatarEditorOptions_Destroy_m80B54FA105B02E17746CB9D0A61FE252E7984C52::
    il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return;
}


