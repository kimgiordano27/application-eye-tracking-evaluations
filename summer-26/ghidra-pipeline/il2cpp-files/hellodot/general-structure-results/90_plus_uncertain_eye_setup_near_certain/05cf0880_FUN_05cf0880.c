/*
FUNCTION_NAME: FUN_05cf0880
ENTRY_POINT: 05cf0880
PROGRAM: hellodot-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05cf0c3c) */
/* WARNING: Removing unreachable block (ram,0x05cf0d04) */
/* WARNING: Removing unreachable block (ram,0x05cf0c74) */

long * FUN_05cf0880(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  
  puVar2 = 
  UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var;
  if ((DAT_06a7a505 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<OVRPlugin_Result>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9860);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<ResourceManager_DiagnosticEventContext>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<XRInputModalityManager_InputMode>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065db4e0);
    DAT_06a7a505 = 1;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar7 = *(long *)puVar2;
  }
  pcVar14 = *(char **)(lVar7 + 0xb8);
  if ((*pcVar14 != '\0') && ((param_2 & 1) == 0)) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      pcVar14 = *(char **)(*(long *)puVar2 + 0xb8);
    }
    if (*(long *)(pcVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04fa25cc(*(long *)(pcVar14 + 0x10),0xffffffff,0);
    lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar8 = FUN_04679480(lVar7,param_1,
                         *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      plVar10 = (long *)0x0;
LAB_05cf0a28:
      uVar6 = 2;
      plVar9 = (long *)0x0;
    }
    else {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar9 = (long *)FUN_0467920c(lVar7,param_1,
                                    *(undefined8 *)
                                     System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo
                                   );
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar10 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      if (plVar10 == (long *)0x0) {
LAB_05cf0a1c:
        plVar10 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo
                         + 0x130);
        if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_05cf0a1c;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Action<PanelWithManipulatorsStateSignaler_State>_TypeInfo) {
          plVar10 = (long *)0x0;
        }
      }
      uVar6 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      if ((plVar10 == (long *)0x0) || (((uVar6 ^ 1) & 1) != 0)) goto LAB_05cf0a28;
      uVar6 = 4;
      plVar9 = plVar10;
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_05cf0c6c;
    FUN_04fa2b28(lVar7,0);
    if ((uVar6 | 2) != 2) {
      return plVar9;
    }
    if (plVar10 != (long *)0x0) {
      return plVar10;
    }
  }
  puVar5 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
  puVar4 = System_Action<ResourceManager_DiagnosticEventContext>_TypeInfo;
  puVar3 = System_Action<OVRPlugin_Result>_TypeInfo;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
  FUN_05bbb0ac(uVar11,param_1,0);
  uVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_05bb9014(uVar12,uVar11,0,0);
  FUN_05cf3754(uVar12);
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_05bc58d4(uVar11,uVar12,0);
  lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
  FUN_05cf0e48(lVar7,uVar11);
  if ((lVar7 != 0) && (lVar13 = FUN_05cf0eb4(lVar7), lVar13 != 0)) {
    plVar10 = *(long **)(lVar13 + 0x20);
    if ((*(long *)(lVar7 + 0x28) != 0) && (0 < *(int *)(*(long *)(lVar7 + 0x28) + 0x18))) {
      uVar11 = FUN_04f772f0(0);
      FUN_028be474(lVar7);
      uVar15 = *(undefined8 *)(lVar7 + 0x28);
      FUN_028be474(uVar15);
      uVar12 = thunk_FUN_02c7737c(PTR_DAT_065d9a38);
      uVar12 = System_Collections_Generic_List<FocusController_FocusedElement>__get_Item
                         (uVar15,uVar12);
      uVar11 = FUN_04db9ed8(uVar11,uVar12,0);
      thunk_FUN_02c7737c(System_Action<BestFitAllocator_Block>_TypeInfo);
      uVar12 = thunk_FUN_02cea894();
      FUN_05cec910(uVar12,uVar11);
      uVar11 = thunk_FUN_02c7737c(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar12,uVar11);
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar7 = *(long *)puVar2;
    }
    pcVar14 = *(char **)(lVar7 + 0xb8);
    if ((*pcVar14 != '\0') && ((param_2 & 1) == 0)) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        pcVar14 = *(char **)(*(long *)puVar2 + 0xb8);
      }
      if (*(long *)(pcVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04fa2b20(*(long *)(pcVar14 + 0x10),0xffffffff,0);
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      uVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065db4e0);
      FUN_04f8b0ec(uVar11,plVar10,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04679278(lVar7,param_1,uVar11,
                   *(undefined8 *)
                    System_Action<OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>_TypeInfo
                  );
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_05cf0c6c;
      FUN_04fa2d04(lVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05cf167c();
    }
    return plVar10;
  }
LAB_05cf0c6c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


