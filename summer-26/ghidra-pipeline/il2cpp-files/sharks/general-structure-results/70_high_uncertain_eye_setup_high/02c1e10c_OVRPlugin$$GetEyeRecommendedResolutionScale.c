/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 02c1e10c
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetEyeRecommendedResolutionScale(long param_1)

{
  long *plVar1;
  ulong uVar2;
  uint in_w9;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  
  uVar4 = 0;
  do {
    if (in_w9 <= uVar4) {
LAB_02c1e198:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    lVar3 = *(long *)(unaff_x19 + 0x78);
                    /* try { // try from 02c1e11c to 02d1e14f has its CatchHandler @ 02c1e1b4 */
    if (lVar3 == 0) goto LAB_02c1e18c;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_02c1e198;
    plVar1 = *(long **)(param_1 + (long)(int)uVar4 * 8 + 0x20);
    if (plVar1 == (long *)0x0) {
LAB_02c1e18c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = (**(code **)(*plVar1 + 0x138))
                      (plVar1,*(undefined8 *)(lVar3 + (long)(int)uVar4 * 8 + 0x20),
                       *(undefined8 *)(*plVar1 + 0x140));
                    /* try { // try from 02c1e150 to 02d1e1a3 has its CatchHandler @ 02c1e070 */
    if ((uVar2 & 1) == 0) break;
    param_1 = *(long *)(unaff_x20 + 0x78);
    if (param_1 == 0) goto LAB_02c1e18c;
    in_w9 = *(uint *)(param_1 + 0x18);
    uVar4 = uVar4 + 1;
    unaff_w21 = (int)uVar4 < (int)in_w9;
  } while ((int)uVar4 < (int)in_w9);
  return (unaff_w21 ^ 1) & 1;
}


