/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 06928028
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__SetColorScaleAndOffset(undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int in_w8;
  int in_w9;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar5 = fStack0000000000000008;
  do {
    uVar6 = param_2;
    if (0.0 <= fVar5) {
      uVar6 = param_1;
    }
    do {
      if (in_w9 == 0) {
        puVar4 = (undefined8 *)((long)&stack0x00000008 + 4);
      }
      else {
        if (in_w9 != 1) {
          if (in_w9 == 2) {
            return fStack000000000000000c;
          }
          thunk_FUN_03af1434(PTR_DAT_0848daa8);
          uVar1 = thunk_FUN_03ac74bc();
          uVar2 = thunk_FUN_03af1434(PTR_DAT_0848dab0);
          FUN_0674c1e8(uVar1,uVar2,0);
          puVar3 = PTR_DAT_0848dac0;
          goto LAB_069280f0;
        }
        puVar4 = (undefined8 *)&stack0x00000008;
      }
      *(undefined4 *)puVar4 = uVar6;
      in_w9 = in_w9 + 1;
      uVar6 = 0;
    } while (in_w8 != in_w9);
    fVar5 = fStack000000000000000c;
  } while (((in_w8 == 0) || (fVar5 = param_3, in_w8 == 2)) ||
          (fVar5 = fStack0000000000000008, in_w8 == 1));
  thunk_FUN_03af1434(PTR_DAT_0848daa8);
  uVar1 = thunk_FUN_03ac74bc();
  uVar2 = thunk_FUN_03af1434(PTR_DAT_0848dab0);
  FUN_0674c1e8(uVar1,uVar2,0);
  puVar3 = PTR_DAT_0848dab8;
LAB_069280f0:
  uVar2 = thunk_FUN_03af1434(puVar3);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,uVar2);
}


