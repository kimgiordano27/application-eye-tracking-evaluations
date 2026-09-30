/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 02ce0984
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported
               (Message_1_t06970779D503B50E986C5462619C2F6FB72381FA *param_1,long param_2,
               undefined8 param_3)

{
  undefined8 uStack0000000000000008;
  long lStack0000000000000010;
  Message_1_t06970779D503B50E986C5462619C2F6FB72381FA *pMStack0000000000000018;
  
  uStack0000000000000008 = param_3;
  lStack0000000000000010 = param_2;
  pMStack0000000000000018 = param_1;
  if ((MessageWithPurchaseList__ctor_mF165BF37BB45CC99A14AE4E8778C65B5136D71F9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Key__);
    MessageWithPurchaseList__ctor_mF165BF37BB45CC99A14AE4E8778C65B5136D71F9::
    s_Il2CppMethodInitialized = 1;
  }
  Message_1__ctor_m291F3FD61651E0F93EA32953A51DF604CB383A1E
            (pMStack0000000000000018,lStack0000000000000010,
             *(MethodInfo **)
              Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Key__);
  return;
}


