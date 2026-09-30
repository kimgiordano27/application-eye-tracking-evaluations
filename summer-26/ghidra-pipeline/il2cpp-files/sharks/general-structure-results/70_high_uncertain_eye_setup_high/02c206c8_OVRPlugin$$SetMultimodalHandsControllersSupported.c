/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 02c206c8
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c20b98) */

void OVRPlugin__SetMultimodalHandsControllersSupported(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  uVar4 = FUN_02a43498(param_1,param_2,0);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar5 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x129);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar5;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar5 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x12a);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar5;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar5 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x167);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar5;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar5 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x168);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar5;
  thunk_FUN_0188fd20();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar3 = FUN_02c20e48(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  if (*(int *)(*(long *)PTR_DAT_037f2b80 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_02bd01ec(uVar3,0x10,0);
  uVar3 = FUN_02bd01a8(uVar5,1,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  lVar7 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar7 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar7) != 0) {
    uVar4 = FUN_02a43498(uVar4,*(long *)(unaff_x20 + lVar7),0);
  }
  puVar2 = PTR_DAT_03806cb8;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)PTR_DAT_03806cb8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar6 = FUN_017f7e28(uVar5,uVar4,puVar1,*(undefined8 *)(*(long *)puVar2 + 0xb8));
  if ((uVar6 & 1) == 0) {
    uVar4 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,0x11);
    *puVar1 = uVar4;
    thunk_FUN_0188fd20(puVar1);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar7 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar7 + 0xb8) = 0;
  }
  puVar2 = PTR_DAT_03806cc0;
  if (*(int *)(*(long *)PTR_DAT_03806cc0 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02c168f0(0);
  if (DAT_03a25f2b == '\0') {
    FUN_017fc350(PTR_DAT_03806cc0);
    DAT_03a25f2b = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar7 = *(long *)puVar2;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03800c10);
  FUN_02b27cbc(uVar5,uVar4,uVar9,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x60),uVar5);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),5);
  plVar8 = (long *)(unaff_x20 + 0x48);
  *plVar8 = lVar7;
  thunk_FUN_0188fd20(plVar8);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar4;
  thunk_FUN_0188fd20();
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar8 = lVar7;
    thunk_FUN_0188fd20(plVar8);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),7);
    lVar7 = FUN_02a43498(uVar5,uVar4,0);
    *plVar8 = lVar7;
    thunk_FUN_0188fd20(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x10);
  plVar8 = (long *)(unaff_x20 + 0x38);
  *plVar8 = lVar7;
  thunk_FUN_0188fd20(plVar8);
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar7 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar8 = lVar7;
    thunk_FUN_0188fd20(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  thunk_FUN_0188fd20();
  uVar6 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba48,0);
  if (((uVar6 & 1) == 0) &&
     (uVar6 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03803df0,0
                                ), (uVar6 & 1) == 0)) {
    uVar4 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar6 = FUN_02a4fe7c(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380b708,0);
      if ((uVar6 & 1) != 0) goto LAB_02c20a94;
      uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar6 = thunk_FUN_02a4fb2c(uVar4,*(undefined8 *)PTR_DAT_0380ba40,0);
    if (((uVar6 & 1) == 0) &&
       (uVar6 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba28
                                   ,0), (uVar6 & 1) == 0)) {
      uVar6 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba38,0
                                );
      if ((uVar6 & 1) == 0) {
        uVar6 = thunk_FUN_02a4fb2c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0380ba18
                                   ,0);
        if ((uVar6 & 1) != 0) {
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
    uVar4 = FUN_02c20db8(*(long *)(unaff_x20 + 0x10),10);
    *(undefined8 *)(unaff_x20 + 200) = uVar4;
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


