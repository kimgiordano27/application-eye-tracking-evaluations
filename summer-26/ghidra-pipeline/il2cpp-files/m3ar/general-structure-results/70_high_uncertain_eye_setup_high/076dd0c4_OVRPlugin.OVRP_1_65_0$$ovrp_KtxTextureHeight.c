/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight
ENTRY_POINT: 076dd0c4
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


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureHeight(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar6;
  float unaff_s14;
  float fVar7;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  
  *(undefined1 *)(unaff_x21 + 0xe17) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar7 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    fStack0000000000000004 = unaff_s9;
    fStack000000000000001c = unaff_s10;
    if (DAT_09539e19 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e19 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar2 = unaff_s15 - (fStack000000000000000c + in_stack_00000018 * fVar7);
    fVar4 = unaff_s12 - (fStack0000000000000010 + unaff_s10 * fVar7);
    fVar5 = unaff_s14 - (fStack0000000000000008 + fStack0000000000000014 * fVar7);
    fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
    if ((0.0 < fStack0000000000000004) &&
       (fVar4 = (float)FUN_076dd2c0(fVar2), fStack0000000000000004 < fVar4)) {
      return 0;
    }
    if ((*(int *)(unaff_x20 + 0x28) == 1) ||
       ((fVar4 = fStack0000000000000014, fVar5 = in_stack_00000018, fVar6 = fStack000000000000001c,
        *(int *)(unaff_x20 + 0x28) != 2 && (SQRT(unaff_s11) <= fVar7)))) {
      fVar4 = -fStack0000000000000014;
      fVar5 = -in_stack_00000018;
      fVar6 = -fStack000000000000001c;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar1 != 0)) {
        fVar7 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
        fStack0000000000000008 = fStack0000000000000008 + fStack0000000000000014 * fVar7;
        fStack000000000000000c = fStack000000000000000c + in_stack_00000018 * fVar7;
        uVar3 = FUN_08596980(fStack0000000000000010 + fStack000000000000001c * fVar7,lVar1,0);
        *unaff_x19 = uVar3;
        unaff_x19[1] = fStack000000000000000c;
        unaff_x19[2] = fStack0000000000000008;
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar1 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
          uVar3 = FUN_08599d5c(fVar6,lVar1,0);
          unaff_x19[3] = uVar3;
          unaff_x19[4] = fVar5;
          unaff_x19[5] = fVar4;
          uVar3 = FUN_076dd2c0(fVar2);
          unaff_x19[6] = uVar3;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


