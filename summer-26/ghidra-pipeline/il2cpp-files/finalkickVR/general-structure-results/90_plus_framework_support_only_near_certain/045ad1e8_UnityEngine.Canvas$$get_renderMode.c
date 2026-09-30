/*
FUNCTION_NAME: UnityEngine.Canvas$$get_renderMode
ENTRY_POINT: 045ad1e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_14;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_14
*/


void UnityEngine_Canvas__get_renderMode(undefined1 param_1 [16],undefined4 param_2)

{
  undefined4 uVar1;
  bool in_ZR;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3 *pLVar6;
  void *pvVar7;
  Il2CppObject *pIVar8;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *pEVar9;
  long unaff_x29;
  undefined4 uVar10;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  byte bStack000000000000008f;
  uint uStack00000000000000a4;
  byte bStack00000000000000fb;
  uint uStack00000000000000fc;
  byte bStack0000000000000127;
  byte bStack00000000000001a7;
  byte bStack00000000000001c7;
  byte bStack00000000000001cf;
  
  *(bool *)(unaff_x29 + -0x41) = !in_ZR;
  *(byte *)(unaff_x29 + -0xd1) = *(byte *)(unaff_x29 + -0x41) & 1;
  if ((*(byte *)(unaff_x29 + -0xd1) & 1) != 0) {
    return;
  }
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x30);
  uVar3 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -0xe0),
                      *(Il2CppClass **)
                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  *(undefined8 *)(unaff_x29 + -0x38) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0xe8));
  uVar3 = VirtualFuncInvoker0<long>::Invoke(5,*(Il2CppObject **)(unaff_x29 + -0xe8));
  *(undefined8 *)(unaff_x29 + -0xf0) = uVar3;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_EventBase_1_t1218DA3104C9EAD7C32A1D5B975FD26D77F76928_il2cpp_TypeInfo_var_048dd7f8
            );
  uVar3 = EventBase_1_TypeId_m0D0D492BF3E4484B89111ADF52C02D0B5643D2E6
                    (*(MethodInfo **)
                      PTR_EventBase_1_TypeId_m0D0D492BF3E4484B89111ADF52C02D0B5643D2E6_RuntimeMethod_var_048ddc28
                    );
  *(undefined8 *)(unaff_x29 + -0xf8) = uVar3;
  if ((*(long *)(unaff_x29 + -0xf0) == *(long *)(unaff_x29 + -0xf8)) ||
     (*(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x38),
     *(long *)(unaff_x29 + -0x100) == 0)) {
    *(undefined4 *)(unaff_x29 + -100) = 0;
  }
  else {
    pvVar7 = *(void **)(unaff_x29 + -0x38);
    NullCheck(pvVar7);
    lVar4 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar7,0);
    *(uint *)(unaff_x29 + -100) = (uint)(lVar4 == 0);
  }
  *(bool *)(unaff_x29 + -0x42) = *(int *)(unaff_x29 + -100) != 0;
  if ((*(byte *)(unaff_x29 + -0x42) & 1) != 0) {
    MouseCaptureController_ReleaseMouse_m1C7324C27A04E2BBA83A5C868E1816B3F3B0AC21
              (*(undefined8 *)(unaff_x29 + -0x38),0);
    return;
  }
  if ((*(long *)(unaff_x29 + -0x18) == 0) || (*(long *)(unaff_x29 + -0x38) == 0)) {
    *(undefined4 *)(unaff_x29 + -0x68) = 0;
  }
  else {
    pvVar7 = *(void **)(unaff_x29 + -0x38);
    NullCheck(pvVar7);
    lVar4 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar7,0);
    *(uint *)(unaff_x29 + -0x68) = (uint)(lVar4 != *(long *)(unaff_x29 + -0x18));
  }
  *(bool *)(unaff_x29 + -0x43) = *(int *)(unaff_x29 + -0x68) != 0;
  if ((*(byte *)(unaff_x29 + -0x43) & 1) != 0) {
    return;
  }
  uVar3 = IsInst(*(Il2CppObject **)(unaff_x29 + -0x10),(Il2CppClass *)*in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
  if (*(long *)(unaff_x29 + -0x40) == 0) {
    *(undefined4 *)(unaff_x29 + -0x70) = 0;
  }
  else {
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar7);
    lVar4 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(pvVar7,0);
    if (lVar4 == 0) {
      *(undefined4 *)(unaff_x29 + -0x6c) = 1;
    }
    else {
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar7);
      lVar4 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(pvVar7,0);
      *(uint *)(unaff_x29 + -0x6c) = (uint)(lVar4 == *(long *)(unaff_x29 + -0x30));
    }
    *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x6c);
  }
  *(bool *)(unaff_x29 + -0x44) = *(int *)(unaff_x29 + -0x70) != 0;
  if ((*(byte *)(unaff_x29 + -0x44) & 1) == 0) {
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar7);
    lVar4 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(pvVar7,0);
    if (lVar4 == 0) {
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
    }
    else {
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar7);
      lVar4 = EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(pvVar7,0);
      *(uint *)(unaff_x29 + -0x74) = (uint)(lVar4 == 0);
    }
    *(bool *)(unaff_x29 + -0x45) = *(int *)(unaff_x29 + -0x74) != 0;
    if ((*(byte *)(unaff_x29 + -0x45) & 1) != 0) {
      *(undefined4 *)(unaff_x29 + -0x24) = 1;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x24) = 1;
    *(uint *)(unaff_x29 + -0x24) = *(uint *)(unaff_x29 + -0x24) | 2;
  }
  pIVar8 = *(Il2CppObject **)(unaff_x29 + -0x10);
  NullCheck(pIVar8);
  lVar4 = VirtualFuncInvoker0<long>::Invoke(5,pIVar8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_EventBase_1_t4813BB5FE5327C33AA6E02463510E8D2AA3721BA_il2cpp_TypeInfo_var_048dd918
            );
  lVar5 = EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991
                    (*(MethodInfo **)
                      PTR_EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991_RuntimeMethod_var_048dd910
                    );
  if (lVar4 != lVar5) {
    pIVar8 = *(Il2CppObject **)(unaff_x29 + -0x10);
    NullCheck(pIVar8);
    lVar4 = VirtualFuncInvoker0<long>::Invoke(5,pIVar8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                PTR_EventBase_1_tE1B3E6721ACE88C9A37AC57EDA370CC77ED38B6E_il2cpp_TypeInfo_var_048dd920
              );
    lVar5 = EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B
                      (*(MethodInfo **)
                        PTR_EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B_RuntimeMethod_var_048dd908
                      );
    if (lVar4 != lVar5) {
      pIVar8 = *(Il2CppObject **)(unaff_x29 + -0x10);
      NullCheck(pIVar8);
      lVar4 = VirtualFuncInvoker0<long>::Invoke(5,pIVar8);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  PTR_EventBase_1_tD5612D4D9A3CAD26CDB27B9D024C6D018D72FBC9_il2cpp_TypeInfo_var_048dd958
                );
      lVar5 = EventBase_1_TypeId_mED749E1E474001E2C04278A25601312E1BEA83DB
                        (*(MethodInfo **)
                          PTR_EventBase_1_TypeId_mED749E1E474001E2C04278A25601312E1BEA83DB_RuntimeMethod_var_048dd948
                        );
      *(uint *)(unaff_x29 + -0x78) = (uint)(lVar4 == lVar5);
      goto LAB_045ad690;
    }
  }
  *(undefined4 *)(unaff_x29 + -0x78) = 1;
LAB_045ad690:
  *(bool *)(unaff_x29 + -0x46) = *(int *)(unaff_x29 + -0x78) != 0;
  bStack00000000000001cf = *(byte *)(unaff_x29 + -0x46) & 1;
  if (bStack00000000000001cf != 0) {
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
  }
  *(bool *)(unaff_x29 + -0x47) = (*(uint *)(unaff_x29 + -0x24) & 1) == 1;
  bStack00000000000001c7 = *(byte *)(unaff_x29 + -0x47) & 1;
  if (bStack00000000000001c7 != 0) {
    uVar3 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -0x18),
                        *(Il2CppClass **)
                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
    *(undefined8 *)(unaff_x29 + -0x50) = uVar3;
    if (*(long *)(unaff_x29 + -0x40) == 0) {
      *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    }
    else {
      *(uint *)(unaff_x29 + -0x7c) = (uint)(*(long *)(unaff_x29 + -0x50) != 0);
    }
    *(bool *)(unaff_x29 + -0x52) = *(int *)(unaff_x29 + -0x7c) != 0;
    bStack00000000000001a7 = *(byte *)(unaff_x29 + -0x52) & 1;
    if (bStack00000000000001a7 != 0) {
      lVar4 = IsInst(*(Il2CppObject **)(unaff_x29 + -0x40),(Il2CppClass *)*in_stack_00000038);
      if (lVar4 == 0) {
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined4 *)(unaff_x29 + -0x94) = 1;
      }
      else {
        *(long *)(unaff_x29 + -0x88) = lVar4;
        NullCheck(*(void **)(unaff_x29 + -0x88));
        bVar2 = InterfaceFuncInvoker0<bool>::Invoke
                          (2,(Il2CppClass *)*in_stack_00000038,*(Il2CppObject **)(unaff_x29 + -0x88)
                          );
        *(uint *)(unaff_x29 + -0x94) = (uint)(bVar2 & 1);
      }
      *(bool *)(unaff_x29 + -0x53) = *(int *)(unaff_x29 + -0x94) != 0;
      *(byte *)(unaff_x29 + -0x54) = *(byte *)(unaff_x29 + -0x53) & 1;
      if ((*(byte *)(unaff_x29 + -0x54) & 1) != 0) {
        pvVar7 = *(void **)(unaff_x29 + -0x50);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
        uVar1 = *(undefined4 *)(lVar4 + 8);
        pIVar8 = *(Il2CppObject **)(unaff_x29 + -0x40);
        NullCheck(pIVar8);
        uVar10 = InterfaceFuncInvoker0<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>::Invoke
                           (1,(Il2CppClass *)*in_stack_00000040,pIVar8);
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        NullCheck(pvVar7);
        BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF
                  (uVar10,param_2,pvVar7,uVar1,uVar3,0);
      }
    }
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar7);
    uStack000000000000002c = 1;
    EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(pvVar7,1);
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x30);
    NullCheck(pvVar7);
    EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(pvVar7,uVar3,0);
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar7);
    bStack0000000000000127 =
         EventBase_get_skipDisabledElements_m92D25C10EE0BE65D488B27481A746791E7C36814(pvVar7,0);
    bStack0000000000000127 = bStack0000000000000127 & (byte)uStack000000000000002c;
    *(byte *)(unaff_x29 + -0x51) = bStack0000000000000127 & (byte)uStack000000000000002c;
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar7);
    EventBase_set_skipDisabledElements_mCD199A8D744CA42DC9A331A2795DAEB2CCA9243D(pvVar7,0,0);
    lVar4 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -0x30),
                        *(Il2CppClass **)Method_Unity_Collections_NativeArray<int4>_Dispose__);
    if (lVar4 == 0) {
      *(undefined8 *)(unaff_x29 + -0xa8) = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xa0) = lVar4;
      uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
      NullCheck(*(void **)(unaff_x29 + -0xa0));
      CallbackEventHandler_HandleEventAtTargetPhase_m681B23C2CCCF3064FEC2DFF49645043E7F909B18
                (*(undefined8 *)(unaff_x29 + -0xa0),uVar3,0);
    }
    uStack00000000000000fc = *(uint *)(unaff_x29 + -0x24);
    *(bool *)(unaff_x29 + -0x55) = (uStack00000000000000fc & 2) != 2;
    bStack00000000000000fb = *(byte *)(unaff_x29 + -0x55) & 1;
    if (bStack00000000000000fb != 0) {
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar7);
      EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(pvVar7,0);
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      bVar2 = *(byte *)(unaff_x29 + -0x51);
      NullCheck(pvVar7);
      EventBase_set_skipDisabledElements_mCD199A8D744CA42DC9A331A2795DAEB2CCA9243D
                (pvVar7,bVar2 & 1,0);
    }
    pIVar8 = *(Il2CppObject **)(unaff_x29 + -0x10);
    NullCheck(pIVar8);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,pIVar8,(Il2CppObject *)0x0);
    pEVar9 = *(EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C **)(unaff_x29 + -0x10);
    NullCheck(pEVar9);
    EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
              (pEVar9,0,(MethodInfo *)0x0);
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar7);
    uStack000000000000001c = 1;
    EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(pvVar7,0,0);
    pEVar9 = *(EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C **)(unaff_x29 + -0x10);
    NullCheck(pEVar9);
    pLVar6 = (List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3 *)
             EventBase_get_skipElements_mAF08DF55E115F65F6256966A2A5307194DD49DDE_inline
                       (pEVar9,(MethodInfo *)0x0);
    pIVar8 = *(Il2CppObject **)(unaff_x29 + -0x30);
    NullCheck(pLVar6);
    List_1_Add_m6DA75B130104121AA765F375B948065381AED1D4_inline
              (pLVar6,pIVar8,(MethodInfo *)*in_stack_00000048);
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    uStack00000000000000a4 = *(uint *)(unaff_x29 + -0x24);
    NullCheck(pvVar7);
    EventBase_set_stopDispatch_m4B24B3101AADAEAAEAB2617E3AF8ED4257681870
              (pvVar7,(uStack00000000000000a4 & 2) == 2,0);
    pvVar7 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar7);
    pIVar8 = (Il2CppObject *)
             EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(pvVar7,0);
    lVar4 = IsInstClass(pIVar8,*(Il2CppClass **)
                                PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
                       );
    *(byte *)(unaff_x29 + -0x56) = lVar4 != 0 & (byte)uStack000000000000001c;
    bStack000000000000008f = *(byte *)(unaff_x29 + -0x56) & (byte)uStack000000000000001c;
    if ((bStack000000000000008f & 1) == 0) {
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar7);
      EventBase_set_propagateToIMGUI_mEE39524D804DF059C390FBC08462CC2892770981(pvVar7,0,0);
    }
    else {
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar7);
      EventBase_set_propagateToIMGUI_mEE39524D804DF059C390FBC08462CC2892770981(pvVar7,1);
      pEVar9 = *(EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C **)(unaff_x29 + -0x10);
      NullCheck(pEVar9);
      pLVar6 = (List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3 *)
               EventBase_get_skipElements_mAF08DF55E115F65F6256966A2A5307194DD49DDE_inline
                         (pEVar9,(MethodInfo *)0x0);
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar7);
      pIVar8 = (Il2CppObject *)
               EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(pvVar7,0);
      NullCheck(pLVar6);
      List_1_Add_m6DA75B130104121AA765F375B948065381AED1D4_inline
                (pLVar6,pIVar8,(MethodInfo *)*in_stack_00000048);
    }
  }
  return;
}


