/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 0519c96c
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0519cc30) */
/* WARNING: Removing unreachable block (ram,0x0519ce40) */
/* WARNING: Removing unreachable block (ram,0x0519ce48) */

undefined8
OVRManager__add_InputFocusAcquired(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  uint uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000a0;
  
  puVar5 = (undefined8 *)FUN_02ce0a7c();
  puVar1 = PTR_DAT_065c8c40;
  uVar11 = (*(code *)*puVar5)();
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_0519cfcc(uVar11,param_2,param_3,*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
               *(undefined4 *)(lVar8 + 0x20));
  lVar8 = *(long *)puVar1;
  in_stack_000000a0 = in_stack_00000020;
  *(undefined8 *)(unaff_x24 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x24 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x24 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000000;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar1 = PTR_DAT_066083f0;
  uVar6 = FUN_05ef59b8(uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    if (unaff_x21 != (long *)0x0) {
      lVar8 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0519ca9c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_0519ca9c:
      plVar7 = (long *)(*(code *)*puVar5)();
      puVar3 = PTR_DAT_066083f8;
      puVar2 = PTR_DAT_065c8d08;
      uVar10 = 0;
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar8 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0519cb10;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_0519cb10:
        uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_0519cc24;
          lVar8 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 == 0) goto LAB_0519cbfc;
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_0519cbe4;
        }
        lVar8 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0519cb6c;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_0519cb6c:
        lVar8 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(char *)(lVar8 + 0xb0) == '\0') {
          if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_05f01910(*(long *)(unaff_x20 + 0x28),0);
          uVar4 = FUN_0519d174();
          uVar10 = uVar10 | uVar4;
        }
      } while( true );
    }
    goto LAB_0519ce38;
  }
  goto LAB_0519cc38;
LAB_0519cd74:
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0519cdd0;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cdd0:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
LAB_0519cde0:
  memcpy(&stack0x00000000,&stack0x00000058,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  return in_stack_00000078;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar9 = piVar9 + 4;
    if (uVar6 == 0) break;
LAB_0519cbe4:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0519cc18;
    }
  }
LAB_0519cbfc:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cc18:
  (*(code *)*puVar5)(plVar7,puVar5[1]);
LAB_0519cc24:
  if ((uVar10 & 1) != 0) goto LAB_0519cde0;
LAB_0519cc38:
  if (unaff_x21 != (long *)0x0) {
    lVar8 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0519cc88;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_0519cc88:
    plVar7 = (long *)(*(code *)*puVar5)();
    puVar2 = PTR_DAT_066083f8;
    puVar1 = PTR_DAT_065c8d08;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar8 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0519ccf8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar1,0);
LAB_0519ccf8:
      uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      if ((uVar6 & 1) == 0) goto LAB_0519cd74;
      lVar8 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0519cd54;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
LAB_0519cd54:
      (*(code *)*puVar5)(plVar7,puVar5[1]);
      FUN_0519d2ec();
    } while( true );
  }
LAB_0519ce38:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


