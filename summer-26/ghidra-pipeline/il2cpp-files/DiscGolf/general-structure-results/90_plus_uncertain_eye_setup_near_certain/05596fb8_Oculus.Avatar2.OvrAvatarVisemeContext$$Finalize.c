/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarVisemeContext$$Finalize
ENTRY_POINT: 05596fb8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrAvatarVisemeContext__Finalize(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar13;
  long *plVar14;
  ulong unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x05596fb8:
  lVar3 = thunk_FUN_02dd3144(param_1);
  FUN_0552aca4(lVar3,0);
  plVar14 = (long *)PTR_DAT_06a0e0a8;
  if (in_stack_00000000 != (long *)0x0) {
    lVar4 = thunk_FUN_02db5310(*(undefined8 *)
                                (*in_stack_00000000 +
                                 (ulong)*(ushort *)
                                         (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50) *
                                 0x10 + 0x140));
    uVar5 = (**(code **)(lVar4 + 8))(in_stack_00000000,unaff_x25,lVar4);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = uVar5;
      LeanTween__value();
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ec70);
      FUN_03b78e40(uVar5,lVar3,
                   *(undefined8 *)
                    UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                   ,0);
      if (unaff_x24 != 0) {
        puVar6 = (undefined8 *)(unaff_x24 + 0x18);
        *puVar6 = uVar5;
        do {
          LeanTween__value(puVar6,uVar5);
          puVar6 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
LAB_05597198:
          do {
            do {
              do {
                if (*(int *)(*plVar14 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar5 = FUN_0559775c(unaff_x25);
                if (unaff_x24 == 0) goto LAB_05597270;
                *(undefined8 *)(unaff_x24 + 0x10) = uVar5;
                LeanTween__value();
                if ((unaff_x22 == 0) ||
                   (plVar13 = *(long **)(unaff_x22 + 0x18), plVar13 == (long *)0x0))
                goto LAB_05597270;
                lVar3 = *plVar13;
                uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)OVRSimpleJSON_JSONNode_Enumerator_var) {
                      puVar7 = (undefined8 *)(lVar3 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                      goto 
                      Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative
                      ;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_02dd004c(plVar13,*(long *)OVRSimpleJSON_JSONNode_Enumerator_var,1);
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative:
                (*(code *)*puVar7)(plVar13,unaff_x23,unaff_x24,puVar7[1]);
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
                lVar3 = (**(code **)(*unaff_x20 + 0x788))();
                if (lVar3 == 0) goto LAB_05597270;
                if (*(int *)(lVar3 + 0x18) != 1) {
                  thunk_FUN_02dfd288(PTR_DAT_069fc178);
                  FUN_0297e1b4();
                  uVar5 = FUN_0547e2f8(0);
                  uVar8 = thunk_FUN_02dfd288(
                                            Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                                            );
                  uVar5 = FUN_055873e0(uVar8,uVar5,unaff_x23);
LAB_05597334:
                  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
                  uVar8 = thunk_FUN_02dd3144();
                  FUN_05452924(uVar8,uVar5,0);
                  uVar5 = thunk_FUN_02dfd288(Unity_Netcode_NetworkObject_SceneObject_var);
                    /* WARNING: Subroutine does not return */
                  FUN_02d96724(uVar8,uVar5);
                }
                unaff_x25 = (long *)FUN_03610fb8(lVar3,*puVar6);
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
                  uVar11 = FUN_0559747c(unaff_x25,0);
                  if ((uVar11 & 1) != 0) {
                    if ((in_stack_00000000 == (long *)0x0) ||
                       (uVar5 = FUN_037fd858(in_stack_00000000,unaff_x25,
                                             *(undefined8 *)
                                              LightingExampleManager_LightingConfig_var),
                       unaff_x24 == 0)) goto LAB_05597270;
                    *(undefined8 *)(unaff_x24 + 0x18) = uVar5;
                    LeanTween__value();
                  }
                  if (*(int *)(*plVar14 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar11 = FUN_055975c8(unaff_x25,0,0);
                  if ((uVar11 & 1) != 0) {
                    if ((in_stack_00000000 == (long *)0x0) ||
                       (uVar5 = FUN_037fdc08(in_stack_00000000,unaff_x25,
                                             *(undefined8 *)
                                              UnityEngine_UIElements_ListViewDragger_DragPosition_var
                                            ), unaff_x24 == 0)) goto LAB_05597270;
                    *(undefined8 *)(unaff_x24 + 0x20) = uVar5;
                    LeanTween__value();
                  }
                  goto LAB_05597198;
                }
                if (iVar2 != 8) {
                  if (iVar2 != 4) {
                    thunk_FUN_02dfd288(PTR_DAT_069fc178);
                    FUN_0297e1b4();
                    uVar5 = FUN_0547e2f8(0);
                    in_stack_00000008._4_4_ = FUN_05597464(unaff_x25);
                    uVar8 = thunk_FUN_02dfd288(
                                              Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                                              );
                    uVar8 = thunk_FUN_02dd2d7c(uVar8,(long)&stack0x00000008 + 4);
                    FUN_02979e58(unaff_x25);
                    uVar9 = (**(code **)(*unaff_x25 + 0x208))
                                      (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x210));
                    uVar10 = thunk_FUN_02dfd288(
                                               Unity_Netcode_NetworkMessageManager_MessageWithHandler_var
                                               );
                    uVar5 = FUN_05588558(uVar10,uVar5,uVar8,uVar9);
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
                uVar11 = FUN_0541facc(unaff_x25,0);
              } while ((uVar11 & 1) == 0);
              lVar3 = (**(code **)(*unaff_x25 + 0x2c8))
                                (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2d0));
              if (lVar3 == 0) goto LAB_05597270;
              uVar11 = *(ulong *)(lVar3 + 0x18);
              if (uVar11 == 0) {
                uVar5 = (**(code **)(*unaff_x25 + 0x498))
                                  (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0));
                lVar4 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
                }
                uVar8 = FUN_054f73b4(lVar4 + 0x20,0);
                uVar11 = FUN_05501380(uVar5,uVar8,0);
                if ((uVar11 & 1) != 0) {
                  param_1 = *(undefined8 *)
                             UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var
                  ;
                  goto code_r0x05596fb8;
                }
                uVar11 = (ulong)*(uint *)(lVar3 + 0x18);
                puVar6 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
                plVar14 = (long *)PTR_DAT_06a0e0a8;
              }
            } while ((int)uVar11 != 1);
            uVar5 = (**(code **)(*unaff_x25 + 0x498))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0))
            ;
            lVar3 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
            }
            uVar8 = FUN_054f73b4(lVar3 + 0x20,0);
            uVar11 = FUN_055006dc(uVar5,uVar8,0);
            puVar6 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
          } while ((uVar11 & 1) == 0);
          lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                                    );
          FUN_0552aca4(lVar3,0);
          if (in_stack_00000000 == (long *)0x0) break;
          lVar4 = thunk_FUN_02db5310(*(undefined8 *)
                                      (*in_stack_00000000 +
                                       (ulong)*(ushort *)
                                               (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50)
                                       * 0x10 + 0x140));
          uVar5 = (**(code **)(lVar4 + 8))(in_stack_00000000,unaff_x25,lVar4);
          if (lVar3 == 0) break;
          *(undefined8 *)(lVar3 + 0x10) = uVar5;
          LeanTween__value();
          uVar5 = thunk_FUN_02dd3144(*(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var);
          FUN_04ccbc10(uVar5,lVar3,
                       *(undefined8 *)Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var,
                       0);
          if (unaff_x24 == 0) break;
          puVar6 = (undefined8 *)(unaff_x24 + 0x20);
          *puVar6 = uVar5;
        } while( true );
      }
    }
  }
LAB_05597270:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


