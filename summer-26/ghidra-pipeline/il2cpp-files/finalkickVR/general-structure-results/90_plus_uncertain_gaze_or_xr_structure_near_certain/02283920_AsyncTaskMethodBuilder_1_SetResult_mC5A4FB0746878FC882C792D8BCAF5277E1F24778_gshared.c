/*
FUNCTION_NAME: AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared
ENTRY_POINT: 02283920
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared
               (long param_1,undefined8 ****param_2,MethodInfo *param_3)

{
  long lVar1;
  Il2CppClass *pIVar2;
  ulong uVar3;
  MethodInfo *pMVar4;
  long local_130;
  long *local_128;
  long *local_120;
  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *local_118;
  undefined8 ***local_110;
  long *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  void *local_e8;
  void *local_e0;
  undefined8 ***local_d8;
  void *local_d0;
  Exception_t *local_c8;
  undefined8 local_c0;
  byte local_b4;
  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *local_b0;
  undefined4 local_a4;
  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *local_a0;
  byte local_98;
  undefined4 local_94;
  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *local_90;
  byte local_84;
  void *local_80;
  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *local_78;
  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *local_70;
  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *local_68;
  void *local_60;
  long *local_58;
  long *local_50;
  uint local_44;
  MethodInfo *local_40;
  undefined8 ***local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<UserAccountAgeCategory>_get_Data__);
    AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar1 + 0xc0),5);
  local_44 = il2cpp_codegen_sizeof(pIVar2);
  local_58 = (long *)((long)&local_130 - ((ulong)local_44 + 0xf & 0x1fffffff0));
  local_60 = (void *)((long)local_58 - ((ulong)local_44 + 0xf & 0x1fffffff0));
  local_78 = *(Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 **)(local_30 + 0x10);
  local_70 = local_78;
  local_68 = local_78;
  local_50 = local_58;
  if (local_78 == (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 *)0x0) {
    local_d0 = local_58;
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
    pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar1 + 0xc0),5);
    uVar3 = il2cpp_codegen_class_is_value_type(pIVar2);
    if ((uVar3 & 1) == 0) {
      local_d8 = &local_38;
    }
    else {
      local_d8 = local_38;
    }
    il2cpp_codegen_memcpy(local_d0,local_d8,(ulong)local_44);
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
    pIVar2 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar1 + 0xc0),2);
    il2cpp_codegen_runtime_class_init_inline(pIVar2);
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
    pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar1 + 0xc0),5);
    uVar3 = il2cpp_codegen_class_is_value_type(pIVar2);
    if ((uVar3 & 1) == 0) {
      local_e0 = (void *)*local_50;
    }
    else {
      local_e0 = (void *)il2cpp_codegen_memcpy(local_60,local_50,(ulong)local_44);
    }
    local_e8 = local_e0;
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
    pMVar4 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar1 + 0xc0),6);
    local_80 = (void *)AsyncTaskMethodBuilder_1_GetTaskForResult_m8210EDCCA4F113BD4377A4433475A9E6D39E6CFC
                                 (local_e8,pMVar4);
    *(void **)(local_30 + 0x10) = local_80;
    Il2CppCodeGenWriteBarrier((void **)(local_30 + 0x10),local_80);
  }
  else {
    local_84 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(0);
    local_84 = local_84 & 1;
    if (local_84 != 0) {
      local_90 = local_68;
      NullCheck(local_68);
      local_f0 = 0;
      local_94 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(local_90);
      AsyncCausalityTracer_TraceOperationCompletion_m40E8B7AB4A21C9D1B22A9213C5D83BE3F837F335
                (0,local_94,1,local_f0);
    }
    local_f8 = (undefined8 *)Method_Oculus_Platform_Message<UserAccountAgeCategory>_get_Data__;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_Oculus_Platform_Message<UserAccountAgeCategory>_get_Data__);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*local_f8);
    local_98 = *(byte *)(lVar1 + 0x10) & 1;
    if (local_98 != 0) {
      local_a0 = local_68;
      NullCheck(local_68);
      local_100 = 0;
      local_a4 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(local_a0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_Oculus_Platform_Message<UserAccountAgeCategory>_get_Data__)
      ;
      Task_RemoveFromActiveTasks_m1B503A135598FE3B9385A2301546CEE764E8D54C(local_a4,local_100);
    }
    local_b0 = local_68;
    local_108 = local_58;
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
    pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar1 + 0xc0),5);
    uVar3 = il2cpp_codegen_class_is_value_type(pIVar2);
    if ((uVar3 & 1) == 0) {
      local_110 = &local_38;
    }
    else {
      local_110 = local_38;
    }
    il2cpp_codegen_memcpy(local_108,local_110,(ulong)local_44);
    NullCheck(local_b0);
    local_118 = local_b0;
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
    pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar1 + 0xc0),5);
    uVar3 = il2cpp_codegen_class_is_value_type(pIVar2);
    if ((uVar3 & 1) == 0) {
      local_120 = (long *)*local_58;
    }
    else {
      local_120 = local_58;
    }
    local_128 = local_120;
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_40 + 0x20));
    pMVar4 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar1 + 0xc0),7);
    local_b4 = Task_1_TrySetResult_m531B7F1D322A5ABCB829E12FDE8814E23F27D65A
                         (local_118,local_128,pMVar4);
    local_b4 = local_b4 & 1;
    if (local_b4 == 0) {
      il2cpp_codegen_initialize_runtime_metadata_inline
                ((ulong *)Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
      local_130 = 0;
      local_c0 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
      pIVar2 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                         );
      local_c8 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
      InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162
                (local_c8,local_c0,local_130);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(local_c8,local_40);
    }
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar1);
  }
  return;
}


