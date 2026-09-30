/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_set_tx_all_sessions_t
ENTRY_POINT: 0855f148
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0855f3f0) */
/* WARNING: Removing unreachable block (ram,0x0855f464) */
/* WARNING: Removing unreachable block (ram,0x0855f4cc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_set_tx_all_sessions_t
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
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
  
  if ((DAT_0989da97 & 1) == 0) {
    FUN_04077588(PTR_DAT_0932eaa0);
    FUN_04077588(PTR_DAT_0932eaa8);
    FUN_04077588(PTR_DAT_0932eab0);
    FUN_04077588(PTR_DAT_0932eab8);
    FUN_04077588(PTR_DAT_0932eac0);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_0932eac8);
    FUN_04077588(PTR_DAT_092860c8);
    FUN_04077588(PTR_DAT_0932ead0);
    FUN_04077588(PTR_DAT_0932ead8);
    FUN_04077588(PTR_DAT_0932e900);
    FUN_04077588(PTR_DAT_0932eae0);
    DAT_0989da97 = 1;
  }
  puVar7 = PTR_DAT_0932eae0;
  puVar6 = PTR_DAT_0932eac8;
  puVar5 = PTR_DAT_0932eab8;
  puVar4 = PTR_DAT_0932eab0;
  puVar3 = PTR_DAT_0932e900;
  puVar2 = PTR_DAT_092860c8;
  puVar1 = PTR_DAT_092860c0;
  in_stack_00000070 = 0;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0855f4c8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_06e23718(&stack0x00000020,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0932eaa8);
  in_stack_00000070 = in_stack_00000040;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  in_stack_00000068 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000030;
LAB_0855f274:
  uVar8 = FUN_05365070(&stack0x00000050,*(undefined8 *)puVar5);
  if ((uVar8 & 1) != 0) {
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar9 = (long *)FUN_0651a294(in_stack_00000068,*(undefined8 *)puVar7);
    do {
      in_stack_00000048 = plVar9;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar11 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0855f2f0;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar2,0);
LAB_0855f2f0:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      plVar9 = in_stack_00000048;
      if ((uVar8 & 1) == 0) goto LAB_0855f384;
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar11 = *in_stack_00000048;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0855f354;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(in_stack_00000048,*(long *)puVar6,0);
LAB_0855f354:
      (*(code *)*puVar10)(&stack0x00000020,plVar9,puVar10[1]);
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0844a394(in_stack_00000028,0);
      plVar9 = in_stack_00000048;
    } while( true );
  }
  FUN_05365194(&stack0x00000050,*(undefined8 *)puVar4);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_06e23464(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0932eaa0);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *(long *)puVar3;
    }
    **(undefined4 **)(lVar11 + 0xb8) = 0;
    return;
  }
  goto LAB_0855f4c8;
LAB_0855f384:
  if (in_stack_00000048 != (long *)0x0) {
    lVar11 = *in_stack_00000048;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0855f3e0;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_040b1e00(in_stack_00000048,*(long *)puVar1,0);
LAB_0855f3e0:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  goto LAB_0855f274;
}


