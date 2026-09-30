/*
FUNCTION_NAME: FUN_0104a874
ENTRY_POINT: 0104a874
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0104a874(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_28;
  
  if ((DAT_03776022 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8088);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildParticle_MaxOccurs__);
    thunk_FUN_00d48444(Method_NaughtyAttributes_DropdownList<Vector3>_Add__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass0_0_<DOFade>b__1__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NoteEffect>_Remove__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ToggledScriptData>_Clear__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03776022 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_010c2c5c(param_1,&local_28,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>__ctor__
                );
    if (lVar4 == 0) goto LAB_0104aa58;
    FUN_00ac5cb0(lVar4,local_28,
                 *(undefined8 *)OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
  }
  else {
    uVar2 = FUN_010c3404(param_1,*(undefined8 *)Method_NaughtyAttributes_DropdownList<Vector3>_Add__
                        );
    puVar1 = Method_System_Xml_Schema_XsdBuilder_BuildParticle_MaxOccurs__;
    if (lVar4 == 0) goto LAB_0104aa58;
    FUN_01322050(lVar4,uVar2,
                 *(undefined8 *)
                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass0_0_<DOFade>b__1__);
    lVar4 = *(long *)(param_1 + 0x20);
    uVar2 = FUN_010c3404(param_1,*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_0104aa58;
    FUN_01322050(lVar4,uVar2,
                 *(undefined8 *)Method_System_Collections_Generic_List<NoteEffect>_Remove__);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0104aa58;
    FUN_0132448c(*(long *)(param_1 + 0x20),param_1,
                 *(undefined8 *)Method_System_Collections_Generic_List<ToggledScriptData>_Clear__);
  }
  lVar4 = FUN_0268fd10(param_1,0);
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar4 != 0) {
    uVar2 = FUN_0269fe30(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar3 = FUN_0268b5e4(uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_0268fd10(param_1,0);
      if ((lVar4 == 0) || (lVar4 = FUN_0269fe30(lVar4,0), lVar4 == 0)) goto LAB_0104aa58;
      FUN_010c2c5c(lVar4,&local_28,*(undefined8 *)StringLiteral_8088);
      *(undefined8 *)(param_1 + 0x30) = local_28;
    }
    return;
  }
LAB_0104aa58:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


