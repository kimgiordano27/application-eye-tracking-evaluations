/*
FUNCTION_NAME: FUN_06863f68
ENTRY_POINT: 06863f68
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06863f68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_07558e0d & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f6268);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetLastPoses_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetMirrorTextureGL_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetTrackingSpace_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__GetVulkanInstanceExtensionsRequired_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__HideMirrorWindow_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__IsFullscreen_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__IsMirrorWindowVisible_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    DAT_07558e0d = 1;
  }
  puVar1 = PTR_DAT_070c1b68;
  if (*(long *)(param_1 + 0x88) == 0) goto UnityEngine_AndroidJNI__GetStringUTFLength;
  FUN_06831e14(*(long *)(param_1 + 0x88),0);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_069d69b8(uVar7,0,0);
  puVar2 = OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo;
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto UnityEngine_AndroidJNI__GetStringUTFLength;
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x2b8);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo);
    FUN_04cd3498(uVar7,param_1,*(undefined8 *)OVR_OpenVR_IVRCompositor__IsFullscreen_TypeInfo,0);
    puVar3 = OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo;
    if (lVar8 == 0) goto UnityEngine_AndroidJNI__GetStringUTFLength;
    FUN_04cd83d4(lVar8,uVar7,
                 *(undefined8 *)OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo);
    if (*(long *)(param_1 + 0x28) == 0) goto UnityEngine_AndroidJNI__GetStringUTFLength;
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x2c0);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_04cd3498(uVar7,param_1,
                 *(undefined8 *)OVR_OpenVR_IVRCompositor__IsMirrorWindowVisible_TypeInfo,0);
    if (lVar8 == 0) goto UnityEngine_AndroidJNI__GetStringUTFLength;
    FUN_04cd83d4(lVar8,uVar7,*(undefined8 *)puVar3);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_069d69b8(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
      uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
      FUN_04cd3498(uVar7,param_1,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetMirrorTextureGL_TypeInfo,0);
      if (lVar8 != 0) {
        FUN_04cd83d4(lVar8,uVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo)
        ;
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x88);
          uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)
                              OVR_OpenVR_IVRCompositor__ReleaseMirrorTextureD3D11_TypeInfo);
          FUN_04cd3498(uVar7,param_1,
                       *(undefined8 *)OVR_OpenVR_IVRCompositor__GetTrackingSpace_TypeInfo,0);
          if (lVar8 != 0) {
            FUN_04cd83d4(lVar8,uVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
            puVar1 = OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo;
            if (*(long *)(param_1 + 0x20) != 0) {
              lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x310);
              uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)
                                  OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo);
              FUN_04cd3498(uVar7,param_1,
                           *(undefined8 *)OVR_OpenVR_IVRCompositor__IsFullscreen_TypeInfo,0);
              puVar2 = OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo;
              if (lVar8 != 0) {
                FUN_04cd83d4(lVar8,uVar7,
                             *(undefined8 *)
                              OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo);
                if (*(long *)(param_1 + 0x20) != 0) {
                  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x318);
                  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)puVar1);
                  FUN_04cd3498(uVar7,param_1,
                               *(undefined8 *)
                                OVR_OpenVR_IVRCompositor__IsMirrorWindowVisible_TypeInfo,0);
                  if (lVar8 != 0) {
                    FUN_04cd83d4(lVar8,uVar7,*(undefined8 *)puVar2);
                    goto LAB_06864290;
                  }
                }
              }
            }
          }
        }
      }
    }
UnityEngine_AndroidJNI__GetStringUTFLength:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
LAB_06864290:
  puVar5 = OVR_OpenVR_IVRCompositor__HideMirrorWindow_TypeInfo;
  puVar3 = OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo;
  puVar2 = OVR_OpenVR_IVRCompositor__GetLastPoses_TypeInfo;
  puVar1 = PTR_DAT_070f6268;
  lVar8 = FUN_06863ee4(*(undefined8 *)(param_1 + 0x38));
  puVar4 = OVR_OpenVR_IVRCompositor__GetVulkanInstanceExtensionsRequired_TypeInfo;
  if (lVar8 != 0) {
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar4,0);
    FUN_064bada4(lVar8,uVar7,0);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar3,0);
    FUN_064bada4(lVar8,uVar7,0);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar2,0);
    FUN_064bacf4(lVar8,uVar7,0);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar5,0);
    FUN_064bacf4(lVar8,uVar7,0);
  }
  lVar8 = FUN_06863ee4(*(undefined8 *)(param_1 + 0x40));
  if (lVar8 != 0) {
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar2,0);
    FUN_064bada4(lVar8,uVar7,0);
  }
  lVar8 = FUN_06863ee4(*(undefined8 *)(param_1 + 0x58));
  if (lVar8 != 0) {
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar3,0);
    FUN_064bac44(lVar8,uVar7,0);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar5,0);
    FUN_064bacf4(lVar8,uVar7,0);
  }
  lVar8 = FUN_06863ee4(*(undefined8 *)(param_1 + 0x48));
  if (lVar8 != 0) {
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar3,0);
    FUN_064bac44(lVar8,uVar7,0);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar5,0);
    FUN_064bacf4(lVar8,uVar7,0);
  }
  lVar8 = FUN_06863ee4(*(undefined8 *)(param_1 + 0x50));
  if (lVar8 != 0) {
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar3,0);
    FUN_064bac44(lVar8,uVar7,0);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05115744(uVar7,param_1,*(undefined8 *)puVar5,0);
    FUN_064bacf4(lVar8,uVar7,0);
    return;
  }
  return;
}


