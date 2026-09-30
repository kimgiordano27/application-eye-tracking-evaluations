/*
FUNCTION_NAME: OVRPlugin$$TriggerVibrationAction
ENTRY_POINT: 051b6f9c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b725c) */

float OVRPlugin__TriggerVibrationAction(void)

{
  undefined *puVar1;
  float fVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_d10;
  float fVar11;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  uVar5 = FUN_05eea23c(0);
  if (*(char *)(unaff_x19 + 0x233) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    *(undefined1 *)(unaff_x19 + 0x233) = 1;
  }
  lVar3 = *(long *)(*unaff_x20 + 0xb8);
  fStack0000000000000024 = fStack0000000000000094;
  fVar4 = (float)FUN_05eea23c(uStack0000000000000090,fStack0000000000000094,fStack0000000000000098,
                              uStack000000000000009c,*(undefined4 *)(lVar3 + 0x48),
                              *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  fVar11 = (float)unaff_d10;
  fVar8 = unaff_s9 * fStack0000000000000024;
  fVar9 = (float)uVar5;
  fVar10 = fVar9 * fStack0000000000000024;
  fStack000000000000002c = unaff_s9;
  if (DAT_06a6722e == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    DAT_06a6722e = '\x01';
  }
  puVar1 = PTR_DAT_065c8d28;
  fVar8 = fVar11 * fStack0000000000000098 - fVar8;
  fVar7 = unaff_s9 * fVar4 - fVar9 * fStack0000000000000098;
  fVar10 = fVar10 - fVar11 * fVar4;
  if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar2 = fStack000000000000002c;
  fVar8 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7);
  if (fVar8 <= DAT_013ddfb8) {
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    fVar7 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 4);
  }
  else {
    fVar7 = fVar7 / fVar8;
  }
  fStack0000000000000004 = fVar7;
  fVar8 = (float)FUN_02faf120(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              uVar5,unaff_d10,fVar2,0);
  fStack0000000000000004 = fVar7;
  fVar10 = (float)FUN_02faf120(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_
                               ,fVar4,fStack0000000000000024,fStack0000000000000098,0);
  if (((0.0 <= fVar8) || (fVar7 = 1.0, 0.0 <= fVar10)) &&
     ((fVar8 <= 0.0 || (fVar7 = 0.0, fVar10 <= 0.0)))) {
    if (DAT_06a67854 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      DAT_06a67854 = '\x01';
    }
    fVar10 = fStack000000000000002c * fStack000000000000002c;
    fVar7 = fStack0000000000000024 * fStack0000000000000024;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar10 = SQRT((fVar10 + fVar9 * fVar9 + fVar11 * fVar11) *
                  (fStack0000000000000098 * fStack0000000000000098 + fVar4 * fVar4 + fVar7));
    fVar7 = 0.0;
    if (DAT_013ddc5c <= fVar10) {
      fVar10 = (fStack000000000000002c * fStack0000000000000098 +
               fVar9 * fVar4 + fVar11 * fStack0000000000000024) / fVar10;
      if (fVar10 < -1.0) {
        fVar10 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      dVar6 = acos((double)fVar10);
      fVar7 = (float)dVar6 * DAT_013de5cc;
    }
    fVar7 = ABS(fVar8) / fVar7;
  }
  return fVar7;
}


