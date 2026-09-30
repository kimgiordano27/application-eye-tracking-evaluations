/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$MoveNext
ENTRY_POINT: 05827244
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__MoveNext
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  while( true ) {
    unaff_x23 = unaff_x23 + 8;
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if ((long)(int)unaff_x24[3] <= (long)unaff_x22) break;
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) ==
        0) {
      FUN_02feb2c4();
    }
    lVar1 = thunk_FUN_0301080c();
    FUN_041427c8(lVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03010710(lVar1,*(undefined8 *)(*unaff_x24 + 0x40)), lVar2 == 0)) {
      uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
    if (*(uint *)(unaff_x24 + 3) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    unaff_x24[unaff_x22 + 4] = lVar1;
    thunk_FUN_03048534((long)unaff_x24 + unaff_x23,lVar1);
    unaff_x24 = (long *)*unaff_x20;
    unaff_x22 = unaff_x22 + 1;
  }
  return;
}


