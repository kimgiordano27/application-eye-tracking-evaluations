/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$RegisterRaycaster
ENTRY_POINT: 04da67dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04da6d84) */
/* WARNING: Removing unreachable block (ram,0x04da6d98) */

undefined4
Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 in_x7;
  long lVar9;
  undefined4 uVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar14;
  long unaff_x29;
  undefined1 auVar15 [16];
  
code_r0x04da67dc:
  param_1[0xda0] = 1;
  if (unaff_x22 != 0) goto LAB_04da67b4;
LAB_04da67e8:
  uVar14 = 0;
  uVar11 = 0;
  do {
    puVar4 = (ulong *)thunk_FUN_02f66c64();
    uVar12 = *puVar4;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (uVar12 == 0) goto LAB_04da6858;
LAB_04da6824:
      uVar5 = FUN_04f6c4a0(uVar12,0);
      uVar12 = (ulong)*(uint *)(uVar12 + 0x10);
    }
    else {
      if (uVar12 != 0) goto LAB_04da6824;
LAB_04da6858:
      uVar5 = 0;
    }
    puVar4 = (ulong *)thunk_FUN_02f66c64();
    uVar13 = *puVar4;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (uVar13 == 0) goto LAB_04da68c0;
LAB_04da688c:
      uVar6 = FUN_04f6c4a0(uVar13,0);
      uVar13 = (ulong)*(uint *)(uVar13 + 0x10);
    }
    else {
      if (uVar13 != 0) goto LAB_04da688c;
LAB_04da68c0:
      uVar6 = 0;
    }
    plVar7 = (long *)thunk_FUN_02f66c64();
    lVar9 = *plVar7;
    if (lVar9 == 0) {
      uVar10 = 0;
      lVar9 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(lVar9 + 0x18);
      lVar9 = lVar9 + 0x20;
    }
    uVar1 = FUN_050b13e0(unaff_x19 + 0x60,unaff_x26,unaff_x27,uVar14,uVar11,uVar5,uVar12,in_x7,uVar6
                         ,uVar13,lVar9,uVar10,0);
    if ((((uVar1 >> 4 & 1) == 0) ||
        (puVar8 = (undefined8 *)thunk_FUN_02f66c64(), *(char *)*puVar8 != '.')) ||
       ((plVar7 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar7 + 1) != '\0' &&
        ((plVar7 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar7 + 1) != '.' ||
         (plVar7 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar7 + 2) != '\0')))))) {
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
        uVar2 = uVar1;
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
      if ((uVar1 >> 4 & 1) != 0) {
        plVar7 = (long *)thunk_FUN_02f66c64();
        if (*plVar7 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        if ((*(char *)(*plVar7 + 0x10) == '\0') ||
           (uVar12 = (**(code **)(*unaff_x20 + 0x1d8))(), (uVar12 & 1) == 0)) goto LAB_04da6c80;
        plVar7 = (long *)thunk_FUN_02f66c64();
        if (*plVar7 == 0) {
          uVar14 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce5a8);
          FUN_03ffb8ec(uVar14,*(undefined8 *)PTR_DAT_067ce5a0);
          FUN_02f08788(*(long *)(**(long **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) + 0xc0) +
                                0x80) + 0xe0,8);
          puVar8 = (undefined8 *)thunk_FUN_02f66c64();
          *puVar8 = uVar14;
        }
        plVar7 = (long *)thunk_FUN_02f66c64();
        lVar9 = *plVar7;
        puVar4 = (ulong *)thunk_FUN_02f66c64();
        uVar12 = *puVar4;
        if (DAT_06bb7da0 == '\0') {
          FUN_02f08768(PTR_DAT_067ce5b8);
          DAT_06bb7da0 = '\x01';
          if (uVar12 == 0) goto LAB_04da6c1c;
LAB_04da6bb4:
          uVar14 = FUN_04f6c4a0(uVar12,0);
          uVar12 = (ulong)*(uint *)(uVar12 + 0x10);
        }
        else {
          if (uVar12 != 0) goto LAB_04da6bb4;
LAB_04da6c1c:
          uVar14 = 0;
        }
        auVar15 = FUN_050b1810(unaff_x19 + 0x60,0);
        if (*(int *)(*(long *)PTR_DAT_067ce588 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar14 = FUN_050aed6c(uVar14,uVar12,auVar15._0_8_,auVar15._8_8_,0);
        if (lVar9 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar14,uVar14);
          }
          goto LAB_04da6ed0;
        }
        FUN_03ffbdf8(lVar9,uVar14,*(undefined8 *)PTR_DAT_067ce598);
      }
LAB_04da6c80:
      uVar12 = (**(code **)(*unaff_x20 + 0x1c8))();
      if ((uVar12 & 1) == 0) goto LAB_04da66bc;
      lVar9 = *unaff_x20;
      *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x60;
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 8);
      (**(code **)(*(long *)(lVar9 + 0x1f0) + 0x10))(*(undefined8 *)(*(long *)(lVar9 + 0x1f0) + 8));
      FUN_02f08790();
      uVar11 = 1;
LAB_04da6620:
      if (*(char *)(unaff_x19 + 0x44) != '\0') {
        thunk_FUN_02f16354(**(undefined8 **)(unaff_x19 + 0x38),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar11;
      }
LAB_04da6ed0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar7 = (long *)thunk_FUN_02f66c64();
    if (*plVar7 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_04da6ed0;
    }
    if (*(char *)(*plVar7 + 0x20) != '\0') goto LAB_04da6c80;
LAB_04da66bc:
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
      uVar11 = 0;
      goto LAB_04da6620;
    }
    puVar8 = (undefined8 *)thunk_FUN_02f66c64();
    unaff_x26 = *puVar8;
    unaff_x27 = puVar8[1];
    plVar7 = (long *)thunk_FUN_02f66c64();
    unaff_x22 = *plVar7;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      param_1 = &DAT_06bb7000;
      goto code_r0x04da67dc;
    }
    if (unaff_x22 == 0) goto LAB_04da67e8;
LAB_04da67b4:
    uVar14 = FUN_04f6c4a0(unaff_x22,0);
    uVar11 = *(undefined4 *)(unaff_x22 + 0x10);
  } while( true );
}


