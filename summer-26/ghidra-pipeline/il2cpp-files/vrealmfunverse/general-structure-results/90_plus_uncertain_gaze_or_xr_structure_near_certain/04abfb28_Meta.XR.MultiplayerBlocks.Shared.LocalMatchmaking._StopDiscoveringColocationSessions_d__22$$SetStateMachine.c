/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$SetStateMachine
ENTRY_POINT: 04abfb28
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__SetStateMachine
               (undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  int in_w8;
  int *unaff_x19;
  undefined8 uVar4;
  int iStack000000000000000c;
  
  iStack000000000000000c = in_w8 + -1;
  if (param_2 == 0) {
    uVar1 = in_w8 - 2;
    if (1 < in_w8) {
      lVar2 = *(long *)(unaff_x19 + 6);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (ulong)uVar1 * 0x10;
          uVar4 = *(undefined8 *)(lVar2 + 0x20);
          *(undefined8 *)(unaff_x19 + 4) = *(undefined8 *)(lVar2 + 0x28);
          *(undefined8 *)(unaff_x19 + 2) = uVar4;
          thunk_FUN_02bb0e9c(unaff_x19 + 2,0);
          lVar2 = *(long *)(unaff_x19 + 6);
          if (lVar2 == 0) goto LAB_04abfc2c;
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            lVar2 = lVar2 + (ulong)uVar1 * 0x10;
            puVar3 = (undefined8 *)(lVar2 + 0x20);
            *puVar3 = 0;
            *(undefined8 *)(lVar2 + 0x28) = 0;
            thunk_FUN_02bb0e9c(puVar3,0);
            goto LAB_04abfbd0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
LAB_04abfc2c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    unaff_x19[4] = 0;
    unaff_x19[5] = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x19 + 6);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    FUN_031135d0(uVar4,&stack0x0000000c,param_2 + -1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 200))
    ;
  }
LAB_04abfbd0:
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


