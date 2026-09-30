/*
FUNCTION_NAME: FUN_06542634
ENTRY_POINT: 06542634
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06542634(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 local_58 [8];
  
  if ((DAT_076dfacc & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                      );
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    DAT_076dfacc = 1;
  }
  puVar4 = Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__;
  puVar3 = 
  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
  ;
  puVar2 = 
  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
  ;
                    /* try { // try from 065426ac to 066426b3 has its CatchHandler @ 06542c08 */
  if (0 < *(int *)(param_1 + 0x70)) {
    uVar12 = 0;
    lVar9 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar7 == 0) {
LAB_06542828:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
                    /* try { // try from 065426e0 to 066426e7 has its CatchHandler @ 06542bfc */
      if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar11 = *(undefined8 *)(lVar7 + uVar12 * 8 + 0x20);
      if ((param_4 & 1) == 0) {
                    /* try { // try from 06542714 to 0664271b has its CatchHandler @ 06542bf8 */
        uVar5 = FUN_06542970(param_1,uVar11,param_2,param_3);
      }
      else {
        uVar5 = FUN_065428a0();
      }
      if ((uVar5 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
          System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                    (lVar9,*(undefined8 *)puVar3);
          if (lVar9 == 0) goto LAB_06542828;
        }
        lVar7 = *(long *)(lVar9 + 0x10);
        lVar8 = *(long *)puVar2;
                    /* try { // try from 06542748 to 0664274f has its CatchHandler @ 06542bf0 */
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_06542828;
                    /* try { // try from 06542750 to 06642c2f has its CatchHandler @ 06542158 */
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = uVar11;
          thunk_FUN_0333a630(puVar6,uVar11);
        }
        else {
          FUN_041e2c78(lVar9,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)*(int *)(param_1 + 0x70));
    if (lVar9 != 0) {
      local_58[0] = FUN_0659eda0(0);
      puVar2 = 
      Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
      ;
      if (0 < *(int *)(lVar9 + 0x18)) {
        iVar10 = 0;
        do {
          lVar7 = FUN_041e29a8(lVar9,iVar10,*(undefined8 *)puVar2);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_06542a64(param_1,lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar7 + 0x60));
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar9 + 0x18));
      }
      FUN_0659edf4(local_58,0);
    }
  }
  return;
}


