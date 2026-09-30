/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 076d2aa4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking(undefined4 *param_1,long param_2,byte param_3)

{
  undefined4 *in_x9;
  undefined4 *in_x10;
  undefined4 *in_x11;
  long unaff_x19;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    uVar2 = *in_x9;
    uVar3 = *in_x10;
    uVar4 = *in_x11;
    UnityEngine_TextCore_LowLevel_FontEngine__TryAddGlyphToTexture_Internal_Injected
              (uVar4,uVar3,uVar2,uVar1,param_2,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_085493a4(uVar4,uVar3,uVar2,uVar1,*(long *)(unaff_x19 + 0x28),0);
      *(byte *)(unaff_x19 + 0x60) = param_3 & 1;
                    /* try { // try from 076d2afc to 077d2b3b has its CatchHandler @ 076d2364 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


