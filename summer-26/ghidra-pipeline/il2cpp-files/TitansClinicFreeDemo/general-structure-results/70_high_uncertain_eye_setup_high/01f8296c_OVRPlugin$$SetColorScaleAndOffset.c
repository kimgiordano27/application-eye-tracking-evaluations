/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 01f8296c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetColorScaleAndOffset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027c13a8);
  thunk_FUN_01279b34(PTR_DAT_027bca98);
  thunk_FUN_01279b34(PTR_DAT_027c1280);
  thunk_FUN_01279b34(PTR_DAT_027c1290);
  thunk_FUN_01279b34(PTR_DAT_027c1288);
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  *(undefined1 *)(unaff_x21 + 0xe42) = 1;
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = 0x2e;
  lVar9 = *unaff_x19;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_0122e7a4(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0122e748();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar1 = PTR_DAT_027bca98;
  lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0122e748();
  }
  puVar5 = PTR_DAT_027c13a8;
  puVar4 = PTR_DAT_027c1290;
  puVar3 = PTR_DAT_027c1288;
  puVar2 = PTR_DAT_027c1280;
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_01286abc();
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01220628();
    lVar8 = *(long *)puVar1;
  }
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_01286abc();
  uVar6 = thunk_FUN_0124bba8(*(undefined8 *)puVar5);
  FUN_01ee4dfc(uVar6,0,*(undefined8 *)puVar2,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar7 = uVar6;
  thunk_FUN_01286abc(puVar7,uVar6);
  uVar6 = thunk_FUN_0124bba8(*(undefined8 *)puVar5);
  FUN_01ee4dfc(uVar6,0,*(undefined8 *)puVar3,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar7 = uVar6;
  thunk_FUN_01286abc(puVar7,uVar6);
  uVar6 = thunk_FUN_0124bba8(*(undefined8 *)puVar5);
  FUN_01ee4dfc(uVar6,0,*(undefined8 *)puVar4,0);
  puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
  *puVar7 = uVar6;
  thunk_FUN_01286abc(puVar7,uVar6);
  return;
}


