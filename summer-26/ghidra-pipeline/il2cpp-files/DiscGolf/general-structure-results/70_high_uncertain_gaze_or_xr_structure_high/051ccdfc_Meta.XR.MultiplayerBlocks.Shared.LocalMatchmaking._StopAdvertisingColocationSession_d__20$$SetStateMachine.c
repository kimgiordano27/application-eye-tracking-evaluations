/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$SetStateMachine
ENTRY_POINT: 051ccdfc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__SetStateMachine
               (void)

{
  undefined8 uVar1;
  long lVar2;
  long in_x4;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  
  if (in_x4 == 0) {
    unaff_x20 = (long *)FUN_048de63c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8));
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) ==
      0) {
    FUN_02dcfd18();
  }
  uVar1 = thunk_FUN_02dd3144();
  lVar2 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
        goto LAB_051ccea8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar2 = FUN_02dd004c(unaff_x20,lVar2,0);
LAB_051ccea8:
  FUN_04b5fe98(uVar1,unaff_x20,*(undefined8 *)(lVar2 + 8),
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_051cd6f0();
  return;
}


