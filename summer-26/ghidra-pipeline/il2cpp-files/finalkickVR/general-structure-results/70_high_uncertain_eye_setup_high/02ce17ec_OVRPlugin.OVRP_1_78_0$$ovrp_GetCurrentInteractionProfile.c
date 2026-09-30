/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetCurrentInteractionProfile
ENTRY_POINT: 02ce17ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetCurrentInteractionProfile(void)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 uVar2;
  long unaff_x29;
  int iStack00000000000001a4;
  
  if (in_w8 == 0x58129c8e) {
    uVar2 = *(undefined8 *)(unaff_x29 + -8);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
    Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(uVar1,uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  else {
    iStack00000000000001a4 = *(int *)(unaff_x29 + -0x24);
    if (iStack00000000000001a4 == 0x5842d210) {
      uVar2 = *(undefined8 *)(unaff_x29 + -8);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
      MessageWithString__ctor_m253AF9EDFA30F66B98C55658129BCD8D6AFCFC50(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
    }
  }
  return *(undefined8 *)(unaff_x29 + -0x20);
}


