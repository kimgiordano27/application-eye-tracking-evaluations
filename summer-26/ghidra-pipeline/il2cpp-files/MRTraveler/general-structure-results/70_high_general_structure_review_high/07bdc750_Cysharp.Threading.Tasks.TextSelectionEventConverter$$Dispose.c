/*
FUNCTION_NAME: Cysharp.Threading.Tasks.TextSelectionEventConverter$$Dispose
ENTRY_POINT: 07bdc750
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Cysharp_Threading_Tasks_TextSelectionEventConverter__Dispose(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08ee3208);
  FUN_03c8f898(PTR_DAT_08ee3210);
  *(undefined1 *)(unaff_x21 + 0x48) = 1;
  plVar6 = (long *)(unaff_x19 + 0x18);
  if (*plVar6 == 0) {
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee3210);
    FUN_05212530(lVar2,4,*(undefined8 *)PTR_DAT_08ee3208);
    *plVar6 = lVar2;
    thunk_FUN_03d233cc(plVar6,lVar2);
  }
  if (unaff_x20 != 0) {
    lVar2 = FUN_07bdba58();
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar5 = *(long *)PTR_DAT_08ee3200;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar2;
          thunk_FUN_03d233cc(plVar6,lVar2);
        }
        else {
          FUN_05212cf4(lVar3,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x38) = unaff_x19;
          thunk_FUN_03d233cc((long *)(lVar2 + 0x38));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


