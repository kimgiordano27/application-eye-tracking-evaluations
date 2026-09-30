/*
FUNCTION_NAME: FUN_05596b1c
ENTRY_POINT: 05596b1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_05596b1c(long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_06a0da50;
  if ((DAT_06dbb57c & 1) == 0) {
    FUN_02d965b8(OVRSimpleJSON_JSONNode_KeyEnumerator_var);
    FUN_02d965b8(OVRSimpleJSON_JSONNode_ValueEnumerator_var);
    FUN_02d965b8(PTR_DAT_06a0ec70);
    FUN_02d965b8(OVRSimpleJSON_JSONNode_Enumerator_var);
    FUN_02d965b8(PTR_DAT_06a0da50);
    FUN_02d965b8(PTR_DAT_06a12d50);
    FUN_02d965b8(PTR_DAT_06a0da58);
    FUN_02d965b8(UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var);
    FUN_02d965b8(LightingExampleManager_LightingConfig_var);
    FUN_02d965b8(System_Xml_XPath_XPathNavigator_var);
    FUN_02d965b8(UnityEngine_UIElements_ListViewDragger_DragPosition_var);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var);
    FUN_02d965b8(UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var);
    FUN_02d965b8(PTR_DAT_06a0e0a8);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_UI_MouseButtonModel_ImplementationData_var);
    FUN_02d965b8(UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var);
    FUN_02d965b8(
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                );
    FUN_02d965b8(UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var);
    FUN_02d965b8(Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var);
    FUN_02d965b8(Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var);
    DAT_06dbb57c = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar19 = (long *)PTR_DAT_06a0e0a8;
  plVar4 = (long *)FUN_055bfa6c(0);
  uVar5 = FUN_0541f558(param_2,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*plVar19 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_05597370(param_1,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var
                                );
      FUN_0552aca4(lVar7,0);
      if (plVar4 == (long *)0x0) goto LAB_05597270;
      lVar8 = thunk_FUN_02db5310(*(undefined8 *)
                                  (*plVar4 + (ulong)*(ushort *)
                                                     (*(long *)
                                                  UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var
                                                  + 0x50) * 0x10 + 0x140));
      uVar6 = (**(code **)(lVar8 + 8))(plVar4,param_1,lVar8);
      if (lVar7 == 0) goto LAB_05597270;
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
      LeanTween__value();
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0da58);
      FUN_043aeaf0(uVar6,lVar7,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_UI_MouseButtonModel_ImplementationData_var,0)
      ;
    }
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_05597270;
    uVar6 = (**(code **)(*plVar4 + 0x188))(plVar4,param_2,*(undefined8 *)(*plVar4 + 400));
  }
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                              UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var);
  FUN_05596810(lVar7,uVar6);
  puVar2 = System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var;
  if (param_3 != 0) {
    if (0 < (int)*(ulong *)(param_3 + 0x18)) {
      uVar5 = 0;
      uVar15 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      puVar11 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
      do {
        if (uVar15 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        if (param_1 == (long *)0x0) goto LAB_05597270;
        uVar6 = *(undefined8 *)(param_3 + uVar5 * 8 + 0x20);
        lVar8 = (**(code **)(*param_1 + 0x788))
                          (param_1,uVar6,0x14,*(undefined8 *)(*param_1 + 0x790));
        if (lVar8 == 0) goto LAB_05597270;
        if (*(int *)(lVar8 + 0x18) != 1) {
          thunk_FUN_02dfd288(PTR_DAT_069fc178);
          FUN_0297e1b4();
          uVar10 = FUN_0547e2f8(0);
          uVar13 = thunk_FUN_02dfd288(
                                     Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                                     );
          uVar6 = FUN_055873e0(uVar13,uVar10,uVar6);
LAB_05597334:
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar10 = thunk_FUN_02dd3144();
          FUN_05452924(uVar10,uVar6,0);
          uVar6 = thunk_FUN_02dfd288(Unity_Netcode_NetworkObject_SceneObject_var);
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar10,uVar6);
        }
        plVar9 = (long *)FUN_03610fb8(lVar8,*puVar11);
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_0552aca4(lVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_05597270;
        iVar3 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
        if (iVar3 == 0x10) {
LAB_05596e40:
          if (*(int *)(*plVar19 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar15 = FUN_0559747c(plVar9,0);
          if ((uVar15 & 1) != 0) {
            if ((plVar4 == (long *)0x0) ||
               (uVar10 = FUN_037fd858(plVar4,plVar9,
                                      *(undefined8 *)LightingExampleManager_LightingConfig_var),
               lVar8 == 0)) goto LAB_05597270;
            *(undefined8 *)(lVar8 + 0x18) = uVar10;
            LeanTween__value();
          }
          if (*(int *)(*plVar19 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar15 = FUN_055975c8(plVar9,0,0);
          if ((uVar15 & 1) != 0) {
            if ((plVar4 == (long *)0x0) ||
               (uVar10 = FUN_037fdc08(plVar4,plVar9,
                                      *(undefined8 *)
                                       UnityEngine_UIElements_ListViewDragger_DragPosition_var),
               lVar8 == 0)) goto LAB_05597270;
            *(undefined8 *)(lVar8 + 0x20) = uVar10;
            LeanTween__value();
          }
        }
        else {
          if (iVar3 != 8) {
            if (iVar3 != 4) {
              thunk_FUN_02dfd288(PTR_DAT_069fc178);
              FUN_0297e1b4();
              uVar6 = FUN_0547e2f8(0);
              local_64 = FUN_05597464(plVar9);
              uVar10 = thunk_FUN_02dfd288(
                                         Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                                         );
              uVar10 = thunk_FUN_02dd2d7c(uVar10,&local_64);
              FUN_02979e58(plVar9);
              uVar13 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
              uVar14 = thunk_FUN_02dfd288(Unity_Netcode_NetworkMessageManager_MessageWithHandler_var
                                         );
              uVar6 = FUN_05588558(uVar14,uVar6,uVar10,uVar13);
              goto LAB_05597334;
            }
            goto LAB_05596e40;
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_06a12d50 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06a12d50)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar9);
          }
          uVar15 = FUN_0541facc(plVar9,0);
          if ((uVar15 & 1) != 0) {
            lVar16 = (**(code **)(*plVar9 + 0x2c8))(plVar9,*(undefined8 *)(*plVar9 + 0x2d0));
            if (lVar16 == 0) goto LAB_05597270;
            uVar15 = *(ulong *)(lVar16 + 0x18);
            if (uVar15 == 0) {
              uVar10 = (**(code **)(*plVar9 + 0x498))(plVar9,*(undefined8 *)(*plVar9 + 0x4a0));
              lVar18 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
              }
              uVar13 = FUN_054f73b4(lVar18 + 0x20,0);
              uVar15 = FUN_05501380(uVar10,uVar13,0);
              if ((uVar15 & 1) == 0) {
                uVar15 = (ulong)*(uint *)(lVar16 + 0x18);
                puVar11 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
                plVar19 = (long *)PTR_DAT_06a0e0a8;
                goto LAB_05597070;
              }
              lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                           UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var
                                         );
              FUN_0552aca4(lVar16,0);
              plVar19 = (long *)PTR_DAT_06a0e0a8;
              if (plVar4 == (long *)0x0) goto LAB_05597270;
              lVar18 = thunk_FUN_02db5310(*(undefined8 *)
                                           (*plVar4 + (ulong)*(ushort *)
                                                              (*(long *)
                                                  System_Xml_XPath_XPathNavigator_var + 0x50) * 0x10
                                           + 0x140));
              uVar10 = (**(code **)(lVar18 + 8))(plVar4,plVar9,lVar18);
              if (lVar16 == 0) goto LAB_05597270;
              *(undefined8 *)(lVar16 + 0x10) = uVar10;
              LeanTween__value();
              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ec70);
              FUN_03b78e40(uVar10,lVar16,
                           *(undefined8 *)
                            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                           ,0);
              if (lVar8 == 0) goto LAB_05597270;
              puVar11 = (undefined8 *)(lVar8 + 0x18);
              *puVar11 = uVar10;
LAB_05597184:
              LeanTween__value(puVar11,uVar10);
              puVar11 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
            }
            else {
LAB_05597070:
              if ((int)uVar15 == 1) {
                uVar10 = (**(code **)(*plVar9 + 0x498))(plVar9,*(undefined8 *)(*plVar9 + 0x4a0));
                lVar16 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
                }
                uVar13 = FUN_054f73b4(lVar16 + 0x20,0);
                uVar15 = FUN_055006dc(uVar10,uVar13,0);
                puVar11 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
                if ((uVar15 & 1) != 0) {
                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                                             );
                  FUN_0552aca4(lVar16,0);
                  if (plVar4 != (long *)0x0) {
                    lVar18 = thunk_FUN_02db5310(*(undefined8 *)
                                                 (*plVar4 + (ulong)*(ushort *)
                                                                    (*(long *)
                                                  System_Xml_XPath_XPathNavigator_var + 0x50) * 0x10
                                                 + 0x140));
                    uVar10 = (**(code **)(lVar18 + 8))(plVar4,plVar9,lVar18);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x10) = uVar10;
                      LeanTween__value();
                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                   OVRSimpleJSON_JSONNode_KeyEnumerator_var);
                      FUN_04ccbc10(uVar10,lVar16,
                                   *(undefined8 *)
                                    Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var,0)
                      ;
                      if (lVar8 != 0) {
                        puVar11 = (undefined8 *)(lVar8 + 0x20);
                        *puVar11 = uVar10;
                        goto LAB_05597184;
                      }
                    }
                  }
                  goto LAB_05597270;
                }
              }
            }
          }
        }
        if (*(int *)(*plVar19 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar10 = FUN_0559775c(plVar9);
        if (lVar8 == 0) goto LAB_05597270;
        *(undefined8 *)(lVar8 + 0x10) = uVar10;
        LeanTween__value();
        if ((lVar7 == 0) || (plVar9 = *(long **)(lVar7 + 0x18), plVar9 == (long *)0x0))
        goto LAB_05597270;
        lVar16 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)OVRSimpleJSON_JSONNode_Enumerator_var) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_02dd004c(plVar9,*(long *)OVRSimpleJSON_JSONNode_Enumerator_var,1);
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative:
        (*(code *)*puVar12)(plVar9,uVar6,lVar8,puVar12[1]);
        uVar15 = (ulong)*(uint *)(param_3 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(param_3 + 0x18));
    }
    return lVar7;
  }
LAB_05597270:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


