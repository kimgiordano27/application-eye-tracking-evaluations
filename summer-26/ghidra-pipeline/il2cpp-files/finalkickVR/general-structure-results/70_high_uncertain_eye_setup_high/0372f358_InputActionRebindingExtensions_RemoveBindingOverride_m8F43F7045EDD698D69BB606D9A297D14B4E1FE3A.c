/*
FUNCTION_NAME: InputActionRebindingExtensions_RemoveBindingOverride_m8F43F7045EDD698D69BB606D9A297D14B4E1FE3A
ENTRY_POINT: 0372f358
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


void InputActionRebindingExtensions_RemoveBindingOverride_m8F43F7045EDD698D69BB606D9A297D14B4E1FE3A
               (long param_1,InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *param_2,
               undefined8 param_3)

{
  long lVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  undefined1 auStack_100 [96];
  undefined1 auStack_a0 [88];
  long local_48;
  Exception_t *local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = param_1;
  local_30 = param_3;
  local_28 = param_1;
  if (param_1 != 0) {
    InputBinding_set_overridePath_m254083B15DE914A24B72ADAEB458B426693EBBDE_inline
              (param_2,(String_t *)0x0,(MethodInfo *)0x0);
    InputBinding_set_overrideInteractions_mB1F18069CFF50CD35A419EEAB6AEE8F3BA4AB88D_inline
              (param_2,(String_t *)0x0,(MethodInfo *)0x0);
    InputBinding_set_overrideProcessors_mF193786F6350EB5E0EF63B57530BC89EC304BAE0_inline
              (param_2,(String_t *)0x0,(MethodInfo *)0x0);
    local_48 = local_28;
    memcpy(auStack_a0,param_2,0x58);
    lVar1 = local_48;
    memcpy(auStack_100,auStack_a0,0x58);
    InputActionRebindingExtensions_ApplyBindingOverride_mBB5BDDDD1F8D92630C3C3289C140D99AFA83E10B
              (lVar1,auStack_100,0);
    return;
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
  local_40 = pEVar3;
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar3,uVar4,0);
  pEVar3 = local_40;
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14958);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar5);
}


