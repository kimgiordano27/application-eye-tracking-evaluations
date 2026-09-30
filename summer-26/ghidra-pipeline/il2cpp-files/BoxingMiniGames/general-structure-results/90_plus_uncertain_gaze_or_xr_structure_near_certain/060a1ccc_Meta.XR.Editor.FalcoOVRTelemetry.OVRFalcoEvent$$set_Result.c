/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$set_Result
ENTRY_POINT: 060a1ccc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__set_Result
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               undefined8 param_5,float *param_6)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  float fStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
  FUN_0609e0dc();
  uStack0000000000000034 = in_stack_00000018;
  fStack000000000000002c = in_stack_00000010;
  fVar2 = (float)FUN_060a2270();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar9 = param_6[5];
    fVar8 = param_6[6];
    fVar11 = param_6[3];
    fVar10 = param_6[4];
    fVar4 = param_3;
    fVar5 = in_stack_00000010;
    fVar3 = (float)FUN_071d05c8(lVar1,0);
    fVar6 = (fVar9 * fVar3 + fVar8 * fVar5 + fVar10 * param_4) - fVar11 * fVar4;
    fVar7 = (fVar11 * fVar5 + fVar8 * fVar4 + fVar9 * param_4) - fVar10 * fVar3;
    FUN_071d068c((fVar10 * fVar4 + fVar8 * fVar3 + fVar11 * param_4) - fVar9 * fVar5,fVar6,fVar7,
                 ((fVar8 * param_4 - fVar11 * fVar3) - fVar10 * fVar5) - fVar9 * fVar4,lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x28);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_071d0360(lVar1,0);
      in_stack_00000010 = in_stack_00000010 + fVar6;
      param_3 = param_3 + fVar7;
      fVar5 = (float)FUN_060a2270();
      param_3 = param_3 - fVar7;
      FUN_071d043c((fVar2 + fVar4) - fVar5,in_stack_00000010 - fVar6,param_3,lVar1,0);
      fVar2 = *param_6;
      fVar5 = param_6[1];
      fVar4 = param_6[2];
      if (DAT_07ed76b6 == '\0') {
        FUN_03642964(PTR_DAT_079f4dc0);
        DAT_07ed76b6 = '\x01';
      }
      lVar1 = *(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
      fVar6 = *(float *)(lVar1 + 0x18);
      fVar7 = *(float *)(lVar1 + 0x1c);
      fVar3 = *(float *)(lVar1 + 0x20);
      if (DAT_07eddc9c == '\0') {
        FUN_03642964(PTR_DAT_079f4df8);
        DAT_07eddc9c = '\x01';
      }
      fVar8 = fVar3 * fVar3 + fVar6 * fVar6 + fVar7 * fVar7;
      if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar8) {
        fVar5 = fVar4 * fVar3 + fVar2 * fVar6 + fVar5 * fVar7;
        param_3 = (fVar6 * fVar5) / fVar8;
        fVar2 = fVar2 - param_3;
        fVar4 = fVar4 - (fVar3 * fVar5) / fVar8;
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fVar5 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x28),0);
        if (*(char *)(unaff_x19 + 0xf1) == '\0') {
          fVar3 = 0.0;
        }
        else {
          fVar3 = *(float *)(unaff_x19 + 0x4c);
        }
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_071d043c(fVar2 + fVar5,fVar3 + unaff_s8 + *(float *)(unaff_x19 + 0x48),fVar4 + param_3
                       ,*(long *)(unaff_x19 + 0x28),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_0609eda8(*(long *)(unaff_x19 + 0x20),&stack0x00000020);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


