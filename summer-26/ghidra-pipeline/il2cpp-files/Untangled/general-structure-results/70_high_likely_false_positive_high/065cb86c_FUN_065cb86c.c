/*
FUNCTION_NAME: FUN_065cb86c
ENTRY_POINT: 065cb86c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_065cb86c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_06d02220;
  if ((DAT_071ceba8 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_ICollection<OVRSpaceUser>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d4f3e0);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d15378);
    FUN_02f07e70(PTR_DAT_06d4f3f8);
    FUN_02f07e70(ES3Types_ES3Type_ushort_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_ushortArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3UnityObjectType_TypeInfo);
    FUN_02f07e70(ES3Types_ES3UserType_ArrayListArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3UserType_RigidbodyArray_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_ETextureType_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_ETrackedControllerRole_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_ETrackedDeviceClass_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d7cc30);
    FUN_02f07e70(OVR_OpenVR_ETrackedDeviceProperty_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_ETrackedPropertyError_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d16c68);
    FUN_02f07e70(PTR_DAT_06d41798);
    FUN_02f07e70(OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRApplicationError_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRApplicationProperty_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRApplicationTransitionState_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRButtonId_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRCompositorTimingMode_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRControllerAxisType_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVREventType_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVREye_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRNotificationStyle_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRNotificationType_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVROverlayError_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRRenderModelError_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRScreenshotError_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRScreenshotPropertyFilenames_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRScreenshotType_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRSettingsError_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d7e4c0);
    FUN_02f07e70(OVR_OpenVR_EVRSkeletalMotionRange_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRSubmitFlags_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRTrackedCameraError_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d66428);
    FUN_02f07e70(Unity_VisualScripting_Antlr3_Runtime_EarlyExitException_TypeInfo);
    FUN_02f07e70(Unity_Jobs_EarlyInitHelpers_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_EasingFunction_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_EasingMode_TypeInfo);
    FUN_02f07e70(ECE_EasyColliderAutoSkinnedBone_TypeInfo);
    FUN_02f07e70(ECE_EasyColliderCreator_TypeInfo);
    FUN_02f07e70(ECE_EasyColliderData_TypeInfo);
    FUN_02f07e70(ECE_EasyColliderPostProccessor_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d76198);
    FUN_02f07e70(ECE_EasyColliderQuickHull_TypeInfo);
    FUN_02f07e70(System_ComponentModel_EditorAttribute_TypeInfo);
    DAT_071ceba8 = 1;
  }
  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,0x31);
  if (lVar5 == 0) goto LAB_065cd9c4;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)OVR_OpenVR_EVREye_TypeInfo;
    thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x20));
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)OVR_OpenVR_ETrackedDeviceProperty_TypeInfo;
      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x28));
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)OVR_OpenVR_ETrackedPropertyError_TypeInfo;
        thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x30));
        if (3 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)ECE_EasyColliderPostProccessor_TypeInfo;
          thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x38));
          if (4 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x40) =
                 *(undefined8 *)OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo;
            thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x40));
            if (5 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x48) =
                   *(undefined8 *)OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo;
              thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x48));
              if (6 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x50) =
                     *(undefined8 *)OVR_OpenVR_EVRScreenshotError_TypeInfo;
                thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x50));
                if (7 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x58) =
                       *(undefined8 *)
                        Unity_VisualScripting_Antlr3_Runtime_EarlyExitException_TypeInfo;
                  thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x58));
                  if (8 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x60) =
                         *(undefined8 *)ECE_EasyColliderAutoSkinnedBone_TypeInfo;
                    thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x60));
                    if (9 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x68) =
                           *(undefined8 *)OVR_OpenVR_EVRScreenshotPropertyFilenames_TypeInfo;
                      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x68));
                      if (10 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)PTR_DAT_06d76198;
                        thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x70));
                        if (0xb < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)PTR_DAT_06d7cc30;
                          thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x78));
                          if (0xc < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x80) =
                                 *(undefined8 *)OVR_OpenVR_EVRControllerAxisType_TypeInfo;
                            thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x80));
                            if (0xd < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x88) =
                                   *(undefined8 *)OVR_OpenVR_EVRSettingsError_TypeInfo;
                              thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x88));
                              if (0xe < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)PTR_DAT_06d41798;
                                thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x90));
                                if (0xf < *(uint *)(lVar5 + 0x18)) {
                                  *(undefined8 *)(lVar5 + 0x98) =
                                       *(undefined8 *)ES3Types_ES3Type_ushort_TypeInfo;
                                  thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0x98));
                                  if (0x10 < *(uint *)(lVar5 + 0x18)) {
                                    *(undefined8 *)(lVar5 + 0xa0) =
                                         *(undefined8 *)OVR_OpenVR_EVRSubmitFlags_TypeInfo;
                                    thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xa0));
                                    if (0x11 < *(uint *)(lVar5 + 0x18)) {
                                      *(undefined8 *)(lVar5 + 0xa8) =
                                           *(undefined8 *)ES3Types_ES3Type_ushortArray_TypeInfo;
                                      thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xa8));
                                      if (0x12 < *(uint *)(lVar5 + 0x18)) {
                                        *(undefined8 *)(lVar5 + 0xb0) =
                                             *(undefined8 *)PTR_DAT_06d16c68;
                                        thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xb0));
                                        if (0x13 < *(uint *)(lVar5 + 0x18)) {
                                          *(undefined8 *)(lVar5 + 0xb8) =
                                               *(undefined8 *)
                                                OVR_OpenVR_EVRApplicationError_TypeInfo;
                                          thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xb8));
                                          if (0x14 < *(uint *)(lVar5 + 0x18)) {
                                            *(undefined8 *)(lVar5 + 0xc0) =
                                                 *(undefined8 *)
                                                  OVR_OpenVR_EVRScreenshotType_TypeInfo;
                                            thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xc0));
                                            if (0x15 < *(uint *)(lVar5 + 0x18)) {
                                              *(undefined8 *)(lVar5 + 200) =
                                                   *(undefined8 *)ECE_EasyColliderData_TypeInfo;
                                              thunk_FUN_02f411dc((undefined8 *)(lVar5 + 200));
                                              if (0x16 < *(uint *)(lVar5 + 0x18)) {
                                                *(undefined8 *)(lVar5 + 0xd0) =
                                                     *(undefined8 *)
                                                      OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo;
                                                thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xd0));
                                                if (0x17 < *(uint *)(lVar5 + 0x18)) {
                                                  *(undefined8 *)(lVar5 + 0xd8) =
                                                       *(undefined8 *)
                                                        ECE_EasyColliderCreator_TypeInfo;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xe0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  ES3Types_ES3UserType_RigidbodyArray_TypeInfo;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xe8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EasingFunction_TypeInfo;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xe8));
                                                  if (0x1a < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xf0) =
                                                         *(undefined8 *)
                                                          Unity_Jobs_EarlyInitHelpers_TypeInfo;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar5 + 0xf0))
                                                    ;
                                                    if (0x1b < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0xf8) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVRNotificationStyle_TypeInfo
                                                      ;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar5 + 0xf8));
                                                      if (0x1c < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0x100) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_EVRSkeletalMotionRange_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 0x100);
                                                  if (0x1d < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x108) =
                                                         *(undefined8 *)
                                                          ES3Types_ES3UnityObjectType_TypeInfo;
                                                    thunk_FUN_02f411dc(lVar5 + 0x108);
                                                    if (0x1e < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x110) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_EVRApplicationTransitionState_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 0x110);
                                                  if (0x1f < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x118) =
                                                         *(undefined8 *)
                                                          ECE_EasyColliderQuickHull_TypeInfo;
                                                    thunk_FUN_02f411dc(lVar5 + 0x118);
                                                    if (0x20 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x120) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_EVRApplicationProperty_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 0x120);
                                                  if (0x21 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x128) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_EVRCompositorTimingMode_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 0x128);
                                                  if (0x22 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x130) =
                                                         *(undefined8 *)PTR_DAT_06d7e4c0;
                                                    thunk_FUN_02f411dc(lVar5 + 0x130);
                                                    if (0x23 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x138) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_ETrackedDeviceClass_TypeInfo;
                                                      thunk_FUN_02f411dc(lVar5 + 0x138);
                                                      if (0x24 < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0x140) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_EVRButtonId_TypeInfo;
                                                        thunk_FUN_02f411dc(lVar5 + 0x140);
                                                        if (0x25 < *(uint *)(lVar5 + 0x18)) {
                                                          *(undefined8 *)(lVar5 + 0x148) =
                                                               *(undefined8 *)
                                                                OVR_OpenVR_ETextureType_TypeInfo;
                                                          thunk_FUN_02f411dc(lVar5 + 0x148);
                                                          if (0x26 < *(uint *)(lVar5 + 0x18)) {
                                                            *(undefined8 *)(lVar5 + 0x150) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  OVR_OpenVR_EVRNotificationType_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 0x150);
                                                  if (0x27 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x158) =
                                                         *(undefined8 *)PTR_DAT_06d4f3f8;
                                                    thunk_FUN_02f411dc(lVar5 + 0x158);
                                                    if (0x28 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x160) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVREventType_TypeInfo;
                                                      thunk_FUN_02f411dc(lVar5 + 0x160);
                                                      if (0x29 < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0x168) =
                                                             *(undefined8 *)PTR_DAT_06d66428;
                                                        thunk_FUN_02f411dc(lVar5 + 0x168);
                                                        if (0x2a < *(uint *)(lVar5 + 0x18)) {
                                                          *(undefined8 *)(lVar5 + 0x170) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  ES3Types_ES3UserType_ArrayListArray_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 0x170);
                                                  if (0x2b < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x178) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVRRenderModelError_TypeInfo;
                                                    thunk_FUN_02f411dc(lVar5 + 0x178);
                                                    if (0x2c < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x180) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_ComponentModel_EditorAttribute_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 0x180);
                                                  if (0x2d < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x188) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVROverlayError_TypeInfo;
                                                    thunk_FUN_02f411dc(lVar5 + 0x188);
                                                    if (0x2e < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 400) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_EVRTrackedCameraError_TypeInfo;
                                                  thunk_FUN_02f411dc(lVar5 + 400);
                                                  if (0x2f < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x198) =
                                                         *(undefined8 *)
                                                          UnityEngine_UIElements_EasingMode_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc(lVar5 + 0x198);
                                                    puVar4 = ES3Types_ES3Type_GuidArray_TypeInfo;
                                                    puVar3 = 
                                                  System_Collections_Generic_ICollection<OVRSpaceUser>_TypeInfo
                                                  ;
                                                  puVar2 = PTR_DAT_06d4f3e0;
                                                  puVar1 = PTR_DAT_06d15378;
                                                  if (0x30 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1a0) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_ETrackedControllerRole_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc(lVar5 + 0x1a0);
                                                    **(long **)(*(long *)puVar4 + 0xb8) = lVar5;
                                                    thunk_FUN_02f411dc(*(undefined8 *)
                                                                        (*(long *)puVar4 + 0xb8),
                                                                       lVar5);
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_055b18c4(uVar6,0);
                                                    puVar7 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) + 8)
                                                    ;
                                                    *puVar7 = uVar6;
                                                    thunk_FUN_02f411dc(puVar7,uVar6);
                                                    uVar6 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    uVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar8,uVar6,0);
                                                    puVar7 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    *puVar7 = uVar8;
                                                    thunk_FUN_02f411dc(puVar7,uVar8);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) {
LAB_065cd9c4:
                    /* WARNING: Subroutine does not return */
                                                      FUN_02f080c0();
                                                    }
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 2;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      puVar7 = (undefined8 *)
                                                               (*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x18);
                                                      *puVar7 = uVar6;
                                                      thunk_FUN_02f411dc(puVar7,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) = 0x80002;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        puVar7 = (undefined8 *)
                                                                 (*(long *)(*(long *)puVar4 + 0xb8)
                                                                 + 0x20);
                                                        *puVar7 = uVar6;
                                                        thunk_FUN_02f411dc(puVar7,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               0x788000000ff0;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          puVar7 = (undefined8 *)
                                                                   (*(long *)(*(long *)puVar4 + 0xb8
                                                                             ) + 0x28);
                                                          *puVar7 = uVar6;
                                                          thunk_FUN_02f411dc(puVar7,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) = 0x100000
                                                            ;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            puVar7 = (undefined8 *)
                                                                     (*(long *)(*(long *)puVar4 +
                                                                               0xb8) + 0x30);
                                                            *puVar7 = uVar6;
                                                            thunk_FUN_02f411dc(puVar7,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x788000000ff0;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar4 + 0xb8) + 0x38
                                                           );
                                                  *puVar7 = uVar6;
                                                  thunk_FUN_02f411dc(puVar7,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 2;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    puVar7 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x40);
                                                    *puVar7 = uVar6;
                                                    thunk_FUN_02f411dc(puVar7,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0x600002;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      puVar7 = (undefined8 *)
                                                               (*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x48);
                                                      *puVar7 = uVar6;
                                                      thunk_FUN_02f411dc(puVar7,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x788000000ff0;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        puVar7 = (undefined8 *)
                                                                 (*(long *)(*(long *)puVar4 + 0xb8)
                                                                 + 0x50);
                                                        *puVar7 = uVar6;
                                                        thunk_FUN_02f411dc(puVar7,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = 0x600002;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          puVar7 = (undefined8 *)
                                                                   (*(long *)(*(long *)puVar4 + 0xb8
                                                                             ) + 0x58);
                                                          *puVar7 = uVar6;
                                                          thunk_FUN_02f411dc(puVar7,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined **)(lVar5 + 0x20) =
                                                                 &DAT_01800002;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            puVar7 = (undefined8 *)
                                                                     (*(long *)(*(long *)puVar4 +
                                                                               0xb8) + 0x60);
                                                            *puVar7 = uVar6;
                                                            thunk_FUN_02f411dc(puVar7,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x788000000ff0;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar4 + 0xb8) + 0x68
                                                           );
                                                  *puVar7 = uVar6;
                                                  thunk_FUN_02f411dc(puVar7,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined **)(lVar5 + 0x20) = &DAT_01800002;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    puVar7 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x70);
                                                    *puVar7 = uVar6;
                                                    thunk_FUN_02f411dc(puVar7,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0x2000002;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      puVar7 = (undefined8 *)
                                                               (*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x78);
                                                      *puVar7 = uVar6;
                                                      thunk_FUN_02f411dc(puVar7,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x788000000ff0;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        puVar7 = (undefined8 *)
                                                                 (*(long *)(*(long *)puVar4 + 0xb8)
                                                                 + 0x80);
                                                        *puVar7 = uVar6;
                                                        thunk_FUN_02f411dc(puVar7,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = 0x2000002;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          puVar7 = (undefined8 *)
                                                                   (*(long *)(*(long *)puVar4 + 0xb8
                                                                             ) + 0x88);
                                                          *puVar7 = uVar6;
                                                          thunk_FUN_02f411dc(puVar7,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0x4000002;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            puVar7 = (undefined8 *)
                                                                     (*(long *)(*(long *)puVar4 +
                                                                               0xb8) + 0x90);
                                                            *puVar7 = uVar6;
                                                            thunk_FUN_02f411dc(puVar7,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x788000000ff0;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar4 + 0xb8) + 0x98
                                                           );
                                                  *puVar7 = uVar6;
                                                  thunk_FUN_02f411dc(puVar7,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 0x4000002;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    puVar7 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0xa0);
                                                    *puVar7 = uVar6;
                                                    thunk_FUN_02f411dc(puVar7,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0x8000002;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      puVar7 = (undefined8 *)
                                                               (*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0xa8);
                                                      *puVar7 = uVar6;
                                                      thunk_FUN_02f411dc(puVar7,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x788000000ff0;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        puVar7 = (undefined8 *)
                                                                 (*(long *)(*(long *)puVar4 + 0xb8)
                                                                 + 0xb0);
                                                        *puVar7 = uVar6;
                                                        thunk_FUN_02f411dc(puVar7,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = 0x8000002;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          puVar7 = (undefined8 *)
                                                                   (*(long *)(*(long *)puVar4 + 0xb8
                                                                             ) + 0xb8);
                                                          *puVar7 = uVar6;
                                                          thunk_FUN_02f411dc(puVar7,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0xf0000002;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            puVar7 = (undefined8 *)
                                                                     (*(long *)(*(long *)puVar4 +
                                                                               0xb8) + 0xc0);
                                                            *puVar7 = uVar6;
                                                            thunk_FUN_02f411dc(puVar7,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x788000000ff0;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar4 + 0xb8) + 200)
                                                  ;
                                                  *puVar7 = uVar6;
                                                  thunk_FUN_02f411dc(puVar7,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 0x788000000ff0;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    puVar7 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0xd0);
                                                    *puVar7 = uVar6;
                                                    thunk_FUN_02f411dc(puVar7,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0xf0000002;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      puVar7 = (undefined8 *)
                                                               (*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0xd8);
                                                      *puVar7 = uVar6;
                                                      thunk_FUN_02f411dc(puVar7,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) = 0xf00000002;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        puVar7 = (undefined8 *)
                                                                 (*(long *)(*(long *)puVar4 + 0xb8)
                                                                 + 0xe0);
                                                        *puVar7 = uVar6;
                                                        thunk_FUN_02f411dc(puVar7,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               0x788000000ff0;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          puVar7 = (undefined8 *)
                                                                   (*(long *)(*(long *)puVar4 + 0xb8
                                                                             ) + 0xe8);
                                                          *puVar7 = uVar6;
                                                          thunk_FUN_02f411dc(puVar7,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0x788000000ff0;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            puVar7 = (undefined8 *)
                                                                     (*(long *)(*(long *)puVar4 +
                                                                               0xb8) + 0xf0);
                                                            *puVar7 = uVar6;
                                                            thunk_FUN_02f411dc(puVar7,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x788000000ff0;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar4 + 0xb8) + 0xf8
                                                           );
                                                  *puVar7 = uVar6;
                                                  thunk_FUN_02f411dc(puVar7,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 0x788000000ff0;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                    *(undefined8 *)(lVar5 + 0x100) = uVar6;
                                                    thunk_FUN_02f411dc(lVar5 + 0x100,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0xf00000002;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x108) = uVar6;
                                                      thunk_FUN_02f411dc(lVar5 + 0x108,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) = 0x3000000002
                                                        ;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                        *(undefined8 *)(lVar5 + 0x110) = uVar6;
                                                        thunk_FUN_02f411dc(lVar5 + 0x110,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               0x788000000ff0;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                          *(undefined8 *)(lVar5 + 0x118) = uVar6;
                                                          thunk_FUN_02f411dc(lVar5 + 0x118,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0x788000000ff0;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8
                                                                             );
                                                            *(undefined8 *)(lVar5 + 0x120) = uVar6;
                                                            thunk_FUN_02f411dc(lVar5 + 0x120,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x3000000002;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                  *(undefined8 *)(lVar5 + 0x128) = uVar6;
                                                  thunk_FUN_02f411dc(lVar5 + 0x128,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 0xc000000002;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                    *(undefined8 *)(lVar5 + 0x130) = uVar6;
                                                    thunk_FUN_02f411dc(lVar5 + 0x130,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0x788000000ff0
                                                      ;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x138) = uVar6;
                                                      thunk_FUN_02f411dc(lVar5 + 0x138,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x788000000ff0;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                        *(undefined8 *)(lVar5 + 0x140) = uVar6;
                                                        thunk_FUN_02f411dc(lVar5 + 0x140,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               0xc000000002;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                          *(undefined8 *)(lVar5 + 0x148) = uVar6;
                                                          thunk_FUN_02f411dc(lVar5 + 0x148,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0x70000000002;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8
                                                                             );
                                                            *(undefined8 *)(lVar5 + 0x150) = uVar6;
                                                            thunk_FUN_02f411dc(lVar5 + 0x150,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x788000000ff0;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                  *(undefined8 *)(lVar5 + 0x158) = uVar6;
                                                  thunk_FUN_02f411dc(lVar5 + 0x158,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 0x788000000ff0;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                    *(undefined8 *)(lVar5 + 0x160) = uVar6;
                                                    thunk_FUN_02f411dc(lVar5 + 0x160,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0x788000000ff0
                                                      ;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x168) = uVar6;
                                                      thunk_FUN_02f411dc(lVar5 + 0x168,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x70000000002;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                        *(undefined8 *)(lVar5 + 0x170) = uVar6;
                                                        thunk_FUN_02f411dc(lVar5 + 0x170,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = 2;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                          *(undefined8 *)(lVar5 + 0x178) = uVar6;
                                                          thunk_FUN_02f411dc(lVar5 + 0x178,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0x400000000ff0;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8
                                                                             );
                                                            *(undefined8 *)(lVar5 + 0x180) = uVar6;
                                                            thunk_FUN_02f411dc(lVar5 + 0x180,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) = 2;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                  *(undefined8 *)(lVar5 + 0x188) = uVar6;
                                                  thunk_FUN_02f411dc(lVar5 + 0x188,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 0x400000000ff0;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                    *(undefined8 *)(lVar5 + 400) = uVar6;
                                                    thunk_FUN_02f411dc(lVar5 + 400,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 2;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x198) = uVar6;
                                                      thunk_FUN_02f411dc(lVar5 + 0x198,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x400000000ff0;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                        *(undefined8 *)(lVar5 + 0x1a0) = uVar6;
                                                        thunk_FUN_02f411dc(lVar5 + 0x1a0,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = 2;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                          *(undefined8 *)(lVar5 + 0x1a8) = uVar6;
                                                          thunk_FUN_02f411dc(lVar5 + 0x1a8,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0x788000000ff0;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8
                                                                             );
                                                            *(undefined8 *)(lVar5 + 0x1b0) = uVar6;
                                                            thunk_FUN_02f411dc(lVar5 + 0x1b0,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) =
                                                                   0x800000000000;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                  *(undefined8 *)(lVar5 + 0x1b8) = uVar6;
                                                  thunk_FUN_02f411dc(lVar5 + 0x1b8,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 2;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                    *(undefined8 *)(lVar5 + 0x1c0) = uVar6;
                                                    thunk_FUN_02f411dc(lVar5 + 0x1c0,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 2;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x1c8) = uVar6;
                                                      thunk_FUN_02f411dc(lVar5 + 0x1c8,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x400000000002;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                        *(undefined8 *)(lVar5 + 0x1d0) = uVar6;
                                                        thunk_FUN_02f411dc(lVar5 + 0x1d0,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = 2;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                          *(undefined8 *)(lVar5 + 0x1d8) = uVar6;
                                                          thunk_FUN_02f411dc(lVar5 + 0x1d8,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) = 2;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8
                                                                             );
                                                            *(undefined8 *)(lVar5 + 0x1e0) = uVar6;
                                                            thunk_FUN_02f411dc(lVar5 + 0x1e0,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) = 2;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                  *(undefined8 *)(lVar5 + 0x1e8) = uVar6;
                                                  thunk_FUN_02f411dc(lVar5 + 0x1e8,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 2;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                    *(undefined8 *)(lVar5 + 0x1f0) = uVar6;
                                                    thunk_FUN_02f411dc(lVar5 + 0x1f0,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 2;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x1f8) = uVar6;
                                                      thunk_FUN_02f411dc(lVar5 + 0x1f8,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) = 2;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                        *(undefined8 *)(lVar5 + 0x200) = uVar6;
                                                        thunk_FUN_02f411dc(lVar5 + 0x200,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) = 2;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                          *(undefined8 *)(lVar5 + 0x208) = uVar6;
                                                          thunk_FUN_02f411dc(lVar5 + 0x208,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) = 2;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8
                                                                             );
                                                            *(undefined8 *)(lVar5 + 0x210) = uVar6;
                                                            thunk_FUN_02f411dc(lVar5 + 0x210,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) = 2;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                  *(undefined8 *)(lVar5 + 0x218) = uVar6;
                                                  thunk_FUN_02f411dc(lVar5 + 0x218,uVar6);
                                                  lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                  if (lVar5 == 0) goto LAB_065cd9c4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = 0x1000000000002;
                                                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0646d910(uVar6,lVar5,0);
                                                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                    *(undefined8 *)(lVar5 + 0x220) = uVar6;
                                                    thunk_FUN_02f411dc(lVar5 + 0x220,uVar6);
                                                    lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                    if (lVar5 == 0) goto LAB_065cd9c4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = 0x788000000ff0
                                                      ;
                                                      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_0646d910(uVar6,lVar5,0);
                                                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x228) = uVar6;
                                                      thunk_FUN_02f411dc(lVar5 + 0x228,uVar6);
                                                      lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
                                                      if (lVar5 == 0) goto LAB_065cd9c4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar5 + 0x20) =
                                                             0x1000000000002;
                                                        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_0646d910(uVar6,lVar5,0);
                                                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                        *(undefined8 *)(lVar5 + 0x230) = uVar6;
                                                        thunk_FUN_02f411dc(lVar5 + 0x230,uVar6);
                                                        lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1
                                                                            );
                                                        if (lVar5 == 0) goto LAB_065cd9c4;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               0xf88000000ff0;
                                                          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                      puVar3);
                                                          FUN_0646d910(uVar6,lVar5,0);
                                                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                          *(undefined8 *)(lVar5 + 0x238) = uVar6;
                                                          thunk_FUN_02f411dc(lVar5 + 0x238,uVar6);
                                                          lVar5 = FUN_02f07f14(*(undefined8 *)puVar1
                                                                               ,1);
                                                          if (lVar5 == 0) goto LAB_065cd9c4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) =
                                                                 0x800000000000;
                                                            uVar6 = thunk_FUN_02ef1808(*(undefined8
                                                                                         *)puVar3);
                                                            FUN_0646d910(uVar6,lVar5,0);
                                                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8
                                                                             );
                                                            *(undefined8 *)(lVar5 + 0x240) = uVar6;
                                                            thunk_FUN_02f411dc(lVar5 + 0x240,uVar6);
                                                            lVar5 = FUN_02f07f14(*(undefined8 *)
                                                                                  puVar1,1);
                                                            if (lVar5 == 0) goto LAB_065cd9c4;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar5 + 0x20) = 2;
                                                              uVar6 = thunk_FUN_02ef1808(*(
                                                  undefined8 *)puVar3);
                                                  FUN_0646d910(uVar6,lVar5,0);
                                                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                                                  *(undefined8 *)(lVar5 + 0x248) = uVar6;
                                                  thunk_FUN_02f411dc(lVar5 + 0x248,uVar6);
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
  FUN_02f080c8();
}


