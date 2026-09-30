/*
FUNCTION_NAME: OVRPlugin$$SetDefaultExternalCamera
ENTRY_POINT: 073df674
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__SetDefaultExternalCamera
          (long param_1,ulong param_2,float param_3,ulong param_4,float param_5,float param_6)

{
  undefined *puVar1;
  float *in_x9;
  undefined8 *unaff_x19;
  long unaff_x22;
  undefined8 uVar2;
  float fVar3;
  ulong uVar4;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  puVar1 = PTR_DAT_08e78410;
  while( true ) {
    if (param_5 <= param_3) {
      param_5 = param_3;
    }
    param_3 = param_5;
    param_1 = param_1 + -1;
    if (param_1 == 0) break;
    param_5 = *in_x9;
    in_x9 = in_x9 + 1;
  }
  if (param_3 < param_6) {
    fVar3 = SQRT(param_6 * param_6 - param_3 * param_3);
    param_2 = CONCAT44((float)(param_2 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(unaff_x22 + 0xc) >> 0x20) * fVar3,
                       (float)param_2 - (float)*(undefined8 *)(unaff_x22 + 0xc) * fVar3);
    param_4 = (ulong)(uint)((float)param_4 - fVar3 * *(float *)(unaff_x22 + 0x14));
  }
  uVar4 = param_2 >> 0x20;
  uVar2 = FUN_073def24(param_2,uVar4,param_4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_085e9668(uVar2,uVar4,param_4,&stack0x00000080,0);
  FUN_073df788(&stack0x00000040);
  unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
  *unaff_x19 = in_stack_00000040;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  return 1;
}


