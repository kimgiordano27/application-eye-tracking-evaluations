/*
FUNCTION_NAME: FUN_029672c4
ENTRY_POINT: 029672c4
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


void FUN_029672c4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04830c5d & 1) == 0) {
                    /* try { // try from 029672e4 to 02a672e7 has its CatchHandler @ 02967314 */
                    /* try { // try from 029672e8 to 02a672fb has its CatchHandler @ 0296731c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c5d = 1;
  }
                    /* try { // try from 029672fc to 02a6730b has its CatchHandler @ 029670b0 */
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
                    /* try { // try from 0296730c to 02a6730f has its CatchHandler @ 02967310 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296730c with catch @ 02967310
                       try { // try from 02967310 to 02a67333 has its CatchHandler @ 029670b0 */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029672e4 with catch @ 02967314
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02967270 with catch @ 02967318
                        */
    if (uVar3 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029672e8 with catch @ 0296731c
                        */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 0296734c to 02a6736f has its CatchHandler @ 029670b0 */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02967358;
        }
        uVar3 = uVar3 - 1;
                    /* try { // try from 02967334 to 02a6734b has its CatchHandler @ 02967380 */
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02967358:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* try { // try from 02967370 to 02a6737f has its CatchHandler @ 02967380 */
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
                    /* catch() { ... } // from try @ 02967334 with catch @ 02967380
                       catch() { ... } // from try @ 02967370 with catch @ 02967380 */
                    /* try { // try from 02967384 to 02a67387 has its CatchHandler @ 02967390 */
                    /* try { // try from 02967388 to 02a67393 has its CatchHandler @ 029670b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02967384 with catch @ 02967390
                        */
  FUN_02fb7280(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


