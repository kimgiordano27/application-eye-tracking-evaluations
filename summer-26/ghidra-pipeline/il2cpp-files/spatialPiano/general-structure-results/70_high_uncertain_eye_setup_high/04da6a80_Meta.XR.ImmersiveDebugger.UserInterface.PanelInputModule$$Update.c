/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Update
ENTRY_POINT: 04da6a80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04da6d84) */
/* WARNING: Removing unreachable block (ram,0x04da6d98) */

undefined4 Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Update(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 in_x7;
  undefined4 uVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar12;
  uint unaff_w22;
  long lVar13;
  ulong uVar14;
  uint unaff_w26;
  long unaff_x29;
  undefined1 auVar15 [16];
  
code_r0x04da6a80:
  plVar6 = (long *)thunk_FUN_02f66c64();
  if (*plVar6 == 0) {
    if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
LAB_04da6ed0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((*(uint *)(*plVar6 + 0x14) & unaff_w22) != 0) goto LAB_04da66bc;
LAB_04da6a98:
  if ((unaff_w26 >> 4 & 1) != 0) {
    plVar6 = (long *)thunk_FUN_02f66c64();
    if (*plVar6 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_04da6ed0;
    }
    if ((*(char *)(*plVar6 + 0x10) == '\0') ||
       (uVar7 = (**(code **)(*unaff_x20 + 0x1d8))(), (uVar7 & 1) == 0)) goto LAB_04da6c80;
    plVar6 = (long *)thunk_FUN_02f66c64();
    if (*plVar6 == 0) {
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce5a8);
      FUN_03ffb8ec(uVar8,*(undefined8 *)PTR_DAT_067ce5a0);
      FUN_02f08788(*(long *)(**(long **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) + 0xc0) +
                            0x80) + 0xe0,8);
      puVar9 = (undefined8 *)thunk_FUN_02f66c64();
      *puVar9 = uVar8;
    }
    plVar6 = (long *)thunk_FUN_02f66c64();
    lVar13 = *plVar6;
    puVar10 = (ulong *)thunk_FUN_02f66c64();
    uVar7 = *puVar10;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (uVar7 == 0) goto LAB_04da6c1c;
LAB_04da6bb4:
      uVar8 = FUN_04f6c4a0(uVar7,0);
      uVar7 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      if (uVar7 != 0) goto LAB_04da6bb4;
LAB_04da6c1c:
      uVar8 = 0;
    }
    auVar15 = FUN_050b1810(unaff_x19 + 0x60,0);
    if (*(int *)(*(long *)PTR_DAT_067ce588 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_050aed6c(uVar8,uVar7,auVar15._0_8_,auVar15._8_8_,0);
    if (lVar13 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar8,uVar8);
      }
      goto LAB_04da6ed0;
    }
    FUN_03ffbdf8(lVar13,uVar8,*(undefined8 *)PTR_DAT_067ce598);
  }
LAB_04da6c80:
  while (uVar7 = (**(code **)(*unaff_x20 + 0x1c8))(), (uVar7 & 1) == 0) {
LAB_04da66bc:
    do {
      plVar6 = (long *)thunk_FUN_02f66c64();
      if ((*plVar6 != 0) && (plVar6 = (long *)thunk_FUN_02f66c64(), *plVar6 == 0)) {
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
      pcVar2 = (char *)thunk_FUN_02f66c64();
      if (*pcVar2 != '\0') {
        uVar12 = 0;
        goto LAB_04da6620;
      }
      puVar9 = (undefined8 *)thunk_FUN_02f66c64();
      uVar8 = *puVar9;
      uVar1 = puVar9[1];
      plVar6 = (long *)thunk_FUN_02f66c64();
      lVar13 = *plVar6;
      if (DAT_06bb7da0 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5b8);
        DAT_06bb7da0 = '\x01';
        if (lVar13 == 0) goto LAB_04da67e8;
LAB_04da67b4:
        uVar3 = FUN_04f6c4a0(lVar13,0);
        uVar12 = *(undefined4 *)(lVar13 + 0x10);
      }
      else {
        if (lVar13 != 0) goto LAB_04da67b4;
LAB_04da67e8:
        uVar3 = 0;
        uVar12 = 0;
      }
      puVar10 = (ulong *)thunk_FUN_02f66c64();
      uVar7 = *puVar10;
      if (DAT_06bb7da0 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5b8);
        DAT_06bb7da0 = '\x01';
        if (uVar7 == 0) goto LAB_04da6858;
LAB_04da6824:
        uVar4 = FUN_04f6c4a0(uVar7,0);
        uVar7 = (ulong)*(uint *)(uVar7 + 0x10);
      }
      else {
        if (uVar7 != 0) goto LAB_04da6824;
LAB_04da6858:
        uVar4 = 0;
      }
      puVar10 = (ulong *)thunk_FUN_02f66c64();
      uVar14 = *puVar10;
      if (DAT_06bb7da0 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5b8);
        DAT_06bb7da0 = '\x01';
        if (uVar14 == 0) goto LAB_04da68c0;
LAB_04da688c:
        uVar5 = FUN_04f6c4a0(uVar14,0);
        uVar14 = (ulong)*(uint *)(uVar14 + 0x10);
      }
      else {
        if (uVar14 != 0) goto LAB_04da688c;
LAB_04da68c0:
        uVar5 = 0;
      }
      plVar6 = (long *)thunk_FUN_02f66c64();
      lVar13 = *plVar6;
      if (lVar13 == 0) {
        uVar11 = 0;
        lVar13 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(lVar13 + 0x18);
        lVar13 = lVar13 + 0x20;
      }
      unaff_w26 = FUN_050b13e0(unaff_x19 + 0x60,uVar8,uVar1,uVar3,uVar12,uVar4,uVar7,in_x7,uVar5,
                               uVar14,lVar13,uVar11,0);
      if ((((unaff_w26 >> 4 & 1) == 0) ||
          (puVar9 = (undefined8 *)thunk_FUN_02f66c64(), *(char *)*puVar9 != '.')) ||
         ((plVar6 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar6 + 1) != '\0' &&
          ((plVar6 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar6 + 1) != '.' ||
           (plVar6 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar6 + 2) != '\0')))))) {
        plVar6 = (long *)thunk_FUN_02f66c64();
        if (*plVar6 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        if (*(int *)(*plVar6 + 0x14) == 0) goto LAB_04da6a98;
        plVar6 = (long *)thunk_FUN_02f66c64();
        if (*plVar6 != 0) {
          unaff_w22 = unaff_w26;
          if ((*(byte *)(*plVar6 + 0x14) & 1) != 0) {
            unaff_w22 = FUN_050b18d4(unaff_x19 + 0x60,0);
          }
          goto code_r0x04da6a80;
        }
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
      plVar6 = (long *)thunk_FUN_02f66c64();
      if (*plVar6 == 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
    } while (*(char *)(*plVar6 + 0x20) == '\0');
  }
  lVar13 = *unaff_x20;
  *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x60;
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 8);
  (**(code **)(*(long *)(lVar13 + 0x1f0) + 0x10))(*(undefined8 *)(*(long *)(lVar13 + 0x1f0) + 8));
  FUN_02f08790();
  uVar12 = 1;
LAB_04da6620:
  if (*(char *)(unaff_x19 + 0x44) != '\0') {
    thunk_FUN_02f16354(**(undefined8 **)(unaff_x19 + 0x38),0);
  }
  if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar12;
  }
  goto LAB_04da6ed0;
}


