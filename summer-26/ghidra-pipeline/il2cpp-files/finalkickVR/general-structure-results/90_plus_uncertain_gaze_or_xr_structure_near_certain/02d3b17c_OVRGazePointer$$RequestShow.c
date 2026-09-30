/*
FUNCTION_NAME: OVRGazePointer$$RequestShow
ENTRY_POINT: 02d3b17c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRGazePointer__RequestShow(ulong param_1)

{
  long lVar1;
  void *pvVar2;
  long unaff_x29;
  ulong *in_stack_00000000;
  undefined1 uStack000000000000000e;
  byte bStack000000000000000f;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000000);
    OVRCameraRig_OnBeforeRenderCallback_m4E49C09AB1FD27AAC93CC1C9EF037F57BE65BA43::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined1 *)(unaff_x29 + -0x11) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
  if (*(int *)(lVar1 + 0x100) == 1) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
    pvVar2 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar2);
    bStack000000000000000f = *(byte *)((long)pvVar2 + 0x111) & 1;
    *(byte *)(unaff_x29 + -0x11) = bStack000000000000000f;
    uStack000000000000000e = *(byte *)(unaff_x29 + -0x11) & 1;
    VirtualActionInvoker2<bool,bool>::Invoke
              (9,*(Il2CppObject **)(unaff_x29 + -8),true,(bool)uStack000000000000000e);
  }
  return;
}


