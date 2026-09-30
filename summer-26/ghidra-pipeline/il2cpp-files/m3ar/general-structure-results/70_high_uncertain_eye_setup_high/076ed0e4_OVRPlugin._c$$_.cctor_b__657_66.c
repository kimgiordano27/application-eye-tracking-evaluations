/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_66
ENTRY_POINT: 076ed0e4
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


void OVRPlugin_<>c__<_cctor>b__657_66(void)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
    FUN_07449f28(lVar3,uVar4,*(undefined8 *)PTR_DAT_08fae650,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar3;
  }
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_08fae648 + 0xe4);
    *(long *)(unaff_x19 + 0x78) = lVar3;
    if (iVar1 == 0) {
      thunk_FUN_0408f364();
    }
    FUN_06dfbf60();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


