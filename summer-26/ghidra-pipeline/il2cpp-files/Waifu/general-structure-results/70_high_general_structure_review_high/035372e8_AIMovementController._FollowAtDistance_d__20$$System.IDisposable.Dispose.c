/*
FUNCTION_NAME: AIMovementController.<FollowAtDistance>d__20$$System.IDisposable.Dispose
ENTRY_POINT: 035372e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void AIMovementController_<FollowAtDistance>d__20__System_IDisposable_Dispose
               (code *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x21 + 0x168) = param_2;
  (*param_1)();
  lVar3 = *(long *)(unaff_x19 + 0x58);
  if (lVar3 != 0) {
    pcVar2 = *(code **)(unaff_x21 + 0x168);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      *(code **)(unaff_x21 + 0x168) = pcVar2;
    }
    (*pcVar2)(lVar3,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = FUN_07a0d2c4(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x60);
      if (lVar3 == 0) goto LAB_03537434;
      pcVar2 = *(code **)(unaff_x21 + 0x168);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        *(code **)(unaff_x21 + 0x168) = pcVar2;
      }
      (*pcVar2)(lVar3,0);
    }
    lVar3 = *(long *)(unaff_x19 + 0x50);
    if (lVar3 != 0) {
      pcVar2 = *(code **)(unaff_x21 + 0x168);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        *(code **)(unaff_x21 + 0x168) = pcVar2;
      }
      (*pcVar2)(lVar3,0);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x70);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar1 = FUN_07a0d2c4(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x50) == 0) ||
           (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x48), lVar3 == 0)) goto LAB_03537434;
        if (*(int *)(lVar3 + 0x58) == 0) {
          if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_079ca678(DAT_0843a7b0,0);
          return;
        }
      }
      return;
    }
  }
LAB_03537434:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


