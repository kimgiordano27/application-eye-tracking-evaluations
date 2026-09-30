/*
FUNCTION_NAME: FUN_070843a8
ENTRY_POINT: 070843a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_070843a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo;
  if ((DAT_07a5a6b2 & 1) == 0) {
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetApplicationsThatSupportMimeType_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
    FUN_031f20f4(System_Nullable<AuthenticationTypes>_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo);
    DAT_07a5a6b2 = 1;
  }
  puVar3 = OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo;
  puVar1 = OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo;
  local_48 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_0535430c(param_1,param_2,0,*(undefined8 *)puVar1);
  FUN_070f4c04(param_1,0,0);
  plVar7 = (long *)UnityEngine_UIElements_BaseSlider<int>__get_clampedDragger
                             (param_1,*(undefined8 *)puVar3);
  puVar2 = OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x248))(plVar7,0,*(undefined8 *)(*plVar7 + 0x250));
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar8 = *(long *)puVar2;
    }
    FUN_06fc7f68(param_1,**(undefined8 **)(lVar8 + 0xb8),0);
    lVar8 = UnityEngine_UIElements_BaseSlider<int>__get_clampedDragger
                      (param_1,*(undefined8 *)puVar3);
    if (lVar8 != 0) {
      FUN_06fc7f68(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
      puVar6 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
      puVar1 = System_Nullable<AuthenticationTypes>_TypeInfo;
      if (*(long *)(param_1 + 0x4f8) != 0) {
        FUN_06fc7f68(*(long *)(param_1 + 0x4f8),
                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
        uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
        FUN_07084750(uVar9,*(undefined8 *)puVar1);
        plVar7 = (long *)(param_1 + 0x538);
        *(undefined8 *)(param_1 + 0x538) = uVar9;
        thunk_FUN_0329bf60(plVar7,uVar9);
        if (*(long *)(param_1 + 0x538) != 0) {
          UnityEngine_UIElements_Toggle_UxmlTraits___ctor
                    (*(long *)(param_1 + 0x538),
                     *(undefined8 *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo,0
                    );
          if (*plVar7 != 0) {
            FUN_070f4c04(*plVar7,1,0);
            puVar5 = OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo;
            puVar4 = OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo;
            puVar1 = OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo;
            if (*plVar7 != 0) {
              FUN_06fc7f68(*plVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
              uVar10 = *(undefined8 *)(param_1 + 0x538);
              uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
              FUN_04292d74(uVar9,param_1,*(undefined8 *)puVar1,0);
              FUN_03e247ec(uVar10,uVar9,*(undefined8 *)puVar5);
              lVar8 = UnityEngine_UIElements_BaseSlider<int>__get_clampedDragger
                                (param_1,*(undefined8 *)puVar3);
              puVar1 = OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo;
              if (lVar8 != 0) {
                local_48 = *(undefined8 *)(lVar8 + 0x440);
                FUN_06fd1174(&local_48,*(undefined8 *)(param_1 + 0x538),0);
                uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
                FUN_07084750(uVar9,*(undefined8 *)puVar1);
                plVar7 = (long *)(param_1 + 0x540);
                *(undefined8 *)(param_1 + 0x540) = uVar9;
                thunk_FUN_0329bf60(plVar7,uVar9);
                if (*(long *)(param_1 + 0x540) != 0) {
                  UnityEngine_UIElements_Toggle_UxmlTraits___ctor
                            (*(long *)(param_1 + 0x540),
                             *(undefined8 *)OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo,0
                            );
                  if (*plVar7 != 0) {
                    FUN_070f4c04(*plVar7,1,0);
                    puVar1 = OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo;
                    if (*plVar7 != 0) {
                      FUN_06fc7f68(*plVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20)
                                   ,0);
                      uVar10 = *(undefined8 *)(param_1 + 0x540);
                      uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                      FUN_04292d74(uVar9,param_1,*(undefined8 *)puVar1,0);
                      FUN_03e247ec(uVar10,uVar9,*(undefined8 *)puVar5);
                      lVar8 = UnityEngine_UIElements_BaseSlider<int>__get_clampedDragger
                                        (param_1,*(undefined8 *)puVar3);
                      if (lVar8 != 0) {
                        local_48 = *(undefined8 *)(lVar8 + 0x440);
                        FUN_06fd1174(&local_48,*plVar7,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


