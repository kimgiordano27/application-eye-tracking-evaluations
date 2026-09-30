/*
FUNCTION_NAME: Unity.AppUI.Core.AppUIManager$$Shutdown
ENTRY_POINT: 06341c84
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


void Unity_AppUI_Core_AppUIManager__Shutdown(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *unaff_x20;
  undefined8 uVar10;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  uint *puVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x478));
  thunk_FUN_032e1da0(Meta_Voice_IVoiceRequestResults_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_0728bcb8);
  thunk_FUN_032e1da0(Oculus_Voice_Core_Bindings_Interfaces_IVoiceSDKLogger_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_IVoiceService_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_07289e10);
  thunk_FUN_032e1da0(Oculus_Platform_IVoipPCMSource_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_Rendering_IVolumeDebugSettings2_TypeInfo);
  thunk_FUN_032e1da0(System_Net_IWebProxy_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_07279f40);
  thunk_FUN_032e1da0(UnityEngine_Timeline_ITimeControl_TypeInfo);
  thunk_FUN_032e1da0(System_Net_IWebRequestCreate_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_Events_IWitByteDataReadyHandler_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_Events_IWitByteDataSentHandler_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_Interfaces_IWitConfigurationProvider_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_Timeline_ITimelineClipAsset_TypeInfo);
  thunk_FUN_032e1da0(System_Threading_Tasks_Sources_IValueTaskSource_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_IWitRequestConfiguration_TypeInfo);
  thunk_FUN_032e1da0(Unity_VisualScripting_Antlr3_Runtime_IToken_TypeInfo);
  thunk_FUN_032e1da0(Unity_VisualScripting_Antlr3_Runtime_ITokenSource_TypeInfo);
  thunk_FUN_032e1da0(Unity_VisualScripting_Antlr3_Runtime_ITokenStream_TypeInfo);
  thunk_FUN_032e1da0(Newtonsoft_Json_Serialization_ITraceWriter_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_IWitRequestEndpointInfo_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_07284000);
  thunk_FUN_032e1da0(System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_Interfaces_IWitRequestProvider_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_IWitRuntimeConfigProvider_TypeInfo);
  thunk_FUN_032e1da0(Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo);
  thunk_FUN_032e1da0(Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_TypeInfo);
  thunk_FUN_032e1da0(Oculus_Interaction_Input_ITrackingToWorldTransformer_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractor_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_IXRAimAssist_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_IXRCustomReticleProvider_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_Interfaces_ITranscriptionEvent_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_IXRFocusInteractable_TypeInfo);
  thunk_FUN_032e1da0(Meta_WitAi_Interfaces_ITranscriptionProvider_TypeInfo);
  thunk_FUN_032e1da0(UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x914) = 1;
  uVar9 = **(undefined8 **)(*unaff_x20 + 0xb8);
  uVar10 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  uVar3 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_06341834(uVar3,uVar9,0,0,0,uVar10);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar4 = uVar3;
  thunk_FUN_0333a630(puVar4,uVar3);
  uVar3 = thunk_FUN_032a56a0(*unaff_x27);
  Unity_AppUI_Core_AppUIManager__set_settings(uVar3,0,*unaff_x28);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  *puVar4 = uVar3;
  thunk_FUN_0333a630(puVar4,uVar3);
  uVar3 = thunk_FUN_032a56a0(*unaff_x27);
  Unity_AppUI_Core_AppUIManager__set_settings(uVar3,0,*unaff_x26);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  *puVar4 = uVar3;
  thunk_FUN_0333a630(puVar4,uVar3);
  plVar5 = (long *)FUN_032d5d3c(*unaff_x25,0x34);
  uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  lVar6 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_06341834(lVar6,*unaff_x24,0,0,0,uVar3);
  if (plVar5 == (long *)0x0) {
LAB_063435f0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_063435f4:
    uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar3,0);
  }
  puVar1 = Meta_WitAi_IVoiceService_TypeInfo;
  puVar11 = (uint *)(plVar5 + 3);
  if (*puVar11 != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_0333a630(plVar5 + 4,lVar6);
    uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_063435f4;
    puVar1 = PTR_DAT_0728aa10;
    if (1 < *puVar11) {
      plVar5[5] = lVar6;
      thunk_FUN_0333a630(plVar5 + 5,lVar6);
      uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      lVar6 = thunk_FUN_032a56a0(*unaff_x23);
      FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,1,uVar3);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_063435f4;
      puVar1 = PTR_DAT_07284000;
      if (2 < *puVar11) {
        plVar5[6] = lVar6;
        thunk_FUN_0333a630(plVar5 + 6,lVar6);
        uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
        lVar6 = thunk_FUN_032a56a0(*unaff_x23);
        FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_063435f4;
        puVar1 = System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo;
        if (3 < *puVar11) {
          plVar5[7] = lVar6;
          thunk_FUN_0333a630(plVar5 + 7,lVar6);
          uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
          lVar6 = thunk_FUN_032a56a0(*unaff_x23);
          FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_063435f4;
          puVar1 = Meta_WitAi_IVoiceEventProvider_TypeInfo;
          if (4 < *puVar11) {
            plVar5[8] = lVar6;
            thunk_FUN_0333a630(plVar5 + 8,lVar6);
            uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
            lVar6 = thunk_FUN_032a56a0(*unaff_x23);
            FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_063435f4;
            puVar1 = UnityEngine_UIElements_IVisualElementScheduler_TypeInfo;
            if (5 < *puVar11) {
              plVar5[9] = lVar6;
              thunk_FUN_0333a630(plVar5 + 9,lVar6);
              uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
              lVar6 = thunk_FUN_032a56a0(*unaff_x23);
              FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
              goto LAB_063435f4;
              puVar1 = System_IValueTupleInternal_TypeInfo;
              if (6 < *puVar11) {
                plVar5[10] = lVar6;
                thunk_FUN_0333a630(plVar5 + 10,lVar6);
                uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                goto LAB_063435f4;
                puVar1 = Meta_WitAi_Events_IWitByteDataSentHandler_TypeInfo;
                if (7 < *puVar11) {
                  plVar5[0xb] = lVar6;
                  thunk_FUN_0333a630(plVar5 + 0xb,lVar6);
                  uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                  lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                  FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)
                     ) goto LAB_063435f4;
                  puVar1 = Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo;
                  if (8 < *puVar11) {
                    plVar5[0xc] = lVar6;
                    thunk_FUN_0333a630(plVar5 + 0xc,lVar6);
                    uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                    FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,1,uVar3);
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar7 == 0)) goto LAB_063435f4;
                    puVar1 = UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo;
                    if (9 < *puVar11) {
                      plVar5[0xd] = lVar6;
                      thunk_FUN_0333a630(plVar5 + 0xd,lVar6);
                      uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                      lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                      FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,uVar3);
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar7 == 0)) goto LAB_063435f4;
                      puVar1 = PTR_DAT_07279f40;
                      if (10 < *puVar11) {
                        plVar5[0xe] = lVar6;
                        thunk_FUN_0333a630(plVar5 + 0xe,lVar6);
                        uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                        lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                        FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,0,uVar3);
                        if ((lVar6 != 0) &&
                           (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar7 == 0)) goto LAB_063435f4;
                        puVar1 = UnityEngine_Timeline_ITimelineClipAsset_TypeInfo;
                        if (0xb < *puVar11) {
                          plVar5[0xf] = lVar6;
                          thunk_FUN_0333a630(plVar5 + 0xf,lVar6);
                          uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                          lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                          FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
                          if ((lVar6 != 0) &&
                             (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                             lVar7 == 0)) goto LAB_063435f4;
                          puVar1 = 
                          UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo
                          ;
                          if (0xc < *puVar11) {
                            plVar5[0x10] = lVar6;
                            thunk_FUN_0333a630(plVar5 + 0x10,lVar6);
                            uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                            lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                            FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,uVar3);
                            if ((lVar6 != 0) &&
                               (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar7 == 0)) goto LAB_063435f4;
                            puVar1 = Unity_VisualScripting_Antlr3_Runtime_ITokenStream_TypeInfo;
                            if (0xd < *puVar11) {
                              plVar5[0x11] = lVar6;
                              thunk_FUN_0333a630(plVar5 + 0x11,lVar6);
                              uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                              lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                              FUN_06341834(lVar6,*(undefined8 *)puVar1,1,1,0,uVar3);
                              if ((lVar6 != 0) &&
                                 (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                                 lVar7 == 0)) goto LAB_063435f4;
                              puVar1 = 
                              Oculus_Voice_Core_Bindings_Interfaces_IVoiceSDKLogger_TypeInfo;
                              if (0xe < *puVar11) {
                                plVar5[0x12] = lVar6;
                                thunk_FUN_0333a630(plVar5 + 0x12,lVar6);
                                uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
                                if ((lVar6 != 0) &&
                                   (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar5 + 0x40)
                                                              ), lVar7 == 0)) goto LAB_063435f4;
                                puVar1 = 
                                UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_TypeInfo;
                                if (0xf < *puVar11) {
                                  plVar5[0x13] = lVar6;
                                  thunk_FUN_0333a630(plVar5 + 0x13,lVar6);
                                  uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                  lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                  FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,uVar3);
                                  if ((lVar6 != 0) &&
                                     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                        (*plVar5 + 0x40)),
                                     lVar7 == 0)) goto LAB_063435f4;
                                  puVar1 = Meta_WitAi_IWitRequestEndpointInfo_TypeInfo;
                                  if (0x10 < *puVar11) {
                                    plVar5[0x14] = lVar6;
                                    thunk_FUN_0333a630(plVar5 + 0x14,lVar6);
                                    uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,uVar3);
                                    if ((lVar6 != 0) &&
                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                          (*plVar5 + 0x40)),
                                       lVar7 == 0)) goto LAB_063435f4;
                                    puVar1 = PTR_DAT_0729e478;
                                    if (0x11 < *puVar11) {
                                      plVar5[0x15] = lVar6;
                                      thunk_FUN_0333a630(plVar5 + 0x15,lVar6);
                                      uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                      lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                      FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,0,uVar3);
                                      if ((lVar6 != 0) &&
                                         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                            (*plVar5 + 0x40)),
                                         lVar7 == 0)) goto LAB_063435f4;
                                      puVar1 = System_Threading_IThreadPoolWorkItem_TypeInfo;
                                      if (0x12 < *puVar11) {
                                        plVar5[0x16] = lVar6;
                                        thunk_FUN_0333a630(plVar5 + 0x16,lVar6);
                                        uVar3 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10)
                                        ;
                                        lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                        FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,uVar3);
                                        if ((lVar6 != 0) &&
                                           (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                              (*plVar5 + 0x40)),
                                           lVar7 == 0)) goto LAB_063435f4;
                                        puVar1 = 
                                        UnityEngine_XR_Interaction_Toolkit_IXRAimAssist_TypeInfo;
                                        if (0x13 < *puVar11) {
                                          plVar5[0x17] = lVar6;
                                          thunk_FUN_0333a630(plVar5 + 0x17,lVar6);
                                          uVar3 = *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                          lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                          FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,1,uVar3);
                                          if ((lVar6 != 0) &&
                                             (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                                (*plVar5 + 0x40)),
                                             lVar7 == 0)) goto LAB_063435f4;
                                          puVar1 = 
                                          Unity_VisualScripting_Antlr3_Runtime_IToken_TypeInfo;
                                          if (0x14 < *puVar11) {
                                            plVar5[0x18] = lVar6;
                                            thunk_FUN_0333a630(plVar5 + 0x18,lVar6);
                                            uVar3 = *(undefined8 *)
                                                     (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                            lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                            FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,uVar3);
                                            if ((lVar6 != 0) &&
                                               (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                                  (*plVar5 + 0x40)),
                                               lVar7 == 0)) goto LAB_063435f4;
                                            puVar1 = Meta_WitAi_IWitRequestConfiguration_TypeInfo;
                                            if (0x15 < *puVar11) {
                                              plVar5[0x19] = lVar6;
                                              thunk_FUN_0333a630(plVar5 + 0x19,lVar6);
                                              uVar3 = *(undefined8 *)
                                                       (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                              lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                              FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,uVar3);
                                              if ((lVar6 != 0) &&
                                                 (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                                    (*plVar5 + 0x40)
                                                                            ), lVar7 == 0))
                                              goto LAB_063435f4;
                                              puVar1 = 
                                              UnityEngine_UIElements_IVisualElementPanelActivatable_TypeInfo
                                              ;
                                              if (0x16 < *puVar11) {
                                                plVar5[0x1a] = lVar6;
                                                thunk_FUN_0333a630(plVar5 + 0x1a,lVar6);
                                                uVar3 = *(undefined8 *)
                                                         (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,0,uVar3
                                                            );
                                                if ((lVar6 != 0) &&
                                                   (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40)),
                                                   lVar7 == 0)) goto LAB_063435f4;
                                                puVar1 = 
                                                Meta_WitAi_Events_IWitByteDataReadyHandler_TypeInfo;
                                                if (0x17 < *puVar11) {
                                                  plVar5[0x1b] = lVar6;
                                                  thunk_FUN_0333a630(plVar5 + 0x1b,lVar6);
                                                  uVar3 = *(undefined8 *)
                                                           (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                  lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                  FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                               uVar3);
                                                  if ((lVar6 != 0) &&
                                                     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40)), lVar7 == 0)) goto LAB_063435f4;
                                                  puVar1 = System_Net_IWebRequestCreate_TypeInfo;
                                                  if (0x18 < *puVar11) {
                                                    plVar5[0x1c] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x1c,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_IXRCustomReticleProvider_TypeInfo
                                                  ;
                                                  if (0x19 < *puVar11) {
                                                    plVar5[0x1d] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x1d,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_IWitRequestProvider_TypeInfo
                                                  ;
                                                  if (0x1a < *puVar11) {
                                                    plVar5[0x1e] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x1e,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo
                                                  ;
                                                  if (0x1b < *puVar11) {
                                                    plVar5[0x1f] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x1f,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = Oculus_Platform_IVoipPCMSource_TypeInfo;
                                                  if (0x1c < *puVar11) {
                                                    plVar5[0x20] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x20,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,1,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = GLTFast_Loading_ITextureDownload_TypeInfo
                                                  ;
                                                  if (0x1d < *puVar11) {
                                                    plVar5[0x21] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x21,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Newtonsoft_Json_Serialization_ITraceWriter_TypeInfo
                                                  ;
                                                  if (0x1e < *puVar11) {
                                                    plVar5[0x22] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x22,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = Meta_Voice_IVoiceRequestResults_TypeInfo;
                                                  if (0x1f < *puVar11) {
                                                    plVar5[0x23] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x23,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_IVoiceActivationHandler_TypeInfo;
                                                  if (0x20 < *puVar11) {
                                                    plVar5[0x24] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x24,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Oculus_Interaction_Input_ITrackingToWorldTransformer_TypeInfo
                                                  ;
                                                  if (0x21 < *puVar11) {
                                                    plVar5[0x25] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x25,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_IWitRuntimeConfigProvider_TypeInfo;
                                                  if (0x22 < *puVar11) {
                                                    plVar5[0x26] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x26,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo
                                                  ;
                                                  if (0x23 < *puVar11) {
                                                    plVar5[0x27] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x27,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_IXRFocusInteractable_TypeInfo
                                                  ;
                                                  if (0x24 < *puVar11) {
                                                    plVar5[0x28] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x28,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_IVisualTreeUpdater_TypeInfo
                                                  ;
                                                  if (0x25 < *puVar11) {
                                                    plVar5[0x29] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x29,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo
                                                  ;
                                                  if (0x26 < *puVar11) {
                                                    plVar5[0x2a] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x2a,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_ITextSelection_TypeInfo;
                                                  if (0x27 < *puVar11) {
                                                    plVar5[0x2b] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x2b,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_Timeline_ITimeControl_TypeInfo;
                                                  if (0x28 < *puVar11) {
                                                    plVar5[0x2c] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x2c,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_ITranscriptionEvent_TypeInfo
                                                  ;
                                                  if (0x29 < *puVar11) {
                                                    plVar5[0x2d] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x2d,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_IVolumeDebugSettings2_TypeInfo
                                                  ;
                                                  if (0x2a < *puVar11) {
                                                    plVar5[0x2e] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x2e,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractor_TypeInfo
                                                  ;
                                                  if (0x2b < *puVar11) {
                                                    plVar5[0x2f] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x2f,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_IWitConfigurationProvider_TypeInfo
                                                  ;
                                                  if (0x2c < *puVar11) {
                                                    plVar5[0x30] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x30,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,1,1,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = Meta_Voice_IVoiceRequestOptions_TypeInfo;
                                                  if (0x2d < *puVar11) {
                                                    plVar5[0x31] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x31,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = PTR_DAT_07289e10;
                                                  if (0x2e < *puVar11) {
                                                    plVar5[0x32] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x32,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,1,0,0,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_ITranscriptionProvider_TypeInfo
                                                  ;
                                                  if (0x2f < *puVar11) {
                                                    plVar5[0x33] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x33,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = System_Net_IWebProxy_TypeInfo;
                                                  if (0x30 < *puVar11) {
                                                    plVar5[0x34] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x34,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = PTR_DAT_0728bcb8;
                                                  if (0x31 < *puVar11) {
                                                    plVar5[0x35] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x35,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Unity_VisualScripting_Antlr3_Runtime_ITokenSource_TypeInfo
                                                  ;
                                                  if (0x32 < *puVar11) {
                                                    plVar5[0x36] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x36,lVar6);
                                                    uVar3 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar6 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar6,*(undefined8 *)puVar1,0,1,1,
                                                                 uVar3);
                                                    if ((lVar6 != 0) &&
                                                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(
                                                  undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                                                  goto LAB_063435f4;
                                                  puVar2 = 
                                                  System_Runtime_Serialization_ISerializationSurrogate_TypeInfo
                                                  ;
                                                  puVar1 = PTR_DAT_07292770;
                                                  if (0x33 < *puVar11) {
                                                    plVar5[0x37] = lVar6;
                                                    thunk_FUN_0333a630(plVar5 + 0x37,lVar6);
                                                    lVar6 = *(long *)puVar2;
                                                    if (*(int *)(lVar6 + 0xe0) == 0) {
                                                      thunk_FUN_032cd7c0();
                                                      lVar6 = *(long *)puVar2;
                                                    }
                                                    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                                                    uVar3 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_058fd304(uVar3,*puVar11 << 1,uVar9,0);
                                                    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar3;
                                                    thunk_FUN_0333a630(*(undefined8 *)
                                                                        (*unaff_x22 + 0xb8),uVar3);
                                                    uVar3 = *(undefined8 *)puVar11;
                                                    if (0 < (int)uVar3) {
                                                      lVar6 = 0;
                                                      do {
                                                        if ((uint)uVar3 <= (uint)lVar6)
                                                        goto LAB_063435ec;
                                                        lVar7 = plVar5[lVar6 + 4];
                                                        if ((lVar7 == 0) ||
                                                           (plVar8 = (long *)**(long **)(*unaff_x22
                                                                                        + 0xb8),
                                                           plVar8 == (long *)0x0))
                                                        goto LAB_063435f0;
                                                        (**(code **)(*plVar8 + 0x318))
                                                                  (plVar8,*(undefined8 *)
                                                                           (lVar7 + 0x20),lVar7,
                                                                   *(undefined8 *)(*plVar8 + 800));
                                                        uVar3 = *(undefined8 *)puVar11;
                                                        lVar6 = lVar6 + 1;
                                                      } while ((int)lVar6 < (int)uVar3);
                                                    }
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_063435ec:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


