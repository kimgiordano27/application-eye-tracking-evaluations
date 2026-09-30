/*
FUNCTION_NAME: FUN_02969e30
ENTRY_POINT: 02969e30
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


void FUN_02969e30(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 02969e30 to 02a69e33 has its CatchHandler @ 02969e34 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02969e30 with catch @ 02969e34
                       try { // try from 02969e34 to 02a69e57 has its CatchHandler @ 02969c10 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02969e08 with catch @ 02969e38
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02969db8 with catch @ 02969e3c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02969e0c with catch @ 02969e40
                        */
  if ((DAT_04830c71 & 1) == 0) {
                    /* try { // try from 02969e58 to 02a69e6f has its CatchHandler @ 02969eb0 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c71 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 02969e70 to 02a69e9f has its CatchHandler @ 02969c10 */
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 02969eb8 to 02a69ec3 has its CatchHandler @ 02969c10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02969eb4 with catch @ 02969ec0
                        */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02969ec4;
        }
        uVar3 = uVar3 - 1;
                    /* try { // try from 02969ea0 to 02a69eaf has its CatchHandler @ 02969eb0 */
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
                    /* catch() { ... } // from try @ 02969e58 with catch @ 02969eb0
                       catch() { ... } // from try @ 02969ea0 with catch @ 02969eb0 */
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
                    /* try { // try from 02969eb4 to 02a69eb7 has its CatchHandler @ 02969ec0 */
LAB_02969ec4:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
  FUN_02fb6e04(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


