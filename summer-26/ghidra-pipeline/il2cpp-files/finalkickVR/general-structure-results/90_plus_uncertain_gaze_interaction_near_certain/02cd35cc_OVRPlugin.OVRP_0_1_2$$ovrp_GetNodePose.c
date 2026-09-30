/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 02cd35cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;functionality_gaze_interaction_hits_5
*/


undefined8 OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_Packet_GetSenderID_mC806B4B4BF5283F8AFBF95D10A8ACDA1693ED743::il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(long),18ul,23ul>_char_const____18ul__char_const____23ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (0xa295d1);
  if (CAPI_ovr_Packet_GetSenderID_mC806B4B4BF5283F8AFBF95D10A8ACDA1693ED743::il2cppPInvokeFunc !=
      (code *)0x0) {
    uVar1 = (*CAPI_ovr_Packet_GetSenderID_mC806B4B4BF5283F8AFBF95D10A8ACDA1693ED743::
              il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x698e);
}


