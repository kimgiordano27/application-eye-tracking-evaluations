/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 073c4a4c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetFoveatedRenderingLevel(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar3;
  long unaff_x23;
  undefined8 *puVar4;
  undefined8 *unaff_x24;
  
  puVar4 = *(undefined8 **)(unaff_x23 + 0x850);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x668);
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e84850);
    FUN_03c8f898(PTR_DAT_08eb23f0);
    FUN_03c8f898(PTR_DAT_08eb5660);
    FUN_03c8f898(PTR_DAT_08eb5668);
    *(undefined1 *)(unaff_x20 + 0x635) = 1;
  }
  FUN_04ec1a5c(param_2,*unaff_x24);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  uVar1 = thunk_FUN_03cf5138(uVar2,*unaff_x21);
  *(undefined8 *)(param_2 + 0x138) = uVar1;
  uVar1 = thunk_FUN_03cf5138(uVar2,*unaff_x21);
  thunk_FUN_03d233cc(param_2 + 0x138,uVar1);
  uVar1 = thunk_FUN_03cf5138(*(undefined8 *)(param_2 + 0x120),*puVar4);
  FUN_04ec13d8(param_2,uVar1,*puVar3);
  return;
}


