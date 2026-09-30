/*
FUNCTION_NAME: OVRPlugin$$GetFaceStateInternal
ENTRY_POINT: 060e0324
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetFaceStateInternal(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int in_w9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 060e0338 to 061e033b has its CatchHandler @ 060e0518 */
  (**(code **)(param_1 + (long)(in_w9 + 0xc) * 0x10 + 0x138))();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 060e0360 to 061e0367 has its CatchHandler @ 060e0510 */
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
                    /* try { // try from 060e0384 to 061e038f has its CatchHandler @ 060e050c */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_060e0394;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060e0394:
                    /* try { // try from 060e03a4 to 061e03ab has its CatchHandler @ 060e0538 */
  (*(code *)*puVar1)();
  OVRColocationSession__StartDiscoveryAsync(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
                    /* try { // try from 060e03c8 to 061e03cf has its CatchHandler @ 060e0530 */
  OVRColocationSession__StartDiscoveryAsync(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
                    /* try { // try from 060e03e0 to 061e03f7 has its CatchHandler @ 060e051c */
  fVar5 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar6 = *(float *)(unaff_x19 + 0x1c) / fVar5;
  if (fVar5 <= 0.0) {
    fVar6 = 0.5;
  }
  FUN_0606b508(fVar6,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


