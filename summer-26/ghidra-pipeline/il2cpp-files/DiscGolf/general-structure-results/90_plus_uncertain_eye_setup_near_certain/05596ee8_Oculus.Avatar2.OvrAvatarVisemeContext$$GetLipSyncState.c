/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarVisemeContext$$GetLipSyncState
ENTRY_POINT: 05596ee8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrAvatarVisemeContext__GetLipSyncState(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar11;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long lVar12;
  ulong unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x05596ee8:
  bVar1 = *(byte *)(*(long *)PTR_DAT_06a12d50 + 0x130);
  if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a12d50))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(unaff_x25);
  }
  uVar3 = FUN_0541facc(unaff_x25,0);
  if ((uVar3 & 1) == 0) goto LAB_05597198;
  lVar4 = (**(code **)(*unaff_x25 + 0x2c8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2d0));
  if (lVar4 == 0) goto LAB_05597270;
  uVar3 = *(ulong *)(lVar4 + 0x18);
  if (uVar3 == 0) {
    uVar5 = (**(code **)(*unaff_x25 + 0x498))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0));
    lVar12 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
    }
    uVar6 = FUN_054f73b4(lVar12 + 0x20,0);
    uVar3 = FUN_05501380(uVar5,uVar6,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
      unaff_x27 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
      unaff_x28 = (long *)PTR_DAT_06a0e0a8;
      goto LAB_05597070;
    }
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var
                              );
    FUN_0552aca4(lVar4,0);
    unaff_x28 = (long *)PTR_DAT_06a0e0a8;
    if (in_stack_00000000 == (long *)0x0) goto LAB_05597270;
    lVar12 = thunk_FUN_02db5310(*(undefined8 *)
                                 (*in_stack_00000000 +
                                  (ulong)*(ushort *)
                                          (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50) *
                                  0x10 + 0x140));
    uVar5 = (**(code **)(lVar12 + 8))(in_stack_00000000,unaff_x25,lVar12);
    if (lVar4 == 0) goto LAB_05597270;
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    LeanTween__value();
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ec70);
    FUN_03b78e40(uVar5,lVar4,
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                 ,0);
    if (unaff_x24 == 0) goto LAB_05597270;
    puVar7 = (undefined8 *)(unaff_x24 + 0x18);
    *puVar7 = uVar5;
  }
  else {
LAB_05597070:
    if ((int)uVar3 != 1) goto LAB_05597198;
    uVar5 = (**(code **)(*unaff_x25 + 0x498))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0));
    lVar4 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
    }
    uVar6 = FUN_054f73b4(lVar4 + 0x20,0);
    uVar3 = FUN_055006dc(uVar5,uVar6,0);
    unaff_x27 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
    if ((uVar3 & 1) == 0) goto LAB_05597198;
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                              );
    FUN_0552aca4(lVar4,0);
    if (in_stack_00000000 == (long *)0x0) {
LAB_05597270:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = thunk_FUN_02db5310(*(undefined8 *)
                                 (*in_stack_00000000 +
                                  (ulong)*(ushort *)
                                          (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50) *
                                  0x10 + 0x140));
    uVar5 = (**(code **)(lVar12 + 8))(in_stack_00000000,unaff_x25,lVar12);
    if (lVar4 == 0) goto LAB_05597270;
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    LeanTween__value();
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var);
    FUN_04ccbc10(uVar5,lVar4,
                 *(undefined8 *)Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var,0);
    if (unaff_x24 == 0) goto LAB_05597270;
    puVar7 = (undefined8 *)(unaff_x24 + 0x20);
    *puVar7 = uVar5;
  }
  LeanTween__value(puVar7,uVar5);
  unaff_x27 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
LAB_05597198:
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_0559775c(unaff_x25);
  if (unaff_x24 == 0) goto LAB_05597270;
  *(undefined8 *)(unaff_x24 + 0x10) = uVar5;
  LeanTween__value();
  if ((unaff_x22 == 0) || (plVar11 = *(long **)(unaff_x22 + 0x18), plVar11 == (long *)0x0))
  goto LAB_05597270;
  lVar4 = *plVar11;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)OVRSimpleJSON_JSONNode_Enumerator_var) {
        puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)OVRSimpleJSON_JSONNode_Enumerator_var,1);
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative:
  (*(code *)*puVar7)(plVar11,unaff_x23,unaff_x24,puVar7[1]);
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
  lVar4 = (**(code **)(*unaff_x20 + 0x788))();
  if (lVar4 == 0) goto LAB_05597270;
  if (*(int *)(lVar4 + 0x18) != 1) {
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar5 = FUN_0547e2f8(0);
    uVar6 = thunk_FUN_02dfd288(
                              Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                              );
    uVar5 = FUN_055873e0(uVar6,uVar5,unaff_x23);
LAB_05597334:
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar6 = thunk_FUN_02dd3144();
    FUN_05452924(uVar6,uVar5,0);
    uVar5 = thunk_FUN_02dfd288(Unity_Netcode_NetworkObject_SceneObject_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,uVar5);
  }
  unaff_x25 = (long *)FUN_03610fb8(lVar4,*unaff_x27);
  unaff_x24 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_0552aca4(unaff_x24,0);
  if (unaff_x25 == (long *)0x0) goto LAB_05597270;
  iVar2 = (**(code **)(*unaff_x25 + 0x1f8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x200));
  if (iVar2 != 0x10) {
    if (iVar2 == 8) goto code_r0x05596ee8;
    if (iVar2 != 4) {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar5 = FUN_0547e2f8(0);
      in_stack_00000008._4_4_ = FUN_05597464(unaff_x25);
      uVar6 = thunk_FUN_02dfd288(
                                Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                                );
      uVar6 = thunk_FUN_02dd2d7c(uVar6,(long)&stack0x00000008 + 4);
      FUN_02979e58(unaff_x25);
      uVar8 = (**(code **)(*unaff_x25 + 0x208))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x210));
      uVar9 = thunk_FUN_02dfd288(Unity_Netcode_NetworkMessageManager_MessageWithHandler_var);
      uVar5 = FUN_05588558(uVar9,uVar5,uVar6,uVar8);
      goto LAB_05597334;
    }
  }
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_0559747c(unaff_x25,0);
  if ((uVar3 & 1) != 0) {
    if ((in_stack_00000000 == (long *)0x0) ||
       (uVar5 = FUN_037fd858(in_stack_00000000,unaff_x25,
                             *(undefined8 *)LightingExampleManager_LightingConfig_var),
       unaff_x24 == 0)) goto LAB_05597270;
    *(undefined8 *)(unaff_x24 + 0x18) = uVar5;
    LeanTween__value();
  }
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_055975c8(unaff_x25,0,0);
  if ((uVar3 & 1) != 0) {
    if ((in_stack_00000000 == (long *)0x0) ||
       (uVar5 = FUN_037fdc08(in_stack_00000000,unaff_x25,
                             *(undefined8 *)UnityEngine_UIElements_ListViewDragger_DragPosition_var)
       , unaff_x24 == 0)) goto LAB_05597270;
    *(undefined8 *)(unaff_x24 + 0x20) = uVar5;
    LeanTween__value();
  }
  goto LAB_05597198;
}


