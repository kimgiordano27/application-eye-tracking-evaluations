/*
FUNCTION_NAME: OVRPlugin$$get_nativeXrApi
ENTRY_POINT: 0693c5fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_nativeXrApi(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_08486738;
  puVar7 = *(undefined8 **)(unaff_x20 + 0xf0);
  uVar3 = FUN_07c98f88(param_1,0);
  FUN_0693c954(0,DAT_015c5928,0,uVar3,*puVar7,uVar3,unaff_x19 + 0xf0);
                    /* try { // try from 0693c630 to 06a3c633 has its CatchHandler @ 0693c848 */
                    /* try { // try from 0693c634 to 06a3c63f has its CatchHandler @ 0693c864 */
  plVar8 = (long *)(unaff_x19 + 0xb0);
  lVar9 = *plVar8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 0693c654 to 06a3c657 has its CatchHandler @ 0693c854 */
  uVar4 = FUN_07c9e200(lVar9,0,0);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 0693c664 to 06a3c66b has its CatchHandler @ 0693c84c */
    plVar5 = (long *)FUN_07c95014(*(undefined8 *)PTR_DAT_084b6108,0);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
      *plVar8 = 0;
    }
    else {
                    /* try { // try from 0693c67c to 06a3c693 has its CatchHandler @ 0693c868 */
      lVar9 = *(long *)PTR_DAT_084b60c0;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
                    /* try { // try from 0693c698 to 06a3c6a3 has its CatchHandler @ 0693c860 */
      }
      else {
        plVar6 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar6 = (long *)0x0;
        }
      }
      *plVar8 = (long)plVar6;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else {
                    /* try { // try from 0693c6e4 to 06a3c6e7 has its CatchHandler @ 0693c844 */
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar5 = (long *)0x0;
        }
      }
    }
    thunk_FUN_03afed3c(plVar8,plVar5);
  }
  lVar9 = *plVar8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar4 = FUN_07c9c218(lVar9,0,0);
                    /* try { // try from 0693c718 to 06a3c73b has its CatchHandler @ 0693c85c */
  if ((uVar4 & 1) != 0) {
    if (*plVar8 == 0) goto LAB_0693c950;
    uVar3 = FUN_07c379b4(*plVar8,*(undefined8 *)PTR_DAT_0848cbe0,0);
    puVar2 = PTR_DAT_084b60c8;
    uVar3 = FUN_044c8b18(uVar3,*(undefined8 *)PTR_DAT_084b60c8);
                    /* try { // try from 0693c74c to 06a3c753 has its CatchHandler @ 0693c844 */
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xb8),uVar3);
                    /* try { // try from 0693c75c to 06a3c75f has its CatchHandler @ 0693c878 */
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
    uVar3 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b6120,0);
    uVar3 = FUN_044c8b18(uVar3,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xc0),uVar3);
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
    uVar3 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60e0,0);
    uVar3 = FUN_044c8b18(uVar3,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x19 + 200) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 200),uVar3);
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
    uVar3 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60f8,0);
    uVar3 = FUN_044c8b18(uVar3,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd8),uVar3);
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
    uVar3 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60e8,0);
    uVar3 = FUN_044c8b18(uVar3,*(undefined8 *)puVar2);
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd0),uVar3);
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0693c950;
    FUN_07c37db0(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b6130,unaff_x19 + 0x120,0);
  }
  puVar2 = PTR_DAT_084883a0;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar9 != 0) {
      FUN_07cb2770(lVar9,uVar3,0);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
        uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
        FUN_07cb26a0();
        if (lVar9 != 0) {
          FUN_07cb2770(lVar9,uVar3,0);
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
            uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
            FUN_07cb26a0();
            if (lVar9 != 0) {
              FUN_07cb2770(lVar9,uVar3,0);
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                *(undefined1 *)(*(long *)(unaff_x19 + 0x18) + 0x19) = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0693c950:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


