/*
FUNCTION_NAME: GameAnalyticsSDK.GameAnalytics$$StopTimer
ENTRY_POINT: 020410ec
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


void GameAnalyticsSDK_GameAnalytics__StopTimer(long param_1)

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
  
  while (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x24;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    }
    else {
      FUN_02d5004c(param_1,unaff_x20,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w27 = unaff_w27 + 1;
    if (*(int *)(unaff_x19 + 0x23c) <= unaff_w27) {
      if (*(int *)(unaff_x19 + 0x25c) < 1) goto LAB_02041214;
      iVar9 = 0;
      goto LAB_02041160;
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x228);
    uVar3 = FUN_03d468ac();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x22);
    }
    unaff_x20 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>
                          (uVar8,uVar3,*unaff_x23);
    if (unaff_x20 == 0) break;
    FUN_03d499ec(unaff_x20,0,0);
    param_1 = *(long *)(unaff_x19 + 0x230);
  }
LAB_02041818:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
  while( true ) {
    FUN_03d499ec(lVar4,0,0);
    lVar6 = *(long *)(unaff_x19 + 0x250);
    if (lVar6 == 0) goto LAB_02041818;
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar7 = *unaff_x24;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_02041818;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
    }
    else {
      FUN_02d5004c(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    iVar9 = iVar9 + 1;
    if (*(int *)(unaff_x19 + 0x25c) <= iVar9) break;
LAB_02041160:
    uVar8 = *(undefined8 *)(unaff_x19 + 0x248);
    uVar3 = FUN_03d468ac();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x22);
    }
    lVar4 = System_Array__InternalArray__ICollection_Add<TerrainTileCoord>(uVar8,uVar3,*unaff_x23);
    if (lVar4 == 0) goto LAB_02041818;
  }
LAB_02041214:
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
      lVar6 = *(long *)(unaff_x19 + 0x270);
      if (lVar6 == 0) goto LAB_02041818;
      lVar5 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
      lVar6 = *(long *)(unaff_x19 + 0x288);
      if (lVar6 == 0) goto LAB_02041818;
      lVar5 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
      if ((lVar4 == 0) || (lVar6 = FUN_03d468e8(lVar4,0), lVar6 == 0)) goto LAB_02041818;
      FUN_03d499ec(lVar6,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x2a8);
      if (lVar6 == 0) goto LAB_02041818;
      lVar5 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
      lVar6 = *(long *)(unaff_x19 + 0x2c8);
      uVar3 = FUN_02362b68(lVar4,*unaff_x25);
      if (lVar6 == 0) goto LAB_02041818;
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      }
      else {
        FUN_02d5004c(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
      lVar6 = *(long *)(unaff_x19 + 0x2e8);
      uVar3 = FUN_02362b68(lVar4,*unaff_x25);
      if (lVar6 == 0) goto LAB_02041818;
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      }
      else {
        FUN_02d5004c(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
      lVar6 = *(long *)(unaff_x19 + 0x408);
      if (lVar6 == 0) goto LAB_02041818;
      lVar5 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
      if (lVar4 == 0) goto LAB_02041818;
      FUN_03d499ec(lVar4,0,0);
      lVar6 = *(long *)(unaff_x19 + 0x428);
      if (lVar6 == 0) goto LAB_02041818;
      lVar5 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x24;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_02041818;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_02d5004c(lVar6,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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


