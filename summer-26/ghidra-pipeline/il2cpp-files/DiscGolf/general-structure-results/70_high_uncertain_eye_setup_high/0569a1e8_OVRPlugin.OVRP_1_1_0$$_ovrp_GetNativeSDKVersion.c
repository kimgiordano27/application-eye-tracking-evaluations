/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetNativeSDKVersion
ENTRY_POINT: 0569a1e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetNativeSDKVersion(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined1 *__s;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
                    /* catch() { ... } // from try @ 05699ce8 with catch @ 0569a1e8 */
  thunk_FUN_02dd2d7c();
                    /* catch() { ... } // from try @ 0569a1a4 with catch @ 0569a1ec */
                    /* catch() { ... } // from try @ 0569a1a0 with catch @ 0569a1f0 */
                    /* catch() { ... } // from try @ 05699d60 with catch @ 0569a1f4 */
                    /* catch() { ... } // from try @ 05699d00 with catch @ 0569a1f8
                       catch() { ... } // from try @ 05699dd0 with catch @ 0569a1f8 */
                    /* catch() { ... } // from try @ 0569a19c with catch @ 0569a1fc */
                    /* catch() { ... } // from try @ 05699cb0 with catch @ 0569a200 */
  FUN_0536e0dc(*unaff_x25);
                    /* catch() { ... } // from try @ 05699c44 with catch @ 0569a204 */
  if (unaff_w22 == 0) {
    uVar1 = *(uint *)(unaff_x29 + -0xc);
    if (uVar1 == 0) {
                    /* try { // try from 0569a228 to 0579a2cb has its CatchHandler @ 056998c0 */
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
                    /* try { // try from 0569a224 to 0579a227 has its CatchHandler @ 0569a2c8 */
    }
    memset(__s,0,(ulong)uVar1);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar2 = FUN_05644a5c(unaff_w21,unaff_w20,__s,unaff_x29 + -0xc,0);
    uVar3 = *(undefined8 *)(unaff_x28 + 0x50);
    *(undefined4 *)(unaff_x29 + -0x10) = unaff_w20;
    uVar3 = thunk_FUN_02dd2d7c(uVar3,unaff_x29 + -0x10);
    uVar4 = *unaff_x27;
    *(int *)(unaff_x29 + -0x14) = iVar2;
    uVar4 = thunk_FUN_02dd2d7c(uVar4,unaff_x29 + -0x14);
    FUN_0536e0dc(*unaff_x25,uVar3,uVar4,0);
    if (iVar2 == 0) {
      uVar3 = FUN_055339f0(__s,0);
      if (*(int *)(*(long *)PTR_DAT_06a0d5f0 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a0d5f0);
      }
      uVar3 = thunk_FUN_02da261c(uVar3,0);
      *unaff_x19 = uVar3;
      LeanTween__value();
      uVar3 = 1;
      goto LAB_0569a2a8;
    }
  }
  uVar3 = 0;
LAB_0569a2a8:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


