/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 05c9b414
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeIntArray(long param_1)

{
  undefined4 uVar1;
  bool in_ZR;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  
  if (in_ZR) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *unaff_x19;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x60);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
  }
  else {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *unaff_x19;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_070fa3c8 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070fa3c8);
    }
    uVar2 = FUN_05c599f8(4,4,3,uVar1,&stack0x000000e0,0);
    if ((uVar2 & 1) == 0) {
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      uVar4 = *(undefined8 *)PTR_DAT_070c1a80;
    }
  }
  return;
}


