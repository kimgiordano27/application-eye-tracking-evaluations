/*
FUNCTION_NAME: FUN_06f53854
ENTRY_POINT: 06f53854
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long FUN_06f53854(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = UnityEngine_UI_VertexHelper_TypeInfo;
  if ((DAT_07eeb717 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fbc70);
    FUN_03642964(PTR_DAT_079fd998);
    FUN_03642964(PTR_DAT_07a029b0);
    FUN_03642964(UnityEngine_LightType_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_VerticalAlignment_TypeInfo);
    FUN_03642964(Sirenix_OdinInspector_VerticalGroupAttribute_TypeInfo);
    FUN_03642964(TagLib_Mpeg_VideoHeader_TypeInfo);
    FUN_03642964(Timeline_Samples_VideoPlayableAsset_TypeInfo);
    FUN_03642964(TagLib_Matroska_VideoTrack_TypeInfo);
    FUN_03642964(UnityEngine_PostProcessing_VignetteComponent_TypeInfo);
    FUN_03642964(UnityEngine_PostProcessing_VignetteModel_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_VisibleLight_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_VisibleReflectionProbe_TypeInfo);
    FUN_03642964(Unity_Properties_VisitReturnCode_TypeInfo);
    FUN_03642964(UnityEngine_UI_VertexHelper_TypeInfo);
    FUN_03642964(PTR_DAT_07a029d8);
    FUN_03642964(UnityEngine_UIElements_VisualData_TypeInfo);
    FUN_03642964(PTR_DAT_079f5698);
    FUN_03642964(UnityEngine_VFX_VisualEffectAsset_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_VisualElement_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_VisualElementAnimationSystem_TypeInfo);
    FUN_03642964(Unity_AppUI_UI_VisualElementExtensions_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_Vertex_TypeInfo);
    FUN_03642964(PTR_DAT_079f49e0);
    FUN_03642964(Unity_AppUI_Bridge_VisualElementExtensionsBridge_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_VisualElementFactoryRegistry_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_VisualElementFocusChangeDirection_TypeInfo);
    DAT_07eeb717 = 1;
  }
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar6,0);
  puVar1 = UnityEngine_LightType_TypeInfo;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = param_1;
    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_06e9589c(lVar7,0);
    puVar2 = UnityEngine_TextCore_VerticalAlignment_TypeInfo;
    puVar4 = PTR_DAT_07a029d8;
    puVar1 = PTR_DAT_079fbc70;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_079f49e0;
      thunk_FUN_036b7ad0();
      uVar8 = *(undefined8 *)puVar1;
      *(undefined1 *)(lVar7 + 0x58) = 1;
      uVar8 = thunk_FUN_0367fe20(uVar8);
      FUN_0414c60c(uVar8,lVar6,*(undefined8 *)puVar2,0);
      *(undefined8 *)(lVar7 + 0x48) = uVar8;
      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x48),uVar8);
      lVar10 = *(long *)(lVar7 + 0x50);
      lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
      FUN_06e958f8(lVar9,0);
      puVar3 = Sirenix_OdinInspector_VerticalGroupAttribute_TypeInfo;
      puVar2 = PTR_DAT_079fd998;
      puVar1 = PTR_DAT_079f5698;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)UnityEngine_UIElements_Vertex_TypeInfo;
        thunk_FUN_036b7ad0();
        uVar8 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
        *(undefined8 *)(lVar9 + 0x60) = uVar8;
        thunk_FUN_036b7ad0();
        uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
        FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar3,0);
        *(undefined8 *)(lVar9 + 0x50) = uVar8;
        thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
        puVar3 = PTR_DAT_07a029b0;
        if (lVar10 != 0) {
          FUN_04a78624(lVar10,lVar9,*(undefined8 *)PTR_DAT_07a029b0);
          lVar10 = *(long *)(lVar7 + 0x50);
          lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
          FUN_06e958f8(lVar9,0);
          puVar5 = TagLib_Mpeg_VideoHeader_TypeInfo;
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x30) =
                 *(undefined8 *)UnityEngine_VFX_VisualEffectAsset_TypeInfo;
            thunk_FUN_036b7ad0();
            uVar8 = *(undefined8 *)puVar1;
            *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
            *(undefined8 *)(lVar9 + 0x60) = uVar8;
            thunk_FUN_036b7ad0();
            uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
            FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
            *(undefined8 *)(lVar9 + 0x50) = uVar8;
            thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
            if (lVar10 != 0) {
              FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
              lVar10 = *(long *)(lVar7 + 0x50);
              lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
              FUN_06e958f8(lVar9,0);
              puVar5 = Timeline_Samples_VideoPlayableAsset_TypeInfo;
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x30) =
                     *(undefined8 *)Unity_AppUI_UI_VisualElementExtensions_TypeInfo;
                thunk_FUN_036b7ad0();
                uVar8 = *(undefined8 *)puVar1;
                *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                *(undefined8 *)(lVar9 + 0x60) = uVar8;
                thunk_FUN_036b7ad0();
                uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
                *(undefined8 *)(lVar9 + 0x50) = uVar8;
                thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
                if (lVar10 != 0) {
                  FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
                  lVar10 = *(long *)(lVar7 + 0x50);
                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                  FUN_06e958f8(lVar9,0);
                  puVar5 = TagLib_Matroska_VideoTrack_TypeInfo;
                  if (lVar9 != 0) {
                    *(undefined8 *)(lVar9 + 0x30) =
                         *(undefined8 *)UnityEngine_UIElements_VisualData_TypeInfo;
                    thunk_FUN_036b7ad0();
                    uVar8 = *(undefined8 *)puVar1;
                    *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                    *(undefined8 *)(lVar9 + 0x60) = uVar8;
                    thunk_FUN_036b7ad0();
                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                    FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
                    *(undefined8 *)(lVar9 + 0x50) = uVar8;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
                    if (lVar10 != 0) {
                      FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
                      lVar10 = *(long *)(lVar7 + 0x50);
                      lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                      FUN_06e958f8(lVar9,0);
                      puVar5 = UnityEngine_PostProcessing_VignetteComponent_TypeInfo;
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0x30) =
                             *(undefined8 *)
                              UnityEngine_UIElements_VisualElementFactoryRegistry_TypeInfo;
                        thunk_FUN_036b7ad0();
                        uVar8 = *(undefined8 *)puVar1;
                        *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                        *(undefined8 *)(lVar9 + 0x60) = uVar8;
                        thunk_FUN_036b7ad0();
                        uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                        FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
                        *(undefined8 *)(lVar9 + 0x50) = uVar8;
                        thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
                        if (lVar10 != 0) {
                          FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
                          lVar10 = *(long *)(lVar7 + 0x50);
                          lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                          FUN_06e958f8(lVar9,0);
                          puVar5 = UnityEngine_PostProcessing_VignetteModel_TypeInfo;
                          if (lVar9 != 0) {
                            *(undefined8 *)(lVar9 + 0x30) =
                                 *(undefined8 *)
                                  UnityEngine_UIElements_VisualElementAnimationSystem_TypeInfo;
                            thunk_FUN_036b7ad0();
                            uVar8 = *(undefined8 *)puVar1;
                            *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                            *(undefined8 *)(lVar9 + 0x60) = uVar8;
                            thunk_FUN_036b7ad0();
                            uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                            FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
                            *(undefined8 *)(lVar9 + 0x50) = uVar8;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
                            if (lVar10 != 0) {
                              FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
                              lVar10 = *(long *)(lVar7 + 0x50);
                              lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                              FUN_06e958f8(lVar9,0);
                              puVar5 = UnityEngine_Rendering_VisibleLight_TypeInfo;
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0x30) =
                                     *(undefined8 *)UnityEngine_UIElements_VisualElement_TypeInfo;
                                thunk_FUN_036b7ad0();
                                uVar8 = *(undefined8 *)puVar1;
                                *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                                *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                thunk_FUN_036b7ad0();
                                uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
                                *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
                                if (lVar10 != 0) {
                                  FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
                                  lVar10 = *(long *)(lVar7 + 0x50);
                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                  FUN_06e958f8(lVar9,0);
                                  puVar5 = UnityEngine_Rendering_VisibleReflectionProbe_TypeInfo;
                                  if (lVar9 != 0) {
                                    *(undefined8 *)(lVar9 + 0x30) =
                                         *(undefined8 *)
                                          Unity_AppUI_Bridge_VisualElementExtensionsBridge_TypeInfo;
                                    thunk_FUN_036b7ad0();
                                    uVar8 = *(undefined8 *)puVar1;
                                    *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                                    *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                    thunk_FUN_036b7ad0();
                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                    FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
                                    *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
                                    if (lVar10 != 0) {
                                      FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
                                      lVar10 = *(long *)(lVar7 + 0x50);
                                      lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                      FUN_06e958f8(lVar9,0);
                                      puVar4 = Unity_Properties_VisitReturnCode_TypeInfo;
                                      if (lVar9 != 0) {
                                        *(undefined8 *)(lVar9 + 0x30) =
                                             *(undefined8 *)
                                              UnityEngine_UIElements_VisualElementFocusChangeDirection_TypeInfo
                                        ;
                                        thunk_FUN_036b7ad0();
                                        uVar8 = *(undefined8 *)puVar1;
                                        *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                                        *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                        thunk_FUN_036b7ad0();
                                        uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                        FUN_0414d3cc(uVar8,lVar6,*(undefined8 *)puVar4,0);
                                        *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                        thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x50),uVar8);
                                        if (lVar10 != 0) {
                                          FUN_04a78624(lVar10,lVar9,*(undefined8 *)puVar3);
                                          return lVar7;
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


