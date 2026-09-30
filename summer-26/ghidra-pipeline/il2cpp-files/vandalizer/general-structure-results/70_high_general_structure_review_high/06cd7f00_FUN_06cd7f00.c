/*
FUNCTION_NAME: FUN_06cd7f00
ENTRY_POINT: 06cd7f00
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06cd82e4) */
/* WARNING: Removing unreachable block (ram,0x06cd82e8) */
/* WARNING: Removing unreachable block (ram,0x06cd8390) */

void FUN_06cd7f00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_07a50a5c & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_List<Tween_TweenCurve>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<UIRenderDevice_AllocToFree>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<PkixPolicyNode>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    DAT_07a50a5c = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  FUN_06cd84b0(param_1);
  FUN_06cd7bcc(param_1);
  puVar7 = System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_TypeInfo;
  puVar5 = System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_TypeInfo;
  puVar3 = System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo;
  puVar2 = System_Collections_Generic_ICollection<PkixPolicyNode>_TypeInfo;
  puVar1 = PTR_DAT_0759b2a8;
  if (*(long *)(param_1 + 0x80) != 0) {
    iVar8 = FUN_05450b7c(*(long *)(param_1 + 0x80),
                         *(undefined8 *)
                          System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo
                        );
    if (iVar8 < 1) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_06cd8398;
      FUN_047afec0(&local_b8,*(long *)(param_1 + 0x50),*(undefined8 *)puVar7);
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      while (uVar9 = FUN_05a2e8e4(&local_80,*(undefined8 *)puVar5), lVar10 = local_70,
            (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar9 = FUN_06e587d8(lVar10,0,0);
        if (((uVar9 & 1) != 0) &&
           (lVar10 = thunk_FUN_0322f04c(lVar10,*(undefined8 *)puVar2), lVar10 != 0)) {
          FUN_06cd8760(param_1);
        }
      }
    }
    else {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_06cd8398;
      FUN_047afec0(&local_b8,*(long *)(param_1 + 0x50),*(undefined8 *)puVar7);
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      iVar8 = 0;
      while (uVar9 = FUN_05a2e8e4(&local_80,*(undefined8 *)puVar5), lVar10 = local_70,
            (uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar9 = FUN_06e587d8(lVar10,0,0);
        if (((uVar9 & 1) != 0) &&
           (lVar10 = thunk_FUN_0322f04c(lVar10,*(undefined8 *)puVar2), lVar10 != 0)) {
          FUN_06cd8570(param_1,lVar10,iVar8);
          iVar8 = iVar8 + 1;
        }
      }
    }
    FUN_05a2e8e0(&local_80,*(undefined8 *)puVar3);
    puVar13 = (undefined8 *)(param_1 + 0x30);
    uVar9 = System_Globalization_JapaneseCalendar__IsValidYear(*puVar13,0);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_06e550fc(param_1,0);
      if (lVar10 == 0) goto LAB_06cd8398;
      uVar11 = thunk_FUN_06e5f718(lVar10,0);
      *puVar13 = uVar11;
      thunk_FUN_0329bf60(puVar13,uVar11);
    }
    FUN_06cd7ccc(param_1);
    puVar6 = System_Collections_Generic_List<Tween_TweenCurve>_TypeInfo;
    puVar4 = System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_TypeInfo;
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_047afec0(&local_b8,*(long *)(param_1 + 0x58),
                   *(undefined8 *)
                    System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo
                  );
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
      while( true ) {
        uVar9 = FUN_05a2e8e4(&local_a0,*(undefined8 *)puVar6);
        lVar10 = local_90;
        if ((uVar9 & 1) == 0) {
          FUN_05a2e8e0(&local_a0,*(undefined8 *)puVar4);
          *(undefined1 *)(param_1 + 0x78) = 1;
          return;
        }
        if (local_90 == 0) break;
        uVar11 = *(undefined8 *)(local_90 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar9 = FUN_06e5ba28(uVar11,0,0);
        if (((uVar9 & 1) == 0) &&
           (lVar12 = thunk_FUN_0322f04c(uVar11,*(undefined8 *)puVar2), lVar12 != 0)) {
          if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          FUN_047afec0(&local_b8,*(long *)(lVar10 + 0x18),*(undefined8 *)puVar7);
          uStack_78 = uStack_b0;
          local_80 = local_b8;
          local_70 = local_a8;
          while (uVar9 = FUN_05a2e8e4(&local_80,*(undefined8 *)puVar5), lVar10 = local_70,
                (uVar9 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar9 = FUN_06e587d8(lVar10,0,0);
            if (((uVar9 & 1) != 0) &&
               (lVar10 = thunk_FUN_0322f04c(lVar10,*(undefined8 *)puVar2), lVar10 != 0)) {
              FUN_06cd889c(param_1,lVar12,lVar10);
            }
          }
          FUN_05a2e8e0(&local_80,*(undefined8 *)puVar3);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
LAB_06cd8398:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


