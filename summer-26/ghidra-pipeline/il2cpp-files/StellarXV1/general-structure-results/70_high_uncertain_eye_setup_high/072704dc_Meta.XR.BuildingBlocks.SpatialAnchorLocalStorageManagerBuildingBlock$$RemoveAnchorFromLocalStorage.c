/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$RemoveAnchorFromLocalStorage
ENTRY_POINT: 072704dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__RemoveAnchorFromLocalStorage
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  
  do {
    FUN_05c26d88(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
LAB_072704e8:
    do {
      unaff_x24 = unaff_x24 + 1;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x24) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_07270510;
      lVar4 = *(long *)(unaff_x27 + unaff_x24 * 8);
    } while ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) < 1));
    sVar2 = FUN_074e0328(lVar4,0,0);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_07270510;
    lVar4 = *(long *)(unaff_x27 + unaff_x24 * 8);
    if (lVar4 == 0) goto LAB_07270514;
    sVar3 = FUN_074e0328(lVar4,0,0);
    uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
    if (sVar3 == 0x2b) {
LAB_0727041c:
      if (uVar7 <= unaff_x24) {
LAB_07270510:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar4 = *(long *)(unaff_x27 + unaff_x24 * 8);
      if (lVar4 == 0) goto LAB_07270514;
      uVar5 = FUN_074e87b0(lVar4,1,*(int *)(lVar4 + 0x10) + -1,0);
    }
    else {
      if (uVar7 <= unaff_x24) goto LAB_07270510;
      lVar4 = *(long *)(unaff_x27 + unaff_x24 * 8);
      if (lVar4 == 0) goto LAB_07270514;
      sVar3 = FUN_074e0328(lVar4,0,0);
      uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
      if (sVar3 == 0x2d) goto LAB_0727041c;
      if (uVar7 <= unaff_x24) goto LAB_07270510;
      uVar5 = *(undefined8 *)(unaff_x27 + unaff_x24 * 8);
    }
    if (sVar2 == 0x2d) {
      param_2 = *(long *)(unaff_x19 + 0x20);
    }
    else {
      param_2 = *(long *)(unaff_x19 + 0x18);
    }
    param_3 = thunk_FUN_040b4efc(*unaff_x25);
    FUN_080023c8(param_3,uVar5,0x19,0);
    if (param_2 == 0) {
LAB_07270514:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(param_2 + 0x10);
    lVar8 = *unaff_x26;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_07270514;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = param_3;
      thunk_FUN_040ec700(puVar6,param_3);
      goto LAB_072704e8;
    }
    param_1 = *(long *)(lVar8 + 0x20);
  } while( true );
}


