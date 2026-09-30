/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 0313766c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined4 *unaff_x19;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = FUN_0392a520();
  fVar4 = param_2;
  fVar6 = param_3;
  FUN_039274a0();
  fVar2 = (float)FUN_03914250(0);
  fVar5 = fVar4;
  fVar7 = fVar6;
  fVar8 = param_4;
  fVar3 = (float)FUN_039274a0();
  *unaff_x19 = uVar1;
  unaff_x19[1] = param_2;
  unaff_x19[2] = param_3;
  unaff_x19[3] = (fVar4 * fVar7 + param_4 * fVar3 + fVar2 * fVar8) - fVar6 * fVar5;
  unaff_x19[4] = (fVar6 * fVar3 + param_4 * fVar5 + fVar4 * fVar8) - fVar2 * fVar7;
  unaff_x19[5] = (fVar2 * fVar5 + param_4 * fVar7 + fVar6 * fVar8) - fVar4 * fVar3;
  unaff_x19[6] = ((param_4 * fVar8 - fVar2 * fVar3) - fVar4 * fVar5) - fVar6 * fVar7;
  return;
}


