/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_31
ENTRY_POINT: 05174f9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_31(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  ulong uVar3;
  long *unaff_x24;
  
  FUN_04b3a944();
  puVar1 = PTR_DAT_06763f68;
                    /* try { // try from 05174fa0 to 05274fab has its CatchHandler @ 05174c98 */
                    /* try { // try from 05174fac to 05274fb3 has its CatchHandler @ 05174fb4 */
  FUN_05060724((long)unaff_w21,0);
                    /* catch() { ... } // from try @ 05174f90 with catch @ 05174fb4
                       catch() { ... } // from try @ 05174fac with catch @ 05174fb4 */
                    /* try { // try from 05174fc0 to 0527504b has its CatchHandler @ 05174fc0
                       catch() { ... } // from try @ 05174fc0 with catch @ 05174fc0
                       catch() { ... } // from try @ 051751d0 with catch @ 05174fc0
                       catch() { ... } // from try @ 05175208 with catch @ 05174fc0
                       catch() { ... } // from try @ 05175284 with catch @ 05174fc0
                       catch() { ... } // from try @ 051752a8 with catch @ 05174fc0
                       catch() { ... } // from try @ 0517538c with catch @ 05174fc0
                       catch() { ... } // from try @ 051753d0 with catch @ 05174fc0
                       catch() { ... } // from try @ 051753ec with catch @ 05174fc0
                       catch() { ... } // from try @ 0517541c with catch @ 05174fc0 */
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x24);
  }
  FUN_051750f4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar3 = 0;
      uVar2 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        free(__ptr);
        uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05175078 to 0527509b has its CatchHandler @ 051752d8 */
  FUN_02d60ae8();
}


