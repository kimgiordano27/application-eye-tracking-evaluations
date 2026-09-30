/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingSupported
ENTRY_POINT: 060e0254
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__get_faceTrackingSupported(void)

{
  float fVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint in_w8;
  long lVar4;
  undefined2 in_w9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  float fVar7;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 060e025c to 061e025f has its CatchHandler @ 060e026c */
  *(undefined2 *)(unaff_x19 + 0x22) = in_w9;
                    /* try { // try from 060e0264 to 061e0267 has its CatchHandler @ 060e0268 */
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
                    /* catch() { ... } // from try @ 060e0264 with catch @ 060e0268 */
  *(byte *)(unaff_x19 + 0x20) = (byte)(in_w8 >> 5) & 1;
                    /* catch() { ... } // from try @ 060e025c with catch @ 060e026c */
  *(byte *)(unaff_x19 + 0x21) = (byte)(in_w8 >> 4) & 1;
  puVar2 = PTR_DAT_07a208e0;
                    /* catch() { ... } // from try @ 060e0218 with catch @ 060e0270 */
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a208e0) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_060e02cc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
                    /* try { // try from 060e02b8 to 061e02cb has its CatchHandler @ 060e0528 */
LAB_060e02cc:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_060e0330;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060e0330:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_060e0394;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060e0394:
  (*(code *)*puVar3)();
  OVRColocationSession__StartDiscoveryAsync(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
  OVRColocationSession__StartDiscoveryAsync(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar7 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar1 = *(float *)(unaff_x19 + 0x1c) / fVar7;
  if (fVar7 <= 0.0) {
    fVar1 = 0.5;
  }
  FUN_0606b508(fVar1,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


