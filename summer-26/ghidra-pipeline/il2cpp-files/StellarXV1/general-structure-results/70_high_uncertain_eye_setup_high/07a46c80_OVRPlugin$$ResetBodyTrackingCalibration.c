/*
FUNCTION_NAME: OVRPlugin$$ResetBodyTrackingCalibration
ENTRY_POINT: 07a46c80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__ResetBodyTrackingCalibration(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int unaff_w19;
  long unaff_x20;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  puVar3 = (undefined8 *)FUN_040b1e00();
  uVar4 = (*(code *)*puVar3)();
  puVar1 = PTR_DAT_092ecf40;
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
  }
  else {
    uVar15 = *(undefined4 *)(unaff_x20 + 0x58);
    fVar16 = *(float *)(unaff_x20 + 0x5c);
    fVar17 = *(float *)(unaff_x20 + 0x60);
    uVar18 = *(undefined4 *)(unaff_x20 + 100);
    lVar5 = *(long *)PTR_DAT_092ecf40;
    if (unaff_w19 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar5 + 0xb8);
      puVar6 = (undefined4 *)(lVar5 + 0x60);
      puVar7 = (undefined4 *)(lVar5 + 100);
      puVar8 = (undefined4 *)(lVar5 + 0x68);
    }
    else {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(lVar5 + 0xb8);
      puVar6 = (undefined4 *)(lVar5 + 0x18);
      puVar7 = (undefined4 *)(lVar5 + 0x1c);
      puVar8 = (undefined4 *)(lVar5 + 0x20);
    }
    fVar9 = (float)FUN_089b9694(uVar15,fVar16,fVar17,uVar18,*puVar6,*puVar7,*puVar8,0);
    fVar13 = fVar16;
    fVar14 = fVar17;
    if (*(int *)(*(long *)PTR_DAT_092b7110 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar10 = (float)FUN_089d9cf0();
    if (DAT_098854e8 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e8 = '\x01';
    }
    puVar1 = PTR_DAT_09285ae0;
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar11 = SQRT((fVar17 * fVar17 + fVar9 * fVar9 + fVar16 * fVar16) *
                  (fVar14 * fVar14 + fVar10 * fVar10 + fVar13 * fVar13));
    if (DAT_01aeb584 <= fVar11) {
      fVar11 = (fVar17 * fVar14 + fVar9 * fVar10 + fVar16 * fVar13) / fVar11;
      fVar16 = 1.0;
      if (fVar11 <= 1.0) {
        fVar16 = fVar11;
      }
      fVar17 = -1.0;
      if (-1.0 <= fVar11) {
        fVar17 = fVar16;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      dVar12 = acos((double)fVar17);
      bVar2 = (float)dVar12 * DAT_01aec2c8 <= 40.0;
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}


