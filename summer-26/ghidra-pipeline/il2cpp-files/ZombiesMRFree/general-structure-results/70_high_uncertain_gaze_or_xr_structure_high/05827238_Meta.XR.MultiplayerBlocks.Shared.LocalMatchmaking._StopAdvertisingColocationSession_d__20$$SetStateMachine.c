/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$SetStateMachine
ENTRY_POINT: 05827238
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


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__SetStateMachine
               (long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  long *plVar4;
  
  while( true ) {
    thunk_FUN_03048534(param_1,param_2);
    plVar4 = (long *)*unaff_x20;
    uVar1 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 8;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if ((long)(int)plVar4[3] <= (long)uVar1) break;
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) ==
        0) {
      FUN_02feb2c4();
    }
    param_2 = thunk_FUN_0301080c();
    FUN_041427c8(param_2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if ((param_2 != 0) &&
       (lVar2 = thunk_FUN_03010710(param_2,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
      uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    param_1 = (long)plVar4 + unaff_x23;
    plVar4[unaff_x22 + 5] = param_2;
    unaff_x22 = uVar1;
  }
  return;
}


