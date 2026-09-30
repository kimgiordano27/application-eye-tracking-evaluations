/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 060a0c38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float Meta_XR_MetaXRFeature__OnSessionBegin
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  FUN_03642964(*(undefined8 *)(param_4 + 0xdc0));
  *(undefined1 *)(unaff_x24 + 0x6b5) = 1;
  fStack000000000000005c = **(float **)(*unaff_x22 + 0xb8);
  if (*(char *)(unaff_x23 + 0x6b6) == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    *(undefined1 *)(unaff_x23 + 0x6b6) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar5 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c);
  fVar4 = *(float *)(lVar1 + 0x20);
  fVar2 = (float)FUN_07250fcc();
  if (*(char *)(unaff_x21 + 0xc9c) == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    *(undefined1 *)(unaff_x21 + 0xc9c) = 1;
  }
  fVar3 = param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2;
  fVar5 = in_stack_00000058 * fVar5;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar3) {
    fVar5 = fVar5 - (fVar2 * (in_stack_00000058 * fVar4 * param_3 +
                             fVar5 * fVar2 + in_stack_00000058 * fVar6 * param_2)) / fVar3;
  }
  return fStack000000000000005c + fVar5;
}


