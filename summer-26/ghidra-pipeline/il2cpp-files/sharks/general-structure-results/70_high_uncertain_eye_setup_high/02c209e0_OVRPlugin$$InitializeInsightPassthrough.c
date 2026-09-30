/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 02c209e0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c20b98) */

void OVRPlugin__InitializeInsightPassthrough(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar1 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  thunk_FUN_0188fd20();
  uVar2 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba48,0);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03803df0,0
                                ), (uVar2 & 1) == 0)) {
    uVar1 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar2 = FUN_02a4fe7c(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380b708,0);
      if ((uVar2 & 1) != 0) goto LAB_02c20a94;
      uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar2 = thunk_FUN_02a4fb2c(uVar1,*(undefined8 *)PTR_DAT_0380ba40,0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba28
                                   ,0), (uVar2 & 1) == 0)) {
      uVar2 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba38,0
                                );
      if ((uVar2 & 1) == 0) {
        uVar2 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba18
                                   ,0);
        if ((uVar2 & 1) != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_0380ba20;
          thunk_FUN_0188fd20();
        }
      }
      else {
        *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_0380ba30;
        thunk_FUN_0188fd20();
      }
      goto LAB_02c20aac;
    }
  }
LAB_02c20a94:
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_0380ba10;
  thunk_FUN_0188fd20();
LAB_02c20aac:
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar1 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),10);
    *(undefined8 *)(unaff_x20 + 200) = uVar1;
    thunk_FUN_0188fd20();
    FUN_02c20ea8();
    if (*(char *)(unaff_x20 + 0xec) != '\0') {
      FUN_02c20178();
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
    }
    *(undefined1 *)(unaff_x20 + 0xa0) = 1;
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_0184c01c();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


