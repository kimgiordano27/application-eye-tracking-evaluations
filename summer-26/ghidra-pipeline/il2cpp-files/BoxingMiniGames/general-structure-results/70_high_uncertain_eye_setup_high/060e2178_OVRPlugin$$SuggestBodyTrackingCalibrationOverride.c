/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 060e2178
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestBodyTrackingCalibrationOverride(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *in_x10;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_stack_00000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_060e21c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 060e21a0 to 061e21cb has its CatchHandler @ 060e23b0 */
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060e21c0:
  iVar1 = (*(code *)*puVar2)();
  if (0 < iVar1) {
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_060e1180();
    if (DAT_07ed76ba == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
                    /* try { // try from 060e2200 to 061e220f has its CatchHandler @ 060e23a0 */
      DAT_07ed76ba = '\x01';
    }
    plVar6 = *(long **)(unaff_x19 + 0x20);
    lVar3 = *(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
    in_stack_00000020 = *(float *)(lVar3 + 0x48);
    fVar8 = *(float *)(lVar3 + 0x4c);
    fVar10 = *(float *)(lVar3 + 0x50);
                    /* try { // try from 060e2220 to 061e2227 has its CatchHandler @ 060e23a4 */
    fStack0000000000000024 = fVar8;
    in_stack_00000028 = fVar10;
    in_stack_00000030 = in_stack_00000020;
    fStack0000000000000034 = fVar8;
    in_stack_00000038 = fVar10;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
                    /* try { // try from 060e2240 to 061e2243 has its CatchHandler @ 060e2384 */
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      in_stack_00000030 = in_stack_00000020;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a22380) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_060e2288;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a22380,0);
LAB_060e2288:
      uVar4 = (*(code *)*puVar2)(plVar6);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_079fd258 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        fVar7 = (float)FUN_071ce620();
        in_stack_00000030 = -fVar7;
        fVar9 = -fVar8;
        fVar11 = -fVar10;
        fStack0000000000000034 = fVar9;
        in_stack_00000038 = fVar11;
        in_stack_00000020 = (float)FUN_071ce620();
        in_stack_00000020 = -in_stack_00000020;
        fStack0000000000000024 = -fVar9;
        in_stack_00000028 = -fVar11;
        if (unaff_w20 == 1) {
          in_stack_00000030 = fVar7;
          fStack0000000000000034 = fVar8;
          in_stack_00000038 = fVar10;
        }
      }
    }
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x10);
    if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
      uVar4 = FUN_060e13b4();
      *(int *)(unaff_x19 + 0x10) = (int)uVar4;
    }
    FUN_060e14cc(uVar4,*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000030,&stack0x00000020);
  }
  return;
}


