/*
FUNCTION_NAME: Unity.XR.CoreUtils.Bindings.BindingsGroup$$Unbind
ENTRY_POINT: 02471b44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_3;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_XR_CoreUtils_Bindings_BindingsGroup__Unbind(undefined8 param_1)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w22;
  undefined8 unaff_x25;
  undefined4 unaff_w26;
  undefined8 *unaff_x28;
  
  FUN_023adfa8(param_1,*(undefined8 *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
               ,0);
  *(undefined8 *)(unaff_x19 + 0xd8) = param_1;
  FUN_0241ac18();
  lVar5 = thunk_FUN_00d62348(*unaff_x28);
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Vector2>__
  ;
  puVar3 = Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
  if (lVar5 != 0) {
                    /* try { // try from 02471b80 to 02571b83 has its CatchHandler @ 02471b8c */
                    /* try { // try from 02471b84 to 02571baf has its CatchHandler @ 02471868 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02471b80 with catch @ 02471b8c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02471abc with catch @ 02471b90
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02471ae0 with catch @ 02471b94
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02471a9c with catch @ 02471b98
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02471a68 with catch @ 02471b9c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02471a0c with catch @ 02471ba0
                        */
    FUN_023adfa8(lVar5,*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<Tween>_MoveNext__,0);
    *(long *)(unaff_x19 + 0x38) = lVar5;
    *(undefined4 *)(unaff_x19 + 0x10) = unaff_w26;
                    /* try { // try from 02471bb0 to 02571bb3 has its CatchHandler @ 02471c38 */
    *(undefined8 *)(unaff_x19 + 0xe0) = unaff_x25;
    FUN_01347274(&stack0x000005e0,&stack0x00000550,*(undefined8 *)puVar2);
    uVar4 = FUN_0268cec4(unaff_w20,0);
                    /* try { // try from 02471bfc to 02571c23 has its CatchHandler @ 02471c44 */
    FUN_026b5728(&stack0x000005c8,0,0,uVar4,0xffffffff,0,0);
                    /* try { // try from 02471c24 to 02571c2f has its CatchHandler @ 02471868 */
    *(undefined8 *)(unaff_x19 + 0x108) = 0;
    *(undefined8 *)(unaff_x19 + 0x100) = 0;
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
                    /* try { // try from 02471c30 to 02571c37 has its CatchHandler @ 02471c44 */
                    /* catch() { ... } // from try @ 02471bb0 with catch @ 02471c38 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02471bfc with catch @ 02471c44
                       catch(type#2 @ 00000000) { ... } // from try @ 02471c30 with catch @ 02471c44
                        */
                    /* try { // try from 02471c48 to 02571de7 has its CatchHandler @ 02471c48
                       catch() { ... } // from try @ 02471c48 with catch @ 02471c48
                       catch() { ... } // from try @ 02471f30 with catch @ 02471c48
                       catch() { ... } // from try @ 02471fd0 with catch @ 02471c48
                       catch() { ... } // from try @ 02472078 with catch @ 02471c48 */
    FUN_026b5a34(&stack0x00000550,0,0);
    __dest = (void *)(unaff_x19 + 0x110);
    memcpy(__dest,&stack0x00000550,0x6c);
    FUN_026b5b94(__dest);
    FUN_026b5ba8(__dest,unaff_w22,0);
    FUN_026b5bb8(__dest,8,0);
    lVar5 = FUN_00da4fb8(*(undefined8 *)
                          Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_HandleEnabled__
                         ,4);
    *(long *)(unaff_x19 + 0xe8) = lVar5;
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar3;
    }
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
        lVar5 = *(long *)(unaff_x19 + 0xe8);
        if (lVar5 == 0) goto LAB_02471f18;
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          lVar5 = *(long *)(unaff_x19 + 0xe8);
          if (lVar5 == 0) goto LAB_02471f18;
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc)
            ;
            puVar3 = UIPlacementManager_<>c__DisplayClass7_0_TypeInfo;
            lVar5 = *(long *)(unaff_x19 + 0xe8);
            if (lVar5 == 0) goto LAB_02471f18;
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined4 *)(lVar5 + 0x2c) = 0;
              puVar2 = RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo;
              lVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
              *(long *)(unaff_x19 + 0xf0) = lVar5;
              memcpy(&stack0x000004e0,__dest,0x6c);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              memcpy(&stack0x00000390,&stack0x000004e0,0x6c);
              FUN_0245bffc(&stack0x00000400,&stack0x00000390,0x60,0x20,0);
              memcpy(&stack0x00000470,&stack0x00000400,0x6c);
              if (lVar5 == 0) goto LAB_02471f18;
              memcpy(&stack0x00000320,&stack0x00000470,0x6c);
              if (*(int *)(lVar5 + 0x18) != 0) {
                memcpy((void *)(lVar5 + 0x20),&stack0x00000320,0x6c);
                lVar5 = *(long *)(unaff_x19 + 0xf0);
                memcpy(&stack0x00000240,__dest,0x6c);
                FUN_0245bffc(&stack0x000002b0,&stack0x00000240,0x60,0x40,0);
                memcpy(&stack0x00000400,&stack0x000002b0,0x6c);
                if (lVar5 == 0) goto LAB_02471f18;
                memcpy(&stack0x000001d0,&stack0x00000400,0x6c);
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  memcpy((void *)(lVar5 + 0x8c),&stack0x000001d0,0x6c);
                  lVar5 = *(long *)(unaff_x19 + 0xf0);
                  memcpy(&stack0x000000f0,__dest,0x6c);
                  FUN_0245bffc(&stack0x00000160,&stack0x000000f0,0x60,0,0);
                  memcpy(&stack0x000002b0,&stack0x00000160,0x6c);
                  if (lVar5 == 0) goto LAB_02471f18;
                  memcpy(&stack0x00000080,&stack0x000002b0,0x6c);
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    memcpy((void *)(lVar5 + 0xf8),&stack0x00000080,0x6c);
                    lVar5 = *(long *)(unaff_x19 + 0xf0);
                    if (lVar5 == 0) goto LAB_02471f18;
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if ((uVar1 != 0) &&
                       (memcpy(&stack0x00000010,(void *)(lVar5 + 0x20),0x6c), 3 < uVar1)) {
                      memcpy((void *)(lVar5 + 0x164),&stack0x00000010,0x6c);
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
LAB_02471f18:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


