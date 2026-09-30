/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 04da6b14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04da6d84) */
/* WARNING: Removing unreachable block (ram,0x04da6d98) */

undefined4 Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 in_x7;
  undefined4 uVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long unaff_x29;
  undefined1 auVar18 [16];
  
code_r0x04da6b14:
  uVar9 = thunk_FUN_02f45270(*param_1);
  FUN_03ffb8ec(uVar9,*(undefined8 *)PTR_DAT_067ce5a0);
  FUN_02f08788(*(long *)(**(long **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) + 0xc0) + 0x80) +
               0xe0,8);
  puVar10 = (undefined8 *)thunk_FUN_02f66c64();
  *puVar10 = uVar9;
LAB_04da6b60:
  plVar11 = (long *)thunk_FUN_02f66c64();
  lVar15 = *plVar11;
  plVar11 = (long *)thunk_FUN_02f66c64();
  lVar16 = *plVar11;
  if (DAT_06bb7da0 == '\0') {
    FUN_02f08768(PTR_DAT_067ce5b8);
    DAT_06bb7da0 = '\x01';
  }
  if (lVar16 == 0) {
    uVar9 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = FUN_04f6c4a0(lVar16,0);
    uVar14 = *(undefined4 *)(lVar16 + 0x10);
  }
  auVar18 = FUN_050b1810(unaff_x19 + 0x60,0);
  if (*(int *)(*(long *)PTR_DAT_067ce588 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar9 = FUN_050aed6c(uVar9,uVar14,auVar18._0_8_,auVar18._8_8_,0);
  if (lVar15 != 0) {
    FUN_03ffbdf8(lVar15,uVar9,*(undefined8 *)PTR_DAT_067ce598);
    do {
      uVar12 = (**(code **)(*unaff_x20 + 0x1c8))();
      if ((uVar12 & 1) != 0) {
        lVar15 = *unaff_x20;
        *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x60;
        *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 8);
        (**(code **)(*(long *)(lVar15 + 0x1f0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar15 + 0x1f0) + 8));
        FUN_02f08790();
        uVar14 = 1;
LAB_04da6620:
        if (*(char *)(unaff_x19 + 0x44) != '\0') {
          thunk_FUN_02f16354(**(undefined8 **)(unaff_x19 + 0x38),0);
        }
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
          return uVar14;
        }
        goto LAB_04da6ed0;
      }
LAB_04da66bc:
      do {
        plVar11 = (long *)thunk_FUN_02f66c64();
        if ((*plVar11 != 0) && (plVar11 = (long *)thunk_FUN_02f66c64(), *plVar11 == 0)) {
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
        pcVar4 = (char *)thunk_FUN_02f66c64();
        if (*pcVar4 != '\0') {
          uVar14 = 0;
          goto LAB_04da6620;
        }
        puVar10 = (undefined8 *)thunk_FUN_02f66c64();
        uVar9 = *puVar10;
        uVar1 = puVar10[1];
        plVar11 = (long *)thunk_FUN_02f66c64();
        lVar15 = *plVar11;
        if (DAT_06bb7da0 == '\0') {
          FUN_02f08768(PTR_DAT_067ce5b8);
          DAT_06bb7da0 = '\x01';
          if (lVar15 == 0) goto LAB_04da67e8;
LAB_04da67b4:
          uVar5 = FUN_04f6c4a0(lVar15,0);
          uVar14 = *(undefined4 *)(lVar15 + 0x10);
        }
        else {
          if (lVar15 != 0) goto LAB_04da67b4;
LAB_04da67e8:
          uVar5 = 0;
          uVar14 = 0;
        }
        puVar6 = (ulong *)thunk_FUN_02f66c64();
        uVar12 = *puVar6;
        if (DAT_06bb7da0 == '\0') {
          FUN_02f08768(PTR_DAT_067ce5b8);
          DAT_06bb7da0 = '\x01';
          if (uVar12 == 0) goto LAB_04da6858;
LAB_04da6824:
          uVar7 = FUN_04f6c4a0(uVar12,0);
          uVar12 = (ulong)*(uint *)(uVar12 + 0x10);
        }
        else {
          if (uVar12 != 0) goto LAB_04da6824;
LAB_04da6858:
          uVar7 = 0;
        }
        puVar6 = (ulong *)thunk_FUN_02f66c64();
        uVar17 = *puVar6;
        if (DAT_06bb7da0 == '\0') {
          FUN_02f08768(PTR_DAT_067ce5b8);
          DAT_06bb7da0 = '\x01';
          if (uVar17 == 0) goto LAB_04da68c0;
LAB_04da688c:
          uVar8 = FUN_04f6c4a0(uVar17,0);
          uVar17 = (ulong)*(uint *)(uVar17 + 0x10);
        }
        else {
          if (uVar17 != 0) goto LAB_04da688c;
LAB_04da68c0:
          uVar8 = 0;
        }
        plVar11 = (long *)thunk_FUN_02f66c64();
        lVar15 = *plVar11;
        if (lVar15 == 0) {
          uVar13 = 0;
          lVar15 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(lVar15 + 0x18);
          lVar15 = lVar15 + 0x20;
        }
        uVar2 = FUN_050b13e0(unaff_x19 + 0x60,uVar9,uVar1,uVar5,uVar14,uVar7,uVar12,in_x7,uVar8,
                             uVar17,lVar15,uVar13,0);
        if ((((uVar2 >> 4 & 1) == 0) ||
            (puVar10 = (undefined8 *)thunk_FUN_02f66c64(), *(char *)*puVar10 != '.')) ||
           ((plVar11 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar11 + 1) != '\0' &&
            ((plVar11 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar11 + 1) != '.' ||
             (plVar11 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar11 + 2) != '\0')))))) {
          plVar11 = (long *)thunk_FUN_02f66c64();
          if (*plVar11 == 0) {
            if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_04da6ed0;
          }
          if (*(int *)(*plVar11 + 0x14) != 0) {
            plVar11 = (long *)thunk_FUN_02f66c64();
            if (*plVar11 == 0) {
              if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_04da6ed0;
            }
            uVar3 = uVar2;
            if ((*(byte *)(*plVar11 + 0x14) & 1) != 0) {
              uVar3 = FUN_050b18d4(unaff_x19 + 0x60,0);
            }
            plVar11 = (long *)thunk_FUN_02f66c64();
            if (*plVar11 == 0) {
              if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_04da6ed0;
            }
            if ((*(uint *)(*plVar11 + 0x14) & uVar3) != 0) goto LAB_04da66bc;
          }
          if ((uVar2 >> 4 & 1) != 0) {
            plVar11 = (long *)thunk_FUN_02f66c64();
            if (*plVar11 == 0) {
              if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_04da6ed0;
            }
            if ((*(char *)(*plVar11 + 0x10) != '\0') &&
               (uVar12 = (**(code **)(*unaff_x20 + 0x1d8))(), (uVar12 & 1) != 0)) {
              plVar11 = (long *)thunk_FUN_02f66c64();
              param_1 = (undefined8 *)PTR_DAT_067ce5a8;
              if (*plVar11 == 0) goto code_r0x04da6b14;
              goto LAB_04da6b60;
            }
          }
          break;
        }
        plVar11 = (long *)thunk_FUN_02f66c64();
        if (*plVar11 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
      } while (*(char *)(*plVar11 + 0x20) == '\0');
    } while( true );
  }
  if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8(uVar9,uVar9);
  }
LAB_04da6ed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


