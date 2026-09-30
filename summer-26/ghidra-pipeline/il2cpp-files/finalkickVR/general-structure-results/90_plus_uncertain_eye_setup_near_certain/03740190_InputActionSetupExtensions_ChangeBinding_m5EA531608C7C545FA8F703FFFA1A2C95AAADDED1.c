/*
FUNCTION_NAME: InputActionSetupExtensions_ChangeBinding_m5EA531608C7C545FA8F703FFFA1A2C95AAADDED1
ENTRY_POINT: 03740190
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void InputActionSetupExtensions_ChangeBinding_m5EA531608C7C545FA8F703FFFA1A2C95AAADDED1
               (undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  
  if ((InputActionSetupExtensions_ChangeBinding_m5EA531608C7C545FA8F703FFFA1A2C95AAADDED1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14808);
    InputActionSetupExtensions_ChangeBinding_m5EA531608C7C545FA8F703FFFA1A2C95AAADDED1::
    s_Il2CppMethodInitialized = 1;
  }
  if (param_2 == (void *)0x0) {
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar3,uVar4,0);
    pMVar5 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15113);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar5);
  }
  if (-1 < param_3) {
    NullCheck(param_2);
    iVar1 = ArrayHelpers_LengthSafe_TisInputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_m65BEB25B025FF72F8F17C6F867829599AEEB076B
                      (*(InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57 **)
                        ((long)param_2 + 0x30),*(MethodInfo **)StringLiteral_14808);
    if (param_3 < iVar1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      BindingSyntax__ctor_mC1F4AFD3294F170D71F474F895D4789F29875682(param_1,param_2,param_3,0);
      return;
    }
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                     );
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_System_Collections_Generic_Dictionary<string,_char>__ctor__);
  ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(pEVar3,uVar4,0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_15113);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar5);
}


