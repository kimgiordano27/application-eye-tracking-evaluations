/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 07bf5564
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  if ((*(byte *)(unaff_x22 + 0x25b) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4e700);
    *(undefined1 *)(unaff_x22 + 0x25b) = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000034 = *(undefined8 *)((long)param_3 + 0x14);
  in_stack_00000020 = *param_3;
  in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
  in_stack_00000028 = (undefined4)param_3[1];
  uStack000000000000002c = (undefined4)((ulong)param_3[1] >> 0x20);
  uVar2 = FUN_07bf52cc(param_1,&stack0x00000020,&stack0x00000040);
  if ((uVar2 & 1) == 0) {
    uStack0000000000000014 = *(undefined8 *)((long)param_3 + 0x14);
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
    uStack0000000000000008 = (undefined4)param_3[1];
    uStack000000000000000c = (undefined4)((ulong)param_3[1] >> 0x20);
    uVar1 = *param_3;
  }
  else {
    uStack0000000000000014 = CONCAT44(in_stack_00000058,uStack0000000000000054);
    uVar1 = in_stack_00000040;
    uStack0000000000000008 = in_stack_00000048;
    uStack000000000000000c = uStack000000000000004c;
    uStack0000000000000010 = in_stack_00000050;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000060 = uVar1;
  in_stack_00000068 = uStack0000000000000008;
  uStack000000000000006c = uStack000000000000000c;
  in_stack_00000070 = uStack0000000000000010;
  uStack0000000000000074 = uStack0000000000000014;
  FUN_07321edc(*(long *)(param_1 + 0x30),param_2,&stack0x00000060,*(undefined8 *)PTR_DAT_09f4e700);
  return;
}


