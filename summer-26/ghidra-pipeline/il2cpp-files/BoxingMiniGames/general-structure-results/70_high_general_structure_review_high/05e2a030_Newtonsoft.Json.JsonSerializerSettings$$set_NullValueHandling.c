/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 05e2a030
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(void)

{
  char cVar1;
  int unaff_w23;
  ushort *unaff_x24;
  char *unaff_x25;
  long unaff_x26;
  
  *(undefined1 *)(unaff_x26 + 0xd2e) = 1;
  cVar1 = *unaff_x25;
  if (((cVar1 < '\0') && (0 < unaff_w23)) && ((*unaff_x24 | 0x20) == 0x78)) {
    if (*(int *)(*(long *)PTR_DAT_07a115a8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e13910(cVar1);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_07a115a8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
                    /* try { // try from 05e2a0e0 to 05f2a0f3 has its CatchHandler @ 05e2a298 */
                    /* try { // try from 05e2a0f4 to 05f2a0fb has its CatchHandler @ 05e2a294 */
  NAudio_CoreAudioApi_WasapiCapture__GetAudioClientStreamFlags((int)cVar1);
  return;
}


