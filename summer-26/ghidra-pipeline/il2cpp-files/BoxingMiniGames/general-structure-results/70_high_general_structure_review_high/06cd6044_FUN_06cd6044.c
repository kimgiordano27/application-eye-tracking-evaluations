/*
FUNCTION_NAME: FUN_06cd6044
ENTRY_POINT: 06cd6044
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_6
*/


void FUN_06cd6044(undefined8 param_1,undefined4 param_2,long param_3,int param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_07eea57f & 1) == 0) {
    FUN_03642964(System_Runtime_Remoting_Activation_ActivationServices_TypeInfo);
    FUN_03642964(NAudio_Wave_AcmMp3FrameDecompressor_TypeInfo);
    FUN_03642964(Meta_XR_Editor_FalcoOVRTelemetry_ActiveFalcoTelemetryClient_TypeInfo);
    FUN_03642964(Meta_XR_ImmersiveDebugger_Manager_ActionHook_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    FUN_03642964(Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon_TypeInfo);
    DAT_07eea57f = 1;
  }
  puVar3 = System_Runtime_Remoting_Activation_ActivationServices_TypeInfo;
  puVar2 = NAudio_Wave_AcmMp3FrameDecompressor_TypeInfo;
  puVar1 = UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  memcpy(&local_a0,(void *)(param_3 + 0xe8),0x50);
  iVar4 = FUN_0537d53c(param_5,*(undefined8 *)puVar3);
  if ((iVar4 == 0) && (iVar4 = FUN_0537d53c(&local_a0,*(undefined8 *)puVar3), iVar4 == 0)) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar1;
    }
    iVar4 = FUN_0537d53c(*(long *)(lVar5 + 0xb8) + 0x40,*(undefined8 *)puVar2);
    if (iVar4 == 0) {
      return;
    }
  }
  uStack_b8 = 0;
  local_c0 = param_1;
  thunk_FUN_036b7ad0(&local_c0,param_1);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,param_2);
  uStack_a8 = uStack_b8;
  local_b0 = local_c0;
  uVar6 = FUN_06cb5870(&local_b0,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar5);
    lVar5 = *(long *)puVar1;
  }
  iVar4 = FUN_0537d53c(*(long *)(lVar5 + 0xb8) + 0x40,*(undefined8 *)puVar2);
  if (0 < iVar4) {
    if (2 < param_4 - 2U) {
      return;
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar1;
    }
    FUN_03c84efc(*(long *)(lVar5 + 0xb8) + 0x40,uVar6,param_4 + 2,
                 *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                 *(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon_TypeInfo,0,
                 *(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_ActionHook_TypeInfo);
  }
  puVar1 = Meta_XR_Editor_FalcoOVRTelemetry_ActiveFalcoTelemetryClient_TypeInfo;
  FUN_03c846c8(param_5,local_b0,uStack_a8,param_6,uVar6,
               *(undefined8 *)Meta_XR_Editor_FalcoOVRTelemetry_ActiveFalcoTelemetryClient_TypeInfo);
  FUN_03c846c8(&local_a0,local_b0,uStack_a8,param_6,param_3,*(undefined8 *)puVar1);
  return;
}


