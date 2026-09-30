/*
FUNCTION_NAME: OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F
ENTRY_POINT: 02d800c8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F::s_Il2CppMethodInitialized =
         1;
  }
  *(undefined4 *)(param_1 + 0x34) = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_SetClientColorDesc_m7E7BD58DCDF8C2320A4741E1D45F0CECB72CD346(uVar1,0);
  return;
}


