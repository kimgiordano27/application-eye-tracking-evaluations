/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 076de49c
PROGRAM: m3ar-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(void)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s11;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  pfVar3 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar13 = *pfVar3;
  fVar12 = pfVar3[1];
  fVar11 = pfVar3[2];
  fVar10 = unaff_x20[1];
  fVar8 = unaff_x20[2];
  fVar9 = *unaff_x20;
  fVar14 = fVar11 * unaff_x20[5] + fVar13 * unaff_x20[3] + fVar12 * unaff_x20[4];
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar4 = ABS(fVar14);
  if (ABS(fVar14) <= 0.0) {
    fVar4 = 0.0;
  }
  fVar7 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
  fVar5 = fVar4 * DAT_01a2ee44;
  if (fVar4 * DAT_01a2ee44 <= fVar7) {
    fVar5 = fVar7;
  }
  if (fVar5 <= ABS(0.0 - fVar14)) {
    fVar9 = fVar13 * fVar9 + fVar12 * fVar10;
    fVar14 = ((fStack0000000000000008 * fVar11 +
              unaff_s11 * fVar13 + in_stack_00000000._4_4_ * fVar12) - (fVar11 * fVar8 + fVar9)) /
             fVar14;
    bVar1 = false;
    bVar2 = true;
    if (0.0 < fVar14) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar14) && !NAN(fStack000000000000000c)) {
        bVar1 = fVar14 == fStack000000000000000c;
        bVar2 = fStack000000000000000c <= fVar14;
      }
    }
    if (!bVar2 || bVar1) {
      uVar6 = FUN_0853dbe0();
      *unaff_x19 = uVar6;
      unaff_x19[1] = fStack000000000000000c;
      unaff_x19[2] = fVar9;
      return 1;
    }
  }
  return 0;
}


