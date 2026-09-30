/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 055d4530
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


uint Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__Invoke
               (undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool in_ZR;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long in_stack_00000008;
  
                    /* try { // try from 055d4534 to 056d4537 has its CatchHandler @ 055d51b0 */
                    /* try { // try from 055d4538 to 056d454b has its CatchHandler @ 055d51b4 */
  lVar10 = FUN_055d335c(param_1,!in_ZR,1);
  if (in_stack_00000008 == 0) {
    if (((*(long *)(unaff_x19 + 0x20) == 0) || (lVar10 == 0)) || (*(long *)(lVar10 + 0x20) == 0))
    goto LAB_055d459c;
    uVar7 = FUN_04c08b4c(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x20),
                         *(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x20),0);
    if ((uVar7 & 1) == 0) {
      lVar8 = FUN_055cfd20();
      lVar9 = FUN_055cfd20(lVar10,0x3f,3);
      if (lVar8 == 0) {
        if (lVar9 != 0) {
          thunk_FUN_02b485d0(0);
        }
LAB_055d459c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar4 = thunk_FUN_02b485d0(0);
      if (lVar9 == 0) goto LAB_055d459c;
      iVar5 = thunk_FUN_02b485d0(0);
      uVar1 = *(undefined4 *)(lVar8 + 0x10);
      uVar2 = *(undefined4 *)(lVar9 + 0x10);
      if ((*(byte *)(unaff_x19 + 0x33) & 0x18) == 0) {
        bVar3 = (*(byte *)(lVar10 + 0x33) & 0x18) != 0;
      }
      else {
        bVar3 = true;
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_Future_AuthResult_Action>__ctor__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar6 = FUN_055f7b40(lVar8 + iVar4,uVar1,lVar9 + iVar5,uVar2,bVar3,0);
      goto LAB_055d44e8;
    }
  }
  uVar6 = 0;
LAB_055d44e8:
  return uVar6 & 1;
}


