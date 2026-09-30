/*
FUNCTION_NAME: FUN_03a3d948
ENTRY_POINT: 03a3d948
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


void FUN_03a3d948(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04838c24 & 1) == 0) {
                    /* try { // try from 03a3d960 to 03b3d963 has its CatchHandler @ 03a3e410 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 03a3d970 to 03b3d973 has its CatchHandler @ 03a3e4ec */
    DAT_04838c24 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03a3d9e8 to 03b3d9f3 has its CatchHandler @ 03a3e4dc */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
                    /* try { // try from 03a3d984 to 03b3d987 has its CatchHandler @ 03a3e4e8 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 03a3d990 to 03b3d9b7 has its CatchHandler @ 03a3e514 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_03a3d9d4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 03a3d9b8 to 03b3d9d3 has its CatchHandler @ 03a3e60c */
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,1);
LAB_03a3d9d4:
                    /* try { // try from 03a3d9e0 to 03b3d9e3 has its CatchHandler @ 03a3e4e0 */
                    /* WARNING: Could not recover jumptable at 0x03a3d9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


