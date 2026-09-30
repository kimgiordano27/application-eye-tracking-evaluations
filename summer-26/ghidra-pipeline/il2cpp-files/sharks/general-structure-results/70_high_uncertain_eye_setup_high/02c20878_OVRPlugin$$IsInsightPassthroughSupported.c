/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 02c20878
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c20b98) */

void OVRPlugin__IsInsightPassthroughSupported(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  long *unaff_x22;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01843fdc();
  uVar1 = FUN_02c168f0(0);
  if (DAT_03a25f2b == '\0') {
    FUN_017fc350(PTR_DAT_03806cc0);
    DAT_03a25f2b = '\x01';
  }
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar2 = *unaff_x22;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20);
  uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03800c10);
  FUN_02b27cbc(uVar3,uVar1,uVar6,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x60),uVar3);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar2 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),5);
  plVar5 = (long *)(unaff_x20 + 0x48);
  *plVar5 = lVar2;
  thunk_FUN_0188fd20(plVar5);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar1 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  thunk_FUN_0188fd20();
  if (*plVar5 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar2 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar5 = lVar2;
    thunk_FUN_0188fd20(plVar5);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),7);
    lVar2 = FUN_02a43498(uVar3,uVar1,0);
    *plVar5 = lVar2;
    thunk_FUN_0188fd20(plVar5);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar2 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x10);
  plVar5 = (long *)(unaff_x20 + 0x38);
  *plVar5 = lVar2;
  thunk_FUN_0188fd20(plVar5);
  if (*plVar5 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar2 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar5 = lVar2;
    thunk_FUN_0188fd20(plVar5);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar1 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  thunk_FUN_0188fd20();
  uVar4 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba48,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03803df0,0
                                ), (uVar4 & 1) == 0)) {
    uVar1 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar4 = FUN_02a4fe7c(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380b708,0);
      if ((uVar4 & 1) != 0) goto LAB_02c20a94;
      uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar4 = thunk_FUN_02a4fb2c(uVar1,*(undefined8 *)PTR_DAT_0380ba40,0);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba28
                                   ,0), (uVar4 & 1) == 0)) {
      uVar4 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba38,0
                                );
      if ((uVar4 & 1) == 0) {
        uVar4 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba18
                                   ,0);
        if ((uVar4 & 1) != 0) {
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


