/*
FUNCTION_NAME: RoomServerPanel.<TryJoinFriendSession>d__24$$SetStateMachine
ENTRY_POINT: 01d109f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d10b58) */

void RoomServerPanel_<TryJoinFriendSession>d__24__SetStateMachine(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x21;
  long lVar9;
  undefined1 in_stack_00000008;
  char cStack000000000000000c;
  
  thunk_FUN_01a58e78();
  puVar3 = *(undefined8 **)(*unaff_x19 + 0xb8);
  plVar8 = (long *)*puVar3;
  if (plVar8 != (long *)0x0) {
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      puVar3 = *(undefined8 **)(*unaff_x19 + 0xb8);
    }
    if (1 < *(byte *)(puVar3 + 1)) {
      uVar7 = *(undefined8 *)PTR_DAT_03cc9c30;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      cStack000000000000000c = '\0';
      FUN_027e0bd8(uVar7,&stack0x0000000c,0);
      in_stack_00000008 = 0;
      if (unaff_x21 == (long *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*unaff_x21 + 0x168))();
      }
      lVar4 = *plVar8;
      lVar9 = *(long *)PTR_DAT_03cc9c48;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      lVar1 = *(long *)PTR_DAT_03cc4bb8;
      if (lVar2 != 0) {
        lVar1 = lVar2;
      }
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
            lVar2 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
            goto LAB_01d10b00;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar2 = FUN_01a472ec(plVar8);
LAB_01d10b00:
      lVar2 = thunk_FUN_01a41d84(*(undefined8 *)(lVar2 + 8),lVar9);
      (**(code **)(lVar2 + 8))(plVar8,2,0,&stack0x00000008,lVar1,lVar2);
      if (cStack000000000000000c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
      }
    }
  }
  return;
}


