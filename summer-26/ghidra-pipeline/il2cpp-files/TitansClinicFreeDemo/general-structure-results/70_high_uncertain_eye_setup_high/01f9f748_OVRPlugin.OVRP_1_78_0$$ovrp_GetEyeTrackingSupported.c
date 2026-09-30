/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingSupported
ENTRY_POINT: 01f9f748
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01f9f80c) */

void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingSupported(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000028;
  
  do {
                    /* catch() { ... } // from try @ 01f9f6a8 with catch @ 01f9f748 */
    lVar3 = thunk_FUN_0124baac(param_1,param_2);
    if (lVar3 == 0) {
      uVar2 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar2,0);
    }
    bVar1 = *(byte *)(*unaff_x22 + 0x130);
                    /* try { // try from 01f9f764 to 0209f767 has its CatchHandler @ 01f9f774 */
                    /* catch() { ... } // from try @ 01f9f764 with catch @ 01f9f774 */
    if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
       (param_1 = unaff_x21,
       *(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(unaff_x21);
    }
    do {
      if (*(uint *)(unaff_x19 + 3) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
                    /* try { // try from 01f9f788 to 0209f797 has its CatchHandler @ 01f9f7ac */
      unaff_x19[unaff_x20 + 4] = (long)param_1;
                    /* try { // try from 01f9f798 to 0209f7a3 has its CatchHandler @ 01f9f3e8 */
      thunk_FUN_01286abc((long)unaff_x19 + unaff_x24,param_1);
      unaff_x20 = unaff_x20 + 1;
                    /* try { // try from 01f9f7a4 to 0209f7ab has its CatchHandler @ 01f9f7ac */
      unaff_x24 = unaff_x24 + 8;
      if (unaff_x23 == unaff_x20) {
                    /* catch() { ... } // from try @ 01f9f73c with catch @ 01f9f7ac
                       catch() { ... } // from try @ 01f9f788 with catch @ 01f9f7ac
                       catch() { ... } // from try @ 01f9f7a4 with catch @ 01f9f7ac */
                    /* try { // try from 01f9f7b0 to 0209f8b7 has its CatchHandler @ 01f9f7b0
                       catch() { ... } // from try @ 01f9f7b0 with catch @ 01f9f7b0
                       catch() { ... } // from try @ 01f9f984 with catch @ 01f9f7b0
                       catch() { ... } // from try @ 01f9f9e4 with catch @ 01f9f7b0
                       catch() { ... } // from try @ 01f9fb20 with catch @ 01f9f7b0
                       catch() { ... } // from try @ 01f9fb5c with catch @ 01f9f7b0
                       catch() { ... } // from try @ 01f9fbcc with catch @ 01f9f7b0 */
        FUN_01e5b748(&stack0x00000008,0);
        FUN_01e5b7ec(&stack0x00000010,0);
        return;
      }
      uVar2 = thunk_FUN_01e5b420(&stack0x00000008,unaff_x20 & 0xffffffff,0);
      param_1 = (long *)FUN_01ef5cd8(uVar2,in_stack_00000028,0);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
    } while (param_1 == (long *)0x0);
    bVar1 = *(byte *)(*unaff_x22 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(param_1);
    }
    param_2 = *(undefined8 *)(*unaff_x19 + 0x40);
    unaff_x21 = param_1;
  } while( true );
}


