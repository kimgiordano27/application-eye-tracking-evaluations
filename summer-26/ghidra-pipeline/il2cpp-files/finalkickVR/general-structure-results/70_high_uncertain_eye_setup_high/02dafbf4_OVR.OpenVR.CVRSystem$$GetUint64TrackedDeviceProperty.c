/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetUint64TrackedDeviceProperty
ENTRY_POINT: 02dafbf4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVR_OpenVR_CVRSystem__GetUint64TrackedDeviceProperty
               (void *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvStack0000000000000048;
  undefined8 *puStack0000000000000050;
  ulong *puStack0000000000000058;
  undefined4 in_stack_00000120;
  undefined4 uStack0000000000000124;
  undefined4 in_stack_00000128;
  byte bStack000000000000012f;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 uStack00000000000001a0;
  undefined4 uStack00000000000001ac;
  
  puStack0000000000000050 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_888B401F8D910154C25F410FF2032A9BDF9062B9B62A4D5046CC927159677815
  ;
  puStack0000000000000058 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  pvStack0000000000000048 = param_1;
  uStack00000000000001a0 = param_3;
  uStack00000000000001ac = param_2;
  if ((OVRPlugin_GetControllerState4_m728848DEFBC02ED0E9A2064A9D230F96D1C36760::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_888B401F8D910154C25F410FF2032A9BDF9062B9B62A4D5046CC927159677815
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000058);
    OVRPlugin_GetControllerState4_m728848DEFBC02ED0E9A2064A9D230F96D1C36760::
    s_Il2CppMethodInitialized = 1;
  }
  memset(&stack0x00000140,0,0x60);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000058);
  in_stack_00000138 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000050);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000050);
  in_stack_00000130 = *puVar1;
  bStack000000000000012f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (in_stack_00000138,in_stack_00000130,0);
  bStack000000000000012f = bStack000000000000012f & 1;
  if (bStack000000000000012f == 0) {
    in_stack_00000120 = uStack00000000000001ac;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000058);
    OVRPlugin_GetControllerState2_mF786249CBA5D0B982D07F2166DCF1DA9573B5E90(in_stack_00000120);
    memcpy(&stack0x000000e0,&stack0x000000a0,0x40);
    memset(pvStack0000000000000048,0,0x60);
    memcpy(&stack0x00000060,&stack0x000000e0,0x40);
    ControllerState4__ctor_mA5FE4C52D5ED20979D9BF951EEF3BC8D469FF0BA
              (pvStack0000000000000048,&stack0x00000060,0);
  }
  else {
    il2cpp_codegen_initobj(&stack0x00000140,0x60);
    in_stack_00000128 = uStack00000000000001ac;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000050);
    uStack0000000000000124 =
         OVRP_1_16_0_ovrp_GetControllerState4_m8D64E03AFE6015331731685D139E9A81D82C68D3
                   (in_stack_00000128,&stack0x00000140,0);
    memcpy(pvStack0000000000000048,&stack0x00000140,0x60);
  }
  return;
}


