/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetSystemHeadsetType
ENTRY_POINT: 04f8cd0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetSystemHeadsetType(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  long unaff_x24;
  
  puVar3 = UnityEngine_RaycastHit_var;
  puVar2 = PTR_DAT_06317860;
  puVar1 = PTR_DAT_06317858;
  puVar5 = *(undefined8 **)(unaff_x20 + 0x78);
  if ((*(byte *)(unaff_x24 + 0xd7f) & 1) == 0) {
    FUN_02b3c81c(UnityEngine_RaycastHit_var);
    FUN_02b3c81c(UnityEngine_Ray_var);
    FUN_02b3c81c(PTR_DAT_06317860);
    FUN_02b3c81c(PTR_DAT_06317858);
    *(undefined1 *)(unaff_x24 + 0xd7f) = 1;
  }
  uVar4 = thunk_FUN_02b79644(*puVar5);
  FUN_04f85044();
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),uVar4);
  uVar4 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 0x54) = 1;
  uVar4 = thunk_FUN_02b79644(uVar4);
  FUN_037a5cd0(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),uVar4);
  uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_037a5cd0(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x60),uVar4);
  FUN_043323cc(param_1,*(undefined8 *)puVar3);
  return;
}


