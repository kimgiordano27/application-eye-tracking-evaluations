/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_1$$.ctor
ENTRY_POINT: 06e29e84
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int *unaff_x19;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x24;
  long *plVar10;
  long lVar11;
  
                    /* try { // try from 06e29e84 to 06f29e87 has its CatchHandler @ 06e29efc */
                    /* try { // try from 06e29e88 to 06f29e8b has its CatchHandler @ 06e29ef8 */
  lVar11 = *(long *)(unaff_x19 + 8);
  plVar10 = *(long **)(unaff_x24 + 0xe8);
  if (*unaff_x19 == 0) {
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *(long *)(lVar11 + 0x10);
    plVar8 = *(long **)(*(long *)(lVar11 + 0x18) + 0x50);
    uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93878);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e86a58) {
          lVar4 = lVar4 + (long)(*piVar6 + 0x13) * 0x10 + 0x138;
          goto LAB_06e29f30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e86a58,0x13);
LAB_06e29f30:
    FUN_06dfc8c8(uVar2,plVar8,*(undefined8 *)(lVar4 + 8),0);
    if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x78);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e93870);
    FUN_06df980c(uVar3,uVar9,*(undefined8 *)PTR_DAT_08e93888,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = FUN_06e0bbc8(lVar7,uVar2,uVar3,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = FUN_05b9625c(lVar7,*(undefined8 *)PTR_DAT_08e929e0);
    uVar5 = FUN_05ac29c8();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = uVar2;
      thunk_FUN_03d233cc(unaff_x19 + 10,0);
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0416e36c(unaff_x19 + 2);
      return;
    }
  }
  FUN_05ac2a0c();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar11 + 0x20) != 0) {
    lVar7 = *(long *)(*(long *)(lVar11 + 0x20) + 0x88);
    if (lVar7 != 0) {
      FUN_0675af18(lVar7,*(undefined8 *)(lVar11 + 0x28),&stack0x00000008,
                   *(undefined8 *)PTR_DAT_08e93960);
      *unaff_x19 = -2;
      puVar1 = PTR_DAT_08e78268;
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_063c7630(unaff_x19 + 2,extraout_x1,*(undefined8 *)puVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


