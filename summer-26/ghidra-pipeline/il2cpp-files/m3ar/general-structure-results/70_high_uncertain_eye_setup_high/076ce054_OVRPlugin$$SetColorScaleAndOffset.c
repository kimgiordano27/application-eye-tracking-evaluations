/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 076ce054
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetColorScaleAndOffset(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x25;
  
  FUN_05320da4();
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar3 = *unaff_x25;
  }
  puVar2 = PTR_DAT_08faddc0;
  puVar1 = PTR_DAT_08fadda8;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar4[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar4 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar7 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08faddb8);
    FUN_053210c4(lVar7,uVar6,*(undefined8 *)PTR_DAT_08faddc8,0);
    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8) = lVar7;
  }
  lVar3 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
  FUN_052668e0(lVar3,param_1,lVar7);
  uVar6 = *(undefined8 *)(unaff_x21 + 0x18);
  lVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
  FUN_075273c0(lVar7,0);
  lVar5 = *(long *)(unaff_x21 + 0x18);
  *(undefined8 *)(lVar7 + 0x10) = uVar6;
  *(long *)(lVar7 + 0x18) = lVar3;
  if ((lVar5 != 0) && (lVar3 != 0)) {
    FUN_0526691c(lVar3,*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)PTR_DAT_08fadd98);
    if ((*(long *)(unaff_x21 + 0x18) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      FUN_06efa5dc(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*(long *)(unaff_x21 + 0x18) + 0x38),
                   lVar7,*(undefined8 *)PTR_DAT_08fadd88);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


