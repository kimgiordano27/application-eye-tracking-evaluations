/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncDisableTrigger$$GetOnDisableAsyncHandler
ENTRY_POINT: 057935f4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void Cysharp_Threading_Tasks_Triggers_AsyncDisableTrigger__GetOnDisableAsyncHandler(int param_1)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  int iVar7;
  long unaff_x19;
  int iVar8;
  long unaff_x24;
  long unaff_x25;
  
  if (in_w8 == 0) {
    iVar7 = *(int *)(unaff_x19 + 0x14);
    iVar8 = *(int *)(unaff_x19 + 0x28);
  }
  else {
    iVar7 = *(int *)(unaff_x19 + 0x28);
    iVar8 = *(int *)(unaff_x19 + 0x10);
  }
  if (iVar7 - iVar8 < param_1) {
    param_1 = iVar7 - iVar8;
  }
  sVar3 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                    ();
  iVar7 = param_1;
  if (0 < param_1) {
    do {
      sVar4 = FUN_057927e4();
      if (sVar4 == sVar3) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar8 = *(int *)(unaff_x19 + 0x28) + -1;
        if (*(char *)(unaff_x19 + 0x98) != '\0') {
          iVar8 = *(int *)(unaff_x19 + 0x28) + 1;
        }
        *(int *)(unaff_x19 + 0x28) = iVar8;
        goto LAB_05793b18;
      }
      iVar8 = iVar7 + -1;
      bVar1 = 0 < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar1);
    iVar7 = 0;
  }
LAB_05793b18:
  iVar8 = 2;
  if (iVar7 < param_1) {
    Cysharp_Threading_Tasks_Triggers_AsyncCollisionExitTrigger__OnCollisionExit();
    iVar8 = 2;
  }
  while( true ) {
    if (-1 < iVar8) {
      FUN_057920b4();
      iVar8 = -1;
    }
    FUN_0579bfb0();
    uVar2 = *(uint *)(unaff_x19 + 0x90);
    if (uVar2 < 0x2b) {
                    /* WARNING: Could not recover jumptable at 0x05792ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(unaff_x25 + (ulong)uVar2 * 2) * 4 + 0x5792ff4))();
      return;
    }
    if ((int)uVar2 < 0x118) break;
    if ((int)uVar2 < 0x11c) {
      if (uVar2 == 0x118) {
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      }
      else {
        if (uVar2 != 0x119) goto switchD_05792ff0_caseD_27;
        *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x19 + 0x48) + 1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      }
      FUN_0579259c();
      FUN_05792610();
    }
    else {
      if (uVar2 == 0x11c) {
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 2;
        FUN_0579259c();
        FUN_057925d4();
      }
      else {
        if (uVar2 != 0x11d) goto switchD_05792ff0_caseD_27;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x19 + 0x48) + 2;
        FUN_0579259c();
        FUN_057926fc();
      }
      FUN_0579264c();
    }
    FUN_05792490();
  }
  if (uVar2 - 0x83 < 0x22) {
                    /* WARNING: Could not recover jumptable at 0x057938d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(unaff_x24 + (ulong)(uVar2 - 0x83) * 2) * 4 + 0x57938d4))();
    return;
  }
switchD_05792ff0_caseD_27:
  uVar5 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<xxHash3_Hash64Long_00000A6A_PostfixBurstDelegate>_get_Value__
                            );
  uVar5 = FUN_057741b4(uVar5,0);
  uVar6 = thunk_FUN_02db45e8(
                            Method_Unity_Burst_FunctionPointer<AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate>_get_Value__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar5,uVar6);
}


