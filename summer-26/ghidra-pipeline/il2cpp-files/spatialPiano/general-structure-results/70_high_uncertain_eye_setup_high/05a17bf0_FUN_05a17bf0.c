/*
FUNCTION_NAME: FUN_05a17bf0
ENTRY_POINT: 05a17bf0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05a17cc8) */

void FUN_05a17bf0(long param_1,int *param_2,int param_3,undefined8 *param_4,int param_5,
                 undefined1 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  
  if ((DAT_06bc205f & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc205f = 1;
  }
  iVar10 = *(int *)(param_4 + 2);
                    /* try { // try from 05a17c40 to 05b17c4b has its CatchHandler @ 05a17c90 */
  pcVar8 = (char *)*param_4;
  bVar1 = param_5 < iVar10;
                    /* try { // try from 05a17c4c to 05b17c53 has its CatchHandler @ 05a17c8c */
  bVar4 = iVar10 < -3;
  iVar9 = iVar10;
                    /* try { // try from 05a17c54 to 05b17ca7 has its CatchHandler @ 05a17ba8 */
  if (bVar1 || bVar4) {
    iVar9 = 1;
  }
  if (*(char *)((long)param_4 + 0x14) != '\0') {
    iVar3 = *param_2;
    if (param_3 <= iVar3) {
      return;
    }
    *param_2 = iVar3 + 1;
    *(undefined1 *)(iVar3 + param_1) = 0x2d;
  }
  if (iVar9 < 1) {
    iVar9 = *param_2;
    if (param_3 <= iVar9) {
      return;
    }
    *param_2 = iVar9 + 1;
    *(undefined1 *)(iVar9 + param_1) = 0x30;
    if (-1 < iVar10) goto LAB_05a17cec;
  }
  else {
    iVar9 = iVar9 + 1;
    do {
      iVar10 = *param_2;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05a17c4c with catch @ 05a17c8c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05a17c40 with catch @ 05a17c90
                        */
      if (param_3 <= iVar10) {
        return;
      }
      iVar9 = iVar9 + -1;
      *param_2 = iVar10 + 1;
      cVar2 = *pcVar8;
                    /* try { // try from 05a17ca8 to 05b17cbf has its CatchHandler @ 05a17d0c */
      cVar5 = '0';
      if (cVar2 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar5 = cVar2;
      }
      *(char *)(iVar10 + param_1) = cVar5;
    } while (1 < iVar9);
                    /* try { // try from 05a17cc0 to 05b17cfb has its CatchHandler @ 05a17ba8 */
    iVar10 = 0;
LAB_05a17cec:
    if (*pcVar8 == '\0') goto LAB_05a17cf4;
  }
  iVar9 = *param_2;
  if (param_3 <= iVar9) {
    return;
  }
  *param_2 = iVar9 + 1;
  *(undefined1 *)(iVar9 + param_1) = 0x2e;
  if (iVar10 < 0) {
    do {
      iVar9 = *param_2;
      if (param_3 <= iVar9) {
        return;
      }
      bVar7 = iVar10 != -1;
      iVar10 = iVar10 + 1;
      *param_2 = iVar9 + 1;
      *(undefined1 *)(iVar9 + param_1) = 0x30;
                    /* try { // try from 05a17d98 to 05b17da3 has its CatchHandler @ 05a17e64 */
    } while (bVar7);
  }
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    iVar9 = *param_2;
    if (param_3 <= iVar9) {
      return;
    }
                    /* try { // try from 05a17db0 to 05b17dbb has its CatchHandler @ 05a17e60 */
    *param_2 = iVar9 + 1;
    *(char *)(iVar9 + param_1) = *pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar8;
  }
LAB_05a17cf4:
  puVar6 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  if (bVar1 || bVar4) {
    iVar9 = *param_2;
                    /* try { // try from 05a17cfc to 05b17d0b has its CatchHandler @ 05a17d0c */
    if (iVar9 < param_3) {
                    /* catch() { ... } // from try @ 05a17ca8 with catch @ 05a17d0c
                       catch() { ... } // from try @ 05a17cfc with catch @ 05a17d0c */
                    /* try { // try from 05a17d10 to 05b17d13 has its CatchHandler @ 05a17d1c */
      *param_2 = iVar9 + 1;
                    /* try { // try from 05a17d14 to 05b17d1f has its CatchHandler @ 05a17ba8 */
      *(undefined1 *)(iVar9 + param_1) = param_6;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05a17d10 with catch @ 05a17d1c
                        */
      iVar9 = *(int *)(param_4 + 2);
                    /* try { // try from 05a17d20 to 05b17d53 has its CatchHandler @ 05a17d20
                       catch() { ... } // from try @ 05a17d20 with catch @ 05a17d20
                       catch() { ... } // from try @ 05a17e48 with catch @ 05a17d20
                       catch() { ... } // from try @ 05a17e98 with catch @ 05a17d20
                       catch() { ... } // from try @ 05a17f04 with catch @ 05a17d20 */
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05a171f0(param_1,param_2,param_3,(long)(iVar9 + -1),0x20002);
      return;
    }
  }
                    /* try { // try from 05a17dd4 to 05b17dd7 has its CatchHandler @ 05a17e50 */
  return;
}


