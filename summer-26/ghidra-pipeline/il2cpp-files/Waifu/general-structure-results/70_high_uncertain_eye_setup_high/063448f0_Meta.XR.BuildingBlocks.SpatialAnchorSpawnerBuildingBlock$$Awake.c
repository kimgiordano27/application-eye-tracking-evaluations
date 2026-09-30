/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$Awake
ENTRY_POINT: 063448f0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__Awake(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long lVar7;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  while (param_1 != 0) {
    lVar4 = FUN_04ab0b48(param_1,unaff_w21,*(undefined8 *)(unaff_x25 + 0xbd0));
    lVar5 = FUN_05b961dc(*(undefined8 *)(unaff_x29 + 0xcb0));
    if ((lVar5 == 0) || (lVar5 = FUN_06317920(lVar5,0), lVar5 == 0)) break;
    lVar7 = unaff_x20 << ((ulong)(unaff_w21 + 0x10) & 0x3f);
    uVar6 = FUN_0636660c(lVar5,lVar7,0);
    lVar5 = FUN_05b961dc(*(undefined8 *)(unaff_x29 + 0xcb0));
    if ((lVar5 == 0) ||
       (((lVar5 = FUN_06317920(lVar5,0), lVar4 == 0 || (*(long *)(lVar4 + 0x20) == 0)) ||
        (lVar5 == 0)))) break;
    uVar3 = FUN_063663d0(lVar5,lVar7,(int)unaff_x19[7],*(undefined4 *)(lVar4 + 0x14),
                         *(undefined4 *)(*(long *)(lVar4 + 0x20) + 0x18),0);
    if ((uVar6 & 1) != 0) {
      lVar5 = FUN_05b961dc(*(undefined8 *)(unaff_x29 + 0xcb0));
      if ((lVar5 == 0) || (lVar5 = FUN_06317920(lVar5,0), lVar5 == 0)) break;
      FUN_06366684(lVar5,uVar3,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),0);
    }
    lVar4 = unaff_x19[0x10];
    if (lVar4 == 0) break;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)(unaff_x26 + 4000);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
    }
    else {
      System_Collections_Generic_List<RuleMatcher>__BinarySearch
                (lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w21 = unaff_w21 + 1;
    lVar4 = (**(code **)(*unaff_x19 + 0x1f8))();
    if (lVar4 == 0) break;
    iVar2 = FUN_06339124();
    if (iVar2 <= unaff_w21) {
      return;
    }
    lVar4 = (**(code **)(*unaff_x19 + 0x1f8))();
    if (lVar4 == 0) break;
    param_1 = *(long *)(lVar4 + 0x80);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


