/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 05fdac08
PROGRAM: vandalizer-libil2cpp.so
SCORE: 127
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float unaff_s8;
  undefined4 uVar6;
  
  fVar3 = param_2;
  FUN_05fdaa30();
  fVar5 = param_3;
  lVar1 = FUN_06e5502c();
  if (lVar1 != 0) {
    uVar6 = 0;
    uVar4 = 0;
    if (ABS(param_3) != 1.0) {
      uVar6 = 0x7f800000;
    }
    uVar2 = FUN_06e6a5c4(lVar1,0);
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)unaff_x19 = uVar2;
    *(float *)((long)unaff_x19 + 4) = fVar3;
    uVar2 = uVar4;
    if (ABS(unaff_s8) != 1.0) {
      uVar2 = 0x7f800000;
    }
    if (ABS(param_2) != 1.0) {
      uVar4 = 0x7f800000;
    }
    unaff_x19[2] = 0;
    *(float *)(unaff_x19 + 1) = fVar5;
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar2;
    *(undefined4 *)(unaff_x19 + 2) = uVar4;
    *(undefined4 *)((long)unaff_x19 + 0x14) = uVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


