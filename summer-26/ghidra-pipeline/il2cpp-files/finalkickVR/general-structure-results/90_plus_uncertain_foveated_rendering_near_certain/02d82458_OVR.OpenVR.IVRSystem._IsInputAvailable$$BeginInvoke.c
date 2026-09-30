/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._IsInputAvailable$$BeginInvoke
ENTRY_POINT: 02d82458
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


void OVR_OpenVR_IVRSystem__IsInputAvailable__BeginInvoke(long param_1)

{
  undefined8 in_stack_00000008;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0xe20));
  OVRPlugin_set_useDynamicFixedFoveatedRendering_m0AA5406E21978CDD460C239831981EF6A21DCC09
            (in_stack_00000008._7_1_ & 1,0);
  return;
}


