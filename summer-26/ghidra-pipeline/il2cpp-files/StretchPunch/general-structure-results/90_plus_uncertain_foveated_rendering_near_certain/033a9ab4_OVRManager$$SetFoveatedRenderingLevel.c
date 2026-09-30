/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 033a9ab4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__SetFoveatedRenderingLevel(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  
  if (param_2 != 0) {
    if (DAT_044a53b6 == '\0') {
      FUN_01d7d918(StringLiteral_3003);
      DAT_044a53b6 = '\x01';
    }
    uVar2 = FUN_03277aec(param_1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if (DAT_044a53b6 == '\0') {
      FUN_01d7d918(StringLiteral_3003);
      DAT_044a53b6 = '\x01';
    }
    uVar3 = FUN_03277aec(param_2,0);
    uVar2 = FUN_033474d0(uVar2,uVar1,uVar3,*(undefined4 *)(param_2 + 0x10),param_3,0);
    return uVar2;
  }
  *unaff_x19 = 0;
  return 0;
}


