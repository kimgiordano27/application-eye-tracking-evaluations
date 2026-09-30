/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 0692bf2c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000048;
  
  if (DAT_08974d89 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d89 = '\x01';
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
  fVar10 = *(float *)(lVar6 + 0x18);
  fVar12 = *(float *)(lVar6 + 0x1c);
  fVar11 = *(float *)(lVar6 + 0x20);
  if (DAT_08975819 == '\0') {
    FUN_03a8a718(PTR_DAT_08487160);
    DAT_08975819 = '\x01';
  }
  param_1 = unaff_s9 - param_1;
  param_2 = unaff_s8 - param_2;
  in_stack_00000048._4_4_ = in_stack_00000048._4_4_ - param_3;
  fVar8 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
  if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar8) {
    fVar9 = in_stack_00000048._4_4_ * fVar11 + param_1 * fVar10 + param_2 * fVar12;
    param_1 = param_1 - (fVar10 * fVar9) / fVar8;
    param_2 = param_2 - (fVar12 * fVar9) / fVar8;
    in_stack_00000048._4_4_ = in_stack_00000048._4_4_ - (fVar11 * fVar9) / fVar8;
  }
  if (DAT_08974d8c == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d8c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (SQRT(in_stack_00000048._4_4_ * in_stack_00000048._4_4_ + param_1 * param_1 + param_2 * param_2
          ) < *(float *)(unaff_x19 + 0x40)) {
    *(undefined4 *)(unaff_x19 + 0x54) = 1;
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0692c108;
    uVar4 = FUN_04561a18(*(long *)(unaff_x19 + 0x90),*(undefined8 *)PTR_DAT_084b5a08);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
    thunk_FUN_03afed3c();
  }
  puVar1 = PTR_DAT_084b5a28;
  lVar6 = *(long *)PTR_DAT_084b5a28;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar6 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar6 + 0xb8);
  lVar7 = puVar5[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar4 = *puVar5;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5a00);
    FUN_04962b78(lVar7,uVar4,*(undefined8 *)PTR_DAT_084b5a20,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar3 = lVar7;
    thunk_FUN_03afed3c(plVar3,lVar7);
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
        fVar11 = *(float *)(*(long *)(unaff_x19 + 0x70) + 0x78);
        fVar10 = -fVar11;
        if (0.0 <= fVar11) {
          fVar10 = fVar11;
        }
        if (fVar10 < *(float *)(unaff_x19 + 0x50)) {
          FUN_0692c178();
          return;
        }
      }
      else if (*(int *)(unaff_x19 + 0x54) == 1) {
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0692c108;
        fVar11 = *(float *)(*(long *)(unaff_x19 + 0x70) + 0x78);
        fVar10 = -fVar11;
        if (0.0 <= fVar11) {
          fVar10 = fVar11;
        }
        if (fVar10 < *(float *)(unaff_x19 + 0x50)) {
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


