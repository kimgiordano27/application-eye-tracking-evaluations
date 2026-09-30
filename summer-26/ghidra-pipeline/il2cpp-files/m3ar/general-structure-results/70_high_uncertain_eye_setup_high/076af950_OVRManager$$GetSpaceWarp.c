/*
FUNCTION_NAME: OVRManager$$GetSpaceWarp
ENTRY_POINT: 076af950
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetSpaceWarp(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fad1c8);
  FUN_0403162c(PTR_DAT_08fad1b8);
  *(undefined1 *)(unaff_x20 + 0x99) = 1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar2 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
    FUN_07449f28(lVar4,uVar5,*(undefined8 *)PTR_DAT_08fad1c0,0);
    lVar2 = *unaff_x22;
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar4;
  }
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(lVar2 + 0xe4);
    *(long *)(unaff_x19 + 0x38) = lVar4;
    if (iVar1 == 0) {
      thunk_FUN_0408f364();
      lVar2 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
    lVar4 = puVar3[2];
    if (lVar4 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
      FUN_07449f28(lVar4,uVar5,*(undefined8 *)PTR_DAT_08fad1c8,0);
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar4;
    }
    *(long *)(unaff_x19 + 0x40) = lVar4;
    thunk_FUN_085843b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


