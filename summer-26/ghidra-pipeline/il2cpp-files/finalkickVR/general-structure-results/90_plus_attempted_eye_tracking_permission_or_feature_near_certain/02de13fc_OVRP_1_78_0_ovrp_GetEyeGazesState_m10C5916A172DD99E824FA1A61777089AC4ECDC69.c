/*
FUNCTION_NAME: OVRP_1_78_0_ovrp_GetEyeGazesState_m10C5916A172DD99E824FA1A61777089AC4ECDC69
ENTRY_POINT: 02de13fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4
OVRP_1_78_0_ovrp_GetEyeGazesState_m10C5916A172DD99E824FA1A61777089AC4ECDC69
          (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_78_0_ovrp_GetEyeGazesState_m10C5916A172DD99E824FA1A61777089AC4ECDC69::il2cppPInvokeFunc
      == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(int,int,EyeGazesStateInternal_tBF79AEE2A05EA3315FA4B97D5C758FA977BD39BF*),10ul,22ul>_char_const____10ul__char_const____22ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0x99a452,0xa3f07e,
                       (EyeGazesStateInternal_tBF79AEE2A05EA3315FA4B97D5C758FA977BD39BF *)0x1);
    OVRP_1_78_0_ovrp_GetEyeGazesState_m10C5916A172DD99E824FA1A61777089AC4ECDC69::il2cppPInvokeFunc =
         (code *)(ulong)uVar1;
    if (OVRP_1_78_0_ovrp_GetEyeGazesState_m10C5916A172DD99E824FA1A61777089AC4ECDC69::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x6056);
    }
  }
  uVar2 = (*OVRP_1_78_0_ovrp_GetEyeGazesState_m10C5916A172DD99E824FA1A61777089AC4ECDC69::
            il2cppPInvokeFunc)(param_1,param_2,param_3);
  return uVar2;
}


