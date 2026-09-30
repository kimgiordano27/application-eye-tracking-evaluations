/*
FUNCTION_NAME: PortalController.<ClosePortal>d__8$$System.IDisposable.Dispose
ENTRY_POINT: 034f9ba4
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void PortalController_<ClosePortal>d__8__System_IDisposable_Dispose(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x198))();
    if (*(char *)(unaff_x21 + 0x6c) != '\0') {
      lVar3 = *(long *)(unaff_x21 + 0x118);
      if (lVar3 == 0) goto LAB_034f9c80;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          if (uVar1 <= (uint)lVar4) goto LAB_034f9c84;
          plVar2 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
          if (plVar2 == (long *)0x0) goto LAB_034f9c80;
          (**(code **)(*plVar2 + 0x198))();
          uVar1 = *(uint *)(lVar3 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar1);
      }
    }
    if (*(char *)(unaff_x21 + 0x6d) != '\0') {
      lVar3 = *(long *)(unaff_x21 + 0x120);
      if (lVar3 == 0) goto LAB_034f9c80;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          if (uVar1 <= (uint)lVar4) {
LAB_034f9c84:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          plVar2 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
          if (plVar2 == (long *)0x0) goto LAB_034f9c80;
          (**(code **)(*plVar2 + 0x198))();
          uVar1 = *(uint *)(lVar3 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar1);
      }
    }
    return;
  }
LAB_034f9c80:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


