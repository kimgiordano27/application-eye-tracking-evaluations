/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 076b63b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  long *unaff_x23;
  
  FUN_0403162c(PTR_DAT_08f65810);
  FUN_0403162c(PTR_DAT_08fad418);
  FUN_0403162c(PTR_DAT_08fad420);
  FUN_0403162c(PTR_DAT_08fad428);
  FUN_0403162c(PTR_DAT_08fad430);
  FUN_0403162c(PTR_DAT_08fad438);
  *(undefined1 *)(unaff_x20 + 0xeb) = 1;
  lVar8 = *unaff_x23;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar8 = *unaff_x23;
  }
  puVar1 = PTR_DAT_08f65750;
  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
  if (puVar10[1] == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar10 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar11 = *puVar10;
    uVar9 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fad400);
    FUN_07d2d68c(uVar9,uVar11,*(undefined8 *)PTR_DAT_08fad408,0);
    *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8) = uVar9;
  }
  puVar7 = PTR_DAT_08fad438;
  puVar6 = PTR_DAT_08fad430;
  puVar5 = PTR_DAT_08fad428;
  puVar4 = PTR_DAT_08fad418;
  puVar3 = PTR_DAT_08fad410;
  puVar2 = PTR_DAT_08f65810;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar9 = FUN_07d2bea8();
  uVar9 = FUN_07d2bc74(uVar9,*(undefined8 *)puVar7,*(undefined8 *)puVar2,8,0);
  uVar9 = FUN_07d2bc74(uVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar3,8,0);
  lVar8 = FUN_07d2bc74(uVar9,*(undefined8 *)puVar6,*(undefined8 *)puVar5,8,0);
  if (lVar8 != 0) {
    FUN_0736de8c(lVar8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


