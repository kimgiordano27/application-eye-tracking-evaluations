/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 0346cd14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (void *param_1,int param_2,size_t param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar7;
  
  memset(param_1,param_2,param_3);
                    /* try { // try from 0346cd18 to 0356cd23 has its CatchHandler @ 0346cdcc */
  iVar2 = thunk_FUN_02b4ba0c();
                    /* try { // try from 0346cd24 to 0356cd57 has its CatchHandler @ 0346c6c4 */
  if (1 < iVar2) {
                    /* catch() { ... } // from try @ 0346cdb4 with catch @ 0346cddc */
                    /* catch() { ... } // from try @ 0346ca64 with catch @ 0346cde0 */
                    /* catch() { ... } // from try @ 0346caa8 with catch @ 0346cde4 */
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar5 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(&DAT_064a6d10);
                    /* try { // try from 0346ce00 to 0356ce03 has its CatchHandler @ 0346ce10 */
    FUN_04d8cc78(uVar5,uVar6,0);
                    /* catch() { ... } // from try @ 0346ce00 with catch @ 0346ce10 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0346ce14 to 0356ce1b has its CatchHandler @ 0346ce24 */
    FUN_02b3c988(uVar5);
  }
  uVar3 = FUN_04d941cc();
  if ((int)uVar3 < 1) {
                    /* try { // try from 0346cdb8 to 0356cdff has its CatchHandler @ 0346c6c4 */
    bVar1 = false;
  }
  else {
    uVar7 = 0;
    bVar1 = true;
    do {
                    /* try { // try from 0346cd58 to 0356cd63 has its CatchHandler @ 0346cdcc */
                    /* try { // try from 0346cd64 to 0356cdb3 has its CatchHandler @ 0346c6c4 */
      memcpy(&stack0x00000090,
             (void *)((long)unaff_x21 + uVar7 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
      memcpy(&stack0x00000000,&stack0x00000090,0x90);
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
      uVar4 = FUN_05d227e8();
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      uVar7 = uVar7 + 1;
      bVar1 = uVar7 < uVar3;
    } while (uVar3 != uVar7);
  }
                    /* catch() { ... } // from try @ 0346cccc with catch @ 0346cdc4 */
                    /* catch() { ... } // from try @ 0346ccc4 with catch @ 0346cdc8 */
                    /* catch() { ... } // from try @ 0346cd18 with catch @ 0346cdcc
                       catch() { ... } // from try @ 0346cd58 with catch @ 0346cdcc */
                    /* catch() { ... } // from try @ 0346cb24 with catch @ 0346cdd0
                       catch() { ... } // from try @ 0346ccb0 with catch @ 0346cdd0 */
                    /* catch() { ... } // from try @ 0346cad0 with catch @ 0346cdd4 */
                    /* catch() { ... } // from try @ 0346cae4 with catch @ 0346cdd8 */
  return bVar1;
}


