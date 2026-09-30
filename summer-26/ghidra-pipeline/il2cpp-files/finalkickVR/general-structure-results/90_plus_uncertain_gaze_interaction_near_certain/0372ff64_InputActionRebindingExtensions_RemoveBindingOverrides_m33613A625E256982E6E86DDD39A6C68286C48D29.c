/*
FUNCTION_NAME: InputActionRebindingExtensions_RemoveBindingOverrides_m33613A625E256982E6E86DDD39A6C68286C48D29
ENTRY_POINT: 0372ff64
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_7
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void InputActionRebindingExtensions_RemoveBindingOverrides_m33613A625E256982E6E86DDD39A6C68286C48D29
               (long param_1,Il2CppObject *param_2,undefined8 param_3,Il2CppObject *param_4)

{
  long lVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Exception_t *pEVar5;
  undefined8 uVar6;
  MethodInfo *pMVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_260 [88];
  undefined1 auStack_208 [88];
  long local_1b0;
  undefined1 auStack_1a8 [88];
  undefined1 auStack_150 [104];
  Il2CppClass *local_e8;
  Il2CppObject **local_e0;
  FinallyHelper<InputActionRebindingExtensions_RemoveBindingOverrides_m33613A625E256982E6E86DDD39A6C68286C48D29::__17,false>
  aFStack_d8 [16];
  Il2CppObject *local_c8;
  Il2CppObject *local_c0;
  Exception_t *local_b8;
  Il2CppObject *local_b0;
  Exception_t *local_a8;
  long local_a0;
  undefined1 auStack_98 [88];
  Il2CppObject *local_40;
  undefined8 local_38;
  Il2CppObject *local_30;
  long local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((InputActionRebindingExtensions_RemoveBindingOverrides_m33613A625E256982E6E86DDD39A6C68286C48D29
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14964);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14965);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    InputActionRebindingExtensions_RemoveBindingOverrides_m33613A625E256982E6E86DDD39A6C68286C48D29
    ::s_Il2CppMethodInitialized = 1;
  }
  local_40 = (Il2CppObject *)0x0;
  memset(auStack_98,0,0x58);
  local_a0 = local_28;
  if (local_28 == 0) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    local_a8 = pEVar5;
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar5,uVar6,0);
    pEVar5 = local_a8;
    pMVar7 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14968);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar7);
  }
  local_b0 = local_30;
  if (local_30 == (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    local_b8 = pEVar5;
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14967);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar5,uVar6,0);
    pEVar5 = local_b8;
    pMVar7 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14968);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar7);
  }
  local_c0 = local_30;
  NullCheck(local_30);
  auVar8 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                     (0,*(Il2CppClass **)StringLiteral_14964,local_c0);
  local_c8 = auVar8._0_8_;
  local_e0 = &local_40;
  local_40 = local_c8;
  il2cpp::utils::
  Finally<InputActionRebindingExtensions_RemoveBindingOverrides_m33613A625E256982E6E86DDD39A6C68286C48D29::__17>
            ((utils *)&local_e0,auVar8._8_8_);
  while( true ) {
    pIVar2 = local_40;
    NullCheck(local_40);
    uVar3 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar2);
    if ((uVar3 & 1) == 0) break;
    local_e8 = (Il2CppClass *)local_40;
    NullCheck(local_40);
    InterfaceFuncInvoker0<InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5>::Invoke
              ((InterfaceFuncInvoker0<InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5> *)0x0,
               (ushort)*(undefined8 *)StringLiteral_14965,local_e8,param_4);
    memcpy(auStack_150,auStack_1a8,0x58);
    memcpy(auStack_98,auStack_150,0x58);
    local_1b0 = local_28;
    memcpy(auStack_208,auStack_98,0x58);
    lVar1 = local_1b0;
    memcpy(auStack_260,auStack_208,0x58);
    InputActionRebindingExtensions_RemoveBindingOverride_m8F43F7045EDD698D69BB606D9A297D14B4E1FE3A
              (lVar1,auStack_260,0);
  }
  il2cpp::utils::
  FinallyHelper<InputActionRebindingExtensions_RemoveBindingOverrides_m33613A625E256982E6E86DDD39A6C68286C48D29::$_17,false>
  ::~FinallyHelper(aFStack_d8);
  return;
}


