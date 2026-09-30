/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05ff2b80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFixedFoveatedRendering(float param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(unaff_x20 + 0xba2) == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x20 + 0xba2) = 1;
  }
  fVar4 = ABS(param_1);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) * 8.0;
  fVar2 = fVar4 * DAT_014bab34;
  if (fVar4 * DAT_014bab34 <= fVar5) {
    fVar2 = fVar5;
  }
  if (fVar2 <= ABS(0.0 - param_1)) {
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_06e547e8(*(long *)(param_2 + 0x30),1,0);
      lVar1 = *(long *)(param_2 + 0x30);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x7c) = 0x3f800000;
        fVar4 = *(float *)(lVar1 + 0x74);
        if (param_1 <= *(float *)(lVar1 + 0x74)) {
          fVar4 = param_1;
        }
        *(float *)(lVar1 + 0x74) = fVar4;
        lVar1 = *(long *)(param_2 + 0x60);
        if (lVar1 != 0) {
          uVar3 = (**(code **)(lVar1 + 0x18))
                            (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          *(undefined4 *)(param_2 + 0x78) = uVar3;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return;
}


