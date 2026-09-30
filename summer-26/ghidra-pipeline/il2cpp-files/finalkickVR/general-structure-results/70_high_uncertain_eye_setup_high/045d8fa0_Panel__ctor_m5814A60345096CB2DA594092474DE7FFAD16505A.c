/*
FUNCTION_NAME: Panel__ctor_m5814A60345096CB2DA594092474DE7FFAD16505A
ENTRY_POINT: 045d8fa0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Panel__ctor_m5814A60345096CB2DA594092474DE7FFAD16505A
               (Il2CppObject *param_1,
               ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A *param_2,int param_3,
               EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398 *param_4)

{
  RepaintData_t90534752135661579EC254884F550545D001B5EA *pRVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A *pFVar6;
  AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC *pAVar7;
  
  if ((Panel__ctor_m5814A60345096CB2DA594092474DE7FFAD16505A::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_CursorManager_tB28ED880450C37A0831769315A14D246F5A2E060_il2cpp_TypeInfo_var_048de8e0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_DynamicAtlas_tA1A51ADBE1DBFD82F6D52D5CA4D09D82F89678A8_il2cpp_TypeInfo_var_048de598
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A_il2cpp_TypeInfo_var_048de5e8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_RepaintData_t90534752135661579EC254884F550545D001B5EA_il2cpp_TypeInfo_var_048de8e8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718_il2cpp_TypeInfo_var_048de8f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_VisualElementFocusRing_t8965E2C7F4AC653F2C416E2B81F66E51FE8EEFE3_il2cpp_TypeInfo_var_048de568
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_VisualElementUtils_t40D4F58B1AA48524658BD0DC09E4CCD7DAAF722C_il2cpp_TypeInfo_var_048d9448
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_il2cpp_TypeInfo_var_048de8f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral388C340780C6B11AF689CDE7CCEB8C732DAB9C23_048de900);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralE613B93BA754382742DF7C7D4EF3E5B7C699F600_048de908);
    Panel__ctor_m5814A60345096CB2DA594092474DE7FFAD16505A::s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0x158] = (Il2CppObject)0x0;
  BaseVisualElementPanel__ctor_m7AC4D3FAA84B3BC5DAAE40AE5A517AAD4072FC3A(param_1);
  VirtualActionInvoker1<ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*>::Invoke
            (0xf,param_1,param_2);
  VirtualActionInvoker1<int>::Invoke(0x2d,param_1,param_3);
  VirtualActionInvoker1<EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*>::Invoke
            (0x28,param_1,param_4);
  pRVar1 = (RepaintData_t90534752135661579EC254884F550545D001B5EA *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_RepaintData_t90534752135661579EC254884F550545D001B5EA_il2cpp_TypeInfo_var_048de8e8
                     );
  RepaintData__ctor_m53AFC63AC4F87FB24889A0BF8F9FAD332AFBEB2B(pRVar1,0);
  VirtualActionInvoker1<RepaintData_t90534752135661579EC254884F550545D001B5EA*>::Invoke
            (0x22,param_1,pRVar1);
  pIVar2 = (Il2CppObject *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_CursorManager_tB28ED880450C37A0831769315A14D246F5A2E060_il2cpp_TypeInfo_var_048de8e0
                     );
  CursorManager__ctor_m0C261D3042AEA84E2A15EEC13154380AC4E0FAE9(pIVar2,0);
  VirtualActionInvoker1<Il2CppObject*>::Invoke(0x24,param_1,pIVar2);
  BaseVisualElementPanel_set_contextualMenuManager_m1FAEAC67DD9EE954954615AA4CEA8741385A25BA_inline
            ((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303 *)param_1,
             (ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B *)0x0,
             (MethodInfo *)0x0);
  pvVar3 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               PTR_VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_il2cpp_TypeInfo_var_048de8f8
                             );
  VisualTreeUpdater__ctor_mC19919BE31D08821AB123291E35FAA24874F4C8C(pvVar3,param_1,0);
  *(void **)(param_1 + 0xb0) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0xb0),pvVar3);
  pvVar3 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar3,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_VisualElementUtils_t40D4F58B1AA48524658BD0DC09E4CCD7DAAF722C_il2cpp_TypeInfo_var_048d9448
            );
  uVar4 = VisualElementUtils_GetUniqueName_m7BB69CA900022779E44F7E1FEF3F1CF5ABA7EC53
                    (*(undefined8 *)
                      PTR__stringLiteral388C340780C6B11AF689CDE7CCEB8C732DAB9C23_048de900,0);
  NullCheck(pvVar3);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar3,uVar4,0);
  NullCheck(pvVar3);
  VisualElement_set_viewDataKey_m6318C0A701350678B0DBF34939C3BC392134B092
            (pvVar3,*(undefined8 *)
                     PTR__stringLiteralE613B93BA754382742DF7C7D4EF3E5B7C699F600_048de908,0);
  NullCheck(pvVar3);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar3,param_3 != 1);
  NullCheck(pvVar3);
  VisualElement_set_eventCallbackCategories_mCF66FA7CF9D52E308FDB7472F2EC3FD4424D145F
            (pvVar3,0x80000000,0);
  NullCheck(param_1);
  *(void **)(param_1 + 0xa8) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0xa8),pvVar3);
  pvVar3 = (void *)VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::
                   Invoke(0x26,param_1);
  NullCheck(pvVar3);
  VisualElement_SetPanel_mACD3EE2D722D70A0C44FB87976764DBA1FA818A0(pvVar3,param_1,0);
  uVar4 = VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::Invoke
                    (0x26,param_1);
  uVar5 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      PTR_VisualElementFocusRing_t8965E2C7F4AC653F2C416E2B81F66E51FE8EEFE3_il2cpp_TypeInfo_var_048de568
                    );
  UnityEngine_UIElements_ListViewDragger__GetVisualMode(uVar5,uVar4,0,0);
  pFVar6 = (FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A_il2cpp_TypeInfo_var_048de5e8
                     );
  FocusController__ctor_m9C8B31AC9F9CB4CB535FDE39FA7E3276237A4A02(pFVar6,uVar5,0);
  VirtualActionInvoker1<FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A*>::Invoke
            (0x15,param_1,pFVar6);
  pIVar2 = (Il2CppObject *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718_il2cpp_TypeInfo_var_048de8f0
                     );
  StylePropertyAnimationSystem__ctor_mC6EBE9875CD310004AB1C28FD79DCEF3DED90CD8(pIVar2,0);
  VirtualActionInvoker1<Il2CppObject*>::Invoke(0x2b,param_1,pIVar2);
  Panel_CreateMarkers_mF921C3BD6F320F89EF8E4EA96C00FC941EDE3A4F(param_1,0);
  uVar4 = VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::Invoke
                    (0x26,param_1);
  BaseVisualElementPanel_InvokeHierarchyChanged_m495E00CB89980D30A2E3D1449CA4ABE91994ECDD
            (param_1,uVar4,0,0);
  pAVar7 = (AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_DynamicAtlas_tA1A51ADBE1DBFD82F6D52D5CA4D09D82F89678A8_il2cpp_TypeInfo_var_048de598
                     );
  DynamicAtlas__ctor_mFE84D44D513057C4EE4BF94E732784E7C4B1F4E3(pAVar7,0);
  VirtualActionInvoker1<AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC*>::Invoke
            (0x34,param_1,pAVar7);
  return;
}


