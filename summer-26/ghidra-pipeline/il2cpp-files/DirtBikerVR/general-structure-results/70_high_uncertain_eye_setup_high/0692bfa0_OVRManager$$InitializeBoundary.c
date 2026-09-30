/*
FUNCTION_NAME: OVRManager$$InitializeBoundary
ENTRY_POINT: 0692bfa0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeBoundary(long *param_1,float param_2,float param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long lVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float unaff_s10;
  float unaff_s11;
  float fVar11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000048;
  
  fVar11 = unaff_s9 - unaff_s11;
  fVar10 = unaff_s8 - unaff_s12;
  in_stack_00000048._4_4_ = in_stack_00000048._4_4_ - unaff_s13;
  fVar8 = unaff_s14 * unaff_s14 + param_2 + param_3;
  if (**(float **)(*param_1 + 0xb8) <= fVar8) {
    fVar9 = in_stack_00000048._4_4_ * unaff_s14 + fVar11 * unaff_s10 + fVar10 * unaff_s15;
    fVar11 = fVar11 - (unaff_s10 * fVar9) / fVar8;
    fVar10 = fVar10 - (unaff_s15 * fVar9) / fVar8;
    in_stack_00000048._4_4_ = in_stack_00000048._4_4_ - (unaff_s14 * fVar9) / fVar8;
  }
  if (DAT_08974d8c == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d8c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (SQRT(in_stack_00000048._4_4_ * in_stack_00000048._4_4_ + fVar11 * fVar11 + fVar10 * fVar10) <
      *(float *)(unaff_x19 + 0x40)) {
    *(undefined4 *)(unaff_x19 + 0x54) = 1;
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0692c108;
    uVar5 = FUN_04561a18(*(long *)(unaff_x19 + 0x90),*(undefined8 *)PTR_DAT_084b5a08);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar5;
    thunk_FUN_03afed3c();
  }
  puVar1 = PTR_DAT_084b5a28;
  lVar3 = *(long *)PTR_DAT_084b5a28;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar3 = *(long *)puVar1;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar5 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5a00);
    FUN_04962b78(lVar7,uVar5,*(undefined8 *)PTR_DAT_084b5a20,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar7;
    thunk_FUN_03afed3c(plVar4,lVar7);
  }
  puVar1 = PTR_DAT_084922d8;
  if (*(int *)(*(long *)PTR_DAT_084922d8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_045b08cc(lVar7,*(undefined8 *)PTR_DAT_084b5a10);
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    if (0 < *(int *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18) && ((uVar2 ^ 0xffffffff) & 1) == 0)
    {
      if (*(int *)(unaff_x19 + 0x54) == 2) {
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0692c108;
        fVar10 = *(float *)(*(long *)(unaff_x19 + 0x70) + 0x78);
        fVar8 = -fVar10;
        if (0.0 <= fVar10) {
          fVar8 = fVar10;
        }
        if (fVar8 < *(float *)(unaff_x19 + 0x50)) {
          FUN_0692c178();
          return;
        }
      }
      else if (*(int *)(unaff_x19 + 0x54) == 1) {
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0692c108;
        fVar10 = *(float *)(*(long *)(unaff_x19 + 0x70) + 0x78);
        fVar8 = -fVar10;
        if (0.0 <= fVar10) {
          fVar8 = fVar10;
        }
        if (fVar8 < *(float *)(unaff_x19 + 0x50)) {
          FUN_0692b9c8();
          return;
        }
      }
    }
    return;
  }
LAB_0692c108:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


