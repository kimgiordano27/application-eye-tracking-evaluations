/*
FUNCTION_NAME: StreamWriter__ctor_m07CDDF5BC8553960286FA1BFF8BBA2159835EBCC
ENTRY_POINT: 0275d224
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void StreamWriter__ctor_m07CDDF5BC8553960286FA1BFF8BBA2159835EBCC
               (long param_1,Il2CppObject *param_2,long param_3,int param_4,byte param_5)

{
  undefined *puVar1;
  byte bVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  
  puVar1 = Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
  if ((StreamWriter__ctor_m07CDDF5BC8553960286FA1BFF8BBA2159835EBCC::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<UserAccountAgeCategory>_get_Data__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_IntegratedSubsystemDescriptor<XRDisplaySubsystem>__ctor__
              );
    StreamWriter__ctor_m07CDDF5BC8553960286FA1BFF8BBA2159835EBCC::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_Oculus_Platform_Message<UserAccountAgeCategory>_get_Data__);
  pvVar3 = (void *)Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline
                             ((MethodInfo *)0x0);
  *(void **)(param_1 + 0x68) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x68),pvVar3);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_IntegratedSubsystemDescriptor<XRDisplaySubsystem>__ctor__);
  TextWriter__ctor_mD9064D59C0AE19DD6BD8979E3A519963A82EC2A8(param_1,0);
  if ((param_2 == (Il2CppObject *)0x0) || (param_3 == 0)) {
    if (param_2 == (Il2CppObject *)0x0) {
      local_40 = il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_UnityEngine_Rendering_ObjectPool<AtlasAllocator_AtlasNode>__ctor__
                           );
    }
    else {
      local_40 = il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)Method_System_Collections_Generic_List<Canvas>_get_Item__);
    }
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar5,local_40,0);
    pMVar6 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  NullCheck(param_2);
  bVar2 = VirtualFuncInvoker0<bool>::Invoke(10,param_2);
  if ((bVar2 & 1) == 0) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                       );
    pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Reflection_Emit_ConstructorBuilder_get_MethodHandle__)
    ;
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar5,uVar7,0);
    pMVar6 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  if (param_4 < 1) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                       );
    pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_get_Count__
                      );
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (pEVar5,uVar7,uVar8,0);
    pMVar6 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar5,pMVar6);
  }
  StreamWriter_Init_m87624EC42F9CD27B6D43829466EFA800002D44D6
            (param_1,param_2,param_3,param_4,param_5 & 1,0);
  return;
}


