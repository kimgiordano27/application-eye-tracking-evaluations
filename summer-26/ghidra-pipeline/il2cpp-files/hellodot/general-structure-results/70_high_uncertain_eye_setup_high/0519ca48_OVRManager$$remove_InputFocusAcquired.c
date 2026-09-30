/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 0519ca48
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

undefined8 OVRManager__remove_InputFocusAcquired(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x25;
  uint uVar9;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000078;
  
  if ((param_1 & 1) != 0) {
    if (unaff_x21 != (long *)0x0) {
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0519ca9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_0519ca9c:
      plVar5 = (long *)(*(code *)*puVar4)();
      puVar2 = PTR_DAT_066083f8;
      puVar1 = PTR_DAT_065c8d08;
      uVar9 = 0;
      do {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0519cb10;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)puVar1,0);
LAB_0519cb10:
        uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_0519cc24;
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_0519cbfc;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0519cbe4;
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0519cb6c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)puVar2,0);
LAB_0519cb6c:
        lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(char *)(lVar6 + 0xb0) == '\0') {
          if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_05f01910(*(long *)(unaff_x20 + 0x28),0);
          uVar3 = FUN_0519d174();
          uVar9 = uVar9 | uVar3;
        }
      } while( true );
    }
    goto LAB_0519ce38;
  }
  goto LAB_0519cc38;
LAB_0519cd74:
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0519cdd0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cdd0:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
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
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0519cbe4:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0519cc18;
    }
  }
LAB_0519cbfc:
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065c8a48,0);
LAB_0519cc18:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0519cc24:
  if ((uVar9 & 1) != 0) goto LAB_0519cde0;
LAB_0519cc38:
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0519cc88;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_0519cc88:
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar2 = PTR_DAT_066083f8;
    puVar1 = PTR_DAT_065c8d08;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0519ccf8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)puVar1,0);
LAB_0519ccf8:
      uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar7 & 1) == 0) goto LAB_0519cd74;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0519cd54;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)puVar2,0);
LAB_0519cd54:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      FUN_0519d2ec();
    } while( true );
  }
LAB_0519ce38:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


