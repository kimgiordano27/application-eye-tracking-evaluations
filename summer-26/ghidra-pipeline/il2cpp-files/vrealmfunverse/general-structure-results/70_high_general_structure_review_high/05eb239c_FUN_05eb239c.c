/*
FUNCTION_NAME: FUN_05eb239c
ENTRY_POINT: 05eb239c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


long FUN_05eb239c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_SimulatedHandExpression_OnActionPerformed__
  ;
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_XRDepthMotionPass_<>c__DisplayClass20_0_<Render>b__0__;
  if ((DAT_066dc93e & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_Universal_XRDepthMotionPass_<>c__DisplayClass20_0_<Render>b__0__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_<_cctor>b__337_0__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_<Start>b__1_0__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_OnBeforeRender__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_<FindJointsFromRoot>b__1__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_SimulatedHandExpression_OnActionPerformed__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<EntryProcessor>_get_Item__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(PTR_DAT_0632be10);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_0__
                );
    FUN_02b3c81c(PTR_DAT_0632ad78);
    FUN_02b3c81c(PTR_DAT_0632ad80);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                );
    DAT_066dc93e = 1;
  }
  puVar4 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__;
  puVar1 = PTR_DAT_0632ad80;
  lVar5 = FUN_02b3c908(*(undefined8 *)puVar2,4);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  uVar9 = *(undefined8 *)puVar4;
  uVar10 = *(undefined8 *)puVar1;
  lVar11 = puVar8[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_<_cctor>b__337_0__
                               );
    FUN_049c2254(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_<Start>b__1_0__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar11;
    thunk_FUN_02bb0e9c(plVar6,lVar11);
    lVar7 = *(long *)puVar3;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_System_Collections_IEnumerator_Reset__
  ;
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  lVar13 = puVar8[2];
  if (lVar13 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                               );
    FUN_042b2190(lVar13,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_OnBeforeRender__
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar6 = lVar13;
    thunk_FUN_02bb0e9c(plVar6,lVar13);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  System_Collections_Generic_HashSet<OVRSceneManager_Metrics>__Initialize
            (&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
  puVar4 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_0__;
  puVar1 = PTR_DAT_0632ad78;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x28) = uStack_68;
    *(undefined8 *)(lVar5 + 0x20) = local_70;
    *(undefined8 *)(lVar5 + 0x38) = uStack_58;
    *(undefined8 *)(lVar5 + 0x30) = uStack_60;
    thunk_FUN_02bb0e9c(lVar5 + 0x20,0);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar7 = *(long *)puVar3;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    uVar9 = *(undefined8 *)puVar4;
    uVar10 = *(undefined8 *)puVar1;
    lVar11 = puVar8[3];
    if (lVar11 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_<_cctor>b__337_0__
                                 );
      FUN_049c2254(lVar11,uVar12,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_CheckConditionBursted__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *plVar6 = lVar11;
      thunk_FUN_02bb0e9c(plVar6,lVar11);
      lVar7 = *(long *)puVar3;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar7 = *(long *)puVar3;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    lVar13 = puVar8[4];
    if (lVar13 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                                 );
      FUN_042b2190(lVar13,uVar12,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition_GetReferenceDirection__
                   ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
      *plVar6 = lVar13;
      thunk_FUN_02bb0e9c(plVar6,lVar13);
    }
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    System_Collections_Generic_HashSet<OVRSceneManager_Metrics>__Initialize
              (&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
    puVar4 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
    ;
    puVar1 = Method_System_Collections_Generic_List<EntryProcessor>_get_Item__;
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar5 + 0x48) = uStack_68;
      *(undefined8 *)(lVar5 + 0x40) = local_70;
      *(undefined8 *)(lVar5 + 0x58) = uStack_58;
      *(undefined8 *)(lVar5 + 0x50) = uStack_60;
      thunk_FUN_02bb0e9c(lVar5 + 0x40,0);
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar3;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      uVar9 = *(undefined8 *)puVar4;
      uVar10 = *(undefined8 *)puVar1;
      lVar11 = puVar8[5];
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar12 = *puVar8;
        lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_<_cctor>b__337_0__
                                   );
        FUN_049c2254(lVar11,uVar12,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_CheckConditionBursted__
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
        *plVar6 = lVar11;
        thunk_FUN_02bb0e9c(plVar6,lVar11);
        lVar7 = *(long *)puVar3;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar3;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      lVar13 = puVar8[6];
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar12 = *puVar8;
        lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                                   );
        FUN_042b2190(lVar13,uVar12,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_UserCondition_GetReferenceDirection__
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *plVar6 = lVar13;
        thunk_FUN_02bb0e9c(plVar6,lVar13);
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      System_Collections_Generic_HashSet<OVRSceneManager_Metrics>__Initialize
                (&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
      puVar4 = 
      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_System_Collections_IEnumerator_Reset__
      ;
      puVar1 = PTR_DAT_0632be10;
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x68) = uStack_68;
        *(undefined8 *)(lVar5 + 0x60) = local_70;
        *(undefined8 *)(lVar5 + 0x78) = uStack_58;
        *(undefined8 *)(lVar5 + 0x70) = uStack_60;
        thunk_FUN_02bb0e9c(lVar5 + 0x60,0);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar7 = *(long *)puVar3;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0xb8);
        uVar9 = *(undefined8 *)puVar4;
        uVar10 = *(undefined8 *)puVar1;
        lVar11 = puVar8[7];
        if (lVar11 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_<>c_<_cctor>b__337_0__
                                     );
          FUN_049c2254(lVar11,uVar12,
                       *(undefined8 *)
                        Method_UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_<FindJointsFromRoot>b__1__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          *plVar6 = lVar11;
          thunk_FUN_02bb0e9c(plVar6,lVar11);
          lVar7 = *(long *)puVar3;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar7 = *(long *)puVar3;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0xb8);
        lVar13 = puVar8[8];
        if (lVar13 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                                     );
          FUN_042b2190(lVar13,uVar12,
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
          *plVar6 = lVar13;
          thunk_FUN_02bb0e9c(plVar6,lVar13);
        }
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        System_Collections_Generic_HashSet<OVRSceneManager_Metrics>__Initialize
                  (&local_70,uVar10,uVar9,lVar11,lVar13,*(undefined8 *)puVar2);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar5 + 0x88) = uStack_68;
          *(undefined8 *)(lVar5 + 0x80) = local_70;
          *(undefined8 *)(lVar5 + 0x98) = uStack_58;
          *(undefined8 *)(lVar5 + 0x90) = uStack_60;
          thunk_FUN_02bb0e9c(lVar5 + 0x80,0);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


