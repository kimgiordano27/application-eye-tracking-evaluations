/*
FUNCTION_NAME: OVRManager$$get_boundary
ENTRY_POINT: 05fedcbc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fedd44) */
/* WARNING: Removing unreachable block (ram,0x05fedf60) */
/* WARNING: Removing unreachable block (ram,0x05fedf68) */

undefined8 OVRManager__get_boundary(void)

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
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000080;
  
  do {
    uVar3 = FUN_05fee2a0();
    unaff_w26 = unaff_w26 | uVar3;
    do {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar6 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05fedc24;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_05fedc24:
      uVar7 = (*(code *)*puVar4)();
      if ((uVar7 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_05fedd38;
        lVar6 = *unaff_x22;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_05fedd10;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_05fedcf8;
      }
      lVar6 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05fedc80;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_05fedc80:
      lVar6 = (*(code *)*puVar4)();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
    } while (*(char *)(lVar6 + 0xb0) != '\0');
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_06e6a5c4(*(long *)(unaff_x20 + 0x28),0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_05fedcf8:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05fedd2c;
    }
  }
LAB_05fedd10:
  puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_05fedd2c:
  (*(code *)*puVar4)();
LAB_05fedd38:
  if ((unaff_w26 & 1) == 0) {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05fedd9c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_05fedd9c:
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar2 = PTR_DAT_075f6b68;
    puVar1 = PTR_DAT_0759e2a8;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05fede0c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)puVar1,0);
LAB_05fede0c:
      uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar7 & 1) == 0) goto LAB_05fede88;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05fede68;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)puVar2,0);
LAB_05fede68:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      FUN_05fee418();
    } while( true );
  }
  goto LAB_05fedef4;
LAB_05fede88:
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0759b580) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05fedee4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_0759b580,0);
LAB_05fedee4:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
LAB_05fedef4:
  memcpy(&stack0x00000000,&stack0x00000060,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  thunk_FUN_0329bf60();
  return in_stack_00000080;
}


