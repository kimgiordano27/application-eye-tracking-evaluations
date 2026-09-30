/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 051e0004
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnAppSpaceChange
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               long param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_6 + 0x30);
  *(undefined1 *)(param_6 + 0x20) = 0;
  fVar2 = DAT_013ddd6c;
                    /* try { // try from 051e000c to 052e001b has its CatchHandler @ 051e001c */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 051dffd4 with catch @ 051e001c
                       catch() { ... } // from try @ 051e000c with catch @ 051e001c */
                    /* try { // try from 051e0020 to 052e0023 has its CatchHandler @ 051e002c */
                    /* try { // try from 051e0024 to 052e002f has its CatchHandler @ 051dfe98 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051dffb4 with catch @ 051e002c
                       catch(type#2 @ 00000000) { ... } // from try @ 051e0020 with catch @ 051e002c
                        */
    fVar3 = param_4 / ((param_4 / (*(float *)(param_6 + 0x1c) * DAT_013ddd6c)) / (param_4 / param_5)
                      + param_4);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      fVar4 = *(float *)(lVar1 + 0x18);
    }
    else {
      *(undefined1 *)(lVar1 + 0x10) = 0;
      fVar4 = param_3;
    }
    fVar3 = param_3 * fVar3 + (1.0 - fVar3) * fVar4;
    *(float *)(lVar1 + 0x14) = fVar3;
    *(float *)(lVar1 + 0x18) = fVar3;
    lVar1 = *(long *)(param_6 + 0x28);
    if (lVar1 != 0) {
      fVar2 = 1.0 / ((1.0 / ((*(float *)(param_6 + 0x14) + ABS(fVar3) * *(float *)(param_6 + 0x18))
                            * fVar2)) / (param_4 / param_5) + 1.0);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        fVar3 = *(float *)(lVar1 + 0x18);
      }
      else {
                    /* try { // try from 051e00a4 to 052e0153 has its CatchHandler @ 051e00a4
                       catch() { ... } // from try @ 051e00a4 with catch @ 051e00a4
                       catch() { ... } // from try @ 051e0184 with catch @ 051e00a4
                       catch() { ... } // from try @ 051e01b4 with catch @ 051e00a4
                       catch() { ... } // from try @ 051e0250 with catch @ 051e00a4 */
        *(undefined1 *)(lVar1 + 0x10) = 0;
        fVar3 = param_1;
      }
      fVar2 = fVar2 * param_1 + (1.0 - fVar2) * fVar3;
      *(float *)(lVar1 + 0x14) = fVar2;
      *(float *)(lVar1 + 0x18) = fVar2;
      *(float *)(param_6 + 0x10) = fVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


