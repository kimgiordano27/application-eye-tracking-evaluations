/*
FUNCTION_NAME: FUN_0259a8fc
ENTRY_POINT: 0259a8fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_0259a8fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = Method_System_Linq_Enumerable_Where<Transform>__;
  if ((DAT_03782faf & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                      );
    thunk_FUN_00d48444(StringLiteral_4465);
    thunk_FUN_00d48444(Method_System_Net_WebResponse_get_ResponseUri__);
    thunk_FUN_00d48444(StringLiteral_199);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<Transform>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiColliderHandle>_RemoveAt__);
    thunk_FUN_00d48444(DG_Tweening_Core_DOTweenUtils_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float3>_get_stateTransitionAmountFloat__
                      );
    DAT_03782faf = 1;
  }
  uVar5 = FUN_0268cec8(1,0);
  *(undefined4 *)(param_1 + 0x28c) = uVar5;
  *(undefined4 *)(param_1 + 0x290) = 1;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar4 = StringLiteral_199;
  puVar1 = Method_System_Net_WebResponse_get_ResponseUri__;
  if (lVar6 != 0) {
    FUN_01320e50(lVar6,*(undefined8 *)StringLiteral_199);
    *(long *)(param_1 + 0x298) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = DG_Tweening_Core_DOTweenUtils_TypeInfo;
    if (lVar6 != 0) {
      FUN_012dd38c(lVar6,*(undefined8 *)StringLiteral_4465);
      *(long *)(param_1 + 0x2a0) = lVar6;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = Method_System_Collections_Generic_List<ObiColliderHandle>_RemoveAt__;
      puVar1 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
      ;
      if (lVar6 != 0) {
        FUN_025d9eb0(lVar6,0);
        *(long *)(param_1 + 0x2a8) = lVar6;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        uVar5 = *(undefined4 *)
                 (*(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8) + 1);
        *(undefined8 *)(param_1 + 0x2cc) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(param_1 + 0x2d4) = uVar5;
        uVar7 = FUN_00da4fb8(*(undefined8 *)puVar1,0x19);
        *(undefined8 *)(param_1 + 0x2d8) = uVar7;
        uVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,0x19);
        *(undefined8 *)(param_1 + 0x2e0) = uVar7;
        *(undefined1 *)(param_1 + 0x2e8) = 1;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar3 = 
        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Jobs_TweenJobData<float3>_get_stateTransitionAmountFloat__
        ;
        if (lVar6 != 0) {
          FUN_01320e50(lVar6,*(undefined8 *)puVar4);
          *(long *)(param_1 + 0x2f0) = lVar6;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0259601c(param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


