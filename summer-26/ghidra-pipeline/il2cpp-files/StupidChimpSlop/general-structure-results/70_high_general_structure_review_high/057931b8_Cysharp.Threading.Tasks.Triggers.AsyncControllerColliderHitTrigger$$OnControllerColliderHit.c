/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncControllerColliderHitTrigger$$OnControllerColliderHit
ENTRY_POINT: 057931b8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void Cysharp_Threading_Tasks_Triggers_AsyncControllerColliderHitTrigger__OnControllerColliderHit
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  int iVar5;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  
  uVar2 = FUN_0579c9e4(param_1,param_2,0);
  iVar5 = 1;
  if ((uVar2 & 1) != 0) goto LAB_05792fb0;
  while( true ) {
    iVar5 = unaff_w26;
    FUN_05792490();
LAB_05792fb0:
    if (-1 < iVar5) {
      FUN_057920b4();
      iVar5 = -1;
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
    unaff_w26 = iVar5;
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
  }
  if (uVar1 - 0x83 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x057938d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(unaff_x24 + (ulong)(uVar1 - 0x83) * 2) * 4 + 0x57938d4))();
    return;
  }
switchD_05792ff0_caseD_27:
  uVar3 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<xxHash3_Hash64Long_00000A6A_PostfixBurstDelegate>_get_Value__
                            );
  uVar3 = FUN_057741b4(uVar3,0);
  uVar4 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate>_get_Value__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar3,uVar4);
}


