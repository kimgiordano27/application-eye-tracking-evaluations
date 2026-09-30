/*
FUNCTION_NAME: FUN_05e08f48
ENTRY_POINT: 05e08f48
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_05e08f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_2;
  local_38 = param_3;
  if ((DAT_06a5870c & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_UIElements_Tab_UpdateTooltip__);
    FUN_02d4dc40(Method_System_Net_WebRequestStream_CheckWriteOverflow__);
    FUN_02d4dc40(Method_System_Net_WebRequestStream_Close_internal__);
    DAT_06a5870c = 1;
  }
  iVar3 = FUN_061f946c(&local_40,0);
  uVar2 = local_38;
  uVar1 = local_40;
  if (iVar3 < 0x22c) {
    puVar5 = (undefined8 *)Method_System_Net_WebRequestStream_CheckWriteOverflow__;
    if (((iVar3 != 300) && (iVar3 != 0x164)) && (iVar3 != 0x16c)) {
      return;
    }
  }
  else {
    puVar5 = (undefined8 *)Method_System_Net_WebRequestStream_Close_internal__;
    if (((iVar3 != 0x26c) && (iVar3 != 0x264)) && (iVar3 != 0x22c)) {
      return;
    }
  }
  uVar4 = thunk_FUN_02d8a638(*(undefined8 *)Method_UnityEngine_UIElements_Tab_UpdateTooltip__);
  FUN_04d27d68(uVar4,param_1,*puVar5,0);
  FUN_05e084fc(param_1,uVar1,uVar2,uVar4);
  return;
}


