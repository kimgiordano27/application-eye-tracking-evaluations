/*
FUNCTION_NAME: FUN_00e79018
ENTRY_POINT: 00e79018
PROGRAM: Lovesick-libil2cpp.so
SCORE: 226
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void FUN_00e79018(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03774f1c & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__)
    ;
    thunk_FUN_00d48444(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_00d48444(StringLiteral_13673);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__);
    DAT_03774f1c = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  lVar7 = FUN_00ed56f0(0);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) != 0)) {
                    /* try { // try from 00e790d8 to 00f790ef has its CatchHandler @ 00e79774 */
    uVar8 = FUN_00fcb580(*(long *)(lVar7 + 0x40),
                         *(undefined8 *)Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__,0
                        );
    puVar6 = StringLiteral_13673;
    puVar5 = StringLiteral_1006;
    puVar4 = 
    Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
    ;
    puVar3 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
    puVar2 = Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__;
    puVar1 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
    if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 00e79104 to 00f7917f has its CatchHandler @ 00e79788 */
      FUN_01323390(*(long *)(param_1 + 0x18),&local_98,
                   *(undefined8 *)
                    Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                  );
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while (uVar9 = FUN_012b894c(&local_80,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
        lVar7 = FUN_00ac2e08(&local_80,*(undefined8 *)puVar6);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *(long *)(param_1 + 0x20);
        lVar10 = FUN_0268fd10(lVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0269f578(lVar10,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00ac4f98(lVar12,*(undefined8 *)puVar5);
        if ((uVar8 & 1) == 0) {
          lVar7 = FUN_0268fd4c(lVar7,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0268ace8(lVar7,0,0);
        }
      }
      FUN_012b8948(&local_80,*(undefined8 *)puVar2);
      if ((uVar8 & 1) == 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar7 == 0) goto LAB_00e79228;
        FUN_016f27fc(lVar7,param_1,*(undefined8 *)puVar4,0);
        FUN_00fe0700(uVar11,lVar7,0);
      }
      return;
    }
  }
LAB_00e79228:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


