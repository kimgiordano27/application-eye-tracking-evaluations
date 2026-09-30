/*
FUNCTION_NAME: FUN_0201487c
ENTRY_POINT: 0201487c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_0201487c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0482f01f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__);
                    /* try { // try from 020148a8 to 021148af has its CatchHandler @ 02014988 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<VisibleLight>_GetSubArray__);
                    /* try { // try from 020148c8 to 021148ef has its CatchHandler @ 02014990 */
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Peek__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    DAT_0482f01f = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_02014a40:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 020148a8 with catch @ 02014988
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02014904 with catch @ 0201498c
                        */
    uVar2 = FUN_0340eec4(*(undefined8 *)(lVar4 + 0x68),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 020148c8 with catch @ 02014990
                        */
    if ((uVar2 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0201495c with catch @ 02014994
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02014930 with catch @ 02014998
                        */
      uVar2 = FUN_020138a4(uVar2,*(undefined8 *)(lVar4 + 0x68));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02014960 with catch @ 0201499c
                        */
      if ((uVar2 & 1) == 0) {
        uVar1 = *(undefined8 *)(lVar4 + 0x68);
        uVar3 = *(undefined8 *)(lVar4 + 0x70);
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02014838 with catch @ 020149a0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02014808 with catch @ 020149a4
                        */
                    /* try { // try from 020149a8 to 021149af has its CatchHandler @ 020149b8 */
                    /* try { // try from 020149b0 to 021149bb has its CatchHandler @ 020147cc */
        if (*(int *)(*(long *)
                      Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 020149a8 with catch @ 020149b8
                        */
        uVar1 = UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass163_0__<GetRootElementForId>b__0
                          (0);
        uVar1 = FUN_0340ebc0(uVar1,*(undefined8 *)
                                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                             ,*(undefined8 *)(lVar4 + 0x68),0);
        uVar3 = 0;
      }
      FUN_02013bac(lVar4,uVar1,uVar3);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 02014904 to 0211490f has its CatchHandler @ 0201498c */
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) goto LAB_02014a40;
    uVar1 = FUN_0404ce70(*(long *)(lVar4 + 0x38),0);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
                    /* try { // try from 02014930 to 0211494b has its CatchHandler @ 02014998 */
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar1,0,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<VisibleLight>_GetSubArray__);
      FUN_0407829c(0x3f800000,uVar1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar1);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
                    /* try { // try from 0201495c to 0211495f has its CatchHandler @ 02014994 */
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 02014960 to 02114967 has its CatchHandler @ 0201499c */
    FUN_0403ed64(*(undefined8 *)
                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Peek__,0
                );
  }
  return 0;
}


