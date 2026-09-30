/*
FUNCTION_NAME: Photon.Pun.UtilityScripts.CountdownTimer$$OnDisable
ENTRY_POINT: 01739c04
PROGRAM: LethalApe-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void Photon_Pun_UtilityScripts_CountdownTimer__OnDisable(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  undefined4 unaff_w19;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x272) = in_w8;
  FUN_016cb0f8(unaff_w19,0);
  puVar2 = PTR_DAT_02bf1808;
  if (unaff_x21 != 0) {
    if (DAT_02dba422 == '\0') {
      thunk_FUN_009efa0c(PTR_DAT_02bbd5a8);
      DAT_02dba422 = '\x01';
    }
    uVar3 = FUN_0158aef8();
    uVar1 = *(undefined4 *)(unaff_x21 + 0x10);
    uVar4 = ExitGames_Client_Photon_Protocol16__DeserializeByteArray();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_009ddef4(*(long *)puVar2);
    }
    FUN_01725c10(uVar3,uVar1,unaff_w19,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0172e2f8(0x30);
}


