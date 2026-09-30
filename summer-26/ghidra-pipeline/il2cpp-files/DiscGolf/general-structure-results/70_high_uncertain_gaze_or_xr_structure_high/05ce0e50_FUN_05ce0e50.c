/*
FUNCTION_NAME: FUN_05ce0e50
ENTRY_POINT: 05ce0e50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void FUN_05ce0e50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_targetObject__;
  puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_recognizer__;
  puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_Complete__;
  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  if ((DAT_06dc2d53 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_recognizer__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_Complete__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_xrOrigin__
                );
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_set_targetObject__
                );
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_targetObject__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>__ctor__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_Cancel__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_Complete__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_Reinitialize__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_get_recognizer__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_get_targetObject__
                );
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>__ctor__)
    ;
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Complete__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Reinitialize__
                );
    DAT_06dc2d53 = 1;
  }
  plVar5 = (long *)FUN_02d966a4(*(undefined8 *)puVar3,0xd);
  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_05ce0c54(lVar6,*(undefined8 *)puVar4,0,0x85,*(undefined8 *)puVar1);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_05ce1434:
    uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,0);
  }
  puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_set_targetObject__;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    LeanTween__value(plVar5 + 4,lVar6);
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_05ce0c54(lVar6,*(undefined8 *)puVar3,1,0x189,*(undefined8 *)puVar1);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_05ce1434;
    puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_Complete__;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      LeanTween__value(plVar5 + 5,lVar6);
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
      FUN_05ce0c54(lVar6,*(undefined8 *)puVar3,2,0x189,*(undefined8 *)puVar1);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_05ce1434;
      puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>__ctor__;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        LeanTween__value(plVar5 + 6,lVar6);
        lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,3,6,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_05ce1434;
        puVar1 = 
        Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Complete__;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar6;
          LeanTween__value(plVar5 + 7,lVar6);
          lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
          FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,4,0x152,0);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_05ce1434;
          puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_Reinitialize__
          ;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            LeanTween__value(plVar5 + 8,lVar6);
            lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
            FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,5,6,0);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_05ce1434;
            puVar1 = 
            Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_get_recognizer__;
            if (5 < *(uint *)(plVar5 + 3)) {
              plVar5[9] = lVar6;
              LeanTween__value(plVar5 + 9,lVar6);
              lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
              FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,6,4,0);
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
              goto LAB_05ce1434;
              puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_Cancel__;
              if (6 < *(uint *)(plVar5 + 3)) {
                plVar5[10] = lVar6;
                LeanTween__value(plVar5 + 10,lVar6);
                lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,7,4,0);
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
                goto LAB_05ce1434;
                puVar1 = 
                Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>_get_targetObject__
                ;
                if ((*(uint *)(plVar5 + 3) & 0xfffffff8) != 0) {
                  plVar5[0xb] = lVar6;
                  LeanTween__value(plVar5 + 0xb,lVar6);
                  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                  FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,8,4,0);
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)
                     ) goto LAB_05ce1434;
                  puVar1 = 
                  Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__
                  ;
                  if (8 < *(uint *)(plVar5 + 3)) {
                    plVar5[0xc] = lVar6;
                    LeanTween__value(plVar5 + 0xc,lVar6);
                    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                    FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,9,4,0);
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar7 == 0)) goto LAB_05ce1434;
                    puVar1 = 
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwistGesture>__ctor__;
                    if (9 < *(uint *)(plVar5 + 3)) {
                      plVar5[0xd] = lVar6;
                      LeanTween__value(plVar5 + 0xd,lVar6);
                      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                      FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,10,0x24,0);
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar7 == 0)) goto LAB_05ce1434;
                      puVar1 = 
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Reinitialize__
                      ;
                      if (10 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xe] = lVar6;
                        LeanTween__value(plVar5 + 0xe,lVar6);
                        lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                        FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,0xb,0x24,0);
                        if ((lVar6 != 0) &&
                           (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar7 == 0)) goto LAB_05ce1434;
                        puVar1 = 
                        Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_xrOrigin__
                        ;
                        if (0xb < *(uint *)(plVar5 + 3)) {
                          plVar5[0xf] = lVar6;
                          LeanTween__value(plVar5 + 0xf,lVar6);
                          lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                          FUN_05ce0c54(lVar6,*(undefined8 *)puVar1,0xc,0x10,0);
                          if ((lVar6 != 0) &&
                             (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                             lVar7 == 0)) goto LAB_05ce1434;
                          if (0xc < *(uint *)(plVar5 + 3)) {
                            plVar5[0x10] = lVar6;
                            LeanTween__value(plVar5 + 0x10,lVar6);
                            **(long **)(*(long *)puVar2 + 0xb8) = (long)plVar5;
                            LeanTween__value(*(undefined8 *)(*(long *)puVar2 + 0xb8),plVar5);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


