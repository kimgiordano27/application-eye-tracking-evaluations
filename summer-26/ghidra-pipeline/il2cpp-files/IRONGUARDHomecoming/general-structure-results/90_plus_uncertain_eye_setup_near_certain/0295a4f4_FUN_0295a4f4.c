/*
FUNCTION_NAME: FUN_0295a4f4
ENTRY_POINT: 0295a4f4
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


void FUN_0295a4f4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04830c01 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c01 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0295a538 to 02a5a53b has its CatchHandler @ 0295a568 */
    lVar2 = *plVar5;
                    /* try { // try from 0295a53c to 02a5a54f has its CatchHandler @ 0295a570 */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 0295a550 to 02a5a55f has its CatchHandler @ 0295a318 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0295a588;
        }
                    /* try { // try from 0295a560 to 02a5a563 has its CatchHandler @ 0295a564 */
        uVar3 = uVar3 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295a560 with catch @ 0295a564
                       try { // try from 0295a564 to 02a5a587 has its CatchHandler @ 0295a318 */
        piVar4 = piVar4 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295a538 with catch @ 0295a568
                        */
      } while (uVar3 != 0);
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295a4c8 with catch @ 0295a56c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295a53c with catch @ 0295a570
                        */
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0295a588:
                    /* try { // try from 0295a588 to 02a5a59f has its CatchHandler @ 0295a5d4 */
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* try { // try from 0295a5a0 to 02a5a5c3 has its CatchHandler @ 0295a318 */
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
  FUN_02fb6e04(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


