/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup$$add_registered
ENTRY_POINT: 05a13cc0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__add_registered
               (long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 05a13c9c with catch @ 05a13cc8 */
                    /* try { // try from 05a13ccc to 05b13cd3 has its CatchHandler @ 05a13cf0 */
  *param_2 = **(undefined8 **)(*(long *)(param_1 + 0x90) + 0xb8);
  thunk_FUN_02bb0e9c();
                    /* try { // try from 05a13cd4 to 05b13cf3 has its CatchHandler @ 05a13930 */
  iVar4 = FUN_05c96dc4(0);
  bVar3 = 1;
  if (iVar4 != 1) {
    lVar6 = thunk_FUN_05c96d00(0);
    if (lVar6 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05a13ccc with catch @ 05a13cf0
                        */
    uVar7 = FUN_04c0ec28(lVar6,*(undefined8 *)
                                Method_UnityEngine_Component_GetComponentInChildren<Toggle>__,0);
    if ((uVar7 & 1) == 0) {
      lVar6 = thunk_FUN_05c96d00(0);
      if (lVar6 == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      bVar3 = FUN_04c0ec28(lVar6,*(undefined8 *)
                                  Method_UnityEngine_Component_GetComponentInChildren<Text>__,0);
    }
    else {
      bVar3 = 1;
    }
  }
  puVar1 = PTR_DAT_06312d60;
  *(byte *)(unaff_x19 + 0x2a8) = bVar3 & 1;
  lVar6 = FUN_03172a30();
  if (lVar6 == 0) {
    *(undefined1 *)(unaff_x19 + 0x150) = 0;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x150) = 1;
    uVar8 = FUN_03172a30();
    *(undefined8 *)(unaff_x19 + 0x158) = uVar8;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x158,uVar8);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = PTR_DAT_06312520;
  uVar7 = FUN_05c3c794(0);
  if ((uVar7 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x248);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8e378(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x128);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_05c8c45c(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
        uVar8 = *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<Renderer>__;
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
        }
        lVar6 = FUN_04d8a7b0(uVar8,0);
        if (plVar9 == (long *)0x0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
          uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar8,0);
        }
        if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar9[4] = lVar6;
        thunk_FUN_02bb0e9c(plVar9 + 4,lVar6);
        lVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312cb0);
        FUN_05c8d6c0(lVar6,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentInChildren<TMP_Text>__,plVar9,0
                    );
        if (lVar6 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9364c(lVar6,0x34,0);
        lVar10 = FUN_05c8c8e0(lVar6,0);
        if (((*(long *)(unaff_x19 + 0x128) == 0) ||
            (lVar11 = FUN_05a1fc08(*(long *)(unaff_x19 + 0x128),0), lVar11 == 0)) ||
           (uVar8 = thunk_FUN_05c9c9cc(lVar11,0), lVar10 == 0))
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05c9ca60(lVar10,uVar8,0);
        lVar10 = FUN_05c8c8e0(lVar6,0);
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
        FUN_05c8ca64(lVar6,uVar5,0);
        uVar8 = FUN_031d80b0(lVar6,*(undefined8 *)PTR_DAT_063132e8);
        *(undefined8 *)(unaff_x19 + 0x238) = uVar8;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x238,uVar8);
        uVar8 = FUN_031d80b0(lVar6,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__
                            );
        *(undefined8 *)(unaff_x19 + 0x248) = uVar8;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x248,uVar8);
        lVar10 = *(long *)(unaff_x19 + 0x248);
        if (*(int *)(*(long *)
                      Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__ +
                    0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar8 = FUN_05d9077c(0);
        uVar12 = FUN_05c69330(0);
        if (lVar10 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        FUN_05f6bccc(lVar10,uVar8,uVar12,0);
        plVar9 = (long *)FUN_031d8020(lVar6,*(undefined8 *)
                                             Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
        if (plVar9 == (long *)0x0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
        ;
        (**(code **)(*plVar9 + 0x2f8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x300));
        FUN_05a1436c();
      }
    }
  }
  uVar8 = FUN_03172a30();
  *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar8);
  lVar6 = FUN_03173748();
  if (lVar6 == 0)
  goto 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
  ;
  if (1 < *(int *)(lVar6 + 0x18)) {
    plVar9 = *(long **)(lVar6 + 0x28);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x160) = 0;
    }
    else {
      lVar6 = *(long *)Method_UnityEngine_Component_GetComponentInChildren<LODGroup>__;
      bVar3 = *(byte *)(lVar6 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar3) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != lVar6) {
          plVar13 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x160) = plVar13;
      if (*(byte *)(*plVar9 + 0x130) < bVar3) {
        plVar9 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != lVar6) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_02bb0e9c(unaff_x19 + 0x160,plVar9);
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8c45c(uVar8,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x110) == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    uVar8 = FUN_03172a30(*(long *)(unaff_x19 + 0x110),
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponentInChildren<FullBodyBipedIK>__);
    *(undefined8 *)(unaff_x19 + 0x120) = uVar8;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x120,uVar8);
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x248);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8c45c(uVar8,0,0);
  if ((uVar7 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x248);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__ + 0xe4
                ) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_05d9077c(0);
    uVar12 = FUN_05c69330(0);
    if (lVar6 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05f6bccc(lVar6,uVar8,uVar12,0);
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x128);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8c45c(uVar8,0,0);
  puVar2 = PTR_DAT_06314180;
  if ((uVar7 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x128);
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314180);
    FUN_05ca234c();
    if (lVar6 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05d93c28(lVar6,uVar8,0);
    lVar6 = *(long *)(unaff_x19 + 0x128);
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_05ca234c();
    if (lVar6 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
    ;
    FUN_05d93c28(lVar6,uVar8,0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8c45c(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x140) == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x140) + 0x118);
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313958);
      FUN_0409d0a4();
      if (lVar6 == 0)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
      ;
      FUN_040a0f88(lVar6,uVar8,*(undefined8 *)PTR_DAT_06313960);
    }
    FUN_05a11c34();
  }
  puVar2 = UnityEngine_XR_InputFeatureUsage<Vector2>___TypeInfo;
  puVar1 = Oculus_Interaction_Input_IOneEuroFilter<Vector3>___TypeInfo;
  bVar3 = FUN_05c989e0(0);
  lVar6 = *(long *)puVar1;
  iVar4 = *(int *)(lVar6 + 0xe4);
  *(byte *)(unaff_x19 + 0x299) = bVar3 & 1;
  if (iVar4 == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x58);
  uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03fbf2e8();
  if (lVar6 != 0) {
    FUN_0498a290(lVar6,uVar8,
                 *(undefined8 *)System_Collections_Generic_KeyValuePair<byte[],_Encoding>___TypeInfo
                );
    return;
  }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


