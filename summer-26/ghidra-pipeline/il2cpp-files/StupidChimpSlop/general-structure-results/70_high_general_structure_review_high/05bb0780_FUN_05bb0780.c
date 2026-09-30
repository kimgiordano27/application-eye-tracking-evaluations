/*
FUNCTION_NAME: FUN_05bb0780
ENTRY_POINT: 05bb0780
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_20;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


long FUN_05bb0780(undefined4 param_1)

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
  
  puVar1 = Method_System_Net_Configuration_HttpWebRequestElement_set_MaximumResponseHeadersLength__;
  if ((DAT_06a57418 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06647e20);
    FUN_02d4dc40(PTR_DAT_0664e190);
    FUN_02d4dc40(PTR_DAT_0664e168);
    FUN_02d4dc40(Method_System_Configuration_ConfigurationException_get_Filename__);
    FUN_02d4dc40(
                Method_System_Net_Configuration_HttpWebRequestElement_set_MaximumUnauthorizedUploadLength__
                );
    FUN_02d4dc40(Method_System_Net_Configuration_HttpWebRequestElement_set_UseUnsafeHeaderParsing__)
    ;
    FUN_02d4dc40(Method_System_Net_HttpWebResponse_CheckDisposed__);
    FUN_02d4dc40(Method_System_Net_HttpWebResponse_get_IsMutuallyAuthenticated__);
    FUN_02d4dc40(Method_UnityEngine_HumanPose_Init__);
    FUN_02d4dc40(Method_UnityEngine_HumanPoseHandler__ctor__);
    FUN_02d4dc40(Method_UnityEngine_HumanPoseHandler_GetHumanPose__);
    FUN_02d4dc40(Method_Oculus_Platform_IAP_LaunchCheckoutFlow__);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<InstanceCuller_InstanceOcclusionTestPassData>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData>__
                );
    FUN_02d4dc40(
                Method_System_Net_Configuration_HttpWebRequestElement_set_MaximumResponseHeadersLength__
                );
    FUN_02d4dc40(PTR_DAT_0664e198);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData>__
                );
    FUN_02d4dc40(PTR_DAT_0664a808);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<ProbeVolumeDebugPass_WriteApvData>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<STP_PreTaaData>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<STP_SetupData>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<STP_TaaData>__
                );
    FUN_02d4dc40(
                Method_System_Net_Configuration_HttpWebRequestElement_get_MaximumUnauthorizedUploadLength__
                );
    FUN_02d4dc40(PTR_DAT_06646708);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<Vrs_ConversionPassData>__
                );
    FUN_02d4dc40(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeArrayDisposeJob>__);
    FUN_02d4dc40(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeBitArrayDisposeJob>__);
    DAT_06a57418 = 1;
  }
  lVar6 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_05044d4c(lVar6,0);
  puVar1 = Method_System_Configuration_ConfigurationException_get_Filename__;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = param_1;
    lVar7 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
    FUN_05af27c8(lVar7,0);
    puVar3 = 
    Method_System_Net_Configuration_HttpWebRequestElement_set_MaximumUnauthorizedUploadLength__;
    puVar4 = PTR_DAT_0664e198;
    puVar1 = PTR_DAT_06647e20;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_06646708;
      thunk_FUN_02dc1ef0();
      uVar8 = *(undefined8 *)puVar1;
      *(undefined1 *)(lVar7 + 0x58) = 1;
      uVar8 = thunk_FUN_02d8a638(uVar8);
      FUN_04c43380(uVar8,lVar6,*(undefined8 *)puVar3,0);
      *(undefined8 *)(lVar7 + 0x48) = uVar8;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar7 + 0x48),uVar8);
      lVar10 = *(long *)(lVar7 + 0x50);
      lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
      FUN_05af2824(lVar9,0);
      puVar2 = Method_System_Net_Configuration_HttpWebRequestElement_set_UseUnsafeHeaderParsing__;
      puVar3 = PTR_DAT_0664e190;
      puVar1 = PTR_DAT_0664a808;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x30) =
             *(undefined8 *)
              Method_System_Net_Configuration_HttpWebRequestElement_get_MaximumUnauthorizedUploadLength__
        ;
        thunk_FUN_02dc1ef0();
        uVar8 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
        *(undefined8 *)(lVar9 + 0x60) = uVar8;
        thunk_FUN_02dc1ef0();
        uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
        FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar2,0);
        *(undefined8 *)(lVar9 + 0x50) = uVar8;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
        puVar2 = PTR_DAT_0664e168;
        if (lVar10 != 0) {
          FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)PTR_DAT_0664e168);
          lVar10 = *(long *)(lVar7 + 0x50);
          lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
          FUN_05af2824(lVar9,0);
          puVar5 = Method_System_Net_HttpWebResponse_CheckDisposed__;
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<ProbeVolumeDebugPass_WriteApvData>__
            ;
            thunk_FUN_02dc1ef0();
            uVar8 = *(undefined8 *)puVar1;
            *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
            *(undefined8 *)(lVar9 + 0x60) = uVar8;
            thunk_FUN_02dc1ef0();
            uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
            FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar5,0);
            *(undefined8 *)(lVar9 + 0x50) = uVar8;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
            if (lVar10 != 0) {
              FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
              lVar10 = *(long *)(lVar7 + 0x50);
              lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
              FUN_05af2824(lVar9,0);
              puVar5 = Method_System_Net_HttpWebResponse_get_IsMutuallyAuthenticated__;
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x30) =
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<STP_TaaData>__
                ;
                thunk_FUN_02dc1ef0();
                uVar8 = *(undefined8 *)puVar1;
                *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                *(undefined8 *)(lVar9 + 0x60) = uVar8;
                thunk_FUN_02dc1ef0();
                uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar5,0);
                *(undefined8 *)(lVar9 + 0x50) = uVar8;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
                if (lVar10 != 0) {
                  FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
                  lVar10 = *(long *)(lVar7 + 0x50);
                  lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                  FUN_05af2824(lVar9,0);
                  puVar5 = Method_UnityEngine_HumanPose_Init__;
                  if (lVar9 != 0) {
                    *(undefined8 *)(lVar9 + 0x30) =
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<OcclusionCullingCommon_UpdateOccludersPassData>__
                    ;
                    thunk_FUN_02dc1ef0();
                    uVar8 = *(undefined8 *)puVar1;
                    *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                    *(undefined8 *)(lVar9 + 0x60) = uVar8;
                    thunk_FUN_02dc1ef0();
                    uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                    FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar5,0);
                    *(undefined8 *)(lVar9 + 0x50) = uVar8;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
                    if (lVar10 != 0) {
                      FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
                      lVar10 = *(long *)(lVar7 + 0x50);
                      lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                      FUN_05af2824(lVar9,0);
                      puVar5 = Method_UnityEngine_HumanPoseHandler__ctor__;
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0x30) =
                             *(undefined8 *)
                              Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeArrayDisposeJob>__
                        ;
                        thunk_FUN_02dc1ef0();
                        uVar8 = *(undefined8 *)puVar1;
                        *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                        *(undefined8 *)(lVar9 + 0x60) = uVar8;
                        thunk_FUN_02dc1ef0();
                        uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                        FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar5,0);
                        *(undefined8 *)(lVar9 + 0x50) = uVar8;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
                        if (lVar10 != 0) {
                          FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
                          lVar10 = *(long *)(lVar7 + 0x50);
                          lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                          FUN_05af2824(lVar9,0);
                          puVar5 = Method_UnityEngine_HumanPoseHandler_GetHumanPose__;
                          if (lVar9 != 0) {
                            *(undefined8 *)(lVar9 + 0x30) =
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<STP_SetupData>__
                            ;
                            thunk_FUN_02dc1ef0();
                            uVar8 = *(undefined8 *)puVar1;
                            *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                            *(undefined8 *)(lVar9 + 0x60) = uVar8;
                            thunk_FUN_02dc1ef0();
                            uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                            FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar5,0);
                            *(undefined8 *)(lVar9 + 0x50) = uVar8;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
                            if (lVar10 != 0) {
                              FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
                              lVar10 = *(long *)(lVar7 + 0x50);
                              lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                              FUN_05af2824(lVar9,0);
                              puVar5 = Method_Oculus_Platform_IAP_LaunchCheckoutFlow__;
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0x30) =
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<STP_PreTaaData>__
                                ;
                                thunk_FUN_02dc1ef0();
                                uVar8 = *(undefined8 *)puVar1;
                                *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                                *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                thunk_FUN_02dc1ef0();
                                uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                                FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar5,0);
                                *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
                                if (lVar10 != 0) {
                                  FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
                                  lVar10 = *(long *)(lVar7 + 0x50);
                                  lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                  FUN_05af2824(lVar9,0);
                                  puVar5 = 
                                  Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<InstanceCuller_InstanceOcclusionTestPassData>__
                                  ;
                                  if (lVar9 != 0) {
                                    *(undefined8 *)(lVar9 + 0x30) =
                                         *(undefined8 *)
                                          Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<Vrs_ConversionPassData>__
                                    ;
                                    thunk_FUN_02dc1ef0();
                                    uVar8 = *(undefined8 *)puVar1;
                                    *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                                    *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                    thunk_FUN_02dc1ef0();
                                    uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                                    FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar5,0);
                                    *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
                                    if (lVar10 != 0) {
                                      FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
                                      lVar10 = *(long *)(lVar7 + 0x50);
                                      lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                      FUN_05af2824(lVar9,0);
                                      puVar4 = 
                                      Method_UnityEngine_Rendering_RenderGraphModule_IComputeRenderGraphBuilder_SetRenderFunc<OcclusionCullingCommon_OcclusionTestOverlaySetupPassData>__
                                      ;
                                      if (lVar9 != 0) {
                                        *(undefined8 *)(lVar9 + 0x30) =
                                             *(undefined8 *)
                                              Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeBitArrayDisposeJob>__
                                        ;
                                        thunk_FUN_02dc1ef0();
                                        uVar8 = *(undefined8 *)puVar1;
                                        *(undefined4 *)(lVar9 + 0x58) = 0x3e4ccccd;
                                        *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                        thunk_FUN_02dc1ef0();
                                        uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
                                        FUN_04c43d20(uVar8,lVar6,*(undefined8 *)puVar4,0);
                                        *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                        thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50),uVar8);
                                        if (lVar10 != 0) {
                                          FUN_039cf3dc(lVar10,lVar9,*(undefined8 *)puVar2);
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
  FUN_02d4dee8();
}


