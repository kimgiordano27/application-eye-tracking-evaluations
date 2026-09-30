/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetMatrix34TrackedDeviceProperty$$Invoke
ENTRY_POINT: 02d800d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty__Invoke
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long unaff_x29;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000018;
  
  *(undefined4 *)(unaff_x29 + -0xc) = param_2;
  uStack0000000000000018 = param_3;
  if ((OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_colorGamut_m12885C55A4AF562CF4DA969CE3DFE90B2905509F::s_Il2CppMethodInitialized =
         1;
  }
  uStack0000000000000014 = *(undefined4 *)(unaff_x29 + -0xc);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x34) = uStack0000000000000014;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x34);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_SetClientColorDesc_m7E7BD58DCDF8C2320A4741E1D45F0CECB72CD346(uVar1,0);
  return;
}


