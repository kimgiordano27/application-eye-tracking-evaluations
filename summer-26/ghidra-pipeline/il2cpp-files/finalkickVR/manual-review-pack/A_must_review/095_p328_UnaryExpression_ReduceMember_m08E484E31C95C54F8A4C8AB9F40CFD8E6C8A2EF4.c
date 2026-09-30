/*
FUNCTION_NAME: UnaryExpression_ReduceMember_m08E484E31C95C54F8A4C8AB9F40CFD8E6C8A2EF4
ENTRY_POINT: 02f67ab4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 191
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
UnaryExpression_ReduceMember_m08E484E31C95C54F8A4C8AB9F40CFD8E6C8A2EF4
          (UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  Il2CppObject *pIVar9;
  MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *pMVar10;
  long lVar11;
  undefined8 uVar12;
  ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *pPVar13;
  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *pEVar14;
  ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *pPVar15;
  Il2CppArray *pIVar16;
  TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1 *pTVar17;
  TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *pTVar18;
  undefined8 local_28;
  
  puVar7 = Method_System_Data_RBTree<int>_Key__;
  puVar6 = Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__;
  puVar5 = Method_UnityEngine_Pool_PooledObject<List<Column>>_System_IDisposable_Dispose__;
  puVar4 = Method_UnityEngine_Pool_PooledObject<HashSet<IUIInteractor>>_System_IDisposable_Dispose__
  ;
  puVar3 = 
  Method_Oculus_Interaction_PointerInteractor<PokeInteractor,_PokeInteractable>_DoPostprocess__;
  puVar2 = Method_Oculus_Interaction_PointerInteractor<PokeInteractor,_PokeInteractable>__ctor__;
  puVar1 = Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent>__ctor__;
  if ((UnaryExpression_ReduceMember_m08E484E31C95C54F8A4C8AB9F40CFD8E6C8A2EF4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Pool_PooledObject<HashSet<IUIInteractor>>_System_IDisposable_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    UnaryExpression_ReduceMember_m08E484E31C95C54F8A4C8AB9F40CFD8E6C8A2EF4::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar9 = (Il2CppObject *)
           UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline
                     (param_1,(MethodInfo *)0x0);
  pMVar10 = (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *)
            CastclassClass(pIVar9,*(Il2CppClass **)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          );
  NullCheck(pMVar10);
  lVar11 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                     (pMVar10,(MethodInfo *)0x0);
  if (lVar11 == 0) {
    local_28 = UnaryExpression_ReduceVariable_m4E1A4729D61BB0465358BC05B598655105E5FB34(param_1,0);
  }
  else {
    NullCheck(pMVar10);
    pIVar9 = (Il2CppObject *)
             MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                       (pMVar10,(MethodInfo *)0x0);
    NullCheck(pIVar9);
    uVar12 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar9);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pPVar13 = (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *)
              Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(uVar12,0);
    NullCheck(pMVar10);
    uVar12 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                       (pMVar10,(MethodInfo *)0x0);
    pEVar14 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
              Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(pPVar13,uVar12,0);
    NullCheck(pMVar10);
    uVar12 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pMVar10,0);
    pIVar9 = (Il2CppObject *)
             Expression_MakeMemberAccess_mF068D551FD002747A7ECDBD45659AC8FBFC1BE4B(pPVar13,uVar12,0)
    ;
    bVar8 = UnaryExpression_get_IsPrefix_m6AC7868120581C35A1512A6B8E19C1CC7BC32797(param_1,0);
    if ((bVar8 & 1) == 0) {
      NullCheck(pIVar9);
      uVar12 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar9);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      pPVar15 = (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *)
                Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(uVar12,0);
      pIVar16 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar7,2);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pPVar13);
      ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C::SetAt
                ((ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)pIVar16,0,
                 pPVar13);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pPVar15);
      ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C::SetAt
                ((ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)pIVar16,1,
                 pPVar15);
      pTVar17 = (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C
                (pTVar17,(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)
                         pIVar16,*(MethodInfo **)puVar5);
      pIVar16 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar4,4);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pEVar14);
      ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
                ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,0,pEVar14);
      pEVar14 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
                Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(pPVar15,pIVar9,0);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pEVar14);
      ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
                ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,1,pEVar14);
      uVar12 = UnaryExpression_FunctionalOp_m2E5198689EAB43A92A1CB0B6A82EE59986219F7C
                         (param_1,pPVar15,0);
      pEVar14 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
                Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(pIVar9,uVar12,0);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pEVar14);
      ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
                ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,2,pEVar14);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pPVar15);
      ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
                ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,3,
                 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)pPVar15);
      pTVar18 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
      TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD
                (pTVar18,(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,
                 *(MethodInfo **)puVar2);
      local_28 = Expression_Block_mBBEF1F00572B18C5114360A5AD91850342A1B9C6(pTVar17,pTVar18,0);
    }
    else {
      pIVar16 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar7,1);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pPVar13);
      ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C::SetAt
                ((ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)pIVar16,0,
                 pPVar13);
      pTVar17 = (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar6);
      TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C
                (pTVar17,(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *)
                         pIVar16,*(MethodInfo **)puVar5);
      pIVar16 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar4,2);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pEVar14);
      ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
                ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,0,pEVar14);
      uVar12 = UnaryExpression_FunctionalOp_m2E5198689EAB43A92A1CB0B6A82EE59986219F7C
                         (param_1,pIVar9);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      pEVar14 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
                Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(pIVar9,uVar12,0);
      NullCheck(pIVar16);
      ArrayElementTypeCheck(pIVar16,pEVar14);
      ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
                ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,1,pEVar14);
      pTVar18 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
      TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD
                (pTVar18,(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)pIVar16,
                 *(MethodInfo **)puVar2);
      local_28 = Expression_Block_mBBEF1F00572B18C5114360A5AD91850342A1B9C6(pTVar17,pTVar18,0);
    }
  }
  return local_28;
}


