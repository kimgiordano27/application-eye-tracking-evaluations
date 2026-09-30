/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 033bcf44
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeAngularVelocity(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  code *in_x9;
  long *unaff_x20;
  
  iVar2 = (*in_x9)();
  if (iVar2 == 2) {
    bVar1 = *(byte *)(*(long *)StringLiteral_6058 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)StringLiteral_6058)) {
      FUN_033bc750();
      return;
    }
  }
  else {
    if (iVar2 != 0x10) {
      uVar3 = (**(code **)(*unaff_x20 + 0x208))();
      thunk_FUN_01de26bc(uVar3,*(undefined8 *)StringLiteral_8776);
      return;
    }
    bVar1 = *(byte *)(*(long *)StringLiteral_1681 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)StringLiteral_1681)) {
      FUN_033bc6a4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


