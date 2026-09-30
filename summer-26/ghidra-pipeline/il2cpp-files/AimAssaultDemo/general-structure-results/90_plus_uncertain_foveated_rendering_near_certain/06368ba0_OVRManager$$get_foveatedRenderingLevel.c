/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 06368ba0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_foveatedRenderingLevel(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *unaff_x19;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x23;
  
  uVar7 = *unaff_x19;
  if (*(long *)(param_1 + 8) == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      param_2 = *unaff_x23;
    }
    uVar9 = **(undefined8 **)(param_2 + 0xb8);
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db56b8);
    FUN_044a4918(uVar3,uVar9,*(undefined8 *)PTR_DAT_07db56c0,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *puVar4 = uVar3;
    thunk_FUN_037aeb94(puVar4,uVar3);
  }
  uVar3 = FUN_03f6a6a8();
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar6);
    lVar6 = *unaff_x23;
  }
  puVar1 = PTR_DAT_07d901a8;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar6);
      lVar6 = *unaff_x23;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d93278);
    FUN_044a4918(lVar8,uVar9,*(undefined8 *)PTR_DAT_07db56c8,0);
    plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *plVar5 = lVar8;
    thunk_FUN_037aeb94(plVar5,lVar8);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_0825b38a == '\0') {
    FUN_0373b518(PTR_DAT_07d901a8);
    DAT_0825b38a = '\x01';
  }
  puVar2 = PTR_DAT_07db56a8;
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar6 = *(long *)puVar1;
  }
  uVar3 = FUN_03f63ec4(uVar3,lVar8,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                       *(undefined8 *)puVar2);
  FUN_060c2498(uVar7,uVar3,0);
  return;
}


