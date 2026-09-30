/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 05bd0ad4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin__EnumerateSpaceSupportedComponents
          (long param_1,float param_2,float param_3,float param_4,float param_5,undefined8 param_6,
          long param_7)

{
  undefined4 extraout_s0;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar5 [16];
  
  fVar6 = *(float *)(param_1 + 0x45c);
  if (fVar6 <= param_3 + param_2) {
    if (param_7 != 0) {
      fVar1 = (float)FUN_069e5200(param_7,0);
      fVar7 = fVar6;
      fVar8 = param_4;
      uVar2 = FUN_05bd0210(param_6);
      fVar4 = fVar7;
      fVar9 = fVar8;
      fVar3 = (float)FUN_05bd03e4(param_6);
      fVar4 = (float)FUN_069c54a4(uVar2,fVar7,fVar8,fVar3,fVar4,fVar9,0);
      return ZEXT416((uint)((fVar6 * fVar8 + param_5 * fVar4 + fVar1 * fVar3) - param_4 * fVar7));
    }
  }
  else if (param_7 != 0) {
    FUN_069e5200(param_7,0);
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_8_ = extraout_var_00;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


