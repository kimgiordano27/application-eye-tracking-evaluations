/*
FUNCTION_NAME: ShadowGroveGames.LoginWithDiscord.Examples.UserGuilds.UserGuildsViewScript.<GetProfileImage>d__7$$System.IDisposable.Dispose
ENTRY_POINT: 06b986e0
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
ShadowGroveGames_LoginWithDiscord_Examples_UserGuilds_UserGuildsViewScript_<GetProfileImage>d__7__System_IDisposable_Dispose
          (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x27;
  float fVar5;
  undefined4 uVar6;
  
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)();
  if (DAT_086ef700 == (code *)0x0) {
    DAT_086ef700 = (code *)FUN_033d1b68("UnityEngine.Time::get_realtimeSinceStartup()");
  }
  (*DAT_086ef700)();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x41) == '\0') {
      if (DAT_086ef700 == (code *)0x0) {
        DAT_086ef700 = (code *)FUN_033d1b68("UnityEngine.Time::get_realtimeSinceStartup()");
      }
      fVar5 = (float)(*DAT_086ef700)();
      if (DAT_012ede54 < fVar5 - *(float *)(unaff_x20 + 0x98)) {
        if (DAT_086ef700 == (code *)0x0) {
          DAT_086ef700 = (code *)FUN_033d1b68("UnityEngine.Time::get_realtimeSinceStartup()");
        }
        uVar6 = (*DAT_086ef700)();
        *(undefined4 *)(unaff_x20 + 0x98) = uVar6;
        puVar4 = (undefined8 *)(unaff_x19 + 0x18);
        *puVar4 = 0;
        if (*(int *)(unaff_x27 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined4 *)(unaff_x19 + 0x10) = 3;
        return 1;
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


