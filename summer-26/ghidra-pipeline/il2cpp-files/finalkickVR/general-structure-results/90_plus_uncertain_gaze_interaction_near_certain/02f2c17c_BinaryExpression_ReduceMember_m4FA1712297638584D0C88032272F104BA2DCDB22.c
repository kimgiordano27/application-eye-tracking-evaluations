/*
FUNCTION_NAME: BinaryExpression_ReduceMember_m4FA1712297638584D0C88032272F104BA2DCDB22
ENTRY_POINT: 02f2c17c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 229
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_interaction_hits_9;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
BinaryExpression_ReduceMember_m4FA1712297638584D0C88032272F104BA2DCDB22
          (BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  Il2CppObject *pIVar3;
  MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *pMVar4;
  long lVar5;
  undefined8 uVar6;
  ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *pPVar7;
  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *pEVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *pPVar11;
  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *pEVar12;
  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *pEVar13;
  Il2CppArray *pIVar14;
  TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1 *pTVar15;
  TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *pTVar16;
  undefined8 local_58;
  undefined8 local_28;
  
  puVar1 = Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent>__ctor__;
  if ((BinaryExpression_ReduceMember_m4FA1712297638584D0C88032272F104BA2DCDB22::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Pool_PooledObject<HashSet<IUIInteractor>>_System_IDisposable_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Data_RBTree<int>_Key__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractor<PokeInteractor,_PokeInteractable>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Pool_PooledObject<List<Column>>_System_IDisposable_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractor<PokeInteractor,_PokeInteractable>_DoPostprocess__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_2599);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_2600);
    BinaryExpression_ReduceMember_m4FA1712297638584D0C88032272F104BA2DCDB22::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar3 = (Il2CppObject *)
           BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline
                     (param_1,(MethodInfo *)0x0);
  pMVar4 = (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *)
           CastclassClass(pIVar3,*(Il2CppClass **)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                         );
  NullCheck(pMVar4);
  lVar5 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                    (pMVar4,(MethodInfo *)0x0);
  if (lVar5 == 0) {
    local_28 = BinaryExpression_ReduceVariable_mBC9FB8506390D0E523FBA07A8300E599A36195A2(param_1,0);
  }
  else {
    NullCheck(pMVar4);
    pIVar3 = (Il2CppObject *)
             MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                       (pMVar4,(MethodInfo *)0x0);
    NullCheck(pIVar3);
    uVar6 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar3);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pPVar7 = (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *)
             Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                       (uVar6,*(undefined8 *)StringLiteral_2600,0);
    NullCheck(pMVar4);
    uVar6 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                      (pMVar4,(MethodInfo *)0x0);
    pEVar8 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
             Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(pPVar7,uVar6,0);
    uVar2 = VirtualFuncInvoker0<int>::Invoke(4,(Il2CppObject *)param_1);
    uVar2 = BinaryExpression_GetBinaryOpFromAssignmentOp_mE41CC8FDA2001A4DBF01601F44B050385AD61505
                      (uVar2,0);
    NullCheck(pMVar4);
    uVar6 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pMVar4,0);
    uVar6 = Expression_MakeMemberAccess_mF068D551FD002747A7ECDBD45659AC8FBFC1BE4B(pPVar7,uVar6,0);
    uVar9 = BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline
                      (param_1,(MethodInfo *)0x0);
    uVar10 = BinaryExpression_get_Method_m70A2C548821935446472BDB4B22E8565903B2CF1(param_1,0);
    local_58 = (Il2CppObject *)
               Expression_MakeBinary_m9F782E03ED73729563265D18E48F4E3465278BE7
                         (uVar2,uVar6,uVar9,0,uVar10,0);
    lVar5 = VirtualFuncInvoker0<LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*>::Invoke
                      (0xb,(Il2CppObject *)param_1);
    if (lVar5 != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_58 = (Il2CppObject *)
                 Expression_Invoke_m86D93B1BFBB85B96263854C180D6B0B4AF68C2C9(lVar5,local_58,0);
    }
    NullCheck(local_58);
    uVar6 = VirtualFuncInvoker0<Type_t*>::Invoke(5,local_58);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pPVar11 = (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *)
              Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                        (uVar6,*(undefined8 *)StringLiteral_2599);
    pEVar12 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
              Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(pPVar11,local_58,0);
    NullCheck(pMVar4);
    uVar6 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pMVar4,0);
    uVar6 = Expression_MakeMemberAccess_mF068D551FD002747A7ECDBD45659AC8FBFC1BE4B(pPVar7,uVar6,0);
    pEVar13 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
              Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar6,pPVar11,0);
    pIVar14 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)Method_System_Data_RBTree<int>_Key__,2);
    NullCheck(pIVar14);
    ArrayElementTypeCheck(pIVar14,pPVar7);
    ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C::SetAt
              ((ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)pIVar14,0,
               pPVar7);
    NullCheck(pIVar14);
    ArrayElementTypeCheck(pIVar14,pPVar11);
    ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C::SetAt
              ((ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)pIVar14,1,
               pPVar11);
    pTVar15 = (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1 *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__
                        );
    TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C
              (pTVar15,(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)
                       pIVar14,
               *(MethodInfo **)
                Method_UnityEngine_Pool_PooledObject<List<Column>>_System_IDisposable_Dispose__);
    pIVar14 = (Il2CppArray *)
              SZArrayNew(*(Il2CppClass **)
                          Method_UnityEngine_Pool_PooledObject<HashSet<IUIInteractor>>_System_IDisposable_Dispose__
                         ,4);
    NullCheck(pIVar14);
    ArrayElementTypeCheck(pIVar14,pEVar8);
    ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
              ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar14,0,pEVar8);
    NullCheck(pIVar14);
    ArrayElementTypeCheck(pIVar14,pEVar12);
    ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
              ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar14,1,pEVar12);
    NullCheck(pIVar14);
    ArrayElementTypeCheck(pIVar14,pEVar13);
    ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
              ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar14,2,pEVar13);
    NullCheck(pIVar14);
    ArrayElementTypeCheck(pIVar14,pPVar11);
    ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
              ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar14,3,
               (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)pPVar11);
    pTVar16 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Oculus_Interaction_PointerInteractor<PokeInteractor,_PokeInteractable>_DoPostprocess__
                        );
    TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD
              (pTVar16,(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar14,
               *(MethodInfo **)
                Method_Oculus_Interaction_PointerInteractor<PokeInteractor,_PokeInteractable>__ctor__
              );
    local_28 = Expression_Block_mBBEF1F00572B18C5114360A5AD91850342A1B9C6(pTVar15,pTVar16,0);
  }
  return local_28;
}


