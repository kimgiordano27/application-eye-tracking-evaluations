/*
FUNCTION_NAME: OVRPlugin$$GetActionStateBoolean
ENTRY_POINT: 073de254
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateBoolean
               (float param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  ulong uVar6;
  
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar13 = *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    uVar3 = param_2;
    uVar8 = param_3;
    uVar2 = FUN_073de000();
    fVar1 = (float)FUN_085d2810(uVar13,uVar2,uVar3,uVar8,0);
    fVar10 = (float)uVar8;
    fVar4 = (float)uVar2;
    fVar12 = (float)param_2;
    fVar7 = (float)uVar3;
    fVar11 = (float)param_3;
    uVar9 = (ulong)(uint)(fVar11 * fVar7);
    fVar5 = (param_4 * fVar10 - param_1 * fVar1) - fVar12 * fVar4;
    uVar6 = (ulong)(uint)fVar5;
    uVar3 = FUN_073dde2c();
    FUN_085d2bd4((fVar12 * fVar7 + param_4 * fVar1 + param_1 * fVar10) - fVar11 * fVar4,
                 (fVar11 * fVar1 + param_4 * fVar4 + fVar12 * fVar10) - param_1 * fVar7,
                 (param_1 * fVar4 + param_4 * fVar7 + fVar11 * fVar10) - fVar12 * fVar1,
                 fVar5 - fVar11 * fVar7,uVar3,uVar6,uVar9,0);
    if (unaff_x19 != 0) {
      FUN_085ebf80();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


