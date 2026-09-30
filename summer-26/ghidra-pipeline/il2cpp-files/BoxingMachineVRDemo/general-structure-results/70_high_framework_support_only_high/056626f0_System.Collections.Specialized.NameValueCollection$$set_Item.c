/*
FUNCTION_NAME: System.Collections.Specialized.NameValueCollection$$set_Item
ENTRY_POINT: 056626f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Collections_Specialized_NameValueCollection__set_Item(ulong param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint unaff_w20;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
                    /* try { // try from 056626f0 to 0576270b has its CatchHandler @ 05662740 */
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    FUN_02d6084c(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_02d6084c(OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo);
    FUN_02d6084c(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    FUN_02d6084c(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    FUN_02d6084c(System_Func<ContextualMenuPopulateEvent>_TypeInfo);
    FUN_02d6084c(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x786) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(char *)(param_2 + 0x88) == '\0') {
    FUN_05662a9c(param_2,unaff_w20 & 1);
  }
  else {
    FUN_05662a48(param_2);
  }
  if (*(long *)(param_2 + 0x28) == 0) {
LAB_05662884:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_0559160c(*(long *)(param_2 + 0x28),0);
  if ((*(char *)(param_2 + 0x49) != '\0') && (*(long *)(param_2 + 0xb8) != 0)) {
    lVar7 = FUN_04895520(*(long *)(param_2 + 0xb8),
                         *(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    if (lVar7 == 0) goto LAB_05662884;
    FUN_04488580(&stack0x00000008,lVar7,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    puVar5 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
    puVar4 = OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
    puVar3 = System_Func<ContextualMenuPopulateEvent>_TypeInfo;
    while (uVar8 = FUN_04b3add0(&stack0x00000008,*(undefined8 *)puVar4), lVar6 = in_stack_00000018,
          lVar7 = in_stack_00000018, (uVar8 & 1) != 0) {
      for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
        uVar11 = *(undefined8 *)(lVar6 + 0x10);
        uVar9 = FUN_05662c00(param_2);
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        uVar2 = *(undefined4 *)(lVar6 + 0x1c);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
        FUN_055b0df0(uVar10,*(undefined8 *)puVar5,uVar11,uVar9,uVar1,uVar2,0);
        FUN_05662d18(param_2,0,uVar10);
      }
    }
    FUN_04b3adcc(&stack0x00000008,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
  }
  return;
}


