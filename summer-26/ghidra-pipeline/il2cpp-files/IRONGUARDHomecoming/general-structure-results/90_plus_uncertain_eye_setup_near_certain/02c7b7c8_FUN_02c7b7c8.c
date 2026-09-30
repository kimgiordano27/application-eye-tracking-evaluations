/*
FUNCTION_NAME: FUN_02c7b7c8
ENTRY_POINT: 02c7b7c8
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


void FUN_02c7b7c8(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
                    /* try { // try from 02c7b7e0 to 02d7b823 has its CatchHandler @ 02c7b890 */
  if ((DAT_048314f8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_048314f8 = 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 4) {
    if (iVar1 == 3) {
      if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      *(undefined4 *)(param_1 + 0x44) = 0xfffffffe;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else if (iVar1 == 2) {
      if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 02c7b824 to 02d7b857 has its CatchHandler @ 02c7b554 */
        FUN_01ecaf44();
        return;
      }
    }
    return;
  }
  plVar6 = *(long **)(param_1 + 0x10);
                    /* try { // try from 02c7b858 to 02d7b85b has its CatchHandler @ 02c7b88c */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02c7b8c4 to 02d7b8e7 has its CatchHandler @ 02c7b554 */
    FUN_01f08a3c();
  }
                    /* try { // try from 02c7b85c to 02d7b86f has its CatchHandler @ 02c7b894 */
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 02c7b870 to 02d7b87f has its CatchHandler @ 02c7b554 */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 02c7b880 to 02d7b883 has its CatchHandler @ 02c7b884 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c7b880 with catch @ 02c7b884
                       try { // try from 02c7b884 to 02d7b8ab has its CatchHandler @ 02c7b554 */
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 02c7b8ac to 02d7b8c3 has its CatchHandler @ 02c7b8f8 */
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02c7b8b0;
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c7b7c4 with catch @ 02c7b888
                        */
      uVar4 = uVar4 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c7b858 with catch @ 02c7b88c
                        */
      piVar5 = piVar5 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c7b7e0 with catch @ 02c7b890
                        */
    } while (uVar4 != 0);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c7b85c with catch @ 02c7b894
                        */
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02c7b8b0:
                    /* WARNING: Could not recover jumptable at 0x02c7b8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}


