/*
FUNCTION_NAME: FUN_00e792b0
ENTRY_POINT: 00e792b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_00e792b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 00e792bc to 00f792c7 has its CatchHandler @ 00e79748 */
  if ((DAT_03774f1d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__)
    ;
    thunk_FUN_00d48444(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_00d48444(StringLiteral_13673);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__);
    DAT_03774f1d = 1;
  }
  puVar4 = StringLiteral_13673;
  puVar3 = Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__;
  puVar2 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
  puVar1 = Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__;
  uStack_48 = 0;
  local_40 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x18),&local_68,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                );
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    while (uVar5 = FUN_012b894c(&local_50,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      lVar6 = FUN_00ac2e08(&local_50,*(undefined8 *)puVar4);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar6 = FUN_0268fd4c(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0268ace8(lVar6,1,0);
    }
    FUN_012b8948(&local_50,*(undefined8 *)puVar3);
    lVar6 = FUN_00ed56f0(0);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
      FUN_00fcbec8(*(long *)(lVar6 + 0x40),*(undefined8 *)puVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


