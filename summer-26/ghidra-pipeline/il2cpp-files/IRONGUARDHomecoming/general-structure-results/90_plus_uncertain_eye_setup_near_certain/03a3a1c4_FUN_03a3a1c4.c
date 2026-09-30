/*
FUNCTION_NAME: FUN_03a3a1c4
ENTRY_POINT: 03a3a1c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03a3a1c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04838bf8 & 1) == 0) {
                    /* try { // try from 03a3a1e0 to 03b3a493 has its CatchHandler @ 03a3a1e0
                       catch() { ... } // from try @ 03a3a1e0 with catch @ 03a3a1e0
                       catch() { ... } // from try @ 03a3aaf4 with catch @ 03a3a1e0
                       catch() { ... } // from try @ 03a3ac84 with catch @ 03a3a1e0
                       catch() { ... } // from try @ 03a3ae10 with catch @ 03a3a1e0
                       catch() { ... } // from try @ 03a3aecc with catch @ 03a3a1e0
                       catch() { ... } // from try @ 03a3af74 with catch @ 03a3a1e0
                       catch() { ... } // from try @ 03a3b01c with catch @ 03a3a1e0
                       catch() { ... } // from try @ 03a3b0c0 with catch @ 03a3a1e0 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838bf8 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03a3a24c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03a3a24c:
                    /* WARNING: Could not recover jumptable at 0x03a3a25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


