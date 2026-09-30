/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$.cctor
ENTRY_POINT: 090d1ffc
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0___cctor(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong in_x9;
  uint unaff_w19;
  long unaff_x20;
  ulong unaff_x23;
  float fVar4;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  float fStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  puVar1 = PTR_DAT_0ac75878;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000020 = 0;
  _fStack0000000000000028 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  if ((in_x9 & unaff_x23) == 0) {
    return;
  }
  lVar2 = *(long *)PTR_DAT_0ac75878;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
LAB_090d2158:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
                    /* catch() { ... } // from try @ 090d19c0 with catch @ 090d2058 */
                    /* catch() { ... } // from try @ 090d1a3c with catch @ 090d205c */
                    /* catch() { ... } // from try @ 090d1924 with catch @ 090d2060 */
                    /* catch() { ... } // from try @ 090d1f60 with catch @ 090d2064 */
                    /* catch() { ... } // from try @ 090d1960 with catch @ 090d2068 */
    if (*(int *)(lVar2 + (long)(int)unaff_w19 * 4 + 0x20) == -1) {
      uStack0000000000000000 = *(undefined8 *)(unaff_x20 + 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x28);
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (unaff_x23 ^ 0xffffffffffffffff)
      ;
      uStack0000000000000014 = (undefined4)*(undefined8 *)(unaff_x20 + 0x34);
      uStack0000000000000018 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x34) >> 0x20);
      uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0x2c);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
    }
    else {
                    /* catch() { ... } // from try @ 090d1a00 with catch @ 090d206c */
                    /* catch() { ... } // from try @ 090d18f4 with catch @ 090d2070 */
                    /* catch() { ... } // from try @ 090d1f5c with catch @ 090d2074 */
      FUN_090d1fb0();
                    /* catch() { ... } // from try @ 090d18b8 with catch @ 090d2078 */
                    /* catch() { ... } // from try @ 090d1844 with catch @ 090d207c */
                    /* catch() { ... } // from try @ 090d1888 with catch @ 090d2080 */
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (unaff_x23 ^ 0xffffffffffffffff)
      ;
      FUN_090d1f58();
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    uStack0000000000000048 = uStack0000000000000008;
    in_stack_00000040 = uStack0000000000000000;
    uStack0000000000000054 = uStack0000000000000014;
    in_stack_00000058 = uStack0000000000000018;
    uStack000000000000004c = uStack000000000000000c;
    uStack0000000000000050 = uStack0000000000000010;
    if (lVar2 == 0) goto LAB_090d2158;
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
      uStack0000000000000030 = *(undefined8 *)(lVar2 + 0x30);
      uStack0000000000000038 = *(undefined4 *)(lVar2 + 0x38);
      fVar4 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar2 + 0x28);
      lVar3 = *(long *)(unaff_x20 + 0x18);
      uStack0000000000000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(lVar2 + 0x20) * fVar4);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar4);
      if (lVar3 == 0) goto LAB_090d2158;
      if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
        FUN_09035ed4(&stack0x00000040,&stack0x00000020,lVar3 + (long)(int)unaff_w19 * 0x1c + 0x20,0)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


