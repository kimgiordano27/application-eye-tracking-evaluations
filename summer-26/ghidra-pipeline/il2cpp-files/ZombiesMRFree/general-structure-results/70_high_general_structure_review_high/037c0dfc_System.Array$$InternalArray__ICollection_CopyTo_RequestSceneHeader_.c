/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<RequestSceneHeader>
ENTRY_POINT: 037c0dfc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


ulong System_Array__InternalArray__ICollection_CopyTo<RequestSceneHeader>(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  double dVar10;
  double extraout_d0;
  double dVar11;
  double dVar12;
  
  lVar4 = FUN_03783e5c(param_1,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar5 = FUN_03783e5c(*(long *)(unaff_x19 + 0x30),0);
    dVar11 = *(double *)(unaff_x21 + 8);
    dVar12 = *(double *)(unaff_x22 + 8);
    dVar10 = dVar11;
    if (dVar12 < dVar11) {
      dVar10 = dVar12;
      dVar12 = dVar11;
    }
    FUN_0377db90(dVar10,dVar12);
    puVar2 = PTR_DAT_06f6d508;
    dVar11 = *(double *)(lVar4 + 8);
    dVar12 = *(double *)(lVar5 + 8);
    dVar10 = dVar11;
    if (dVar12 < dVar11) {
      dVar10 = dVar12;
      dVar12 = dVar11;
    }
    FUN_0377db90(dVar10,dVar12);
    puVar3 = PTR_DAT_06f95888;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar10 = (double)FUN_05af0024(0,0,0);
    dVar12 = (double)FUN_05af016c(0,0,0);
    dVar10 = (dVar10 + dVar12) * 0.5;
    uVar6 = FUN_037c0fe8(dVar10);
    dVar10 = (double)FUN_037c0fe8(dVar10,uVar6,lVar4,lVar5);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar7 = FUN_0377f7e0(extraout_d0,dVar10,DAT_0136b670,0);
    if ((uVar7 & 1) == 0) {
      uVar9 = 0xffffffff;
      if (dVar10 <= extraout_d0) {
        uVar9 = 1;
      }
      return (ulong)uVar9;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      piVar8 = (int *)FUN_03783cb0(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        iVar1 = *piVar8;
        piVar8 = (int *)FUN_03783cb0(*(long *)(unaff_x19 + 0x20),0);
        puVar2 = PTR_DAT_06f95b70;
        if (iVar1 == *piVar8) {
          lVar4 = *(long *)PTR_DAT_06f95b70;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar4 = *(long *)puVar2;
          }
          if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_037c0fe4;
          uVar7 = FUN_03783a28(**(long **)(lVar4 + 0xb8),*(undefined8 *)(unaff_x20 + 0x20),
                               *(undefined8 *)(unaff_x19 + 0x20),0);
        }
        else {
          uVar9 = 1;
          if (iVar1 < *piVar8) {
            uVar9 = 0xffffffff;
          }
          uVar7 = (ulong)uVar9;
        }
        return uVar7;
      }
    }
  }
LAB_037c0fe4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


