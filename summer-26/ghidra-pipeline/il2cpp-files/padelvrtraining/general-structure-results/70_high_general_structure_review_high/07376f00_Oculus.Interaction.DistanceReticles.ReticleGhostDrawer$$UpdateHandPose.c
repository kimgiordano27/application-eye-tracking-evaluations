/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 07376f00
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x073771d8) */

void Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose
               (ulong param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  long unaff_x19;
  undefined4 uVar11;
  long *plVar12;
  long unaff_x22;
  long *plVar13;
  undefined1 uStack000000000000000c;
  
  plVar13 = *(long **)(unaff_x22 + 0x6c0);
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a1120);
    FUN_03d2d2b0(PTR_DAT_091aba60);
    FUN_03d2d2b0(PTR_DAT_0921b6c0);
    *(undefined1 *)(unaff_x19 + 0xd2c) = 1;
  }
  uStack000000000000000c = 0;
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar3 = FUN_07377940();
  uVar4 = FUN_071c518c(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    FUN_08a05a98(uVar3,0);
  }
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = FUN_073777a0(param_2);
  lVar5 = *plVar13;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar8 != 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)(*(long *)(*plVar13 + 0xb8) + 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
    }
    uVar4 = (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),uVar2,*(undefined8 *)(lVar8 + 0x28));
    if ((uVar4 & 1) == 0) goto LAB_0737719c;
    lVar5 = *plVar13;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar5 = *plVar13;
  }
  pcVar9 = *(char **)(lVar5 + 0xb8);
  if (*(long *)(pcVar9 + 0x10) == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      pcVar9 = *(char **)(*plVar13 + 0xb8);
    }
    puVar1 = PTR_DAT_091a1120;
    if ((char)uVar2 < *pcVar9) goto LAB_0737719c;
    if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (DAT_09837477 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1120);
      DAT_09837477 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar5 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_091aba60;
    plVar12 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091aba60) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_073770f4;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)PTR_DAT_091aba60,1);
LAB_073770f4:
    uVar4 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if ((uVar4 & 1) == 0) goto LAB_0737719c;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if ((uVar2 & 0xff) < 5) {
      uVar11 = *(undefined4 *)(&DAT_01ac94cc + (long)(char)uVar2 * 4);
    }
    else {
      uVar11 = 4;
    }
    lVar5 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_07377188;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)puVar1,3);
LAB_07377188:
    uVar4 = (*(code *)*puVar7)(plVar12,uVar11,puVar7[1]);
    if ((uVar4 & 1) == 0) goto LAB_0737719c;
  }
  uVar6 = FUN_073a0210(&stack0x00000010,0);
  uStack000000000000000c = 0;
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07377a60(uVar6,&stack0x0000000c);
LAB_0737719c:
  uVar4 = FUN_071c518c(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    FUN_08a05b34(uVar3,0);
  }
  return;
}


