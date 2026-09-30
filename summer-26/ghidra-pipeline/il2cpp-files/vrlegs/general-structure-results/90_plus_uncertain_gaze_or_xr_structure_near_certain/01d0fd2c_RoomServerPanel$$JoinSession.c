/*
FUNCTION_NAME: RoomServerPanel$$JoinSession
ENTRY_POINT: 01d0fd2c
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


/* WARNING: Removing unreachable block (ram,0x01d0fec8) */

void RoomServerPanel__JoinSession(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  long *plVar7;
  long *unaff_x22;
  long lVar8;
  char cStack000000000000000c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cc9c30);
  FUN_01ab69ac(PTR_DAT_03cc0af8);
  FUN_01ab69ac(PTR_DAT_03cbe5e8);
  FUN_01ab69ac(PTR_DAT_03cc4bb8);
  *(undefined1 *)(unaff_x21 + 0xd01) = 1;
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *unaff_x20;
  }
  puVar2 = PTR_DAT_03cc9c30;
  puVar1 = PTR_DAT_03cbe5e8;
  plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  if (plVar7 != (long *)0x0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_0277b678(uVar6,0);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar6,&stack0x0000000c,0);
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x168))();
    }
    lVar3 = *plVar7;
    lVar8 = *(long *)PTR_DAT_03cc9c48;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_01d0fe6c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar3 = FUN_01a472ec(plVar7);
LAB_01d0fe6c:
    lVar3 = thunk_FUN_01a41d84(*(undefined8 *)(lVar3 + 8),lVar8);
    (**(code **)(lVar3 + 8))(plVar7,0);
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
  }
  return;
}


