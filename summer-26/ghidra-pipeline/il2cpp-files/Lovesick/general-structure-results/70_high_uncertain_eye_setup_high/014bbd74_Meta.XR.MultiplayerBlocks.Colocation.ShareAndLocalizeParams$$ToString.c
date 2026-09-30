/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.ShareAndLocalizeParams$$ToString
ENTRY_POINT: 014bbd74
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


void Meta_XR_MultiplayerBlocks_Colocation_ShareAndLocalizeParams__ToString
               (undefined8 param_1,undefined8 param_2)

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
  long unaff_x26;
  undefined8 *puVar7;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  puVar7 = *(undefined8 **)(unaff_x26 + 0x4b8);
                    /* try { // try from 014bbd80 to 015bbd8f has its CatchHandler @ 014bbdec */
  FUN_013df2bc(param_1,param_2,*unaff_x27);
                    /* try { // try from 014bbd90 to 015bbe07 has its CatchHandler @ 014bbcfc */
  FUN_01152dac();
  uVar5 = *(undefined8 *)(unaff_x21 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar4 = thunk_FUN_00d62348(*unaff_x29);
  if (lVar4 != 0) {
    FUN_013df2bc(lVar4,uVar6,*unaff_x27,0);
    FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*puVar7);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
    lVar4 = thunk_FUN_00d62348(*unaff_x29);
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_get_Values__
    ;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014bbd58 with catch @ 014bbde8
                        */
    if (lVar4 != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014bbd80 with catch @ 014bbdec
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014bbd28 with catch @ 014bbdf0
                        */
      FUN_013df2bc(lVar4,uVar5,*unaff_x27,0);
                    /* try { // try from 014bbe08 to 015bbe0b has its CatchHandler @ 014bbe18 */
                    /* catch() { ... } // from try @ 014bbe08 with catch @ 014bbe18 */
      FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*puVar7);
                    /* try { // try from 014bbe24 to 015bbe2f has its CatchHandler @ 014bbe44 */
      uVar5 = *(undefined8 *)(unaff_x21 + 0xa8);
      uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = Method_WavelengthTutorial_TutorialStarted__;
      puVar1 = PTR_DAT_033f0d88;
                    /* try { // try from 014bbe30 to 015bbe3b has its CatchHandler @ 014bbcfc */
      if (lVar4 != 0) {
                    /* try { // try from 014bbe3c to 015bbe43 has its CatchHandler @ 014bbe44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 014bbe24 with catch @ 014bbe44
                       catch(type#2 @ 00000000) { ... } // from try @ 014bbe3c with catch @ 014bbe44
                        */
        FUN_013df2bc(lVar4,uVar6,*(undefined8 *)Method_WavelengthTutorial_TutorialStarted__,0);
        FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
        uVar6 = *(undefined8 *)(unaff_x21 + 0xb0);
        uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          FUN_013df2bc(lVar4,uVar5,*(undefined8 *)puVar3,0);
          FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
          puVar2 = 
          Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
          ;
          uVar5 = *(undefined8 *)(unaff_x21 + 0x48);
          uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                                    );
          if (lVar4 != 0) {
            FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
            puVar1 = 
            UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo;
            FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,
                         *(undefined8 *)
                          UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo
                        );
            uVar6 = *(undefined8 *)(unaff_x21 + 0x50);
            uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar4 != 0) {
              FUN_013df2bc(lVar4,uVar5,*unaff_x28,0);
              FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
              uVar5 = *(undefined8 *)(unaff_x21 + 0x28);
              uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar4 != 0) {
                FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
                FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
                uVar6 = *(undefined8 *)(unaff_x21 + 0x30);
                uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if (lVar4 != 0) {
                  FUN_013df2bc(lVar4,uVar5,*unaff_x28,0);
                  FUN_01152dac(uVar6,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
                  uVar5 = *(undefined8 *)(unaff_x21 + 0x38);
                  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar4 != 0) {
                    FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
                    FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
                    uVar5 = *(undefined8 *)(unaff_x21 + 0x40);
                    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar4 != 0) {
                      FUN_013df2bc(lVar4,uVar6,*unaff_x28,0);
                    /* try { // try from 014bc028 to 015bc0eb has its CatchHandler @ 014bc028
                       catch() { ... } // from try @ 014bc028 with catch @ 014bc028
                       catch() { ... } // from try @ 014bc124 with catch @ 014bc028
                       catch() { ... } // from try @ 014bc214 with catch @ 014bc028 */
                      FUN_01152dac(uVar5,lVar4,unaff_w19 & 1,*(undefined8 *)puVar1);
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


