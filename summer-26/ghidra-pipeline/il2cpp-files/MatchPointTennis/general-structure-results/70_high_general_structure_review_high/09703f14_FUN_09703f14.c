/*
FUNCTION_NAME: FUN_09703f14
ENTRY_POINT: 09703f14
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_09703f14(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  
  if ((DAT_0a5473dd & 1) == 0) {
    FUN_04447ba8(System_Diagnostics_TraceLevel_var);
    FUN_04447ba8(FullSerializer_fsResult_var);
    FUN_04447ba8(FullSerializer_Internal_fsTypeCache_var);
    FUN_04447ba8(FullSerializer_Internal_fsVersionedType_var);
    FUN_04447ba8(UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
    FUN_04447ba8(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_var);
    FUN_04447ba8(RootMotion_Demos_AnimationWarping_Warp_var);
    DAT_0a5473dd = 1;
  }
  puVar6 = RootMotion_Demos_AnimationWarping_Warp_var;
  puVar5 = Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_var;
  puVar4 = FullSerializer_fsResult_var;
  puVar3 = System_Diagnostics_TraceLevel_var;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    iVar14 = 0;
    iVar15 = 0;
    do {
      iVar1 = *(int *)(lVar9 + 0x18);
      if (iVar1 <= iVar15) {
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_07a61000(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
        }
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 != 0) {
          iVar14 = 0;
          goto LAB_09704144;
        }
        break;
      }
      Unity_Collections_NativeArray<ReadWriteTransformHandle>__Copy
                (&local_78,lVar9,iVar15,*(undefined8 *)puVar5);
      uVar8 = local_68;
      uVar7 = local_78;
      if (local_70 == 0) {
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 == 0) break;
        if (iVar14 < *(int *)(lVar9 + 0x18)) {
          lVar9 = FUN_05badb74(lVar9,iVar14,*(undefined8 *)puVar6);
        }
        else {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
          FUN_096f8018(lVar9,0);
          lVar10 = *(long *)(param_1 + 0x30);
          if (lVar10 == 0) break;
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar12 = lVar9;
            thunk_FUN_044bb4b4(plVar12,lVar9);
          }
          else {
            FUN_05bade44(lVar10,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (lVar9 == 0) break;
        iVar14 = iVar14 + 1;
        FUN_096f5b8c(lVar9,uVar8,*(undefined8 *)(param_1 + 0x10),uVar7,0);
        FUN_096f5ec0(lVar9,0);
      }
      else {
        if (*(long *)(param_1 + 0x30) == 0) break;
        iVar14 = iVar14 + -1;
        lVar9 = FUN_05badb74(*(long *)(param_1 + 0x30),iVar14,*(undefined8 *)puVar6);
        if (lVar9 == 0) break;
        FUN_096f6b34(lVar9,0);
        FUN_096f0a3c(*(undefined8 *)(param_1 + 0x10),uVar7,lVar9,0);
      }
      lVar9 = *(long *)(param_1 + 0x28);
      iVar15 = iVar15 + 1;
    } while (lVar9 != 0);
  }
  goto LAB_09704174;
  while( true ) {
    FUN_096f5e14(lVar9,0);
    lVar9 = *(long *)(param_1 + 0x30);
    iVar14 = iVar14 + 1;
    if (lVar9 == 0) break;
LAB_09704144:
    if (*(int *)(lVar9 + 0x18) <= iVar14) {
      return;
    }
    lVar9 = FUN_05badb74(lVar9,iVar14,*(undefined8 *)puVar6);
    if (lVar9 == 0) break;
  }
LAB_09704174:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


