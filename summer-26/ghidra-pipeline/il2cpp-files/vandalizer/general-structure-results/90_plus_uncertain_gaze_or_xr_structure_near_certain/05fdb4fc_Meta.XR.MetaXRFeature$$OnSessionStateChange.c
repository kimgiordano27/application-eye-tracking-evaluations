/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 05fdb4fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  undefined8 in_stack_00000000;
  
  fVar6 = *(float *)(unaff_x19 + 0x28);
  fVar4 = (float)FUN_06ee01e4(param_4,0);
  fVar5 = unaff_s11 + unaff_s10 + unaff_s12;
  fVar7 = fVar5;
  if (fVar5 <= fVar4 + fVar4) {
    fVar7 = fVar4 + fVar4;
  }
  fVar7 = fVar7 - unaff_s8;
  if (fVar6 < fVar7) {
    if (DAT_07a3caf2 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3caf2 = '\x01';
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar5 = fVar7 * *(float *)(lVar2 + 0x1c);
    param_3 = fVar7 * *(float *)(lVar2 + 0x20);
    uVar1 = FUN_05fdd420(fVar7 * *(float *)(lVar2 + 0x18),fVar5,param_3);
    if ((uVar1 & 1) != 0) {
      fVar7 = in_stack_00000000._4_4_ - *(float *)(unaff_x19 + 0x28);
      fVar5 = 0.0;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
    }
  }
  if (ABS(fVar7) <= fVar6) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_06ee0420(unaff_s8 + fVar7,*(long *)(unaff_x19 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (lVar2 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
      fVar4 = (float)FUN_06e6a5c4(lVar2,0);
      if (DAT_07a3caf2 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3caf2 = '\x01';
      }
      lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
      FUN_06e6a69c(fVar4 + fVar7 * *(float *)(lVar3 + 0x18) * 0.5,
                   fVar5 + fVar7 * *(float *)(lVar3 + 0x1c) * 0.5,
                   param_3 + fVar7 * *(float *)(lVar3 + 0x20) * 0.5,lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


