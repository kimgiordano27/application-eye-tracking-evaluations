/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05bc5194
PROGRAM: waitwhat-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


bool OVRPlugin__get_useDynamicFixedFoveatedRendering(long *param_1,undefined4 param_2)

{
  char in_NG;
  bool bVar1;
  bool in_ZR;
  bool bVar2;
  char in_OV;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 unaff_s8;
  
  if (in_ZR || in_NG != in_OV) {
    param_2 = unaff_s8;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar4 = (float)FUN_05bcb308(param_2);
  fVar5 = (float)FUN_05bcb308(param_2,&stack0x00000004);
  if ((0.0 <= fVar4) || ((fVar5 <= 0.0 && ((0.0 <= fVar5 || (fVar4 <= fVar5)))))) {
    if (fVar4 <= 0.0) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (fVar4 < fVar5) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar5)) {
          bVar1 = fVar5 < 0.0;
          bVar2 = fVar5 == 0.0;
          bVar3 = false;
        }
      }
      bVar1 = !bVar2 && bVar1 == bVar3;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


