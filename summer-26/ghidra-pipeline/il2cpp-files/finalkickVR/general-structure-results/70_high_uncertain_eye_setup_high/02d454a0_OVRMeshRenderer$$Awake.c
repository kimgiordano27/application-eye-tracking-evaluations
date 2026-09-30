/*
FUNCTION_NAME: OVRMeshRenderer$$Awake
ENTRY_POINT: 02d454a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRMeshRenderer__Awake(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iStack0000000000000004;
  int iStack0000000000000018;
  
  iStack0000000000000004 = param_2;
  iStack0000000000000018 = param_2;
  piVar1 = (int *)il2cpp_codegen_static_fields_for((Il2CppClass *)*param_1);
  *piVar1 = iStack0000000000000004;
  if (iStack0000000000000018 == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_StopFaceTracking_mD1CB1B3F06682649BBF402FDBA0D3999C5E3ABAC(0);
  }
  return;
}


