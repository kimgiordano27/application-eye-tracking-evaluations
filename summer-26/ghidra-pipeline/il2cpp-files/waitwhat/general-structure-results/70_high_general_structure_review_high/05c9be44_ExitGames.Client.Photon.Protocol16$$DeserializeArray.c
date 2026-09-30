/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeArray
ENTRY_POINT: 05c9be44
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


void ExitGames_Client_Photon_Protocol16__DeserializeArray(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  
  puVar2 = PTR_DAT_070f84b8;
  lVar3 = *(long *)PTR_DAT_070f84b8;
  if (*(int *)(*(long *)(*unaff_x19 + 0xb8) + 0x120) == 2) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar3 = *(long *)puVar2;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_070fa3c8 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070fa3c8);
    }
    uVar4 = FUN_05c59d90(5,5,0xd,uVar1,&stack0x000000d0,0);
    if ((uVar4 & 1) == 0) {
      if (DAT_07546bbe == '\0') {
        FUN_03188a78(PTR_DAT_070ce558);
        DAT_07546bbe = '\x01';
      }
      uVar5 = *(undefined8 *)PTR_DAT_070ce558;
    }
  }
  return;
}


