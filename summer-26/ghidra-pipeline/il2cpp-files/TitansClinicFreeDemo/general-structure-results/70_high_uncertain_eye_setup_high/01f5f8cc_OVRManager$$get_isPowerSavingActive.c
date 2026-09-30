/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 01f5f8cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_isPowerSavingActive(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  if (param_1 < (in_x9 & 0xffff0000ffffffff | 0xea00000000)) {
    if ((unaff_w20 >> 4 & 1) != 0) {
      if ((*(uint *)(unaff_x19 + 0x24) & 0x100) == 0 && (unaff_w20 & 0x40) == 0) {
        if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar1 = FUN_01f5f9c0();
        lVar2 = *unaff_x22;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar2);
          lVar2 = *unaff_x22;
        }
        *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar2 + 0xb8);
        goto LAB_01f5f95c;
      }
      in_stack_00000008 = 0;
      FUN_01e766e4(&stack0x00000008,param_3,1,0);
      *unaff_x21 = in_stack_00000008;
      lVar2 = *unaff_x22;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar2 = *unaff_x22;
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar2 + 0xb8);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    uVar3 = *(undefined8 *)PTR_DAT_027c0ac8;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
LAB_01f5f95c:
  return uVar1 & 1;
}


