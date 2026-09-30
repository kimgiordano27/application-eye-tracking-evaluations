/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY
ENTRY_POINT: 05ba574c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY
          (float param_1,float param_2,float param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (lVar1 = FUN_069d3a80(*(long *)(param_4 + 0x20),0), lVar1 != 0)) {
    fVar4 = (float)FUN_069e6fbc(lVar1,0);
    if (DAT_07547004 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_07547004 = '\x01';
    }
    if (*(long *)(param_4 + 0x20) != 0) {
      lVar1 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      fVar12 = *(float *)(lVar1 + 0x24);
      fVar9 = *(float *)(lVar1 + 0x28);
      fVar11 = *(float *)(lVar1 + 0x2c);
      fVar5 = (float)FUN_06a577c0(*(long *)(param_4 + 0x20),0);
      if (*(long *)(param_4 + 0x20) != 0) {
        fVar6 = (float)FUN_06a57638(*(long *)(param_4 + 0x20),0);
        if (*(long *)(param_4 + 0x20) != 0) {
          fVar7 = (float)FUN_06a57638(*(long *)(param_4 + 0x20),0);
          if (*(long *)(param_4 + 0x20) != 0) {
            fVar6 = fVar5 * 0.5 - fVar6;
            fVar10 = *(float *)(param_4 + 0x28);
            param_2 = param_2 + fVar9 * fVar6;
            param_3 = param_3 + fVar11 * fVar6;
            fVar5 = (float)FUN_06a57638(*(long *)(param_4 + 0x20),0);
            uVar2 = FUN_05ba7648(fVar4 + fVar12 * fVar6,param_2,param_3,fVar7 + fVar10,
                                 fVar5 + *(float *)(param_4 + 0x28) + param_1,param_4,param_5);
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            if ((*(long *)(param_4 + 0x20) != 0) &&
               (lVar1 = FUN_069d3a80(*(long *)(param_4 + 0x20),0), lVar1 != 0)) {
              uVar8 = FUN_069e6fbc(lVar1,0);
              if (*(long *)(param_4 + 0x20) != 0) {
                fVar4 = (float)FUN_06a57638(*(long *)(param_4 + 0x20),0);
                if (*(long *)(param_4 + 0x20) != 0) {
                  fVar9 = *(float *)(param_4 + 0x28);
                  fVar5 = (float)FUN_06a577c0(*(long *)(param_4 + 0x20),0);
                  uVar3 = FUN_05ba7648(uVar8,param_2,param_3,fVar4 + fVar9,
                                       fVar5 * 0.5 + *(float *)(param_4 + 0x28) + param_1,param_4,
                                       param_5);
                  return uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


