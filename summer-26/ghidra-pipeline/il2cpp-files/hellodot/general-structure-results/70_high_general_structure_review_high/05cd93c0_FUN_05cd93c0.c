/*
FUNCTION_NAME: FUN_05cd93c0
ENTRY_POINT: 05cd93c0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_05cd93c0(long *param_1)

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
  undefined8 uVar10;
  long lVar11;
  
  puVar9 = Niantic_Peridot_Tray_TrayBox_CreatureTrayDisplayInfo_var;
  puVar8 = UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseData_var;
  puVar7 = UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_RaycastHitData_var;
  puVar6 = UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_ImplementationData_var;
  puVar5 = UnityEngine_TextCore_Text_WordWrapState_var;
  puVar4 = PTR_DAT_065e7580;
  puVar3 = PTR_DAT_065e6990;
  puVar2 = PTR_DAT_065e6980;
  puVar1 = PTR_DAT_065dff30;
  if ((DAT_06a7a3dd & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dff30);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_RaycastHitData_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseData_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_ImplementationData_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Tray_TrayBox_CreatureTrayDisplayInfo_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000948_PostfixBurstDelegate_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df1b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_TextCore_Text_WordWrapState_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0662e350);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntry_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7580);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6990);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_Antlr3_Runtime_Tree_TreeWizard_TreePattern_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6980);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_VisitorDotOption_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e8618);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_UIElements_FocusController_FocusedElement_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_Antlr3_Runtime_Tree_TreeWizard_WildcardTreePattern_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Globalization_TimeSpanParse_TimeSpanRawInfo_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_ComponentModel_TypeDescriptor_TypeDescriptorComObject_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_InsertBeforeOp_var);
    DAT_06a7a3dd = 1;
  }
  (**(code **)(*param_1 + 0x5c8))(param_1,1,*(undefined8 *)(*param_1 + 0x5d0));
  uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04a5701c(uVar10,param_1,*(undefined8 *)puVar6,0);
  lVar11 = FUN_05ce4b64(param_1,*(undefined8 *)puVar4,uVar10,0);
  param_1[0x12] = lVar11;
  uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04a5701c(uVar10,param_1,*(undefined8 *)puVar7,0);
  lVar11 = FUN_05ce4b64(param_1,*(undefined8 *)puVar2,uVar10,0);
  param_1[0x13] = lVar11;
  uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04a5701c(uVar10,param_1,*(undefined8 *)puVar8,0);
  lVar11 = FUN_05ce4b64(param_1,*(undefined8 *)puVar3,uVar10,0);
  param_1[0x14] = lVar11;
  uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04a5701c(uVar10,param_1,*(undefined8 *)puVar9,0);
  lVar11 = FUN_05ce4b64(param_1,*(undefined8 *)Niantic_Peridot_Telemetry_VisitorDotOption_var,uVar10
                        ,0);
  param_1[0x15] = lVar11;
  lVar11 = FUN_0354009c(0x3f800000,param_1,*(undefined8 *)PTR_DAT_065e8618,
                        *(undefined8 *)PTR_DAT_065df1b0);
  param_1[0x16] = lVar11;
  lVar11 = FUN_0353fe98(param_1,*(undefined8 *)
                                 UnityEngine_UIElements_FocusController_FocusedElement_var,0,
                        *(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000948_PostfixBurstDelegate_var
                       );
  param_1[0x17] = lVar11;
  lVar11 = FUN_05ce4d5c(param_1,*(undefined8 *)PTR_DAT_0662e350,0);
  param_1[0x18] = lVar11;
  lVar11 = FUN_05ce4d5c(param_1,*(undefined8 *)
                                 Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_InsertBeforeOp_var
                        ,0);
  param_1[0x19] = lVar11;
  lVar11 = FUN_05ce4d5c(param_1,*(undefined8 *)
                                 Unity_VisualScripting_Antlr3_Runtime_Tree_TreeWizard_WildcardTreePattern_var
                        ,0);
  param_1[0x1a] = lVar11;
  lVar11 = FUN_03540680(param_1,*(undefined8 *)
                                 Unity_VisualScripting_Antlr3_Runtime_Tree_TreeWizard_TreePattern_var
                        ,*(undefined8 *)puVar5);
  param_1[0x1b] = lVar11;
  lVar11 = FUN_03540680(param_1,*(undefined8 *)
                                 System_ComponentModel_TypeDescriptor_TypeDescriptorComObject_var,
                        *(undefined8 *)puVar5);
  param_1[0x1c] = lVar11;
  lVar11 = FUN_03540680(param_1,*(undefined8 *)
                                 System_Globalization_TimeSpanParse_TimeSpanRawInfo_var,
                        *(undefined8 *)puVar5);
  param_1[0x1d] = lVar11;
  lVar11 = FUN_03540680(param_1,*(undefined8 *)
                                 UnityEngine_Timeline_TimeNotificationBehaviour_NotificationEntry_var
                        ,*(undefined8 *)puVar5);
  param_1[0x1e] = lVar11;
  return;
}


