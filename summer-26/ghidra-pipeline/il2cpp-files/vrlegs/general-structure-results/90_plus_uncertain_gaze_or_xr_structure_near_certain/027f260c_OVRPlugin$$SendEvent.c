/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 027f260c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__SendEvent(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  long unaff_x21;
  int in_stack_00000008;
  
  if ((*(byte *)(unaff_x21 + 0x157) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd9c70);
    *(undefined1 *)(unaff_x21 + 0x157) = 1;
  }
  in_stack_00000008 = 0;
  uVar3 = FUN_027e971c(param_1);
  puVar2 = PTR_DAT_03cd9c70;
  if ((uVar3 & 1) == 0) {
    bVar5 = false;
    if (param_2 != 0) {
      lVar4 = *(long *)PTR_DAT_03cd9c70;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar2;
      }
      iVar1 = **(int **)(lVar4 + 0xb8);
      in_stack_00000008 = 0;
      while( true ) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        bVar5 = in_stack_00000008 < iVar1;
        if (iVar1 <= in_stack_00000008) break;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d90e4(&stack0x00000008,0xffffffff,0);
        uVar3 = FUN_027e971c(param_1);
        if ((uVar3 & 1) != 0) {
          return bVar5;
        }
        lVar4 = *(long *)puVar2;
      }
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}


