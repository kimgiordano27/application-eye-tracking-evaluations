/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeByteArray
ENTRY_POINT: 016c89e8
PROGRAM: LethalApe-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined4
ExitGames_Client_Photon_Protocol16__SerializeByteArray
          (long *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_02c03c50;
  if ((DAT_02dbbe8c & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02c03c50);
    DAT_02dbbe8c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
  }
  FUN_016c84bc(param_2,param_3,param_4);
  if (param_3 == 0xc) {
    uVar2 = (**(code **)(*param_1 + 0x288))(param_1,param_2,0,*(undefined8 *)(*param_1 + 0x290));
    uVar3 = 0x1d;
    if ((uVar2 & 1) != 0) {
      uVar3 = 0x1e;
    }
  }
  else {
    uVar3 = 0x1d;
    if (param_3 % 2 == 1) {
      uVar3 = 0x1e;
    }
  }
  return uVar3;
}


