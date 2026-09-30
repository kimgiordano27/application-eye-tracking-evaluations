/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._GetSkeletalActionData$$EndInvoke
ENTRY_POINT: 02dabba8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte OVR_OpenVR_IVRInput__GetSkeletalActionData__EndInvoke(undefined8 param_1)

{
  int iVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
  if ((OVRPlugin_get_occlusionMesh_m9DE08B59CA33AE2D60BA00BE9E167C14EE617904::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_occlusionMesh_m9DE08B59CA33AE2D60BA00BE9E167C14EE617904::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bStack000000000000000f = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes__
              );
    iVar1 = OVRP_1_3_0_ovrp_GetEyeOcclusionMeshEnabled_m72B7CD6083DF055E1818859D7804943948F73504(0);
    *(bool *)(unaff_x29 + -1) = iVar1 == 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


