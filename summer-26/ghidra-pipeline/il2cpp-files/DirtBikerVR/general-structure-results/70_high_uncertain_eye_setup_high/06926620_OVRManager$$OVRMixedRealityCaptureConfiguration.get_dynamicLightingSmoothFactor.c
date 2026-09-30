/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor
ENTRY_POINT: 06926620
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined4 *)(param_4 + 0x84);
  *(undefined8 *)(param_4 + 0xa8) = *(undefined8 *)(param_4 + 0x7c);
  *(undefined4 *)(param_4 + 0xb0) = uVar7;
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar4 = FUN_07d30058(*(long *)(param_4 + 0x20),0);
    *(undefined4 *)(param_4 + 0x88) = uVar4;
    *(undefined4 *)(param_4 + 0x8c) = uVar7;
    *(undefined4 *)(param_4 + 0x90) = param_3;
    lVar3 = FUN_07c98f88(param_4,0);
    if (lVar3 != 0) {
      fVar8 = *(float *)(param_4 + 0x8c);
      fVar9 = *(float *)(param_4 + 0x90);
      fVar5 = (float)FUN_07cadc80(*(undefined4 *)(param_4 + 0x88),lVar3,0);
      *(float *)(param_4 + 0x7c) = fVar5;
      *(float *)(param_4 + 0x80) = fVar8;
      fVar10 = *(float *)(param_4 + 0xb0);
      uVar11 = *(undefined8 *)(param_4 + 0xa8);
      *(float *)(param_4 + 0x84) = fVar9;
      fVar6 = (float)FUN_07ca88b8(0);
      cVar2 = DAT_08974e24;
      fVar9 = (fVar9 - fVar10) / fVar6;
      fVar10 = *(float *)(param_4 + 0x84);
      fVar12 = *(float *)(param_4 + 0x88);
      uVar13 = *(undefined8 *)(param_4 + 0x8c);
      *(float *)(param_4 + 0x74) = fVar9;
      *(float *)(param_4 + 0x78) = fVar10;
      *(float *)(param_4 + 0x70) = fVar9;
      *(ulong *)(param_4 + 0x68) =
           CONCAT44((fVar8 - (float)((ulong)uVar11 >> 0x20)) / fVar6,(fVar5 - (float)uVar11) / fVar6
                   );
      if (cVar2 == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        DAT_08974e24 = '\x01';
      }
      puVar1 = PTR_DAT_08486c60;
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar6 = (float)uVar13;
      fVar5 = (float)((ulong)uVar13 >> 0x20);
      fVar5 = fVar5 * fVar5;
      *(float *)(param_4 + 0x94) = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar5);
      if (*(long *)(param_4 + 0x20) != 0) {
        fVar6 = (float)FUN_07d30208(*(long *)(param_4 + 0x20),0);
        cVar2 = DAT_08974e24;
        *(float *)(param_4 + 0x98) = fVar6;
        *(float *)(param_4 + 0x9c) = fVar5;
        *(float *)(param_4 + 0xa0) = fVar10;
        if (cVar2 == '\0') {
          FUN_03a8a718(PTR_DAT_08486c60);
          DAT_08974e24 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        *(float *)(param_4 + 0xa4) = SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar5 * fVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


