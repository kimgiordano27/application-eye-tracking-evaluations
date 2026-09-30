/*
FUNCTION_NAME: OVRManager.<>c$$<.cctor>b__518_0
ENTRY_POINT: 06931dec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_<>c__<_cctor>b__518_0(void)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  undefined8 uVar6;
  float unaff_s9;
  float unaff_s10;
  undefined8 uVar7;
  float unaff_s11;
  float fVar8;
  float fVar9;
  
  fVar5 = SQRT((unaff_s10 - unaff_s8) * (unaff_s10 - unaff_s8) +
               (unaff_s11 - unaff_s9) * (unaff_s11 - unaff_s9));
  *(float *)(unaff_x19 + 0xa0) = fVar5;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar3 = (float)FUN_07d306c8(*(long *)(unaff_x19 + 0x20),0);
    cVar1 = DAT_08974d8c;
    uVar6 = *(undefined8 *)(unaff_x19 + 0xd4);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x88);
    fVar8 = *(float *)(unaff_x19 + 0x90);
    *(float *)(unaff_x19 + 0xa4) = fVar5 * fVar3 * DAT_015c5b5c;
    if (cVar1 == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      DAT_08974d8c = '\x01';
    }
    fVar5 = (float)uVar6 - (float)uVar7;
    fVar3 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
    fVar8 = 0.0 - fVar8;
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar4 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar3 * fVar3);
    if (fVar4 <= DAT_015c5ce0) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      uVar6 = **(undefined8 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar8 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_084868a0 + 0xb8) + 1);
    }
    else {
      fVar8 = fVar8 / fVar4;
      uVar6 = CONCAT44(fVar3 / fVar4,fVar5 / fVar4);
    }
    fVar5 = *(float *)(unaff_x19 + 0xa4);
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar6;
    fVar3 = (float)uVar6 * fVar5;
    *(float *)(unaff_x19 + 0xb0) = fVar8;
    fVar4 = fVar3 + fVar8 * fVar5;
    *(ulong *)(unaff_x19 + 0xb4) = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar5,fVar3);
    *(float *)(unaff_x19 + 0xbc) = fVar8 * fVar5;
    *(float *)(unaff_x19 + 0xc0) = fVar4;
    lVar2 = FUN_07c98f88();
    if (lVar2 != 0) {
      fVar5 = (float)FUN_07cac7a8(lVar2,0);
      fVar8 = *(float *)(unaff_x19 + 0xb8);
      fVar9 = *(float *)(unaff_x19 + 0xc0);
      lVar2 = FUN_07c98f88();
      if (lVar2 != 0) {
        FUN_07cac7a8(lVar2,0);
        fVar4 = fVar4 * fVar5;
        fVar9 = fVar9 * fVar3;
        *(float *)(unaff_x19 + 0xc4) = fVar4;
        *(float *)(unaff_x19 + 200) = fVar8;
        *(float *)(unaff_x19 + 0xcc) = fVar9;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          fVar5 = (float)FUN_07d306c8(*(long *)(unaff_x19 + 0x20),0);
          fVar5 = fVar5 * 100.0;
          if (DAT_08974e25 == '\0') {
            FUN_03a8a718(PTR_DAT_08486c60);
            DAT_08974e25 = '\x01';
          }
          fVar3 = fVar8 * fVar8 + fVar4 * fVar4 + fVar9 * fVar9;
          if (fVar5 * fVar5 < fVar3) {
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            fVar3 = SQRT(fVar3);
            fVar4 = (fVar4 / fVar3) * fVar5;
            fVar8 = (fVar8 / fVar3) * fVar5;
            fVar9 = (fVar9 / fVar3) * fVar5;
          }
          *(float *)(unaff_x19 + 0xc4) = fVar4;
          *(float *)(unaff_x19 + 200) = fVar8;
          *(float *)(unaff_x19 + 0xcc) = fVar9;
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_07d32a2c(fVar4,fVar8,fVar9,*(undefined4 *)(unaff_x19 + 0x7c),
                         *(undefined4 *)(unaff_x19 + 0x80),*(undefined4 *)(unaff_x19 + 0x84),
                         *(long *)(unaff_x19 + 0x20),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


