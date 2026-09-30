/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$Awake
ENTRY_POINT: 05c26efc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__Awake(long *param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  
  puVar3 = PTR_DAT_06f6d618;
  if ((DAT_07397ed3 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f76398);
    FUN_02fe925c(PTR_DAT_06fb4360);
    FUN_02fe925c(PTR_DAT_06fb4368);
    FUN_02fe925c(PTR_DAT_06fb4370);
    FUN_02fe925c(PTR_DAT_06f9d110);
    FUN_02fe925c(PTR_DAT_06fb4378);
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_07397ed3 = 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x538))(param_1,*(undefined8 *)(*param_1 + 0x540));
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar3);
  }
  uVar5 = FUN_068f9b78(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    FUN_05ecb16c(param_1,0,0);
    return;
  }
  plVar6 = (long *)FUN_05ec2668(param_1,0);
  if (plVar6 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06fb4360 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06fb4360)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar6);
    }
  }
  plVar12 = param_1 + 0x13;
  *plVar12 = (long)plVar6;
  thunk_FUN_03048534(plVar12,plVar6);
  lVar10 = *plVar12;
  if (lVar10 != 0) {
    iVar1 = *(int *)((long)param_1 + 0xb4);
    *(undefined4 *)(lVar10 + 0xac) = 0;
    *(bool *)(lVar10 + 0xa8) = iVar1 == 1;
    FUN_05ec9a98(param_1,0);
    lVar10 = param_1[8];
    if (lVar10 != 0) {
      lVar13 = param_1[0x13];
      uVar4 = *(undefined8 *)(lVar10 + 0x90);
      plVar6 = (long *)FUN_05ec15c0(lVar10,0);
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f9d110) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06f9d110,5);
Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar9 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f76398);
        FUN_04adcad4(uVar9,param_1,*(undefined8 *)PTR_DAT_06fb4378,0);
        if (lVar13 != 0) {
          FUN_05ec2ca0(lVar13,uVar4,uVar8,3,uVar9,0);
                    /* WARNING: Could not recover jumptable at 0x05c27148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


