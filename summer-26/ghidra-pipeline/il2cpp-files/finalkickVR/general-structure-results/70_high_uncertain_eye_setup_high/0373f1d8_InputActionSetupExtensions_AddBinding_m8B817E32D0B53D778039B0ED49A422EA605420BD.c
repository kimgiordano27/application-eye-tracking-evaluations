/*
FUNCTION_NAME: InputActionSetupExtensions_AddBinding_m8B817E32D0B53D778039B0ED49A422EA605420BD
ENTRY_POINT: 0373f1d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void InputActionSetupExtensions_AddBinding_m8B817E32D0B53D778039B0ED49A422EA605420BD
               (undefined8 *param_1,long param_2,
               InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *param_3,undefined8 param_4)

{
  long lVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MethodInfo *pMVar6;
  undefined1 auStack_118 [92];
  undefined4 local_bc;
  undefined1 auStack_b8 [88];
  long local_60;
  Exception_t *local_58;
  long local_50;
  Exception_t *local_48;
  long local_40;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  local_34 = 0;
  local_40 = param_2;
  local_30 = param_4;
  local_28 = param_2;
  if (param_2 == 0) {
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    local_48 = pEVar3;
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar3,uVar4,0);
    pEVar3 = local_48;
    pMVar6 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15104);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar6);
  }
  local_50 = InputBinding_get_path_m7572AB04038339C47BF0C62A3B07BFA6CB8A33B5_inline
                       (param_3,(MethodInfo *)0x0);
  if (local_50 != 0) {
    local_60 = local_28;
    memcpy(auStack_b8,param_3,0x58);
    lVar1 = local_60;
    memcpy(auStack_118,auStack_b8,0x58);
    local_bc = InputActionSetupExtensions_AddBindingInternal_mCCE39F1618CBB8D9184F2EEFAC18429FCDF2405C
                         (lVar1,auStack_118,0xffffffff);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_34 = local_bc;
    BindingSyntax__ctor_mC1F4AFD3294F170D71F474F895D4789F29875682(param_1,local_28,local_bc,0);
    return;
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                     );
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
  local_58 = pEVar3;
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14954);
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15105);
  ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar3,uVar4,uVar5,0);
  pEVar3 = local_58;
  pMVar6 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15104);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar6);
}


