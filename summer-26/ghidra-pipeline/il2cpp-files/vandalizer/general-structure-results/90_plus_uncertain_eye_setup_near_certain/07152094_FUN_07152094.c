/*
FUNCTION_NAME: FUN_07152094
ENTRY_POINT: 07152094
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_14;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_07152094(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  
  puVar4 = UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo;
  if ((DAT_07a5b295 & 1) == 0) {
    FUN_031f20f4(OVRManager_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_031f20f4(OVRMeshRenderer_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
                );
    FUN_031f20f4(OVRMixedReality_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361e0);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_InputSourceMode_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                );
    FUN_031f20f4(OVR_OpenVR_NotificationBitmap_t_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361e8);
    FUN_031f20f4(PTR_DAT_076361f0);
    FUN_031f20f4(Oisoi_UI_Notifications_NotificationController_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    DAT_07a5b295 = 1;
  }
  puVar2 = UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo;
  plVar16 = (long *)OVRMixedReality_TypeInfo;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar1 = OVRManager_TypeInfo;
  lVar5 = FUN_054e0254(*(undefined8 *)puVar2);
  lVar10 = *plVar16;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar10);
  }
  lVar10 = FUN_054e0254(*(undefined8 *)puVar1);
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo;
  if (param_1 != (long *)0x0) {
    lVar11 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)
             UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
           ) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_07152220;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_0322c1e8(param_1,*(long *)
                                   UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                          ,0);
LAB_07152220:
    lVar11 = (*(code *)*puVar6)(param_1,puVar6[1]);
    if ((lVar11 != 0) &&
       (FUN_03e0e8fc(lVar11,0,lVar5,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_InputSourceMode_TypeInfo
                    ), puVar3 = Oisoi_UI_Notifications_NotificationController_TypeInfo,
       puVar1 = PTR_DAT_0759b2a8, lVar5 != 0)) {
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar15 = 0;
        do {
          lVar11 = FUN_047af170(lVar5,iVar15,*(undefined8 *)puVar3);
          if (lVar11 == 0) goto LAB_071524a4;
          uVar7 = FUN_06e550fc(lVar11,0);
          lVar12 = *param_1;
          lVar9 = *(long *)puVar2;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_071522dc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_0322c1e8(param_1,lVar9,0);
LAB_071522dc:
          uVar8 = (*(code *)*puVar6)(param_1,puVar6[1]);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
          }
          uVar13 = FUN_06e5ba28(uVar7,uVar8,0);
          if (((uVar13 & 1) == 0) &&
             (uVar13 = FUN_06e548ac(lVar11,0), plVar16 = (long *)OVRMixedReality_TypeInfo,
             (uVar13 & 1) != 0)) {
            lVar12 = *param_1;
            lVar9 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 == 0) goto LAB_071523e0;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_071523c8;
          }
          iVar15 = iVar15 + 1;
          plVar16 = (long *)OVRMixedReality_TypeInfo;
        } while (iVar15 < *(int *)(lVar5 + 0x18));
      }
      goto LAB_0715233c;
    }
  }
  goto LAB_071524a4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_071523c8:
    if (*(long *)(piVar14 + -2) == lVar9) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_071523fc;
    }
  }
LAB_071523e0:
  puVar6 = (undefined8 *)FUN_0322c1e8(param_1,lVar9,0);
LAB_071523fc:
  lVar9 = (*(code *)*puVar6)(param_1,puVar6[1]);
  if ((lVar9 != 0) &&
     (FUN_03e0e8fc(lVar9,0,lVar10,*(undefined8 *)PTR_DAT_076361e0), puVar2 = PTR_DAT_076361f0,
     lVar10 != 0)) {
    iVar15 = *(int *)(lVar10 + 0x18);
    do {
      do {
        iVar15 = iVar15 + -1;
        if (iVar15 < 0) goto LAB_07152340;
        lVar9 = FUN_047af170(lVar10,iVar15,*(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_071524a4;
        uVar7 = FUN_06e5502c(lVar9,0);
        uVar8 = FUN_06e5502c(lVar11,0);
        uVar13 = FUN_071528c0(uVar7,uVar8);
      } while ((uVar13 & 1) != 0);
      lVar9 = FUN_047af170(lVar10,iVar15,*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_071524a4;
      uVar13 = FUN_0713d86c(lVar9,0);
    } while ((uVar13 & 1) == 0);
LAB_0715233c:
    lVar11 = 0;
LAB_07152340:
    puVar2 = 
    UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
    ;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    puVar4 = OVRMeshRenderer_TypeInfo;
    FUN_054e0394(lVar5,*(undefined8 *)puVar2);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_054e0394(lVar10,*(undefined8 *)puVar4);
    return lVar11;
  }
LAB_071524a4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


