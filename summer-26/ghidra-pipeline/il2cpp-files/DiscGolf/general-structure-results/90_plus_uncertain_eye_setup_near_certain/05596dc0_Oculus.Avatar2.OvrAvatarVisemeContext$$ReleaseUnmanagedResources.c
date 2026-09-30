/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarVisemeContext$$ReleaseUnmanagedResources
ENTRY_POINT: 05596dc0
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


void Oculus_Avatar2_OvrAvatarVisemeContext__ReleaseUnmanagedResources(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long lVar13;
  ulong unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while( true ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = (**(code **)(*unaff_x20 + 0x788))();
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) != 1) {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar6 = FUN_0547e2f8(0);
      uVar8 = thunk_FUN_02dfd288(
                                Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                                );
      uVar12 = FUN_055873e0(uVar8,uVar6,uVar12);
LAB_05597334:
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar6 = thunk_FUN_02dd3144();
      FUN_05452924(uVar6,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(Unity_Netcode_NetworkObject_SceneObject_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar12);
    }
    plVar4 = (long *)FUN_03610fb8(lVar3,*unaff_x27);
    lVar3 = thunk_FUN_02dd3144(*unaff_x26);
    FUN_0552aca4(lVar3,0);
    if (plVar4 == (long *)0x0) break;
    iVar2 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
    if (iVar2 == 0x10) {
LAB_05596e40:
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_0559747c(plVar4,0);
      if ((uVar5 & 1) != 0) {
        if ((in_stack_00000000 == (long *)0x0) ||
           (uVar6 = FUN_037fd858(in_stack_00000000,plVar4,
                                 *(undefined8 *)LightingExampleManager_LightingConfig_var),
           lVar3 == 0)) break;
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        LeanTween__value();
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_055975c8(plVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((in_stack_00000000 == (long *)0x0) ||
           (uVar6 = FUN_037fdc08(in_stack_00000000,plVar4,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_ListViewDragger_DragPosition_var),
           lVar3 == 0)) break;
        *(undefined8 *)(lVar3 + 0x20) = uVar6;
        LeanTween__value();
      }
    }
    else {
      if (iVar2 != 8) {
        if (iVar2 != 4) {
          thunk_FUN_02dfd288(PTR_DAT_069fc178);
          FUN_0297e1b4();
          uVar12 = FUN_0547e2f8(0);
          in_stack_00000008._4_4_ = FUN_05597464(plVar4);
          uVar6 = thunk_FUN_02dfd288(
                                    Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                                    );
          uVar6 = thunk_FUN_02dd2d7c(uVar6,(long)&stack0x00000008 + 4);
          FUN_02979e58(plVar4);
          uVar8 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
          uVar9 = thunk_FUN_02dfd288(Unity_Netcode_NetworkMessageManager_MessageWithHandler_var);
          uVar12 = FUN_05588558(uVar9,uVar12,uVar6,uVar8);
          goto LAB_05597334;
        }
        goto LAB_05596e40;
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_06a12d50 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a12d50))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar4);
      }
      uVar5 = FUN_0541facc(plVar4,0);
      if ((uVar5 & 1) != 0) {
        lVar10 = (**(code **)(*plVar4 + 0x2c8))(plVar4,*(undefined8 *)(*plVar4 + 0x2d0));
        if (lVar10 == 0) break;
        uVar5 = *(ulong *)(lVar10 + 0x18);
        if (uVar5 == 0) {
          uVar6 = (**(code **)(*plVar4 + 0x498))(plVar4,*(undefined8 *)(*plVar4 + 0x4a0));
          lVar13 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
          }
          uVar8 = FUN_054f73b4(lVar13 + 0x20,0);
          uVar5 = FUN_05501380(uVar6,uVar8,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = (ulong)*(uint *)(lVar10 + 0x18);
            unaff_x27 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
            unaff_x28 = (long *)PTR_DAT_06a0e0a8;
            goto LAB_05597070;
          }
          lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                       UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var
                                     );
          FUN_0552aca4(lVar10,0);
          unaff_x28 = (long *)PTR_DAT_06a0e0a8;
          if (in_stack_00000000 == (long *)0x0) break;
          lVar13 = thunk_FUN_02db5310(*(undefined8 *)
                                       (*in_stack_00000000 +
                                        (ulong)*(ushort *)
                                                (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50
                                                ) * 0x10 + 0x140));
          uVar6 = (**(code **)(lVar13 + 8))(in_stack_00000000,plVar4,lVar13);
          if (lVar10 == 0) break;
          *(undefined8 *)(lVar10 + 0x10) = uVar6;
          LeanTween__value();
          uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ec70);
          FUN_03b78e40(uVar6,lVar10,
                       *(undefined8 *)
                        UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                       ,0);
          if (lVar3 == 0) break;
          puVar7 = (undefined8 *)(lVar3 + 0x18);
          *puVar7 = uVar6;
LAB_05597184:
          LeanTween__value(puVar7,uVar6);
          unaff_x27 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
        }
        else {
LAB_05597070:
          if ((int)uVar5 == 1) {
            uVar6 = (**(code **)(*plVar4 + 0x498))(plVar4,*(undefined8 *)(*plVar4 + 0x4a0));
            lVar10 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
            }
            uVar8 = FUN_054f73b4(lVar10 + 0x20,0);
            uVar5 = FUN_055006dc(uVar6,uVar8,0);
            unaff_x27 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
            if ((uVar5 & 1) != 0) {
              lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                                         );
              FUN_0552aca4(lVar10,0);
              if (in_stack_00000000 != (long *)0x0) {
                lVar13 = thunk_FUN_02db5310(*(undefined8 *)
                                             (*in_stack_00000000 +
                                              (ulong)*(ushort *)
                                                      (*(long *)System_Xml_XPath_XPathNavigator_var
                                                      + 0x50) * 0x10 + 0x140));
                uVar6 = (**(code **)(lVar13 + 8))(in_stack_00000000,plVar4,lVar13);
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x10) = uVar6;
                  LeanTween__value();
                  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var
                                            );
                  FUN_04ccbc10(uVar6,lVar10,
                               *(undefined8 *)
                                Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var,0);
                  if (lVar3 != 0) {
                    puVar7 = (undefined8 *)(lVar3 + 0x20);
                    *puVar7 = uVar6;
                    goto LAB_05597184;
                  }
                }
              }
              break;
            }
          }
        }
      }
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0559775c(plVar4);
    if (lVar3 == 0) break;
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    LeanTween__value();
    if ((unaff_x22 == 0) || (plVar4 = *(long **)(unaff_x22 + 0x18), plVar4 == (long *)0x0)) break;
    lVar10 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)OVRSimpleJSON_JSONNode_Enumerator_var) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)OVRSimpleJSON_JSONNode_Enumerator_var,1);
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative:
    (*(code *)*puVar7)(plVar4,uVar12,lVar3,puVar7[1]);
    unaff_x29 = unaff_x29 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x29) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x20 == (long *)0x0) break;
    param_1 = unaff_x19 + unaff_x29 * 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


