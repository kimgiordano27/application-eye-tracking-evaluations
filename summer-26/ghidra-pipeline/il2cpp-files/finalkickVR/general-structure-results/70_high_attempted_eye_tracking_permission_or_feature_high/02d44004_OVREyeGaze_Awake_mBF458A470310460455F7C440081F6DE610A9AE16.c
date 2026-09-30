/*
FUNCTION_NAME: OVREyeGaze_Awake_mBF458A470310460455F7C440081F6DE610A9AE16
ENTRY_POINT: 02d44004
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;attempted_use
EVIDENCE: strong_eye_source_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze_Awake_mBF458A470310460455F7C440081F6DE610A9AE16(Il2CppObject *param_1)

{
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *pAVar1;
  
  if ((OVREyeGaze_Awake_mBF458A470310460455F7C440081F6DE610A9AE16::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TiradorArcade_<LanzarPelotaYa>d__27_System_Collections_IEnumerator_Reset__);
    OVREyeGaze_Awake_mBF458A470310460455F7C440081F6DE610A9AE16::s_Il2CppMethodInitialized = 1;
  }
  pAVar1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
  Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
            (pAVar1,param_1,
             *(long *)
              Method_TiradorArcade_<LanzarPelotaYa>d__27_System_Collections_IEnumerator_Reset__,
             (MethodInfo *)0x0);
  *(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A **)(param_1 + 0x68) = pAVar1;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x68),pAVar1);
  return;
}


