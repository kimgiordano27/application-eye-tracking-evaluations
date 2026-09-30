/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_all_sessions_create
ENTRY_POINT: 0855f228
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0855f3f0) */
/* WARNING: Removing unreachable block (ram,0x0855f464) */
/* WARNING: Removing unreachable block (ram,0x0855f4cc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_all_sessions_create
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x25;
  undefined8 *puVar8;
  long unaff_x26;
  undefined8 *puVar9;
  long unaff_x27;
  long *plVar10;
  long unaff_x28;
  long *plVar11;
  long unaff_x29;
  long *plVar12;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  
  puVar2 = PTR_DAT_0932eab0;
  puVar1 = PTR_DAT_0932e900;
  puVar8 = *(undefined8 **)(unaff_x25 + 0xab8);
  puVar9 = *(undefined8 **)(unaff_x26 + 0xae0);
  plVar10 = *(long **)(unaff_x27 + 0xc0);
  plVar11 = *(long **)(unaff_x28 + 200);
  plVar12 = *(long **)(unaff_x29 + 0xac8);
  FUN_06e23718(&stack0x00000020,param_2,*param_1);
  in_stack_00000070 = in_stack_00000040;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  in_stack_00000068 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000030;
LAB_0855f274:
  uVar3 = FUN_05365070(&stack0x00000050,*puVar8);
  if ((uVar3 & 1) == 0) {
    FUN_05365194(&stack0x00000050,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_06e23464(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0932eaa0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar6 = *(long *)puVar1;
      }
      **(undefined4 **)(lVar6 + 0xb8) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar4 = (long *)FUN_0651a294(in_stack_00000068,*puVar9);
  do {
    in_stack_00000048 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar11) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0855f2f0;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*plVar11,0);
LAB_0855f2f0:
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = in_stack_00000048;
    if ((uVar3 & 1) == 0) break;
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *in_stack_00000048;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar12) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0855f354;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000048,*plVar12,0);
LAB_0855f354:
    (*(code *)*puVar5)(&stack0x00000020,plVar4,puVar5[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0844a394(in_stack_00000028,0);
    plVar4 = in_stack_00000048;
  } while( true );
  if (in_stack_00000048 != (long *)0x0) {
    lVar6 = *in_stack_00000048;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar10) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0855f3e0;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000048,*plVar10,0);
LAB_0855f3e0:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_0855f274;
}


