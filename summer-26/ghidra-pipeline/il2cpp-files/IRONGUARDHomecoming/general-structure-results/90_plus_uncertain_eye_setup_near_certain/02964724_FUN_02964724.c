/*
FUNCTION_NAME: FUN_02964724
ENTRY_POINT: 02964724
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


void FUN_02964724(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_04830c49 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c49 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x58);
                    /* try { // try from 02964760 to 02a64763 has its CatchHandler @ 02964790 */
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 02964764 to 02a64777 has its CatchHandler @ 02964798 */
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 02964778 to 02a64787 has its CatchHandler @ 02964534 */
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 02964788 to 02a6478b has its CatchHandler @ 0296478c */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02964788 with catch @ 0296478c
                       try { // try from 0296478c to 02a647af has its CatchHandler @ 02964534 */
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 029647b0 to 02a647c7 has its CatchHandler @ 029647fc */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_029647b8;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02964760 with catch @ 02964790
                        */
        uVar3 = uVar3 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029646ec with catch @ 02964794
                        */
        piVar4 = piVar4 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02964764 with catch @ 02964798
                        */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_029647b8:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
                    /* try { // try from 029647c8 to 02a647eb has its CatchHandler @ 02964534 */
  *(undefined8 *)(param_1 + 0x58) = 0;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x58),0);
                    /* try { // try from 029647ec to 02a647fb has its CatchHandler @ 029647fc */
  FUN_02fb7c40(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  return;
}


