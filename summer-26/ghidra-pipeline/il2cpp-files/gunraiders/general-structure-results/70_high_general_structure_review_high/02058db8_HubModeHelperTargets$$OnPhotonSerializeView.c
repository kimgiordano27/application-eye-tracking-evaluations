/*
FUNCTION_NAME: HubModeHelperTargets$$OnPhotonSerializeView
ENTRY_POINT: 02058db8
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


void HubModeHelperTargets__OnPhotonSerializeView(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  int unaff_w19;
  long unaff_x20;
  undefined8 uVar16;
  int iVar17;
  long *unaff_x26;
  long unaff_x27;
  long *plVar18;
  float fVar19;
  
  plVar18 = *(long **)(unaff_x27 + 0x2d8);
  lVar9 = *plVar18;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar9 = *plVar18;
  }
  if (**(long **)(lVar9 + 0xb8) != 0) {
    uVar16 = *(undefined8 *)(**(long **)(lVar9 + 0xb8) + 0x1c0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_03d4f3bc(uVar16,0,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = *plVar18;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar9 = *plVar18;
      }
      if ((**(long **)(lVar9 + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x1c0), lVar9 == 0)) goto LAB_020590ec;
      uVar16 = *(undefined8 *)(lVar9 + 0x58);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_03d4f3bc(uVar16,0,0);
      if ((uVar10 & 1) != 0) {
        lVar9 = *plVar18;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar9 = *plVar18;
        }
        if (((**(long **)(lVar9 + 0xb8) == 0) ||
            (lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x1c0), lVar9 == 0)) ||
           (lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0)) goto LAB_020590ec;
        uVar16 = FUN_02362b68(lVar9,*(undefined8 *)System_ComponentModel_TimeSpanConverter_var);
        puVar8 = System_Action<string,_RoomStatsManager_RegionLobbyStat[]>_TypeInfo;
        puVar7 = PTR_DAT_042301a0;
        fVar6 = DAT_00b933a4;
        fVar5 = DAT_00b931e8;
        fVar4 = DAT_00b9306c;
        if (0 < unaff_w19) {
          iVar17 = 0;
          do {
            uVar11 = FUN_03d468ac();
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x26);
            }
            lVar9 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>
                              (uVar16,uVar11,
                               *(undefined8 *)
                                UnityEngine_UI_Collections_IndexedSet<ICanvasElement>_TypeInfo);
            lVar12 = *plVar18;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(lVar12);
              lVar12 = *plVar18;
            }
            if (((**(long **)(lVar12 + 0xb8) == 0) ||
                (lVar12 = *(long *)(**(long **)(lVar12 + 0xb8) + 0x1c0), lVar12 == 0)) ||
               (lVar9 == 0)) goto LAB_020590ec;
            uVar1 = *(undefined4 *)(lVar12 + 400);
            *(undefined4 *)(lVar9 + 0x6c) = uVar1;
            *(undefined4 *)(lVar9 + 0x70) = uVar1;
            lVar12 = *(long *)(unaff_x20 + 0x20);
            if (lVar12 == 0) goto LAB_020590ec;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar15 = *(long *)System_Action<Vector2[],_byte[],_int>_TypeInfo;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_020590ec;
            uVar3 = *(uint *)(lVar12 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar3 + 1;
              *(long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = lVar9;
            }
            else {
              FUN_02d5004c(lVar12,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            if ((**(long **)(*plVar18 + 0xb8) == 0) ||
               (lVar12 = *(long *)(**(long **)(*plVar18 + 0xb8) + 0x1c0), lVar12 == 0))
            goto LAB_020590ec;
            FUN_020ad64c(lVar9,*(undefined4 *)(lVar12 + 0x370),0);
            iVar2 = *(int *)(lVar9 + 0x20);
            if (iVar2 == 0xf) {
              if (((*(long *)(unaff_x20 + 0x20) == 0) ||
                  (lVar12 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),iVar17,*(undefined8 *)puVar8),
                  lVar12 == 0)) || (lVar12 = FUN_03d468ac(lVar12,0), lVar12 == 0))
              goto LAB_020590ec;
              fVar19 = (float)iVar17 * fVar5;
            }
            else {
              if ((*(long *)(unaff_x20 + 0x20) == 0) ||
                 (lVar12 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),iVar17,*(undefined8 *)puVar8),
                 lVar12 == 0)) goto LAB_020590ec;
              lVar12 = FUN_03d468ac(lVar12,0);
              if (iVar2 == 0x1e) {
                if (lVar12 == 0) goto LAB_020590ec;
                fVar19 = (float)iVar17 * fVar6;
              }
              else {
                if (lVar12 == 0) goto LAB_020590ec;
                fVar19 = (float)iVar17 * fVar4;
              }
            }
            FUN_03d54784(fVar19,0,0,lVar12,0);
            if ((*(long *)(unaff_x20 + 0x20) == 0) ||
               (lVar12 = FUN_02d4fd88(*(long *)(unaff_x20 + 0x20),iVar17,*(undefined8 *)puVar8),
               lVar12 == 0)) goto LAB_020590ec;
            lVar12 = FUN_03d468ac(lVar12,0);
            if (DAT_0452d6ea == '\0') {
              FUN_01c5d288(puVar7);
              DAT_0452d6ea = '\x01';
            }
            if (lVar12 == 0) goto LAB_020590ec;
            puVar14 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
            FUN_03d55a04(*puVar14,puVar14[1],puVar14[2],puVar14[3],lVar12,0);
            iVar17 = iVar17 + 1;
            *(long *)(lVar9 + 0x48) = unaff_x20;
          } while (unaff_w19 != iVar17);
        }
      }
    }
    return;
  }
LAB_020590ec:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


