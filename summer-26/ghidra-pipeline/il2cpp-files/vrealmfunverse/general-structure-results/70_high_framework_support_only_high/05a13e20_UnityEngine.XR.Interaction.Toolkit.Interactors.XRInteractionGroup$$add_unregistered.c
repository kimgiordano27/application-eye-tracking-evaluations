/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup$$add_unregistered
ENTRY_POINT: 05a13e20
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__add_unregistered
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long in_x9;
  long *plVar12;
  long unaff_x19;
  undefined8 uVar13;
  long *unaff_x21;
  long *unaff_x23;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x310) + 0xe0);
  uVar13 = **(undefined8 **)(in_x9 + 0x5c0);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar11);
  }
  lVar11 = FUN_04d8a7b0(uVar13,0);
  if (unaff_x21 != (long *)0x0) {
    if ((lVar11 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*unaff_x21 + 0x40)), lVar6 == 0)) {
      uVar13 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar13,0);
    }
    if ((int)unaff_x21[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x21[4] = lVar11;
    thunk_FUN_02bb0e9c(unaff_x21 + 4,lVar11);
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06312cb0);
    FUN_05c8d6c0(lVar11,*(undefined8 *)
                         Method_UnityEngine_Component_GetComponentInChildren<TMP_Text>__);
    if (lVar11 != 0) {
      FUN_05c9364c(lVar11,0x34,0);
      lVar6 = FUN_05c8c8e0(lVar11,0);
      if (((*(long *)(unaff_x19 + 0x128) != 0) &&
          (lVar7 = FUN_05a1fc08(*(long *)(unaff_x19 + 0x128),0), lVar7 != 0)) &&
         (uVar13 = thunk_FUN_05c9c9cc(lVar7,0), lVar6 != 0)) {
        FUN_05c9ca60(lVar6,uVar13,0);
        lVar6 = FUN_05c8c8e0(lVar11,0);
        if (lVar6 != 0) {
          FUN_05c9df1c(lVar6,0);
          lVar6 = FUN_05c89410();
          if (lVar6 != 0) {
            uVar5 = FUN_05c8c9b0(lVar6,0);
            FUN_05c8ca64(lVar11,uVar5,0);
            uVar13 = FUN_031d80b0(lVar11,*(undefined8 *)PTR_DAT_063132e8);
            *(undefined8 *)(unaff_x19 + 0x238) = uVar13;
            thunk_FUN_02bb0e9c(unaff_x19 + 0x238,uVar13);
            uVar13 = FUN_031d80b0(lVar11,*(undefined8 *)
                                          Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__
                                 );
            *(undefined8 *)(unaff_x19 + 0x248) = uVar13;
            thunk_FUN_02bb0e9c(unaff_x19 + 0x248,uVar13);
            lVar6 = *(long *)(unaff_x19 + 0x248);
            if (*(int *)(*(long *)
                          Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar13 = FUN_05d9077c(0);
            uVar8 = FUN_05c69330(0);
            if (lVar6 != 0) {
              FUN_05f6bccc(lVar6,uVar13,uVar8,0);
              plVar9 = (long *)FUN_031d8020(lVar11,*(undefined8 *)
                                                    Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x2f8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x300));
                FUN_05a1436c();
                uVar13 = FUN_03172a30();
                *(undefined8 *)(unaff_x19 + 0x108) = uVar13;
                thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar13);
                lVar11 = FUN_03173748();
                if (lVar11 != 0) {
                  if (1 < *(int *)(lVar11 + 0x18)) {
                    plVar9 = *(long **)(lVar11 + 0x28);
                    if (plVar9 == (long *)0x0) {
                      plVar9 = (long *)0x0;
                      *(undefined8 *)(unaff_x19 + 0x160) = 0;
                    }
                    else {
                      lVar11 = *(long *)
                                Method_UnityEngine_Component_GetComponentInChildren<LODGroup>__;
                      bVar4 = *(byte *)(lVar11 + 0x130);
                      if (*(byte *)(*plVar9 + 0x130) < bVar4) {
                        plVar12 = (long *)0x0;
                      }
                      else {
                        plVar12 = plVar9;
                        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != lVar11) {
                          plVar12 = (long *)0x0;
                        }
                      }
                      *(long **)(unaff_x19 + 0x160) = plVar12;
                      if (*(byte *)(*plVar9 + 0x130) < bVar4) {
                        plVar9 = (long *)0x0;
                      }
                      else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != lVar11
                              ) {
                        plVar9 = (long *)0x0;
                      }
                    }
                    thunk_FUN_02bb0e9c(unaff_x19 + 0x160,plVar9);
                  }
                  uVar13 = *(undefined8 *)(unaff_x19 + 0x110);
                  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar10 = FUN_05c8c45c(uVar13,0,0);
                  if ((uVar10 & 1) != 0) {
                    if (*(long *)(unaff_x19 + 0x110) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
                    ;
                    uVar13 = FUN_03172a30(*(long *)(unaff_x19 + 0x110),
                                          *(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentInChildren<FullBodyBipedIK>__
                                         );
                    *(undefined8 *)(unaff_x19 + 0x120) = uVar13;
                    thunk_FUN_02bb0e9c(unaff_x19 + 0x120,uVar13);
                  }
                  uVar13 = *(undefined8 *)(unaff_x19 + 0x248);
                  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar10 = FUN_05c8c45c(uVar13,0,0);
                  if ((uVar10 & 1) != 0) {
                    lVar11 = *(long *)(unaff_x19 + 0x248);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<HandGrabInteractable>__
                                + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar13 = FUN_05d9077c(0);
                    uVar8 = FUN_05c69330(0);
                    if (lVar11 == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
                    ;
                    FUN_05f6bccc(lVar11,uVar13,uVar8,0);
                  }
                  uVar13 = *(undefined8 *)(unaff_x19 + 0x128);
                  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar10 = FUN_05c8c45c(uVar13,0,0);
                  puVar2 = PTR_DAT_06314180;
                  if ((uVar10 & 1) != 0) {
                    lVar11 = *(long *)(unaff_x19 + 0x128);
                    uVar13 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314180);
                    FUN_05ca234c();
                    if (lVar11 == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
                    ;
                    FUN_05d93c28(lVar11,uVar13,0);
                    lVar11 = *(long *)(unaff_x19 + 0x128);
                    uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    FUN_05ca234c();
                    if (lVar11 == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
                    ;
                    FUN_05d93c28(lVar11,uVar13,0);
                    uVar13 = *(undefined8 *)(unaff_x19 + 0x140);
                    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar10 = FUN_05c8c45c(uVar13,0,0);
                    if ((uVar10 & 1) != 0) {
                      if (*(long *)(unaff_x19 + 0x140) == 0)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
                      ;
                      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x140) + 0x118);
                      uVar13 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313958);
                      FUN_0409d0a4();
                      if (lVar11 == 0)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers
                      ;
                      FUN_040a0f88(lVar11,uVar13,*(undefined8 *)PTR_DAT_06313960);
                    }
                    FUN_05a11c34();
                  }
                  puVar3 = UnityEngine_XR_InputFeatureUsage<Vector2>___TypeInfo;
                  puVar2 = Oculus_Interaction_Input_IOneEuroFilter<Vector3>___TypeInfo;
                  bVar4 = FUN_05c989e0(0);
                  lVar11 = *(long *)puVar2;
                  iVar1 = *(int *)(lVar11 + 0xe4);
                  *(byte *)(unaff_x19 + 0x299) = bVar4 & 1;
                  if (iVar1 == 0) {
                    thunk_FUN_02b9ad44();
                    lVar11 = *(long *)puVar2;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x58);
                  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                  FUN_03fbf2e8();
                  if (lVar11 != 0) {
                    FUN_0498a290(lVar11,uVar13,
                                 *(undefined8 *)
                                  System_Collections_Generic_KeyValuePair<byte[],_Encoding>___TypeInfo
                                );
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__set_hasRegisteredStartingMembers:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


