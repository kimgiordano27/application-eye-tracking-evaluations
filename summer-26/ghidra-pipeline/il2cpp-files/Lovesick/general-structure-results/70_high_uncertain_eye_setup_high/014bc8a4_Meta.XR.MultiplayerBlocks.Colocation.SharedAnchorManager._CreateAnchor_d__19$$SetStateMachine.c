/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<CreateAnchor>d__19$$SetStateMachine
ENTRY_POINT: 014bc8a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<CreateAnchor>d__19__SetStateMachine
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  
  thunk_FUN_00d48444(PTR_DAT_033f4e80);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_get_Values__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<OVRScenePlaneMeshFilter>__);
  thunk_FUN_00d48444(
                    UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo
                    );
  thunk_FUN_00d48444(PTR_DAT_033f0d88);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PlayerPlatform>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033ebec0);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_PointerInteractor<RayInteractor,_RayInteractable>__ctor__
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshr_n_s8__);
  thunk_FUN_00d48444(PTR_DAT_033ecc30);
  thunk_FUN_00d48444(UnityEngine_InputSystem_InputControlScheme___TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderChain>_IndexOf__);
  thunk_FUN_00d48444(Method_System_Security_Cryptography_TripleDES_set_Key__);
  thunk_FUN_00d48444(StringLiteral_5651);
  *(undefined1 *)(unaff_x22 + 0xdd0) = 1;
  puVar4 = 
  Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__;
  if (unaff_x21 != 0) {
    uVar6 = *(undefined8 *)(unaff_x21 + 0x18);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                              );
    puVar3 = UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo
    ;
    if ((lVar5 != 0) && (unaff_x20 != 0)) {
      FUN_013df2bc();
      FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
      uVar6 = *(undefined8 *)(unaff_x21 + 0x10);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar5 != 0) {
        FUN_013df2bc();
        FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
        uVar6 = *(undefined8 *)(unaff_x21 + 0x58);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar5 != 0) {
          FUN_013df2bc();
          FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
          uVar6 = *(undefined8 *)(unaff_x21 + 0x68);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar5 != 0) {
            FUN_013df2bc();
            FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
            uVar6 = *(undefined8 *)(unaff_x21 + 0x78);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar5 != 0) {
              FUN_013df2bc();
              FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
              uVar6 = *(undefined8 *)(unaff_x21 + 0x60);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              if (lVar5 != 0) {
                FUN_013df2bc();
                FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
                uVar6 = *(undefined8 *)(unaff_x21 + 0x70);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if (lVar5 != 0) {
                  FUN_013df2bc();
                  FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
                  uVar6 = *(undefined8 *)(unaff_x21 + 0x20);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  puVar2 = PTR_DAT_033f4e80;
                  if (lVar5 != 0) {
                    FUN_013df2bc();
                    FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
                    uVar6 = *(undefined8 *)(unaff_x21 + 0xa0);
                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    puVar1 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlaneMeshFilter>__
                    ;
                    if (lVar5 != 0) {
                      FUN_013df2bc();
                      FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar1);
                      uVar6 = *(undefined8 *)(unaff_x21 + 0x80);
                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if (lVar5 != 0) {
                        FUN_013df2bc();
                        FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar1);
                        uVar6 = *(undefined8 *)(unaff_x21 + 0x88);
                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        puVar2 = 
                        Method_System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_get_Values__
                        ;
                        if (lVar5 != 0) {
                          FUN_013df2bc();
                          FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar1);
                          uVar6 = *(undefined8 *)(unaff_x21 + 0xa8);
                          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar1 = PTR_DAT_033f0d88;
                          if (lVar5 != 0) {
                            FUN_013df2bc();
                            FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar1);
                            uVar6 = *(undefined8 *)(unaff_x21 + 0xb0);
                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            if (lVar5 != 0) {
                              FUN_013df2bc();
                              FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar1);
                              uVar6 = *(undefined8 *)(unaff_x21 + 0x48);
                              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                              if (lVar5 != 0) {
                                FUN_013df2bc();
                                FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
                                uVar6 = *(undefined8 *)(unaff_x21 + 0x50);
                                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                if (lVar5 != 0) {
                                  FUN_013df2bc();
                                  FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
                                  uVar6 = *(undefined8 *)(unaff_x21 + 0x28);
                                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                  if (lVar5 != 0) {
                                    FUN_013df2bc();
                                    FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
                                    uVar6 = *(undefined8 *)(unaff_x21 + 0x30);
                                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                    if (lVar5 != 0) {
                                      FUN_013df2bc();
                                      FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3);
                                      uVar6 = *(undefined8 *)(unaff_x21 + 0x38);
                                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                      if (lVar5 != 0) {
                                        FUN_013df2bc();
                                        FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,*(undefined8 *)puVar3
                                                    );
                                        uVar6 = *(undefined8 *)(unaff_x21 + 0x40);
                                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                        if (lVar5 != 0) {
                                          FUN_013df2bc();
                                          FUN_01152dac(uVar6,lVar5,unaff_w19 & 1,
                                                       *(undefined8 *)puVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


