/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$WriteDeltaUpdate
ENTRY_POINT: 06800c18
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Normal_Realtime_SessionCaptureFileStream__WriteDeltaUpdate(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack000000000000003c;
  
  if (*(short *)(param_1 + 0x20) == 0x2f) {
    lVar1 = FUN_067edae8();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    _in_stack_00000010 = FUN_067c4c10(lVar1,0,0);
    uVar2 = FUN_0666ef78(&stack0x00000010,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043ea714(unaff_x19 + 2,&stack0x00000010);
    }
    else {
      FUN_0666ef90(&stack0x00000010,0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_067e4904();
      lVar1 = *unaff_x21;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
    }
    return;
  }
  lVar1 = thunk_FUN_03af1434(PTR_DAT_084883b0);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_066e1a5c(0);
  lVar1 = *(long *)(unaff_x20 + 0x80);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(uint *)(unaff_x20 + 0x8c) < *(uint *)(lVar1 + 0x18)) {
    uStack000000000000003c =
         *(undefined2 *)(lVar1 + (long)(int)*(uint *)(unaff_x20 + 0x8c) * 2 + 0x20);
    uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x88),&stack0x0000003c);
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084ad6e8);
    FUN_0683e884(uVar5,uVar3,uVar4,0);
    uVar3 = FUN_067e3658();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084adbe8);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


