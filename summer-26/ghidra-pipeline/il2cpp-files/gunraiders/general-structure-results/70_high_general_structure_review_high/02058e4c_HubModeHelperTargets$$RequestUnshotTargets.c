/*
FUNCTION_NAME: HubModeHelperTargets$$RequestUnshotTargets
ENTRY_POINT: 02058e4c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void HubModeHelperTargets__RequestUnshotTargets(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  int unaff_w19;
  long unaff_x20;
  int iVar17;
  long *unaff_x26;
  long *unaff_x27;
  float fVar18;
  
  uVar9 = FUN_03d4f3bc();
  if ((uVar9 & 1) != 0) {
    lVar10 = *unaff_x27;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar10 = *unaff_x27;
    }
    if (((**(long **)(lVar10 + 0xb8) == 0) ||
        (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x1c0), lVar10 == 0)) ||
       (lVar10 = *(long *)(lVar10 + 0x58), lVar10 == 0)) {
LAB_020590ec:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar11 = FUN_02362b68(lVar10,*(undefined8 *)System_ComponentModel_TimeSpanConverter_var);
    puVar8 = System_Action<string,_RoomStatsManager_RegionLobbyStat[]>_TypeInfo;
    puVar7 = PTR_DAT_042301a0;
    fVar6 = DAT_00b933a4;
    fVar5 = DAT_00b931e8;
    fVar4 = DAT_00b9306c;
    if (0 < unaff_w19) {
      iVar17 = 0;
      do {
        uVar12 = FUN_03d468ac();
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        lVar10 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>
                           (uVar11,uVar12,
                            *(undefined8 *)
                             UnityEngine_UI_Collections_IndexedSet<ICanvasElement>_TypeInfo);
        lVar13 = *unaff_x27;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar13);
          lVar13 = *unaff_x27;
        }
        if (((**(long **)(lVar13 + 0xb8) == 0) ||
            (lVar13 = *(long *)(**(long **)(lVar13 + 0xb8) + 0x1c0), lVar13 == 0)) || (lVar10 == 0))
        goto LAB_020590ec;
        uVar1 = *(undefined4 *)(lVar13 + 400);
        *(undefined4 *)(lVar10 + 0x6c) = uVar1;
        *(undefined4 *)(lVar10 + 0x70) = uVar1;
        lVar13 = *(long *)(unaff_x20 + 0x20);
        if (lVar13 == 0) goto LAB_020590ec;
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)System_Action<Vector2[],_byte[],_int>_TypeInfo;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_020590ec;
        uVar3 = *(uint *)(lVar13 + 0x18);
        if (uVar3 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar3 + 1;
          *(long *)(lVar14 + (long)(int)uVar3 * 8 + 0x20) = lVar10;
        }
        else {
          FUN_02d5004c(lVar13,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if ((**(long **)(*unaff_x27 + 0xb8) == 0) ||
           (lVar13 = *(long *)(**(long **)(*unaff_x27 + 0xb8) + 0x1c0), lVar13 == 0))
        goto LAB_020590ec;
        FUN_020ad64c(lVar10,*(undefined4 *)(lVar13 + 0x370),0);
        iVar2 = *(int *)(lVar10 + 0x20);
        if (iVar2 == 0xf) {
          if (((*(long *)(unaff_x20 + 0x20) == 0) ||
              (lVar13 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),iVar17,*(undefined8 *)puVar8),
              lVar13 == 0)) || (lVar13 = FUN_03d468ac(lVar13,0), lVar13 == 0)) goto LAB_020590ec;
          fVar18 = (float)iVar17 * fVar5;
        }
        else {
          if ((*(long *)(unaff_x20 + 0x20) == 0) ||
             (lVar13 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),iVar17,*(undefined8 *)puVar8),
             lVar13 == 0)) goto LAB_020590ec;
          lVar13 = FUN_03d468ac(lVar13,0);
          if (iVar2 == 0x1e) {
            if (lVar13 == 0) goto LAB_020590ec;
            fVar18 = (float)iVar17 * fVar6;
          }
          else {
            if (lVar13 == 0) goto LAB_020590ec;
            fVar18 = (float)iVar17 * fVar4;
          }
        }
        FUN_03d54784(fVar18,0,0,lVar13,0);
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (lVar13 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),iVar17,*(undefined8 *)puVar8),
           lVar13 == 0)) goto LAB_020590ec;
        lVar13 = FUN_03d468ac(lVar13,0);
        if (DAT_0452d6ea == '\0') {
          FUN_01c5d288(puVar7);
          DAT_0452d6ea = '\x01';
        }
        if (lVar13 == 0) goto LAB_020590ec;
        puVar15 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
        FUN_03d55a04(*puVar15,puVar15[1],puVar15[2],puVar15[3],lVar13,0);
        iVar17 = iVar17 + 1;
        *(long *)(lVar10 + 0x48) = unaff_x20;
      } while (unaff_w19 != iVar17);
    }
  }
  return;
}


