/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 07a36a1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetCurrentTrackingTransformPose
          (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  ulong *unaff_x19;
  float *unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 unaff_s8;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  
  if (DAT_098854eb == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854eb = '\x01';
  }
  puVar1 = PTR_DAT_09285d60;
  lVar5 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
  fVar7 = (float)FUN_089b9694(unaff_s8,param_2,param_3,param_4,*(undefined4 *)(lVar5 + 0x18),
                              *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),0);
  fVar12 = param_3;
  fVar10 = param_2;
  lVar5 = FUN_089c7534();
  if (lVar5 != 0) {
    fVar8 = (float)FUN_089db960(lVar5,0);
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar9 = SQRT(param_3 * param_3 + fVar7 * fVar7 + param_2 * param_2);
    if (fVar9 <= DAT_01aecf88) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar7 = *pfVar6;
      param_2 = pfVar6[1];
      param_3 = pfVar6[2];
    }
    else {
      fVar7 = fVar7 / fVar9;
      param_2 = param_2 / fVar9;
      param_3 = param_3 / fVar9;
    }
    puVar1 = PTR_DAT_092b7110;
    fVar9 = *unaff_x22;
    fVar11 = unaff_x22[1];
    fVar13 = unaff_x22[2];
    fVar14 = unaff_x22[3];
    fVar21 = fVar7 * fVar9;
    fVar22 = param_2 * fVar11;
    fVar15 = unaff_x22[4];
    fVar16 = unaff_x22[5];
    fVar23 = param_3 * fVar13;
    fVar19 = param_3 * fVar16 + fVar7 * fVar14 + param_2 * fVar15;
    if (DAT_09885627 == '\0') {
      FUN_04077588(PTR_DAT_09285d58);
      fVar9 = *unaff_x22;
      fVar11 = unaff_x22[1];
      fVar13 = unaff_x22[2];
      fVar14 = unaff_x22[3];
      DAT_09885627 = '\x01';
      fVar15 = unaff_x22[4];
      fVar16 = unaff_x22[5];
    }
    fVar18 = ABS(fVar19);
    if (ABS(fVar19) <= 0.0) {
      fVar18 = 0.0;
    }
    uStack000000000000009c = 0;
    uStack0000000000000018 = 0;
    in_stack_00000010 = 0;
    fVar20 = **(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) * 8.0;
    fVar17 = fVar18 * DAT_01aecc74;
    if (fVar18 * DAT_01aecc74 <= fVar20) {
      fVar17 = fVar20;
    }
    fVar18 = 0.0;
    if (fVar17 <= ABS(0.0 - fVar19)) {
      fVar18 = ((fVar12 * param_3 + fVar8 * fVar7 + fVar10 * param_2) - (fVar23 + fVar21 + fVar22))
               / fVar19;
    }
    FUN_07a36ec8(fVar9 + fVar14 * fVar18,fVar11 + fVar15 * fVar18,fVar13 + fVar18 * fVar16);
    uVar4 = uStack0000000000000018;
    uVar2 = in_stack_00000010;
    uVar3 = in_stack_00000010._4_4_;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_089d99f0(uVar2 & 0xffffffff,uVar3,uVar4,in_stack_00000098,in_stack_00000008._4_4_,
                 &stack0x00000030,0);
    FUN_07a36d18(&stack0x00000010);
    unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    *unaff_x19 = in_stack_00000010;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


