/*
FUNCTION_NAME: OVRPlugin$$get_shouldRecenter
ENTRY_POINT: 076c51b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__get_shouldRecenter(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int in_w8;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  undefined8 unaff_d10;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fStack0000000000000004;
  long in_stack_00000028;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  FUN_076f318c(unaff_w19,0);
  if (unaff_x20 != 0) {
    puVar2 = (undefined8 *)FUN_076f4214();
    uVar7 = *puVar2;
    fVar8 = *(float *)(puVar2 + 1);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar1 = FUN_076f318c(unaff_w19 + 1,0);
    if (in_stack_00000028 != 0) {
      fVar3 = (float)uVar7 - (float)unaff_d10;
      fVar6 = (float)((ulong)unaff_d10 >> 0x20);
      fVar4 = (float)((ulong)uVar7 >> 0x20) - fVar6;
      puVar2 = (undefined8 *)FUN_076f4214(in_stack_00000028,uVar1,0);
      fVar5 = (float)*puVar2 - (float)unaff_d10;
      fStack0000000000000004 =
           (fVar8 - unaff_s9) * fVar5 - (*(float *)(puVar2 + 1) - unaff_s9) * fVar3;
      uVar1 = FUN_0419f7f0(CONCAT44(fVar4,fVar3),fVar4,fVar8 - unaff_s9,fVar5,
                           (float)((ulong)*puVar2 >> 0x20) - fVar6,0);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


