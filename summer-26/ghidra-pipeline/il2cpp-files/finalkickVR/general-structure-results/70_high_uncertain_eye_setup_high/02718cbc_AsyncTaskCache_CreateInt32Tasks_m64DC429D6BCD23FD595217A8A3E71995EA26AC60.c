/*
FUNCTION_NAME: AsyncTaskCache_CreateInt32Tasks_m64DC429D6BCD23FD595217A8A3E71995EA26AC60
ENTRY_POINT: 02718cbc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


Il2CppArray * AsyncTaskCache_CreateInt32Tasks_m64DC429D6BCD23FD595217A8A3E71995EA26AC60(void)

{
  int iVar1;
  Il2CppArray *this;
  Task_1_t4C228DE57804012969575431CFF12D57C875552D *pTVar2;
  int local_24;
  
  if ((AsyncTaskCache_CreateInt32Tasks_m64DC429D6BCD23FD595217A8A3E71995EA26AC60::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Linq_Expressions_Expression_Field__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Linq_Expressions_Expression_FindMethod__);
    AsyncTaskCache_CreateInt32Tasks_m64DC429D6BCD23FD595217A8A3E71995EA26AC60::
    s_Il2CppMethodInitialized = 1;
  }
  this = (Il2CppArray *)
         SZArrayNew(*(Il2CppClass **)Method_System_Linq_Expressions_Expression_FindMethod__,10);
  local_24 = 0;
  while( true ) {
    NullCheck(this);
    if ((int)*(undefined8 *)(this + 0x18) <= local_24) break;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    iVar1 = il2cpp_codegen_add<int,int>(local_24,-1);
    pTVar2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D *)
             AsyncTaskCache_CreateCacheableTask_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m55DE557DB4588DE2A8A2B6CE1013438E09C965F5
                       (iVar1,*(MethodInfo **)Method_System_Linq_Expressions_Expression_Field__);
    NullCheck(this);
    ArrayElementTypeCheck(this,pTVar2);
    Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8::SetAt
              ((Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8 *)this,(long)local_24,pTVar2)
    ;
    local_24 = il2cpp_codegen_add<int,int>(local_24,1);
  }
  return this;
}


