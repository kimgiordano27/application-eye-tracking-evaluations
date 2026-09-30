/*
FUNCTION_NAME: FUN_066aab28
ENTRY_POINT: 066aab28
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_066aab28(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  long local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_f8;
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  ulong uStack_88;
  long local_80;
  ulong uStack_78;
  undefined8 local_70 [2];
  
  if ((DAT_07557fd4 & 1) == 0) {
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_TypeInfo
                );
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Filtering_IXRHoverFilter_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputButtonReader_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_Experimental_IValueAnimationUpdate_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_IXRInteractableCustomReticle_TypeInfo
                );
    FUN_03188a78(Unity_Services_Analytics_Internal_IWebRequest_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_TypeInfo
                );
    DAT_07557fd4 = 1;
  }
  puVar7 = UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_TypeInfo;
  puVar6 = UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo;
  puVar5 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_IXRInputButtonReader_TypeInfo;
  puVar4 = UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_TypeInfo;
  puVar3 = Unity_Services_Analytics_Internal_IWebRequest_TypeInfo;
  puVar2 = UnityEngine_UIElements_Experimental_IValueAnimationUpdate_TypeInfo;
  local_80 = 0;
  uStack_78 = 0;
  local_70[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (param_2 != 0) {
    FUN_04609060(param_2 + 0x28,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_IXRInteractableCustomReticle_TypeInfo
                );
    FUN_0461feb0(&local_130,param_1 + 0x68,*(undefined8 *)puVar7);
    local_b0 = 0;
    uStack_78 = uStack_128;
    local_80 = local_130;
    local_70[0] = local_120;
    plStack_a8 = &local_80;
    while( true ) {
      do {
        do {
          if ((int)local_70[0] == -1) {
            uVar9 = FUN_064b73dc(local_80,(ulong)&local_80 | 0xc,local_70,(ulong)&local_80 | 8,0);
            if ((uVar9 & 1) == 0) {
              FUN_054ef2f8(&local_80,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_TypeInfo
                          );
              return;
            }
          }
          else {
            if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            uStack_78 = CONCAT44(uStack_78._4_4_,(int)local_70[0]);
            local_70[0] = CONCAT44(local_70[0]._4_4_,
                                   *(undefined4 *)
                                    (*(long *)(local_80 + 0x10) + (long)(int)local_70[0] * 4));
          }
          if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uStack_88 = uStack_78 & 0xffffffff;
          local_90 = local_80;
          piVar10 = (int *)FUN_04137994(&local_90,*(undefined8 *)puVar5);
          iVar1 = *piVar10;
          lVar12 = *(long *)(param_1 + 0x80);
          if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4(*(long *)(*(long *)puVar6 + 0x20));
          }
        } while (*(int *)(lVar12 + 8) <= iVar1);
        piVar10 = (int *)FUN_04137994(&local_90,*(undefined8 *)puVar5);
        iVar1 = *piVar10;
        plVar13 = *(long **)(param_1 + 0x80);
        if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4(*(long *)(*(long *)puVar3 + 0x20));
        }
      } while ((*(byte *)((long)iVar1 * 0xc + *plVar13) & 1) == 0);
      local_a0 = 0;
      local_98 = 0;
      uVar8 = FUN_04137944(&local_90,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_TypeInfo
                          );
      lVar12 = *(long *)(param_1 + 0x78);
      local_a0 = CONCAT44(local_a0._4_4_,uVar8);
      puVar11 = (undefined4 *)FUN_04137994(&local_90,*(undefined8 *)puVar5);
      if (lVar12 == 0) break;
      FUN_042e7000(&local_130,lVar12,*puVar11,*(undefined8 *)puVar2);
      lVar12 = *(long *)(param_1 + 0x78);
      local_a0 = CONCAT44(local_118,(undefined4)local_a0);
      puVar11 = (undefined4 *)FUN_04137994(&local_90,*(undefined8 *)puVar5);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_042e7000(&local_130,lVar12,*puVar11,*(undefined8 *)puVar2);
      local_98 = local_f8;
      System_Collections_Generic_ObjectComparer<StandardVelocityCalculator_SamplePoseData>___ctor
                (param_2 + 0x28,&local_a0,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


