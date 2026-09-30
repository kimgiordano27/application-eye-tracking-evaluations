/*
FUNCTION_NAME: FUN_0686b208
ENTRY_POINT: 0686b208
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_0686b208(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = OVR_OpenVR_IVROverlay__GetOverlayTransformType_TypeInfo;
                    /* try { // try from 0686b210 to 0696b223 has its CatchHandler @ 0686b7a0 */
  if ((DAT_07558e4e & 1) == 0) {
    FUN_03188a78(OVR_OpenVR_IVROverlay__GetOverlayTransformType_TypeInfo);
    FUN_03188a78(Best_HTTP_Request_Settings_DownloadSettings_<>c_TypeInfo);
    FUN_03188a78(PTR_DAT_070c28d8);
    FUN_03188a78(OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__GetTransformForOverlayCoordinates_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo);
    FUN_03188a78(PTR_DAT_0711dfd0);
    FUN_03188a78(PTR_DAT_0711dfd8);
    FUN_03188a78(OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo);
    FUN_03188a78(PTR_DAT_070c20c8);
    FUN_03188a78(OVR_OpenVR_IVROverlay__ReleaseNativeOverlayHandle_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess_TypeInfo);
    DAT_07558e4e = 1;
  }
  lVar7 = FUN_03188b1c(*(undefined8 *)puVar2,0x16);
  puVar2 = PTR_DAT_070c20c8;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_070c20c8;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      if (uVar1 != 1) {
        *(undefined8 *)(lVar7 + 0x30) =
             *(undefined8 *)OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo;
        *(undefined8 *)(lVar7 + 0x38) = 1;
        if (2 < uVar1) {
          *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_0711dfd8;
          *(undefined8 *)(lVar7 + 0x48) = 2;
          if (uVar1 != 3) {
            *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)PTR_DAT_0711dfd0;
            *(undefined8 *)(lVar7 + 0x58) = 2;
            if (4 < uVar1) {
              *(undefined8 *)(lVar7 + 0x60) =
                   *(undefined8 *)OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo;
              *(undefined8 *)(lVar7 + 0x68) = 1;
              if (uVar1 != 5) {
                *(undefined8 *)(lVar7 + 0x70) =
                     *(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo;
                *(undefined8 *)(lVar7 + 0x78) = 1;
                if (6 < uVar1) {
                  *(undefined8 *)(lVar7 + 0x80) =
                       *(undefined8 *)OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo;
                  *(undefined8 *)(lVar7 + 0x88) = 1;
                  if (uVar1 != 7) {
                    *(undefined8 *)(lVar7 + 0x90) =
                         *(undefined8 *)
                          OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess_TypeInfo;
                    *(undefined8 *)(lVar7 + 0x98) = 1;
                    if (8 < uVar1) {
                      *(undefined8 *)(lVar7 + 0xa0) =
                           *(undefined8 *)OVR_OpenVR_IVROverlay__ReleaseNativeOverlayHandle_TypeInfo
                      ;
                      *(undefined8 *)(lVar7 + 0xa8) = 1;
                      if (uVar1 != 9) {
                        *(undefined8 *)(lVar7 + 0xb0) =
                             *(undefined8 *)
                              OVR_OpenVR_IVROverlay__GetTransformForOverlayCoordinates_TypeInfo;
                        *(undefined8 *)(lVar7 + 0xb8) = 1;
                        if (10 < uVar1) {
                          *(undefined8 *)(lVar7 + 0xc0) =
                               *(undefined8 *)OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo;
                          *(undefined8 *)(lVar7 + 200) = 1;
                          if (uVar1 != 0xb) {
                            *(undefined8 *)(lVar7 + 0xd0) =
                                 *(undefined8 *)
                                  OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo;
                            *(undefined8 *)(lVar7 + 0xd8) = 1;
                            if (0xc < uVar1) {
                              *(undefined8 *)(lVar7 + 0xe0) =
                                   *(undefined8 *)
                                    OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo;
                              *(undefined8 *)(lVar7 + 0xe8) = 1;
                              if (uVar1 != 0xd) {
                                *(undefined8 *)(lVar7 + 0xf0) =
                                     *(undefined8 *)
                                      OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo;
                                *(undefined8 *)(lVar7 + 0xf8) = 1;
                                puVar5 = OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                                if (0xe < uVar1) {
                                  *(undefined8 *)(lVar7 + 0x100) =
                                       *(undefined8 *)OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo;
                                  *(undefined8 *)(lVar7 + 0x108) = 3;
                                  if (uVar1 != 0xf) {
                                    *(undefined8 *)(lVar7 + 0x110) = *(undefined8 *)puVar5;
                                    *(undefined8 *)(lVar7 + 0x118) = 4;
                                    if (0x10 < uVar1) {
                                      *(undefined8 *)(lVar7 + 0x120) = *(undefined8 *)puVar5;
                                      *(undefined8 *)(lVar7 + 0x128) = 5;
                                      if (uVar1 != 0x11) {
                                        *(undefined8 *)(lVar7 + 0x130) = *(undefined8 *)puVar5;
                                        *(undefined8 *)(lVar7 + 0x138) = 6;
                                        puVar6 = 
                                        OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo;
                                        if (0x12 < uVar1) {
                                          *(undefined8 *)(lVar7 + 0x140) =
                                               *(undefined8 *)
                                                OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo
                                          ;
                                          *(undefined8 *)(lVar7 + 0x148) = 3;
                                          if (uVar1 != 0x13) {
                                            *(undefined8 *)(lVar7 + 0x150) = *(undefined8 *)puVar6;
                                            *(undefined8 *)(lVar7 + 0x158) = 4;
                                            if (0x14 < uVar1) {
                                              *(undefined8 *)(lVar7 + 0x160) = *(undefined8 *)puVar6
                                              ;
                                              *(undefined8 *)(lVar7 + 0x168) = 5;
                                              puVar4 = 
                                              Best_HTTP_Request_Settings_DownloadSettings_<>c_TypeInfo
                                              ;
                                              if (uVar1 != 0x15) {
                                                *(undefined8 *)(lVar7 + 0x170) =
                                                     *(undefined8 *)puVar6;
                                                *(undefined8 *)(lVar7 + 0x178) = 6;
                                                puVar3 = PTR_DAT_070c28d8;
                                                **(long **)(*(long *)puVar4 + 0xb8) = lVar7;
                                                lVar7 = FUN_03188b1c(*(undefined8 *)puVar3,3);
                                                if (lVar7 == 0) goto LAB_0686b5d4;
                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                if (((uVar1 != 0) &&
                                                    (*(undefined8 *)(lVar7 + 0x20) =
                                                          *(undefined8 *)puVar2, uVar1 != 1)) &&
                                                   (*(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)puVar5, 2 < uVar1)) {
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)puVar6;
                                                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) =
                                                       lVar7;
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
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_0686b5d4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


