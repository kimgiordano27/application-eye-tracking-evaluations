/*
FUNCTION_NAME: UnityWebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 06f02140
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06f022b4) */

void UnityWebSocketSharp_Net_ChunkedRequestStream__Close(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  uStack0000000000000030 = param_1;
  FUN_0507217c(&stack0x00000030);
  in_stack_00000050 = in_stack_00000010;
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000000;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x30);
  uVar2 = *(undefined4 *)(unaff_x19 + 100);
  uVar3 = *(undefined4 *)(unaff_x19 + 0x68);
  if (*(int *)(*(long *)PTR_DAT_084d2078 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  iVar5 = FUN_06f01a70(uVar8,in_stack_00000000,uVar2,uVar3,unaff_x19 + 0xa4,0);
  FUN_066fc8a0(&stack0x00000040,0);
  if (*(int *)(unaff_x19 + 0xa4) == 0) {
    iVar1 = *(int *)(unaff_x20 + 0x10) + iVar5;
    *(int *)(unaff_x20 + 0x10) = iVar1;
    iVar4 = *(int *)(unaff_x19 + 100) - iVar5;
    *(int *)(unaff_x19 + 0x60) = *(int *)(unaff_x19 + 0x60) + iVar5;
    *(int *)(unaff_x19 + 100) = iVar4;
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x54) != 1) {
      if (0 < iVar4) {
        uVar8 = FUN_06f0a85c();
        uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084d2a48);
        FUN_06f17710();
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084d2a50);
        FUN_06f17aec(uVar7,2,uVar6);
        thunk_FUN_03aaf50c(uVar8,uVar7,0);
        return;
      }
      *(int *)(unaff_x19 + 0xa0) = iVar1;
    }
  }
  FUN_06f06e7c();
  return;
}


