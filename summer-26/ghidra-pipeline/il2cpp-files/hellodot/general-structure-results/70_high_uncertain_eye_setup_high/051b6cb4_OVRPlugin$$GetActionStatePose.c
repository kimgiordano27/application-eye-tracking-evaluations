/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 051b6cb4
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin__GetActionStatePose
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
          undefined1 param_5 [16],float param_6,float param_7,float param_8,undefined8 param_9,
          float *param_10)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 extraout_d0;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s12;
  float fVar17;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float in_stack_00000120;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float in_stack_00000138;
  
  fVar16 = in_stack_00000138;
  fVar17 = fStack0000000000000130;
  fVar13 = (param_4 + in_stack_00000120 + fStack0000000000000130) / 3.0;
  fVar14 = (unaff_s12 + param_7 + fStack0000000000000134) / 3.0;
  fVar15 = (param_6 + param_8 + in_stack_00000138) / 3.0;
  fStack0000000000000000 = fVar13;
  fStack0000000000000004 = fVar14;
  fStack0000000000000008 = fVar15;
  fStack0000000000000018 = param_6;
  uStack0000000000000080 = param_1;
  uStack0000000000000090 = param_2;
  uStack00000000000000a0 = param_3;
  uVar3 = FUN_051b7d94(param_9,(long)&stack0x000000f8 + 4);
  fStack000000000000001c = fVar16;
  fStack0000000000000008 = fVar16;
  fStack0000000000000000 = fVar17;
  uVar5 = uStack0000000000000090;
  uVar6 = uStack00000000000000a0;
  uVar3 = FUN_051b7d94(uStack0000000000000080,uStack0000000000000090,uStack00000000000000a0,fVar13,
                       fVar14,fVar15,uVar3,&stack0x000000f8);
  if (DAT_06a6730d == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6730d = '\x01';
  }
  puVar1 = PTR_DAT_065c8d28;
  fVar16 = fStack0000000000000018 - fVar15;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    bVar2 = DAT_06a6730d == '\0';
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6730d = '\x01';
  }
  fVar17 = fVar17 - fVar13;
  fVar15 = fStack000000000000001c - fVar15;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar11 = (float)extraout_d0 - (float)uStack0000000000000080;
  fVar12 = (float)uVar3 - (float)uStack0000000000000080;
  fVar9 = (float)param_2 - (float)uStack0000000000000090;
  fVar10 = (float)uVar5 - (float)uStack0000000000000090;
  fVar7 = (float)param_3 - (float)uStack00000000000000a0;
  fVar8 = (float)uVar6 - (float)uStack00000000000000a0;
  fVar17 = SQRT(fVar15 * fVar15 +
                fVar17 * fVar17 +
                (fStack0000000000000134 - fVar14) * (fStack0000000000000134 - fVar14));
  fVar17 = fVar17 / (SQRT(fVar16 * fVar16 +
                          (param_4 - fVar13) * (param_4 - fVar13) +
                          (unaff_s12 - fVar14) * (unaff_s12 - fVar14)) + fVar17);
  if (fVar8 * fVar8 + fVar12 * fVar12 + fVar10 * fVar10 <=
      fVar7 * fVar7 + fVar11 * fVar11 + fVar9 * fVar9) {
    fVar17 = fVar17 + (1.0 - fVar17) * fStack00000000000000f8;
    in_stack_00000078 = in_stack_00000038;
  }
  else {
    fVar17 = fVar17 * fStack00000000000000fc;
    uVar3 = extraout_d0;
  }
  *param_10 = fVar17;
  auVar4._8_8_ = in_stack_00000078;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


