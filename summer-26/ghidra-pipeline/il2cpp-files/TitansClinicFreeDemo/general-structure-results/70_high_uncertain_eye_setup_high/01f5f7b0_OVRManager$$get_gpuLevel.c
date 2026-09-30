/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 01f5f7b0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_gpuLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027b4b30);
  thunk_FUN_01279b34(PTR_DAT_027b1b40);
  thunk_FUN_01279b34(PTR_DAT_027ba068);
  thunk_FUN_01279b34(PTR_DAT_027c0ad0);
  thunk_FUN_01279b34(PTR_DAT_027c0ac8);
  *(undefined1 *)(unaff_x21 + 0xcaa) = 1;
  puVar1 = PTR_DAT_027b1b40;
  if ((*(byte *)(unaff_x19 + 0x25) & 1) == 0) {
    if ((unaff_w20 >> 6 & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_027ba068 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar7 = FUN_01e74fdc(uVar7,2,0);
    }
    else {
      lVar8 = *(long *)PTR_DAT_027b1b40;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar8 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar8 + 0xb8);
    }
    *(undefined8 *)(unaff_x19 + 0x28) = uVar7;
  }
  puVar2 = PTR_DAT_027b4b30;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar8 = *(long *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar4 = FUN_01e76400((undefined8 *)(unaff_x19 + 0x38),0);
  uVar5 = lVar4 - lVar8;
  puVar6 = (undefined8 *)PTR_DAT_027c0ad0;
  if ((uVar5 < 0x2bca2875f4374000) &&
     (puVar6 = (undefined8 *)PTR_DAT_027c0ac8, lVar8 + 504000000000U < 0xeab17b6001)) {
    if ((unaff_w20 >> 4 & 1) != 0) {
      if ((*(uint *)(unaff_x19 + 0x24) & 0x100) == 0 && (unaff_w20 & 0x40) == 0) {
        if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar3 = FUN_01f5f9c0();
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar8);
          lVar8 = *(long *)puVar1;
        }
        *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar8 + 0xb8);
        goto LAB_01f5f95c;
      }
      in_stack_00000008 = 0;
      FUN_01e766e4(&stack0x00000008,uVar5,1,0);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000008;
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar8 = *(long *)puVar1;
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar8 + 0xb8);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    uVar7 = *puVar6;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
LAB_01f5f95c:
  return uVar3 & 1;
}


