/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 05776bec
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureSize(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    uVar4 = FUN_057759cc(param_1);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* try { // try from 05776bf8 to 05876bfb has its CatchHandler @ 05776c08 */
                    /* try { // try from 05776bfc to 05876c27 has its CatchHandler @ 05776780 */
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
                    /* catch() { ... } // from try @ 05776bf8 with catch @ 05776c08 */
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w27 - 1) * 8 + 0x20) = uVar4;
    uVar4 = FUN_057759cc(unaff_x22);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar1 = (long)(int)unaff_w27;
    unaff_w27 = unaff_w27 + 2;
                    /* try { // try from 05776c28 to 05876c57 has its CatchHandler @ 05776cb8 */
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar4;
    uVar3 = FUN_04e98e80(&stack0x00000030,*unaff_x26);
    unaff_x22 = in_stack_00000048;
    param_1 = in_stack_00000040;
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
  }
  FUN_04e98fa0(&stack0x00000030,*unaff_x25);
  puVar2 = PTR_DAT_06d36fa0;
                    /* catch() { ... } // from try @ 05776a4c with catch @ 05776c4c
                       catch() { ... } // from try @ 05776b88 with catch @ 05776c4c */
  FUN_0565dbf8((long)unaff_w21,0);
                    /* try { // try from 05776c58 to 05876c7f has its CatchHandler @ 05776780 */
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 05776aa4 with catch @ 05776c60 */
                    /* catch() { ... } // from try @ 05776aa8 with catch @ 05776c64 */
    thunk_FUN_02f12b58(*unaff_x24);
  }
                    /* catch() { ... } // from try @ 05776a70 with catch @ 05776c68 */
  FUN_05776d90();
                    /* try { // try from 05776c80 to 05876c83 has its CatchHandler @ 05776cb0 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  free(unaff_x20);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* try { // try from 05776c98 to 05876caf has its CatchHandler @ 05776cb8 */
  if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
    uVar3 = 0;
    uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    do {
                    /* catch() { ... } // from try @ 05776c80 with catch @ 05776cb0 */
      if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
                    /* catch() { ... } // from try @ 057769e0 with catch @ 05776cb8
                       catch() { ... } // from try @ 05776bd8 with catch @ 05776cb8
                       catch() { ... } // from try @ 05776c28 with catch @ 05776cb8
                       catch() { ... } // from try @ 05776c98 with catch @ 05776cb8 */
                    /* catch() { ... } // from try @ 05776ac8 with catch @ 05776cbc
                       catch() { ... } // from try @ 05776b70 with catch @ 05776cbc */
      __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 05776cc8 to 05876d4b has its CatchHandler @ 05776cc8
                       catch() { ... } // from try @ 05776cc8 with catch @ 05776cc8
                       catch() { ... } // from try @ 05776d6c with catch @ 05776cc8
                       catch() { ... } // from try @ 05776d90 with catch @ 05776cc8
                       catch() { ... } // from try @ 05776dc0 with catch @ 05776cc8 */
        thunk_FUN_02f12b58();
      }
      free(__ptr);
      uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
  }
  return;
}


