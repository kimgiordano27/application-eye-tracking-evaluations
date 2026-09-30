/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsPcm
ENTRY_POINT: 02ce194c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsPcm(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  int iStack0000000000000164;
  int iStack000000000000016c;
  uint uStack0000000000000170;
  
  uStack0000000000000170 = *(uint *)(unaff_x29 + -0x24);
  if (uStack0000000000000170 < 0x6a94ad8f) {
    iStack000000000000016c = *(int *)(unaff_x29 + -0x24);
    if (iStack000000000000016c == 0x68027c73) {
      uVar2 = *(undefined8 *)(unaff_x29 + -8);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_MaquinaDemo_<PonerPantallaComprar>d__15_System_Collections_IEnumerator_Reset__
                        );
      MessageWithPartyID__ctor_mDD167EE35D5D78B5DF4FF4D2A2FC87A6E869AA5B(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
    }
    else if (*(int *)(unaff_x29 + -0x24) == 0x6a94ad8e) {
      uVar2 = *(undefined8 *)(unaff_x29 + -8);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
      Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
    }
  }
  else {
    iStack0000000000000164 = *(int *)(unaff_x29 + -0x24);
    if (iStack0000000000000164 == 0x6b36a54f) {
      uVar2 = *(undefined8 *)(unaff_x29 + -8);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_JsonValidatingReader_<>c_<WriteToken>b__50_1__);
      MessageWithString__ctor_m253AF9EDFA30F66B98C55658129BCD8D6AFCFC50(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
    }
    else if (*(int *)(unaff_x29 + -0x24) == 0x6c6e33e3) {
      uVar2 = *(undefined8 *)(unaff_x29 + -8);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Oculus_Interaction_Locomotion_LocomotionGate_<>c_<_ctor>b__65_0__);
      MessageWithAbuseReportRecording__ctor_m71488D6DF8300058D302B5A9597F8B7E3C3AA29E(uVar1,uVar2,0)
      ;
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
    }
  }
  return *(undefined8 *)(unaff_x29 + -0x20);
}


