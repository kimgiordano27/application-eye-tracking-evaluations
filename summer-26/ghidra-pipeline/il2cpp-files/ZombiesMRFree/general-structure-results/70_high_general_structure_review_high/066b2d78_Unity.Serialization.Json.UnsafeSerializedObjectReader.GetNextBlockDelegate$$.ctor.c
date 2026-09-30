/*
FUNCTION_NAME: Unity.Serialization.Json.UnsafeSerializedObjectReader.GetNextBlockDelegate$$.ctor
ENTRY_POINT: 066b2d78
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066b3090) */

long Unity_Serialization_Json_UnsafeSerializedObjectReader_GetNextBlockDelegate___ctor
               (ulong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_List<Pose>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f70b30);
    FUN_02fe925c(PTR_DAT_06f70b38);
    FUN_02fe925c(System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<PolyNode>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<Point64>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(PTR_DAT_06f6de60);
    *(undefined1 *)(unaff_x21 + 6) = 1;
  }
  lVar9 = thunk_FUN_0301080c(*unaff_x22);
  FUN_0442fab4(lVar9,*unaff_x19);
  puVar5 = PTR_DAT_06f70b30;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  plVar10 = (long *)FUN_06906014(*(long *)(unaff_x20 + 0x20),0);
  puVar8 = System_Collections_Generic_List<ProbeVolumePerSceneData>_TypeInfo;
  puVar7 = System_Collections_Generic_List<Pose>_TypeInfo;
  puVar6 = PTR_DAT_06f70b38;
  puVar4 = PTR_DAT_06f6de60;
  puVar3 = PTR_DAT_06f6d618;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  do {
    lVar15 = *plVar10;
    lVar14 = *(long *)puVar6;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_066b2e8c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_02feb5b8(plVar10,lVar14,0);
LAB_066b2e8c:
    uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar16 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_03010710(plVar10,*(undefined8 *)puVar5);
      if (plVar10 == (long *)0x0) {
        return lVar9;
      }
      lVar15 = *plVar10;
      lVar14 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 == 0) goto LAB_066b3028;
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar10;
    lVar14 = *(long *)puVar6;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_066b2eec;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_02feb5b8(plVar10,lVar14,1);
LAB_066b2eec:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar12);
    }
    lVar14 = FUN_068f5db8(plVar12,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar16 = FUN_068f8bc4(lVar14,0);
    if ((uVar16 & 1) != 0) {
      uVar13 = FUN_03bbe5d0(plVar12,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar16 = FUN_068f8810(uVar13,0,0);
      if ((uVar16 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar14 = *(long *)(lVar9 + 0x10);
        lVar15 = *(long *)puVar8;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
          *puVar11 = uVar13;
          thunk_FUN_03048534(puVar11,uVar13);
        }
        else {
          FUN_044302e8(lVar9,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == lVar14) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_066b3044;
    }
  }
LAB_066b3028:
  puVar11 = (undefined8 *)FUN_02feb5b8(plVar10,lVar14,0);
LAB_066b3044:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return lVar9;
}


