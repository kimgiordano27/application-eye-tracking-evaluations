/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingSupported
ENTRY_POINT: 02ca6270
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTrackingSupported(ulong param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  String_t *pSVar6;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__);
    OVRLipSyncDebugConsole_Display_mDB12A529E56335F593483297CC39A2DDF218E52D::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  *in_stack_00000028 = *(undefined8 *)(in_stack_00000028[3] + 0x20);
  NullCheck((void *)*in_stack_00000028);
  uVar3 = VirtualFuncInvoker0<int>::Invoke(0x16,(Il2CppObject *)*in_stack_00000028);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar3;
  *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(in_stack_00000028[3] + 0x28);
  if (*(int *)(unaff_x29 + -0x28) < *(int *)(unaff_x29 + -0x24)) {
    OVRLipSyncDebugConsole_Prune_m9CC441286CCCAD82F8F484D531D0982375B178FE(in_stack_00000028[3],0);
  }
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(in_stack_00000028[3] + 0x30);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                    (*(undefined8 *)(unaff_x29 + -0x30),0);
  *(byte *)(unaff_x29 + -0x31) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x31) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(in_stack_00000028[3] + 0x30);
    NullCheck(*(void **)(unaff_x29 + -0x40));
    VirtualActionInvoker1<String_t*>::Invoke
              (0x4b,*(Il2CppObject **)(unaff_x29 + -0x40),
               *(String_t **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__);
    *(undefined4 *)(unaff_x29 + -0x14) = 0;
    while( true ) {
      iVar1 = *(int *)(unaff_x29 + -0x14);
      pIVar8 = *(Il2CppObject **)(in_stack_00000028[3] + 0x20);
      NullCheck(pIVar8);
      iVar4 = VirtualFuncInvoker0<int>::Invoke(0x16,pIVar8);
      if (iVar4 <= iVar1) break;
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(in_stack_00000028[3] + 0x30);
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x48);
      NullCheck(*(void **)(unaff_x29 + -0x50));
      uVar5 = VirtualFuncInvoker0<String_t*>::Invoke(0x4a,*(Il2CppObject **)(unaff_x29 + -0x50));
      *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(in_stack_00000028[3] + 0x20);
      *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x14);
      NullCheck(*(void **)(unaff_x29 + -0x60));
      pIVar8 = (Il2CppObject *)
               VirtualFuncInvoker1<Il2CppObject*,int>::Invoke
                         (0x1b,*(Il2CppObject **)(unaff_x29 + -0x60),*(int *)(unaff_x29 + -100));
      uVar7 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar5 = CastclassSealed(pIVar8,*(Il2CppClass **)
                                      Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                             );
      pSVar6 = (String_t *)String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(uVar7,uVar5);
      NullCheck(*(void **)(unaff_x29 + -0x50));
      VirtualActionInvoker1<String_t*>::Invoke(0x4b,*(Il2CppObject **)(unaff_x29 + -0x50),pSVar6);
      pIVar8 = *(Il2CppObject **)(in_stack_00000028[3] + 0x30);
      NullCheck(pIVar8);
      uVar5 = VirtualFuncInvoker0<String_t*>::Invoke(0x4a,pIVar8);
      pSVar6 = (String_t *)
               String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                         (uVar5,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__
                          ,0);
      NullCheck(pIVar8);
      VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar8,pSVar6);
      uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x14),1);
      *(undefined4 *)(unaff_x29 + -0x14) = uVar3;
    }
  }
  return;
}


