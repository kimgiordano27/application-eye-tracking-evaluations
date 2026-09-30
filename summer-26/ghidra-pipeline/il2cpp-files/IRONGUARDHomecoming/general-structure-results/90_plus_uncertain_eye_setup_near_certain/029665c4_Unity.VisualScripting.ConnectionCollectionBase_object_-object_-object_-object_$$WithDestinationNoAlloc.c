/*
FUNCTION_NAME: Unity.VisualScripting.ConnectionCollectionBase<object,-object,-object,-object>$$WithDestinationNoAlloc
ENTRY_POINT: 029665c4
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


void Unity_VisualScripting_ConnectionCollectionBase<object,_object,_object,_object>__WithDestinationNoAlloc
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04830c57 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c57 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 0296664c to 02a6665b has its CatchHandler @ 02966408 */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02966658;
        }
        uVar3 = uVar3 - 1;
                    /* try { // try from 02966634 to 02a66637 has its CatchHandler @ 02966664 */
        piVar4 = piVar4 + 4;
                    /* try { // try from 02966638 to 02a6664b has its CatchHandler @ 0296666c */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02966658:
                    /* try { // try from 0296665c to 02a6665f has its CatchHandler @ 02966660 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296665c with catch @ 02966660
                       try { // try from 02966660 to 02a66683 has its CatchHandler @ 02966408 */
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02966634 with catch @ 02966664
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029665c0 with catch @ 02966668
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02966638 with catch @ 0296666c
                        */
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
                    /* try { // try from 02966684 to 02a6669b has its CatchHandler @ 029666d0 */
  FUN_02fb683c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


