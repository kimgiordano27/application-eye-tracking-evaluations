/*
FUNCTION_NAME: ColumnMover_ProcessDownEvent_mBFE5FD1DAC2F0B59B78023B77847F13CD6076CE2
ENTRY_POINT: 0452bc14
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void ColumnMover_ProcessDownEvent_mBFE5FD1DAC2F0B59B78023B77847F13CD6076CE2
               (undefined4 param_1,ColumnMover_tF8B270BEC7C26ECD780F9EEAE6EC2A99BDC6986F *param_2,
               Il2CppObject *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  Il2CppObject *pIVar5;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar6;
  MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *pMVar7;
  Columns_t487EAF3B634F6D919D58F1927099A8883964831B *pCVar8;
  ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4 *pCVar9;
  undefined4 uVar10;
  
  if ((ColumnMover_ProcessDownEvent_mBFE5FD1DAC2F0B59B78023B77847F13CD6076CE2::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Request<DestinationList>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D_RuntimeMethod_var_048dbe30
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    ColumnMover_ProcessDownEvent_mBFE5FD1DAC2F0B59B78023B77847F13CD6076CE2::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = ColumnMover_get_active_m53690CF499CEBA1D3F1DB6298248548C85184291_inline
                    (param_2,(MethodInfo *)0x0);
  if ((bVar1 & 1) == 0) {
    uVar2 = Manipulator_get_target_m2B0E5AA5012E1DCACBC74A10E582733128E7935B(param_2);
    PointerCaptureHelper_CapturePointer_m7A647567160ADA0E052A7277C5B531D7A01E5F7F(uVar2,param_4,0);
    lVar3 = IsInst(param_3,*(Il2CppClass **)Method_Oculus_Platform_Request<DestinationList>__ctor__)
    ;
    if (lVar3 == 0) {
      pvVar4 = (void *)Manipulator_get_target_m2B0E5AA5012E1DCACBC74A10E582733128E7935B(param_2);
      NullCheck(pvVar4);
      uVar2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar4,0);
      PointerCaptureHelper_ProcessPointerCapture_mD1AE918F21A8FA12782FDDB44BC51B4449F0B160
                (uVar2,param_4,0);
    }
    NullCheck(param_3);
    pIVar5 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,param_3);
    pVVar6 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
             IsInstClass(pIVar5,*(Il2CppClass **)
                                 Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    NullCheck(pVVar6);
    pMVar7 = (MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *)
             VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D
                       (pVVar6,*(MethodInfo **)
                                PTR_VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D_RuntimeMethod_var_048dbe30
                       );
    NullCheck(pMVar7);
    pCVar8 = (Columns_t487EAF3B634F6D919D58F1927099A8883964831B *)
             MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline
                       (pMVar7,(MethodInfo *)0x0);
    NullCheck(pCVar8);
    bVar1 = Columns_get_reorderable_m1C3C2F71BB8F01246410278305BDC37AC9C21231_inline
                      (pCVar8,(MethodInfo *)0x0);
    if ((bVar1 & 1) != 0) {
      *(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)(param_2 + 0x40) =
           pMVar7;
      Il2CppCodeGenWriteBarrier((void **)(param_2 + 0x40),pMVar7);
      uVar10 = VisualElementExtensions_ChangeCoordinatesTo_m6FB5F30A653A5BA54E0C5BFBDE9602B83FFB8A20
                         (param_1,pVVar6,*(undefined8 *)(param_2 + 0x40));
      pMVar7 = *(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)
                (param_2 + 0x40);
      NullCheck(pMVar7);
      pCVar9 = (ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4 *)
               UnityEngine_UIElements_VisualElement__get_contentRect(pMVar7,(MethodInfo *)0x0);
      ColumnMover_set_columnLayout_m40A95913088B40305880B995E0C08BC31B9A2896_inline
                (param_2,pCVar9,(MethodInfo *)0x0);
      param_2[0x3a] = (ColumnMover_tF8B270BEC7C26ECD780F9EEAE6EC2A99BDC6986F)0x0;
      *(undefined4 *)(param_2 + 0x30) = uVar10;
      ColumnMover_set_active_mAAA3970E167BEB08AC0A151B8CFDFAA73651EEFE(param_2,1,0);
      NullCheck(param_3);
      EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(param_3,0);
    }
  }
  else {
    NullCheck(param_3);
    EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA(param_3,0);
  }
  return;
}


