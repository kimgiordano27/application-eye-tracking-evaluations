/*
FUNCTION_NAME: FUN_0293c82c
ENTRY_POINT: 0293c82c
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


void FUN_0293c82c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04830bcf & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830bcf = 1;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 0293c880 to 02a3c883 has its CatchHandler @ 0293c894 */
    if (uVar3 != 0) {
                    /* try { // try from 0293c884 to 02a3c8ab has its CatchHandler @ 0293c63c */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0293c7f8 with catch @ 0293c88c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0293c7e4 with catch @ 0293c890
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0293c7b0 with catch @ 0293c894
                       catch(type#1 @ 042b3198) { ... } // from try @ 0293c880 with catch @ 0293c894
                        */
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0293c8c0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 0293c8ac to 02a3c8af has its CatchHandler @ 0293c8c0 */
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0293c8c0:
                    /* catch() { ... } // from try @ 0293c8ac with catch @ 0293c8c0 */
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),0);
  FUN_02fb5cc0(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40));
  return;
}


