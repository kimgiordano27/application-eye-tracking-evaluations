/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 02c207a8
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c20b98) */

void OVRPlugin__IsMultimodalHandsControllersSupported(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(unaff_x20 + 0xe8) = param_1;
  lVar4 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar4 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar4) != 0) {
    unaff_x21 = FUN_02a43498();
  }
  puVar2 = PTR_DAT_03806cb8;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)PTR_DAT_03806cb8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar3 = FUN_017f7e28(uVar7,unaff_x21,puVar1,*(undefined8 *)(*(long *)puVar2 + 0xb8));
  if ((uVar3 & 1) == 0) {
    uVar7 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,0x11);
    *puVar1 = uVar7;
    thunk_FUN_0188fd20(puVar1);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar4 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar4 + 0xb8) = 0;
  }
  puVar2 = PTR_DAT_03806cc0;
  if (*(int *)(*(long *)PTR_DAT_03806cc0 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar7 = FUN_02c168f0(0);
  if (DAT_03a25f2b == '\0') {
    FUN_017fc350(PTR_DAT_03806cc0);
    DAT_03a25f2b = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar4 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20);
  uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03800c10);
  FUN_02b27cbc(uVar5,uVar7,uVar8,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x60),uVar5);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),5);
  plVar6 = (long *)(unaff_x20 + 0x48);
  *plVar6 = lVar4;
  thunk_FUN_0188fd20(plVar6);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
  thunk_FUN_0188fd20();
  if (*plVar6 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar6 = lVar4;
    thunk_FUN_0188fd20(plVar6);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),7);
    lVar4 = FUN_02a43498(uVar5,uVar7,0);
    *plVar6 = lVar4;
    thunk_FUN_0188fd20(plVar6);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x10);
  plVar6 = (long *)(unaff_x20 + 0x38);
  *plVar6 = lVar4;
  thunk_FUN_0188fd20(plVar6);
  if (*plVar6 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar6 = lVar4;
    thunk_FUN_0188fd20(plVar6);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  thunk_FUN_0188fd20();
  uVar3 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba48,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03803df0,0
                                ), (uVar3 & 1) == 0)) {
    uVar7 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar3 = FUN_02a4fe7c(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380b708,0);
      if ((uVar3 & 1) != 0) goto LAB_02c20a94;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar3 = thunk_FUN_02a4fb2c(uVar7,*(undefined8 *)PTR_DAT_0380ba40,0);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba28
                                   ,0), (uVar3 & 1) == 0)) {
      uVar3 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba38,0
                                );
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba18
                                   ,0);
        if ((uVar3 & 1) != 0) {
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
    uVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),10);
    *(undefined8 *)(unaff_x20 + 200) = uVar7;
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


