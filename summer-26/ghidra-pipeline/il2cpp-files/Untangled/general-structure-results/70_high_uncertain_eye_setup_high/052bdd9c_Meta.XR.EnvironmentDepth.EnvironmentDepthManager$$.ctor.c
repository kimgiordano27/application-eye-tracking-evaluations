/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$.ctor
ENTRY_POINT: 052bdd9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager___ctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  uint unaff_w23;
  
  if (in_w8 == 0) {
    unaff_x20 = *(undefined8 *)(unaff_x19 + 0x50);
    unaff_w23 = (uint)*(byte *)(unaff_x19 + 0x9c);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(unaff_x20,0);
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 052bde58 to 053bdf67 has its CatchHandler @ 052bde58
                       catch() { ... } // from try @ 052bde58 with catch @ 052bde58
                       catch() { ... } // from try @ 052be030 with catch @ 052bde58
                       catch() { ... } // from try @ 052be0ec with catch @ 052bde58
                       catch() { ... } // from try @ 052be188 with catch @ 052bde58 */
    return;
  }
  TestSceneUsage__Start();
  FUN_052be340();
  if (unaff_w23 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar2 = 0;
LAB_052bdd58:
      FUN_052be1e8(lVar3,uVar4,uVar2);
      return;
    }
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar4,0);
    if ((uVar1 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
        uVar2 = 1;
        goto LAB_052bdd58;
      }
    }
    else {
      lVar3 = *(long *)(unaff_x19 + 0x58);
      if ((lVar3 != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
        FUN_066d3f5c(*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),
                     *(undefined4 *)(lVar3 + 0x18),*(long *)(unaff_x19 + 0x40),0);
        lVar3 = *(long *)(unaff_x19 + 0x58);
        if ((lVar3 != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
          FUN_066d4bec(*(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),
                       *(undefined4 *)(lVar3 + 0x24),*(undefined4 *)(lVar3 + 0x28),
                       *(long *)(unaff_x19 + 0x40),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


