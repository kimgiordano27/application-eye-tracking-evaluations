/*
FUNCTION_NAME: System.Collections.Specialized.NameValueCollection$$Get
ENTRY_POINT: 05662700
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Collections_Specialized_NameValueCollection__Get(void)

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
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_02d6084c();
                    /* try { // try from 0566270c to 0576271f has its CatchHandler @ 05661cd8 */
  FUN_02d6084c(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
  FUN_02d6084c(OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo);
                    /* try { // try from 05662720 to 0576272f has its CatchHandler @ 05662734 */
  FUN_02d6084c(
              OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
              );
  FUN_02d6084c(
              OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
              );
                    /* catch() { ... } // from try @ 05662650 with catch @ 05662734
                       catch() { ... } // from try @ 05662720 with catch @ 05662734 */
                    /* try { // try from 05662738 to 0576273b has its CatchHandler @ 05662e78 */
                    /* try { // try from 0566273c to 0576275f has its CatchHandler @ 05661cd8 */
  FUN_02d6084c(System_Func<ContextualMenuPopulateEvent>_TypeInfo);
                    /* catch() { ... } // from try @ 056626f0 with catch @ 05662740 */
                    /* catch() { ... } // from try @ 056626cc with catch @ 05662744 */
                    /* catch() { ... } // from try @ 056626d0 with catch @ 05662748 */
  FUN_02d6084c(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x786) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* try { // try from 05662760 to 05762793 has its CatchHandler @ 05662830 */
  if (*(char *)(unaff_x19 + 0x88) == '\0') {
    FUN_05662a9c();
  }
  else {
    FUN_05662a48();
  }
  if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_05662884:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_0559160c(*(long *)(unaff_x19 + 0x28),0);
  if ((*(char *)(unaff_x19 + 0x49) != '\0') && (*(long *)(unaff_x19 + 0xb8) != 0)) {
    lVar7 = FUN_04895520(*(long *)(unaff_x19 + 0xb8),
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
        uVar9 = FUN_05662c00();
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        uVar2 = *(undefined4 *)(lVar6 + 0x1c);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
        FUN_055b0df0(uVar10,*(undefined8 *)puVar5,uVar11,uVar9,uVar1,uVar2,0);
        FUN_05662d18();
      }
    }
    FUN_04b3adcc(&stack0x00000008,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
  }
  return;
}


