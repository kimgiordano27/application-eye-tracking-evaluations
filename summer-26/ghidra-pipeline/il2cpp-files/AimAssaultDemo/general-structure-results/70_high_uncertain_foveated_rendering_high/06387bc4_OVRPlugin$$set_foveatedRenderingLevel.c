/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 06387bc4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_foveatedRenderingLevel(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x589) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db5fc0);
    *(undefined1 *)(unaff_x20 + 0x589) = 1;
  }
  if ((*(int *)(param_1 + 0x10) == -2) &&
     (iVar1 = *(int *)(param_1 + 0x20), iVar2 = FUN_0628930c(0), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar4 = param_1;
  }
  else {
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5fc0);
    FUN_062855bc(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = FUN_0628930c(0);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_037aeb94();
  }
  return lVar4;
}


