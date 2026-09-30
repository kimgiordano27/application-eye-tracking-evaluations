/*
FUNCTION_NAME: InputActionTrace__ctor_mDA1FB9425AAB839E14F93C731FCB35504C9828DA
ENTRY_POINT: 03773cc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void InputActionTrace__ctor_mDA1FB9425AAB839E14F93C731FCB35504C9828DA
               (undefined8 param_1,long param_2)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  undefined8 uVar3;
  MethodInfo *pMVar4;
  
  Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(param_1,0);
  if (param_2 != 0) {
    InputActionTrace_SubscribeTo_m7A1E3D49CAB43092192D3625AC93C35D20887AE6(param_1,param_2,0);
    return;
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
  uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar2,uVar3,0);
  pMVar4 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15364);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,pMVar4);
}


