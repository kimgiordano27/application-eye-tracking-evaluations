/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor$$GetHoverTimeToSelect
ENTRY_POINT: 06bd7030
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06bd74e0) */
/* WARNING: Removing unreachable block (ram,0x06bd74f8) */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__GetHoverTimeToSelect
               (ulong param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar17;
  undefined8 *unaff_x22;
  long *plVar18;
  int *unaff_x23;
  long *plVar19;
  undefined8 uVar20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int iStack0000000000000004;
  undefined4 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  char cStack0000000000000038;
  char cStack0000000000000040;
  undefined8 in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075bbe58);
    FUN_031f20f4(PTR_DAT_0759cf08);
    FUN_031f20f4(PTR_DAT_075bbe70);
    FUN_031f20f4(PTR_DAT_0759b6c0);
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider_var
                );
    FUN_031f20f4(PTR_DAT_0759bc60);
    FUN_031f20f4(PTR_DAT_0759b6c8);
    FUN_031f20f4(PTR_DAT_0759bc40);
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
                );
    FUN_031f20f4(PTR_DAT_0759ca18);
    FUN_031f20f4(PTR_DAT_0759c548);
    FUN_031f20f4(PTR_DAT_0759b6d0);
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_MetaOpenXRPlaneProvider_var
                );
                    /* try { // try from 06bd70e0 to 06cd722b has its CatchHandler @ 06bd70e0
                       catch() { ... } // from try @ 06bd70e0 with catch @ 06bd70e0
                       catch() { ... } // from try @ 06bd7348 with catch @ 06bd70e0
                       catch() { ... } // from try @ 06bd738c with catch @ 06bd70e0
                       catch() { ... } // from try @ 06bd73d4 with catch @ 06bd70e0
                       catch() { ... } // from try @ 06bd7404 with catch @ 06bd70e0 */
    FUN_031f20f4(PTR_DAT_0759bc38);
    FUN_031f20f4(PTR_DAT_075b3880);
    FUN_031f20f4(PTR_DAT_075b3488);
    FUN_031f20f4(PTR_DAT_0759d370);
    FUN_031f20f4(PTR_DAT_075b3830);
    FUN_031f20f4(PTR_DAT_075b3888);
    FUN_031f20f4(PTR_DAT_075b3490);
    FUN_031f20f4(PTR_DAT_075b72c0);
    FUN_031f20f4(OVRSimpleJSON_JSONNode_KeyEnumerator_var);
    FUN_031f20f4(UnityEngine_InputSystem_Plugins_InputForUI_InputSystemProvider_Configuration_var);
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
                );
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
                );
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand_var
                );
    FUN_031f20f4(
                UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController_var
                );
    FUN_031f20f4(PTR_DAT_075ad488);
    *(undefined1 *)(unaff_x27 + 0xe7e) = 1;
  }
  _cStack0000000000000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  _cStack0000000000000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  uVar9 = thunk_FUN_0322f148(*unaff_x24);
  FUN_047aec0c(uVar9,*unaff_x21);
  *(undefined8 *)(param_2 + 0x38) = uVar9;
  thunk_FUN_0329bf60((undefined8 *)(param_2 + 0x38),uVar9);
  lVar10 = thunk_FUN_0322f148(*unaff_x26);
  FUN_047aec0c(lVar10,*unaff_x22);
  plVar18 = (long *)(param_2 + 0x40);
  *plVar18 = lVar10;
  thunk_FUN_0329bf60(plVar18,lVar10);
  lVar10 = thunk_FUN_0322f148(*unaff_x25);
  FUN_0474f6bc(lVar10,*unaff_x20);
  plVar17 = (long *)(param_2 + 0x48);
  *plVar17 = lVar10;
  thunk_FUN_0329bf60(plVar17,lVar10);
  FUN_05e44034(param_2,0);
  puVar4 = PTR_DAT_075b3830;
  iStack0000000000000004 = *unaff_x23;
  _cStack0000000000000040 = 0;
  in_stack_00000048 = 0;
  _cStack0000000000000038 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (iStack0000000000000004 < *(int *)(param_3 + 0x10)) {
    FUN_05c829ac(param_3,iStack0000000000000004,0);
    if (*unaff_x23 + 1 < *(int *)(param_3 + 0x10)) {
      uVar6 = FUN_05c829ac(param_3,*unaff_x23 + 1,0);
      in_stack_00000010 = 0;
      FUN_04b99e80(&stack0x00000010,uVar6,*(undefined8 *)puVar4);
      uVar6 = in_stack_00000010;
    }
    else {
      uVar6 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x06bd72d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)switchD_06bd72d0::switchdataD_015e3604 * 4 + 0x6bd72d4))(uVar6);
    return;
  }
  FUN_04b9f170(&stack0x00000048,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)PTR_DAT_0759d370);
  if (cStack0000000000000038 == '\0') {
    FUN_04b9f170(&stack0x00000038,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)PTR_DAT_0759d370);
  }
  puVar4 = PTR_DAT_075b72c0;
  iVar7 = FUN_04b9f188(&stack0x00000048,*(undefined8 *)PTR_DAT_075b72c0);
  lVar10 = FUN_05c8a7a4(param_3,iStack0000000000000004,iVar7 - iStack0000000000000004,0);
  plVar19 = (long *)(param_2 + 0x50);
  *plVar19 = lVar10;
  thunk_FUN_0329bf60(plVar19);
  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar11 = FUN_05c8d520(*plVar19,0x2b,0);
  lVar10 = *plVar19;
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)OVRSimpleJSON_JSONNode_KeyEnumerator_var + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__get_startingGroupMembers
              (lVar10,0x60,&stack0x00000020,&stack0x00000018);
    lVar10 = *plVar18;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar14 = *(long *)PTR_DAT_0759bc60;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      puVar15 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar15 = in_stack_00000020;
      thunk_FUN_0329bf60(puVar15);
    }
    else {
      FUN_047af440(lVar10,in_stack_00000020,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar10 = *plVar17;
    if (in_stack_00000018 == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)PTR_DAT_0759b6c0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = 0;
      }
      else {
        FUN_0474ff10(lVar10,0,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      uVar6 = FUN_05dff160(in_stack_00000018,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)PTR_DAT_0759b6c0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
      }
      else {
        FUN_0474ff10(lVar10,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar10 = FUN_05c8b44c(lVar10,0x2b,0,0);
    puVar5 = OVRSimpleJSON_JSONNode_KeyEnumerator_var;
    puVar3 = PTR_DAT_0759bc60;
    puVar2 = PTR_DAT_0759b6c0;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar11 = 0;
      uVar13 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        uVar9 = *(undefined8 *)(lVar10 + 0x20 + uVar11 * 8);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__get_startingGroupMembers
                  (uVar9,0x60,&stack0x00000030,&stack0x00000028);
        lVar12 = *plVar18;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar14 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)puVar3;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *puVar15 = in_stack_00000030;
          thunk_FUN_0329bf60(puVar15);
        }
        else {
          FUN_047af440(lVar12,in_stack_00000030,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = *plVar17;
        if (in_stack_00000028 == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)puVar2;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0;
          }
          else {
            FUN_0474ff10(lVar12,0,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                        );
          }
        }
        else {
          uVar6 = FUN_05dff160(in_stack_00000028,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)puVar2;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
          }
          else {
            FUN_0474ff10(lVar12,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar13 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
  }
  if (cStack0000000000000040 != '\0') {
    uVar6 = FUN_04b9f188(&stack0x00000040,*(undefined8 *)puVar4);
    iVar7 = FUN_04b9f188(&stack0x00000038,*(undefined8 *)puVar4);
    iVar8 = FUN_04b9f188(&stack0x00000040,*(undefined8 *)puVar4);
    lVar10 = FUN_05c8a7a4(param_3,uVar6,iVar7 - iVar8,0);
    plVar17 = (long *)(param_2 + 0x10);
    *plVar17 = lVar10;
    thunk_FUN_0329bf60(plVar17);
    if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar9 = FUN_05c8b44c(*plVar17,0x2c,0,0);
    puVar4 = 
    UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
    ;
    lVar10 = *(long *)
              UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
    ;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar10);
      lVar10 = *(long *)puVar4;
    }
    lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar10);
        lVar10 = *(long *)puVar4;
      }
      uVar20 = **(undefined8 **)(lVar10 + 0xb8);
      lVar12 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075bbe70);
      FUN_042d6b48(lVar12,uVar20,
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
                   ,0);
      plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar17 = lVar12;
      thunk_FUN_0329bf60(plVar17,lVar12);
    }
    uVar9 = FUN_03deda2c(uVar9,lVar12,*(undefined8 *)PTR_DAT_075bbe58);
    lVar10 = FUN_03df7dec(uVar9,*(undefined8 *)PTR_DAT_0759cf08);
    uVar9 = FUN_06bd7dc0(lVar10,*(undefined8 *)PTR_DAT_075ad488);
    *(undefined8 *)(param_2 + 0x20) = uVar9;
    thunk_FUN_0329bf60();
    uVar9 = FUN_06bd7dc0(lVar10,*(undefined8 *)
                                 UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand_var
                        );
    *(undefined8 *)(param_2 + 0x28) = uVar9;
    thunk_FUN_0329bf60();
    uVar9 = FUN_06bd7dc0(lVar10,*(undefined8 *)
                                 UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController_var
                        );
    *(undefined8 *)(param_2 + 0x30) = uVar9;
    thunk_FUN_0329bf60();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (0 < *(int *)(lVar10 + 0x18)) {
      uVar9 = FUN_047af170(lVar10,0,*(undefined8 *)PTR_DAT_0759c548);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      thunk_FUN_0329bf60((undefined8 *)(param_2 + 0x18));
    }
  }
  return;
}


