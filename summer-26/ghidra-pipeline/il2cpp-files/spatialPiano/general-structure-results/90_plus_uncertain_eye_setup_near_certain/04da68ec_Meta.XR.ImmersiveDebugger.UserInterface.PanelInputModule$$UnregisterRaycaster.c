/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$UnregisterRaycaster
ENTRY_POINT: 04da68ec
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
Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__UnregisterRaycaster(long param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 in_x7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined4 uVar9;
  undefined8 unaff_x22;
  long lVar10;
  ulong unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar11 [16];
  
code_r0x04da68ec:
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  param_1 = param_1 + 0x20;
  do {
    uVar1 = FUN_050b13e0(unaff_x19 + 0x60,unaff_x26,unaff_x27,unaff_x28,unaff_x21,unaff_x22,
                         unaff_x23,in_x7,unaff_x24,unaff_x25,param_1,uVar9,0);
    if ((((uVar1 >> 4 & 1) == 0) ||
        (puVar4 = (undefined8 *)thunk_FUN_02f66c64(), *(char *)*puVar4 != '.')) ||
       ((plVar5 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar5 + 1) != '\0' &&
        ((plVar5 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar5 + 1) != '.' ||
         (plVar5 = (long *)thunk_FUN_02f66c64(), *(char *)(*plVar5 + 2) != '\0')))))) {
      plVar5 = (long *)thunk_FUN_02f66c64();
      if (*plVar5 == 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_04da6ed0;
      }
      if (*(int *)(*plVar5 + 0x14) != 0) {
        plVar5 = (long *)thunk_FUN_02f66c64();
        if (*plVar5 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        uVar2 = uVar1;
        if ((*(byte *)(*plVar5 + 0x14) & 1) != 0) {
          uVar2 = FUN_050b18d4(unaff_x19 + 0x60,0);
        }
        plVar5 = (long *)thunk_FUN_02f66c64();
        if (*plVar5 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        if ((*(uint *)(*plVar5 + 0x14) & uVar2) != 0) goto LAB_04da66bc;
      }
      if ((uVar1 >> 4 & 1) != 0) {
        plVar5 = (long *)thunk_FUN_02f66c64();
        if (*plVar5 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_04da6ed0;
        }
        if ((*(char *)(*plVar5 + 0x10) == '\0') ||
           (uVar6 = (**(code **)(*unaff_x20 + 0x1d8))(), (uVar6 & 1) == 0)) goto LAB_04da6c80;
        plVar5 = (long *)thunk_FUN_02f66c64();
        if (*plVar5 == 0) {
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce5a8);
          FUN_03ffb8ec(uVar7,*(undefined8 *)PTR_DAT_067ce5a0);
          FUN_02f08788(*(long *)(**(long **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) + 0xc0) +
                                0x80) + 0xe0,8);
          puVar4 = (undefined8 *)thunk_FUN_02f66c64();
          *puVar4 = uVar7;
        }
        plVar5 = (long *)thunk_FUN_02f66c64();
        lVar10 = *plVar5;
        puVar8 = (ulong *)thunk_FUN_02f66c64();
        uVar6 = *puVar8;
        if (DAT_06bb7da0 == '\0') {
          FUN_02f08768(PTR_DAT_067ce5b8);
          DAT_06bb7da0 = '\x01';
          if (uVar6 == 0) goto LAB_04da6c1c;
LAB_04da6bb4:
          uVar7 = FUN_04f6c4a0(uVar6,0);
          uVar6 = (ulong)*(uint *)(uVar6 + 0x10);
        }
        else {
          if (uVar6 != 0) goto LAB_04da6bb4;
LAB_04da6c1c:
          uVar7 = 0;
        }
        auVar11 = FUN_050b1810(unaff_x19 + 0x60,0);
        if (*(int *)(*(long *)PTR_DAT_067ce588 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050aed6c(uVar7,uVar6,auVar11._0_8_,auVar11._8_8_,0);
        if (lVar10 == 0) {
          if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar7,uVar7);
          }
          goto LAB_04da6ed0;
        }
        FUN_03ffbdf8(lVar10,uVar7,*(undefined8 *)PTR_DAT_067ce598);
      }
LAB_04da6c80:
      uVar6 = (**(code **)(*unaff_x20 + 0x1c8))();
      if ((uVar6 & 1) == 0) goto LAB_04da66bc;
      lVar10 = *unaff_x20;
      *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x60;
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 8);
      (**(code **)(*(long *)(lVar10 + 0x1f0) + 0x10))
                (*(undefined8 *)(*(long *)(lVar10 + 0x1f0) + 8));
      FUN_02f08790();
      uVar9 = 1;
LAB_04da6620:
      if (*(char *)(unaff_x19 + 0x44) != '\0') {
        thunk_FUN_02f16354(**(undefined8 **)(unaff_x19 + 0x38),0);
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
        return uVar9;
      }
LAB_04da6ed0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar5 = (long *)thunk_FUN_02f66c64();
    if (*plVar5 == 0) {
      if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_04da6ed0;
    }
    if (*(char *)(*plVar5 + 0x20) != '\0') goto LAB_04da6c80;
LAB_04da66bc:
    plVar5 = (long *)thunk_FUN_02f66c64();
    if ((*plVar5 != 0) && (plVar5 = (long *)thunk_FUN_02f66c64(), *plVar5 == 0)) {
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
      uVar9 = 0;
      goto LAB_04da6620;
    }
    puVar4 = (undefined8 *)thunk_FUN_02f66c64();
    unaff_x26 = *puVar4;
    unaff_x27 = puVar4[1];
    plVar5 = (long *)thunk_FUN_02f66c64();
    lVar10 = *plVar5;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (lVar10 == 0) goto LAB_04da67e8;
LAB_04da67b4:
      unaff_x28 = FUN_04f6c4a0(lVar10,0);
      unaff_x21 = (ulong)*(uint *)(lVar10 + 0x10);
    }
    else {
      if (lVar10 != 0) goto LAB_04da67b4;
LAB_04da67e8:
      unaff_x28 = 0;
      unaff_x21 = 0;
    }
    puVar8 = (ulong *)thunk_FUN_02f66c64();
    unaff_x23 = *puVar8;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (unaff_x23 == 0) goto LAB_04da6858;
LAB_04da6824:
      unaff_x22 = FUN_04f6c4a0(unaff_x23,0);
      unaff_x23 = (ulong)*(uint *)(unaff_x23 + 0x10);
    }
    else {
      if (unaff_x23 != 0) goto LAB_04da6824;
LAB_04da6858:
      unaff_x22 = 0;
    }
    puVar8 = (ulong *)thunk_FUN_02f66c64();
    unaff_x25 = *puVar8;
    if (DAT_06bb7da0 == '\0') {
      FUN_02f08768(PTR_DAT_067ce5b8);
      DAT_06bb7da0 = '\x01';
      if (unaff_x25 == 0) goto LAB_04da68c0;
LAB_04da688c:
      unaff_x24 = FUN_04f6c4a0(unaff_x25,0);
      unaff_x25 = (ulong)*(uint *)(unaff_x25 + 0x10);
    }
    else {
      if (unaff_x25 != 0) goto LAB_04da688c;
LAB_04da68c0:
      unaff_x24 = 0;
    }
    plVar5 = (long *)thunk_FUN_02f66c64();
    param_1 = *plVar5;
    if (param_1 != 0) goto code_r0x04da68ec;
    uVar9 = 0;
    param_1 = 0;
  } while( true );
}


