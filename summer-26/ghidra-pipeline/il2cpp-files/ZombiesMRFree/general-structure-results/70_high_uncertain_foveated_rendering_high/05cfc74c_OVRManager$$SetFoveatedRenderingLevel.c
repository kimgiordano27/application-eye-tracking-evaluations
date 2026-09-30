/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 05cfc74c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetFoveatedRenderingLevel(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_x9;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  
  uVar3 = *param_1;
  uVar1 = thunk_FUN_0301080c(**(undefined8 **)(in_x9 + 0x2e0));
  FUN_057f1be4(uVar1,uVar3,*(undefined8 *)PTR_DAT_06fb8288,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03048534(puVar2,uVar1);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x38),uVar1);
  thunk_FUN_068f530c();
  return;
}


