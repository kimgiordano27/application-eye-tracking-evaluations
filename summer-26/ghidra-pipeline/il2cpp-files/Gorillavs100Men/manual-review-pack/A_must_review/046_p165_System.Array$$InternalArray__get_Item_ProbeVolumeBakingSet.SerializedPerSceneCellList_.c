/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 021f78bc
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__get_Item<ProbeVolumeBakingSet_SerializedPerSceneCellList>(void)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar1 = FUN_021be478();
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    if (*(long *)(lVar1 + 0x28) != 0) {
      if (DAT_0491c505 == '\0') {
        FUN_020612a4(StringLiteral_8895);
                    /* try { // try from 021f7900 to 022f7973 has its CatchHandler @ 021f7c74 */
        DAT_0491c505 = '\x01';
      }
      if (*(int *)(*(long *)StringLiteral_8895 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      if (DAT_0491c4a6 == '\0') {
        FUN_020612a4(StringLiteral_8767);
        DAT_0491c4a6 = '\x01';
      }
      if ((*(long *)(unaff_x20 + 0x28) != 0) &&
         (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x48), lVar1 != 0)) {
        puVar2 = *(undefined4 **)(*(long *)StringLiteral_8767 + 0xb8);
        uVar10 = *puVar2;
        fVar11 = (float)puVar2[1];
        fVar12 = (float)puVar2[2];
        fVar13 = (float)puVar2[3];
        lVar1 = FUN_021be6b0(lVar1,unaff_w19,0);
        if ((lVar1 != 0) &&
           ((*(long *)(unaff_x20 + 0x28) != 0 &&
            (*(long *)(*(long *)(unaff_x20 + 0x28) + 0x48) != 0)))) {
          fVar5 = (float)FUN_040bb610(uVar10,fVar11,fVar12,fVar13,0);
          if (((*(long *)(unaff_x20 + 0x28) != 0) &&
              (((lVar1 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x48), lVar1 != 0 &&
                (fVar7 = fVar11, fVar9 = fVar13, fVar8 = fVar12,
                lVar1 = FUN_021be760(lVar1,unaff_w19,0), lVar1 != 0)) &&
               (*(long *)(unaff_x20 + 0x28) != 0)))) &&
             (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x48), lVar3 != 0)) {
            lVar4 = *(long *)(lVar1 + 0x10);
            lVar1 = FUN_021be760(lVar3,unaff_w19,0);
            if (((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) &&
               (fVar6 = (float)FUN_040d6b70(*(long *)(lVar1 + 0x10),0), lVar4 != 0)) {
              FUN_040d8994((fVar11 * fVar8 + fVar13 * fVar6 + fVar5 * fVar9) - fVar12 * fVar7,
                           (fVar12 * fVar6 + fVar13 * fVar7 + fVar11 * fVar9) - fVar5 * fVar8,
                           (fVar5 * fVar7 + fVar13 * fVar8 + fVar12 * fVar9) - fVar11 * fVar6,
                           ((fVar13 * fVar9 - fVar5 * fVar6) - fVar11 * fVar7) - fVar12 * fVar8,
                           lVar4,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


