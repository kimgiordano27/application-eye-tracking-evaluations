/*
FUNCTION_NAME: FUN_02961500
ENTRY_POINT: 02961500
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


void FUN_02961500(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04830c33 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c33 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 0296155c to 02a6155f has its CatchHandler @ 0296158c */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 02961560 to 02a61573 has its CatchHandler @ 02961594 */
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02961584 with catch @ 02961588
                       try { // try from 02961588 to 02a615ab has its CatchHandler @ 0296133c */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296155c with catch @ 0296158c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029614ec with catch @ 02961590
                        */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02961594;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
                    /* try { // try from 02961574 to 02a61583 has its CatchHandler @ 0296133c */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
                    /* try { // try from 02961584 to 02a61587 has its CatchHandler @ 02961588 */
LAB_02961594:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02961560 with catch @ 02961594
                        */
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* try { // try from 029615ac to 02a615c3 has its CatchHandler @ 029615f8 */
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
                    /* try { // try from 029615c4 to 02a615e7 has its CatchHandler @ 0296133c */
  FUN_02fb75e0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


