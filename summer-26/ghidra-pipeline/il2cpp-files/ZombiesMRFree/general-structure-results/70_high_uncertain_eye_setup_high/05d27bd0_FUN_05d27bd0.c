/*
FUNCTION_NAME: FUN_05d27bd0
ENTRY_POINT: 05d27bd0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05d27bd0(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_06f6d618;
  if ((DAT_0739891c & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_0739891c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_068f8810(param_5,0,0);
  if ((uVar2 & 1) == 0) {
LAB_05d27c84:
    if ((*(long *)(param_4 + 0x48) == 0) ||
       (lVar3 = FUN_068ce534(*(long *)(param_4 + 0x48),0), lVar3 == 0))
    goto OVRPlugin__ResetBodyTrackingCalibration;
    puVar5 = (undefined8 *)(param_4 + 0x58);
  }
  else {
    if (param_5 == 0) goto OVRPlugin__ResetBodyTrackingCalibration;
    puVar5 = (undefined8 *)(param_5 + 0x28);
    uVar4 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar2 = FUN_068f8810(uVar4,0,0);
    if ((uVar2 & 1) == 0) goto LAB_05d27c84;
    if ((*(long *)(param_4 + 0x48) == 0) ||
       (lVar3 = FUN_068ce534(*(long *)(param_4 + 0x48),0), lVar3 == 0))
    goto OVRPlugin__ResetBodyTrackingCalibration;
  }
  FUN_068cff9c(lVar3,*puVar5,0);
  if (*(char *)(param_4 + 0x60) == '\0') {
    if ((*(long *)(param_4 + 0x48) == 0) ||
       (lVar3 = FUN_068f5d7c(*(long *)(param_4 + 0x48),0), param_5 == 0))
    goto OVRPlugin__ResetBodyTrackingCalibration;
    fVar7 = *(float *)(param_4 + 100);
    fVar8 = *(float *)(param_4 + 0x68);
    fVar9 = *(float *)(param_4 + 0x6c);
    fVar6 = (float)FUN_05d26c44(param_5);
    if (DAT_0738e6c8 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e6c8 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (lVar3 == 0) goto OVRPlugin__ResetBodyTrackingCalibration;
    fVar6 = SQRT(param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2);
    FUN_06904aa4(fVar7 * fVar6,fVar8 * fVar6,fVar9 * fVar6,lVar3,0);
  }
  if (*(long *)(param_4 + 0x48) != 0) {
    FUN_068cd970(*(long *)(param_4 + 0x48),1,0);
    return;
  }
OVRPlugin__ResetBodyTrackingCalibration:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


