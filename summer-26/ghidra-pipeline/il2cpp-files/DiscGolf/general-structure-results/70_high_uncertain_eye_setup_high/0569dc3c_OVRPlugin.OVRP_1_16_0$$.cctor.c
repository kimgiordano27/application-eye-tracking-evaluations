/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$.cctor
ENTRY_POINT: 0569dc3c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_16_0___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  
  FUN_02d965b8(UnityEngine_UIElements_EventCallback<NavigationSubmitEvent>_TypeInfo);
                    /* try { // try from 0569dc48 to 0579dc53 has its CatchHandler @ 0569dfa8 */
  *(undefined1 *)(unaff_x21 + 0x889) = 1;
  puVar1 = UnityEngine_UIElements_EventCallback<NavigationSubmitEvent>_TypeInfo;
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0569dccc to 0579dcd3 has its CatchHandler @ 0569df78 */
      FUN_02d96860();
    }
    uVar2 = FUN_054a954c();
    lVar6 = *(long *)puVar1;
                    /* try { // try from 0569dc74 to 0579dc77 has its CatchHandler @ 0569df74 */
    lVar4 = *(long *)(lVar6 + 0x38);
    if (lVar4 == 0) {
                    /* try { // try from 0569dc84 to 0579dc8b has its CatchHandler @ 0569df7c */
      FUN_02dcfd74(lVar6);
      lVar4 = *(long *)(lVar6 + 0x38);
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar6 + 0x38);
    if (lVar4 == 0) {
      FUN_02dcfd74(lVar6);
      lVar4 = *(long *)(lVar6 + 0x38);
    }
    uVar3 = FUN_03885e74(lVar5,uVar2,*(undefined8 *)(lVar4 + 0x18));
    uVar3 = uVar3 >> 0x1f & 1;
  }
  return uVar3;
}


