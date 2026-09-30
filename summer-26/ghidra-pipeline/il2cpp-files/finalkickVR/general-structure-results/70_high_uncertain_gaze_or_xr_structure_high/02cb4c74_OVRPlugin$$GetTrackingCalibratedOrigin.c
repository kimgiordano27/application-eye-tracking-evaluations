/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 02cb4c74
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(utils *param_1,__5 *param_2)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined4 uStack0000000000000004;
  long lStack0000000000000028;
  
  lStack0000000000000028 = unaff_x29 + -8;
  il2cpp::utils::
  Finally<AvatarEditorOptions_Finalize_mD8C0E1E1AAD7C157DE4271D27CF7E017FE7AEA4C::__5>
            (param_1,param_2);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  CAPI_ovr_AvatarEditorOptions_Destroy_m80B54FA105B02E17746CB9D0A61FE252E7984C52(uVar1,0);
  uStack0000000000000004 = 2;
  il2cpp::utils::
  FinallyHelper<AvatarEditorOptions_Finalize_mD8C0E1E1AAD7C157DE4271D27CF7E017FE7AEA4C::$_5,false>::
  ~FinallyHelper((FinallyHelper<AvatarEditorOptions_Finalize_mD8C0E1E1AAD7C157DE4271D27CF7E017FE7AEA4C::__5,false>
                  *)(unaff_x29 + -0x20));
  return;
}


