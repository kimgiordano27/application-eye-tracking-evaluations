/*
FUNCTION_NAME: OVRPlugin$$GetMarkerTrackingSupported
ENTRY_POINT: 05331cd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetMarkerTrackingSupported(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 0xc) * 0x10 + 0x138);
        goto LAB_05331d1c;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05331d1c:
  (*(code *)*puVar1)();
  FUN_052c252c(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
  FUN_052c252c(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar3 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar4 = *(float *)(unaff_x19 + 0x1c) / fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 0.5;
  }
  FUN_052c2534(fVar4,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


