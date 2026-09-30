/*
FUNCTION_NAME: AIMovementController$$StartGoToPosition
ENTRY_POINT: 03537204
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void AIMovementController__StartGoToPosition
               (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               long param_5)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083ca458,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0843a7b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0x205) = 1;
  }
  if (*(long *)(param_5 + 0x48) != 0) {
    uVar4 = FUN_07a181c8(*(long *)(param_5 + 0x48),0);
    *(undefined4 *)(param_5 + 0x7c) = uVar4;
    *(undefined4 *)(param_5 + 0x80) = param_3;
    *(undefined4 *)(param_5 + 0x84) = param_4;
    if (*(long *)(param_5 + 0x48) != 0) {
      uVar4 = FUN_07a191a0(*(long *)(param_5 + 0x48),0);
      lVar2 = *(long *)(param_5 + 0x68);
      *(undefined4 *)(param_5 + 0x88) = uVar4;
      *(undefined4 *)(param_5 + 0x8c) = param_3;
      *(undefined4 *)(param_5 + 0x90) = param_4;
      if (lVar2 != 0) {
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar2 = (*DAT_086ef188)(lVar2);
        if (lVar2 != 0) {
          uVar4 = FUN_07a181c8(lVar2,0);
          lVar2 = *(long *)(param_5 + 0x68);
          *(undefined4 *)(param_5 + 0x94) = uVar4;
          *(undefined4 *)(param_5 + 0x98) = param_3;
          *(undefined4 *)(param_5 + 0x9c) = param_4;
          if (lVar2 != 0) {
            if (DAT_086ef168 == (code *)0x0) {
              DAT_086ef168 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                 );
            }
            (*DAT_086ef168)(lVar2,0);
            lVar2 = *(long *)(param_5 + 0x58);
            if (lVar2 != 0) {
              if (DAT_086ef168 == (code *)0x0) {
                DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
              }
              (*DAT_086ef168)(lVar2,0);
              uVar3 = *(undefined8 *)(param_5 + 0x60);
              if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar1 = FUN_07a0d2c4(uVar3,0,0);
              if ((uVar1 & 1) != 0) {
                lVar2 = *(long *)(param_5 + 0x60);
                if (lVar2 == 0) goto LAB_03537434;
                if (DAT_086ef168 == (code *)0x0) {
                  DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                }
                (*DAT_086ef168)(lVar2,0);
              }
              lVar2 = *(long *)(param_5 + 0x50);
              if (lVar2 != 0) {
                if (DAT_086ef168 == (code *)0x0) {
                  DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                }
                (*DAT_086ef168)(lVar2,0);
                uVar3 = *(undefined8 *)(param_5 + 0x70);
                if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                uVar1 = FUN_07a0d2c4(uVar3,0,0);
                if ((uVar1 & 1) != 0) {
                  if ((*(long *)(param_5 + 0x50) == 0) ||
                     (lVar2 = *(long *)(*(long *)(param_5 + 0x50) + 0x48), lVar2 == 0))
                  goto LAB_03537434;
                  if (*(int *)(lVar2 + 0x58) == 0) {
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
          }
        }
      }
    }
  }
LAB_03537434:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


