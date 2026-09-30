/*
FUNCTION_NAME: FUN_03ef1570
ENTRY_POINT: 03ef1570
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


void FUN_03ef1570(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 03ef1570 to 03ff157b has its CatchHandler @ 03ef15e4 */
                    /* try { // try from 03ef157c to 03ff1617 has its CatchHandler @ 03ef119c */
  if ((DAT_0483aef4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483aef4 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar5 == (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef1534 with catch @ 03ef15f4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef14a8 with catch @ 03ef15f8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef1434 with catch @ 03ef15fc
                        */
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef154c with catch @ 03ef1600
                        */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03ef160c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef146c with catch @ 03ef15e0
                        */
    } while (uVar3 != 0);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef1570 with catch @ 03ef15e4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef14f0 with catch @ 03ef15e8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef14d4 with catch @ 03ef15ec
                        */
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ef1410 with catch @ 03ef15f0
                        */
LAB_03ef160c:
                    /* try { // try from 03ef1618 to 03ff161b has its CatchHandler @ 03ef163c */
                    /* WARNING: Could not recover jumptable at 0x03ef161c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 03ef161c to 03ff163f has its CatchHandler @ 03ef119c */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


