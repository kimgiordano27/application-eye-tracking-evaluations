/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 0290867c
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  long unaff_x19;
  int iVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x7e8));
  thunk_FUN_0159f088(PTR_DAT_06ddaad8);
  thunk_FUN_0159f088(PTR_DAT_06de34d8);
  thunk_FUN_0159f088(PTR_DAT_06e38db8);
  *(undefined1 *)(unaff_x21 + 0xcc3) = 1;
  puVar2 = PTR_DAT_06e397e8;
  iVar8 = (int)unaff_x20;
  uStack000000000000000c = 0;
  if (0 < iVar8) {
    puVar7 = (ushort *)(unaff_x19 + (long)iVar8 * 2);
    lVar9 = (long)iVar8;
    do {
      puVar7 = puVar7 + -1;
      unaff_x20 = lVar9;
      if ((0x20 < *puVar7) || ((1L << ((ulong)*puVar7 & 0x3f) & 0x100002600U) == 0)) break;
      unaff_x20 = lVar9 + -1;
      bVar1 = 1 < lVar9;
      lVar9 = unaff_x20;
    } while (bVar1);
  }
  if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar3 = FUN_02909144();
  uVar4 = FUN_0160edfc(*(undefined8 *)puVar2,uVar3);
  if (cRam0000000007233cc5 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    cRam0000000007233cc5 = '\x01';
  }
  puVar2 = PTR_DAT_06e38db8;
  if ((int)unaff_x20 < 0) {
    FUN_031db0c8(0);
  }
  FUN_02aba01c(uVar4,*(undefined8 *)puVar2);
  uVar5 = FUN_02908904();
  if ((uVar5 & 1) != 0) {
    return uVar4;
  }
  thunk_FUN_0159f088(PTR_DAT_06dbba10);
  uVar4 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06e58950);
  FUN_028c5828(uVar4,uVar6,0);
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06e51c58);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar4,uVar6);
}


