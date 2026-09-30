/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$SaveAnchorUuidToLocalStorage
ENTRY_POINT: 072703d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__SaveAnchorUuidToLocalStorage
               (long param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  short unaff_w21;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  while (param_1 != 0) {
    sVar2 = FUN_074e0328(param_1,0,0);
    uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
    if (sVar2 == 0x2b) {
LAB_0727041c:
      if (uVar7 <= unaff_x24) goto LAB_07270510;
      lVar3 = *(long *)(unaff_x27 + unaff_x24 * 8);
      if (lVar3 == 0) break;
      uVar4 = FUN_074e87b0(lVar3,1,*(int *)(lVar3 + 0x10) + -1,0);
    }
    else {
      if (uVar7 <= unaff_x24) goto LAB_07270510;
      lVar3 = *(long *)(unaff_x27 + unaff_x24 * 8);
      if (lVar3 == 0) break;
      sVar2 = FUN_074e0328(lVar3,0,0);
      uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
      if (sVar2 == 0x2d) goto LAB_0727041c;
      if (uVar7 <= unaff_x24) goto LAB_07270510;
      uVar4 = *(undefined8 *)(unaff_x27 + unaff_x24 * 8);
    }
    if (unaff_w21 == 0x2d) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
    }
    else {
      lVar3 = *(long *)(unaff_x19 + 0x18);
    }
    uVar5 = thunk_FUN_040b4efc(*unaff_x25);
    FUN_080023c8(uVar5,uVar4,0x19,0);
    if (lVar3 == 0) break;
    lVar8 = *(long *)(lVar3 + 0x10);
    lVar9 = *unaff_x26;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar5;
      thunk_FUN_040ec700(puVar6,uVar5);
    }
    else {
      FUN_05c26d88(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x24) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_07270510;
      lVar3 = *(long *)(unaff_x27 + unaff_x24 * 8);
    } while ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) < 1));
    unaff_w21 = FUN_074e0328(lVar3,0,0);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) {
LAB_07270510:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    param_1 = *(long *)(unaff_x27 + unaff_x24 * 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


