/*
FUNCTION_NAME: Expression_RequiresCanWrite_m84B2A6922EFAE494E4B38389E17F9EE575D1AAA3
ENTRY_POINT: 02f2fea4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_8
*/


void Expression_RequiresCanWrite_m84B2A6922EFAE494E4B38389E17F9EE575D1AAA3
               (Il2CppObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  Il2CppClass *pIVar5;
  IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *pIVar6;
  void *pvVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  Exception_t *pEVar10;
  MethodInfo *pMVar11;
  
  puVar2 = StringLiteral_2601;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if ((Expression_RequiresCanWrite_m84B2A6922EFAE494E4B38389E17F9EE575D1AAA3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<PrimitiveValue>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<RaycastHit>_get_Value__);
    Expression_RequiresCanWrite_m84B2A6922EFAE494E4B38389E17F9EE575D1AAA3::s_Il2CppMethodInitialized
         = 1;
  }
  if (param_1 == (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar10,param_2,0);
    pMVar11 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_2630);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar10,pMVar11);
  }
  NullCheck(param_1);
  iVar4 = VirtualFuncInvoker0<int>::Invoke(4,param_1);
  if (iVar4 == 0x17) {
    pvVar7 = (void *)CastclassClass(param_1,*(Il2CppClass **)puVar1);
    NullCheck(pvVar7);
    CastclassClass(param_1,*(Il2CppClass **)puVar1);
    pIVar8 = (Il2CppObject *)MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104()
    ;
    pIVar9 = (Il2CppObject *)
             IsInstClass(pIVar8,*(Il2CppClass **)Method_System_Nullable<RaycastHit>_get_Value__);
    bVar3 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(pIVar9,0);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)CastclassClass(pIVar8,*(Il2CppClass **)
                                              Method_System_Nullable<PrimitiveValue>_get_HasValue__)
      ;
      NullCheck(pvVar7);
      bVar3 = FieldInfo_get_IsInitOnly_m476BB9325A68BDD56B088D3E8407F75FA1388ED9(pvVar7,0);
      if ((bVar3 & 1) == 0) {
        NullCheck(pvVar7);
        bVar3 = FieldInfo_get_IsLiteral_mBE7DDC6A709439F775873859C82BAAD1EEFF791A(pvVar7,0);
        if ((bVar3 & 1) == 0) {
          return;
        }
      }
    }
    else {
      NullCheck(pIVar9);
      bVar3 = VirtualFuncInvoker0<bool>::Invoke(0x15,pIVar9);
      if ((bVar3 & 1) != 0) {
        return;
      }
    }
LAB_02f301f8:
    pEVar10 = (Exception_t *)
              Error_ExpressionMustBeWriteable_mDA11D30092BE4A50456717B8B90C1F593D960195(param_2,0);
    pMVar11 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_2630);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar10,pMVar11);
  }
  if (iVar4 != 0x26) {
    if (iVar4 != 0x37) goto LAB_02f301f8;
    pvVar7 = (void *)CastclassSealed(param_1,*(Il2CppClass **)puVar2);
    NullCheck(pvVar7);
    pIVar6 = (IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *)
             CastclassSealed(param_1,*(Il2CppClass **)puVar2);
    pIVar8 = (Il2CppObject *)
             IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline
                       (pIVar6,(MethodInfo *)0x0);
    bVar3 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(pIVar8,0);
    if ((bVar3 & 1) == 0) {
      NullCheck(pIVar8);
      bVar3 = VirtualFuncInvoker0<bool>::Invoke(0x15,pIVar8);
      if ((bVar3 & 1) == 0) goto LAB_02f301f8;
    }
  }
  return;
}


