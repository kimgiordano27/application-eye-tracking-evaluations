/*
FUNCTION_NAME: FUN_064cfd00
ENTRY_POINT: 064cfd00
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_6
*/


void FUN_064cfd00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar6 = 
  UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionsResultCallbackDelegate_TypeInfo
  ;
  puVar5 = 
  UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionRequestProviderDelegate_TypeInfo
  ;
  puVar4 = Oculus_Avatar2_CAPI_ovrAvatar2LODCamera___TypeInfo;
  puVar3 = PTR_DAT_07287ad0;
  puVar2 = PTR_DAT_07283548;
  puVar1 = PTR_DAT_07280a10;
  if ((DAT_076df6d8 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280a10);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionRequestProviderDelegate_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07283548);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionsResultCallbackDelegate_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07287ad0);
    thunk_FUN_032e1da0(Oculus_Avatar2_CAPI_ovrAvatar2LODCamera___TypeInfo);
    DAT_076df6d8 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  FUN_064cfea8(&local_50,*(undefined8 *)puVar4);
  puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  puVar7[1] = uStack_48;
  *puVar7 = local_50;
  thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
  local_60 = 0;
  uStack_58 = 0;
  FUN_064cfea8(&local_60,*(undefined8 *)puVar5);
  lVar8 = *(long *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x18) = uStack_58;
  *(undefined8 *)(lVar9 + 0x10) = local_60;
  thunk_FUN_0333a630(*(long *)(lVar8 + 0xb8) + 0x10,0);
  local_70 = 0;
  uStack_68 = 0;
  FUN_064cfea8(&local_70,*(undefined8 *)puVar6);
  lVar8 = *(long *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x28) = uStack_68;
  *(undefined8 *)(lVar9 + 0x20) = local_70;
  thunk_FUN_0333a630(*(long *)(lVar8 + 0xb8) + 0x20,0);
  local_80 = 0;
  uStack_78 = 0;
  FUN_064cfea8(&local_80,*(undefined8 *)puVar2);
  lVar8 = *(long *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x38) = uStack_78;
  *(undefined8 *)(lVar9 + 0x30) = local_80;
  thunk_FUN_0333a630(*(long *)(lVar8 + 0xb8) + 0x30,0);
  local_90 = 0;
  uStack_88 = 0;
  FUN_064cfea8(&local_90,*(undefined8 *)puVar3);
  lVar8 = *(long *)puVar1;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar9 + 0x48) = uStack_88;
  *(undefined8 *)(lVar9 + 0x40) = local_90;
  thunk_FUN_0333a630(*(long *)(lVar8 + 0xb8) + 0x40,0);
  return;
}


