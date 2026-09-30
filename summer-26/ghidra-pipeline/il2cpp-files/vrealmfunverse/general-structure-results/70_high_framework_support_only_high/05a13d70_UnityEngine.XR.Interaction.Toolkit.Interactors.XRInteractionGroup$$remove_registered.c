/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup$$remove_registered
ENTRY_POINT: 05a13d70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__remove_registered(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x19;
  long *unaff_x20;
  
  uVar6 = FUN_03172a30();
  *(undefined8 *)(unaff_x19 + 0x158) = uVar6;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x158,uVar6);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar2 = PTR_DAT_06312520;
  uVar7 = FUN_05c3c794(0);
  if ((uVar7 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x248);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8e378(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x128);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_05c8c45c(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
        uVar6 = *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<Renderer>__;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
        }
        lVar9 = FUN_04d8a7b0(uVar6,0);
        if (plVar8 == (long *)0x0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
          uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar6,0);
        }
        if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar8[4] = lVar9;
        thunk_FUN_02bb0e9c(plVar8 + 4,lVar9);
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312cb0);
        FUN_05c8d6c0(lVar9,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentInChildren<TMP_Text>__,plVar8,0
                    );
        if (lVar9 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9364c(lVar9,0x34,0);
        lVar10 = FUN_05c8c8e0(lVar9,0);
        if (((*(long *)(unaff_x19 + 0x128) == 0) ||
            (lVar11 = FUN_05a1fc08(*(long *)(unaff_x19 + 0x128),0), lVar11 == 0)) ||
           (uVar6 = thunk_FUN_05c9c9cc(lVar11,0), lVar10 == 0))
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9ca60(lVar10,uVar6,0);
        lVar10 = FUN_05c8c8e0(lVar9,0);
        if (lVar10 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9df1c(lVar10,0);
        lVar10 = FUN_05c89410();
        if (lVar10 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        uVar5 = FUN_05c8c9b0(lVar10,0);
        FUN_05c8ca64(lVar9,uVar5,0);
        uVar6 = FUN_031d80b0(lVar9,*(undefined8 *)PTR_DAT_063132e8);
        *(undefined8 *)(unaff_x19 + 0x238) = uVar6;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x238,uVar6);
        uVar6 = FUN_031d80b0(lVar9,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__
                            );
        *(undefined8 *)(unaff_x19 + 0x248) = uVar6;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x248,uVar6);
        lVar10 = *(long *)(unaff_x19 + 0x248);
        if (*(int *)(*(long *)
                      Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__ +
                    0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar6 = FUN_05d9077c(0);
        uVar12 = FUN_05c69330(0);
        if (lVar10 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05f6bccc(lVar10,uVar6,uVar12,0);
        plVar8 = (long *)FUN_031d8020(lVar9,*(undefined8 *)
                                             Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
        if (plVar8 == (long *)0x0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        (**(code **)(*plVar8 + 0x2f8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x300));
        FUN_05a1436c();
      }
    }
  }
  uVar6 = FUN_03172a30();
  *(undefined8 *)(unaff_x19 + 0x108) = uVar6;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar6);
  lVar9 = FUN_03173748();
  if (lVar9 == 0)
  goto 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
  ;
  if (1 < *(int *)(lVar9 + 0x18)) {
    plVar8 = *(long **)(lVar9 + 0x28);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x160) = 0;
    }
    else {
      lVar9 = *(long *)Method_UnityEngine_Component_GetComponentInChildren<LODGroup>__;
      bVar4 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar4) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar8;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) != lVar9) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x160) = plVar13;
      if (*(byte *)(*plVar8 + 0x130) < bVar4) {
        plVar8 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) != lVar9) {
        plVar8 = (long *)0x0;
      }
    }
    thunk_FUN_02bb0e9c(unaff_x19 + 0x160,plVar8);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8c45c(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x110) == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    uVar6 = FUN_03172a30(*(long *)(unaff_x19 + 0x110),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponentInChildren<FullBodyBipedIK>__);
    *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x120,uVar6);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x248);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8c45c(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x248);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__ + 0xe4
                ) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar6 = FUN_05d9077c(0);
    uVar12 = FUN_05c69330(0);
    if (lVar9 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05f6bccc(lVar9,uVar6,uVar12,0);
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x128);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8c45c(uVar6,0,0);
  puVar3 = PTR_DAT_06314180;
  if ((uVar7 & 1) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x128);
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314180);
    FUN_05ca234c();
    if (lVar9 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05d93c28(lVar9,uVar6,0);
    lVar9 = *(long *)(unaff_x19 + 0x128);
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_05ca234c();
    if (lVar9 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05d93c28(lVar9,uVar6,0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8c45c(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x140) == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x140) + 0x118);
      uVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313958);
      FUN_0409d0a4();
      if (lVar9 == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      FUN_040a0f88(lVar9,uVar6,*(undefined8 *)PTR_DAT_06313960);
    }
    FUN_05a11c34();
  }
  puVar3 = UnityEngine_XR_InputFeatureUsage<Vector2>___TypeInfo;
  puVar2 = Oculus_Interaction_Input_IOneEuroFilter<Vector3>___TypeInfo;
  bVar4 = FUN_05c989e0(0);
  lVar9 = *(long *)puVar2;
  iVar1 = *(int *)(lVar9 + 0xe4);
  *(byte *)(unaff_x19 + 0x299) = bVar4 & 1;
  if (iVar1 == 0) {
    thunk_FUN_02b9ad44();
    lVar9 = *(long *)puVar2;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x58);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03fbf2e8();
  if (lVar9 != 0) {
    FUN_0498a290(lVar9,uVar6,
                 *(undefined8 *)System_Collections_Generic_KeyValuePair<byte[],_Encoding>___TypeInfo
                );
    return;
  }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


