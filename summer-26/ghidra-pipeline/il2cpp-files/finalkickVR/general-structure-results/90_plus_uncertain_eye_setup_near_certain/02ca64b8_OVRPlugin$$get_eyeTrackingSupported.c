/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 02ca64b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  String_t *pSVar5;
  undefined8 uVar6;
  Il2CppObject *pIVar7;
  long unaff_x29;
  long in_stack_00000028;
  
  while( true ) {
    uVar2 = il2cpp_codegen_add<int,int>(param_1,1);
    *(undefined4 *)(unaff_x29 + -0x14) = uVar2;
    iVar1 = *(int *)(unaff_x29 + -0x14);
    pIVar7 = *(Il2CppObject **)(*(long *)(in_stack_00000028 + 0x18) + 0x20);
    NullCheck(pIVar7);
    iVar3 = VirtualFuncInvoker0<int>::Invoke(0x16,pIVar7);
    if (iVar3 <= iVar1) break;
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(*(long *)(in_stack_00000028 + 0x18) + 0x30)
    ;
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x48);
    NullCheck(*(void **)(unaff_x29 + -0x50));
    uVar4 = VirtualFuncInvoker0<String_t*>::Invoke(0x4a,*(Il2CppObject **)(unaff_x29 + -0x50));
    *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(*(long *)(in_stack_00000028 + 0x18) + 0x20)
    ;
    *(undefined4 *)(unaff_x29 + -100) = *(undefined4 *)(unaff_x29 + -0x14);
    NullCheck(*(void **)(unaff_x29 + -0x60));
    pIVar7 = (Il2CppObject *)
             VirtualFuncInvoker1<Il2CppObject*,int>::Invoke
                       (0x1b,*(Il2CppObject **)(unaff_x29 + -0x60),*(int *)(unaff_x29 + -100));
    uVar6 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar4 = CastclassSealed(pIVar7,*(Il2CppClass **)
                                    Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                           );
    pSVar5 = (String_t *)String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(uVar6,uVar4);
    NullCheck(*(void **)(unaff_x29 + -0x50));
    VirtualActionInvoker1<String_t*>::Invoke(0x4b,*(Il2CppObject **)(unaff_x29 + -0x50),pSVar5);
    pIVar7 = *(Il2CppObject **)(*(long *)(in_stack_00000028 + 0x18) + 0x30);
    NullCheck(pIVar7);
    uVar4 = VirtualFuncInvoker0<String_t*>::Invoke(0x4a,pIVar7);
    pSVar5 = (String_t *)
             String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                       (uVar4,*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__,0
                       );
    NullCheck(pIVar7);
    VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar7,pSVar5);
    param_1 = *(int *)(unaff_x29 + -0x14);
  }
  return;
}


