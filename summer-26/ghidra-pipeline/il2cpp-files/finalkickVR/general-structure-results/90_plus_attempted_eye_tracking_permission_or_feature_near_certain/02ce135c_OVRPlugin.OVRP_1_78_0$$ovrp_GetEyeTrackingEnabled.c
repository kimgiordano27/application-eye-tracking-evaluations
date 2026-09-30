/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 02ce135c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 uStack0000000000000118;
  
  if (*(int *)(unaff_x29 + -0x7c) == 0x267db4f4) {
    uStack0000000000000118 = *(undefined8 *)(unaff_x29 + -8);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)Method_TMPro_KerningTable_<>c_<SortKerningPairs>b__7_1__);
    Message__ctor_m47141728F28DC527D3A2E609BAF53C97A7D63EB9(uVar1,uStack0000000000000118,0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  }
  return *(undefined8 *)(unaff_x29 + -0x20);
}


