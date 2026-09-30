/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor$$GetTimeToAutoDeselect
ENTRY_POINT: 05a13b2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 213
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__GetTimeToAutoDeselect
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  
  if ((DAT_066d3d2c & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_InputFeatureUsage<Vector2>___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312d60);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<Collider>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<EmeraldEvents>__);
                    /* try { // try from 05a13b80 to 05b13b8b has its CatchHandler @ 05a13c7c */
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<FullBodyBipedIK>__);
    FUN_02b3c81c(PTR_DAT_063132b0);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<GrabInteractable>__);
                    /* try { // try from 05a13ba0 to 05b13ba3 has its CatchHandler @ 05a13c74 */
    FUN_02b3c81c(System_Collections_Generic_KeyValuePair<byte[],_Encoding>___TypeInfo);
                    /* try { // try from 05a13bac to 05b13beb has its CatchHandler @ 05a13c80 */
    FUN_02b3c81c(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__);
    FUN_02b3c81c(PTR_DAT_063132e8);
    FUN_02b3c81c(PTR_DAT_06312cb0);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<LODGroup>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<LineRenderer>__);
                    /* try { // try from 05a13c0c to 05b13c13 has its CatchHandler @ 05a13c78 */
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<OVRControllerHelper>__);
                    /* try { // try from 05a13c14 to 05b13c6f has its CatchHandler @ 05a13930 */
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<VelocityEstimator>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<Renderer>__);
    FUN_02b3c81c(Oculus_Interaction_Input_IOneEuroFilter<Vector3>___TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    FUN_02b3c81c(PTR_DAT_06313958);
    FUN_02b3c81c(PTR_DAT_06314180);
    FUN_02b3c81c(PTR_DAT_06313960);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<TMP_Text>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
    DAT_066d3d2c = 1;
  }
  FUN_05f86340(param_1,0);
  if (*(long *)(param_1 + 0x210) == 0) {
    *(undefined8 *)(param_1 + 0x210) = **(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8);
    thunk_FUN_02bb0e9c();
  }
  iVar5 = FUN_05c96dc4(0);
  bVar4 = 1;
  if (iVar5 != 1) {
    lVar7 = thunk_FUN_05c96d00(0);
    if (lVar7 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    uVar8 = FUN_04c0ec28(lVar7,*(undefined8 *)
                                Method_UnityEngine_Component_GetComponentInChildren<Toggle>__,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = thunk_FUN_05c96d00(0);
      if (lVar7 == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      bVar4 = FUN_04c0ec28(lVar7,*(undefined8 *)
                                  Method_UnityEngine_Component_GetComponentInChildren<Text>__,0);
    }
    else {
      bVar4 = 1;
    }
  }
  puVar2 = Method_UnityEngine_Component_GetComponentInChildren<Collider>__;
  puVar1 = PTR_DAT_06312d60;
  *(byte *)(param_1 + 0x2a8) = bVar4 & 1;
  lVar7 = FUN_03172a30(param_1,*(undefined8 *)puVar2);
  puVar2 = Method_UnityEngine_Component_GetComponentInChildren<EmeraldEvents>__;
  if (lVar7 == 0) {
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x150) = 1;
    uVar9 = FUN_03172a30(param_1,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x158) = uVar9;
    thunk_FUN_02bb0e9c(param_1 + 0x158,uVar9);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = PTR_DAT_06312520;
  uVar8 = FUN_05c3c794(0);
  if ((uVar8 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x248);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_05c8e378(uVar9,0,0);
    if ((uVar8 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x128);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_05c8c45c(uVar9,0,0);
      if ((uVar8 & 1) != 0) {
        plVar10 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
        uVar9 = *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<Renderer>__;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
        }
        lVar7 = FUN_04d8a7b0(uVar9,0);
        if (plVar10 == (long *)0x0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        if ((lVar7 != 0) &&
           (lVar11 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
          uVar9 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar9,0);
        }
        if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar10[4] = lVar7;
        thunk_FUN_02bb0e9c(plVar10 + 4,lVar7);
        lVar7 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312cb0);
        FUN_05c8d6c0(lVar7,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentInChildren<TMP_Text>__,plVar10,
                     0);
        if (lVar7 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9364c(lVar7,0x34,0);
        lVar11 = FUN_05c8c8e0(lVar7,0);
        if (((*(long *)(param_1 + 0x128) == 0) ||
            (lVar12 = FUN_05a1fc08(*(long *)(param_1 + 0x128),0), lVar12 == 0)) ||
           (uVar9 = thunk_FUN_05c9c9cc(lVar12,0), lVar11 == 0))
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9ca60(lVar11,uVar9,0);
        lVar11 = FUN_05c8c8e0(lVar7,0);
        if (lVar11 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9df1c(lVar11,0);
        lVar11 = FUN_05c89410(param_1,0);
        if (lVar11 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        uVar6 = FUN_05c8c9b0(lVar11,0);
        FUN_05c8ca64(lVar7,uVar6,0);
        uVar9 = FUN_031d80b0(lVar7,*(undefined8 *)PTR_DAT_063132e8);
        *(undefined8 *)(param_1 + 0x238) = uVar9;
        thunk_FUN_02bb0e9c(param_1 + 0x238,uVar9);
        uVar9 = FUN_031d80b0(lVar7,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__
                            );
        *(undefined8 *)(param_1 + 0x248) = uVar9;
        thunk_FUN_02bb0e9c(param_1 + 0x248,uVar9);
        lVar11 = *(long *)(param_1 + 0x248);
        if (*(int *)(*(long *)
                      Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__ +
                    0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_05d9077c(0);
        uVar13 = FUN_05c69330(0);
        if (lVar11 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05f6bccc(lVar11,uVar9,uVar13,0);
        plVar10 = (long *)FUN_031d8020(lVar7,*(undefined8 *)
                                              Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
        if (plVar10 == (long *)0x0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        (**(code **)(*plVar10 + 0x2f8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x300));
        FUN_05a1436c(param_1);
      }
    }
  }
  puVar2 = Method_UnityEngine_Component_GetComponentInChildren<GrabInteractable>__;
  uVar9 = FUN_03172a30(param_1,*(undefined8 *)PTR_DAT_063132b0);
  *(undefined8 *)(param_1 + 0x108) = uVar9;
  thunk_FUN_02bb0e9c(param_1 + 0x108,uVar9);
  lVar7 = FUN_03173748(param_1,*(undefined8 *)puVar2);
  if (lVar7 == 0)
  goto 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
  ;
  if (1 < *(int *)(lVar7 + 0x18)) {
    plVar10 = *(long **)(lVar7 + 0x28);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    else {
      lVar7 = *(long *)Method_UnityEngine_Component_GetComponentInChildren<LODGroup>__;
      bVar4 = *(byte *)(lVar7 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar4) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != lVar7) {
          plVar14 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0x160) = plVar14;
      if (*(byte *)(*plVar10 + 0x130) < bVar4) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != lVar7) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_02bb0e9c(param_1 + 0x160,plVar10);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_05c8c45c(uVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x110) == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    uVar9 = FUN_03172a30(*(long *)(param_1 + 0x110),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponentInChildren<FullBodyBipedIK>__);
    *(undefined8 *)(param_1 + 0x120) = uVar9;
    thunk_FUN_02bb0e9c(param_1 + 0x120,uVar9);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x248);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_05c8c45c(uVar9,0,0);
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x248);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__ + 0xe4
                ) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar9 = FUN_05d9077c(0);
    uVar13 = FUN_05c69330(0);
    if (lVar7 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05f6bccc(lVar7,uVar9,uVar13,0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_05c8c45c(uVar9,0,0);
  puVar2 = PTR_DAT_06314180;
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x128);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314180);
    FUN_05ca234c(uVar9,param_1,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<LineRenderer>__,
                 0);
    if (lVar7 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05d93c28(lVar7,uVar9,0);
    lVar7 = *(long *)(param_1 + 0x128);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_05ca234c(uVar9,param_1,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<OVRHand>__,0);
    if (lVar7 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05d93c28(lVar7,uVar9,0);
    uVar9 = *(undefined8 *)(param_1 + 0x140);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_05c8c45c(uVar9,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x140) == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      lVar7 = *(long *)(*(long *)(param_1 + 0x140) + 0x118);
      uVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313958);
      FUN_0409d0a4(uVar9,param_1,
                   *(undefined8 *)Method_UnityEngine_Component_GetComponent<VelocityEstimator>__,0);
      if (lVar7 == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      FUN_040a0f88(lVar7,uVar9,*(undefined8 *)PTR_DAT_06313960);
    }
    FUN_05a11c34(param_1);
  }
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<OVRControllerHelper>__;
  puVar2 = UnityEngine_XR_InputFeatureUsage<Vector2>___TypeInfo;
  puVar1 = Oculus_Interaction_Input_IOneEuroFilter<Vector3>___TypeInfo;
  bVar4 = FUN_05c989e0(0);
  lVar7 = *(long *)puVar1;
  iVar5 = *(int *)(lVar7 + 0xe4);
  *(byte *)(param_1 + 0x299) = bVar4 & 1;
  if (iVar5 == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03fbf2e8(uVar9,param_1,*(undefined8 *)puVar3,0);
  if (lVar7 != 0) {
    FUN_0498a290(lVar7,uVar9,
                 *(undefined8 *)System_Collections_Generic_KeyValuePair<byte[],_Encoding>___TypeInfo
                );
    return;
  }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


