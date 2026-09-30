/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$EraseAllAnchors
ENTRY_POINT: 076c8544
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__EraseAllAnchors(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  
  FUN_04447ba8(PTR_DAT_09f2e018);
  *(undefined1 *)(unaff_x21 + 0xdb4) = 1;
  if (unaff_x19 == 0) {
LAB_076c85f4:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_076c57a8();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      FUN_076c5d54();
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_076c85f4;
      FUN_076c8928();
    }
    if (*(long *)(unaff_x20 + 0x20) == 0) {
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        FUN_076c5d54();
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_076c85f4;
        FUN_076c870c();
      }
      if (*(long *)(unaff_x20 + 0x30) == 0) {
        FUN_076c5f44();
        return;
      }
      goto LAB_076c8668;
    }
  }
  else {
    FUN_03db7f40();
    FUN_076c5d54();
    unaff_x20 = *(long *)(unaff_x20 + 0x10);
    FUN_03db7f40(unaff_x20);
    FUN_076c888c(unaff_x20);
  }
  FUN_03db7f40();
  FUN_076c5d54();
  unaff_x20 = *(long *)(unaff_x20 + 0x20);
  FUN_03db7f40(unaff_x20);
  FUN_076c8954(unaff_x20);
LAB_076c8668:
  FUN_03db7f40();
  FUN_076c5d54();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_03db7f40(uVar3);
  lVar2 = FUN_076c89f0(uVar3);
  puVar1 = PTR_DAT_09f20b38;
  if ((DAT_0a522db2 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f20b38);
    DAT_0a522db2 = 1;
  }
  uVar3 = FUN_04447c90(*(undefined8 *)puVar1,3);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  thunk_FUN_044bb4b4();
  *(undefined4 *)(lVar2 + 0x30) = 0x3f000000;
  FUN_07a80df4(lVar2,0);
  return;
}


