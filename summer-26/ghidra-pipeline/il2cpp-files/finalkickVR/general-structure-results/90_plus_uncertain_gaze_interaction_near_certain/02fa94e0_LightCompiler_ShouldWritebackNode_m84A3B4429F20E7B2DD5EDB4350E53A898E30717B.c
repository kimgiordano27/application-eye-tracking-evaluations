/*
FUNCTION_NAME: LightCompiler_ShouldWritebackNode_m84A3B4429F20E7B2DD5EDB4350E53A898E30717B
ENTRY_POINT: 02fa94e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 147
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_6
*/


bool LightCompiler_ShouldWritebackNode_m84A3B4429F20E7B2DD5EDB4350E53A898E30717B
               (Il2CppObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *pIVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar2 = StringLiteral_2601;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if ((LightCompiler_ShouldWritebackNode_m84A3B4429F20E7B2DD5EDB4350E53A898E30717B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<PrimitiveValue>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    LightCompiler_ShouldWritebackNode_m84A3B4429F20E7B2DD5EDB4350E53A898E30717B::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  pvVar6 = (void *)VirtualFuncInvoker0<Type_t*>::Invoke(5,param_1);
  NullCheck(pvVar6);
  bVar3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(pvVar6,0);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_1);
    iVar4 = VirtualFuncInvoker0<int>::Invoke(4,param_1);
    if (iVar4 < 0x18) {
      uVar5 = il2cpp_codegen_subtract<int,int>(iVar4,5);
      if (uVar5 < 2) {
        return true;
      }
      if (iVar4 == 0x17) {
        pvVar6 = (void *)CastclassClass(param_1,*(Il2CppClass **)puVar1);
        NullCheck(pvVar6);
        uVar9 = CastclassClass(param_1,*(Il2CppClass **)puVar1);
        pIVar8 = (Il2CppObject *)
                 MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(uVar9,0);
        lVar10 = IsInstClass(pIVar8,*(Il2CppClass **)
                                     Method_System_Nullable<PrimitiveValue>_get_HasValue__);
        return lVar10 != 0;
      }
    }
    else {
      if (iVar4 == 0x26) {
        return true;
      }
      if (iVar4 == 0x37) {
        pvVar6 = (void *)CastclassSealed(param_1,*(Il2CppClass **)puVar2);
        NullCheck(pvVar6);
        pIVar7 = (IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *)
                 CastclassSealed(param_1,*(Il2CppClass **)puVar2);
        pIVar8 = (Il2CppObject *)
                 IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                           (pIVar7,(MethodInfo *)0x0);
        NullCheck(pIVar8);
        pvVar6 = (void *)VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar8);
        NullCheck(pvVar6);
        bVar3 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(pvVar6,0);
        return (bool)(bVar3 & 1);
      }
    }
  }
  return false;
}


