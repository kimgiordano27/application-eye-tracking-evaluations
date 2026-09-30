/*
FUNCTION_NAME: UnityEngine.InputSystem.RemoteInputPlayerConnection$$System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError
ENTRY_POINT: 037306a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
UnityEngine_InputSystem_RemoteInputPlayerConnection__System_IObserver<UnityEngine_InputSystem_InputRemoting_Message>_OnError
          (long param_1)

{
  undefined4 uVar1;
  Il2CppClass *pIVar2;
  MethodInfo *pMVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Exception_t *pEVar6;
  long unaff_x29;
  undefined1 auVar7 [16];
  undefined1 (*in_stack_00000028) [16];
  int iStack000000000000003c;
  undefined4 uStack000000000000005c;
  
  if (param_1 == 0) {
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    uVar4 = il2cpp_codegen_object_new(pIVar2);
    *(undefined8 *)(unaff_x29 + -0x50) = uVar4;
    uVar5 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(uVar5,uVar4,0);
    pEVar6 = *(Exception_t **)(unaff_x29 + -0x50);
    pMVar3 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14970);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,pMVar3);
  }
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)in_stack_00000028[2];
  if (*(long *)(unaff_x29 + -0x58) != 0) {
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(in_stack_00000028[2] + 8);
    NullCheck(*(void **)(unaff_x29 + -0x68));
    auVar7 = InputActionMap_get_actions_mC8FEA8D1BC6F750FBE202105EF0E7F41C166DF1E
                       (*(undefined8 *)(unaff_x29 + -0x68),0);
    *in_stack_00000028 = auVar7;
    uStack000000000000005c =
         ReadOnlyArray_1_get_Count_mA742A0394D2FF18202FA60460D4053977BA6EC4F_inline
                   ((ReadOnlyArray_1_t87BBFDC4C52C189E583DEC4E87E663DF435F7915 *)(unaff_x29 + -0x30)
                    ,*(MethodInfo **)StringLiteral_14887);
    *(undefined4 *)(unaff_x29 + -0x34) = uStack000000000000005c;
    *(undefined4 *)(unaff_x29 + -0x38) = 0;
    *(undefined4 *)(unaff_x29 + -0x3c) = 0;
    while( true ) {
      iStack000000000000003c = *(int *)(unaff_x29 + -0x3c);
      if (*(int *)(unaff_x29 + -0x34) <= iStack000000000000003c) break;
      uVar4 = ReadOnlyArray_1_get_Item_mF91AFAC9F8866849A41306E7F7897A20BE538464
                        ((ReadOnlyArray_1_t87BBFDC4C52C189E583DEC4E87E663DF435F7915 *)
                         (unaff_x29 + -0x30),*(int *)(unaff_x29 + -0x3c),
                         *(MethodInfo **)StringLiteral_14888);
      uVar1 = InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls_mCBFD0B0B1CBE64B5D854E451496524269D694391
                        (uVar4,*(undefined8 *)in_stack_00000028[2],0);
      *(undefined4 *)(unaff_x29 + -0x38) = uVar1;
      uVar1 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x3c),1);
      *(undefined4 *)(unaff_x29 + -0x3c) = uVar1;
    }
    return *(undefined4 *)(unaff_x29 + -0x38);
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  uVar4 = il2cpp_codegen_object_new(pIVar2);
  *(undefined8 *)(unaff_x29 + -0x60) = uVar4;
  uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_Unity_Collections_NativeSlice<Vertex>__ctor__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(uVar5,uVar4,0);
  pEVar6 = *(Exception_t **)(unaff_x29 + -0x60);
  pMVar3 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14970);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar6,pMVar3);
}


