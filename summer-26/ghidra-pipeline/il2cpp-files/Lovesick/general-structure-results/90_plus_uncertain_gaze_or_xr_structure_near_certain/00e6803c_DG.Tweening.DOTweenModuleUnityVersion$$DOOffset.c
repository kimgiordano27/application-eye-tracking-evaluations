/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleUnityVersion$$DOOffset
ENTRY_POINT: 00e6803c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void DG_Tweening_DOTweenModuleUnityVersion__DOOffset(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_03774e67 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__);
                    /* try { // try from 00e68074 to 00f68083 has its CatchHandler @ 00e680dc */
    thunk_FUN_00d48444(StringLiteral_4557);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_CharacterValidation>__
                      );
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerable<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Note>__ctor__);
                    /* try { // try from 00e680a4 to 00f680b7 has its CatchHandler @ 00e680cc */
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                      );
                    /* try { // try from 00e680b8 to 00f680e7 has its CatchHandler @ 00e6802c */
    thunk_FUN_00d48444(StringLiteral_8378);
    thunk_FUN_00d48444(PTR_DAT_033eb938);
                    /* catch() { ... } // from try @ 00e680a4 with catch @ 00e680cc */
    thunk_FUN_00d48444(PTR_DAT_033efdc0);
                    /* catch() { ... } // from try @ 00e68074 with catch @ 00e680dc */
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_Split__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_55__);
    thunk_FUN_00d48444(
                      Method_TuneDissolveController_<HideCoroutine>d__46_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_PlaneAlignment_TypeInfo);
    DAT_03774e67 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  FUN_0268e9d0(param_1,0);
  puVar10 = StringLiteral_8378;
  puVar9 = StringLiteral_4557;
  puVar8 = Method_TuneDissolveController_<HideCoroutine>d__46_System_Collections_IEnumerator_Reset__
  ;
  puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_55__;
  puVar6 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<InputField_CharacterValidation>__;
  puVar5 = Method_System_Text_RegularExpressions_Regex_Split__;
  puVar4 = Method_UnityEngine_Events_UnityEvent<Note>__ctor__;
  puVar3 = UnityEngine_XR_ARSubsystems_PlaneAlignment_TypeInfo;
  puVar2 = 
  System_Collections_Generic_IEnumerable<JointRotationActiveState_JointRotationFeatureConfig>_TypeInfo
  ;
  puVar1 = PTR_DAT_033efdc0;
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x78),&local_98,
                 *(undefined8 *)
                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                );
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar9), (uVar11 & 1) != 0) {
      lVar12 = FUN_00ac4460(&local_80,*(undefined8 *)puVar6);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026c8348(*(long *)(lVar12 + 0x18),0);
    }
    FUN_012b8948(&local_80,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    if (lVar12 != 0) {
      FUN_01320e50(lVar12,*(undefined8 *)puVar10);
      *(long *)(param_1 + 0x98) = lVar12;
      if (*(long *)(param_1 + 0x78) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x78),&local_98,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                    );
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar9), (uVar11 & 1) != 0) {
          uVar13 = FUN_00ac4460(&local_80,*(undefined8 *)puVar6);
          if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(0,uVar13);
          }
          FUN_00ac4670(*(long *)(param_1 + 0x98),uVar13,*(undefined8 *)puVar2);
          lVar12 = *(long *)(param_1 + 0x98);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar12,*(int *)(lVar12 + 0x18) + -1,&local_68,*(undefined8 *)puVar1);
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar14 = *(long *)(local_68 + 0x18);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_013df3d0(lVar12,param_1,*(undefined8 *)puVar7,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_013dfdd8(lVar14,lVar12,*(undefined8 *)puVar3);
        }
        FUN_012b8948(&local_80,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__);
        if (*(long *)(param_1 + 0x78) != 0) {
          FUN_01323390(*(long *)(param_1 + 0x78),&local_98,
                       *(undefined8 *)
                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                      );
          uStack_78 = uStack_90;
          local_80 = local_98;
          local_70 = local_88;
          while( true ) {
            uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar9);
            if ((uVar11 & 1) == 0) {
              FUN_012b8948(&local_80,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<PinchGesture>_Cancel__
                          );
              return;
            }
            lVar12 = FUN_00ac4460(&local_80,*(undefined8 *)puVar6);
            if (*(long *)(param_1 + 0x98) == 0) break;
            uVar11 = FUN_01322618(*(long *)(param_1 + 0x98),lVar12,*(undefined8 *)puVar4);
            if ((uVar11 & 1) != 0) {
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00e7b98c(lVar12,0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


