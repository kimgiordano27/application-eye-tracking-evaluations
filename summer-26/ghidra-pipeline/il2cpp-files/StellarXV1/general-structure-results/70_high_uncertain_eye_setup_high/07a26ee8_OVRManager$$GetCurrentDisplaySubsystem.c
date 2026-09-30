/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 07a26ee8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__GetCurrentDisplaySubsystem(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 07a26ee8 to 07b26eeb has its CatchHandler @ 07a26f5c */
  if (in_x9 != 0) {
                    /* try { // try from 07a26eec to 07b26f27 has its CatchHandler @ 07a26fa0 */
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_07a26f34;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a26f34:
  lVar3 = (*(code *)*puVar2)();
  uVar4 = FUN_07a2bca8();
  if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 07a26c44 with catch @ 07a26f9c */
    uVar1 = 0;
                    /* catch() { ... } // from try @ 07a26eec with catch @ 07a26fa0 */
  }
  else {
                    /* try { // try from 07a26f54 to 07b26f57 has its CatchHandler @ 07a26fb8 */
                    /* try { // try from 07a26f58 to 07b26fdf has its CatchHandler @ 07a267d8 */
    lVar5 = *unaff_x19;
                    /* catch() { ... } // from try @ 07a26ee8 with catch @ 07a26f5c */
                    /* catch() { ... } // from try @ 07a26e84 with catch @ 07a26f60 */
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 07a26dec with catch @ 07a26f64 */
                    /* catch() { ... } // from try @ 07a26d88 with catch @ 07a26f68 */
    if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 07a26c34 with catch @ 07a26f6c */
                    /* catch() { ... } // from try @ 07a26c04 with catch @ 07a26f70 */
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 07a26ba8 with catch @ 07a26f74 */
                    /* catch() { ... } // from try @ 07a26e58 with catch @ 07a26f78 */
                    /* catch() { ... } // from try @ 07a26d5c with catch @ 07a26f7c */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092ecfe8) {
                    /* catch() { ... } // from try @ 07a26d98 with catch @ 07a26fa4 */
                    /* catch() { ... } // from try @ 07a26df0 with catch @ 07a26fa8 */
                    /* catch() { ... } // from try @ 07a26b40 with catch @ 07a26fac */
                    /* catch() { ... } // from try @ 07a26adc with catch @ 07a26fb0 */
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_07a26fb4;
        }
                    /* catch() { ... } // from try @ 07a26cd4 with catch @ 07a26f80 */
        uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 07a26ca8 with catch @ 07a26f84 */
        piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 07a26c70 with catch @ 07a26f88 */
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 07a26c54 with catch @ 07a26f8c */
                    /* catch() { ... } // from try @ 07a26c0c with catch @ 07a26f90 */
                    /* catch() { ... } // from try @ 07a26e94 with catch @ 07a26f94 */
    puVar2 = (undefined8 *)FUN_040b1e00();
                    /* catch() { ... } // from try @ 07a26c8c with catch @ 07a26f98 */
LAB_07a26fb4:
                    /* catch() { ... } // from try @ 07a26bac with catch @ 07a26fb4 */
                    /* catch() { ... } // from try @ 07a26ce8 with catch @ 07a26fb8
                       catch() { ... } // from try @ 07a26f54 with catch @ 07a26fb8 */
                    /* catch() { ... } // from try @ 07a26ab0 with catch @ 07a26fbc */
                    /* catch() { ... } // from try @ 07a26aec with catch @ 07a26fc0 */
    (*(code *)*puVar2)(&stack0x00000008);
                    /* catch() { ... } // from try @ 07a26b44 with catch @ 07a26fc4 */
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
                    /* try { // try from 07a26fe0 to 07b26fe3 has its CatchHandler @ 07a270e0 */
                    /* try { // try from 07a26fe4 to 07b270e3 has its CatchHandler @ 07a267d8 */
    uVar1 = FUN_07a4bc7c(lVar3,&stack0x00000020,0);
    uVar1 = uVar1 & 1;
  }
  uVar4 = FUN_07a2bd58();
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_08d5cef0(*unaff_x19);
    return uVar4;
  }
  return (ulong)uVar1;
}


