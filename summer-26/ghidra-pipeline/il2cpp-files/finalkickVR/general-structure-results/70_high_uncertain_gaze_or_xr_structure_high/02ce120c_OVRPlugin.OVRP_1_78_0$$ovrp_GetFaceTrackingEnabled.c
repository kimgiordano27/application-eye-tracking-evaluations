/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 02ce120c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(void)

{
  undefined8 uVar1;
  undefined4 in_w8;
  undefined8 uVar2;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0x54) = in_w8;
  if (*(int *)(unaff_x29 + -0x54) == 0x121c317c) {
    uVar2 = *(undefined8 *)(unaff_x29 + -8);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Newtonsoft_Json_JsonValidatingReader_SchemaScope_GetRequiredProperties__
                      );
    MessageWithUserCapabilityList__ctor_m68B5BF01D0327AC3E13FEEA1EC8FA5D9592E26F8(uVar1,uVar2,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -0x24);
    if (*(int *)(unaff_x29 + -0x58) == 0x1569feb5) {
      uVar2 = *(undefined8 *)(unaff_x29 + -8);
      uVar1 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Newtonsoft_Json_JsonTextReader_<ParseUnquotedPropertyAsync>d__33_MoveNext__
                        );
      MessageWithNetSyncConnection__ctor_mB80EE97D0AD3D32FD288FB8ECD2F0E2152FC51CC(uVar1,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
    }
  }
  return *(undefined8 *)(unaff_x29 + -0x20);
}


