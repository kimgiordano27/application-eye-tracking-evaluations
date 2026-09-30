/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopAdvertisingColocationSession
ENTRY_POINT: 05303834
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05303930) */

void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopAdvertisingColocationSession
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x20;
  char cStack000000000000000c;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x558));
  FUN_02f07e70(PTR_DAT_06d3e560);
  *(undefined1 *)(unaff_x19 + 0x29f) = 1;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x20;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_056681d8(uVar4,&stack0x0000000c,0);
  puVar1 = PTR_DAT_06d3e558;
  while( true ) {
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x20;
    }
    lVar3 = **(long **)(lVar2 + 0xb8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(lVar3 + 0x20) < 1) {
      if (cStack000000000000000c != '\0') {
        thunk_FUN_02eb9f78(uVar4,0);
      }
      return;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = **(long **)(*unaff_x20 + 0xb8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
    }
    lVar2 = FUN_0446c9e0(lVar3,*(undefined8 *)puVar1);
    if (lVar2 == 0) break;
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


