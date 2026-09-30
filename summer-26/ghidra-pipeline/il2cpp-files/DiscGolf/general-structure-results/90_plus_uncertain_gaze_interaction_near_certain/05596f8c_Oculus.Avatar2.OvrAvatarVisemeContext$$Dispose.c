/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarVisemeContext$$Dispose
ENTRY_POINT: 05596f8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 158
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Oculus_Avatar2_OvrAvatarVisemeContext__Dispose(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar13;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  long *plVar14;
  ulong unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x05596f8c:
  uVar3 = FUN_054f73b4(unaff_x28 + 0x20,0);
  uVar4 = FUN_05501380(unaff_x27,uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = (ulong)*(uint *)(unaff_x26 + 0x18);
    puVar7 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
    plVar14 = (long *)PTR_DAT_06a0e0a8;
    goto LAB_05597070;
  }
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                              UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var
                            );
  FUN_0552aca4(lVar5,0);
  plVar14 = (long *)PTR_DAT_06a0e0a8;
  if (in_stack_00000000 != (long *)0x0) {
    lVar6 = thunk_FUN_02db5310(*(undefined8 *)
                                (*in_stack_00000000 +
                                 (ulong)*(ushort *)
                                         (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50) *
                                 0x10 + 0x140));
    uVar3 = (**(code **)(lVar6 + 8))(in_stack_00000000,unaff_x25,lVar6);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x10) = uVar3;
      LeanTween__value();
      uVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ec70);
      FUN_03b78e40(uVar3,lVar5,
                   *(undefined8 *)
                    UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                   ,0);
      if (unaff_x24 != 0) {
        puVar7 = (undefined8 *)(unaff_x24 + 0x18);
        *puVar7 = uVar3;
        do {
          LeanTween__value(puVar7,uVar3);
          puVar7 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
LAB_05597198:
          do {
            do {
              do {
                if (*(int *)(*plVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar3 = FUN_0559775c(unaff_x25);
                if (unaff_x24 == 0) goto LAB_05597270;
                *(undefined8 *)(unaff_x24 + 0x10) = uVar3;
                LeanTween__value();
                if ((unaff_x22 == 0) ||
                   (plVar13 = *(long **)(unaff_x22 + 0x18), plVar13 == (long *)0x0))
                goto LAB_05597270;
                lVar5 = *plVar13;
                uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar4 != 0) {
                  piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)OVRSimpleJSON_JSONNode_Enumerator_var) {
                      puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                      goto 
                      Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative
                      ;
                    }
                    uVar4 = uVar4 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar4 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_02dd004c(plVar13,*(long *)OVRSimpleJSON_JSONNode_Enumerator_var,1);
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative:
                (*(code *)*puVar8)(plVar13,unaff_x23,unaff_x24,puVar8[1]);
                unaff_x29 = unaff_x29 + 1;
                if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x29) {
                  return;
                }
                if (*(uint *)(unaff_x19 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                if (unaff_x20 == (long *)0x0) goto LAB_05597270;
                unaff_x23 = *(undefined8 *)(unaff_x19 + unaff_x29 * 8 + 0x20);
                lVar5 = (**(code **)(*unaff_x20 + 0x788))();
                if (lVar5 == 0) goto LAB_05597270;
                if (*(int *)(lVar5 + 0x18) != 1) {
                  thunk_FUN_02dfd288(PTR_DAT_069fc178);
                  FUN_0297e1b4();
                  uVar3 = FUN_0547e2f8(0);
                  uVar9 = thunk_FUN_02dfd288(
                                            Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                                            );
                  uVar3 = FUN_055873e0(uVar9,uVar3,unaff_x23);
LAB_05597334:
                  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
                  uVar9 = thunk_FUN_02dd3144();
                  FUN_05452924(uVar9,uVar3,0);
                  uVar3 = thunk_FUN_02dfd288(Unity_Netcode_NetworkObject_SceneObject_var);
                    /* WARNING: Subroutine does not return */
                  FUN_02d96724(uVar9,uVar3);
                }
                unaff_x25 = (long *)FUN_03610fb8(lVar5,*puVar7);
                unaff_x24 = thunk_FUN_02dd3144(*unaff_x21);
                FUN_0552aca4(unaff_x24,0);
                if (unaff_x25 == (long *)0x0) goto LAB_05597270;
                iVar2 = (**(code **)(*unaff_x25 + 0x1f8))
                                  (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x200));
                if (iVar2 == 0x10) {
LAB_05596e40:
                  if (*(int *)(*plVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar4 = FUN_0559747c(unaff_x25,0);
                  if ((uVar4 & 1) != 0) {
                    if ((in_stack_00000000 == (long *)0x0) ||
                       (uVar3 = FUN_037fd858(in_stack_00000000,unaff_x25,
                                             *(undefined8 *)
                                              LightingExampleManager_LightingConfig_var),
                       unaff_x24 == 0)) goto LAB_05597270;
                    *(undefined8 *)(unaff_x24 + 0x18) = uVar3;
                    LeanTween__value();
                  }
                  if (*(int *)(*plVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar4 = FUN_055975c8(unaff_x25,0,0);
                  if ((uVar4 & 1) != 0) {
                    if ((in_stack_00000000 == (long *)0x0) ||
                       (uVar3 = FUN_037fdc08(in_stack_00000000,unaff_x25,
                                             *(undefined8 *)
                                              UnityEngine_UIElements_ListViewDragger_DragPosition_var
                                            ), unaff_x24 == 0)) goto LAB_05597270;
                    *(undefined8 *)(unaff_x24 + 0x20) = uVar3;
                    LeanTween__value();
                  }
                  goto LAB_05597198;
                }
                if (iVar2 != 8) {
                  if (iVar2 != 4) {
                    thunk_FUN_02dfd288(PTR_DAT_069fc178);
                    FUN_0297e1b4();
                    uVar3 = FUN_0547e2f8(0);
                    in_stack_00000008._4_4_ = FUN_05597464(unaff_x25);
                    uVar9 = thunk_FUN_02dfd288(
                                              Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                                              );
                    uVar9 = thunk_FUN_02dd2d7c(uVar9,(long)&stack0x00000008 + 4);
                    FUN_02979e58(unaff_x25);
                    uVar10 = (**(code **)(*unaff_x25 + 0x208))
                                       (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x210));
                    uVar11 = thunk_FUN_02dfd288(
                                               Unity_Netcode_NetworkMessageManager_MessageWithHandler_var
                                               );
                    uVar3 = FUN_05588558(uVar11,uVar3,uVar9,uVar10);
                    goto LAB_05597334;
                  }
                  goto LAB_05596e40;
                }
                bVar1 = *(byte *)(*(long *)PTR_DAT_06a12d50 + 0x130);
                if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_06a12d50)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(unaff_x25);
                }
                uVar4 = FUN_0541facc(unaff_x25,0);
              } while ((uVar4 & 1) == 0);
              unaff_x26 = (**(code **)(*unaff_x25 + 0x2c8))
                                    (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2d0));
              if (unaff_x26 == 0) goto LAB_05597270;
              uVar4 = *(ulong *)(unaff_x26 + 0x18);
              if (uVar4 == 0) {
                unaff_x27 = (**(code **)(*unaff_x25 + 0x498))
                                      (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0));
                unaff_x28 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
                }
                goto code_r0x05596f8c;
              }
LAB_05597070:
            } while ((int)uVar4 != 1);
            uVar3 = (**(code **)(*unaff_x25 + 0x498))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0))
            ;
            lVar5 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
            }
            uVar9 = FUN_054f73b4(lVar5 + 0x20,0);
            uVar4 = FUN_055006dc(uVar3,uVar9,0);
            puVar7 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
          } while ((uVar4 & 1) == 0);
          lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                                    );
          FUN_0552aca4(lVar5,0);
          if (in_stack_00000000 == (long *)0x0) break;
          lVar6 = thunk_FUN_02db5310(*(undefined8 *)
                                      (*in_stack_00000000 +
                                       (ulong)*(ushort *)
                                               (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50)
                                       * 0x10 + 0x140));
          uVar3 = (**(code **)(lVar6 + 8))(in_stack_00000000,unaff_x25,lVar6);
          if (lVar5 == 0) break;
          *(undefined8 *)(lVar5 + 0x10) = uVar3;
          LeanTween__value();
          uVar3 = thunk_FUN_02dd3144(*(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var);
          FUN_04ccbc10(uVar3,lVar5,
                       *(undefined8 *)Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var,
                       0);
          if (unaff_x24 == 0) break;
          puVar7 = (undefined8 *)(unaff_x24 + 0x20);
          *puVar7 = uVar3;
        } while( true );
      }
    }
  }
LAB_05597270:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


