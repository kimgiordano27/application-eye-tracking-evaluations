/*
FUNCTION_NAME: FUN_06bd6fd8
ENTRY_POINT: 06bd6fd8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06bd74e0) */
/* WARNING: Removing unreachable block (ram,0x06bd74f8) */

void FUN_06bd6fd8(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined4 local_a0 [2];
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar7 = 
  UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var;
  puVar6 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_MetaOpenXRPlaneProvider_var;
  puVar5 = PTR_DAT_0759bc40;
  puVar4 = PTR_DAT_0759bc38;
  puVar2 = PTR_DAT_0759b6d0;
  puVar3 = PTR_DAT_0759b6c8;
  if ((DAT_07a4fe7e & 1) == 0) {
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
    DAT_07a4fe7e = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  uVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
  FUN_047aec0c(uVar11,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x38),uVar11);
  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
  FUN_047aec0c(lVar12,*(undefined8 *)puVar5);
  plVar20 = (long *)(param_1 + 0x40);
  *plVar20 = lVar12;
  thunk_FUN_0329bf60(plVar20,lVar12);
  lVar12 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_0474f6bc(lVar12,*(undefined8 *)puVar3);
  plVar19 = (long *)(param_1 + 0x48);
  *plVar19 = lVar12;
  thunk_FUN_0329bf60(plVar19,lVar12);
  FUN_05e44034(param_1,0);
  puVar3 = PTR_DAT_075b3830;
  iVar10 = *param_3;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (iVar10 < *(int *)(param_2 + 0x10)) {
    FUN_05c829ac(param_2,iVar10,0);
    if (*param_3 + 1 < *(int *)(param_2 + 0x10)) {
      uVar8 = FUN_05c829ac(param_2,*param_3 + 1,0);
      local_a0[0] = 0;
      FUN_04b99e80(local_a0,uVar8,*(undefined8 *)puVar3);
      uVar8 = local_a0[0];
    }
    else {
      uVar8 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x06bd72d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)switchD_06bd72d0::switchdataD_015e3604 * 4 + 0x6bd72d4))(uVar8);
    return;
  }
  FUN_04b9f170(&local_68,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_0759d370);
  if ((char)local_78 == '\0') {
    FUN_04b9f170(&local_78,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_0759d370);
  }
  puVar3 = PTR_DAT_075b72c0;
  iVar9 = FUN_04b9f188(&local_68,*(undefined8 *)PTR_DAT_075b72c0);
  lVar12 = FUN_05c8a7a4(param_2,iVar10,iVar9 - iVar10,0);
  plVar21 = (long *)(param_1 + 0x50);
  *plVar21 = lVar12;
  thunk_FUN_0329bf60(plVar21);
  if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar13 = FUN_05c8d520(*plVar21,0x2b,0);
  lVar12 = *plVar21;
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)OVRSimpleJSON_JSONNode_KeyEnumerator_var + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__get_startingGroupMembers
              (lVar12,0x60,&local_90,&local_98);
    lVar12 = *plVar20;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar16 = *(long *)PTR_DAT_0759bc60;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      puVar17 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
      *puVar17 = local_90;
      thunk_FUN_0329bf60(puVar17);
    }
    else {
      FUN_047af440(lVar12,local_90,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    lVar12 = *plVar19;
    if (local_98 == 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)PTR_DAT_0759b6c0;
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
        FUN_0474ff10(lVar12,0,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      uVar8 = FUN_05dff160(local_98,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)PTR_DAT_0759b6c0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
      }
      else {
        FUN_0474ff10(lVar12,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar12 = FUN_05c8b44c(lVar12,0x2b,0,0);
    puVar5 = OVRSimpleJSON_JSONNode_KeyEnumerator_var;
    puVar4 = PTR_DAT_0759bc60;
    puVar2 = PTR_DAT_0759b6c0;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar13 = 0;
      uVar15 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar15 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        uVar11 = *(undefined8 *)(lVar12 + 0x20 + uVar13 * 8);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup__get_startingGroupMembers
                  (uVar11,0x60,&local_80,&local_88);
        lVar14 = *plVar20;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar16 = *(long *)(lVar14 + 0x10);
        lVar18 = *(long *)puVar4;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          puVar17 = (undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
          *puVar17 = local_80;
          thunk_FUN_0329bf60(puVar17);
        }
        else {
          FUN_047af440(lVar14,local_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *plVar19;
        if (local_88 == 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar18 = *(long *)puVar2;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = 0;
          }
          else {
            FUN_0474ff10(lVar14,0,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                        );
          }
        }
        else {
          uVar8 = FUN_05dff160(local_88,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar18 = *(long *)puVar2;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
          }
          else {
            FUN_0474ff10(lVar14,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  }
  if ((char)local_70 != '\0') {
    uVar8 = FUN_04b9f188(&local_70,*(undefined8 *)puVar3);
    iVar10 = FUN_04b9f188(&local_78,*(undefined8 *)puVar3);
    iVar9 = FUN_04b9f188(&local_70,*(undefined8 *)puVar3);
    lVar12 = FUN_05c8a7a4(param_2,uVar8,iVar10 - iVar9,0);
    plVar19 = (long *)(param_1 + 0x10);
    *plVar19 = lVar12;
    thunk_FUN_0329bf60(plVar19);
    if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar11 = FUN_05c8b44c(*plVar19,0x2c,0,0);
    puVar3 = 
    UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
    ;
    lVar12 = *(long *)
              UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController_var
    ;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar12);
      lVar12 = *(long *)puVar3;
    }
    lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar14 == 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar12);
        lVar12 = *(long *)puVar3;
      }
      uVar22 = **(undefined8 **)(lVar12 + 0xb8);
      lVar14 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075bbe70);
      FUN_042d6b48(lVar14,uVar22,
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
                   ,0);
      plVar19 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar19 = lVar14;
      thunk_FUN_0329bf60(plVar19,lVar14);
    }
    uVar11 = FUN_03deda2c(uVar11,lVar14,*(undefined8 *)PTR_DAT_075bbe58);
    lVar12 = FUN_03df7dec(uVar11,*(undefined8 *)PTR_DAT_0759cf08);
    uVar11 = FUN_06bd7dc0(lVar12,*(undefined8 *)PTR_DAT_075ad488);
    *(undefined8 *)(param_1 + 0x20) = uVar11;
    thunk_FUN_0329bf60();
    uVar11 = FUN_06bd7dc0(lVar12,*(undefined8 *)
                                  UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftHandInteraction_HoloLensHand_var
                         );
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    thunk_FUN_0329bf60();
    uVar11 = FUN_06bd7dc0(lVar12,*(undefined8 *)
                                  UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController_var
                         );
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    thunk_FUN_0329bf60();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (0 < *(int *)(lVar12 + 0x18)) {
      uVar11 = FUN_047af170(lVar12,0,*(undefined8 *)PTR_DAT_0759c548);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x18));
    }
  }
  return;
}


