/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 07478ba0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_EyeTextureArrayEnabled(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_091a0c40;
                    /* try { // try from 07478bb4 to 07578bff has its CatchHandler @ 07478bb4
                       catch() { ... } // from try @ 07478bb4 with catch @ 07478bb4
                       catch() { ... } // from try @ 07478cb4 with catch @ 07478bb4
                       catch() { ... } // from try @ 07478cf4 with catch @ 07478bb4
                       catch() { ... } // from try @ 07478d28 with catch @ 07478bb4 */
  if ((*(byte *)(unaff_x22 + 0x90a) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0c40);
    FUN_03d2d2b0(PTR_DAT_092234f8);
    *(undefined1 *)(unaff_x22 + 0x90a) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar2 = FUN_08a508b0(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 07478c00 to 07578c03 has its CatchHandler @ 07478cc4 */
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar3 = FUN_073f6e4c(*(long *)(param_1 + 0x28),0);
      puVar1 = PTR_DAT_092234f8;
                    /* try { // try from 07478c20 to 07578c37 has its CatchHandler @ 07478cc0 */
      if (*(int *)(*(long *)PTR_DAT_092234f8 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)PTR_DAT_092234f8);
      }
      if (lVar3 != 0) {
                    /* try { // try from 07478c48 to 07578c57 has its CatchHandler @ 07478cb8 */
        uVar5 = 0x3f800000;
        if ((param_2 & 1) == 0) {
          uVar5 = 0;
        }
        FUN_08a1efb4(uVar5,lVar3,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_073f6ebc(*(long *)(param_1 + 0x28),0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  return;
}


