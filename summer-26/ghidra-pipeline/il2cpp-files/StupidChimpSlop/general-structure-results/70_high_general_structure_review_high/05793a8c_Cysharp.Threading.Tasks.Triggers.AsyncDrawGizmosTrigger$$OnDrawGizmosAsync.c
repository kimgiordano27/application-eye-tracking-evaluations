/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncDrawGizmosTrigger$$OnDrawGizmosAsync
ENTRY_POINT: 05793a8c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Cysharp_Threading_Tasks_Triggers_AsyncDrawGizmosTrigger__OnDrawGizmosAsync(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  long unaff_x19;
  int iVar4;
  uint unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long unaff_x25;
  
  while (in_w8 == (unaff_w20 & 0xffff)) {
    if (unaff_w22 + -1 == 0 || unaff_w22 < 1) {
      unaff_w22 = 0;
      goto LAB_05793b18;
    }
    uVar1 = FUN_057927e4();
    unaff_w22 = unaff_w22 + -1;
    in_w8 = uVar1 & 0xffff;
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar4 = *(int *)(unaff_x19 + 0x28) + -1;
  if (*(char *)(unaff_x19 + 0x98) != '\0') {
    iVar4 = *(int *)(unaff_x19 + 0x28) + 1;
  }
  *(int *)(unaff_x19 + 0x28) = iVar4;
LAB_05793b18:
  iVar4 = 2;
  if (unaff_w22 < unaff_w21) {
    Cysharp_Threading_Tasks_Triggers_AsyncCollisionExitTrigger__OnCollisionExit();
    iVar4 = 2;
  }
  while( true ) {
    if (-1 < iVar4) {
      FUN_057920b4();
      iVar4 = -1;
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
    FUN_05792490();
  }
  if (uVar1 - 0x83 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x057938d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(unaff_x24 + (ulong)(uVar1 - 0x83) * 2) * 4 + 0x57938d4))();
    return;
  }
switchD_05792ff0_caseD_27:
  uVar2 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<xxHash3_Hash64Long_00000A6A_PostfixBurstDelegate>_get_Value__
                            );
  uVar2 = FUN_057741b4(uVar2,0);
  uVar3 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate>_get_Value__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar2,uVar3);
}


