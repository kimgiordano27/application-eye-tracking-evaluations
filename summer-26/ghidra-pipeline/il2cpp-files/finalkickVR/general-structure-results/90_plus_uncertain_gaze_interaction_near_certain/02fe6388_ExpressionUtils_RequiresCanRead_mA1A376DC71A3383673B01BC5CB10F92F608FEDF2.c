/*
FUNCTION_NAME: ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2
ENTRY_POINT: 02fe6388
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 165
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_8
*/


void ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2
               (Il2CppObject *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *pIVar4;
  undefined8 uVar5;
  void *pvVar6;
  Il2CppObject *pIVar7;
  Exception_t *pEVar8;
  MethodInfo *pMVar9;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if ((ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_2601);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<RaycastHit>_get_Value__);
    ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2::
    s_Il2CppMethodInitialized = 1;
  }
  ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A(param_1,param_2,param_3,0)
  ;
  NullCheck(param_1);
  iVar3 = VirtualFuncInvoker0<int>::Invoke(4,param_1);
  if (iVar3 == 0x17) {
    pvVar6 = (void *)CastclassClass(param_1,*(Il2CppClass **)puVar1);
    NullCheck(pvVar6);
    CastclassClass(param_1,*(Il2CppClass **)puVar1);
    pIVar7 = (Il2CppObject *)MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104()
    ;
    pIVar7 = (Il2CppObject *)
             IsInstClass(pIVar7,*(Il2CppClass **)Method_System_Nullable<RaycastHit>_get_Value__);
    bVar2 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(pIVar7,0);
    if ((bVar2 & 1) != 0) {
      NullCheck(pIVar7);
      bVar2 = VirtualFuncInvoker0<bool>::Invoke(0x14,pIVar7);
      if ((bVar2 & 1) == 0) {
        pEVar8 = (Exception_t *)
                 Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF
                           (param_2,param_3,0);
        pMVar9 = (MethodInfo *)
                 il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_4047);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
      }
    }
  }
  else if (iVar3 == 0x37) {
    pIVar4 = (IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *)
             CastclassSealed(param_1,*(Il2CppClass **)StringLiteral_2601);
    NullCheck(pIVar4);
    uVar5 = IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline
                      (pIVar4,(MethodInfo *)0x0);
    bVar2 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(uVar5,0);
    if ((bVar2 & 1) != 0) {
      NullCheck(pIVar4);
      pIVar7 = (Il2CppObject *)
               IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline
                         (pIVar4,(MethodInfo *)0x0);
      NullCheck(pIVar7);
      bVar2 = VirtualFuncInvoker0<bool>::Invoke(0x14,pIVar7);
      if ((bVar2 & 1) == 0) {
        pEVar8 = (Exception_t *)
                 Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF
                           (param_2,param_3,0);
        pMVar9 = (MethodInfo *)
                 il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_4047);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar8,pMVar9);
      }
    }
  }
  return;
}


