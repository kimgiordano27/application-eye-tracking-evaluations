/*
FUNCTION_NAME: FUN_063d1708
ENTRY_POINT: 063d1708
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_063d1708(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_06a0d208;
  if ((DAT_06dcc46b & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0edf8);
    FUN_02d965b8(PTR_DAT_06a0d208);
    FUN_02d965b8(Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_OnStart__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceChange__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceConfigChanged__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceConnected__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceDisconnected__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_SetLeftMode__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_SetRightMode__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<int>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<float>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<Vector2>__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ActivatedClickBehavior>b__87_0__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<SelectedClickBehavior>b__86_0__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume_OnFirstSelectEntered__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume_OnLastSelectExited__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_AddGroupMember__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GetGroupMembers__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_MoveGroupMemberTo__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractableHover__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractableSelection__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractorHover__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractorSelection__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_ClearInteractorHover__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnKeyboardXTranslateAction__
                );
    DAT_06dcc46b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnKeyboardXTranslateAction__
  ;
  puVar1 = PTR_DAT_069fb9c0;
  lVar9 = *(long *)(PTR_DAT_069fb9c0 + 0x48);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x30) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_06a0edf8;
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x1a];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceConfigChanged__
                               );
    FUN_048fcc38(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ActivatedClickBehavior>b__87_0__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
    *plVar7 = lVar11;
    LeanTween__value(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x1b];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_OnStart__
                               );
    FUN_048fc864(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume_OnLastSelectExited__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
    *plVar7 = lVar11;
    LeanTween__value(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x1c];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<Vector2>__
                               );
    FUN_048fc6dc(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_AddGroupMember__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
    *plVar7 = lVar11;
    LeanTween__value(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x1d];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceDisconnected__
                               );
    FUN_048fc9ec(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GetGroupMembers__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
    *plVar7 = lVar11;
    LeanTween__value(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x1e];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceConnected__
                               );
    FUN_048fcab0(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_MoveGroupMemberTo__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
    *plVar7 = lVar11;
    LeanTween__value(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x1f];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                               );
    FUN_048fc7a0(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractableHover__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
    *plVar7 = lVar11;
    LeanTween__value(plVar7,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x20];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_SetRightMode__
                               );
    FUN_048fd01c(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractableSelection__
                 ,0);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar9 + 0x100) = lVar11;
    LeanTween__value(lVar9 + 0x100,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x21];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_SetLeftMode__
                               );
    FUN_048fd0e0(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractorHover__
                 ,0);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar9 + 0x108) = lVar11;
    LeanTween__value(lVar9 + 0x108,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x22];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<float>__
                               );
    FUN_048fd1a4(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractorSelection__
                 ,0);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar9 + 0x110) = lVar11;
    LeanTween__value(lVar9 + 0x110,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x23];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<int>__
                               );
    FUN_048fccfc(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_ClearInteractorHover__
                 ,0);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar9 + 0x118) = lVar11;
    LeanTween__value(lVar9 + 0x118,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x24];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                               );
    FUN_048fc928(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<SelectedClickBehavior>b__86_0__
                 ,0);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar9 + 0x120) = lVar11;
    LeanTween__value(lVar9 + 0x120,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar9 = *(long *)(puVar1 + 0x48);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar9 + 0x20,0);
  uVar6 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
    lVar9 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[0x25];
  uVar10 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar9);
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceChange__
                               );
    FUN_048fcb74(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume_OnFirstSelectEntered__
                 ,0);
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    *(long *)(lVar9 + 0x128) = lVar11;
    LeanTween__value(lVar9 + 0x128,lVar11);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar10,uVar5,uVar6,lVar11);
  return;
}


