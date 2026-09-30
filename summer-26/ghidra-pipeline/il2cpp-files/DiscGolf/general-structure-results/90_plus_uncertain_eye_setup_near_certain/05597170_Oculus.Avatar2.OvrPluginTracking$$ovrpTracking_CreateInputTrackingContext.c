/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateInputTrackingContext
ENTRY_POINT: 05597170
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContext
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar12;
  undefined8 unaff_x27;
  long lVar13;
  long *unaff_x28;
  ulong unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x05597170:
  FUN_04ccbc10(param_2,param_3,*param_1,param_5);
  if (unaff_x24 == 0) {
LAB_05597270:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  puVar3 = (undefined8 *)(unaff_x24 + 0x20);
  *puVar3 = unaff_x27;
LAB_05597184:
  LeanTween__value(puVar3,unaff_x27);
  puVar3 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
LAB_05597198:
  do {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0559775c(unaff_x25);
    if (unaff_x24 == 0) goto LAB_05597270;
    *(undefined8 *)(unaff_x24 + 0x10) = uVar4;
    LeanTween__value();
    if ((unaff_x22 == 0) || (plVar12 = *(long **)(unaff_x22 + 0x18), plVar12 == (long *)0x0))
    goto LAB_05597270;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)OVRSimpleJSON_JSONNode_Enumerator_var) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)OVRSimpleJSON_JSONNode_Enumerator_var,1);
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContextNative:
    (*(code *)*puVar5)(plVar12,unaff_x23,unaff_x24,puVar5[1]);
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
    lVar9 = (**(code **)(*unaff_x20 + 0x788))();
    if (lVar9 == 0) goto LAB_05597270;
    if (*(int *)(lVar9 + 0x18) != 1) {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar4 = FUN_0547e2f8(0);
      uVar6 = thunk_FUN_02dfd288(
                                Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                                );
      uVar4 = FUN_055873e0(uVar6,uVar4,unaff_x23);
LAB_05597334:
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar6 = thunk_FUN_02dd3144();
      FUN_05452924(uVar6,uVar4,0);
      uVar4 = thunk_FUN_02dfd288(Unity_Netcode_NetworkObject_SceneObject_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar4);
    }
    unaff_x25 = (long *)FUN_03610fb8(lVar9,*puVar3);
    unaff_x24 = thunk_FUN_02dd3144(*unaff_x21);
    FUN_0552aca4(unaff_x24,0);
    if (unaff_x25 == (long *)0x0) goto LAB_05597270;
    iVar2 = (**(code **)(*unaff_x25 + 0x1f8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x200));
    if (iVar2 == 0x10) {
LAB_05596e40:
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_0559747c(unaff_x25,0);
      if ((uVar10 & 1) != 0) {
        if ((in_stack_00000000 == (long *)0x0) ||
           (uVar4 = FUN_037fd858(in_stack_00000000,unaff_x25,
                                 *(undefined8 *)LightingExampleManager_LightingConfig_var),
           unaff_x24 == 0)) goto LAB_05597270;
        *(undefined8 *)(unaff_x24 + 0x18) = uVar4;
        LeanTween__value();
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_055975c8(unaff_x25,0,0);
      if ((uVar10 & 1) != 0) {
        if ((in_stack_00000000 == (long *)0x0) ||
           (uVar4 = FUN_037fdc08(in_stack_00000000,unaff_x25,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_ListViewDragger_DragPosition_var),
           unaff_x24 == 0)) goto LAB_05597270;
        *(undefined8 *)(unaff_x24 + 0x20) = uVar4;
        LeanTween__value();
      }
      goto LAB_05597198;
    }
    if (iVar2 != 8) {
      if (iVar2 != 4) {
        thunk_FUN_02dfd288(PTR_DAT_069fc178);
        FUN_0297e1b4();
        uVar4 = FUN_0547e2f8(0);
        in_stack_00000008._4_4_ = FUN_05597464(unaff_x25);
        uVar6 = thunk_FUN_02dfd288(
                                  Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                                  );
        uVar6 = thunk_FUN_02dd2d7c(uVar6,(long)&stack0x00000008 + 4);
        FUN_02979e58(unaff_x25);
        uVar7 = (**(code **)(*unaff_x25 + 0x208))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x210));
        uVar8 = thunk_FUN_02dfd288(Unity_Netcode_NetworkMessageManager_MessageWithHandler_var);
        uVar4 = FUN_05588558(uVar8,uVar4,uVar6,uVar7);
        goto LAB_05597334;
      }
      goto LAB_05596e40;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a12d50 + 0x130);
    if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a12d50)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(unaff_x25);
    }
    uVar10 = FUN_0541facc(unaff_x25,0);
  } while ((uVar10 & 1) == 0);
  lVar9 = (**(code **)(*unaff_x25 + 0x2c8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2d0));
  if (lVar9 == 0) goto LAB_05597270;
  uVar10 = *(ulong *)(lVar9 + 0x18);
  if (uVar10 == 0) {
    uVar4 = (**(code **)(*unaff_x25 + 0x498))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0));
    lVar13 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
    }
    uVar6 = FUN_054f73b4(lVar13 + 0x20,0);
    uVar10 = FUN_05501380(uVar4,uVar6,0);
    if ((uVar10 & 1) != 0) goto code_r0x05596fac;
    uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
    puVar3 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
    unaff_x28 = (long *)PTR_DAT_06a0e0a8;
  }
  if ((int)uVar10 == 1) {
    uVar4 = (**(code **)(*unaff_x25 + 0x498))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x4a0));
    lVar9 = *(long *)(PTR_DAT_069fb9c0 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
    }
    uVar6 = FUN_054f73b4(lVar9 + 0x20,0);
    uVar10 = FUN_055006dc(uVar4,uVar6,0);
    puVar3 = (undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
    if ((uVar10 & 1) != 0) {
      param_3 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var
                                  );
      FUN_0552aca4(param_3,0);
      if (in_stack_00000000 == (long *)0x0) goto LAB_05597270;
      lVar9 = thunk_FUN_02db5310(*(undefined8 *)
                                  (*in_stack_00000000 +
                                   (ulong)*(ushort *)
                                           (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50) *
                                   0x10 + 0x140));
      uVar4 = (**(code **)(lVar9 + 8))(in_stack_00000000,unaff_x25,lVar9);
      if (param_3 == 0) goto LAB_05597270;
      *(undefined8 *)(param_3 + 0x10) = uVar4;
      LeanTween__value();
      param_2 = thunk_FUN_02dd3144(*(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var);
      param_5 = 0;
      param_1 = (undefined8 *)Unity_Netcode_Components_NetworkAnimator_AnimationMessage_var;
      unaff_x27 = param_2;
      goto code_r0x05597170;
    }
  }
  goto LAB_05597198;
code_r0x05596fac:
  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var
                            );
  FUN_0552aca4(lVar9,0);
  unaff_x28 = (long *)PTR_DAT_06a0e0a8;
  if (in_stack_00000000 == (long *)0x0) goto LAB_05597270;
  lVar13 = thunk_FUN_02db5310(*(undefined8 *)
                               (*in_stack_00000000 +
                                (ulong)*(ushort *)
                                        (*(long *)System_Xml_XPath_XPathNavigator_var + 0x50) * 0x10
                               + 0x140));
  uVar4 = (**(code **)(lVar13 + 8))(in_stack_00000000,unaff_x25,lVar13);
  if (lVar9 == 0) goto LAB_05597270;
  *(undefined8 *)(lVar9 + 0x10) = uVar4;
  LeanTween__value();
  unaff_x27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0ec70);
  FUN_03b78e40(unaff_x27,lVar9,
               *(undefined8 *)
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
               ,0);
  if (unaff_x24 == 0) goto LAB_05597270;
  puVar3 = (undefined8 *)(unaff_x24 + 0x18);
  *puVar3 = unaff_x27;
  goto LAB_05597184;
}


