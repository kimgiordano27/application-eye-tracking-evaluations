/*
FUNCTION_NAME: FUN_02471a80
ENTRY_POINT: 02471a80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02471a80(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_640 [112];
  undefined1 auStack_5d0 [112];
  undefined1 auStack_560 [112];
  undefined1 auStack_4f0 [112];
  undefined1 auStack_480 [112];
  undefined1 auStack_410 [112];
  undefined1 auStack_3a0 [112];
  undefined1 auStack_330 [112];
  undefined1 auStack_2c0 [112];
  undefined1 auStack_250 [112];
  undefined1 auStack_1e0 [112];
  undefined1 auStack_170 [112];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar3 = Method_OVRTask_WhenAll<OVRSceneManager_Metrics>__;
                    /* try { // try from 02471a9c to 02571aa7 has its CatchHandler @ 02471b98 */
                    /* try { // try from 02471abc to 02571acb has its CatchHandler @ 02471b90 */
  if ((DAT_03782551 & 1) == 0) {
    thunk_FUN_00d48444(RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo);
                    /* try { // try from 02471ae0 to 02571ae7 has its CatchHandler @ 02471b94 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                      );
                    /* try { // try from 02471ae8 to 02571b7f has its CatchHandler @ 02471868 */
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Vector2>__
                      );
    thunk_FUN_00d48444(Method_OVRTask_WhenAll<OVRSceneManager_Metrics>__);
    thunk_FUN_00d48444(UIPlacementManager_<>c__DisplayClass7_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_HandleEnabled__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Tween>_MoveNext__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                      );
    DAT_03782551 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    FUN_023adfa8(lVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                 ,0);
    *(long *)(param_1 + 0xd8) = lVar5;
    FUN_0241ac18(param_1,0);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar2 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Vector2>__
    ;
    puVar3 = Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
    ;
    if (lVar5 != 0) {
      FUN_023adfa8(lVar5,*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<Tween>_MoveNext__,0);
      *(long *)(param_1 + 0x38) = lVar5;
      *(undefined4 *)(param_1 + 0x10) = param_2;
      *(undefined8 *)(param_1 + 0xe0) = param_8;
      local_68 = 0;
      local_70 = 0;
      local_100 = param_3;
      FUN_01347274(&local_70,&local_100,*(undefined8 *)puVar2);
      uVar4 = FUN_0268cec4(param_4,0);
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      FUN_026b5728(&local_88,local_70,local_68,uVar4,0xffffffff,0,0);
      *(undefined8 *)(param_1 + 0x108) = local_78;
      *(undefined8 *)(param_1 + 0x100) = uStack_80;
      *(undefined8 *)(param_1 + 0xf8) = local_88;
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      local_a4 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      FUN_026b5a34(&local_100,0,0);
      __dest = (void *)(param_1 + 0x110);
      memcpy(__dest,&local_100,0x6c);
      FUN_026b5b94(__dest,param_5,param_6,0);
      FUN_026b5ba8(__dest,param_7,0);
      FUN_026b5bb8(__dest,8,0);
      lVar5 = FUN_00da4fb8(*(undefined8 *)
                            Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_HandleEnabled__
                           ,4);
      *(long *)(param_1 + 0xe8) = lVar5;
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
          lVar5 = *(long *)(param_1 + 0xe8);
          if (lVar5 == 0) goto LAB_02471f18;
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            lVar5 = *(long *)(param_1 + 0xe8);
            if (lVar5 == 0) goto LAB_02471f18;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              *(undefined4 *)(lVar5 + 0x28) =
                   *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
              puVar3 = UIPlacementManager_<>c__DisplayClass7_0_TypeInfo;
              lVar5 = *(long *)(param_1 + 0xe8);
              if (lVar5 == 0) goto LAB_02471f18;
              if (3 < *(uint *)(lVar5 + 0x18)) {
                *(undefined4 *)(lVar5 + 0x2c) = 0;
                puVar2 = RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo;
                lVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
                *(long *)(param_1 + 0xf0) = lVar5;
                memcpy(auStack_170,__dest,0x6c);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                memcpy(auStack_2c0,auStack_170,0x6c);
                FUN_0245bffc(auStack_250,auStack_2c0,0x60,0x20,0);
                memcpy(auStack_1e0,auStack_250,0x6c);
                if (lVar5 == 0) goto LAB_02471f18;
                memcpy(auStack_330,auStack_1e0,0x6c);
                if (*(int *)(lVar5 + 0x18) != 0) {
                  memcpy((void *)(lVar5 + 0x20),auStack_330,0x6c);
                  lVar5 = *(long *)(param_1 + 0xf0);
                  memcpy(auStack_410,__dest,0x6c);
                  FUN_0245bffc(auStack_3a0,auStack_410,0x60,0x40,0);
                  memcpy(auStack_250,auStack_3a0,0x6c);
                  if (lVar5 == 0) goto LAB_02471f18;
                  memcpy(auStack_480,auStack_250,0x6c);
                  if (1 < *(uint *)(lVar5 + 0x18)) {
                    memcpy((void *)(lVar5 + 0x8c),auStack_480,0x6c);
                    lVar5 = *(long *)(param_1 + 0xf0);
                    memcpy(auStack_560,__dest,0x6c);
                    FUN_0245bffc(auStack_4f0,auStack_560,0x60,0,0);
                    memcpy(auStack_3a0,auStack_4f0,0x6c);
                    if (lVar5 == 0) goto LAB_02471f18;
                    memcpy(auStack_5d0,auStack_3a0,0x6c);
                    if (2 < *(uint *)(lVar5 + 0x18)) {
                      memcpy((void *)(lVar5 + 0xf8),auStack_5d0,0x6c);
                      lVar5 = *(long *)(param_1 + 0xf0);
                      if (lVar5 == 0) goto LAB_02471f18;
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if ((uVar1 != 0) &&
                         (memcpy(auStack_640,(void *)(lVar5 + 0x20),0x6c), 3 < uVar1)) {
                        memcpy((void *)(lVar5 + 0x164),auStack_640,0x6c);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
LAB_02471f18:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


