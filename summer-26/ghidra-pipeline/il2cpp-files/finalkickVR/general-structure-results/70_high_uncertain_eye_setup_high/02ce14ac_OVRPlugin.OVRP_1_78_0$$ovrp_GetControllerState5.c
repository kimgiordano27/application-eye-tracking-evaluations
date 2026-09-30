/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerState5
ENTRY_POINT: 02ce14ac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetControllerState5(void)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x29;
  undefined8 uStack0000000000000038;
  
  if (in_w8 == 0x34557eb2) {
    uStack0000000000000038 = *(undefined8 *)(unaff_x29 + -8);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
    MessageWithString__ctor_m253AF9EDFA30F66B98C55658129BCD8D6AFCFC50
              (uVar1,uStack0000000000000038,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  return *(undefined8 *)(unaff_x29 + -0x20);
}


