/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 02cc0484
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__GetEyeGazesState(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000040 = param_2;
  uStack0000000000000048 = param_1;
  if ((CAPI_ovr_Leaderboard_Get_m60EA0B1D48FBE580D07085F31C13C4F11ACCD38A::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    CAPI_ovr_Leaderboard_Get_m60EA0B1D48FBE580D07085F31C13C4F11ACCD38A::s_Il2CppMethodInitialized =
         1;
  }
  uVar1 = uStack0000000000000048;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  uVar1 = CAPI_StringToNative_m173627D71EB50C1F9E17F6638116ED2FCA2534F2(uVar1);
  uVar2 = CAPI_ovr_Leaderboard_Get_Native_mB70E0D22575D19545B07B93377FE22F9FB2AB899(uVar1,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
  Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(uVar1,0);
  return uVar2;
}


