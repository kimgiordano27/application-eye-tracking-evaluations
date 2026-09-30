/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox3D
ENTRY_POINT: 07a497e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundingBox3D(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  ulong in_x10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
                    /* try { // try from 07a497e8 to 07b497eb has its CatchHandler @ 07a49804 */
                    /* try { // try from 07a497ec to 07b49807 has its CatchHandler @ 07a49184 */
    *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = param_3;
    if (in_x9 <= unaff_x22 + 2) break;
    unaff_w21 = unaff_w21 + 1;
    uVar1 = unaff_x22 + 3;
                    /* catch() { ... } // from try @ 07a497e8 with catch @ 07a49804 */
                    /* try { // try from 07a49808 to 07b4980f has its CatchHandler @ 07a49818 */
    *(undefined4 *)(param_1 + (unaff_x22 + 2) * 4 + 0x20) = param_2;
    if (unaff_w21 == 0x18) {
                    /* try { // try from 07a49810 to 07b4981b has its CatchHandler @ 07a49184 */
                    /* catch() { ... } // from try @ 07a496c8 with catch @ 07a49818
                       catch() { ... } // from try @ 07a497a4 with catch @ 07a49818
                       catch() { ... } // from try @ 07a49808 with catch @ 07a49818 */
      return;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07a497a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a497a0:
    (*(code *)*puVar2)((long)&stack0x00000000 + 4);
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
    if (in_x9 <= uVar1) break;
    in_x10 = unaff_x22 + 4;
    *(undefined4 *)(param_1 + uVar1 * 4 + 0x20) = in_stack_00000000._4_4_;
    unaff_x22 = uVar1;
    param_2 = uStack000000000000000c;
    param_3 = uStack0000000000000008;
  } while (in_x10 < in_x9);
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


