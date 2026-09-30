/*
FUNCTION_NAME: FUN_056626c8
ENTRY_POINT: 056626c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_056626c8(long param_1,uint param_2)

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
  undefined8 uVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
                    /* try { // try from 056626cc to 057626cf has its CatchHandler @ 05662744 */
                    /* try { // try from 056626d0 to 057626db has its CatchHandler @ 05662748 */
  if ((DAT_06b7f786 & 1) == 0) {
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
    DAT_06b7f786 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (*(char *)(param_1 + 0x88) == '\0') {
    FUN_05662a9c(param_1,param_2 & 1);
  }
  else {
    FUN_05662a48(param_1);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_05662884:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_0559160c(*(long *)(param_1 + 0x28),0);
  if ((*(char *)(param_1 + 0x49) != '\0') && (*(long *)(param_1 + 0xb8) != 0)) {
    lVar7 = FUN_04895520(*(long *)(param_1 + 0xb8),
                         *(undefined8 *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    if (lVar7 == 0) goto LAB_05662884;
    FUN_04488580(&local_78,lVar7,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    puVar5 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
    puVar4 = OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
    puVar3 = System_Func<ContextualMenuPopulateEvent>_TypeInfo;
    while (uVar8 = FUN_04b3add0(&local_78,*(undefined8 *)puVar4), lVar6 = local_68, lVar7 = local_68
          , (uVar8 & 1) != 0) {
      for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
        uVar11 = *(undefined8 *)(lVar6 + 0x10);
        uVar9 = FUN_05662c00(param_1);
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        uVar2 = *(undefined4 *)(lVar6 + 0x1c);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
        FUN_055b0df0(uVar10,*(undefined8 *)puVar5,uVar11,uVar9,uVar1,uVar2,0);
        FUN_05662d18(param_1,0,uVar10);
      }
    }
    FUN_04b3adcc(&local_78,*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
  }
  return;
}


