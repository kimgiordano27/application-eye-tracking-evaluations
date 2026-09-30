/*
FUNCTION_NAME: OVRPlugin$$AreControllerDrivenHandPosesNatural
ENTRY_POINT: 02cb1e88
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__AreControllerDrivenHandPosesNatural(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0x158));
  uVar1 = CAPI_ovr_AbuseReport_ReportRequestHandled_m8F696D24A4DD09351EE9536DB757E9431AFB2BCB
                    (*(undefined4 *)(unaff_x29 + -0x20));
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_AddDeviceEntry__
                    );
  Request__ctor_m1E18C977DA3EFD314F430CAB4B36134F3A6D712A(uVar2,uVar1,0);
  *(undefined8 *)(unaff_x29 + -8) = uVar2;
  return *(undefined8 *)(unaff_x29 + -8);
}


