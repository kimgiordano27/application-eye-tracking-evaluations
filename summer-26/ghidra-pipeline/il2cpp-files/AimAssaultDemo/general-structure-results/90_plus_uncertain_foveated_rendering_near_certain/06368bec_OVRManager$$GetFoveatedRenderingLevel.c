/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 06368bec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x23;
  
  FUN_044a4918(param_2,param_3,*param_1);
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x21;
  thunk_FUN_037aeb94();
  uVar3 = FUN_03f6a6a8();
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar5);
    lVar5 = *unaff_x23;
  }
  puVar1 = PTR_DAT_07d901a8;
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar5);
      lVar5 = *unaff_x23;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d93278);
    FUN_044a4918(lVar6,uVar7,*(undefined8 *)PTR_DAT_07db56c8,0);
    plVar4 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    thunk_FUN_037aeb94(plVar4,lVar6);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_0825b38a == '\0') {
    FUN_0373b518(PTR_DAT_07d901a8);
    DAT_0825b38a = '\x01';
  }
  puVar2 = PTR_DAT_07db56a8;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar5 = *(long *)puVar1;
  }
  FUN_03f63ec4(uVar3,lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),*(undefined8 *)puVar2);
  FUN_060c2498();
  return;
}


