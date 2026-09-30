/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$Start
ENTRY_POINT: 05c26fdc
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


void Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__Start(long *param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long lVar10;
  undefined8 uVar11;
  
  if (param_1 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06fb4360 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06fb4360))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(param_1);
    }
  }
  plVar3 = unaff_x19 + 0x13;
  *plVar3 = (long)param_1;
  thunk_FUN_03048534(plVar3,param_1);
  lVar7 = *plVar3;
  if (lVar7 != 0) {
    iVar1 = *(int *)((long)unaff_x19 + 0xb4);
    *(undefined4 *)(lVar7 + 0xac) = 0;
    *(bool *)(lVar7 + 0xa8) = iVar1 == 1;
    FUN_05ec9a98();
    lVar7 = unaff_x19[8];
    if (lVar7 != 0) {
      lVar10 = unaff_x19[0x13];
      uVar11 = *(undefined8 *)(lVar7 + 0x90);
      plVar3 = (long *)FUN_05ec15c0(lVar7,0);
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06f9d110) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
              goto Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,*(long *)PTR_DAT_06f9d110,5);
Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose:
        uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        uVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f76398);
        FUN_04adcad4();
        if (lVar10 != 0) {
          FUN_05ec2ca0(lVar10,uVar11,uVar5,3,uVar6,0);
                    /* WARNING: Could not recover jumptable at 0x05c27148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x438))();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


