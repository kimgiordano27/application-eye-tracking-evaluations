/*
FUNCTION_NAME: UnityEngine.UIElements.FontDefinition$$FromObject
ENTRY_POINT: 0452bc90
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_UIElements_FontDefinition__FromObject(undefined8 param_1,MethodInfo *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  Columns_t487EAF3B634F6D919D58F1927099A8883964831B *pCVar4;
  ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4 *pCVar5;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar6;
  MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *pMVar7;
  void *pvVar8;
  long unaff_x29;
  undefined4 uVar9;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000054;
  byte bStack0000000000000086;
  byte bStack0000000000000087;
  
  *(undefined1 *)(unaff_x29 + -0x43) = 0;
  bVar1 = ColumnMover_get_active_m53690CF499CEBA1D3F1DB6298248548C85184291_inline
                    (*(ColumnMover_tF8B270BEC7C26ECD780F9EEAE6EC2A99BDC6986F **)(unaff_x29 + -0x10),
                     param_2);
  *(byte *)(unaff_x29 + -0x44) = bVar1 & 1;
  *(byte *)(unaff_x29 + -0x41) = *(byte *)(unaff_x29 + -0x44) & 1;
  *(byte *)(unaff_x29 + -0x45) = *(byte *)(unaff_x29 + -0x41) & 1;
  if ((*(byte *)(unaff_x29 + -0x45) & 1) == 0) {
    uVar2 = Manipulator_get_target_m2B0E5AA5012E1DCACBC74A10E582733128E7935B
                      (*(undefined8 *)(unaff_x29 + -0x10));
    *(undefined8 *)(unaff_x29 + -0x58) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x5c) = *(undefined4 *)(unaff_x29 + -0x1c);
    PointerCaptureHelper_CapturePointer_m7A647567160ADA0E052A7277C5B531D7A01E5F7F
              (*(undefined8 *)(unaff_x29 + -0x58),*(undefined4 *)(unaff_x29 + -0x5c),0);
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x18);
    lVar3 = IsInst(*(Il2CppObject **)(unaff_x29 + -0x68),
                   *(Il2CppClass **)Method_Oculus_Platform_Request<DestinationList>__ctor__);
    *(bool *)(unaff_x29 + -0x42) = lVar3 == 0;
    *(byte *)(unaff_x29 + -0x69) = *(byte *)(unaff_x29 + -0x42) & 1;
    if ((*(byte *)(unaff_x29 + -0x69) & 1) != 0) {
      uVar2 = Manipulator_get_target_m2B0E5AA5012E1DCACBC74A10E582733128E7935B
                        (*(undefined8 *)(unaff_x29 + -0x10));
      *(undefined8 *)(unaff_x29 + -0x78) = uVar2;
      NullCheck(*(void **)(unaff_x29 + -0x78));
      uVar2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1
                        (*(undefined8 *)(unaff_x29 + -0x78),0);
      *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
      *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x1c);
      PointerCaptureHelper_ProcessPointerCapture_mD1AE918F21A8FA12782FDDB44BC51B4449F0B160
                (*(undefined8 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x84),0);
    }
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0x90));
    uVar2 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,*(Il2CppObject **)(unaff_x29 + -0x90));
    *(undefined8 *)(unaff_x29 + -0x98) = uVar2;
    uVar2 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -0x98),
                        *(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
    pVVar6 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)(unaff_x29 + -0x30);
    NullCheck(pVVar6);
    uVar2 = VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D
                      (pVVar6,*(MethodInfo **)
                               PTR_VisualElement_GetFirstAncestorOfType_TisMultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_m38CC2657E237FB0947F40B2C8D089FDF6CFEAC8D_RuntimeMethod_var_048dbe30
                      );
    *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
    pMVar7 = *(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)
              (unaff_x29 + -0x38);
    NullCheck(pMVar7);
    pCVar4 = (Columns_t487EAF3B634F6D919D58F1927099A8883964831B *)
             MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline
                       (pMVar7,(MethodInfo *)0x0);
    NullCheck(pCVar4);
    bStack0000000000000087 =
         Columns_get_reorderable_m1C3C2F71BB8F01246410278305BDC37AC9C21231_inline
                   (pCVar4,(MethodInfo *)0x0);
    bStack0000000000000087 = bStack0000000000000087 & 1;
    *(bool *)(unaff_x29 + -0x43) = bStack0000000000000087 == 0;
    bStack0000000000000086 = *(byte *)(unaff_x29 + -0x43) & 1;
    if (bStack0000000000000086 == 0) {
      pvVar8 = *(void **)(unaff_x29 + -0x38);
      *(void **)(*(long *)(unaff_x29 + -0x10) + 0x40) = pvVar8;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -0x10) + 0x40),pvVar8);
      uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x29 + -8);
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -8) >> 0x20);
      uVar9 = VisualElementExtensions_ChangeCoordinatesTo_m6FB5F30A653A5BA54E0C5BFBDE9602B83FFB8A20
                        (uStack0000000000000048,*(undefined8 *)(unaff_x29 + -0x30),
                         *(undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x40));
      *(ulong *)(unaff_x29 + -0x40) = CONCAT44(uStack000000000000004c,uVar9);
      pMVar7 = *(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)
                (*(long *)(unaff_x29 + -0x10) + 0x40);
      uStack0000000000000054 = uStack000000000000004c;
      NullCheck(pMVar7);
      pCVar5 = (ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4 *)
               UnityEngine_UIElements_VisualElement__get_contentRect(pMVar7,(MethodInfo *)0x0);
      ColumnMover_set_columnLayout_m40A95913088B40305880B995E0C08BC31B9A2896_inline
                (*(ColumnMover_tF8B270BEC7C26ECD780F9EEAE6EC2A99BDC6986F **)(unaff_x29 + -0x10),
                 pCVar5,(MethodInfo *)0x0);
      *(undefined1 *)(*(long *)(unaff_x29 + -0x10) + 0x3a) = 0;
      uStack0000000000000030 = (undefined4)*(undefined8 *)(unaff_x29 + -0x40);
      uStack000000000000002c = uStack0000000000000030;
      *(undefined4 *)(*(long *)(unaff_x29 + -0x10) + 0x30) = uStack0000000000000030;
      ColumnMover_set_active_mAAA3970E167BEB08AC0A151B8CFDFAA73651EEFE
                (*(undefined8 *)(unaff_x29 + -0x10),1,0);
      pvVar8 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar8);
      EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(pvVar8,0);
    }
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0x50));
    EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA
              (*(undefined8 *)(unaff_x29 + -0x50),0);
  }
  return;
}


