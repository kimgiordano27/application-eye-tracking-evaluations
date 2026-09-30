/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 050a2ab8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)__cxa_begin_catch();
                    /* try { // try from 050a2ac8 to 051a2aeb has its CatchHandler @ 050a2a74 */
  uVar2 = thunk_FUN_03af1434(&DAT_0861a588);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a2ab4 with catch @ 050a2ad4
                        */
  uVar3 = thunk_FUN_03aed0c4(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
                    /* try { // try from 050a2aec to 051a2b03 has its CatchHandler @ 050a2b3c */
    FUN_066fc088();
    return;
  }
                    /* try { // try from 050a2b04 to 051a2b2b has its CatchHandler @ 050a2a74 */
  uVar2 = thunk_FUN_03af1434(&DAT_0861fb10);
  uVar3 = thunk_FUN_03aed0c4(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(uVar2);
  }
                    /* try { // try from 050a2b2c to 051a2b3b has its CatchHandler @ 050a2b3c */
  uVar2 = thunk_FUN_03af1434(&DAT_08617e70);
                    /* catch() { ... } // from try @ 050a2aec with catch @ 050a2b3c
                       catch() { ... } // from try @ 050a2b2c with catch @ 050a2b3c */
  uVar3 = thunk_FUN_03aed0c4(uVar2,*(undefined8 *)*puVar1);
                    /* try { // try from 050a2b40 to 051a2b43 has its CatchHandler @ 050a2b4c */
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 050a2b44 to 051a2b4f has its CatchHandler @ 050a2a74 */
    uVar6 = *puVar1;
    __cxa_end_catch();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a2b40 with catch @ 050a2b4c
                        */
    thunk_FUN_03af1434(&DAT_0861aac0);
    uVar2 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(&DAT_0868bc08);
    FUN_06750b68(uVar2,uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar2);
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_07fde6e8,0);
}


