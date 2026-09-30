/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05ff2bd0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering
               (float *param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 uVar3;
  float unaff_s8;
  
  if (param_2 <= *param_1 * param_3) {
    param_2 = *param_1 * param_3;
  }
  if (ABS(param_4 - unaff_s8) < param_2) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06e547e8(*(long *)(unaff_x19 + 0x30),1,0);
    lVar1 = *(long *)(unaff_x19 + 0x30);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x7c) = 0x3f800000;
      fVar2 = *(float *)(lVar1 + 0x74);
      if (unaff_s8 <= *(float *)(lVar1 + 0x74)) {
        fVar2 = unaff_s8;
      }
      *(float *)(lVar1 + 0x74) = fVar2;
      lVar1 = *(long *)(unaff_x19 + 0x60);
      if (lVar1 != 0) {
        uVar3 = (**(code **)(lVar1 + 0x18))
                          (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        *(undefined4 *)(unaff_x19 + 0x78) = uVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


