/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 02ce13fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  undefined8 uVar1;
  undefined4 in_w8;
  long unaff_x29;
  undefined8 uStack0000000000000038;
  
  *(undefined4 *)(unaff_x29 + -0x90) = in_w8;
  if (*(int *)(unaff_x29 + -0x90) == 0x30ff006e) {
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


