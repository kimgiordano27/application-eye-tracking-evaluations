/*
FUNCTION_NAME: FUN_07152a18
ENTRY_POINT: 07152a18
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07152a18(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  if ((DAT_07a5b296 & 1) == 0) {
    FUN_031f20f4(OVRManager_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_031f20f4(OVRMeshRenderer_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
                );
    FUN_031f20f4(OVRMixedReality_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo);
    FUN_031f20f4(IngameDebugConsole_ConsoleMethodAttribute_var);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupMemberAndOverridesPair_TypeInfo
                );
    FUN_031f20f4(OVR_OpenVR_NotificationBitmap_t_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361e8);
    FUN_031f20f4(PTR_DAT_076361f0);
    FUN_031f20f4(Oisoi_UI_Notifications_NotificationController_TypeInfo);
    DAT_07a5b296 = 1;
  }
  puVar7 = OVRMixedReality_TypeInfo;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05e24380(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
    }
    puVar6 = UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo;
    puVar4 = OVRManager_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    puVar5 = UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo;
    lVar9 = FUN_054e0254(*(undefined8 *)puVar4);
    lVar15 = *(long *)puVar6;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar15);
    }
    lVar15 = FUN_054e0254(*(undefined8 *)puVar5);
    if (((param_1 != 0) && (lVar10 = FUN_06e5502c(param_1,0), lVar10 != 0)) &&
       (FUN_03d79e3c(lVar10,0,lVar15,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                    ), lVar15 != 0)) {
      if (0 < *(int *)(lVar15 + 0x18)) {
        lVar10 = FUN_06e5502c(param_1,0);
        if (lVar10 == 0) goto LAB_07152d78;
        FUN_03d79e3c(lVar10,0,lVar9,*(undefined8 *)IngameDebugConsole_ConsoleMethodAttribute_var);
        puVar8 = 
        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
        ;
        puVar5 = Oisoi_UI_Notifications_NotificationController_TypeInfo;
        puVar4 = PTR_DAT_076361f0;
        iVar1 = *(int *)(lVar15 + 0x18);
joined_r0x07152be4:
        iVar1 = iVar1 + -1;
        if (-1 < iVar1) {
          plVar11 = (long *)FUN_047af170(lVar15,iVar1,*(undefined8 *)puVar5);
          if (plVar11 == (long *)0x0) goto LAB_07152d78;
          uVar12 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
          if ((uVar12 & 1) != 0) {
            if (lVar9 == 0) goto LAB_07152d78;
            iVar2 = *(int *)(lVar9 + 0x18);
            do {
              do {
                iVar2 = iVar2 + -1;
                if (iVar2 < 0) {
                  uVar13 = FUN_047af170(lVar15,iVar1,*(undefined8 *)puVar5);
                  lVar10 = *(long *)(param_2 + 0x10);
                  lVar16 = *(long *)puVar8;
                  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_07152d78;
                  uVar3 = *(uint *)(param_2 + 0x18);
                  if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(param_2 + 0x18) = uVar3 + 1;
                    *(undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20) = uVar13;
                    thunk_FUN_0329bf60();
                  }
                  else {
                    FUN_047af440(param_2,uVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  goto joined_r0x07152be4;
                }
                lVar10 = FUN_047af170(lVar9,iVar2,*(undefined8 *)puVar4);
                if (lVar10 == 0) goto LAB_07152d78;
                uVar13 = FUN_06e5502c(lVar10,0);
                lVar10 = FUN_047af170(lVar15,iVar1,*(undefined8 *)puVar5);
                if (lVar10 == 0) goto LAB_07152d78;
                uVar14 = FUN_06e5502c(lVar10,0);
                uVar12 = FUN_071528c0(uVar13,uVar14);
              } while ((uVar12 & 1) != 0);
              lVar10 = FUN_047af170(lVar9,iVar2,*(undefined8 *)puVar4);
              if (lVar10 == 0) goto LAB_07152d78;
              uVar12 = FUN_0713d86c(lVar10,0);
            } while ((uVar12 & 1) == 0);
          }
          goto joined_r0x07152be4;
        }
      }
      puVar4 = 
      UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
      ;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      puVar6 = OVRMeshRenderer_TypeInfo;
      FUN_054e0394(lVar15,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_054e0394(lVar9,*(undefined8 *)puVar6);
      return;
    }
  }
LAB_07152d78:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


