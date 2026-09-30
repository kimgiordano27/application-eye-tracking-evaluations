/*
FUNCTION_NAME: FUN_077b5468
ENTRY_POINT: 077b5468
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_possible_biometrics_hits_4
*/


void FUN_077b5468(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_0898702e & 1) == 0) {
    FUN_03a8a718(System_Action<OVRHand_MicrogestureType>_TypeInfo);
    FUN_03a8a718(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_03a8a718(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_03a8a718(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_03a8a718(System_Action<ProbeReferenceVolume_ExtraDataActionInput>_TypeInfo);
    FUN_03a8a718(System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo);
    FUN_03a8a718(System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo);
    FUN_03a8a718(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
    FUN_03a8a718(System_Action<DebugUI_Field<int>,_int>_TypeInfo);
    FUN_03a8a718(System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084aa3a0);
    FUN_03a8a718(System_Action<List<OVRAnchor>,_int>_TypeInfo);
    FUN_03a8a718(
                System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_03a8a718(System_Action<AuthenticationState,_AuthenticationState>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08495690);
    DAT_0898702e = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_077b3e00(param_1,param_2);
  FUN_077b3dcc(param_1,param_1 + 0x98);
  if (param_3 != 0) {
    FUN_077b3e00(param_1,*(undefined8 *)
                          System_Action<AuthenticationState,_AuthenticationState>_TypeInfo);
    FUN_077b3dcc(param_1,param_1 + 0x98);
    FUN_077ae0dc(param_3,param_1);
    FUN_077b4820(param_1);
    FUN_077b3dcc(param_1,param_1 + 0xa0);
  }
  puVar4 = System_Action<List<OVRAnchor>,_int>_TypeInfo;
  puVar3 = System_Action<DebugUI_Field<bool>,_bool>_TypeInfo;
  puVar2 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  puVar1 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x18)) {
      FUN_077b3e00(param_1,*(undefined8 *)
                            System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                  );
      FUN_077b3dcc(param_1,param_1 + 0xa8);
      FUN_04de90b8(&local_90,param_4,*(undefined8 *)puVar3);
      local_50 = local_80;
      puStack_58 = puStack_88;
      local_60 = local_90;
      local_90 = 0;
      puStack_88 = &local_60;
      while (uVar6 = FUN_061c1964(&local_60,*(undefined8 *)puVar2), lVar5 = local_50,
            (uVar6 & 1) != 0) {
        FUN_077b3dcc(param_1,param_1 + 0x98);
        FUN_077b3e00(param_1,*(undefined8 *)puVar4);
        FUN_077b3dcc(param_1,param_1 + 0x98);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_077ae41c(lVar5,param_1);
        FUN_077b4820(param_1);
        FUN_077b3dcc(param_1,param_1 + 0xa0);
        FUN_077b4820(param_1);
        FUN_077b3dcc(param_1,param_1 + 0xa0);
      }
      FUN_061c1960(&local_60,*(undefined8 *)puVar1);
      FUN_077b4820(param_1);
      FUN_077b3dcc(param_1,param_1 + 0xb0);
    }
    puVar4 = System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo;
    puVar3 = System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
    puVar2 = System_Action<OVRHand_MicrogestureType>_TypeInfo;
    puVar1 = PTR_DAT_084aa3a0;
    if (param_5 != 0) {
      if (0 < *(int *)(param_5 + 0x18)) {
        FUN_077b3e00(param_1,*(undefined8 *)PTR_DAT_08495690);
        FUN_077b3dcc(param_1,param_1 + 0xa8);
        FUN_04de90b8(&local_78,param_5,*(undefined8 *)puVar4);
        local_90 = 0;
        puStack_88 = &local_78;
        while (uVar6 = FUN_061c1964(&local_78,*(undefined8 *)puVar3), lVar5 = local_68,
              (uVar6 & 1) != 0) {
          FUN_077b3dcc(param_1,param_1 + 0x98);
          FUN_077b3e00(param_1,*(undefined8 *)puVar1);
          FUN_077b3dcc(param_1,param_1 + 0x98);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_077ae23c(lVar5,param_1);
          FUN_077b4820(param_1);
          FUN_077b3dcc(param_1,param_1 + 0xa0);
          FUN_077b4820(param_1);
          FUN_077b3dcc(param_1,param_1 + 0xa0);
        }
        FUN_061c1960(&local_78,*(undefined8 *)puVar2);
        FUN_077b4820(param_1);
        FUN_077b3dcc(param_1,param_1 + 0xb0);
      }
      FUN_077b4820(param_1);
      FUN_077b3dcc(param_1,param_1 + 0xa0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


