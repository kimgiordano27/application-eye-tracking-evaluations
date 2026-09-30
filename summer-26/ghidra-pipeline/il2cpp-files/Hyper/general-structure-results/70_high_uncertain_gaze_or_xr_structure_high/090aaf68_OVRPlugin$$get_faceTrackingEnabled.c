/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 090aaf68
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__get_faceTrackingEnabled
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar2;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  
  uStack0000000000000040 = param_1._0_8_;
  uStack0000000000000060 = param_1._4_4_;
  uStack0000000000000058 = param_1._8_4_;
  uStack000000000000005c = param_1._12_4_;
  uStack0000000000000050 = uStack0000000000000040;
  if (param_5 != 0) {
    in_stack_00000030 = unaff_x21[2];
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    uVar1 = FUN_0a1ee23c(0x7f800000,param_5,&stack0x00000020,&stack0x00000040,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac401c0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0a188688(&stack0x00000000 + 4,0);
      unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *unaff_x19 = in_stack_00000000._4_8_;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    }
    else {
      uVar2 = FUN_0a1f8a4c(&stack0x00000040,0);
      *(undefined4 *)unaff_x19 = uVar2;
      *(undefined4 *)((long)unaff_x19 + 4) = param_2;
      *(undefined4 *)(unaff_x19 + 1) = param_3;
      if (unaff_x20 == 0) goto LAB_090ab020;
      uVar2 = FUN_0a1884ac();
      *(undefined4 *)((long)unaff_x19 + 0xc) = uVar2;
      *(undefined4 *)(unaff_x19 + 2) = param_2;
      *(undefined4 *)((long)unaff_x19 + 0x14) = param_3;
      *(undefined4 *)(unaff_x19 + 3) = param_4;
    }
    return uVar1 & 1;
  }
LAB_090ab020:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


