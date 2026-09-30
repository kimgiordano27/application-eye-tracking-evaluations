/*
FUNCTION_NAME: Meta.XR.MetaXRSubsampledLayout$$.ctor
ENTRY_POINT: 052eda44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSubsampledLayout___ctor(undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  undefined8 uVar4;
  float unaff_s8;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000030;
  
  if (*(char *)(unaff_x19 + 0x11a) == '\0') {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(unaff_x19 + 0x5c);
  }
  fVar7 = *(float *)(unaff_x19 + 0x58);
  uVar1 = FUN_052ed5f0();
  if (((uVar1 & 1) == 0) || (*(char *)(unaff_x19 + 0x48) == '\0')) {
    param_2 = *(float *)(unaff_x19 + 0x54);
  }
  else {
    FUN_052f034c();
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052edc38;
    fVar3 = param_2;
    FUN_060ffbe4(*(long *)(unaff_x19 + 0x30),0);
    param_2 = param_2 - fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar5 = *(float *)(unaff_x19 + 0x28);
    fVar3 = (float)FUN_0616479c(*(long *)(unaff_x19 + 0x20),0);
    param_2 = fVar7 + fVar6 + param_2;
    fVar6 = param_2;
    if (param_2 <= fVar3 + fVar3) {
      fVar6 = fVar3 + fVar3;
    }
    fVar6 = fVar6 - unaff_s8;
    if (fVar5 < fVar6) {
      if (DAT_06bb42c4 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c4 = '\x01';
      }
      lVar2 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
      param_3 = fVar6 * *(float *)(lVar2 + 0x20);
      param_2 = fVar6 * *(float *)(lVar2 + 0x1c);
      uVar1 = FUN_052ef908(fVar6 * *(float *)(lVar2 + 0x18),param_2,param_3);
      if ((uVar1 & 1) != 0) {
        in_stack_00000030._4_4_ = in_stack_00000030._4_4_ - *(float *)(unaff_x19 + 0x28);
        param_2 = 0.0;
        fVar6 = 0.0;
        if (0.0 <= in_stack_00000030._4_4_) {
          fVar6 = in_stack_00000030._4_4_;
        }
      }
    }
    if (ABS(fVar6) <= fVar5) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_061649d8(unaff_s8 + fVar6,*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_060ed7ac(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        fVar7 = (float)FUN_060ffbe4(lVar2,0);
        if (DAT_06bb42c4 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c4 = '\x01';
        }
        uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x18);
        param_2 = param_2 + (float)((ulong)uVar4 >> 0x20) * fVar6 * 0.5;
        FUN_060ffcc0(CONCAT44(param_2,fVar7 + (float)uVar4 * fVar6 * 0.5),param_2,
                     param_3 + fVar6 * *(float *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x20
                                                 ) * 0.5,lVar2,0);
        return;
      }
    }
  }
LAB_052edc38:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


