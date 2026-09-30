/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 076af9c0
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__get_trackingOriginType(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  FUN_07449f28();
  lVar2 = *unaff_x22;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = param_1;
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(lVar2 + 0xe4);
    *(undefined8 *)(unaff_x19 + 0x38) = param_1;
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


