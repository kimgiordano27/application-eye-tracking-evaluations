/*
FUNCTION_NAME: OVRManager$$SetDepthSubmission
ENTRY_POINT: 076af9a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetDepthSubmission(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  
  uVar6 = *param_1;
  uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
  FUN_07449f28(uVar2,uVar6,*(undefined8 *)PTR_DAT_08fad1c0,0);
  lVar3 = *unaff_x22;
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = uVar2;
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(lVar3 + 0xe4);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    if (iVar1 == 0) {
      thunk_FUN_0408f364();
      lVar3 = *unaff_x22;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0xb8);
    lVar5 = puVar4[2];
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar2 = *puVar4;
      lVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
      FUN_07449f28(lVar5,uVar2,*(undefined8 *)PTR_DAT_08fad1c8,0);
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar5;
    }
    *(long *)(unaff_x19 + 0x40) = lVar5;
    thunk_FUN_085843b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


