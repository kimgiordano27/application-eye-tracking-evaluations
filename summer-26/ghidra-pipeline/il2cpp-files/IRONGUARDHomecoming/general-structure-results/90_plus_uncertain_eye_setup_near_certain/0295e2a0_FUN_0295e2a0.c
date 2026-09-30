/*
FUNCTION_NAME: FUN_0295e2a0
ENTRY_POINT: 0295e2a0
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


void FUN_0295e2a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0295e2b0 to 02a5e2b3 has its CatchHandler @ 0295e2e0 */
                    /* try { // try from 0295e2b4 to 02a5e2c7 has its CatchHandler @ 0295e2e8 */
  if ((DAT_04830c1d & 1) == 0) {
                    /* try { // try from 0295e2c8 to 02a5e2d7 has its CatchHandler @ 0295e084 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c1d = 1;
  }
                    /* try { // try from 0295e2d8 to 02a5e2db has its CatchHandler @ 0295e2dc */
  plVar5 = *(long **)(param_1 + 0x38);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295e2d8 with catch @ 0295e2dc
                       try { // try from 0295e2dc to 02a5e2ff has its CatchHandler @ 0295e084 */
  if (plVar5 != (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295e2b0 with catch @ 0295e2e0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295e23c with catch @ 0295e2e4
                        */
    lVar2 = *plVar5;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295e2b4 with catch @ 0295e2e8
                        */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 0295e300 to 02a5e317 has its CatchHandler @ 0295e34c */
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0295e334;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 0295e318 to 02a5e33b has its CatchHandler @ 0295e084 */
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0295e334:
                    /* try { // try from 0295e33c to 02a5e34b has its CatchHandler @ 0295e34c */
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* catch() { ... } // from try @ 0295e300 with catch @ 0295e34c
                       catch() { ... } // from try @ 0295e33c with catch @ 0295e34c */
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
                    /* try { // try from 0295e350 to 02a5e353 has its CatchHandler @ 0295e35c */
                    /* try { // try from 0295e354 to 02a5e35f has its CatchHandler @ 0295e084 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0295e350 with catch @ 0295e35c
                        */
  FUN_02fb75e0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


