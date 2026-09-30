/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_get
ENTRY_POINT: 0855f43c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0855f464) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_get
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  long *in_stack_00000048;
  long in_stack_00000068;
  
code_r0x0855f38c:
  plVar5 = (long *)*in_stack_00000008;
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0855f3e0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x27,0);
LAB_0855f3e0:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828(unaff_x20);
  }
  uVar3 = FUN_05365070(&stack0x00000050,*unaff_x25);
  if ((uVar3 & 1) == 0) {
    FUN_05365194(in_stack_00000018,*unaff_x24);
    if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828(in_stack_00000010);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_06e23464(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0932eaa0);
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *unaff_x22;
    }
    **(undefined4 **)(lVar2 + 0xb8) = 0;
    return;
  }
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar5 = (long *)FUN_0651a294(in_stack_00000068,*unaff_x26);
  do {
    in_stack_00000048 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0855f2f0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x28,0);
LAB_0855f2f0:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = in_stack_00000048;
    if ((uVar3 & 1) == 0) break;
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar2 = *in_stack_00000048;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x29) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0855f354;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(in_stack_00000048,*unaff_x29,0);
LAB_0855f354:
    (*(code *)*puVar1)(&stack0x00000020,plVar5,puVar1[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0844a394(in_stack_00000028,0);
    plVar5 = in_stack_00000048;
  } while( true );
  unaff_x20 = 0;
  in_stack_00000008 = &stack0x00000048;
  goto code_r0x0855f38c;
}


