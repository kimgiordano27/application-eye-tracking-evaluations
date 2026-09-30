/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$SetDebugInterface
ENTRY_POINT: 04da69bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04da6d84) */
/* WARNING: Removing unreachable block (ram,0x04da6d98) */

undefined4 Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__SetDebugInterface(void)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 in_x7;
  uint in_w8;
  undefined4 uVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  uint unaff_w26;
  long unaff_x29;
  undefined1 auVar16 [16];
  
code_r0x04da69bc:
  if ((in_w8 == 0x2e) && (plVar7 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar7 + 2) == '\0'))
  goto LAB_04da6bcc;
LAB_04da69f0:
  plVar7 = (long *)thunk_FUN_02f66c64();
  if (*plVar7 == 0) {
    if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_04da6ed0;
  }
  if (*(int *)(*plVar7 + 0x14) != 0) {
    plVar7 = (long *)thunk_FUN_02f66c64();
    if (*plVar7 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_04da6ed0;
    }
    uVar2 = unaff_w26;
    if ((*(byte *)(*plVar7 + 0x14) & 1) != 0) {
      uVar2 = FUN_050b18d4(unaff_x19 + 0x60,0);
    }
    plVar7 = (long *)thunk_FUN_02f66c64();
    if (*plVar7 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_04da6ed0;
    }
    if ((*(uint *)(*plVar7 + 0x14) & uVar2) != 0) goto LAB_04da66bc;
  }
  if ((unaff_w26 >> 4 & 1) != 0) {
    plVar7 = (long *)thunk_FUN_02f66c64();
    if (*plVar7 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_04da6ed0;
    }
    if ((*(char *)(*plVar7 + 0x10) == '\0') ||
       (uVar8 = (**(code **)(*unaff_x20 + 0x1d8))(), (uVar8 & 1) == 0)) goto LAB_04da6c80;
    plVar7 = (long *)thunk_FUN_02f66c64();
    if (*plVar7 == 0) {
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce5a8);
      FUN_03ffb8ec(uVar9,*(undefined8 *)PTR_DAT_067ce5a0);
      FUN_02f08788(*(long *)(**(long **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) + 0xc0) +
                            0x80) + 0xe0,8);
      puVar10 = (undefined8 *)thunk_FUN_02f66c64();
      *puVar10 = uVar9;
    }
    plVar7 = (long *)thunk_FUN_02f66c64();
    lVar14 = *plVar7;
    puVar11 = (ulong *)thunk_FUN_02f66c64();
    uVar8 = *puVar11;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (uVar8 == 0) goto LAB_04da6c1c;
LAB_04da6bb4:
      uVar9 = FUN_04f6c4a0(uVar8,0);
      uVar8 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      if (uVar8 != 0) goto LAB_04da6bb4;
LAB_04da6c1c:
      uVar9 = 0;
    }
    auVar16 = FUN_050b1810(unaff_x19 + 0x60,0);
    if (*(int *)(*(long *)PTR_DAT_067ce588 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050aed6c(uVar9,uVar8,auVar16._0_8_,auVar16._8_8_,0);
    if (lVar14 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar9,uVar9);
      }
      goto LAB_04da6ed0;
    }
    FUN_03ffbdf8(lVar14,uVar9,*(undefined8 *)PTR_DAT_067ce598);
  }
LAB_04da6c80:
  while (uVar8 = (**(code **)(*unaff_x20 + 0x1c8))(), (uVar8 & 1) == 0) {
LAB_04da66bc:
    do {
      plVar7 = (long *)thunk_FUN_02f66c64();
      if ((*plVar7 != 0) && (plVar7 = (long *)thunk_FUN_02f66c64(), *plVar7 == 0)) {
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
      if (unaff_x20 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) + 0xc0) + 0x40))();
      pcVar3 = (char *)thunk_FUN_02f66c64();
      if (*pcVar3 != '\0') {
        uVar13 = 0;
        goto LAB_04da6620;
      }
      puVar10 = (undefined8 *)thunk_FUN_02f66c64();
      uVar9 = *puVar10;
      uVar1 = puVar10[1];
      plVar7 = (long *)thunk_FUN_02f66c64();
      lVar14 = *plVar7;
      if (DAT_06bb7da0 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5b8);
        DAT_06bb7da0 = '\x01';
        if (lVar14 == 0) goto LAB_04da67e8;
LAB_04da67b4:
        uVar4 = FUN_04f6c4a0(lVar14,0);
        uVar13 = *(undefined4 *)(lVar14 + 0x10);
      }
      else {
        if (lVar14 != 0) goto LAB_04da67b4;
LAB_04da67e8:
        uVar4 = 0;
        uVar13 = 0;
      }
      puVar11 = (ulong *)thunk_FUN_02f66c64();
      uVar8 = *puVar11;
      if (DAT_06bb7da0 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5b8);
        DAT_06bb7da0 = '\x01';
        if (uVar8 == 0) goto LAB_04da6858;
LAB_04da6824:
        uVar5 = FUN_04f6c4a0(uVar8,0);
        uVar8 = (ulong)*(uint *)(uVar8 + 0x10);
      }
      else {
        if (uVar8 != 0) goto LAB_04da6824;
LAB_04da6858:
        uVar5 = 0;
      }
      puVar11 = (ulong *)thunk_FUN_02f66c64();
      uVar15 = *puVar11;
      if (DAT_06bb7da0 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5b8);
        DAT_06bb7da0 = '\x01';
        if (uVar15 == 0) goto LAB_04da68c0;
LAB_04da688c:
        uVar6 = FUN_04f6c4a0(uVar15,0);
        uVar15 = (ulong)*(uint *)(uVar15 + 0x10);
      }
      else {
        if (uVar15 != 0) goto LAB_04da688c;
LAB_04da68c0:
        uVar6 = 0;
      }
      plVar7 = (long *)thunk_FUN_02f66c64();
      lVar14 = *plVar7;
      if (lVar14 == 0) {
        uVar12 = 0;
        lVar14 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(lVar14 + 0x18);
        lVar14 = lVar14 + 0x20;
      }
      unaff_w26 = FUN_050b13e0(unaff_x19 + 0x60,uVar9,uVar1,uVar4,uVar13,uVar5,uVar8,in_x7,uVar6,
                               uVar15,lVar14,uVar12,0);
      if (((unaff_w26 >> 4 & 1) == 0) ||
         (puVar10 = (undefined8 *)thunk_FUN_02f66c64(), *(char *)*puVar10 != '.'))
      goto LAB_04da69f0;
      plVar7 = (long *)thunk_FUN_02f66c64();
      if (*(char *)(*plVar7 + 1) != '\0') {
        plVar7 = (long *)thunk_FUN_02f66c64();
        in_w8 = (uint)*(byte *)(*plVar7 + 1);
        goto code_r0x04da69bc;
      }
LAB_04da6bcc:
      plVar7 = (long *)thunk_FUN_02f66c64();
      if (*plVar7 == 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
    } while (*(char *)(*plVar7 + 0x20) == '\0');
  }
  lVar14 = *unaff_x20;
  *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x60;
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 8);
  (**(code **)(*(long *)(lVar14 + 0x1f0) + 0x10))(*(undefined8 *)(*(long *)(lVar14 + 0x1f0) + 8));
  FUN_02f08790();
  uVar13 = 1;
LAB_04da6620:
  if (*(char *)(unaff_x19 + 0x44) != '\0') {
    thunk_FUN_02f16354(**(undefined8 **)(unaff_x19 + 0x38),0);
  }
  if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar13;
  }
LAB_04da6ed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


