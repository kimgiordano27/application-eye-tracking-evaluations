/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType
ENTRY_POINT: 06926640
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long unaff_x19;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  *(undefined4 *)(unaff_x19 + 0xb0) = param_2;
  if (param_4 != 0) {
    uVar4 = FUN_07d30058(param_4,0);
    *(undefined4 *)(unaff_x19 + 0x88) = uVar4;
    *(undefined4 *)(unaff_x19 + 0x8c) = param_2;
    *(undefined4 *)(unaff_x19 + 0x90) = param_3;
    lVar3 = FUN_07c98f88();
    if (lVar3 != 0) {
      fVar7 = *(float *)(unaff_x19 + 0x8c);
      fVar8 = *(float *)(unaff_x19 + 0x90);
      fVar5 = (float)FUN_07cadc80(*(undefined4 *)(unaff_x19 + 0x88),lVar3,0);
      *(float *)(unaff_x19 + 0x7c) = fVar5;
      *(float *)(unaff_x19 + 0x80) = fVar7;
      fVar9 = *(float *)(unaff_x19 + 0xb0);
      uVar10 = *(undefined8 *)(unaff_x19 + 0xa8);
      *(float *)(unaff_x19 + 0x84) = fVar8;
      fVar6 = (float)FUN_07ca88b8(0);
      cVar2 = DAT_08974e24;
      fVar8 = (fVar8 - fVar9) / fVar6;
      fVar9 = *(float *)(unaff_x19 + 0x84);
      fVar11 = *(float *)(unaff_x19 + 0x88);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x8c);
      *(float *)(unaff_x19 + 0x74) = fVar8;
      *(float *)(unaff_x19 + 0x78) = fVar9;
      *(float *)(unaff_x19 + 0x70) = fVar8;
      *(ulong *)(unaff_x19 + 0x68) =
           CONCAT44((fVar7 - (float)((ulong)uVar10 >> 0x20)) / fVar6,(fVar5 - (float)uVar10) / fVar6
                   );
      if (cVar2 == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        DAT_08974e24 = '\x01';
      }
      puVar1 = PTR_DAT_08486c60;
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar6 = (float)uVar12;
      fVar5 = (float)((ulong)uVar12 >> 0x20);
      fVar5 = fVar5 * fVar5;
      *(float *)(unaff_x19 + 0x94) = SQRT(fVar11 * fVar11 + fVar6 * fVar6 + fVar5);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar6 = (float)FUN_07d30208(*(long *)(unaff_x19 + 0x20),0);
        cVar2 = DAT_08974e24;
        *(float *)(unaff_x19 + 0x98) = fVar6;
        *(float *)(unaff_x19 + 0x9c) = fVar5;
        *(float *)(unaff_x19 + 0xa0) = fVar9;
        if (cVar2 == '\0') {
          FUN_03a8a718(PTR_DAT_08486c60);
          DAT_08974e24 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        *(float *)(unaff_x19 + 0xa4) = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar5 * fVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


