/*
FUNCTION_NAME: GameAnalyticsSDK.GameAnalytics$$PauseTimer
ENTRY_POINT: 02040f9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void GameAnalyticsSDK_GameAnalytics__PauseTimer(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  int iVar9;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  do {
    *(long *)(param_1 + 0x20) = unaff_x20;
    while( true ) {
      unaff_w27 = unaff_w27 + 1;
      if (*(int *)(unaff_x19 + 0x204) <= unaff_w27) {
        if (*(int *)(unaff_x19 + 0x224) < 1) goto LAB_0204108c;
        iVar9 = 0;
        goto LAB_02040fd8;
      }
      uVar8 = *(undefined8 *)(unaff_x19 + 0x1f0);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      unaff_x20 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>
                            (uVar8,uVar3,*unaff_x28);
      if ((unaff_x20 == 0) || (lVar4 = FUN_03d468e8(unaff_x20,0), lVar4 == 0)) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar4 = *(long *)(unaff_x19 + 0x1f8);
      if (lVar4 == 0) goto LAB_02041818;
      param_1 = *(long *)(lVar4 + 0x10);
      lVar5 = *unaff_x29;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(param_1 + 0x18)) break;
      FUN_02d5004c(lVar4,unaff_x20,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                  );
    }
    param_1 = param_1 + (long)(int)uVar1 * 8;
    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
  } while( true );
  while( true ) {
    FUN_03d499ec(lVar4,0,0);
    lVar5 = *(long *)(unaff_x19 + 0x218);
    if (lVar5 == 0) goto LAB_02041818;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = *unaff_x24;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_02041818;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
    }
    else {
      FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    iVar9 = iVar9 + 1;
    if (*(int *)(unaff_x19 + 0x224) <= iVar9) break;
LAB_02040fd8:
    uVar8 = *(undefined8 *)(unaff_x19 + 0x210);
    uVar3 = FUN_03d468ac();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x22);
    }
    lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23);
    if (lVar4 == 0) goto LAB_02041818;
  }
LAB_0204108c:
  if (0 < *(int *)(unaff_x19 + 0x23c)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x228);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x230);
      if (lVar5 == 0) goto LAB_02041818;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x23c));
  }
  if (0 < *(int *)(unaff_x19 + 0x25c)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x248);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x250);
      if (lVar5 == 0) goto LAB_02041818;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x25c));
  }
  if (0 < *(int *)(unaff_x19 + 0x27c)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x268);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x270);
      if (lVar5 == 0) goto LAB_02041818;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x27c));
  }
  if (0 < *(int *)(unaff_x19 + 0x294)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x280);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x288);
      if (lVar5 == 0) goto LAB_02041818;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x294));
  }
  puVar2 = System_Collections_Generic_IEnumerable<int>_TypeInfo;
  if (0 < *(int *)(unaff_x19 + 0x2b4)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2a0);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>
                        (uVar8,uVar3,*(undefined8 *)puVar2);
      if ((lVar4 == 0) || (lVar5 = FUN_03d468e8(lVar4,0), lVar5 == 0)) goto LAB_02041818;
      FUN_03d499ec(lVar5,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x2a8);
      if (lVar5 == 0) goto LAB_02041818;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x2b4));
  }
  if (0 < *(int *)(unaff_x19 + 0x2d4)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2c0);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x2c8);
      uVar3 = FUN_02362b68(lVar4,*unaff_x25);
      if (lVar5 == 0) goto LAB_02041818;
      lVar4 = *(long *)(lVar5 + 0x10);
      lVar6 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      }
      else {
        FUN_02d5004c(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x2d4));
  }
  if (0 < *(int *)(unaff_x19 + 0x2f4)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2e0);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x2e8);
      uVar3 = FUN_02362b68(lVar4,*unaff_x25);
      if (lVar5 == 0) goto LAB_02041818;
      lVar4 = *(long *)(lVar5 + 0x10);
      lVar6 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      }
      else {
        FUN_02d5004c(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x2f4));
  }
  if (0 < *(int *)(unaff_x19 + 0x414)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x400);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x408);
      if (lVar5 == 0) goto LAB_02041818;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x414));
  }
  if (0 < *(int *)(unaff_x19 + 0x434)) {
    iVar9 = 0;
    do {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x420);
      uVar3 = FUN_03d468ac();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x22);
      }
      lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23)
      ;
      if (lVar4 == 0) {
LAB_02041818:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03d499ec(lVar4,0,0);
      lVar5 = *(long *)(unaff_x19 + 0x428);
      if (lVar5 == 0) goto LAB_02041818;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar5,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x19 + 0x434));
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


