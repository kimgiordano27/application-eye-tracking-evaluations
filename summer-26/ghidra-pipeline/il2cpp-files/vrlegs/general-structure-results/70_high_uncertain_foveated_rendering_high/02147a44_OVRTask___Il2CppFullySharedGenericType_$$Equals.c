/*
FUNCTION_NAME: OVRTask<__Il2CppFullySharedGenericType>$$Equals
ENTRY_POINT: 02147a44
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_foveation_hits_1;functionality_foveated_rendering
*/


void OVRTask<__Il2CppFullySharedGenericType>__Equals(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  
                    /* try { // try from 02147a50 to 02247a73 has its CatchHandler @ 02147b18 */
  FUN_018820a8();
  FUN_018820a8();
                    /* try { // try from 02147a84 to 02247acf has its CatchHandler @ 02147b40 */
  FUN_01883150();
  if (unaff_x21 != 0) {
    FUN_02146e50();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000058,0);
    uVar1 = in_stack_00000058;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
                    /* try { // try from 02147ae0 to 02247b03 has its CatchHandler @ 02147b14 */
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
                    /* try { // try from 02147b04 to 02247b0f has its CatchHandler @ 02148ac0 */
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
                    /* catch() { ... } // from try @ 02147ae0 with catch @ 02147b14 */
                    /* catch() { ... } // from try @ 02147a50 with catch @ 02147b18 */
                    /* catch() { ... } // from try @ 021479c0 with catch @ 02147b1c */
                    /* catch() { ... } // from try @ 02147780 with catch @ 02147b20 */
      uVar4 = **(undefined8 **)(lVar3 + 0xb8);
                    /* catch() { ... } // from try @ 02147930 with catch @ 02147b24 */
                    /* catch() { ... } // from try @ 021478a0 with catch @ 02147b28 */
      if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 02147810 with catch @ 02147b2c */
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cdabc0);
      }
                    /* catch() { ... } // from try @ 02147680 with catch @ 02147b38 */
                    /* catch() { ... } // from try @ 021475b0 with catch @ 02147b3c */
                    /* catch() { ... } // from try @ 02147a84 with catch @ 02147b40 */
      FUN_030bc0b0(&stack0x00000018,uVar1,uVar4);
                    /* catch() { ... } // from try @ 021479f4 with catch @ 02147b4c */
                    /* catch() { ... } // from try @ 02147964 with catch @ 02147b50 */
                    /* catch() { ... } // from try @ 02147724 with catch @ 02147b54 */
      in_stack_00000040 = in_stack_00000028;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      FUN_01887328();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


