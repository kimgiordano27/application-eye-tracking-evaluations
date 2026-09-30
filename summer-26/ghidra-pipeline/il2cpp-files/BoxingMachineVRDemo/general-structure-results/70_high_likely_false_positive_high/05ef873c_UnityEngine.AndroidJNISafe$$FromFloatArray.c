/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$FromFloatArray
ENTRY_POINT: 05ef873c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_AndroidJNISafe__FromFloatArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x23;
  undefined8 *puVar9;
  
  puVar4 = Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IExternalUserId>__;
                    /* catch() { ... } // from try @ 05ef86b0 with catch @ 05ef873c */
  puVar1 = Method_Firebase_Firestore_Converters_ConverterBase_DeserializeString__;
                    /* catch() { ... } // from try @ 05ef86a8 with catch @ 05ef8740 */
                    /* catch() { ... } // from try @ 05ef85cc with catch @ 05ef8744 */
                    /* catch() { ... } // from try @ 05ef855c with catch @ 05ef8748 */
  puVar9 = *(undefined8 **)(unaff_x23 + 0x590);
                    /* catch() { ... } // from try @ 05ef84b4 with catch @ 05ef874c */
                    /* catch() { ... } // from try @ 05ef84cc with catch @ 05ef8750 */
                    /* catch() { ... } // from try @ 05ef84a4 with catch @ 05ef8754 */
                    /* catch() { ... } // from try @ 05ef86a4 with catch @ 05ef8758 */
  if ((*(byte *)(unaff_x20 + 0xe37) & 1) == 0) {
                    /* catch() { ... } // from try @ 05ef86a0 with catch @ 05ef875c */
                    /* catch() { ... } // from try @ 05ef869c with catch @ 05ef8760 */
                    /* catch() { ... } // from try @ 05ef8698 with catch @ 05ef8764 */
    FUN_02d6084c(Method_System_IO_BinaryWriter_Write__);
                    /* catch() { ... } // from try @ 05ef8694 with catch @ 05ef8768 */
                    /* catch() { ... } // from try @ 05ef84e0 with catch @ 05ef876c */
                    /* catch() { ... } // from try @ 05ef8690 with catch @ 05ef8770 */
    FUN_02d6084c(Method_System_IO_BinaryWriter__ctor__);
                    /* catch() { ... } // from try @ 05ef86ac with catch @ 05ef8774
                       catch() { ... } // from try @ 05ef86b8 with catch @ 05ef8774 */
                    /* catch() { ... } // from try @ 05ef846c with catch @ 05ef8778 */
                    /* catch() { ... } // from try @ 05ef868c with catch @ 05ef877c */
    FUN_02d6084c(Method_UnityEngine_UIElements_BindingUpdater_GetExtractValueErrorString__);
                    /* catch() { ... } // from try @ 05ef842c with catch @ 05ef8780 */
                    /* catch() { ... } // from try @ 05ef8454 with catch @ 05ef8784 */
                    /* catch() { ... } // from try @ 05ef8484 with catch @ 05ef8788 */
    FUN_02d6084c(Method_System_IO_BinaryWriter_Write__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BindingUpdater_VisitAtPath<VisualElement>__);
                    /* try { // try from 05ef87a0 to 05ff87a3 has its CatchHandler @ 05ef87cc */
    FUN_02d6084c(Method_System_IO_BinaryWriter_Write__);
                    /* try { // try from 05ef87a4 to 05ff87db has its CatchHandler @ 05ef7de0 */
    FUN_02d6084c(Method_Firebase_Firestore_Converters_ConverterBase_DeserializeString__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_ConverterBase_DeserializeReference__);
    FUN_02d6084c(
                Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IInstallationId>__
                );
                    /* catch() { ... } // from try @ 05ef87a0 with catch @ 05ef87cc */
    FUN_02d6084c(Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IPlayerId>__);
    FUN_02d6084c(
                Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IExternalUserId>__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_BindingUpdater_GetVisitationErrorString__);
    *(undefined1 *)(unaff_x20 + 0xe37) = 1;
  }
  lVar5 = thunk_FUN_02d9d534(*puVar9);
  *(undefined4 *)(lVar5 + 0x14) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  FUN_0504920c(lVar5,0);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
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


