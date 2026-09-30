/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 05125010
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x23;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06774a38);
  FUN_02d6084c(PTR_DAT_06780e98);
  FUN_02d6084c(PTR_DAT_06780ea0);
  FUN_02d6084c(PTR_DAT_06780e78);
  FUN_02d6084c(PTR_DAT_067761c8);
  *(undefined1 *)(unaff_x19 + 0xc01) = 1;
  puVar1 = PTR_DAT_067761c8;
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x23;
  }
  uVar7 = *(undefined8 *)puVar1;
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *unaff_x23;
    }
    uVar9 = **(undefined8 **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780e90);
    FUN_04d62ba4(uVar4,uVar9,*(undefined8 *)PTR_DAT_06780e98,0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *puVar5 = uVar4;
    thunk_FUN_02dd37b4(puVar5,uVar4);
  }
  uVar4 = FUN_033ad7e8();
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar3);
    lVar3 = *unaff_x23;
  }
  puVar1 = PTR_DAT_06774a38;
  lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar3);
      lVar3 = *unaff_x23;
    }
    uVar9 = **(undefined8 **)(lVar3 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06763508);
    FUN_04d62ba4(lVar8,uVar9,*(undefined8 *)PTR_DAT_06780ea0,0);
    plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *plVar6 = lVar8;
    thunk_FUN_02dd37b4(plVar6,lVar8);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b78ba4 == '\0') {
    FUN_02d6084c(PTR_DAT_06774a38);
    DAT_06b78ba4 = '\x01';
  }
  puVar2 = PTR_DAT_06780e80;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = FUN_033aa460(uVar4,lVar8,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),
                       *(undefined8 *)puVar2);
  FUN_04e8eb68(uVar7,uVar4,0);
  return;
}


