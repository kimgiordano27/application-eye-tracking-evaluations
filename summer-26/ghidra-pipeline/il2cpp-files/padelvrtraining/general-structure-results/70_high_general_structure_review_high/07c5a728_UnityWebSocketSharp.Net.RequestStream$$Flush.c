/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$Flush
ENTRY_POINT: 07c5a728
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_Net_RequestStream__Flush
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x29;
  undefined8 uVar5;
  
  uVar5 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  *(undefined8 *)(param_1 + -0x18) = uVar5;
  *(undefined8 *)(param_1 + -0x20) = uVar4;
  *(undefined8 *)(param_1 + -8) = uVar5;
  *(undefined8 *)(param_1 + -0x10) = uVar4;
  *(undefined8 *)(param_1 + -0x38) = uVar5;
  *(undefined8 *)(param_1 + -0x40) = uVar4;
  *(undefined8 *)(param_1 + -0x28) = uVar5;
  *(undefined8 *)(param_1 + -0x30) = uVar4;
  *(undefined8 *)(param_1 + -0x58) = uVar5;
  *(undefined8 *)(param_1 + -0x60) = uVar4;
  *(undefined8 *)(param_1 + -0x48) = uVar5;
  *(undefined8 *)(param_1 + -0x50) = uVar4;
  *(undefined8 *)(param_1 + -0x78) = uVar5;
  *(undefined8 *)(param_1 + -0x80) = uVar4;
  *(undefined8 *)(param_1 + -0x68) = uVar5;
  *(undefined8 *)(param_1 + -0x70) = uVar4;
  FUN_07c5a5e0(unaff_x29 + -0x40,param_4,0x20);
  lVar3 = FUN_07c5a820(unaff_x29 + -0x40);
  FUN_07c5a9b8(unaff_x29 + -0x40);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x18) != '\0')) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_091a2ae0 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if ((uVar1 >> 9 & 1) == 0) {
      uVar4 = FUN_07139314();
    }
    else {
      uVar4 = FUN_071392b4(0);
    }
    uVar4 = FUN_07c5aa00(lVar3,uVar4);
    uVar2 = *(undefined1 *)(lVar3 + 0x19);
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
    *(undefined8 *)(unaff_x29 + -0x48) = uVar4;
    thunk_FUN_03d1023c(unaff_x29 + -0x48);
    *(undefined1 *)(unaff_x29 + -0x50) = uVar2;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    FUN_05edd89c();
  }
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


