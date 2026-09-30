/*
FUNCTION_NAME: Logger_Log_mF8C7E8A8CC31E04732044D73D2CB551D7CCB8995
ENTRY_POINT: 04296c7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Logger_Log_mF8C7E8A8CC31E04732044D73D2CB551D7CCB8995
               (Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0 *param_1,int param_2,
               undefined8 param_3,Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *param_4)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppArray *this;
  Il2CppObject *pIVar3;
  
  if ((Logger_Log_mF8C7E8A8CC31E04732044D73D2CB551D7CCB8995::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var_048d4410
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    Logger_Log_mF8C7E8A8CC31E04732044D73D2CB551D7CCB8995::s_Il2CppMethodInitialized = 1;
  }
  bVar1 = Logger_IsLogTypeAllowed_mFE76B00210BF4431747A69A28A15EE2BF1A0D586(param_1,param_2,0);
  if ((bVar1 & 1) != 0) {
    pIVar2 = (Il2CppObject *)
             Logger_get_logHandler_m4FAA2028695BD9FBA134E836AD52480984E82215_inline
                       (param_1,(MethodInfo *)0x0);
    this = (Il2CppArray *)
           SZArrayNew(*(Il2CppClass **)
                       Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                      ,1);
    pIVar3 = (Il2CppObject *)Logger_GetString_m2965E4936E7B1C763CE7A3FF6AACE9590DA7D7BE(param_3,0);
    NullCheck(this);
    ArrayElementTypeCheck(this,pIVar3);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar3);
    NullCheck(pIVar2);
    InterfaceActionInvoker4<int,Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*,String_t*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*>
    ::Invoke(0,*(Il2CppClass **)
                PTR_ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var_048d4410
             ,pIVar2,param_2,param_4,
             *(String_t **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__,
             (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this);
  }
  return;
}


