/*
FUNCTION_NAME: FUN_07006320
ENTRY_POINT: 07006320
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void FUN_07006320(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar4 = UnityEngine_VFX_VFXRuntimeResources_TypeInfo;
  puVar3 = UnityEngine_VFX_VFXManager_TypeInfo;
  puVar1 = UnityEngine_VFX_VFXExpressionValues_TypeInfo;
  puVar2 = PTR_DAT_075dbfa0;
  if ((bRam0000000007a5a12c & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b2b0);
    FUN_031f20f4(UnityEngine_VFX_VFXSpawnerState_TypeInfo);
    FUN_031f20f4(Best_HTTP_Hosts_Settings_HostSettingsManager_TypeInfo);
    FUN_031f20f4(PTR_DAT_075dbfa0);
    FUN_031f20f4(UnityEngine_VFX_VFXManager_TypeInfo);
    FUN_031f20f4(UnityEngine_VFX_VFXExpressionValues_TypeInfo);
    FUN_031f20f4(UnityEngine_VFX_Utility_VFXVelocityBinder_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_VRControllerState_t_TypeInfo);
    FUN_031f20f4(OVR_OpenVR_VRControllerState_t_Packed_TypeInfo);
    FUN_031f20f4(UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_TypeInfo);
    FUN_031f20f4(UnityEngine_Analytics_VRDeviceAnalyticAspect_TypeInfo);
    FUN_031f20f4(UnityEngine_Analytics_VRDeviceMirrorAnalytic_TypeInfo);
    FUN_031f20f4(UnityEngine_Analytics_VRDeviceUserAnalytic_TypeInfo);
    FUN_031f20f4(UnityEngine_VFX_VFXRuntimeResources_TypeInfo);
    bRam0000000007a5a12c = 1;
  }
  puVar5 = UnityEngine_Analytics_VRDeviceUserAnalytic_TypeInfo;
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_047aec0c(uVar6,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar6;
  thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar6);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar2;
  }
  puVar3 = UnityEngine_VFX_Utility_VFXVelocityBinder_TypeInfo;
  puVar1 = PTR_DAT_0759b2b0;
  lVar11 = *(long *)puVar5;
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar11);
    lVar11 = *(long *)puVar5;
  }
  uVar12 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05d75504(uVar8,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e47444(uVar6,uVar8,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto LAB_07006800;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto LAB_07006800;
  }
  puVar3 = OVR_OpenVR_VRControllerState_t_TypeInfo;
  thunk_FUN_0329bf60(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05d75504(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e47444(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto LAB_07006800;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto LAB_07006800;
  }
  puVar4 = OVR_OpenVR_VRControllerState_t_Packed_TypeInfo;
  puVar3 = Best_HTTP_Hosts_Settings_HostSettingsManager_TypeInfo;
  thunk_FUN_0329bf60(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  System_Collections_Generic_HashSet<ulong>__AddOrGetLocation(uVar6,uVar12,*(undefined8 *)puVar4,0);
  lVar7 = FUN_05e47444(uVar8,uVar6,0);
  if (lVar7 == 0) {
    lVar11 = 0;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_0322f04c(lVar7,uVar6);
    if (lVar11 == 0) goto LAB_0700682c;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar9 = lVar11;
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_0322f04c(lVar7,uVar6);
    if (lVar11 == 0) goto LAB_07006838;
  }
  puVar3 = UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_TypeInfo;
  thunk_FUN_0329bf60(plVar9,lVar11);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05d75504(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e47444(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto LAB_07006800;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto LAB_07006800;
  }
  puVar4 = UnityEngine_Analytics_VRDeviceAnalyticAspect_TypeInfo;
  puVar3 = UnityEngine_VFX_VFXSpawnerState_TypeInfo;
  thunk_FUN_0329bf60(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_042d5df8(uVar6,uVar12,*(undefined8 *)puVar4,0);
  lVar7 = FUN_05e47444(uVar8,uVar6,0);
  if (lVar7 == 0) {
    lVar11 = 0;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_0322f04c(lVar7,uVar6);
    if (lVar11 == 0) {
LAB_0700682c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar7,uVar6);
    }
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar9 = lVar11;
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_0322f04c(lVar7,uVar6);
    if (lVar11 == 0) {
LAB_07006838:
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar7,uVar6);
    }
  }
  puVar3 = UnityEngine_Analytics_VRDeviceMirrorAnalytic_TypeInfo;
  thunk_FUN_0329bf60(plVar9,lVar11);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05d75504(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e47444(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar10 = 0;
LAB_07006814:
    thunk_FUN_0329bf60(plVar10,plVar9);
    return;
  }
  lVar7 = *(long *)puVar1;
  if (*plVar9 == lVar7) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar10 = (long)plVar9;
    if (*plVar9 == lVar7) goto LAB_07006814;
  }
LAB_07006800:
                    /* WARNING: Subroutine does not return */
  FUN_031f2730(plVar9);
}


