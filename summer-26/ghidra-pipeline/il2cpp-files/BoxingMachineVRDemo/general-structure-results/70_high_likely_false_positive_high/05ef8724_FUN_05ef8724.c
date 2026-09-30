/*
FUNCTION_NAME: FUN_05ef8724
ENTRY_POINT: 05ef8724
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ef8724(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  puVar4 = Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IExternalUserId>__;
  puVar2 = Method_Firebase_Firestore_Converters_ConverterBase_DeserializeString__;
                    /* catch() { ... } // from try @ 05ef8550 with catch @ 05ef8724 */
  puVar1 = Method_Firebase_Firestore_Converters_ConverterBase_DeserializeReference__;
                    /* catch() { ... } // from try @ 05ef86bc with catch @ 05ef8728 */
                    /* catch() { ... } // from try @ 05ef8518 with catch @ 05ef872c */
                    /* catch() { ... } // from try @ 05ef85ac with catch @ 05ef8730 */
                    /* catch() { ... } // from try @ 05ef8598 with catch @ 05ef8734 */
                    /* catch() { ... } // from try @ 05ef86b4 with catch @ 05ef8738 */
  if ((DAT_06b83e37 & 1) == 0) {
    FUN_02d6084c(Method_System_IO_BinaryWriter_Write__);
    FUN_02d6084c(Method_System_IO_BinaryWriter__ctor__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BindingUpdater_GetExtractValueErrorString__);
    FUN_02d6084c(Method_System_IO_BinaryWriter_Write__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BindingUpdater_VisitAtPath<VisualElement>__);
    FUN_02d6084c(Method_System_IO_BinaryWriter_Write__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_ConverterBase_DeserializeString__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_ConverterBase_DeserializeReference__);
    FUN_02d6084c(
                Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IInstallationId>__
                );
    FUN_02d6084c(Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IPlayerId>__);
    FUN_02d6084c(
                Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IExternalUserId>__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_BindingUpdater_GetVisitationErrorString__);
    DAT_06b83e37 = 1;
  }
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  *(undefined4 *)(lVar5 + 0x14) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  FUN_0504920c(lVar5,0);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_05ef1d58(uVar6,lVar5);
  *(undefined8 *)(param_1 + 0x138) = uVar6;
  thunk_FUN_02dd37b4(param_1 + 0x138,uVar6);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar2 = Method_System_IO_BinaryWriter_Write__;
  puVar1 = Method_System_IO_BinaryWriter_Write__;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_IO_BinaryWriter__ctor__);
    FUN_04d566c0(lVar8,uVar6,
                 *(undefined8 *)
                  Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IInstallationId>__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_03955b3c(uVar6,lVar8,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x140) = uVar6;
  thunk_FUN_02dd37b4(param_1 + 0x140,uVar6);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar4;
  }
  puVar3 = Method_UnityEngine_UIElements_BindingUpdater_GetVisitationErrorString__;
  puVar2 = Method_UnityEngine_UIElements_BindingUpdater_GetExtractValueErrorString__;
  puVar1 = Method_UnityEngine_UIElements_BindingUpdater_VisitAtPath<VisualElement>__;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar4;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_IO_BinaryWriter_Write__);
    FUN_04d566c0(lVar8,uVar6,
                 *(undefined8 *)
                  Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IPlayerId>__,
                 0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar7 = lVar8;
    thunk_FUN_02dd37b4(plVar7,lVar8);
  }
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_03955b3c(uVar6,lVar8,0,0,0,0,10000,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x148) = uVar6;
  thunk_FUN_02dd37b4(param_1 + 0x148,uVar6);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05f0b044(param_1,0);
  return;
}


