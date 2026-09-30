/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_34
ENTRY_POINT: 076ec364
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


void OVRPlugin_<>c__<_cctor>b__657_34(void)

{
  int iVar1;
  long lVar2;
  undefined1 in_w8;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0x31b) = in_w8;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
                    /* try { // try from 076ec378 to 077ec393 has its CatchHandler @ 076ec44c */
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
                    /* try { // try from 076ec3a8 to 077ec3b3 has its CatchHandler @ 076ec448 */
    lVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
                    /* try { // try from 076ec3b4 to 077ec3c3 has its CatchHandler @ 076ec440 */
                    /* try { // try from 076ec3c8 to 077ec3e7 has its CatchHandler @ 076ec444 */
    FUN_07449f28(lVar4,uVar5,*(undefined8 *)PTR_DAT_08fae620,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar4;
  }
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_08fae618 + 0xe4);
    *(long *)(unaff_x19 + 0x70) = lVar4;
    if (iVar1 == 0) {
      thunk_FUN_0408f364();
    }
    FUN_06dfbf60();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


