/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0346ce24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (long *param_1,void *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long alStack_1d8 [2];
  undefined1 auStack_1c8 [152];
  undefined1 auStack_130 [152];
  undefined1 auStack_98 [152];
  
                    /* catch() { ... } // from try @ 0346ce14 with catch @ 0346ce24 */
                    /* try { // try from 0346ce28 to 0356d1c7 has its CatchHandler @ 0346ce28
                       catch() { ... } // from try @ 0346ce28 with catch @ 0346ce28
                       catch() { ... } // from try @ 0346d294 with catch @ 0346ce28
                       catch() { ... } // from try @ 0346d488 with catch @ 0346ce28
                       catch() { ... } // from try @ 0346d4c8 with catch @ 0346ce28
                       catch() { ... } // from try @ 0346d51c with catch @ 0346ce28
                       catch() { ... } // from try @ 0346d580 with catch @ 0346ce28 */
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02b76274(param_3);
  }
  memset(auStack_98,0,0x98);
  iVar2 = thunk_FUN_02b4ba0c(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_02ba3594(&DAT_0644b458);
    uVar4 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(&DAT_064a6d10);
    FUN_04d8cc78(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar4,param_3);
  }
  uVar3 = FUN_04d941cc(param_1,0);
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(auStack_98,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(auStack_130,auStack_98,0x98);
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),auStack_130);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218(lVar7);
      }
      alStack_1d8[1] = 0xffffffffffffffff;
      alStack_1d8[0] = lVar7;
      memcpy(auStack_1c8,param_2,0x98);
      uVar5 = thunk_FUN_04dd5180(alStack_1d8,uVar4,0);
      if ((uVar5 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


