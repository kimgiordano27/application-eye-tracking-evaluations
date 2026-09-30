/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginInputTrackingProvider$$.ctor
ENTRY_POINT: 05597d44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider___ctor(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) goto LAB_05597dc8;
  lVar1 = FUN_05421388(param_1,0);
  uVar2 = FUN_0541fba0(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
LAB_05597d7c:
    lVar1 = FUN_054213b0(param_1,0);
    uVar2 = FUN_0541fba0(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar1 == 0) {
LAB_05597dc8:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar2 = FUN_0541facc(lVar1,0);
      if ((uVar2 & 1) != 0) goto LAB_05597db0;
    }
    uVar3 = 0;
  }
  else {
    if (lVar1 == 0) goto LAB_05597dc8;
    uVar2 = FUN_0541facc(lVar1,0);
    if ((uVar2 & 1) == 0) goto LAB_05597d7c;
LAB_05597db0:
    uVar3 = 1;
  }
  return uVar3;
}


