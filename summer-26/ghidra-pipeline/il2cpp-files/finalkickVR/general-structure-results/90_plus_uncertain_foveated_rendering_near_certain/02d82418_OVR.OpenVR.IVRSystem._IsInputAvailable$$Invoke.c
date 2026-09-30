/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._IsInputAvailable$$Invoke
ENTRY_POINT: 02d82418
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_2;strong_foveation_hits_3;functionality_foveated_rendering
*/


void OVR_OpenVR_IVRSystem__IsInputAvailable__Invoke(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_w8;
  long unaff_x29;
  byte bStack000000000000000f;
  undefined8 uStack0000000000000010;
  
  *(undefined1 *)(unaff_x29 + -1) = in_w8;
  uStack0000000000000010 = param_2;
  if ((OVRManager_set_useDynamicFixedFoveatedRendering_m2BBB38EA8596D5006096F25E2EDE0465713D9CEA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_useDynamicFixedFoveatedRendering_m2BBB38EA8596D5006096F25E2EDE0465713D9CEA::
    s_Il2CppMethodInitialized = 1;
  }
  bStack000000000000000f = *(byte *)(unaff_x29 + -1) & 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_set_useDynamicFixedFoveatedRendering_m0AA5406E21978CDD460C239831981EF6A21DCC09
            (bStack000000000000000f & 1,0);
  return;
}


