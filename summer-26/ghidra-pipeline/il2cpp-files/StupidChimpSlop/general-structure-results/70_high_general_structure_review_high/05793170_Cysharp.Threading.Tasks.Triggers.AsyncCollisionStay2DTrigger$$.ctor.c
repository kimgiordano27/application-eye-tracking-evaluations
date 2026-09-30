/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncCollisionStay2DTrigger$$.ctor
ENTRY_POINT: 05793170
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Cysharp_Threading_Tasks_Triggers_AsyncCollisionStay2DTrigger___ctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  
  do {
    uVar2 = FUN_057927e4();
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*unaff_x23);
    }
    uVar3 = FUN_0578a9c0(uVar2);
    if ((uVar3 & 1) == 0) goto switchD_05792ff0_caseD_16;
    unaff_w22 = unaff_w22 + -1;
  } while (0 < unaff_w22);
  unaff_w26 = 2;
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
switchD_05792ff0_caseD_16:
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


