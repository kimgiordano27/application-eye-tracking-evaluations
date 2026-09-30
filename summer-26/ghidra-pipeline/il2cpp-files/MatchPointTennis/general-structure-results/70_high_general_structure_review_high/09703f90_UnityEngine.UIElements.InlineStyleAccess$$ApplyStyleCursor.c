/*
FUNCTION_NAME: UnityEngine.UIElements.InlineStyleAccess$$ApplyStyleCursor
ENTRY_POINT: 09703f90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void UnityEngine_UIElements_InlineStyleAccess__ApplyStyleCursor(void)

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
  long unaff_x19;
  int iVar14;
  long unaff_x20;
  int iVar15;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x20 + 0x3dd) = 1;
  puVar6 = RootMotion_Demos_AnimationWarping_Warp_var;
  puVar5 = Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_var;
  puVar4 = FullSerializer_fsResult_var;
  puVar3 = System_Diagnostics_TraceLevel_var;
  lVar9 = *(long *)(unaff_x19 + 0x28);
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
        lVar9 = *(long *)(unaff_x19 + 0x30);
        if (lVar9 != 0) {
          iVar14 = 0;
          goto LAB_09704144;
        }
        break;
      }
      Unity_Collections_NativeArray<ReadWriteTransformHandle>__Copy
                (&stack0x00000008,lVar9,iVar15,*(undefined8 *)puVar5);
      uVar8 = in_stack_00000018;
      uVar7 = in_stack_00000008;
      if (in_stack_00000010 == 0) {
        lVar9 = *(long *)(unaff_x19 + 0x30);
        if (lVar9 == 0) break;
        if (iVar14 < *(int *)(lVar9 + 0x18)) {
          lVar9 = FUN_05badb74(lVar9,iVar14,*(undefined8 *)puVar6);
        }
        else {
          lVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
          FUN_096f8018(lVar9,0);
          lVar10 = *(long *)(unaff_x19 + 0x30);
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
        FUN_096f5b8c(lVar9,uVar8,*(undefined8 *)(unaff_x19 + 0x10),uVar7,0);
        FUN_096f5ec0(lVar9,0);
      }
      else {
        if (*(long *)(unaff_x19 + 0x30) == 0) break;
        iVar14 = iVar14 + -1;
        lVar9 = FUN_05badb74(*(long *)(unaff_x19 + 0x30),iVar14,*(undefined8 *)puVar6);
        if (lVar9 == 0) break;
        FUN_096f6b34(lVar9,0);
        FUN_096f0a3c(*(undefined8 *)(unaff_x19 + 0x10),uVar7,lVar9,0);
      }
      lVar9 = *(long *)(unaff_x19 + 0x28);
      iVar15 = iVar15 + 1;
    } while (lVar9 != 0);
  }
  goto LAB_09704174;
  while( true ) {
    FUN_096f5e14(lVar9,0);
    lVar9 = *(long *)(unaff_x19 + 0x30);
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


