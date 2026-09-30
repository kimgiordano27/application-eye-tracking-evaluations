/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 05fdb804
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionDestroy(void)

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
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x22 + 0x545) = 1;
  fVar3 = unaff_s11 * unaff_s11 + unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12;
  if (**(float **)(*unaff_x23 + 0xb8) <= fVar3) {
    fVar4 = (float)unaff_d10 * unaff_s11 + (float)unaff_d8 * unaff_s13 + (float)unaff_d9 * unaff_s12
    ;
    unaff_d8 = (ulong)(uint)((float)unaff_d8 - (unaff_s13 * fVar4) / fVar3);
    unaff_d9 = (ulong)(uint)((float)unaff_d9 - (unaff_s12 * fVar4) / fVar3);
    unaff_d10 = (ulong)(uint)((float)unaff_d10 - (unaff_s11 * fVar4) / fVar3);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0);
    if (*(char *)(unaff_x20 + 0xaf2) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
    }
    lVar2 = *(long *)(*unaff_x21 + 0xb8);
    FUN_06e461b0(unaff_d8,unaff_d9,unaff_d10,*(undefined4 *)(lVar2 + 0x18),
                 *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),0);
    if (lVar1 != 0) {
      FUN_06e6aafc(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


