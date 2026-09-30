/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetSystemRecommendedMSAALevel
ENTRY_POINT: 0569be0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


undefined8
OVRPlugin_OVRP_1_6_0__ovrp_GetSystemRecommendedMSAALevel
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  int in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar4 = Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo;
  puVar3 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  if ((DAT_06dbc878 & 1) == 0) {
    FUN_02d965b8(Oculus_Platform_Request<AssetDetails>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
    DAT_06dbc878 = 1;
  }
  puVar1 = PTR_DAT_069fb9c0;
  uStack000000000000000c = 1;
  uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x0000000c);
  uVar5 = FUN_0536388c(*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,uVar5,0);
  uVar5 = FUN_05362cb4(param_2,uVar5,0);
  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_048a20e0(uVar6,param_1,uVar5,*(undefined8 *)puVar3);
  puVar2 = Oculus_Platform_Request<AssetDetails>_TypeInfo;
  if (param_3 != 0) {
    uVar7 = FUN_03c2311c(param_3,uVar6,*(undefined8 *)Oculus_Platform_Request<AssetDetails>_TypeInfo
                        );
    if ((uVar7 & 1) != 0) {
      iVar8 = 0;
      do {
        in_stack_00000008 = iVar8 + 2;
        uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
        uVar5 = FUN_0536388c(*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,
                             uVar5,0);
        uVar5 = FUN_05362cb4(param_2,uVar5,0);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_048a20e0(uVar6,param_1,uVar5,*(undefined8 *)puVar3);
        uVar7 = FUN_03c2311c(param_3,uVar6,*(undefined8 *)puVar2);
        if (iVar8 == 0x7ffffffd) {
          return uVar5;
        }
        iVar8 = iVar8 + 1;
      } while ((uVar7 & 1) != 0);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


