/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 060df0c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyVirtualKeyboard
               (long param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,uint param_7)

{
  long lVar1;
  uint in_w9;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (in_w9 <= param_7) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 060df164 to 061df16b has its CatchHandler @ 060df3c4 */
    FUN_03642c20();
  }
  lVar1 = *(long *)(param_1 + (long)(int)param_7 * 8 + 0x20);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x2c) == '\0') {
      if (param_2 < param_3) {
        *(float *)(lVar1 + 0x14) = param_2;
        *(undefined1 *)(lVar1 + 0x2c) = 1;
        *(undefined1 *)(lVar1 + 0x24) = 1;
      }
    }
    else {
      fVar4 = *(float *)(lVar1 + 0x14);
      if (param_2 <= *(float *)(lVar1 + 0x14)) {
        fVar4 = param_2;
      }
                    /* try { // try from 060df0e8 to 061df10f has its CatchHandler @ 060df3e4 */
      *(float *)(lVar1 + 0x14) = fVar4;
      if ((param_5 < param_2) || (fVar4 + param_4 < param_2)) {
        *(undefined1 *)(lVar1 + 0x2c) = 0;
        *(undefined1 *)(lVar1 + 0x24) = 1;
        *(undefined4 *)(lVar1 + 0x14) = 0x7f7fffff;
      }
    }
    fVar2 = (param_2 - param_3) / (param_5 - param_3);
    fVar4 = 1.0;
    if (fVar2 <= 1.0) {
      fVar4 = fVar2;
    }
    fVar3 = 1.0;
    if (0.0 <= fVar2) {
      fVar3 = 1.0 - fVar4;
    }
    *(float *)(lVar1 + 0x28) = fVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


