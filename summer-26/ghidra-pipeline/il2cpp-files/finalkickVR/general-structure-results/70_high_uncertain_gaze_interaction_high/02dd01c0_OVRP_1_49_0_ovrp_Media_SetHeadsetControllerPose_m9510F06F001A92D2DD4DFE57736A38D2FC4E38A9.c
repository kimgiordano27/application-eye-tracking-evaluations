/*
FUNCTION_NAME: OVRP_1_49_0_ovrp_Media_SetHeadsetControllerPose_m9510F06F001A92D2DD4DFE57736A38D2FC4E38A9
ENTRY_POINT: 02dd01c0
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
OVRP_1_49_0_ovrp_Media_SetHeadsetControllerPose_m9510F06F001A92D2DD4DFE57736A38D2FC4E38A9(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_49_0_ovrp_Media_SetHeadsetControllerPose_m9510F06F001A92D2DD4DFE57736A38D2FC4E38A9::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(Posef_t51A2C10B4094B44A8D3C1913292B839172887B61,Posef_t51A2C10B4094B44A8D3C1913292B839172887B61,Posef_t51A2C10B4094B44A8D3C1913292B839172887B61),10ul,36ul>_char_const____10ul__char_const____36ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ("OVRPlugin","ovrp_Media_SetHeadsetControllerPose",1,2,0x54,0);
    OVRP_1_49_0_ovrp_Media_SetHeadsetControllerPose_m9510F06F001A92D2DD4DFE57736A38D2FC4E38A9::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_49_0_ovrp_Media_SetHeadsetControllerPose_m9510F06F001A92D2DD4DFE57736A38D2FC4E38A9::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x53d6);
    }
  }
  uVar2 = (*OVRP_1_49_0_ovrp_Media_SetHeadsetControllerPose_m9510F06F001A92D2DD4DFE57736A38D2FC4E38A9
            ::il2cppPInvokeFunc)();
  return uVar2;
}


