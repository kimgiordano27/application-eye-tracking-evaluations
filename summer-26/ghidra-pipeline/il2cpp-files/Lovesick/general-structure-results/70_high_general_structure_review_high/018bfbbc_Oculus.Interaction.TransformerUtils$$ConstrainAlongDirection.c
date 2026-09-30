/*
FUNCTION_NAME: Oculus.Interaction.TransformerUtils$$ConstrainAlongDirection
ENTRY_POINT: 018bfbbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure
*/


undefined8 Oculus_Interaction_TransformerUtils__ConstrainAlongDirection(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x21;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(PTR_DAT_033f2f78);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                    );
  thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
  thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
  thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_7239);
  thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
  thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo);
  thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                    );
  thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
  thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
  *(undefined1 *)(unaff_x21 + 0x9ab) = 1;
  puVar2 = 
  Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__;
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *(long *)
             Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
    ;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    if ((long *)**(long **)(lVar3 + 0xb8) != unaff_x19) {
      lVar3 = *unaff_x19;
      if (lVar3 == *(long *)
                    System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
        uVar4 = FUN_018c17e8();
        return uVar4;
      }
      if (lVar3 == *(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo) {
        return 6;
      }
      if (lVar3 == *(long *)
                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__) {
        return 6;
      }
      if (lVar3 == *(long *)Method_System_Data_Common_UInt32Storage_Aggregate__) {
        return 6;
      }
      if (lVar3 == *(long *)StringLiteral_7239) {
        return 6;
      }
      if (lVar3 == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__) {
        return 6;
      }
      if (lVar3 == *(long *)Method_TMPro_SetPropertyUtility_SetStruct<char>__) {
        return 6;
      }
      if (lVar3 == *(long *)
                    Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
         ) {
        return 6;
      }
      if (lVar3 == *(long *)UnityEngine_Texture2D___TypeInfo) {
        return 6;
      }
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                       + 300);
      if (((bVar1 <= *(byte *)(lVar3 + 300)) &&
          (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
           *(long *)
            Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
          )) || (lVar3 == *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo)) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_033f2f78) {
        return 7;
      }
      if (lVar3 == *(long *)System_Runtime_InteropServices_InAttribute_TypeInfo) {
        return 7;
      }
      if (lVar3 == *(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo) {
        return 7;
      }
      if (lVar3 == *(long *)StringLiteral_2672) {
        return 0xc;
      }
      if (lVar3 == *(long *)StringLiteral_8955) {
        return 0xc;
      }
      lVar3 = thunk_FUN_00d6225c();
      if (lVar3 != 0) {
        return 0xe;
      }
      lVar3 = *unaff_x19;
      if (lVar3 == *(long *)StringLiteral_9958) {
        return 9;
      }
      if (lVar3 != *(long *)UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
         ) {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__ +
                         300);
        if ((bVar1 <= *(byte *)(lVar3 + 300)) &&
           (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__)) {
          return 0x10;
        }
        if (lVar3 == *(long *)Newtonsoft_Json_Linq_JToken_TypeInfo) {
          return 0x11;
        }
        thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
        FUN_00acb0a4();
        uVar4 = FUN_01731954(0);
        FUN_00ac2be8();
        uVar5 = thunk_FUN_00d93c64();
        uVar6 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSpatialAnchor>_Dispose__
                                  );
        uVar4 = FUN_018651d4(uVar6,uVar4,uVar5,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar5,uVar4,0);
        uVar4 = thunk_FUN_00d48444(StringLiteral_8356);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,uVar4);
      }
      return 0xf;
    }
  }
  return 10;
}


