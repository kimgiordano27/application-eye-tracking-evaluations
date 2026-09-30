/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_t_base__get
ENTRY_POINT: 0855f328
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0855f464) */
/* WARNING: Removing unreachable block (ram,0x0855f3f0) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_t_base__get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
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
  
code_r0x0855f328:
  if ((bool)in_ZR) {
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_0855f354;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_0855f338:
    puVar2 = (undefined8 *)FUN_040b1e00(unaff_x20,param_3,0);
LAB_0855f354:
    (*(code *)*puVar2)(&stack0x00000020,unaff_x20,puVar2[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0844a394(in_stack_00000028,0);
    plVar1 = in_stack_00000048;
    do {
      in_stack_00000048 = plVar1;
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0855f2f0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar1,*unaff_x28,0);
LAB_0855f2f0:
      uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      plVar1 = in_stack_00000048;
      if ((uVar4 & 1) != 0) goto code_r0x0855f300;
      if (in_stack_00000048 != (long *)0x0) {
        lVar3 = *in_stack_00000048;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0855f3e0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000048,*unaff_x27,0);
LAB_0855f3e0:
        (*(code *)*puVar2)(plVar1,puVar2[1]);
      }
      uVar4 = FUN_05365070(&stack0x00000050,*unaff_x25);
      if ((uVar4 & 1) == 0) {
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
        lVar3 = *unaff_x22;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar3 = *unaff_x22;
        }
        **(undefined4 **)(lVar3 + 0xb8) = 0;
        return;
      }
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar1 = (long *)FUN_0651a294(in_stack_00000068,*unaff_x26);
    } while( true );
  }
  goto LAB_0855f320;
code_r0x0855f300:
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  param_1 = *in_stack_00000048;
  param_3 = *unaff_x29;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x20 = in_stack_00000048;
  if (in_x9 != 0) goto code_r0x0855f318;
  goto LAB_0855f338;
code_r0x0855f318:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0855f320:
  in_ZR = *(long *)(in_x10 + -2) == param_3;
  goto code_r0x0855f328;
}


