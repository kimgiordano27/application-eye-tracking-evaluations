/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.ShareAndLocalizeParams$$.ctor
ENTRY_POINT: 014bbd60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_ShareAndLocalizeParams___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  puVar2 = StringLiteral_942;
  puVar1 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlaneMeshFilter>__;
  FUN_013df2bc();
  FUN_01152dac();
  uVar5 = *(undefined8 *)(unaff_x21 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar4 = thunk_FUN_00d62348(*unaff_x29);
  if (lVar4 != 0) {
    FUN_013df2bc(lVar4,uVar6,*(undefined8 *)puVar2,0);
    FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
    lVar4 = thunk_FUN_00d62348(*unaff_x29);
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_get_Values__
    ;
    if (lVar4 != 0) {
      FUN_013df2bc(lVar4,uVar5,*(undefined8 *)puVar2,0);
      FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
      uVar5 = *(undefined8 *)(unaff_x21 + 0xa8);
      uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar2 = Method_WavelengthTutorial_TutorialStarted__;
      puVar1 = PTR_DAT_033f0d88;
      if (lVar4 != 0) {
        FUN_013df2bc(lVar4,uVar6,*(undefined8 *)Method_WavelengthTutorial_TutorialStarted__,0);
        FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
        uVar6 = *(undefined8 *)(unaff_x21 + 0xb0);
        uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar4 != 0) {
          FUN_013df2bc(lVar4,uVar5,*(undefined8 *)puVar2,0);
          FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
          puVar1 = 
          Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
          ;
          uVar5 = *(undefined8 *)(unaff_x21 + 0x48);
          uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                                    );
          if (lVar4 != 0) {
            FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
            puVar2 = 
            UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo;
            FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,
                         *(undefined8 *)
                          UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo
                        );
            uVar6 = *(undefined8 *)(unaff_x21 + 0x50);
            uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar4 != 0) {
              FUN_013df2bc(lVar4,uVar5,*unaff_x28,0);
              FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*(undefined8 *)puVar2);
              uVar5 = *(undefined8 *)(unaff_x21 + 0x28);
              uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar4 != 0) {
                FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
                FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar2);
                uVar6 = *(undefined8 *)(unaff_x21 + 0x30);
                uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  FUN_013df2bc(lVar4,uVar5,*unaff_x28,0);
                  FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*(undefined8 *)puVar2);
                  uVar5 = *(undefined8 *)(unaff_x21 + 0x38);
                  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar4 != 0) {
                    FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
                    FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar2);
                    uVar5 = *(undefined8 *)(unaff_x21 + 0x40);
                    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar4 != 0) {
                      FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
                      FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar2);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


