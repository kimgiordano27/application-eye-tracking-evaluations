/*
FUNCTION_NAME: UnityEngine.UIElements.TextField$$get_textInput
ENTRY_POINT: 04440c28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UIElements_TextField__get_textInput
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *pEVar7;
  Il2CppObject *pIVar8;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  ulong *in_stack_00000010;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000024;
  byte bStack0000000000000083;
  int iStack0000000000000084;
  
  if ((ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_il2cpp_TypeInfo_var_048d81e0
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var_048d8208
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7::
    s_Il2CppMethodInitialized = 1;
  }
  in_stack_00000008[0x14] = 0;
  in_stack_00000008[0x13] = 0;
  in_stack_00000008[0x12] = 0;
  *(undefined1 *)(unaff_x29 + -0x31) = 0;
  *(undefined1 *)(unaff_x29 + -0x32) = 0;
  *(undefined1 *)(unaff_x29 + -0x33) = 0;
  in_stack_00000008[0x10] = in_stack_00000008[0x16];
  uVar3 = IsInst((Il2CppObject *)in_stack_00000008[0x10],(Il2CppClass *)*in_stack_00000010);
  in_stack_00000008[0x14] = uVar3;
  in_stack_00000008[0xf] = in_stack_00000008[0x14];
  *(bool *)(unaff_x29 + -0x31) = in_stack_00000008[0xf] == 0;
  *(byte *)(unaff_x29 + -0x49) = *(byte *)(unaff_x29 + -0x31) & 1;
  if ((*(byte *)(unaff_x29 + -0x49) & 1) == 0) {
    in_stack_00000008[0xd] = *(undefined8 *)(in_stack_00000008[0x17] + 0x10);
    in_stack_00000008[0xc] = in_stack_00000008[0x14];
    NullCheck((void *)in_stack_00000008[0xc]);
    uVar2 = InterfaceFuncInvoker0<int>::Invoke
                      (0,(Il2CppClass *)*in_stack_00000010,(Il2CppObject *)in_stack_00000008[0xc]);
    *(undefined4 *)(unaff_x29 + -100) = uVar2;
    NullCheck((void *)in_stack_00000008[0xd]);
    uVar3 = List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB
                      ((List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6 *)in_stack_00000008[0xd],
                       *(int *)(unaff_x29 + -100),
                       *(MethodInfo **)
                        PTR_List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var_048d8208
                      );
    in_stack_00000008[10] = uVar3;
    in_stack_00000008[0x13] = in_stack_00000008[10];
    in_stack_00000008[9] = in_stack_00000008[0x16];
    NullCheck((void *)in_stack_00000008[9]);
    uVar3 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(in_stack_00000008[9],0);
    in_stack_00000008[8] = uVar3;
    uVar3 = IsInstClass((Il2CppObject *)in_stack_00000008[8],
                        *(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    in_stack_00000008[0x12] = uVar3;
    in_stack_00000008[7] = in_stack_00000008[0x12];
    in_stack_00000008[6] = in_stack_00000008[0x13];
    NullCheck((void *)in_stack_00000008[6]);
    in_stack_00000008[5] = *(undefined8 *)(in_stack_00000008[6] + 0x10);
    *(bool *)(unaff_x29 + -0x32) = in_stack_00000008[7] != in_stack_00000008[5];
    *(byte *)(unaff_x29 + -0x99) = *(byte *)(unaff_x29 + -0x32) & 1;
    if ((*(byte *)(unaff_x29 + -0x99) & 1) != 0) {
      in_stack_00000008[3] = in_stack_00000008[0x13];
      NullCheck((void *)in_stack_00000008[3]);
      ButtonClickStatus_Reset_mFCBC412DDC97A15CD335422EE69C932766EB4067(in_stack_00000008[3],0);
    }
    in_stack_00000008[2] = in_stack_00000008[0x13];
    in_stack_00000008[1] = in_stack_00000008[0x12];
    NullCheck((void *)in_stack_00000008[2]);
    *(undefined8 *)(in_stack_00000008[2] + 0x10) = in_stack_00000008[1];
    Il2CppCodeGenWriteBarrier((void **)(in_stack_00000008[2] + 0x10),(void *)in_stack_00000008[1]);
    *in_stack_00000008 = in_stack_00000008[0x16];
    NullCheck((void *)*in_stack_00000008);
    lVar4 = EventBase_get_timestamp_mC9B2EEBB3D65DD2032AAF19FEB0032AEA8D303A0_inline
                      ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)*in_stack_00000008,
                       (MethodInfo *)0x0);
    pvVar5 = (void *)in_stack_00000008[0x13];
    NullCheck(pvVar5);
    lVar6 = *(long *)((long)pvVar5 + 0x28);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                PTR_ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_il2cpp_TypeInfo_var_048d81e0
              );
    iStack0000000000000084 =
         ClickDetector_get_s_DoubleClickTime_mC3981303DF2BC78A33219109765E2EBB183DD1B2_inline
                   ((MethodInfo *)0x0);
    lVar4 = il2cpp_codegen_subtract<long,long>(lVar4,lVar6);
    *(bool *)(unaff_x29 + -0x33) = iStack0000000000000084 < lVar4;
    bStack0000000000000083 = *(byte *)(unaff_x29 + -0x33) & 1;
    if (bStack0000000000000083 == 0) {
      pvVar5 = (void *)in_stack_00000008[0x13];
      NullCheck(pvVar5);
      iVar1 = *(int *)((long)pvVar5 + 0x30);
      NullCheck(pvVar5);
      uVar2 = il2cpp_codegen_add<int,int>(iVar1,1);
      *(undefined4 *)((long)pvVar5 + 0x30) = uVar2;
    }
    else {
      pvVar5 = (void *)in_stack_00000008[0x13];
      NullCheck(pvVar5);
      *(undefined4 *)((long)pvVar5 + 0x30) = 1;
    }
    pvVar5 = (void *)in_stack_00000008[0x13];
    pEVar7 = (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)in_stack_00000008[0x16];
    NullCheck(pEVar7);
    uVar3 = EventBase_get_timestamp_mC9B2EEBB3D65DD2032AAF19FEB0032AEA8D303A0_inline
                      (pEVar7,(MethodInfo *)0x0);
    NullCheck(pvVar5);
    *(undefined8 *)((long)pvVar5 + 0x28) = uVar3;
    pvVar5 = (void *)in_stack_00000008[0x13];
    pIVar8 = (Il2CppObject *)in_stack_00000008[0x14];
    NullCheck(pIVar8);
    uStack000000000000001c =
         InterfaceFuncInvoker0<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>::Invoke
                   (5,(Il2CppClass *)*in_stack_00000010,pIVar8);
    uVar3 = CONCAT44(param_2,uStack000000000000001c);
    uStack0000000000000024 = param_3;
    NullCheck(pvVar5);
    *(undefined8 *)((long)pvVar5 + 0x18) = uVar3;
    *(undefined4 *)((long)pvVar5 + 0x20) = param_3;
  }
  return;
}


