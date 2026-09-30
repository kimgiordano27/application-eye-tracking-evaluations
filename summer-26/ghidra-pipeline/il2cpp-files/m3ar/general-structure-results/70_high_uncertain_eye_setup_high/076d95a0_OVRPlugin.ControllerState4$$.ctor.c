/*
FUNCTION_NAME: OVRPlugin.ControllerState4$$.ctor
ENTRY_POINT: 076d95a0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_ControllerState4___ctor
               (undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  char cVar1;
  int iVar2;
  ulong *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar3;
  undefined4 uVar4;
  float fVar6;
  ulong uVar5;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  undefined8 uVar8;
  ulong unaff_d10;
  ulong uVar9;
  float fVar10;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
                    /* catch() { ... } // from try @ 076d94fc with catch @ 076d95a0 */
                    /* catch() { ... } // from try @ 076d944c with catch @ 076d95a4 */
  fVar3 = (float)param_1 - (float)param_2;
  fVar6 = (float)((ulong)param_1 >> 0x20) - (float)((ulong)param_2 >> 0x20);
                    /* catch() { ... } // from try @ 076d9568 with catch @ 076d95a8 */
                    /* catch() { ... } // from try @ 076d9564 with catch @ 076d95ac */
                    /* catch() { ... } // from try @ 076d9560 with catch @ 076d95b0 */
                    /* catch() { ... } // from try @ 076d93e8 with catch @ 076d95b4 */
  uVar9 = unaff_d10 ^
          (unaff_d10 ^ CONCAT44(fVar6,fVar3)) &
          ~CONCAT44(-(uint)(fVar6 < (float)(unaff_d10 >> 0x20)),-(uint)(fVar3 < (float)unaff_d10));
                    /* catch() { ... } // from try @ 076d9384 with catch @ 076d95b8 */
  if (unaff_s9 <= param_3 - param_4) {
    unaff_s9 = param_3 - param_4;
  }
                    /* catch() { ... } // from try @ 076d9558 with catch @ 076d95bc */
  FUN_076d94b4();
                    /* try { // try from 076d95d0 to 077d95d3 has its CatchHandler @ 076d9680 */
                    /* try { // try from 076d95d4 to 077d9683 has its CatchHandler @ 076d9258 */
  fStack0000000000000024 = (float)_fStack0000000000000018 + fStack0000000000000024;
  fVar3 = (float)((ulong)_fStack0000000000000018 >> 0x20) + fStack0000000000000028;
  uVar5 = CONCAT44(fVar3,fStack0000000000000024);
  uVar5 = uVar5 ^ (uVar5 ^ uVar9) &
                  CONCAT44(-(uint)((float)(uVar9 >> 0x20) < fVar3),
                           -(uint)((float)uVar9 < fStack0000000000000024));
  if (fStack0000000000000020 + fStack000000000000002c <= unaff_s9) {
    unaff_s9 = fStack0000000000000020 + fStack000000000000002c;
  }
  iVar2 = FUN_076d98a4(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  fVar7 = *unaff_x20;
  fVar3 = unaff_x20[1];
  fVar6 = unaff_x20[2];
  in_stack_00000010 = 0;
  FUN_05b94d7c(&stack0x00000010,iVar2,*unaff_x23);
  uVar4 = FUN_076d9b6c(fVar7);
  *(undefined4 *)((long)unaff_x19 + 0xc) = uVar4;
  *(float *)(unaff_x19 + 2) = fVar3;
  *(float *)((long)unaff_x19 + 0x14) = fVar6;
  fVar3 = *unaff_x20;
  fVar6 = unaff_x20[1];
  fVar7 = unaff_x20[2];
  _fStack0000000000000018 = 0;
  fStack0000000000000020 = 0.0;
  fStack0000000000000024 = 0.0;
  fStack0000000000000028 = 0.0;
  fStack000000000000002c = 0.0;
  FUN_076d94b4(&stack0x00000018);
  uVar9 = FUN_0853ca8c(fVar3,fVar6,fVar7,&stack0x00000018,0);
  fVar3 = (float)(uVar5 >> 0x20);
  if ((uVar9 & 1) == 0) {
    *(float *)(unaff_x19 + 1) = unaff_s9;
    cVar1 = DAT_09539e17;
    *unaff_x19 = uVar5;
    fVar6 = *unaff_x20;
    fVar7 = unaff_x20[1];
    fVar10 = unaff_x20[2];
    if (cVar1 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    fVar6 = fVar6 - (float)uVar5;
    fVar7 = fVar7 - fVar3;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar3 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + (fVar10 - unaff_s9) * (fVar10 - unaff_s9));
    *(float *)(unaff_x19 + 3) = fVar3;
    if (0.0 < unaff_s8) {
      return fVar3 <= unaff_s8;
    }
    return true;
  }
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      FUN_076d94b4(&stack0x00000018);
      fVar6 = fStack0000000000000018 - fStack0000000000000024;
LAB_076d97b0:
      uVar5 = CONCAT44(fVar3,fVar6);
      goto LAB_076d97fc;
    }
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        FUN_076d94b4(&stack0x00000018);
        unaff_s9 = fStack0000000000000020 - fStack000000000000002c;
      }
      goto LAB_076d97fc;
    }
    FUN_076d94b4(&stack0x00000018);
    fVar3 = fStack000000000000001c - fStack0000000000000028;
  }
  else {
    if (iVar2 == 3) {
      FUN_076d94b4(&stack0x00000018);
      fVar6 = fStack0000000000000018 + fStack0000000000000024;
      goto LAB_076d97b0;
    }
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        FUN_076d94b4(&stack0x00000018);
        unaff_s9 = fStack0000000000000020 + fStack000000000000002c;
      }
      goto LAB_076d97fc;
    }
    FUN_076d94b4(&stack0x00000018);
    fVar3 = fStack000000000000001c + fStack0000000000000028;
  }
  uVar5 = CONCAT44(fVar3,(float)uVar5);
LAB_076d97fc:
  *unaff_x19 = uVar5;
  *(float *)(unaff_x19 + 1) = unaff_s9;
  uVar8 = *(undefined8 *)unaff_x20;
  fVar3 = unaff_x20[2];
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar6 = (float)uVar5 - (float)uVar8;
  fVar7 = (float)(uVar5 >> 0x20) - (float)((ulong)uVar8 >> 0x20);
  fVar3 = SQRT((unaff_s9 - fVar3) * (unaff_s9 - fVar3) + fVar6 * fVar6 + fVar7 * fVar7);
  *(float *)(unaff_x19 + 3) = fVar3;
  return fVar3 <= unaff_s8 || unaff_s8 <= 0.0;
}


