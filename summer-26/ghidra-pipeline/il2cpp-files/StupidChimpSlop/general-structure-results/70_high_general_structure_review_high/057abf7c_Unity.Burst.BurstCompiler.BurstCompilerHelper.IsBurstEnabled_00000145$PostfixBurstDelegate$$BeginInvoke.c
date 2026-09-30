/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 057abf7c
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

void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
  do {
                    /* try { // try from 057abf7c to 058abf7f has its CatchHandler @ 057abf88 */
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* try { // try from 057abf80 to 058abf8b has its CatchHandler @ 057abb8c */
    if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 057abf7c with catch @ 057abf88 */
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto 
          Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall__GetFunctionPointerDiscard
          ;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d87540(unaff_x21,param_3,0);

    Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall__GetFunctionPointerDiscard
    :
    uVar4 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
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
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_057ac024;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d87540(in_stack_00000018,*unaff_x24,0);
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
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    param_1 = *in_stack_00000018;
    param_3 = *unaff_x23;
    unaff_x21 = in_stack_00000018;
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


