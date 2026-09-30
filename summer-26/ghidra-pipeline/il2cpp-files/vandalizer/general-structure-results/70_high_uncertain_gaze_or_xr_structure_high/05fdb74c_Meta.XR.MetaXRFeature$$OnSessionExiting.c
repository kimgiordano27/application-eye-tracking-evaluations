/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 05fdb74c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionExiting(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  ulong uVar9;
  float in_s3;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong uVar8;
  
  fVar3 = unaff_s9 - unaff_s12;
  fVar6 = unaff_s10 - unaff_s13;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - unaff_s11;
  if (**(float **)(param_1 + 0xb8) <= in_s3) {
    fVar10 = in_stack_00000008._4_4_ * unaff_s14 + fVar3 * unaff_s8 + fVar6 * unaff_s15;
    fVar3 = fVar3 - (unaff_s8 * fVar10) / in_s3;
    fVar6 = fVar6 - (unaff_s15 * fVar10) / in_s3;
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (unaff_s14 * fVar10) / in_s3;
  }
  uVar9 = (ulong)(uint)in_stack_00000008._4_4_;
  uVar8 = (ulong)(uint)fVar6;
  FUN_05fdba68(fVar3,uVar8,uVar9);
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar5 = FUN_06e6af04(*(long *)(unaff_x19 + 0x38),0);
    if (*(char *)(unaff_x20 + 0xaf2) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
    }
    lVar1 = *(long *)(*unaff_x21 + 0xb8);
    fVar10 = *(float *)(lVar1 + 0x18);
    fVar6 = *(float *)(lVar1 + 0x1c);
    fVar3 = *(float *)(lVar1 + 0x20);
    if (*(char *)(unaff_x22 + 0x545) == '\0') {
      FUN_031f20f4(PTR_DAT_075b9420);
      *(undefined1 *)(unaff_x22 + 0x545) = 1;
    }
    fVar4 = fVar3 * fVar3 + fVar10 * fVar10 + fVar6 * fVar6;
    if (**(float **)(*unaff_x23 + 0xb8) <= fVar4) {
      fVar7 = (float)uVar9 * fVar3 + (float)uVar5 * fVar10 + (float)uVar8 * fVar6;
      uVar5 = (ulong)(uint)((float)uVar5 - (fVar10 * fVar7) / fVar4);
      uVar8 = (ulong)(uint)((float)uVar8 - (fVar6 * fVar7) / fVar4);
      uVar9 = (ulong)(uint)((float)uVar9 - (fVar3 * fVar7) / fVar4);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0);
      if (*(char *)(unaff_x20 + 0xaf2) == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
      }
      lVar2 = *(long *)(*unaff_x21 + 0xb8);
      FUN_06e461b0(uVar5,uVar8,uVar9,*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                   *(undefined4 *)(lVar2 + 0x20),0);
      if (lVar1 != 0) {
        FUN_06e6aafc(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


