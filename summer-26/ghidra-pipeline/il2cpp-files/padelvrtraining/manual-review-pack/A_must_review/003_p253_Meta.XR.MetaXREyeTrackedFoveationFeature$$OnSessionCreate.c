/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 07442e64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 130
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  puVar2 = PTR_DAT_091a2ee8;
  puVar1 = PTR_DAT_091a0f88;
  if ((param_4 & 1) == 0) {
    fVar5 = (float)FUN_08abdd04();
    if (DAT_09836325 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_09836325 = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar10 = *(float *)(lVar3 + 0x18);
    fVar8 = *(float *)(lVar3 + 0x1c);
    fVar9 = *(float *)(lVar3 + 0x20);
    if (DAT_09837382 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a2ee8);
      DAT_09837382 = '\x01';
    }
    fVar6 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
    if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar6) {
      fVar7 = param_3 * fVar9 + fVar5 * fVar10 + param_2 * fVar8;
      fVar5 = fVar5 - (fVar10 * fVar7) / fVar6;
      param_2 = param_2 - (fVar8 * fVar7) / fVar6;
      param_3 = param_3 - (fVar9 * fVar7) / fVar6;
    }
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar8 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    if (fVar8 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      unaff_s11 = *pfVar4;
      unaff_s15 = pfVar4[1];
      unaff_s14 = pfVar4[2];
    }
    else {
      unaff_s11 = fVar5 / fVar8;
      unaff_s15 = param_2 / fVar8;
      unaff_s14 = param_3 / fVar8;
    }
  }
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar9 = *(float *)(lVar3 + 0x18);
  fVar5 = *(float *)(lVar3 + 0x1c);
  fVar8 = *(float *)(lVar3 + 0x20);
  if (DAT_09837382 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_09837382 = '\x01';
  }
  fVar6 = fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5;
  fVar10 = unaff_s9;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar6) {
    fVar10 = unaff_s13 * fVar8 + in_stack_00000058._4_4_ * fVar9 + unaff_s9 * fVar5;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (fVar9 * fVar10) / fVar6;
    unaff_s13 = unaff_s13 - (fVar8 * fVar10) / fVar6;
    fVar10 = unaff_s9 - (fVar5 * fVar10) / fVar6;
  }
  fVar8 = unaff_s14 * unaff_s14;
  fVar5 = fVar8 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar5) {
    fVar9 = unaff_s14 * unaff_s13 + unaff_s11 * in_stack_00000058._4_4_ + unaff_s15 * fVar10;
    fVar8 = (unaff_s11 * fVar9) / fVar5;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar8;
    fVar10 = fVar10 - (unaff_s15 * fVar9) / fVar5;
    unaff_s13 = unaff_s13 - (unaff_s14 * fVar9) / fVar5;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * in_stack_00000058._4_4_ + fStack0000000000000008 * fVar10 <= 0.0) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    in_stack_00000058._4_4_ = **(float **)(*(long *)puVar1 + 0xb8);
  }
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar9 = *(float *)(lVar3 + 0x18);
  fVar10 = *(float *)(lVar3 + 0x1c);
  fVar6 = *(float *)(lVar3 + 0x20);
  fVar5 = (float)FUN_08abdd04();
  if (DAT_09837382 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_09837382 = '\x01';
  }
  fVar7 = fVar8 * fVar8 + fVar5 * fVar5 + fStack000000000000000c * fStack000000000000000c;
  fVar9 = unaff_s9 * fVar9;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar7) {
    fVar9 = fVar9 - (fVar5 * (unaff_s9 * fVar6 * fVar8 +
                             fVar9 * fVar5 + unaff_s9 * fVar10 * fStack000000000000000c)) / fVar7;
  }
  return in_stack_00000058._4_4_ + fVar9;
}


