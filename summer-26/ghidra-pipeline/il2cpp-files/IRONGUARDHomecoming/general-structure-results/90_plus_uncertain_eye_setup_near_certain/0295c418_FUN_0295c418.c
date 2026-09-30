/*
FUNCTION_NAME: FUN_0295c418
ENTRY_POINT: 0295c418
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


void FUN_0295c418(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0295c418 to 02a5c43b has its CatchHandler @ 0295c190 */
  if ((DAT_04830c0f & 1) == 0) {
                    /* try { // try from 0295c43c to 02a5c44b has its CatchHandler @ 0295c44c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c0f = 1;
  }
                    /* catch() { ... } // from try @ 0295c400 with catch @ 0295c44c
                       catch() { ... } // from try @ 0295c43c with catch @ 0295c44c */
                    /* try { // try from 0295c450 to 02a5c453 has its CatchHandler @ 0295c45c */
  plVar5 = *(long **)(param_1 + 0x40);
                    /* try { // try from 0295c454 to 02a5c45f has its CatchHandler @ 0295c190 */
  if (plVar5 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0295c450 with catch @ 0295c45c
                        */
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0295c4ac;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0295c4ac:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x40),0);
  FUN_02fb627c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


