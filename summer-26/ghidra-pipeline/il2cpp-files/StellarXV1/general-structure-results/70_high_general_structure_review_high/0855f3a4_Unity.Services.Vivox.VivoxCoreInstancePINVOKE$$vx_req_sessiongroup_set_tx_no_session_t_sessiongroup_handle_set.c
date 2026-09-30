/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_set
ENTRY_POINT: 0855f3a4
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  long *in_stack_00000048;
  long in_stack_00000068;
  
code_r0x0855f3a4:
  piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0855f3e0;
    }
    in_x9 = in_x9 - 1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
LAB_0855f3c4:
  puVar3 = (undefined8 *)FUN_040b1e00(unaff_x21,param_3,0);
LAB_0855f3e0:
  (*(code *)*puVar3)(unaff_x21,puVar3[1]);
LAB_0855f3ec:
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828(unaff_x20);
  }
  uVar1 = FUN_05365070(&stack0x00000050,*unaff_x25);
  if ((uVar1 & 1) == 0) {
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
    lVar4 = *unaff_x22;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar4 = *unaff_x22;
    }
    **(undefined4 **)(lVar4 + 0xb8) = 0;
    return;
  }
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar2 = (long *)FUN_0651a294(in_stack_00000068,*unaff_x26);
  do {
    in_stack_00000048 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0855f2f0;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar2,*unaff_x28,0);
LAB_0855f2f0:
    uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = in_stack_00000048;
    if ((uVar1 & 1) == 0) break;
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *in_stack_00000048;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0855f354;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000048,*unaff_x29,0);
LAB_0855f354:
    (*(code *)*puVar3)(&stack0x00000020,plVar2,puVar3[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0844a394(in_stack_00000028,0);
    plVar2 = in_stack_00000048;
  } while( true );
  unaff_x20 = 0;
  if (in_stack_00000048 != (long *)0x0) goto code_r0x0855f394;
  goto LAB_0855f3ec;
code_r0x0855f394:
  param_1 = *in_stack_00000048;
  param_3 = *unaff_x27;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x21 = in_stack_00000048;
  if (in_x9 != 0) goto code_r0x0855f3a4;
  goto LAB_0855f3c4;
}


