/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.MouseModel$$CopyTo
ENTRY_POINT: 05cf0618
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_UI_MouseModel__CopyTo(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *unaff_x23;
  float in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x3f8));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce78);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<OVRColocationSession_Data>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0661c6a0);
  *(undefined1 *)(unaff_x20 + 0x502) = 1;
  lVar2 = FUN_05cef550();
  lVar3 = FUN_05cef550();
  uStack000000000000000c = FUN_05efe82c(0);
  uVar4 = thunk_FUN_02cea4e8(*unaff_x23,&stack0x0000000c);
  puVar1 = PTR_DAT_065dab00;
  if (lVar3 != 0) {
    FUN_04679278(lVar3,*(undefined8 *)
                        System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,uVar4,
                 *(undefined8 *)PTR_DAT_065dab00);
    if (lVar2 != 0) {
      FUN_04679278(lVar2,*(undefined8 *)PTR_DAT_0661c6a0,uVar4,*(undefined8 *)puVar1);
      lVar2 = FUN_05cef550();
      lVar3 = FUN_05cef550();
      in_stack_00000008 = (float)FUN_05efe82c(0);
      in_stack_00000008 = 1.0 / in_stack_00000008;
      uVar4 = thunk_FUN_02cea4e8(*unaff_x23,&stack0x00000008);
      if ((lVar3 != 0) &&
         (FUN_04679278(lVar3,*(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo,uVar4,
                       *(undefined8 *)puVar1), lVar2 != 0)) {
        FUN_04679278(lVar2,*(undefined8 *)PTR_DAT_065dce78,uVar4,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


