/*
FUNCTION_NAME: GameAnalyticsSDK.GameAnalytics$$StartTimer
ENTRY_POINT: 02040ef4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void GameAnalyticsSDK_GameAnalytics__StartTimer(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  int iVar10;
  
  puVar3 = System_Collections_Generic_IEnumerable<ISplineModificationHandler>_TypeInfo;
  puVar2 = System_Collections_Generic_IEnumerable<IResourceLocator>_TypeInfo;
  iVar10 = 0;
  do {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x1f0);
    uVar4 = FUN_03d468ac();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x22);
    }
    lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>
                      (uVar9,uVar4,*(undefined8 *)puVar3);
    if ((lVar5 == 0) || (lVar6 = FUN_03d468e8(lVar5,0), lVar6 == 0)) goto LAB_02041818;
    FUN_03d499ec(lVar6,0,0);
    lVar6 = *(long *)(unaff_x19 + 0x1f8);
    if (lVar6 == 0) goto LAB_02041818;
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar8 = *(long *)puVar2;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_02041818;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
    }
    else {
      FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < *(int *)(unaff_x19 + 0x204));
  if (0 < *(int *)(unaff_x19 + 0x224)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x210);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x218);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x224));
  }
  if (0 < *(int *)(unaff_x19 + 0x23c)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x228);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x230);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x23c));
  }
  if (0 < *(int *)(unaff_x19 + 0x25c)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x248);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x250);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x25c));
  }
  if (0 < *(int *)(unaff_x19 + 0x27c)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x268);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x270);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x27c));
  }
  if (0 < *(int *)(unaff_x19 + 0x294)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x280);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x288);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x294));
  }
  puVar2 = System_Collections_Generic_IEnumerable<int>_TypeInfo;
  if (0 < *(int *)(unaff_x19 + 0x2b4)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x2a0);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>
                        (uVar9,uVar4,*(undefined8 *)puVar2);
      if ((lVar5 == 0) || (lVar6 = FUN_03d468e8(lVar5,0), lVar6 == 0)) goto LAB_02041818;
      FUN_03d499ec(lVar6,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x2a8);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x2b4));
  }
  if (0 < *(int *)(unaff_x19 + 0x2d4)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x2c0);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x2c8);
      uVar4 = FUN_02362b68(lVar5,*unaff_x25);
      if (lVar6 == 0) goto LAB_02041818;
      lVar5 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      }
      else {
        FUN_02d5004c(lVar6,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x2d4));
  }
  if (0 < *(int *)(unaff_x19 + 0x2f4)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x2e0);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x2e8);
      uVar4 = FUN_02362b68(lVar5,*unaff_x25);
      if (lVar6 == 0) goto LAB_02041818;
      lVar5 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      }
      else {
        FUN_02d5004c(lVar6,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x2f4));
  }
  if (0 < *(int *)(unaff_x19 + 0x414)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x400);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x408);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x414));
  }
  if (0 < *(int *)(unaff_x19 + 0x434)) {
    iVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x420);
      uVar4 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar5 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar9,uVar4,*unaff_x23)
      ;
      if (lVar5 == 0) {
LAB_02041818:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03d499ec(lVar5,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x428);
      if (lVar6 == 0) goto LAB_02041818;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
      }
      else {
        FUN_02d5004c(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x19 + 0x434));
  }
  FUN_0204181c();
  FUN_0204195c();
  FUN_02041a9c();
  FUN_02041bdc();
  FUN_02041d1c();
  FUN_02041e5c();
  FUN_02041f9c();
  return;
}


