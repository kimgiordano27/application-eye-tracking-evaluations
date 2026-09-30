/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 057abf68
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057ac114) */
/* WARNING: Removing unreachable block (ram,0x057ac15c) */

void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__Invoke
               (long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long *plVar6;
  long unaff_x24;
  long *plVar7;
  long *in_stack_00000018;
  
                    /* try { // try from 057abf68 to 058abf77 has its CatchHandler @ 057abf78 */
  plVar6 = *(long **)(unaff_x23 + 0x9b0);
  plVar7 = *(long **)(unaff_x24 + 0x3f0);
  do {
    lVar3 = *param_1;
                    /* catch() { ... } // from try @ 057abec4 with catch @ 057abf78
                       catch() { ... } // from try @ 057abf68 with catch @ 057abf78 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar6) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto 
          Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall__GetFunctionPointerDiscard
          ;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d87540(param_1,*plVar6,0);

    Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall__GetFunctionPointerDiscard
    :
    uVar4 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_057ac108;
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_057ac0e0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar7) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_057ac024;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d87540(in_stack_00000018,*plVar7,0);
LAB_057ac024:
    lVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    plVar2 = (long *)FUN_057ac25c(*(undefined8 *)(lVar3 + 0x10));
    if (plVar2 == (long *)0x0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_057b7a7c();
    }
    else {
      (**(code **)(*plVar2 + 0x178))(plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x180));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_057b7a7c();
    }
    param_1 = in_stack_00000018;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_066479a8) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_057ac0fc;
    }
  }
LAB_057ac0e0:
  puVar1 = (undefined8 *)FUN_02d87540(in_stack_00000018,*(long *)PTR_DAT_066479a8,0);
LAB_057ac0fc:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_057ac108:
  thunk_FUN_02d5bde4();
  *unaff_x19 = unaff_x20;
  thunk_FUN_02dc1ef0();
  return;
}


