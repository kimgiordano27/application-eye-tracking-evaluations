/*
FUNCTION_NAME: RoomServerPanel.<TryJoinSessionAsync>d__25$$MoveNext
ENTRY_POINT: 01d10a50
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d10b58) */

void RoomServerPanel_<TryJoinSessionAsync>d__25__MoveNext(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x21;
  long lVar5;
  char cStack000000000000000c;
  
  uVar1 = FUN_0277b678();
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar1,&stack0x0000000c,0);
  if (unaff_x21 != (long *)0x0) {
    (**(code **)(*unaff_x21 + 0x168))();
  }
  lVar2 = *unaff_x20;
  lVar5 = *(long *)PTR_DAT_03cc9c48;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_01d10b00;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar2 = FUN_01a472ec();
LAB_01d10b00:
  lVar2 = thunk_FUN_01a41d84(*(undefined8 *)(lVar2 + 8),lVar5);
  (**(code **)(lVar2 + 8))();
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
  }
  return;
}


