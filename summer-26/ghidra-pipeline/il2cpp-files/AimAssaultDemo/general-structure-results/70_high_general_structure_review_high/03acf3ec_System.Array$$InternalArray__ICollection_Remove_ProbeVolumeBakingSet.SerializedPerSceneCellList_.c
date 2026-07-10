/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03acf3ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


bool System_Array__InternalArray__ICollection_Remove<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long *param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long unaff_x21;
  long lVar5;
  uint uVar6;
  
  if ((*(byte *)(unaff_x21 + 0xf2) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d889a0);
    *(undefined1 *)(unaff_x21 + 0xf2) = 1;
  }
  puVar1 = PTR_DAT_07d889a0;
  lVar5 = *param_1;
  if (lVar5 == 0) {
LAB_03acf4bc:
    bVar2 = false;
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    bVar2 = *(int *)(*(long *)PTR_DAT_07d889a0 + 0xe4) == 0;
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        if (bVar2) {
          thunk_FUN_03798b70();
        }
        cVar3 = FUN_06162fb0(lVar5,uVar6,0);
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        if ((uint)uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        if (*(char *)(param_2 + (int)uVar6 + 0x20) != cVar3) goto LAB_03acf4bc;
        lVar5 = *param_1;
        uVar6 = uVar6 + 1;
        bVar2 = *(int *)(*(long *)puVar1 + 0xe4) == 0;
      } while ((int)uVar6 < (int)(uint)uVar4);
    }
    if (bVar2) {
      thunk_FUN_03798b70();
      uVar4 = *(undefined8 *)(param_2 + 0x18);
    }
    cVar3 = FUN_06162fb0(lVar5,uVar4,0);
    bVar2 = cVar3 == '\0';
  }
  return bVar2;
}


