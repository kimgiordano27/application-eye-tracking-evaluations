/*
FUNCTION_NAME: UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1
ENTRY_POINT: 02dd24b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


void UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = 
  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_<WithUsages>b__14_0__
  ;
  if ((UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_<WithUsages>b__14_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
  if ((bVar2 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRP_1_71_0_ovrp_UnityOpenXR_OnSessionExiting_m96D792305E0AC78FCE1108E81761615DFC70DCF7
              (param_1,0);
  }
  return;
}


