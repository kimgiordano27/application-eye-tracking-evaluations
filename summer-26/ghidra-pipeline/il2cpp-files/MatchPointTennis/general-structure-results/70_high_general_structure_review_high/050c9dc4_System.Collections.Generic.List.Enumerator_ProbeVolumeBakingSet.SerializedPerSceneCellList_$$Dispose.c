/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 050c9dc4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050ca224) */
/* WARNING: Removing unreachable block (ram,0x050ca254) */
/* WARNING: Removing unreachable block (ram,0x050ca2a4) */

undefined8
System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
          (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long in_x11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *plVar13;
  undefined8 uVar14;
  
  while (in_x11 != unaff_x24) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_044822ac();
      goto 
      System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__MoveNext
      ;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);

  System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__MoveNext
  :
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_09f1f018;
  puVar2 = PTR_DAT_09f1e5b8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_050ca040;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar6,lVar9,0);
LAB_050ca040:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar3 = PTR_DAT_09f1f008;
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_04485110(plVar6,*(undefined8 *)PTR_DAT_09f1f008);
      if (plVar6 == (long *)0x0) goto LAB_050ca218;
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_050ca1f0;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_050ca0a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar6,lVar9,1);
LAB_050ca0a0:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar13 = *(long **)(unaff_x21 + 0x28);
    uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar14 = FUN_07a4ce38(uVar14,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = (**(code **)(*plVar13 + 0x508))(plVar13,uVar7,uVar14);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_04481fb8(lVar10);
    }
    if (lVar9 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = thunk_FUN_04485110(lVar9,lVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar9,lVar10);
      }
    }
    lVar9 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44();
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_050ca20c;
    }
  }
LAB_050ca1f0:
  puVar5 = (undefined8 *)FUN_044822ac(plVar6,*(long *)puVar3,0);
LAB_050ca20c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_050ca218:
  if (unaff_x22 != 0) {
    uVar7 = FUN_05baf9bc();
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


