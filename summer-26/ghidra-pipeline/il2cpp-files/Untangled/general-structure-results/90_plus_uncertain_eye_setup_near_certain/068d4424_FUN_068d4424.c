/*
FUNCTION_NAME: FUN_068d4424
ENTRY_POINT: 068d4424
PROGRAM: Untangled-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_068d4424(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_071d704b & 1) == 0) {
    FUN_02f07e70(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                );
    FUN_02f07e70(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo);
    DAT_071d704b = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar3 = FUN_04c8610c(*(long *)(param_1 + 0x10),param_2,&local_40,
                           *(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo), (uVar3 & 1) != 0)) {
    local_28 = local_38;
    iVar1 = FUN_068e1af8(&local_28,0);
    if (iVar1 == 4) {
      if (local_40 == 0) {
LAB_068d456c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = FUN_068e1db8(local_40,local_38,param_3,0);
      if ((uVar3 & 1) != 0) {
        uVar2 = 1;
        goto LAB_068d4554;
      }
    }
    else {
      if (iVar1 == 7) {
        lVar4 = FUN_06821d98(local_40,local_28,0);
        if (lVar4 == 0) goto LAB_068d456c;
        uVar5 = FUN_0546964c(lVar4,0);
        if (*(int *)(*(long *)OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo);
        }
        uVar2 = FUN_06822f64(uVar5,param_3,0);
        goto LAB_068d4554;
      }
      FUN_068d4570(param_2,4,local_40,local_38);
    }
  }
  uVar2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
LAB_068d4554:
  return uVar2 & 1;
}


