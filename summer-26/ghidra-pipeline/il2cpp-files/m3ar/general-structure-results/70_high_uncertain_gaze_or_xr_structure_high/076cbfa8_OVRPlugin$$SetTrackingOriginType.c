/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 076cbfa8
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingOriginType(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x24;
  
  lVar3 = *(long *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
    }
    else {
      FUN_057d53ac();
    }
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *unaff_x24;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0xb8);
    if (puVar4[2] == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar4 = *(undefined8 **)(*unaff_x24 + 0xb8);
      }
      uVar5 = *puVar4;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadc28);
      FUN_053442e0(uVar2,uVar5,*(undefined8 *)PTR_DAT_08fadc50,0);
      *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10) = uVar2;
    }
    FUN_04b0f494();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


