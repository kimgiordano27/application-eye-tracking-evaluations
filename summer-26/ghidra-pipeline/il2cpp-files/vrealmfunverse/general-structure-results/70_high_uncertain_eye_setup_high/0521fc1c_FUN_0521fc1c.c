/*
FUNCTION_NAME: FUN_0521fc1c
ENTRY_POINT: 0521fc1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0521fc1c(long param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar5 = OVRManager_TypeInfo;
  puVar4 = OVRLocatable_TypeInfo;
  puVar3 = UnityEngine_EventSystems_OVRInputModule_TypeInfo;
  puVar2 = UnityEngine_Timeline_IPropertyCollector_TypeInfo;
  puVar1 = PTR_DAT_0631eec8;
  if ((DAT_066cfae2 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
    FUN_02b3c81c(OVRManager_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631eec8);
    FUN_02b3c81c(OVRMeshRenderer_TypeInfo);
    FUN_02b3c81c(OVRMixedReality_TypeInfo);
    FUN_02b3c81c(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_02b3c81c(OVRNativeBuffer_TypeInfo);
    FUN_02b3c81c(OVRLocatable_TypeInfo);
    FUN_02b3c81c(UnityEngine_Timeline_IPropertyCollector_TypeInfo);
    DAT_066cfae2 = 1;
  }
  FUN_0527a348(param_2,*(undefined8 *)puVar2,0);
  lVar7 = FUN_0316ec9c(param_5,*(undefined8 *)puVar3);
  FUN_03178968(lVar7,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = OVRMeshRenderer_TypeInfo;
  FUN_0521fe50(param_1,param_2,lVar7);
  if (param_4 != 0) {
    if (param_3 == 0) {
      if (lVar7 == 0) goto LAB_0521fe4c;
      iVar6 = FUN_03d437c0(lVar7,*(undefined8 *)puVar1);
      lVar8 = param_4;
      puVar11 = (undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo;
      if (iVar6 < 1) goto LAB_0521fd84;
    }
    uVar9 = thunk_FUN_02ba3594(OVRMixedRealityCaptureConfiguration_TypeInfo);
    uVar9 = FUN_052284ac(uVar9,0);
LAB_0521fe30:
    uVar10 = thunk_FUN_02ba3594(OVRNodeStateProperties_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9,uVar10);
  }
  lVar8 = param_3;
  puVar11 = (undefined8 *)OVRNativeBuffer_TypeInfo;
  if (param_3 == 0) {
    if (lVar7 == 0) goto LAB_0521fe4c;
    iVar6 = FUN_03d437c0(lVar7,*(undefined8 *)puVar1);
    if (iVar6 == 0) {
      uVar9 = FUN_05228580(0);
      goto LAB_0521fe30;
    }
  }
  else {
LAB_0521fd84:
    FUN_0527a348(lVar8,*puVar11,0);
  }
  if (param_1 == 0) {
    if (param_2 == (long *)0x0) {
LAB_0521fe4c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  }
  uVar9 = thunk_FUN_02b79644(*(undefined8 *)OVRMixedReality_TypeInfo);
  FUN_05233e74(uVar9,param_1,param_2,param_3,param_4,lVar7,0);
  return uVar9;
}


