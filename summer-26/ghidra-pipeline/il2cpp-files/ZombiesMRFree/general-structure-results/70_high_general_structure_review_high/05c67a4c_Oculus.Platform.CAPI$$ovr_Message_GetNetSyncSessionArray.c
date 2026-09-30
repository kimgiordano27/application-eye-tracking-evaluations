/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 05c67a4c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  FUN_04cbe79c();
  if (unaff_x20 != 0) {
    FUN_04cc2428();
    puVar1 = PTR_DAT_06fb5660;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x118);
      uVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb5660);
      FUN_04cbdfa4();
      puVar2 = PTR_DAT_06fb5a38;
      if (lVar4 != 0) {
        FUN_04cbf79c(lVar4,uVar3,*(undefined8 *)PTR_DAT_06fb5a38);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x118);
          uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
          FUN_04cbdfa4();
          if (lVar4 != 0) {
            FUN_04cbf79c(lVar4,uVar3,*(undefined8 *)puVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


