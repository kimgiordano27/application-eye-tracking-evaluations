/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$<AddToggle>b__37_0
ENTRY_POINT: 04da67a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04da6d84) */
/* WARNING: Removing unreachable block (ram,0x04da6d98) */

undefined4 Meta_XR_ImmersiveDebugger_UserInterface_Member__<AddToggle>b__37_0(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 in_x7;
  long lVar10;
  undefined4 uVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar12;
  long unaff_x22;
  ulong uVar13;
  ulong uVar14;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined1 auVar15 [16];
  
  do {
    if (param_1[0xda0] == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (unaff_x22 == 0) goto LAB_04da67e8;
LAB_04da67b4:
      uVar4 = FUN_04f6c4a0(unaff_x22,0);
      uVar12 = *(undefined4 *)(unaff_x22 + 0x10);
    }
    else {
      if (unaff_x22 != 0) goto LAB_04da67b4;
LAB_04da67e8:
      uVar4 = 0;
      uVar12 = 0;
    }
    puVar5 = (ulong *)thunk_FUN_02f66c64();
    uVar13 = *puVar5;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (uVar13 == 0) goto LAB_04da6858;
LAB_04da6824:
      uVar6 = FUN_04f6c4a0(uVar13,0);
      uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
    }
    else {
      if (uVar13 != 0) goto LAB_04da6824;
LAB_04da6858:
      uVar6 = 0;
    }
    puVar5 = (ulong *)thunk_FUN_02f66c64();
    uVar14 = *puVar5;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (uVar14 == 0) goto LAB_04da68c0;
LAB_04da688c:
      uVar7 = FUN_04f6c4a0(uVar14,0);
      uVar14 = (ulong)*(uint *)(uVar14 + 0x10);
    }
    else {
      if (uVar14 != 0) goto LAB_04da688c;
LAB_04da68c0:
      uVar7 = 0;
    }
    plVar8 = (long *)thunk_FUN_02f66c64();
    lVar10 = *plVar8;
    if (lVar10 == 0) {
      uVar11 = 0;
      lVar10 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(lVar10 + 0x18);
      lVar10 = lVar10 + 0x20;
    }
    uVar1 = FUN_050b13e0(unaff_x19 + 0x60,unaff_x26,unaff_x27,uVar4,uVar12,uVar6,uVar13,in_x7,uVar7,
                         uVar14,lVar10,uVar11,0);
    if ((((uVar1 >> 4 & 1) == 0) ||
        (puVar9 = (undefined8 *)thunk_FUN_02f66c64(), *(char *)*puVar9 != '.')) ||
       ((plVar8 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar8 + 1) != '\0' &&
        ((plVar8 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar8 + 1) != '.' ||
         (plVar8 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar8 + 2) != '\0')))))) {
      plVar8 = (long *)thunk_FUN_02f66c64();
      if (*plVar8 == 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
      if (*(int *)(*plVar8 + 0x14) != 0) {
        plVar8 = (long *)thunk_FUN_02f66c64();
        if (*plVar8 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        uVar2 = uVar1;
        if ((*(byte *)(*plVar8 + 0x14) & 1) != 0) {
          uVar2 = FUN_050b18d4(unaff_x19 + 0x60,0);
        }
        plVar8 = (long *)thunk_FUN_02f66c64();
        if (*plVar8 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        if ((*(uint *)(*plVar8 + 0x14) & uVar2) != 0) goto LAB_04da66bc;
      }
      if ((uVar1 >> 4 & 1) != 0) {
        plVar8 = (long *)thunk_FUN_02f66c64();
        if (*plVar8 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        if ((*(char *)(*plVar8 + 0x10) == '\0') ||
           (uVar13 = (**(code **)(*unaff_x20 + 0x1d8))(), (uVar13 & 1) == 0)) goto LAB_04da6c80;
        plVar8 = (long *)thunk_FUN_02f66c64();
        if (*plVar8 == 0) {
          uVar4 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce5a8);
          FUN_03ffb8ec(uVar4,*(undefined8 *)PTR_DAT_067ce5a0);
          FUN_02f08788(*(long *)(**(long **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) + 0xc0) +
                                0x80) + 0xe0,8);
          puVar9 = (undefined8 *)thunk_FUN_02f66c64();
          *puVar9 = uVar4;
        }
        plVar8 = (long *)thunk_FUN_02f66c64();
        lVar10 = *plVar8;
        puVar5 = (ulong *)thunk_FUN_02f66c64();
        uVar13 = *puVar5;
        if (DAT_06bb7da0 == '\0') {
          FUN_02f08768(PTR_DAT_067ce5b8);
          DAT_06bb7da0 = '\x01';
          if (uVar13 == 0) goto LAB_04da6c1c;
LAB_04da6bb4:
          uVar4 = FUN_04f6c4a0(uVar13,0);
          uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
        }
        else {
          if (uVar13 != 0) goto LAB_04da6bb4;
LAB_04da6c1c:
          uVar4 = 0;
        }
        auVar15 = FUN_050b1810(unaff_x19 + 0x60,0);
        if (*(int *)(*(long *)PTR_DAT_067ce588 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar4 = FUN_050aed6c(uVar4,uVar13,auVar15._0_8_,auVar15._8_8_,0);
        if (lVar10 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar4,uVar4);
          }
          goto LAB_04da6ed0;
        }
        FUN_03ffbdf8(lVar10,uVar4,*(undefined8 *)PTR_DAT_067ce598);
      }
LAB_04da6c80:
      uVar13 = (**(code **)(*unaff_x20 + 0x1c8))();
      if ((uVar13 & 1) != 0) {
        lVar10 = *unaff_x20;
        *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x60;
        *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 8);
        (**(code **)(*(long *)(lVar10 + 0x1f0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar10 + 0x1f0) + 8));
        FUN_02f08790();
        uVar12 = 1;
        goto LAB_04da6620;
      }
    }
    else {
      plVar8 = (long *)thunk_FUN_02f66c64();
      if (*plVar8 == 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
      if (*(char *)(*plVar8 + 0x20) != '\0') goto LAB_04da6c80;
    }
LAB_04da66bc:
    plVar8 = (long *)thunk_FUN_02f66c64();
    if ((*plVar8 != 0) && (plVar8 = (long *)thunk_FUN_02f66c64(), *plVar8 == 0)) {
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
      uVar12 = 0;
LAB_04da6620:
      if (*(char *)(unaff_x19 + 0x44) != '\0') {
        thunk_FUN_02f16354(**(undefined8 **)(unaff_x19 + 0x38),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar12;
      }
LAB_04da6ed0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar9 = (undefined8 *)thunk_FUN_02f66c64();
    unaff_x26 = *puVar9;
    unaff_x27 = puVar9[1];
    plVar8 = (long *)thunk_FUN_02f66c64();
    param_1 = &DAT_06bb7000;
    unaff_x22 = *plVar8;
  } while( true );
}


