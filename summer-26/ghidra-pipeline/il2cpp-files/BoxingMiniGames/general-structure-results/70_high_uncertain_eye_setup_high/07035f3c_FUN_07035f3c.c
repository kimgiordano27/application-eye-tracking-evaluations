/*
FUNCTION_NAME: FUN_07035f3c
ENTRY_POINT: 07035f3c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


uint FUN_07035f3c(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 local_3c [4];
  ulong local_38;
  
  puVar1 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  local_38 = param_3;
  if ((DAT_07eebde6 & 1) == 0) {
    FUN_03642964(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03642964(Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo);
    DAT_07eebde6 = 1;
  }
  lVar4 = *(long *)puVar1;
  local_3c[0] = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *(long *)puVar1;
  }
  FUN_06eaa264(local_3c,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar5 = FUN_06f8a594(param_2,0);
  if ((param_3 & 0xff) == 0) {
    bVar2 = false;
    uVar6 = 0x51b;
  }
  else {
    iVar3 = FUN_0493c17c(&local_38,*(undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo);
    uVar6 = 0x509;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0x50b;
    }
    bVar2 = iVar3 == 2;
    if (!bVar2) {
      uVar6 = 0x51b;
    }
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)(param_1 + 0x14) < 1) {
    bVar2 = true;
  }
  if (!bVar2) {
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_07002d9c(0);
    if ((uVar5 & 1) == 0) {
      uVar6 = uVar6 | 0x40;
    }
  }
  FUN_06eaa270(local_3c,0);
  return uVar6;
}


