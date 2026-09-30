/*
FUNCTION_NAME: UnityEngine.TextCore.Text.TextGenerationSettings$$ToString
ENTRY_POINT: 04296b54
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_TextCore_Text_TextGenerationSettings__ToString(long param_1)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppArray *this;
  Il2CppObject *pIVar3;
  long unaff_x29;
  int iStack0000000000000034;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x2c8));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
  Logger_Log_mEA3D39763D610E92491AA479BA653ECFEE3E9E5C::s_Il2CppMethodInitialized = 1;
  *(undefined1 *)(unaff_x29 + -0x21) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0xc);
  bVar1 = Logger_IsLogTypeAllowed_mFE76B00210BF4431747A69A28A15EE2BF1A0D586
                    (*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0x28),0);
  *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
  *(byte *)(unaff_x29 + -0x21) = *(byte *)(unaff_x29 + -0x29) & 1;
  *(byte *)(unaff_x29 + -0x2a) = *(byte *)(unaff_x29 + -0x21) & 1;
  if ((*(byte *)(unaff_x29 + -0x2a) & 1) != 0) {
    pIVar2 = (Il2CppObject *)
             Logger_get_logHandler_m4FAA2028695BD9FBA134E836AD52480984E82215_inline
                       (*(Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0 **)(unaff_x29 + -8),
                        (MethodInfo *)0x0);
    iStack0000000000000034 = *(int *)(unaff_x29 + -0xc);
    this = (Il2CppArray *)
           SZArrayNew(*(Il2CppClass **)
                       Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                      ,1);
    pIVar3 = (Il2CppObject *)
             Logger_GetString_m2965E4936E7B1C763CE7A3FF6AACE9590DA7D7BE
                       (*(undefined8 *)(unaff_x29 + -0x18),0);
    NullCheck(this);
    ArrayElementTypeCheck(this,pIVar3);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar3);
    NullCheck(pIVar2);
    InterfaceActionInvoker4<int,Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*,String_t*,ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*>
    ::Invoke(0,*(Il2CppClass **)
                PTR_ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var_048d4410
             ,pIVar2,iStack0000000000000034,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C *)0x0,
             *(String_t **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__,
             (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this);
  }
  return;
}


