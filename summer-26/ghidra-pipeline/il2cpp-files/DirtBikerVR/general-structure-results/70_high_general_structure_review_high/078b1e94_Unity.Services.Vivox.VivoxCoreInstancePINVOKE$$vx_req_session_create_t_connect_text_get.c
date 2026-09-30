/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_connect_text_get
ENTRY_POINT: 078b1e94
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_connect_text_get
               (int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_38;
  
  if ((DAT_0898791d & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_List<RangePositionInfo>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<RayTracingInstanceCullingTest>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<QualityOptionOverride>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<RaycastHit>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<RaycastResult>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<RealtimeModel>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<RectInt>_TypeInfo);
    DAT_0898791d = 1;
  }
  puVar4 = System_Collections_Generic_List<QualityOptionOverride>_TypeInfo;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x40);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = FUN_078b2150(lVar6,*(undefined8 *)(param_1 + 10));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar6,*(undefined8 *)System_Collections_Generic_List<RectInt>_TypeInfo);
    uVar7 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)System_Collections_Generic_List<RealtimeModel>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_38;
      thunk_FUN_03afed3c(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe83b0(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)System_Collections_Generic_List<RangePositionInfo>_TypeInfo);
      return;
    }
  }
  uVar8 = FUN_0587c704(&local_38,
                       *(undefined8 *)System_Collections_Generic_List<RaycastResult>_TypeInfo);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<RaycastHit>_TypeInfo);
  FUN_078e1678(uVar9,uVar1,uVar2,uVar8,0);
  puVar5 = System_Collections_Generic_List<RayTracingInstanceCullingTest>_TypeInfo;
  iVar3 = *(int *)(*(long *)puVar4 + 0xe4);
  *param_1 = -2;
  if (iVar3 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar9,*(undefined8 *)puVar5);
  return;
}


