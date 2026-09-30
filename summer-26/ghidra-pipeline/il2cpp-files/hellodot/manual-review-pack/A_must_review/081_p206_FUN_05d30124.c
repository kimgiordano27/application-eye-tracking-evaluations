/*
FUNCTION_NAME: FUN_05d30124
ENTRY_POINT: 05d30124
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05d30124(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if ((DAT_06a7a7a7 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<GestureEvent_GestureTypeOneofCase,_long>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    DAT_06a7a7a7 = 1;
  }
  puVar8 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  puVar7 = 
  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
  ;
  puVar6 = System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_TypeInfo;
  puVar1 = (undefined8 *)
           System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
  ;
  puVar5 = 
  System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
  ;
  puVar2 = (undefined8 *)
           System_Collections_Generic_Dictionary<GestureEvent_GestureTypeOneofCase,_long>_TypeInfo;
  puVar4 = PTR_DAT_065c89e8;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar12 != 0)) {
    cVar3 = *(char *)(lVar12 + 0x28);
    uVar9 = thunk_FUN_02cea894(*(undefined8 *)
                                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                              );
    if (cVar3 != '\0') {
      puVar1 = (undefined8 *)puVar6;
    }
    FUN_04a68410(uVar9,param_1,*puVar1,0);
    *(undefined8 *)(param_1 + 0x50) = uVar9;
    cVar3 = *(char *)(lVar12 + 0x29);
    uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar7);
    if (cVar3 != '\0') {
      puVar2 = (undefined8 *)puVar5;
    }
    FUN_04a68208(uVar9,param_1,*puVar2,0);
    *(undefined8 *)(param_1 + 0x58) = uVar9;
    uVar9 = *(undefined8 *)puVar8;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar9 = FUN_04f3fb68(uVar9,0);
    lVar12 = FUN_05ef33f8(param_1,uVar9,0);
    puVar4 = 
    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
    ;
    if (lVar12 != 0) {
      if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
        uVar14 = 0;
        uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          lVar13 = *(long *)(lVar12 + 0x20 + uVar14 * 8);
          if (lVar13 == 0) {
            lVar10 = 0;
          }
          else {
            uVar9 = *(undefined8 *)puVar4;
            lVar10 = thunk_FUN_02cea798(lVar13,uVar9);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce8018(lVar13,uVar9);
            }
          }
          FUN_05d2953c(param_1,lVar10);
          uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


