/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$get_writing
ENTRY_POINT: 06802068
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Normal_Realtime_SessionCaptureFileStream__get_writing(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    uVar1 = unaff_x19[0xc];
    while( true ) {
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (*(short *)(param_1 + (long)(int)uVar1 * 2 + 0x20) == 0) break;
      uVar3 = FUN_067f3d00();
      if ((uVar3 & 1) != 0) goto LAB_06802108;
      param_1 = *(long *)(unaff_x20 + 0x80);
      uVar1 = unaff_x19[0xc] + 1;
      unaff_x19[0xc] = uVar1;
      if (param_1 == 0) goto LAB_068020a8;
    }
    *(uint *)(unaff_x20 + 0x8c) = uVar1;
    if (*(uint *)(unaff_x20 + 0x88) != uVar1) break;
    lVar4 = FUN_067ed324();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    auVar5 = FUN_058b2d9c(lVar4,0,*unaff_x22);
    _in_stack_00000010 = auVar5;
    uVar3 = FUN_05d63368(&stack0x00000010,*unaff_x23);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000010;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e0c8c(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    iVar2 = FUN_05d633b0(&stack0x00000010,*unaff_x24);
    if (iVar2 == 0) break;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_1 = *(long *)(unaff_x20 + 0x80);
    if (param_1 == 0) {
LAB_068020a8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
LAB_06802108:
  lVar4 = *unaff_x21;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


