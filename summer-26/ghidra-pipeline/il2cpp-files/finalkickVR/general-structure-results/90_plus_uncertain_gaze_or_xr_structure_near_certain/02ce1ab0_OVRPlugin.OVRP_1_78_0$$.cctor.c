/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$.cctor
ENTRY_POINT: 02ce1ab0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_OVRP_1_78_0___cctor(void)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 uVar2;
  int in_w9;
  long unaff_x29;
  
  if (in_w8 == in_w9) {
    uVar2 = *(undefined8 *)(unaff_x29 + -8);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
    MessageWithNetSyncSessionList__ctor_m689E8689B14269A4859C6227AD608162E56C05BF(uVar1,uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  else if (*(int *)(unaff_x29 + -0x24) == 0x6fb63223) {
    uVar2 = *(undefined8 *)(unaff_x29 + -8);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
    MessageWithString__ctor_m253AF9EDFA30F66B98C55658129BCD8D6AFCFC50(uVar1,uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  return *(undefined8 *)(unaff_x29 + -0x20);
}


