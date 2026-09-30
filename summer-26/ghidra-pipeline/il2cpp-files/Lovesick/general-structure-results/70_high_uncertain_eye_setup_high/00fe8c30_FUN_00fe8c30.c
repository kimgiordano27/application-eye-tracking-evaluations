/*
FUNCTION_NAME: FUN_00fe8c30
ENTRY_POINT: 00fe8c30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00fe8c30(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_03775c57 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_139__);
    DAT_03775c57 = 1;
  }
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_139__;
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar1,0);
    fVar5 = *(float *)(param_1 + 0x24);
    fVar6 = ABS(*(float *)(param_1 + 0x20));
    if (fVar5 <= fVar6) {
LAB_00fe8d24:
      if (fVar6 <= fVar5) {
        return;
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_00fe8d68;
      uVar2 = FUN_026f2c34(*(long *)(param_1 + 0x30),0);
      if ((uVar2 & 1) != 0) {
        return;
      }
LAB_00fe8d4c:
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_00fe8d68;
      uVar4 = 1;
      goto LAB_00fe8d58;
    }
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_00fe8d68;
    uVar2 = FUN_026f2c34(*(long *)(param_1 + 0x30),0);
    if ((uVar2 & 1) == 0) {
      fVar5 = *(float *)(param_1 + 0x24);
      fVar6 = ABS(*(float *)(param_1 + 0x20));
      goto LAB_00fe8d24;
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x24);
    fVar6 = ABS(*(float *)(param_1 + 0x20));
    if (fVar6 < fVar5) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_00fe8d68;
      uVar2 = FUN_026f2c34(*(long *)(param_1 + 0x30),0);
      if ((uVar2 & 1) == 0) goto LAB_00fe8d4c;
      fVar5 = *(float *)(param_1 + 0x24);
      fVar6 = ABS(*(float *)(param_1 + 0x20));
    }
    if (fVar6 <= fVar5) {
      return;
    }
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_00fe8d68;
    uVar2 = FUN_026f2c34(*(long *)(param_1 + 0x30),0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
LAB_00fe8d68:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = 0;
LAB_00fe8d58:
  FUN_026f2c70(lVar3,uVar4,0);
  return;
}


