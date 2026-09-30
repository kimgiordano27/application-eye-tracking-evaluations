/*
FUNCTION_NAME: OVRPlugin$$get_shouldQuit
ENTRY_POINT: 076c5154
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__get_shouldQuit(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 unaff_d11;
  undefined8 uVar10;
  float fVar11;
  float fStack0000000000000004;
  long in_stack_00000028;
  undefined8 uVar8;
  
  fVar5 = *(float *)(param_1 + 8);
  FUN_076f3194(unaff_w19 + 1,0);
  if (unaff_x20 != 0) {
    puVar2 = (undefined8 *)FUN_076f4214();
    fVar9 = (float)((ulong)unaff_d11 >> 0x20);
    fVar7 = (float)unaff_d11 + ((float)*puVar2 - (float)unaff_d11) * 0.5;
    fVar9 = fVar9 + ((float)((ulong)*puVar2 >> 0x20) - fVar9) * 0.5;
    uVar8 = CONCAT44(fVar9,fVar7);
    fVar6 = fVar5 + (*(float *)(puVar2 + 1) - fVar5) * 0.5;
    if (unaff_w19 == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar1 = FUN_076f318c(0,0);
      uVar8 = unaff_d11;
    }
    else {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar1 = FUN_076f318c(unaff_w19,0);
      fVar5 = fVar6;
    }
    if (in_stack_00000028 != 0) {
      puVar2 = (undefined8 *)FUN_076f4214(in_stack_00000028,uVar1,0);
      uVar10 = *puVar2;
      fVar11 = *(float *)(puVar2 + 1);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar1 = FUN_076f318c(unaff_w19 + 1,0);
      if (in_stack_00000028 != 0) {
        fVar3 = (float)uVar10 - (float)uVar8;
        fVar4 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar8 >> 0x20);
        puVar2 = (undefined8 *)FUN_076f4214(in_stack_00000028,uVar1,0);
        fVar7 = (float)*puVar2 - fVar7;
        fStack0000000000000004 = (fVar11 - fVar5) * fVar7 - (*(float *)(puVar2 + 1) - fVar6) * fVar3
        ;
        uVar1 = FUN_0419f7f0(CONCAT44(fVar4,fVar3),fVar4,fVar11 - fVar5,fVar7,
                             (float)((ulong)*puVar2 >> 0x20) - fVar9,0);
        return uVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


