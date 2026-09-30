/*
FUNCTION_NAME: RoomServerPanel$$TryJoinSessionAsync
ENTRY_POINT: 01d0fb14
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


/* WARNING: Removing unreachable block (ram,0x01d0fc38) */

void RoomServerPanel__TryJoinSessionAsync(long param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  long *unaff_x21;
  long *unaff_x22;
  long lVar5;
  char cStack000000000000000c;
  
  uVar4 = *(undefined8 *)PTR_DAT_03cc9c30;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_0277b678(uVar4,0);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000000c,0);
  if (unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x168))();
  }
  lVar1 = *unaff_x21;
  lVar5 = *(long *)PTR_DAT_03cc9c48;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *(long *)(lVar5 + 0x20)) {
        lVar1 = lVar1 + (long)(int)(*piVar3 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
        goto LAB_01d0fbdc;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  lVar1 = FUN_01a472ec();
LAB_01d0fbdc:
  lVar1 = thunk_FUN_01a41d84(*(undefined8 *)(lVar1 + 8),lVar5);
  (**(code **)(lVar1 + 8))();
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return;
}


