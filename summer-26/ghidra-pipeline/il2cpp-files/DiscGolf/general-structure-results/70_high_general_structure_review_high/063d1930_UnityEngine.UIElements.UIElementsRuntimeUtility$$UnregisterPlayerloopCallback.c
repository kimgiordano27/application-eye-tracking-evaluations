/*
FUNCTION_NAME: UnityEngine.UIElements.UIElementsRuntimeUtility$$UnregisterPlayerloopCallback
ENTRY_POINT: 063d1930
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_13;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_UIElements_UIElementsRuntimeUtility__UnregisterPlayerloopCallback(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  uVar1 = thunk_FUN_02dd3144();
  FUN_048fcc38();
  puVar2 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0xd0);
  *puVar2 = uVar1;
  LeanTween__value(puVar2,uVar1);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x88) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x1b];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_OnStart__
                              );
    FUN_048fc864(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume_OnLastSelectExited__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0xd8);
    *plVar4 = lVar7;
    LeanTween__value(plVar4,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x28) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x1c];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<Vector2>__
                              );
    FUN_048fc6dc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_AddGroupMember__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe0);
    *plVar4 = lVar7;
    LeanTween__value(plVar4,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x38) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x1d];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceDisconnected__
                              );
    FUN_048fc9ec(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GetGroupMembers__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe8);
    *plVar4 = lVar7;
    LeanTween__value(plVar4,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x68) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x1e];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceConnected__
                              );
    FUN_048fcab0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_MoveGroupMemberTo__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf0);
    *plVar4 = lVar7;
    LeanTween__value(plVar4,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x18) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x1f];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                              );
    FUN_048fc7a0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractableHover__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf8);
    *plVar4 = lVar7;
    LeanTween__value(plVar4,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x40) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x20];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_SetRightMode__
                              );
    FUN_048fd01c(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractableSelection__
                 ,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x100) = lVar7;
    LeanTween__value(lVar5 + 0x100,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x50) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x21];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_SetLeftMode__
                              );
    FUN_048fd0e0(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractorHover__
                 ,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x108) = lVar7;
    LeanTween__value(lVar5 + 0x108,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x70) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x22];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<float>__
                              );
    FUN_048fd1a4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_CancelInteractorSelection__
                 ,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x110) = lVar7;
    LeanTween__value(lVar5 + 0x110,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x78) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x23];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputReaderUtility_SetInputProperty<int>__
                              );
    FUN_048fccfc(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_ClearInteractorHover__
                 ,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x118) = lVar7;
    LeanTween__value(lVar5 + 0x118,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x80) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x24];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                              );
    FUN_048fc928(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<SelectedClickBehavior>b__86_0__
                 ,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x120) = lVar7;
    LeanTween__value(lVar5 + 0x120,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = *(long *)(unaff_x27 + 0x48);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_054f73b4(lVar5 + 0x20,0);
  uVar3 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[0x25];
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnDeviceChange__
                              );
    FUN_048fcb74(lVar7,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume_OnFirstSelectEntered__
                 ,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x128) = lVar7;
    LeanTween__value(lVar5 + 0x128,lVar7);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_063cf60c(uVar6,uVar1,uVar3,lVar7);
  return;
}


