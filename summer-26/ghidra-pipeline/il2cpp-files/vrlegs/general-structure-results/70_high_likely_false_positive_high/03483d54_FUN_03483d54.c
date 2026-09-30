/*
FUNCTION_NAME: FUN_03483d54
ENTRY_POINT: 03483d54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_03483d54(void)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  
  puVar2 = UnityEngine_UIElements_TreeView_TypeInfo;
  puVar1 = PTR_DAT_03cbe5e8;
  if ((DAT_0412d8c0 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    FUN_01ab69ac(_Common_ScriptableObjects_Scripts_TrialItem_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_IEnumerable<MemberSpec>_TypeInfo);
    FUN_01ab69ac(AmplifyImpostors_Triangulator_TypeInfo);
    FUN_01ab69ac(UnityEngine_XR_Interaction_Toolkit_Utilities_TriggerContactMonitor_TypeInfo);
    FUN_01ab69ac(_Common_UnityServicesExt_Support_TriggerEventTracker_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_InGameConsole_TriggerSliderButton_TypeInfo);
    FUN_01ab69ac(System_Security_Cryptography_TripleDES_TypeInfo);
    FUN_01ab69ac(System_Security_Util_TokenizerShortBlock_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_TreeView_TypeInfo);
    FUN_01ab69ac(System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    FUN_01ab69ac(Animancer_TransitionLibraries_TransitionModifierGroup_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_Translate_TypeInfo);
    FUN_01ab69ac(System_Security_Cryptography_TripleDESTransform_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_TryCatch_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_TryCatchFinallyHandler_TypeInfo);
    DAT_0412d8c0 = 1;
  }
  puVar3 = UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo;
  uVar17 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_0277b678(uVar17,0);
  lVar18 = *(long *)puVar3;
  lVar16 = *(long *)(lVar18 + 0x38);
  if (lVar16 == 0) {
    FUN_01a47054(lVar18);
    lVar16 = *(long *)(lVar18 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 8);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_01a46ff8();
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar8 = System_Security_Cryptography_TripleDES_TypeInfo;
  puVar7 = _Common_Gameplay_Support_Scripts_InGameConsole_TriggerSliderButton_TypeInfo;
  puVar6 = _Common_UnityServicesExt_Support_TriggerEventTracker_TypeInfo;
  puVar5 = UnityEngine_XR_Interaction_Toolkit_Utilities_TriggerContactMonitor_TypeInfo;
  puVar4 = AmplifyImpostors_Triangulator_TypeInfo;
  puVar3 = System_Security_Util_TokenizerShortBlock_TypeInfo;
  puVar2 = System_Collections_Generic_IEnumerable<MemberSpec>_TypeInfo;
  puVar1 = System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo;
  lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_01a46ff8();
  }
  puVar9 = Mono_CSharp_TryCatch_TypeInfo;
  uVar19 = **(undefined8 **)(lVar16 + 0xb8);
  uVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar5,0);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar3,0);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar12,0,*(undefined8 *)puVar6,0);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar13,0,*(undefined8 *)puVar7,0);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar14,0,*(undefined8 *)puVar8,0);
  uVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar15,0,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_031a9590(uVar17,uVar19,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,*(undefined8 *)puVar9,2,0);
  uVar17 = FUN_0277b678(*(undefined8 *)System_Security_Cryptography_TripleDESTransform_TypeInfo,0);
  lVar18 = *(long *)_Common_ScriptableObjects_Scripts_TrialItem_TypeInfo;
  lVar16 = *(long *)(lVar18 + 0x38);
  if (lVar16 == 0) {
    FUN_01a47054(lVar18);
    lVar16 = *(long *)(lVar18 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 8);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_01a46ff8();
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar6 = System_Linq_Expressions_Interpreter_TryCatchFinallyHandler_TypeInfo;
  puVar5 = System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo;
  puVar4 = UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo;
  puVar3 = UnityEngine_UIElements_Translate_TypeInfo;
  puVar1 = Animancer_TransitionLibraries_TransitionModifierGroup_TypeInfo;
  lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 8);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_01a46ff8();
  }
  uVar14 = **(undefined8 **)(lVar16 + 0xb8);
  uVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar10,0,*(undefined8 *)puVar1,0);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar11,0,*(undefined8 *)puVar3,0);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar12,0,*(undefined8 *)puVar4,0);
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_031aa554(uVar13,0,*(undefined8 *)puVar5,0);
  FUN_031a9590(uVar17,uVar14,uVar10,uVar11,uVar12,0,0,uVar13,*(undefined8 *)puVar6,7,0);
  return;
}


