/*
FUNCTION_NAME: FUN_07de2d20
ENTRY_POINT: 07de2d20
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_07de2d20(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined8 local_100;
  long *plStack_f8;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_64 [4];
  long local_58;
  
  puVar7 = PTR_DAT_08496110;
  local_58 = param_1;
  if ((DAT_0899a172 & 1) == 0) {
    FUN_03a8a718(OVRLocatable_TrackingSpacePose_TypeInfo);
    FUN_03a8a718(OVRManager_<>c_TypeInfo);
    FUN_03a8a718(OVRManager_CompositionMethod_TypeInfo);
    FUN_03a8a718(OVRManager_EventListener_TypeInfo);
    FUN_03a8a718(OVRManager_MrcCameraType_TypeInfo);
    FUN_03a8a718(OVRManager_PassthroughCapabilities_TypeInfo);
    FUN_03a8a718(OVRManager_SystemHeadsetType_TypeInfo);
    FUN_03a8a718(OVRInput_OVRControllerLHand_TypeInfo);
    FUN_03a8a718(OVRManager_XrApi_TypeInfo);
    FUN_03a8a718(OVRMesh_IOVRMeshDataProvider_TypeInfo);
    FUN_03a8a718(OVRMeshRenderer_IOVRMeshRendererDataProvider_TypeInfo);
    FUN_03a8a718(OVRMicrogestureEventSource_<>c_TypeInfo);
    FUN_03a8a718(OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_TypeInfo);
    FUN_03a8a718(PTR_DAT_08496110);
    DAT_0899a172 = 1;
  }
  plStack_f8 = &local_58;
  puStack_e8 = &uStack_88;
  local_100 = 0;
  local_f0 = &local_80;
  local_e0 = &local_a0;
  puStack_d8 = &local_a8;
  local_d0 = local_64;
  puStack_c8 = local_ac;
  local_c0 = &local_b8;
  local_b8 = 0;
  iVar4 = *(int *)(*(long *)puVar7 + 0xe4);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_ac[0] = 0;
  local_64[0] = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (iVar4 == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = FUN_07f5e260(0);
  puVar8 = OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_TypeInfo;
  puVar7 = OVRInput_OVRControllerLHand_TypeInfo;
  if (*(long *)(local_58 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar5 = *(int *)(*(long *)(local_58 + 0x10) + 0x18);
  iVar4 = 0;
  if (*(int *)(local_58 + 0x34) + 1 < iVar5) {
    iVar4 = *(int *)(local_58 + 0x34) + 1;
  }
  if (0 < iVar5) {
    iVar12 = 0;
    do {
      iVar6 = 0;
      if (iVar5 <= iVar4 + iVar12) {
        iVar6 = iVar5;
      }
      if (*(long *)(local_58 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar6 = (iVar4 + iVar12) - iVar6;
      plVar10 = (long *)FUN_04de82e0(*(long *)(local_58 + 0x10),iVar6,*(undefined8 *)puVar8);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar1 = plVar10[3];
      if (lVar9 - plVar10[4] < lVar1) {
LAB_07de2f48:
        if ((0 < plVar10[6]) && (plVar10[6] < lVar9)) goto LAB_07de2f5c;
      }
      else {
        if (*(long *)(local_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar11 = FUN_049d96b4(*(long *)(local_58 + 0x28),plVar10,*(undefined8 *)puVar7);
        if ((uVar11 & 1) == 0) {
          (**(code **)(*plVar10 + 0x178))(plVar10,lVar1,lVar9,*(undefined8 *)(*plVar10 + 0x180));
        }
        pcVar2 = *(code **)(*plVar10 + 0x198);
        uVar3 = *(undefined8 *)(*plVar10 + 0x1a0);
        plVar10[3] = lVar9;
        plVar10[4] = plVar10[5];
        uVar11 = (*pcVar2)(plVar10,uVar3);
        if ((uVar11 & 1) == 0) goto LAB_07de2f48;
LAB_07de2f5c:
        if (*(long *)(local_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar11 = FUN_049d96b4(*(long *)(local_58 + 0x28),plVar10,*(undefined8 *)puVar7);
        if ((uVar11 & 1) == 0) {
          UnityEngine_UIElements_GenericDropdownMenu_MenuItem___ctor(local_58,plVar10);
        }
      }
      iVar12 = iVar12 + 1;
      *(int *)(local_58 + 0x34) = iVar6;
    } while (iVar5 != iVar12);
  }
  FUN_03a77bb8(&local_100);
  return;
}


