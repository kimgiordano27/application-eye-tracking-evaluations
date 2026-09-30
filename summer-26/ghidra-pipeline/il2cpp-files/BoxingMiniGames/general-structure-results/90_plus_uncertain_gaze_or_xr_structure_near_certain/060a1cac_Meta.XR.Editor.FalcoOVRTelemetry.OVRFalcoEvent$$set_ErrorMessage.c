/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$set_ErrorMessage
ENTRY_POINT: 060a1cac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__set_ErrorMessage
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
               float *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_stack_00000000 [16];
  float fStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  fStack000000000000002c = 0.0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (*(long *)(param_5 + 0x20) != 0) {
    FUN_0609e0dc(&stack0x00000000 + 4);
    uStack0000000000000028 = in_stack_00000000._12_4_;
    uStack0000000000000020 = in_stack_00000000._4_8_;
    uStack0000000000000034 = (undefined4)in_stack_00000018;
    uStack0000000000000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
    fStack000000000000002c = fStack0000000000000010;
    uStack0000000000000030 = uStack0000000000000014;
    fVar8 = fStack0000000000000010;
    fVar2 = (float)FUN_060a2270(param_5);
    lVar1 = *(long *)(param_5 + 0x28);
    if (lVar1 != 0) {
      fVar10 = param_6[5];
      fVar9 = param_6[6];
      fVar12 = param_6[3];
      fVar11 = param_6[4];
      fVar4 = param_3;
      fVar5 = fVar8;
      fVar3 = (float)FUN_071d05c8(lVar1,0);
      fVar6 = (fVar10 * fVar3 + fVar9 * fVar5 + fVar11 * param_4) - fVar12 * fVar4;
      fVar7 = (fVar12 * fVar5 + fVar9 * fVar4 + fVar10 * param_4) - fVar11 * fVar3;
      FUN_071d068c((fVar11 * fVar4 + fVar9 * fVar3 + fVar12 * param_4) - fVar10 * fVar5,fVar6,fVar7,
                   ((fVar9 * param_4 - fVar12 * fVar3) - fVar11 * fVar5) - fVar10 * fVar4,lVar1,0);
      lVar1 = *(long *)(param_5 + 0x28);
      if (lVar1 != 0) {
        fVar4 = (float)FUN_071d0360(lVar1,0);
        fVar8 = fVar8 + fVar6;
        param_3 = param_3 + fVar7;
        fVar5 = (float)FUN_060a2270(param_5);
        param_3 = param_3 - fVar7;
        FUN_071d043c((fVar2 + fVar4) - fVar5,fVar8 - fVar6,param_3,lVar1,0);
        fVar8 = *param_6;
        fVar4 = param_6[1];
        fVar2 = param_6[2];
        if (DAT_07ed76b6 == '\0') {
          FUN_03642964(PTR_DAT_079f4dc0);
          DAT_07ed76b6 = '\x01';
        }
        lVar1 = *(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
        fVar3 = *(float *)(lVar1 + 0x18);
        fVar6 = *(float *)(lVar1 + 0x1c);
        fVar5 = *(float *)(lVar1 + 0x20);
        if (DAT_07eddc9c == '\0') {
          FUN_03642964(PTR_DAT_079f4df8);
          DAT_07eddc9c = '\x01';
        }
        fVar7 = fVar5 * fVar5 + fVar3 * fVar3 + fVar6 * fVar6;
        if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar7) {
          fVar4 = fVar2 * fVar5 + fVar8 * fVar3 + fVar4 * fVar6;
          param_3 = (fVar3 * fVar4) / fVar7;
          fVar8 = fVar8 - param_3;
          fVar2 = fVar2 - (fVar5 * fVar4) / fVar7;
        }
        if (*(long *)(param_5 + 0x28) != 0) {
          fVar4 = (float)FUN_071d0360(*(long *)(param_5 + 0x28),0);
          if (*(char *)(param_5 + 0xf1) == '\0') {
            fVar5 = 0.0;
          }
          else {
            fVar5 = *(float *)(param_5 + 0x4c);
          }
          if (*(long *)(param_5 + 0x28) != 0) {
            FUN_071d043c(fVar8 + fVar4,fVar5 + param_1 + *(float *)(param_5 + 0x48),fVar2 + param_3,
                         *(long *)(param_5 + 0x28),0);
            if (*(long *)(param_5 + 0x20) != 0) {
              FUN_0609eda8(*(long *)(param_5 + 0x20),&stack0x00000020);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


