/*
FUNCTION_NAME: FUN_0574754c
ENTRY_POINT: 0574754c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057479a4) */
/* WARNING: Removing unreachable block (ram,0x05747a10) */

void FUN_0574754c(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  
  puVar6 = PTR_DAT_070f8b50;
  puVar5 = PTR_DAT_070f7e90;
  puVar4 = PTR_DAT_070f7e80;
  puVar3 = PTR_DAT_070f1e58;
  if ((DAT_0754b8a3 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f7f18);
    FUN_03188a78(PTR_DAT_070f7e80);
    FUN_03188a78(PTR_DAT_070ca6d8);
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(PTR_DAT_070c7c80);
    FUN_03188a78(PTR_DAT_070ca6e8);
    FUN_03188a78(PTR_DAT_070f4778);
    FUN_03188a78(PTR_DAT_070f7ea8);
    FUN_03188a78(PTR_DAT_070f7e90);
    FUN_03188a78(PTR_DAT_070f1e58);
    FUN_03188a78(PTR_DAT_070f8b58);
    FUN_03188a78(PTR_DAT_070f8b50);
    FUN_03188a78(PTR_DAT_070f8068);
    DAT_0754b8a3 = 1;
  }
  lVar7 = FUN_03a345e4(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
  uVar8 = *(undefined8 *)puVar6;
  uVar13 = *(undefined8 *)puVar5;
  *(long *)(param_1 + 0x70) = lVar7;
  uVar8 = FUN_03c48b64(uVar8,uVar13);
  if (lVar7 == 0) goto LAB_05747a0c;
  FUN_057379b8(lVar7,uVar8,0);
  puVar4 = PTR_DAT_070f8b58;
  puVar3 = PTR_DAT_070f4778;
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_05747a0c;
  lVar7 = FUN_03a345e4(*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_070f8068,
                       *(undefined8 *)PTR_DAT_070f7f18);
  uVar8 = *(undefined8 *)puVar4;
  uVar13 = *(undefined8 *)puVar3;
  *(long *)(param_1 + 0x88) = lVar7;
  uVar8 = FUN_03c48ad4(uVar8,uVar13);
  puVar3 = PTR_DAT_070f7ea8;
  if (lVar7 == 0) goto LAB_05747a0c;
  FUN_057379b8(lVar7,uVar8,0);
  uVar8 = FUN_03c48b64(*(undefined8 *)puVar4,*(undefined8 *)puVar3);
  FUN_05747468(param_1,uVar8);
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 == 0) goto LAB_05747a0c;
  plVar9 = *(long **)(lVar7 + 0x30);
  if (plVar9 == (long *)0x0) {
LAB_05747734:
    uVar8 = 0;
  }
  else {
    lVar14 = *plVar9;
    bVar2 = *(byte *)(*(long *)PTR_DAT_070ca6d8 + 0x130);
    if ((*(byte *)(lVar14 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_070ca6d8))
    goto LAB_05747734;
    uVar8 = (**(code **)(lVar14 + 600))(plVar9,*(undefined8 *)(lVar14 + 0x260));
    lVar7 = *(long *)(param_1 + 0x78);
    if (lVar7 == 0) goto LAB_05747a0c;
  }
  plVar9 = *(long **)(lVar7 + 0x30);
  if (plVar9 == (long *)0x0) {
LAB_05747774:
    uVar13 = 0;
  }
  else {
    lVar7 = *plVar9;
    bVar2 = *(byte *)(*(long *)PTR_DAT_070ca6e8 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_070ca6e8))
    goto LAB_05747774;
    uVar13 = (**(code **)(lVar7 + 0x248))(plVar9,*(undefined8 *)(lVar7 + 0x250));
  }
  puVar3 = PTR_DAT_070c1958;
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar10 = FUN_0594875c(uVar8,0,0);
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_0594875c(uVar13,0,0);
    if ((uVar10 & 1) == 0) goto LAB_05747a0c;
    iVar1 = *(int *)(*(long *)(puVar3 + 0x98) + 0xe4);
    uVar8 = uVar13;
  }
  else {
    iVar1 = *(int *)(*(long *)(puVar3 + 0x98) + 0xe4);
  }
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  lVar7 = FUN_0596405c(uVar8,0);
  puVar4 = PTR_DAT_070c7c80;
  puVar3 = PTR_DAT_070c2e88;
  if (lVar7 != 0) {
    plVar9 = (long *)FUN_05955140(lVar7,0);
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar14 = *plVar9;
      lVar7 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar7) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05747884;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(plVar9,lVar7,0);
LAB_05747884:
      uVar10 = (*(code *)*puVar11)(plVar9,puVar11[1]);
      if ((uVar10 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_031c3cac(plVar9,*(undefined8 *)puVar3);
        if (plVar9 == (long *)0x0) goto LAB_05747998;
        lVar14 = *plVar9;
        lVar7 = *(long *)puVar3;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 == 0) goto LAB_05747970;
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_05747958;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar14 = *plVar9;
      lVar7 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar7) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_057478ec;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(plVar9,lVar7,1);
LAB_057478ec:
      plVar12 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      FUN_05747ff8(param_1,uVar8);
    } while( true );
  }
LAB_05747a0c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
LAB_05747958:
    if (*(long *)(piVar15 + -2) == lVar7) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray;
    }
  }
LAB_05747970:
  puVar11 = (undefined8 *)FUN_031c0d08(plVar9,lVar7,0);
System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_05747998:
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_0573a8b0(*(long *)(param_1 + 0x70),0);
    return;
  }
  goto LAB_05747a0c;
}


