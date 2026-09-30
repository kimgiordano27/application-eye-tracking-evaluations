/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 02d9e998
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x19;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = param_3 * param_1;
  if (DAT_066c1d9d == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1d9d = '\x01';
  }
  fVar7 = (float)unaff_d9 + param_2 * param_1;
  fVar8 = (float)((ulong)unaff_d9 >> 0x20) + fVar8;
  fVar9 = unaff_s10 + unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = PTR_DAT_06312438;
  fVar6 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
  if (fVar6 <= DAT_01032864) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
  }
  else {
    fVar9 = fVar9 / fVar6;
    uVar5 = CONCAT44(fVar8 / fVar6,fVar7 / fVar6);
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar5;
  *(float *)(unaff_x19 + 0x58) = fVar9;
  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
     (lVar2 = FUN_02d73614(*(long *)(unaff_x19 + 0x38),0), lVar2 != 0)) {
    fVar8 = (float)FUN_05c9bf94(lVar2,0);
    fVar10 = *(float *)(unaff_x19 + 0x50);
    fVar11 = *(float *)(unaff_x19 + 0x54);
    fVar12 = *(float *)(unaff_x19 + 0x58);
    fVar7 = (float)FUN_05c98248(0);
    fVar6 = *(float *)(unaff_x19 + 0x5c);
    FUN_05c9c070(fVar8 + fVar10 * fVar7 * fVar6,fVar9 + fVar11 * fVar7 * fVar6,
                 param_3 + fVar12 * fVar7 * fVar6,lVar2,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      lVar2 = FUN_02d73614(*(long *)(unaff_x19 + 0x38),0);
      lVar3 = *(long *)(unaff_x19 + 0x48);
      if ((lVar3 != 0) &&
         (FUN_05c7b450(*(undefined4 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x4c),
                       *(undefined4 *)(lVar3 + 0x50),*(undefined4 *)(unaff_x19 + 0x50),
                       *(undefined4 *)(unaff_x19 + 0x54),*(undefined4 *)(unaff_x19 + 0x58),0),
         lVar2 != 0)) {
        FUN_05c9c22c(lVar2,0);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28);
          if (DAT_066c1d97 == '\0') {
            FUN_02b3c81c(PTR_DAT_06312438);
            DAT_066c1d97 = '\x01';
          }
          if (lVar2 != 0) {
            puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
            FUN_05d1bbe4(*puVar4,puVar4[1],puVar4[2],lVar2,0);
            if (*(long *)(unaff_x19 + 0x38) != 0) {
              lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28);
              if (DAT_066c1d97 == '\0') {
                FUN_02b3c81c(PTR_DAT_06312438);
                DAT_066c1d97 = '\x01';
              }
              if (lVar2 != 0) {
                puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                FUN_05d1bd94(*puVar4,puVar4[1],puVar4[2],lVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


