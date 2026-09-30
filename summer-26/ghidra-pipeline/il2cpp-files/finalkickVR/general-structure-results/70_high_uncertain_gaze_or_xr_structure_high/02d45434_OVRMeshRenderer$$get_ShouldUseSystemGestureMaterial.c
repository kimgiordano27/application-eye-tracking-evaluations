/*
FUNCTION_NAME: OVRMeshRenderer$$get_ShouldUseSystemGestureMaterial
ENTRY_POINT: 02d45434
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_possible_biometrics_hits_2
*/


void OVRMeshRenderer__get_ShouldUseSystemGestureMaterial(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iStack0000000000000004;
  undefined8 *puStack0000000000000008;
  int iStack000000000000001c;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  puStack0000000000000008 =
       (undefined8 *)Method_UnityEngine_UIElements_TooltipEvent_<>c_<_cctor>b__0_0__;
  uStack0000000000000020 = param_2;
  uStack0000000000000028 = param_1;
  if ((OVRFaceExpressions_OnDisable_m8D89111056630F2180307A621868965E037EC550::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_TooltipEvent_<>c_<_cctor>b__0_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRFaceExpressions_OnDisable_m8D89111056630F2180307A621868965E037EC550::
    s_Il2CppMethodInitialized = 1;
  }
  piVar2 = (int *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008);
  iStack000000000000001c = *piVar2;
  iVar1 = il2cpp_codegen_subtract<int,int>(iStack000000000000001c,1);
  iStack0000000000000004 = iVar1;
  piVar2 = (int *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008);
  *piVar2 = iStack0000000000000004;
  if (iVar1 == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_StopFaceTracking_mD1CB1B3F06682649BBF402FDBA0D3999C5E3ABAC(0);
  }
  return;
}


