/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperone._GetPlayAreaSize$$Invoke
ENTRY_POINT: 02d8aee0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_IVRChaperone__GetPlayAreaSize__Invoke(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  long in_stack_00000380;
  undefined8 *in_stack_000003a0;
  
  uVar2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B();
  uVar1 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),in_stack_00000008);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),uVar2,uVar1,in_stack_00000008);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x101) & 1,in_stack_00000008);
  return;
}


