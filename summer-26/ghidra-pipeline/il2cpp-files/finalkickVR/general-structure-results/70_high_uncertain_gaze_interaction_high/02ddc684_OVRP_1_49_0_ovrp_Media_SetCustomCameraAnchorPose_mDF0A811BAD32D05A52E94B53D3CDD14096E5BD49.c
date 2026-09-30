/*
FUNCTION_NAME: OVRP_1_49_0_ovrp_Media_SetCustomCameraAnchorPose_mDF0A811BAD32D05A52E94B53D3CDD14096E5BD49
ENTRY_POINT: 02ddc684
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_6;functionality_gaze_interaction_hits_6
*/


undefined4
OVRP_1_49_0_ovrp_Media_SetCustomCameraAnchorPose_mDF0A811BAD32D05A52E94B53D3CDD14096E5BD49
          (undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_49_0_ovrp_Media_SetCustomCameraAnchorPose_mDF0A811BAD32D05A52E94B53D3CDD14096E5BD49::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long,Posef_t51A2C10B4094B44A8D3C1913292B839172887B61),10ul,37ul>_char_const____10ul__char_const____37ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ("OVRPlugin","ovrp_Media_SetCustomCameraAnchorPose",1,2,0x24,0);
    OVRP_1_49_0_ovrp_Media_SetCustomCameraAnchorPose_mDF0A811BAD32D05A52E94B53D3CDD14096E5BD49::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_49_0_ovrp_Media_SetCustomCameraAnchorPose_mDF0A811BAD32D05A52E94B53D3CDD14096E5BD49::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x54a8);
    }
  }
  uVar2 = (*OVRP_1_49_0_ovrp_Media_SetCustomCameraAnchorPose_mDF0A811BAD32D05A52E94B53D3CDD14096E5BD49
            ::il2cppPInvokeFunc)(param_1);
  return uVar2;
}


