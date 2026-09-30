/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.TwistGesture$$set_startPosition1
ENTRY_POINT: 05d301d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_AR_TwistGesture__set_startPosition1(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 in_w8;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  
  *(undefined1 *)(unaff_x20 + 0x7a7) = in_w8;
  puVar3 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  puVar2 = 
  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
  ;
  puVar1 = PTR_DAT_065c89e8;
  if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x20) + 0x20) != 0)) {
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                              );
    FUN_04a68410();
    *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_04a68208();
    *(undefined8 *)(unaff_x19 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f3fb68(uVar4,0);
    lVar5 = FUN_05ef33f8();
    puVar1 = 
    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
    ;
    if (lVar5 != 0) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar9 = 0;
        uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          lVar8 = *(long *)(lVar5 + 0x20 + uVar9 * 8);
          if (lVar8 != 0) {
            uVar4 = *(undefined8 *)puVar1;
            lVar6 = thunk_FUN_02cea798(lVar8,uVar4);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce8018(lVar8,uVar4);
            }
          }
          FUN_05d2953c();
          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


