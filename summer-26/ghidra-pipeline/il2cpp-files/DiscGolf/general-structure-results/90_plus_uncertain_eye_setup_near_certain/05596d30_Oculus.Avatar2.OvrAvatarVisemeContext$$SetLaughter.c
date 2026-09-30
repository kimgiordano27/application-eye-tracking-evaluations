/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarVisemeContext$$SetLaughter
ENTRY_POINT: 05596d30
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Oculus_Avatar2_OvrAvatarVisemeContext__SetLaughter(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x28;
  long lVar16;
  ulong uVar17;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  LeanTween__value();
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0da58);
  FUN_043aeaf0();
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                              UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams_var);
  FUN_05596810(lVar5,uVar4);
  puVar2 = System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var;
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar17 = 0;
      uVar13 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar9 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
      do {
        if (uVar13 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_05597270;
        uVar4 = *(undefined8 *)(unaff_x19 + uVar17 * 8 + 0x20);
        lVar6 = (**(code **)(*unaff_x20 + 0x788))();
        if (lVar6 == 0) goto LAB_05597270;
        if (*(int *)(lVar6 + 0x18) != 1) {
          thunk_FUN_02dfd288(PTR_DAT_069fc178);
          FUN_0297e1b4();
          uVar8 = FUN_0547e2f8(0);
          uVar11 = thunk_FUN_02dfd288(
                                     Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                                     );
          uVar4 = FUN_055873e0(uVar11,uVar8,uVar4);
LAB_05597334:
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar8 = thunk_FUN_02dd3144();
          FUN_05452924(uVar8,uVar4,0);
          uVar4 = thunk_FUN_02dfd288(Unity_Netcode_NetworkObject_SceneObject_var);
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar8,uVar4);
        }
        plVar7 = (long *)FUN_03610fb8(lVar6,*puVar9);
        lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_0552aca4(lVar6,0);
        if (plVar7 == (long *)0x0) goto LAB_05597270;
        iVar3 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
        if (iVar3 == 0x10) {
LAB_05596e40:
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar13 = FUN_0559747c(plVar7,0);
          if ((uVar13 & 1) != 0) {
            if ((in_stack_00000000 == (long *)0x0) ||
               (uVar8 = FUN_037fd858(in_stack_00000000,plVar7,
                                     *(undefined8 *)LightingExampleManager_LightingConfig_var),
               lVar6 == 0)) goto LAB_05597270;
            *(undefined8 *)(lVar6 + 0x18) = uVar8;
            LeanTween__value();
          }
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar13 = FUN_055975c8(plVar7,0,0);
          if ((uVar13 & 1) != 0) {
            if ((in_stack_00000000 == (long *)0x0) ||
               (uVar8 = FUN_037fdc08(in_stack_00000000,plVar7,
                                     *(undefined8 *)
                                      UnityEngine_UIElements_ListViewDragger_DragPosition_var),
               lVar6 == 0)) goto LAB_05597270;
            *(undefined8 *)(lVar6 + 0x20) = uVar8;
            LeanTween__value();
          }
        }
        else {
          if (iVar3 != 8) {
            if (iVar3 != 4) {
              thunk_FUN_02dfd288(PTR_DAT_069fc178);
              FUN_0297e1b4();
              uVar4 = FUN_0547e2f8(0);
              in_stack_00000008._4_4_ = FUN_05597464(plVar7);
              uVar8 = thunk_FUN_02dfd288(
                                        Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                                        );
              uVar8 = thunk_FUN_02dd2d7c(uVar8,(long)&stack0x00000008 + 4);
              FUN_02979e58(plVar7);
              uVar11 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
              uVar12 = thunk_FUN_02dfd288(Unity_Netcode_NetworkMessageManager_MessageWithHandler_var
                                         );
              uVar4 = FUN_05588558(uVar12,uVar4,uVar8,uVar11);
              goto LAB_05597334;
            }
            goto LAB_05596e40;
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_06a12d50 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06a12d50)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar7);
          }
          uVar13 = FUN_0541facc(plVar7,0);
          if ((uVar13 & 1) != 0) {
            lVar14 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
            if (lVar14 == 0) goto LAB_05597270;
            uVar13 = *(ulong *)(lVar14 + 0x18);
            if (uVar13 == 0) {
              uVar8 = (**(code **)(*plVar7 + 0x498))(plVar7,*(undefined8 *)(*plVar7 + 0x4a0));
              lVar16 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
              }
              uVar11 = FUN_054f73b4(lVar16 + 0x20,0);
              uVar13 = FUN_05501380(uVar8,uVar11,0);
              if ((uVar13 & 1) == 0) {
                uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
                puVar9 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
                unaff_x28 = (long *)PTR_DAT_06a0e0a8;
                goto LAB_05597070;
              }
              lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                           UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var
                                         );
              FUN_0552aca4(lVar14,0);
              unaff_x28 = (long *)PTR_DAT_06a0e0a8;
              if (in_stack_00000000 == (long *)0x0) goto LAB_05597270;
              lVar16 = thunk_FUN_02db5310(*(undefined8 *)
                                           (*in_stack_00000000 +
                                            (ulong)*(ushort *)
                                                    (*(long *)System_Xml_XPath_XPathNavigator_var +
                                                    0x50) * 0x10 + 0x140));
              uVar8 = (**(code **)(lVar16 + 8))(in_stack_00000000,plVar7,lVar16);
              if (lVar14 == 0) goto LAB_05597270;
              *(undefined8 *)(lVar14 + 0x10) = uVar8;
              LeanTween__value();
              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ec70);
              FUN_03b78e40(uVar8,lVar14,
                           *(undefined8 *)
                            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                           ,0);
              if (lVar6 == 0) goto LAB_05597270;
              puVar9 = (undefined8 *)(lVar6 + 0x18);
              *puVar9 = uVar8;
LAB_05597184:
              LeanTween__value(puVar9,uVar8);
              puVar9 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
            }
            else {
LAB_05597070:
              if ((int)uVar13 == 1) {
                uVar8 = (**(code **)(*plVar7 + 0x498))(plVar7,*(undefined8 *)(*plVar7 + 0x4a0));
                lVar14 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
                }
                uVar11 = FUN_054f73b4(lVar14 + 0x20,0);
                uVar13 = FUN_055006dc(uVar8,uVar11,0);
                puVar9 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
                if ((uVar13 & 1) != 0) {
                  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                                             );
                  FUN_0552aca4(lVar14,0);
                  if (in_stack_00000000 != (long *)0x0) {
                    lVar16 = thunk_FUN_02db5310(*(undefined8 *)
                                                 (*in_stack_00000000 +
                                                  (ulong)*(ushort *)
                                                          (*(long *)
                                                  System_Xml_XPath_XPathNavigator_var + 0x50) * 0x10
                                                 + 0x140));
                    uVar8 = (**(code **)(lVar16 + 8))(in_stack_00000000,plVar7,lVar16);
                    if (lVar14 != 0) {
                      *(undefined8 *)(lVar14 + 0x10) = uVar8;
                      LeanTween__value();
                      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                                  OVRSimpleJSON_JSONNode_KeyEnumerator_var);
                      FUN_04ccbc10(uVar8,lVar14,
                                   *(undefined8 *)
                                    Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var,0)
                      ;
                      if (lVar6 != 0) {
                        puVar9 = (undefined8 *)(lVar6 + 0x20);
                        *puVar9 = uVar8;
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
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar8 = FUN_0559775c(plVar7);
        if (lVar6 == 0) goto LAB_05597270;
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
        LeanTween__value();
        if ((lVar5 == 0) || (plVar7 = *(long **)(lVar5 + 0x18), plVar7 == (long *)0x0))
        goto LAB_05597270;
        lVar14 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)OVRSimpleJSON_JSONNode_Enumerator_var) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar7,*(long *)OVRSimpleJSON_JSONNode_Enumerator_var,1);
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative:
        (*(code *)*puVar10)(plVar7,uVar4,lVar6,puVar10[1]);
        uVar13 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return lVar5;
  }
LAB_05597270:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


