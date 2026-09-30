/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$SendNonEssential
ENTRY_POINT: 060a1d64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__SendNonEssential
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  long unaff_x19;
  float *unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float unaff_s14;
  float fVar9;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s19;
  float in_s20;
  
  fVar5 = (param_8 + param_7) - unaff_s15 * param_3;
  fVar6 = (in_s17 + in_s16) - in_s19;
  FUN_071d068c((param_6 + param_5) - param_1,fVar5,fVar6,(param_4 - unaff_s14 * param_2) - in_s20);
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_071d0360(lVar1,0);
    fVar7 = unaff_s10 + fVar5;
    fVar8 = unaff_s11 + fVar6;
    fVar3 = (float)FUN_060a2270();
    fVar8 = fVar8 - fVar6;
    FUN_071d043c((unaff_s9 + fVar2) - fVar3,fVar7 - fVar5,fVar8,lVar1,0);
    fVar5 = *unaff_x20;
    fVar2 = unaff_x20[1];
    fVar6 = unaff_x20[2];
    if (DAT_07ed76b6 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b6 = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
    fVar7 = *(float *)(lVar1 + 0x18);
    fVar9 = *(float *)(lVar1 + 0x1c);
    fVar3 = *(float *)(lVar1 + 0x20);
    if (DAT_07eddc9c == '\0') {
      FUN_03642964(PTR_DAT_079f4df8);
      DAT_07eddc9c = '\x01';
    }
    fVar4 = fVar3 * fVar3 + fVar7 * fVar7 + fVar9 * fVar9;
    if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar4) {
      fVar2 = fVar6 * fVar3 + fVar5 * fVar7 + fVar2 * fVar9;
      fVar8 = (fVar7 * fVar2) / fVar4;
      fVar5 = fVar5 - fVar8;
      fVar6 = fVar6 - (fVar3 * fVar2) / fVar4;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar2 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x28),0);
      if (*(char *)(unaff_x19 + 0xf1) == '\0') {
        fVar3 = 0.0;
      }
      else {
        fVar3 = *(float *)(unaff_x19 + 0x4c);
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_071d043c(fVar5 + fVar2,fVar3 + unaff_s8 + *(float *)(unaff_x19 + 0x48),fVar6 + fVar8,
                     *(long *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_0609eda8(*(long *)(unaff_x19 + 0x20),&stack0x00000020);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


