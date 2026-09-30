/*
FUNCTION_NAME: OVRManager.<>c$$<FindMainCamera>b__468_0
ENTRY_POINT: 06931d60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_<>c__<FindMainCamera>b__468_0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar3 = FUN_07c98f88(*(long *)(param_1 + 0x20),0), lVar3 != 0)) {
    fVar6 = *(float *)(param_1 + 0x74);
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    uVar4 = FUN_07cade68(*(undefined4 *)(param_1 + 0x70),lVar3,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
    *(float *)(param_1 + 0x80) = fVar6;
    *(undefined4 *)(param_1 + 0x84) = uVar7;
    if (*(long *)(param_1 + 0x98) != 0) {
      fVar5 = (float)FUN_07c4a77c(*(long *)(param_1 + 0x98),0);
      cVar2 = DAT_0897502b;
      fVar9 = *(float *)(param_1 + 0xd4);
      fVar11 = *(float *)(param_1 + 0xd8);
      *(float *)(param_1 + 0x88) = fVar5;
      *(float *)(param_1 + 0x8c) = fVar6;
      *(undefined4 *)(param_1 + 0x90) = uVar7;
      if (cVar2 == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        DAT_0897502b = '\x01';
      }
      puVar1 = PTR_DAT_08486c60;
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar11 = fVar11 - fVar6;
      fVar9 = fVar9 - fVar5;
      fVar6 = SQRT(fVar9 * fVar9 + fVar11 * fVar11);
      *(float *)(param_1 + 0xa0) = fVar6;
      if (*(long *)(param_1 + 0x20) != 0) {
        fVar5 = (float)FUN_07d306c8(*(long *)(param_1 + 0x20),0);
        cVar2 = DAT_08974d8c;
        uVar8 = *(undefined8 *)(param_1 + 0xd4);
        uVar10 = *(undefined8 *)(param_1 + 0x88);
        fVar11 = *(float *)(param_1 + 0x90);
        *(float *)(param_1 + 0xa4) = fVar6 * fVar5 * DAT_015c5b5c;
        if (cVar2 == '\0') {
          FUN_03a8a718(PTR_DAT_08486c60);
          DAT_08974d8c = '\x01';
        }
        fVar6 = (float)uVar8 - (float)uVar10;
        fVar5 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
        fVar11 = 0.0 - fVar11;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        fVar9 = SQRT(fVar11 * fVar11 + fVar6 * fVar6 + fVar5 * fVar5);
        if (fVar9 <= DAT_015c5ce0) {
          if (DAT_08974d8f == '\0') {
            FUN_03a8a718(PTR_DAT_084868a0);
            DAT_08974d8f = '\x01';
          }
          uVar8 = **(undefined8 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
          fVar11 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_084868a0 + 0xb8) + 1);
        }
        else {
          fVar11 = fVar11 / fVar9;
          uVar8 = CONCAT44(fVar5 / fVar9,fVar6 / fVar9);
        }
        fVar6 = *(float *)(param_1 + 0xa4);
        *(undefined8 *)(param_1 + 0xa8) = uVar8;
        fVar5 = (float)uVar8 * fVar6;
        *(float *)(param_1 + 0xb0) = fVar11;
        fVar9 = fVar5 + fVar11 * fVar6;
        *(ulong *)(param_1 + 0xb4) = CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar6,fVar5);
        *(float *)(param_1 + 0xbc) = fVar11 * fVar6;
        *(float *)(param_1 + 0xc0) = fVar9;
        lVar3 = FUN_07c98f88(param_1,0);
        if (lVar3 != 0) {
          fVar6 = (float)FUN_07cac7a8(lVar3,0);
          fVar11 = *(float *)(param_1 + 0xb8);
          fVar12 = *(float *)(param_1 + 0xc0);
          lVar3 = FUN_07c98f88(param_1,0);
          if (lVar3 != 0) {
            FUN_07cac7a8(lVar3,0);
            fVar9 = fVar9 * fVar6;
            fVar12 = fVar12 * fVar5;
            *(float *)(param_1 + 0xc4) = fVar9;
            *(float *)(param_1 + 200) = fVar11;
            *(float *)(param_1 + 0xcc) = fVar12;
            if (*(long *)(param_1 + 0x20) != 0) {
              fVar6 = (float)FUN_07d306c8(*(long *)(param_1 + 0x20),0);
              fVar6 = fVar6 * 100.0;
              if (DAT_08974e25 == '\0') {
                FUN_03a8a718(PTR_DAT_08486c60);
                DAT_08974e25 = '\x01';
              }
              fVar5 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
              if (fVar6 * fVar6 < fVar5) {
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                fVar5 = SQRT(fVar5);
                fVar9 = (fVar9 / fVar5) * fVar6;
                fVar11 = (fVar11 / fVar5) * fVar6;
                fVar12 = (fVar12 / fVar5) * fVar6;
              }
              *(float *)(param_1 + 0xc4) = fVar9;
              *(float *)(param_1 + 200) = fVar11;
              *(float *)(param_1 + 0xcc) = fVar12;
              if (*(long *)(param_1 + 0x20) != 0) {
                FUN_07d32a2c(fVar9,fVar11,fVar12,*(undefined4 *)(param_1 + 0x7c),
                             *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                             *(long *)(param_1 + 0x20),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


