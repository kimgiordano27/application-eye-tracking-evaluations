/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset.<get_outputs>d__65$$System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current
ENTRY_POINT: 0240aee8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long UnityEngine_Timeline_TrackAsset_<get_outputs>d__65__System_Collections_Generic_IEnumerator<UnityEngine_Playables_PlayableBinding>_get_Current
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x748));
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_bool>_Clear__);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                    );
  thunk_FUN_00d48444(System_Predicate<InputControlScheme>_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<CharacterZone>_Dispose__);
  thunk_FUN_00d48444(System_Xml_Linq_XContainer_ContentReader_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_8591);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<MedleyGraveyardStatueSpawner>_get_Count__
                    );
  thunk_FUN_00d48444(OVRManager_EventListener_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x2a9) = 1;
  lVar3 = thunk_FUN_00d62348(*unaff_x21);
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_bool>_Clear__;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = unaff_x20;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = 
    Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
    ;
    puVar1 = Method_System_Collections_Generic_List_Enumerator<CharacterZone>_Dispose__;
    if (lVar4 != 0) {
      FUN_023aa7c0(lVar4,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      FUN_023aa448(lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x70),
                   *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x78),0);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
      if (lVar5 != 0) {
        FUN_012d1810(lVar5,lVar3,*(undefined8 *)System_Xml_Linq_XContainer_ContentReader_TypeInfo,0)
        ;
        *(long *)(lVar4 + 0x48) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = System_Predicate<InputControlScheme>_TypeInfo;
        if (lVar5 != 0) {
          FUN_011c181c(lVar5,lVar3,*(undefined8 *)StringLiteral_8591,0);
          *(long *)(lVar4 + 0x50) = lVar5;
          *(undefined4 *)(lVar4 + 0x70) = 0x3c23d70a;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            FUN_012d1810(lVar5,lVar3,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<MedleyGraveyardStatueSpawner>_get_Count__
                         ,0);
            *(long *)(lVar4 + 0x40) = lVar5;
            return lVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


