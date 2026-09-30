/*
FUNCTION_NAME: InputActionTrace_SubscribeTo_m7A1E3D49CAB43092192D3625AC93C35D20887AE6
ENTRY_POINT: 03773d74
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


void InputActionTrace_SubscribeTo_m7A1E3D49CAB43092192D3625AC93C35D20887AE6
               (Il2CppObject *param_1,
               InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09 *param_2)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;
  Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E *pAVar4;
  undefined8 uVar5;
  
  if ((InputActionTrace_SubscribeTo_m7A1E3D49CAB43092192D3625AC93C35D20887AE6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_15360);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_15365);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_15362);
    InputActionTrace_SubscribeTo_m7A1E3D49CAB43092192D3625AC93C35D20887AE6::
    s_Il2CppMethodInitialized = 1;
  }
  if (param_2 == (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09 *)0x0) {
    pIVar1 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
    uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar2,uVar5,0);
    pMVar3 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15366);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    pAVar4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E *)
             il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_15360);
    Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57
              (pAVar4,param_1,*(long *)StringLiteral_15362,(MethodInfo *)0x0);
    *(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E **)(param_1 + 0x98) = pAVar4;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x98),pAVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  NullCheck(param_2);
  InputActionMap_add_actionTriggered_m07D042C57C782B0715B888F623A17D1E0DA9C7E7(param_2,uVar5,0);
  InlinedArray_1_AppendWithCapacity_m856433493559E4616B9974203D93B0F6F3743FBE
            ((InlinedArray_1_tA400D09B80F15161B84CD387A6FA2EA0249125EB *)(param_1 + 0x30),param_2,10
             ,*(MethodInfo **)StringLiteral_15365);
  return;
}


