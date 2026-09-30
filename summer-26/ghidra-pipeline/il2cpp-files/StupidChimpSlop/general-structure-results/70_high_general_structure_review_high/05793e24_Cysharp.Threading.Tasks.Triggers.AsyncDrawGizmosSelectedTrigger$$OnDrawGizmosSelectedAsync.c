/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncDrawGizmosSelectedTrigger$$OnDrawGizmosSelectedAsync
ENTRY_POINT: 05793e24
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void Cysharp_Threading_Tasks_Triggers_AsyncDrawGizmosSelectedTrigger__OnDrawGizmosSelectedAsync
               (void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  
                    /* try { // try from 05793e24 to 05893e27 has its CatchHandler @ 05793e30 */
  iVar2 = FUN_057925d4();
                    /* try { // try from 05793e28 to 05893e33 has its CatchHandler @ 0579363c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05793e24 with catch @ 05793e30
                        */
                    /* try { // try from 05793e34 to 058943d3 has its CatchHandler @ 05793e34
                       catch() { ... } // from try @ 05793e34 with catch @ 05793e34
                       catch() { ... } // from try @ 057944ec with catch @ 05793e34
                       catch() { ... } // from try @ 057946d4 with catch @ 05793e34
                       catch() { ... } // from try @ 05794794 with catch @ 05793e34
                       catch() { ... } // from try @ 05794954 with catch @ 05793e34 */
  iVar3 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                    ();
  if (iVar3 <= iVar2) goto LAB_05793d70;
  if (unaff_w21 == unaff_w20) goto LAB_05793d70;
  *(int *)(unaff_x19 + 0x28) = unaff_w21;
  FUN_057925d4();
  FUN_0579264c();
  FUN_057923b4();
  Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler();
  FUN_05792138();
  while( true ) {
    if (-1 < unaff_w26) {
      FUN_057920b4();
      unaff_w26 = -1;
    }
    FUN_0579bfb0();
    uVar1 = *(uint *)(unaff_x19 + 0x90);
    if (uVar1 < 0x2b) {
                    /* WARNING: Could not recover jumptable at 0x05792ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(unaff_x25 + (ulong)uVar1 * 2) * 4 + 0x5792ff4))();
      return;
    }
    if ((int)uVar1 < 0x118) break;
    if ((int)uVar1 < 0x11c) {
      if (uVar1 == 0x118) {
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      }
      else {
        if (uVar1 != 0x119) goto switchD_05792ff0_caseD_27;
        *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x19 + 0x48) + 1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      }
      FUN_0579259c();
      FUN_05792610();
    }
    else {
      if (uVar1 == 0x11c) {
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 2;
LAB_05793d70:
        FUN_0579259c();
        FUN_057925d4();
      }
      else {
        if (uVar1 != 0x11d) goto switchD_05792ff0_caseD_27;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x19 + 0x48) + 2;
        FUN_0579259c();
        FUN_057926fc();
      }
      FUN_0579264c();
    }
    FUN_05792490();
  }
  if (uVar1 - 0x83 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x057938d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(unaff_x24 + (ulong)(uVar1 - 0x83) * 2) * 4 + 0x57938d4))();
    return;
  }
switchD_05792ff0_caseD_27:
  uVar4 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<xxHash3_Hash64Long_00000A6A_PostfixBurstDelegate>_get_Value__
                            );
  uVar4 = FUN_057741b4(uVar4,0);
  uVar5 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate>_get_Value__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar4,uVar5);
}


