/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 0531f1e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin__CreatePassthroughColorLut
          (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16],
          float param_5,undefined8 param_6,long param_7)

{
  float fVar1;
  undefined4 extraout_s0;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar6;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  
  fVar8 = *(float *)(param_1 + 0x24);
  fVar1 = param_2._0_4_ - param_3._0_4_;
  fVar6 = param_2._4_4_ - param_3._4_4_;
  fVar7 = *(float *)(param_1 + 0x18) - fVar8;
  if (DAT_011afbb8 <= fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6) {
    if (param_7 != 0) {
      fVar1 = DAT_011afbb8;
      fVar2 = (float)FUN_060fdda4(param_7,0);
      fVar6 = fVar1;
      fVar9 = fVar8;
      uVar3 = FUN_0531e944(param_6);
      fVar7 = fVar6;
      fVar10 = fVar9;
      fVar4 = (float)FUN_0531eb18(param_6);
      fVar7 = (float)FUN_060df8a0(uVar3,fVar6,fVar9,fVar4,fVar7,fVar10,0);
      return ZEXT416((uint)((fVar1 * fVar9 + param_5 * fVar7 + fVar2 * fVar4) - fVar8 * fVar6));
    }
  }
  else if (param_7 != 0) {
    FUN_060fdda4(param_7,0);
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_8_ = extraout_var_00;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


