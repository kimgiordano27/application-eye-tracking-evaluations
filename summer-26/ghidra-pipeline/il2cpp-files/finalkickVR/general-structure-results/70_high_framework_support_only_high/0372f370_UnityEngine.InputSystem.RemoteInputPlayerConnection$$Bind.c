/*
FUNCTION_NAME: UnityEngine.InputSystem.RemoteInputPlayerConnection$$Bind
ENTRY_POINT: 0372f370
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_RemoteInputPlayerConnection__Bind
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  Il2CppClass *pIVar2;
  MethodInfo *pMVar3;
  undefined8 uVar4;
  Exception_t *pEVar5;
  undefined8 uVar6;
  long unaff_x29;
  InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 *in_stack_00000038;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_3;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -8);
  if (*(long *)(unaff_x29 + -0x18) != 0) {
    InputBinding_set_overridePath_m254083B15DE914A24B72ADAEB458B426693EBBDE_inline
              (in_stack_00000038,(String_t *)0x0,(MethodInfo *)0x0);
    InputBinding_set_overrideInteractions_mB1F18069CFF50CD35A419EEAB6AEE8F3BA4AB88D_inline
              (in_stack_00000038,(String_t *)0x0,(MethodInfo *)0x0);
    InputBinding_set_overrideProcessors_mF193786F6350EB5E0EF63B57530BC89EC304BAE0_inline
              (in_stack_00000038,(String_t *)0x0,(MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -8);
    memcpy((void *)(unaff_x29 + -0x80),in_stack_00000038,0x58);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x28);
    memcpy(&stack0x00000040,(void *)(unaff_x29 + -0x80),0x58);
    uVar1 = InputActionRebindingExtensions_ApplyBindingOverride_mBB5BDDDD1F8D92630C3C3289C140D99AFA83E10B
                      (uVar6,&stack0x00000040,0);
    *(undefined4 *)(unaff_x29 + -0x84) = uVar1;
    return;
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  uVar6 = il2cpp_codegen_object_new(pIVar2);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar6;
  uVar4 = *(undefined8 *)(unaff_x29 + -0x20);
  uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(uVar4,uVar6,0);
  pEVar5 = *(Exception_t **)(unaff_x29 + -0x20);
  pMVar3 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14958);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar5,pMVar3);
}


