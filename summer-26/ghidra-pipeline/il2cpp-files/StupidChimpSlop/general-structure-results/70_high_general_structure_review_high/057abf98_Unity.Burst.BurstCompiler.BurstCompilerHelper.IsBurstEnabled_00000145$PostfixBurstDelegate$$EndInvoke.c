/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 057abf98
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057ac114) */
/* WARNING: Removing unreachable block (ram,0x057ac15c) */

void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__EndInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
code_r0x057abf98:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_057abf8c;
LAB_057abfa4:
  puVar1 = (undefined8 *)FUN_02d87540(unaff_x21,param_3,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_057ac108;
      lVar4 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_057ac0e0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar4 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_057ac024;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d87540(in_stack_00000018,*unaff_x24,0);
LAB_057ac024:
    lVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    plVar3 = (long *)FUN_057ac25c(*(undefined8 *)(lVar4 + 0x10));
    if (plVar3 == (long *)0x0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_057b7a7c();
    }
    else {
      (**(code **)(*plVar3 + 0x178))(plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x180));
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
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000018;
    if (in_x9 == 0) goto LAB_057abfa4;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_057abf8c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x057abf98;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_066479a8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
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


