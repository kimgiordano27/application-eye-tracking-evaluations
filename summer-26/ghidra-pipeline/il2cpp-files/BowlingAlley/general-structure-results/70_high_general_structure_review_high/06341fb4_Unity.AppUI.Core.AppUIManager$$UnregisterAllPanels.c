/*
FUNCTION_NAME: Unity.AppUI.Core.AppUIManager$$UnregisterAllPanels
ENTRY_POINT: 06341fb4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_AppUI_Core_AppUIManager__UnregisterAllPanels(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  
  FUN_06341834();
  if ((param_1 != 0) &&
     (lVar3 = thunk_FUN_032a55a4(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_063435f4:
    uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,0);
  }
  puVar1 = PTR_DAT_0728aa10;
  if (1 < *unaff_x24) {
    unaff_x19[5] = param_1;
    thunk_FUN_0333a630(unaff_x19 + 5,param_1);
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,1,uVar7);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
    goto LAB_063435f4;
    puVar1 = PTR_DAT_07284000;
    if (2 < *unaff_x24) {
      unaff_x19[6] = lVar3;
      thunk_FUN_0333a630(unaff_x19 + 6,lVar3);
      uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      lVar3 = thunk_FUN_032a56a0(*unaff_x23);
      FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
      goto LAB_063435f4;
      puVar1 = System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo;
      if (3 < *unaff_x24) {
        unaff_x19[7] = lVar3;
        thunk_FUN_0333a630(unaff_x19 + 7,lVar3);
        uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
        lVar3 = thunk_FUN_032a56a0(*unaff_x23);
        FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
        goto LAB_063435f4;
        puVar1 = Meta_WitAi_IVoiceEventProvider_TypeInfo;
        if (4 < *unaff_x24) {
          unaff_x19[8] = lVar3;
          thunk_FUN_0333a630(unaff_x19 + 8,lVar3);
          uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
          lVar3 = thunk_FUN_032a56a0(*unaff_x23);
          FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
          goto LAB_063435f4;
          puVar1 = UnityEngine_UIElements_IVisualElementScheduler_TypeInfo;
          if (5 < *unaff_x24) {
            unaff_x19[9] = lVar3;
            thunk_FUN_0333a630(unaff_x19 + 9,lVar3);
            uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
            lVar3 = thunk_FUN_032a56a0(*unaff_x23);
            FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
            goto LAB_063435f4;
            puVar1 = System_IValueTupleInternal_TypeInfo;
            if (6 < *unaff_x24) {
              unaff_x19[10] = lVar3;
              thunk_FUN_0333a630(unaff_x19 + 10,lVar3);
              uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
              lVar3 = thunk_FUN_032a56a0(*unaff_x23);
              FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
              goto LAB_063435f4;
              puVar1 = Meta_WitAi_Events_IWitByteDataSentHandler_TypeInfo;
              if (7 < *unaff_x24) {
                unaff_x19[0xb] = lVar3;
                thunk_FUN_0333a630(unaff_x19 + 0xb,lVar3);
                uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0
                   )) goto LAB_063435f4;
                puVar1 = Newtonsoft_Json_Utilities_IWrappedCollection_TypeInfo;
                if (8 < *unaff_x24) {
                  unaff_x19[0xc] = lVar3;
                  thunk_FUN_0333a630(unaff_x19 + 0xc,lVar3);
                  uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                  lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                  FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,1,uVar7);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar4 == 0)) goto LAB_063435f4;
                  puVar1 = UnityEngine_Rendering_IVolumeDebugSettings_TypeInfo;
                  if (9 < *unaff_x24) {
                    unaff_x19[0xd] = lVar3;
                    thunk_FUN_0333a630(unaff_x19 + 0xd,lVar3);
                    uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,uVar7);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar4 == 0)) goto LAB_063435f4;
                    puVar1 = PTR_DAT_07279f40;
                    if (10 < *unaff_x24) {
                      unaff_x19[0xe] = lVar3;
                      thunk_FUN_0333a630(unaff_x19 + 0xe,lVar3);
                      uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                      lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                      FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,0,uVar7);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar4 == 0)) goto LAB_063435f4;
                      puVar1 = UnityEngine_Timeline_ITimelineClipAsset_TypeInfo;
                      if (0xb < *unaff_x24) {
                        unaff_x19[0xf] = lVar3;
                        thunk_FUN_0333a630(unaff_x19 + 0xf,lVar3);
                        uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                        lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                        FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar4 == 0)) goto LAB_063435f4;
                        puVar1 = 
                        UnityEngine_XR_Interaction_Toolkit_Transformers_IXRGrabTransformer_TypeInfo;
                        if (0xc < *unaff_x24) {
                          unaff_x19[0x10] = lVar3;
                          thunk_FUN_0333a630(unaff_x19 + 0x10,lVar3);
                          uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                          lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                          FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,uVar7);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar4 == 0)) goto LAB_063435f4;
                          puVar1 = Unity_VisualScripting_Antlr3_Runtime_ITokenStream_TypeInfo;
                          if (0xd < *unaff_x24) {
                            unaff_x19[0x11] = lVar3;
                            thunk_FUN_0333a630(unaff_x19 + 0x11,lVar3);
                            uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                            lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                            FUN_06341834(lVar3,*(undefined8 *)puVar1,1,1,0,uVar7);
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar4 == 0)) goto LAB_063435f4;
                            puVar1 = Oculus_Voice_Core_Bindings_Interfaces_IVoiceSDKLogger_TypeInfo;
                            if (0xe < *unaff_x24) {
                              unaff_x19[0x12] = lVar3;
                              thunk_FUN_0333a630(unaff_x19 + 0x12,lVar3);
                              uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                              lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                              FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar4 == 0
                                 )) goto LAB_063435f4;
                              puVar1 = 
                              UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractable_TypeInfo;
                              if (0xf < *unaff_x24) {
                                unaff_x19[0x13] = lVar3;
                                thunk_FUN_0333a630(unaff_x19 + 0x13,lVar3);
                                uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7);
                                if ((lVar3 != 0) &&
                                   (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar4 == 0)) goto LAB_063435f4;
                                puVar1 = Meta_WitAi_IWitRequestEndpointInfo_TypeInfo;
                                if (0x10 < *unaff_x24) {
                                  unaff_x19[0x14] = lVar3;
                                  thunk_FUN_0333a630(unaff_x19 + 0x14,lVar3);
                                  uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                  lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                  FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,uVar7);
                                  if ((lVar3 != 0) &&
                                     (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                     lVar4 == 0)) goto LAB_063435f4;
                                  puVar1 = PTR_DAT_0729e478;
                                  if (0x11 < *unaff_x24) {
                                    unaff_x19[0x15] = lVar3;
                                    thunk_FUN_0333a630(unaff_x19 + 0x15,lVar3);
                                    uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,0,uVar7);
                                    if ((lVar3 != 0) &&
                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                       lVar4 == 0)) goto LAB_063435f4;
                                    puVar1 = System_Threading_IThreadPoolWorkItem_TypeInfo;
                                    if (0x12 < *unaff_x24) {
                                      unaff_x19[0x16] = lVar3;
                                      thunk_FUN_0333a630(unaff_x19 + 0x16,lVar3);
                                      uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                      lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                      FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,uVar7);
                                      if ((lVar3 != 0) &&
                                         (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40)),
                                         lVar4 == 0)) goto LAB_063435f4;
                                      puVar1 = 
                                      UnityEngine_XR_Interaction_Toolkit_IXRAimAssist_TypeInfo;
                                      if (0x13 < *unaff_x24) {
                                        unaff_x19[0x17] = lVar3;
                                        thunk_FUN_0333a630(unaff_x19 + 0x17,lVar3);
                                        uVar7 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18)
                                        ;
                                        lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                        FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,1,uVar7);
                                        if ((lVar3 != 0) &&
                                           (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40)),
                                           lVar4 == 0)) goto LAB_063435f4;
                                        puVar1 = 
                                        Unity_VisualScripting_Antlr3_Runtime_IToken_TypeInfo;
                                        if (0x14 < *unaff_x24) {
                                          unaff_x19[0x18] = lVar3;
                                          thunk_FUN_0333a630(unaff_x19 + 0x18,lVar3);
                                          uVar7 = *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                          lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                          FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,uVar7);
                                          if ((lVar3 != 0) &&
                                             (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                             , lVar4 == 0)) goto LAB_063435f4;
                                          puVar1 = Meta_WitAi_IWitRequestConfiguration_TypeInfo;
                                          if (0x15 < *unaff_x24) {
                                            unaff_x19[0x19] = lVar3;
                                            thunk_FUN_0333a630(unaff_x19 + 0x19,lVar3);
                                            uVar7 = *(undefined8 *)
                                                     (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                            lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                            FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,uVar7);
                                            if ((lVar3 != 0) &&
                                               (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  )), lVar4 == 0))
                                            goto LAB_063435f4;
                                            puVar1 = 
                                            UnityEngine_UIElements_IVisualElementPanelActivatable_TypeInfo
                                            ;
                                            if (0x16 < *unaff_x24) {
                                              unaff_x19[0x1a] = lVar3;
                                              thunk_FUN_0333a630(unaff_x19 + 0x1a,lVar3);
                                              uVar7 = *(undefined8 *)
                                                       (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                              lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                              FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,0,uVar7);
                                              if ((lVar3 != 0) &&
                                                 (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40)),
                                                 lVar4 == 0)) goto LAB_063435f4;
                                              puVar1 = 
                                              Meta_WitAi_Events_IWitByteDataReadyHandler_TypeInfo;
                                              if (0x17 < *unaff_x24) {
                                                unaff_x19[0x1b] = lVar3;
                                                thunk_FUN_0333a630(unaff_x19 + 0x1b,lVar3);
                                                uVar7 = *(undefined8 *)
                                                         (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,uVar7
                                                            );
                                                if ((lVar3 != 0) &&
                                                   (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40)),
                                                   lVar4 == 0)) goto LAB_063435f4;
                                                puVar1 = System_Net_IWebRequestCreate_TypeInfo;
                                                if (0x18 < *unaff_x24) {
                                                  unaff_x19[0x1c] = lVar3;
                                                  thunk_FUN_0333a630(unaff_x19 + 0x1c,lVar3);
                                                  uVar7 = *(undefined8 *)
                                                           (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                  lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                  FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,
                                                               uVar7);
                                                  if ((lVar3 != 0) &&
                                                     (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_IXRCustomReticleProvider_TypeInfo
                                                  ;
                                                  if (0x19 < *unaff_x24) {
                                                    unaff_x19[0x1d] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x1d,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_IWitRequestProvider_TypeInfo
                                                  ;
                                                  if (0x1a < *unaff_x24) {
                                                    unaff_x19[0x1e] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x1e,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Newtonsoft_Json_Utilities_IWrappedDictionary_TypeInfo
                                                  ;
                                                  if (0x1b < *unaff_x24) {
                                                    unaff_x19[0x1f] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x1f,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = Oculus_Platform_IVoipPCMSource_TypeInfo;
                                                  if (0x1c < *unaff_x24) {
                                                    unaff_x19[0x20] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x20,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,1,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = GLTFast_Loading_ITextureDownload_TypeInfo
                                                  ;
                                                  if (0x1d < *unaff_x24) {
                                                    unaff_x19[0x21] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x21,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Newtonsoft_Json_Serialization_ITraceWriter_TypeInfo
                                                  ;
                                                  if (0x1e < *unaff_x24) {
                                                    unaff_x19[0x22] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x22,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = Meta_Voice_IVoiceRequestResults_TypeInfo;
                                                  if (0x1f < *unaff_x24) {
                                                    unaff_x19[0x23] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x23,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_IVoiceActivationHandler_TypeInfo;
                                                  if (0x20 < *unaff_x24) {
                                                    unaff_x19[0x24] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x24,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Oculus_Interaction_Input_ITrackingToWorldTransformer_TypeInfo
                                                  ;
                                                  if (0x21 < *unaff_x24) {
                                                    unaff_x19[0x25] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x25,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_IWitRuntimeConfigProvider_TypeInfo;
                                                  if (0x22 < *unaff_x24) {
                                                    unaff_x19[0x26] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x26,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo
                                                  ;
                                                  if (0x23 < *unaff_x24) {
                                                    unaff_x19[0x27] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x27,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_IXRFocusInteractable_TypeInfo
                                                  ;
                                                  if (0x24 < *unaff_x24) {
                                                    unaff_x19[0x28] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x28,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_IVisualTreeUpdater_TypeInfo
                                                  ;
                                                  if (0x25 < *unaff_x24) {
                                                    unaff_x19[0x29] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x29,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo
                                                  ;
                                                  if (0x26 < *unaff_x24) {
                                                    unaff_x19[0x2a] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x2a,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_UIElements_ITextSelection_TypeInfo;
                                                  if (0x27 < *unaff_x24) {
                                                    unaff_x19[0x2b] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x2b,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_Timeline_ITimeControl_TypeInfo;
                                                  if (0x28 < *unaff_x24) {
                                                    unaff_x19[0x2c] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x2c,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_ITranscriptionEvent_TypeInfo
                                                  ;
                                                  if (0x29 < *unaff_x24) {
                                                    unaff_x19[0x2d] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x2d,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_IVolumeDebugSettings2_TypeInfo
                                                  ;
                                                  if (0x2a < *unaff_x24) {
                                                    unaff_x19[0x2e] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x2e,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_IXRActivateInteractor_TypeInfo
                                                  ;
                                                  if (0x2b < *unaff_x24) {
                                                    unaff_x19[0x2f] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x2f,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_IWitConfigurationProvider_TypeInfo
                                                  ;
                                                  if (0x2c < *unaff_x24) {
                                                    unaff_x19[0x30] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x30,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,1,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = Meta_Voice_IVoiceRequestOptions_TypeInfo;
                                                  if (0x2d < *unaff_x24) {
                                                    unaff_x19[0x31] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x31,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = PTR_DAT_07289e10;
                                                  if (0x2e < *unaff_x24) {
                                                    unaff_x19[0x32] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x32,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,1,0,0,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Meta_WitAi_Interfaces_ITranscriptionProvider_TypeInfo
                                                  ;
                                                  if (0x2f < *unaff_x24) {
                                                    unaff_x19[0x33] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x33,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = System_Net_IWebProxy_TypeInfo;
                                                  if (0x30 < *unaff_x24) {
                                                    unaff_x19[0x34] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x34,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = PTR_DAT_0728bcb8;
                                                  if (0x31 < *unaff_x24) {
                                                    unaff_x19[0x35] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x35,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,0,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar1 = 
                                                  Unity_VisualScripting_Antlr3_Runtime_ITokenSource_TypeInfo
                                                  ;
                                                  if (0x32 < *unaff_x24) {
                                                    unaff_x19[0x36] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x36,lVar3);
                                                    uVar7 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar3 = thunk_FUN_032a56a0(*unaff_x23);
                                                    FUN_06341834(lVar3,*(undefined8 *)puVar1,0,1,1,
                                                                 uVar7);
                                                    if ((lVar3 != 0) &&
                                                       (lVar4 = thunk_FUN_032a55a4(lVar3,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar4 == 0))
                                                  goto LAB_063435f4;
                                                  puVar2 = 
                                                  System_Runtime_Serialization_ISerializationSurrogate_TypeInfo
                                                  ;
                                                  puVar1 = PTR_DAT_07292770;
                                                  if (0x33 < *unaff_x24) {
                                                    unaff_x19[0x37] = lVar3;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x37,lVar3);
                                                    lVar3 = *(long *)puVar2;
                                                    if (*(int *)(lVar3 + 0xe0) == 0) {
                                                      thunk_FUN_032cd7c0();
                                                      lVar3 = *(long *)puVar2;
                                                    }
                                                    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
                                                    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_058fd304(uVar7,*unaff_x24 << 1,uVar6,0);
                                                    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar7;
                                                    thunk_FUN_0333a630(*(undefined8 *)
                                                                        (*unaff_x22 + 0xb8),uVar7);
                                                    uVar7 = *(undefined8 *)unaff_x24;
                                                    if (0 < (int)uVar7) {
                                                      lVar3 = 0;
                                                      do {
                                                        if ((uint)uVar7 <= (uint)lVar3)
                                                        goto LAB_063435ec;
                                                        lVar4 = unaff_x19[lVar3 + 4];
                                                        if (lVar4 == 0) {
LAB_063435f0:
                    /* WARNING: Subroutine does not return */
                                                          FUN_032d5ee8();
                                                        }
                                                        plVar5 = (long *)**(long **)(*unaff_x22 +
                                                                                    0xb8);
                                                        if (plVar5 == (long *)0x0)
                                                        goto LAB_063435f0;
                                                        (**(code **)(*plVar5 + 0x318))
                                                                  (plVar5,*(undefined8 *)
                                                                           (lVar4 + 0x20),lVar4,
                                                                   *(undefined8 *)(*plVar5 + 800));
                                                        uVar7 = *(undefined8 *)unaff_x24;
                                                        lVar3 = lVar3 + 1;
                                                      } while ((int)lVar3 < (int)uVar7);
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
LAB_063435ec:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


