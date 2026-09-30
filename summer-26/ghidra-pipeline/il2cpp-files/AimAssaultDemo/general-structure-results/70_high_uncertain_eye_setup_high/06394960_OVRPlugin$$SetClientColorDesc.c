/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 06394960
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetClientColorDesc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    param_1 = *unaff_x22;
  }
  if (unaff_x21 != 0) {
    lVar5 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 06394988 to 064949eb has its CatchHandler @ 06394988
                       catch() { ... } // from try @ 06394988 with catch @ 06394988
                       catch() { ... } // from try @ 06394a80 with catch @ 06394988
                       catch() { ... } // from try @ 06394af4 with catch @ 06394988
                       catch() { ... } // from try @ 06394b94 with catch @ 06394988
                       catch() { ... } // from try @ 06394c44 with catch @ 06394988 */
    uVar4 = **(undefined8 **)(param_1 + 0xb8);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4();
      }
                    /* try { // try from 06394a3c to 06494a47 has its CatchHandler @ 06394ba4 */
      *unaff_x19 = unaff_x21;
      thunk_FUN_037aeb94();
      *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
                    /* try { // try from 06394a60 to 06494a6f has its CatchHandler @ 06394b98 */
      uVar2 = FUN_06392e4c();
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar4 = thunk_FUN_037788cc();
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6690);
      FUN_062d6d20(uVar4,uVar3,0);
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db66a8);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06394a80 to 06494aef has its CatchHandler @ 06394988 */
  FUN_0373b7b4();
}


