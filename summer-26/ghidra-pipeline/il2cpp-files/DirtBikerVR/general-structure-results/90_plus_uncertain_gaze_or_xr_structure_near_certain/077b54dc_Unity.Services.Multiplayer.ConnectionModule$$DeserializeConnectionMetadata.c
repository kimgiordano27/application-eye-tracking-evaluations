/*
FUNCTION_NAME: Unity.Services.Multiplayer.ConnectionModule$$DeserializeConnectionMetadata
ENTRY_POINT: 077b54dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_possible_biometrics_hits_2
*/


void Unity_Services_Multiplayer_ConnectionModule__DeserializeConnectionMetadata(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xef0));
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
  *(undefined1 *)(unaff_x24 + 0x2e) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_077b3e00();
  FUN_077b3dcc();
  if (unaff_x22 != 0) {
    FUN_077b3e00();
    FUN_077b3dcc();
    FUN_077ae0dc();
    FUN_077b4820();
    FUN_077b3dcc();
  }
  puVar2 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  puVar1 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
  if (unaff_x21 != 0) {
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      FUN_077b3e00();
      FUN_077b3dcc();
      FUN_04de90b8();
      in_stack_00000040 = in_stack_00000010;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      while (uVar4 = FUN_061c1964(&stack0x00000030,*(undefined8 *)puVar2), lVar3 = in_stack_00000040
            , (uVar4 & 1) != 0) {
        FUN_077b3dcc();
        FUN_077b3e00();
        FUN_077b3dcc();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_077ae41c(lVar3);
        FUN_077b4820();
        FUN_077b3dcc();
        FUN_077b4820();
        FUN_077b3dcc();
      }
      FUN_061c1960(&stack0x00000030,*(undefined8 *)puVar1);
      FUN_077b4820();
      FUN_077b3dcc();
    }
    puVar2 = System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo;
    puVar1 = System_Action<OVRHand_MicrogestureType>_TypeInfo;
    if (unaff_x20 != 0) {
      if (0 < *(int *)(unaff_x20 + 0x18)) {
        FUN_077b3e00();
        FUN_077b3dcc();
        FUN_04de90b8(&stack0x00000018);
        while (uVar4 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar2),
              lVar3 = in_stack_00000028, (uVar4 & 1) != 0) {
          FUN_077b3dcc();
          FUN_077b3e00();
          FUN_077b3dcc();
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_077ae23c(lVar3);
          FUN_077b4820();
          FUN_077b3dcc();
          FUN_077b4820();
          FUN_077b3dcc();
        }
        FUN_061c1960(&stack0x00000018,*(undefined8 *)puVar1);
        FUN_077b4820();
        FUN_077b3dcc();
      }
      FUN_077b4820();
      FUN_077b3dcc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


