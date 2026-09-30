/*
FUNCTION_NAME: FUN_0240aea8
ENTRY_POINT: 0240aea8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 178
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1
*/


long FUN_0240aea8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = OVRManager_EventListener_TypeInfo;
  if ((DAT_037822a9 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<NativeArray<XRRaycastHit>>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_System_ComponentModel_ReflectTypeDescriptionProvider_SearchIntrinsicTable__
                      );
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
    DAT_037822a9 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_bool>_Clear__;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_1;
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


