/*
FUNCTION_NAME: Cysharp.Threading.Tasks.PlayerLoopTimer$$Dispose
ENTRY_POINT: 07c7fe94
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Cysharp_Threading_Tasks_PlayerLoopTimer__Dispose(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0915bd58);
    FUN_03f13384(PTR_DAT_0915bd60);
    FUN_03f13384(PTR_DAT_0915bd68);
    FUN_03f13384(PTR_DAT_0915bd70);
    *(undefined1 *)(unaff_x20 + 0x163) = 1;
  }
  puVar2 = PTR_DAT_0915bd68;
  puVar1 = PTR_DAT_0915bd58;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x10);
    while( true ) {
      do {
        lVar4 = lVar3;
        if (lVar4 == 0) {
          return;
        }
        lVar5 = *(long *)(lVar4 + 0x28);
        lVar3 = FUN_054cbafc(lVar4,*(undefined8 *)puVar1);
        if (lVar5 == 0) goto LAB_07c7ff60;
      } while (*(int *)(lVar5 + 0x40) == 0);
      if (*(long *)(unaff_x19 + 0x28) == 0) break;
      FUN_054d0bb8(*(long *)(unaff_x19 + 0x28),lVar4,*(undefined8 *)puVar2);
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) break;
      FUN_07c7fdac(lVar4,lVar5);
      thunk_FUN_03f4af58(lVar4 + 0x48,0);
    }
  }
LAB_07c7ff60:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


