/*
FUNCTION_NAME: FUN_03a3d9ec
ENTRY_POINT: 03a3d9ec
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


void FUN_03a3d9ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 03a3d9f8 to 03b3d9ff has its CatchHandler @ 03a3e434 */
  if ((DAT_04838c25 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 03a3da10 to 03b3da13 has its CatchHandler @ 03a3e4d4 */
    DAT_04838c25 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03a3da88 to 03b3da8b has its CatchHandler @ 03a3e4b4 */
    FUN_01f08a3c();
  }
                    /* try { // try from 03a3da20 to 03b3da2b has its CatchHandler @ 03a3e4d0 */
  lVar2 = *plVar5;
                    /* try { // try from 03a3da2c to 03b3da37 has its CatchHandler @ 03a3e4c8 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 03a3da3c to 03b3da43 has its CatchHandler @ 03a3e42c */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                    /* try { // try from 03a3da68 to 03b3da73 has its CatchHandler @ 03a3e4b8 */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03a3da74;
      }
                    /* try { // try from 03a3da4c to 03b3da4f has its CatchHandler @ 03a3e4c4 */
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 03a3da5c to 03b3da67 has its CatchHandler @ 03a3e4bc */
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03a3da74:
                    /* try { // try from 03a3da78 to 03b3da7f has its CatchHandler @ 03a3e428 */
                    /* WARNING: Could not recover jumptable at 0x03a3da84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


