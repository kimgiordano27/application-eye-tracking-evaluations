/*
FUNCTION_NAME: OVRPlugin$$DestroyDynamicObjectTracker
ENTRY_POINT: 090b23f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyDynamicObjectTracker(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 uVar4;
  long unaff_x22;
  undefined4 uVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09788);
                    /* try { // try from 090b2408 to 091b2413 has its CatchHandler @ 090b28ec */
    FUN_04947ee4(PTR_DAT_0ac791a8);
    *(undefined1 *)(unaff_x22 + 0x31a) = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x28);
                    /* try { // try from 090b2428 to 091b2433 has its CatchHandler @ 090b28c4 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar2 = FUN_0a17b398(uVar4,0,0);
                    /* try { // try from 090b2440 to 091b245f has its CatchHandler @ 090b28cc */
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar3 = FUN_09033050(*(long *)(param_2 + 0x28),0);
      puVar1 = PTR_DAT_0ac791a8;
      if (*(int *)(*(long *)PTR_DAT_0ac791a8 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac791a8);
      }
      if (lVar3 != 0) {
                    /* try { // try from 090b2488 to 091b248b has its CatchHandler @ 090b2904 */
        uVar5 = 0x3f800000;
        if ((unaff_x20 & 1) == 0) {
          uVar5 = 0;
        }
                    /* try { // try from 090b2498 to 091b249b has its CatchHandler @ 090b2920 */
        thunk_FUN_0a1455d8(uVar5,lVar3,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
        if (*(long *)(param_2 + 0x28) != 0) {
                    /* try { // try from 090b24ac to 091b24b3 has its CatchHandler @ 090b28f8 */
          FUN_090330c0(*(long *)(param_2 + 0x28),0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
                    /* try { // try from 090b24c4 to 091b24cf has its CatchHandler @ 090b28f0 */
  return;
}


