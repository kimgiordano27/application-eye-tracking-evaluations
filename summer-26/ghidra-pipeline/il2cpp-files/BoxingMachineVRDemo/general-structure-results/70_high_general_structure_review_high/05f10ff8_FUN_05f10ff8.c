/*
FUNCTION_NAME: FUN_05f10ff8
ENTRY_POINT: 05f10ff8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05f10ff8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  puVar12 = Method_System_Data_DataRelation_set_Nested__;
  puVar11 = Method_System_Data_DataRelation_ValidateMultipleNestedRelations__;
  puVar10 = Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<SerializeField>__;
  puVar9 = 
  Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__;
  puVar8 = 
  Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PropertyChangedEvent,_VisualElement>__
  ;
  puVar7 = 
  Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerCancelEvent>__;
  puVar6 = 
  Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<NavigationSubmitEvent>__;
  puVar5 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_uint>__;
  if ((DAT_06b83f9d & 1) == 0) {
    FUN_02d6084c(Method_System_Data_DataRelation_set_Nested__);
    FUN_02d6084c(Method_System_Data_DataRelationCollection_AddCore__);
    FUN_02d6084c(Method_System_Linq_Expressions_Interpreter_ByRefNewInstruction_Run__);
    FUN_02d6084c(Method_System_Data_DataRelationCollection_RegisterName__);
    FUN_02d6084c(Method_System_Data_DataRelation_ValidateMultipleNestedRelations__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_ByteConverter_DeserializeInteger__);
    FUN_02d6084c(Method_System_Data_DataRelationCollection_RemoveAt__);
    FUN_02d6084c(Method_System_Configuration_ConfigurationSection_IsModified__);
    FUN_02d6084c(
                Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__
                );
    FUN_02d6084c(
                Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<SerializeField>__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<sbyte,_Decimal>__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PropertyChangedEvent,_VisualElement>__
                );
    FUN_02d6084c(Method_System_Security_Claims_ClaimsIdentity_FindFirst__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerCancelEvent>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<NavigationSubmitEvent>__
                );
    FUN_02d6084c(Method_System_Security_Claims_ClaimsIdentity_Deserialize__);
    FUN_02d6084c(Method_System_Data_DataRelationCollection_RemoveCore__);
    FUN_02d6084c(Method_System_Data_DataRow_BeginEditInternal__);
    FUN_02d6084c(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_byte>__);
    FUN_02d6084c(Method_System_Data_DataRow_CancelEdit__);
    FUN_02d6084c(Method_System_Data_DataRow_CheckColumn__);
    FUN_02d6084c(Method_System_Data_DataRow_CheckForLoops__);
    FUN_02d6084c(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_long>__);
    FUN_02d6084c(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_uint>__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_DeviceConfig>_Dispose__
                );
    DAT_06b83f9d = 1;
  }
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
  FUN_03aabc60(uVar14,*(undefined8 *)puVar12);
  *(undefined8 *)(param_1 + 0x260) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x260,uVar14);
  uVar4 = _UNK_01209378;
  uVar3 = _DAT_01209370;
  uVar2 = _UNK_01208d08;
  uVar1 = _DAT_01208d00;
  uVar14 = DAT_01206d68;
  *(undefined1 *)(param_1 + 0x26c) = 1;
  *(undefined4 *)(param_1 + 0x270) = 0x41f00000;
  *(undefined8 *)(param_1 + 0x290) = uVar4;
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  *(undefined8 *)(param_1 + 0x298) = uVar1;
  *(undefined4 *)(param_1 + 0x2a8) = 0x14;
  *(undefined8 *)(param_1 + 0x2b0) = uVar14;
  uVar13 = FUN_0606b4c8(0xffffffff,0);
  *(undefined8 *)(param_1 + 0x2c8) = 0x100000001;
  uVar14 = DAT_012077c8;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2c4) = uVar13;
  *(undefined4 *)(param_1 + 0x2dc) = 0x40400000;
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  *(undefined2 *)(param_1 + 0x2e2) = 0x101;
  *(undefined8 *)(param_1 + 0x2e8) = uVar14;
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_05ee51dc(uVar14,0);
  *(undefined8 *)(param_1 + 0x300) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x300,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
  FUN_05ee5224(uVar14,0);
  *(undefined8 *)(param_1 + 0x308) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x308,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_05f66578(uVar14,*(undefined8 *)puVar5,0,0,2,0);
  *(undefined8 *)(param_1 + 0x318) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x318,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_0463ca68(uVar14,*(undefined8 *)
                       Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_byte>__,2,
               *(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 800) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 800,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_0463ca68(uVar14,*(undefined8 *)Method_System_Data_DataRow_CheckColumn__,2,
               *(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x328) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x328,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_0463ca68(uVar14,*(undefined8 *)Method_System_Data_DataRow_CancelEdit__,2,*(undefined8 *)puVar7
              );
  *(undefined8 *)(param_1 + 0x330) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x330,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_0463ca68(uVar14,*(undefined8 *)Method_System_Data_DataRow_CheckForLoops__,2,
               *(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x338) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x338,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_05f66578(uVar14,*(undefined8 *)
                       Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<int,_long>__,0,0,2,
               0);
  *(undefined8 *)(param_1 + 0x340) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x340,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_0463ca68(uVar14,*(undefined8 *)Method_System_Data_DataRelationCollection_RemoveCore__,2,
               *(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x348) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x348,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_System_Security_Claims_ClaimsIdentity_Deserialize__);
  FUN_0463c2e4(uVar14,*(undefined8 *)Method_System_Data_DataRow_BeginEditInternal__,0,
               *(undefined8 *)Method_System_Security_Claims_ClaimsIdentity_FindFirst__);
  *(undefined8 *)(param_1 + 0x350) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x350,uVar14);
  *(undefined4 *)(param_1 + 0x358) = 1;
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_Firebase_Firestore_Converters_ByteConverter_DeserializeInteger__
                             );
  FUN_03aabc60(uVar14,*(undefined8 *)
                       Method_System_Linq_Expressions_Interpreter_ByRefNewInstruction_Run__);
  *(undefined8 *)(param_1 + 0x388) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x388,uVar14);
  uVar14 = FUN_02d60934(*(undefined8 *)Method_System_Configuration_ConfigurationSection_IsModified__
                        ,10);
  *(undefined8 *)(param_1 + 0x3b0) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x3b0);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Data_DataRelationCollection_RemoveAt__);
  FUN_05f21c3c(uVar14,0);
  *(undefined8 *)(param_1 + 0x3c0) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x3c0,uVar14);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_System_Data_DataRelationCollection_RegisterName__);
  FUN_039e337c(uVar14,*(undefined8 *)Method_System_Data_DataRelationCollection_AddCore__);
  *(undefined8 *)(param_1 + 0x3d0) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x3d0,uVar14);
  *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
  puVar5 = 
  Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_DeviceConfig>_Dispose__
  ;
  uVar14 = FUN_02d60934(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_DeviceConfig>_Dispose__
                        ,3);
  *(undefined8 *)(param_1 + 0x400) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x400);
  uVar14 = FUN_02d60934(*(undefined8 *)puVar5,3);
  *(undefined8 *)(param_1 + 0x408) = uVar14;
  thunk_FUN_02dd37b4(param_1 + 0x408);
  if (*(int *)(*(long *)Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<sbyte,_Decimal>__
              + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05f0ac1c(param_1);
  return;
}


