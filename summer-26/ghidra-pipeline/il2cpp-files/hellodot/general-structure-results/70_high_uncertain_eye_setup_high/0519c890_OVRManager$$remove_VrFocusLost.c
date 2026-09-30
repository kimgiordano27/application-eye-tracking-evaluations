/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 0519c890
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0519cc30) */
/* WARNING: Removing unreachable block (ram,0x0519ce40) */
/* WARNING: Removing unreachable block (ram,0x0519ce48) */

undefined8
OVRManager__remove_VrFocusLost
          (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long in_x11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
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
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000a0;
  
  while (in_x11 != param_6) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_0519c8c4;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_0519c8c4:
  in_stack_00000058 = (*(code *)*puVar5)();
  uStack000000000000005c = (undefined4)param_3;
  in_stack_00000060 = (undefined4)param_4;
  lVar7 = *unaff_x22;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0519c928;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_0519c928:
  (*(code *)*puVar5)();
  lVar7 = *unaff_x22;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0519c988;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_0519c988:
  puVar1 = PTR_DAT_065c8c40;
  uVar11 = (*(code *)*puVar5)();
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_0519cfcc(uVar11,param_3,param_4,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
               *(undefined4 *)(lVar7 + 0x20));
  lVar7 = *(long *)puVar1;
  in_stack_000000a0 = in_stack_00000020;
  *(undefined8 *)(unaff_x24 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x24 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x24 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000000;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar1 = PTR_DAT_066083f0;
  uVar8 = FUN_05ef59b8(uVar11,0,0);
  if ((uVar8 & 1) != 0) {
    if (unaff_x21 != (long *)0x0) {
      lVar7 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0519ca9c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_0519ca9c:
      plVar6 = (long *)(*(code *)*puVar5)();
      puVar3 = PTR_DAT_066083f8;
      puVar2 = PTR_DAT_065c8d08;
      uVar10 = 0;
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0519cb10;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar2,0);
LAB_0519cb10:
        uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_0519cc24;
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_0519cbfc;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0519cbe4;
        }
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0519cb6c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar3,0);
LAB_0519cb6c:
        lVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(char *)(lVar7 + 0xb0) == '\0') {
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
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0519cdd0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cdd0:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
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
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0519cbe4:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0519cc18;
    }
  }
LAB_0519cbfc:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cc18:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_0519cc24:
  if ((uVar10 & 1) != 0) goto LAB_0519cde0;
LAB_0519cc38:
  if (unaff_x21 != (long *)0x0) {
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0519cc88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_0519cc88:
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar2 = PTR_DAT_066083f8;
    puVar1 = PTR_DAT_065c8d08;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0519ccf8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar1,0);
LAB_0519ccf8:
      uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar8 & 1) == 0) goto LAB_0519cd74;
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0519cd54;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar2,0);
LAB_0519cd54:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      FUN_0519d2ec();
    } while( true );
  }
LAB_0519ce38:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


