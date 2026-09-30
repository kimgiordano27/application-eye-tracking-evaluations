/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.ctor
ENTRY_POINT: 050c9d88
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050ca224) */
/* WARNING: Removing unreachable block (ram,0x050ca254) */
/* WARNING: Removing unreachable block (ram,0x050ca2a4) */

undefined8
System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___ctor
          (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  
  lVar5 = thunk_FUN_04485110();
  if (lVar5 != 0) {
    lVar12 = *unaff_x24;
    plVar6 = (long *)thunk_FUN_04485110();
    lVar5 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto 
          System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__MoveNext
          ;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar6,lVar12,0);

    System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__MoveNext
    :
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar4 = PTR_DAT_09f1f018;
    puVar2 = PTR_DAT_09f1e5b8;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar12 = *plVar6;
      lVar5 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_050ca040;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac(plVar6,lVar5,0);
LAB_050ca040:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar3 = PTR_DAT_09f1f008;
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_04485110(plVar6,*(undefined8 *)PTR_DAT_09f1f008);
        if (plVar6 == (long *)0x0) goto LAB_050ca218;
        lVar5 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 == 0) goto LAB_050ca1f0;
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto 
        System_Collections_Generic_List_Enumerator<ProbeVolumeStreamableAsset_StreamableCellDesc>__Dispose
        ;
      }
      lVar12 = *plVar6;
      lVar5 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_050ca0a0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac(plVar6,lVar5,1);
LAB_050ca0a0:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
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
      lVar5 = (**(code **)(*plVar13 + 0x508))(plVar13,uVar8,uVar14);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04481fb8(lVar12);
      }
      if (lVar5 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = thunk_FUN_04485110(lVar5,lVar12);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(lVar5,lVar12);
        }
      }
      lVar5 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44();
      }
    } while( true );
  }
  goto LAB_050ca274;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
System_Collections_Generic_List_Enumerator<ProbeVolumeStreamableAsset_StreamableCellDesc>__Dispose:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_050ca20c;
    }
  }
LAB_050ca1f0:
  puVar7 = (undefined8 *)FUN_044822ac(plVar6,*(long *)puVar3,0);
LAB_050ca20c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_050ca218:
  if (unaff_x22 != 0) {
    uVar8 = FUN_05baf9bc();
    return uVar8;
  }
LAB_050ca274:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


