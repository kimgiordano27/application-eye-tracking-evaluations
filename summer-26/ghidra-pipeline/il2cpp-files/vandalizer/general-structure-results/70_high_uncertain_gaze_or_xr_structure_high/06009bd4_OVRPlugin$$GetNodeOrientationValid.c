/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 06009bd4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetNodeOrientationValid
                (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
                undefined1 param_5 [16],undefined1 param_6 [16])

{
  float *pfVar1;
  long unaff_x19;
  long *unaff_x20;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined4 in_stack_00000038;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  
  fVar6 = in_stack_000000a8;
  fVar7 = fStack00000000000000a0;
  uVar4 = param_6._4_4_;
  pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar3 = param_6._0_4_;
  if (*(char *)(unaff_x19 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    uVar4 = 0;
    *(undefined1 *)(unaff_x19 + 0xa81) = 1;
    param_2 = fStack0000000000000024;
    param_3 = fStack0000000000000028;
    fVar3 = fStack000000000000002c;
  }
  fVar7 = fVar7 - fVar3;
  fVar10 = fStack00000000000000a4 - param_2;
  fVar6 = fVar6 - param_3;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    uVar4 = 0;
    param_2 = fStack0000000000000024;
    param_3 = fStack0000000000000028;
    fVar3 = fStack000000000000002c;
  }
  fVar2 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar10 * fVar10);
  if (fVar2 <= fStack0000000000000020) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      uVar4 = 0;
      DAT_07a3ca82 = '\x01';
      param_2 = fStack0000000000000024;
      param_3 = fStack0000000000000028;
      fVar3 = fStack000000000000002c;
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar7 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar6 = pfVar1[2];
  }
  else {
    fVar7 = fVar7 / fVar2;
    fVar10 = fVar10 / fVar2;
    fVar6 = fVar6 / fVar2;
  }
  if (ABS(fVar5 * fVar6 + fVar8 * fVar7 + fVar9 * fVar10) <= DAT_014ba8ec) {
    FUN_060193dc(CONCAT44(uVar4,fVar3),param_2,param_3,in_stack_00000010._4_4_,
                 uStack0000000000000018,uStack000000000000001c,&stack0x00000030,0);
  }
  else {
    if (*(char *)(unaff_x19 + 0xa81) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      *(undefined1 *)(unaff_x19 + 0xa81) = 1;
    }
    fVar6 = in_stack_000000b8;
    fVar7 = fStack00000000000000b0;
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fStack00000000000000b4 * fStack00000000000000b4);
    if (fVar6 <= fStack0000000000000020) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      in_stack_00000030 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    }
    else {
      in_stack_00000030 = fVar7 / fVar6;
    }
  }
  return in_stack_00000030;
}


