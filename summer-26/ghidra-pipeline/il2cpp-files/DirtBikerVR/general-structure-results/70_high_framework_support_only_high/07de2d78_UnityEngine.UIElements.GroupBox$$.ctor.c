/*
FUNCTION_NAME: UnityEngine.UIElements.GroupBox$$.ctor
ENTRY_POINT: 07de2d78
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_UIElements_GroupBox___ctor(void)

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
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar12;
  undefined1 uStack0000000000000054;
  undefined1 uStack000000000000009c;
  long in_stack_000000a8;
  
  FUN_03a8a718();
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
  *(undefined1 *)(unaff_x21 + 0x172) = 1;
  iVar4 = *(int *)(*unaff_x20 + 0xe4);
  uStack0000000000000054 = 0;
  uStack000000000000009c = 1;
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  if (iVar4 == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = FUN_07f5e260(0);
  puVar8 = OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_TypeInfo;
  puVar7 = OVRInput_OVRControllerLHand_TypeInfo;
  if (*(long *)(in_stack_000000a8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar5 = *(int *)(*(long *)(in_stack_000000a8 + 0x10) + 0x18);
  iVar4 = 0;
  if (*(int *)(in_stack_000000a8 + 0x34) + 1 < iVar5) {
    iVar4 = *(int *)(in_stack_000000a8 + 0x34) + 1;
  }
  if (0 < iVar5) {
    iVar12 = 0;
    do {
      iVar6 = 0;
      if (iVar5 <= iVar4 + iVar12) {
        iVar6 = iVar5;
      }
      if (*(long *)(in_stack_000000a8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar6 = (iVar4 + iVar12) - iVar6;
      plVar10 = (long *)FUN_04de82e0(*(long *)(in_stack_000000a8 + 0x10),iVar6,*(undefined8 *)puVar8
                                    );
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
        if (*(long *)(in_stack_000000a8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar11 = FUN_049d96b4(*(long *)(in_stack_000000a8 + 0x28),plVar10,*(undefined8 *)puVar7);
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
        if (*(long *)(in_stack_000000a8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar11 = FUN_049d96b4(*(long *)(in_stack_000000a8 + 0x28),plVar10,*(undefined8 *)puVar7);
        if ((uVar11 & 1) == 0) {
          UnityEngine_UIElements_GenericDropdownMenu_MenuItem___ctor(in_stack_000000a8,plVar10);
        }
      }
      iVar12 = iVar12 + 1;
      *(int *)(in_stack_000000a8 + 0x34) = iVar6;
    } while (iVar5 != iVar12);
  }
  FUN_03a77bb8();
  return;
}


