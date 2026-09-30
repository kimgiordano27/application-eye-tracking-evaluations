/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 06ac12bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  
  if (param_1 != 0) {
    if (DAT_086ef258 == (code *)0x0) {
      DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
    }
    uVar1 = (*DAT_086ef258)(param_1);
    *(undefined4 *)(unaff_x19 + 0x4c) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


