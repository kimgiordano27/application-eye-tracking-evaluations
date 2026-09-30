/*
FUNCTION_NAME: OVRPlugin$$GetSpaceMarkerPayload
ENTRY_POINT: 05331c00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetSpaceMarkerPayload(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *unaff_x20;
  plVar5 = *(long **)(unaff_x21 + 0x8e8);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *plVar5) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_05331c54;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05331c54:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *plVar5) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_05331cb8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05331cb8:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *plVar5) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_05331d1c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05331d1c:
  (*(code *)*puVar1)();
  FUN_052c252c(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
  FUN_052c252c(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar6 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar7 = *(float *)(unaff_x19 + 0x1c) / fVar6;
  if (fVar6 <= 0.0) {
    fVar7 = 0.5;
  }
  FUN_052c2534(fVar7,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


