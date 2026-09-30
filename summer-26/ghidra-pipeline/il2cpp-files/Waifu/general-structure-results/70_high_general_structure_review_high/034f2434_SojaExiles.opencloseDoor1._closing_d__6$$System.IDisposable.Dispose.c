/*
FUNCTION_NAME: SojaExiles.opencloseDoor1.<closing>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 034f2434
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


long SojaExiles_opencloseDoor1_<closing>d__6__System_IDisposable_Dispose(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  long unaff_x23;
  long unaff_x24;
  long lVar5;
  long unaff_x25;
  long lVar6;
  long unaff_x26;
  
  while( true ) {
    uVar2 = FUN_07a119fc(param_1);
    if ((uVar2 & 1) != 0) {
      return unaff_x21;
    }
    unaff_x25 = unaff_x25 + 1;
    if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)(uint)unaff_x25) break;
    if (*(uint *)(unaff_x24 + 0x18) <= (uint)unaff_x25) goto LAB_034f2508;
    unaff_x21 = *(long *)(unaff_x26 + unaff_x25 * 8);
    if (unaff_x21 == 0) goto LAB_034f2504;
    param_1 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0x70);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
LAB_034f2508:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        lVar3 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
        if (lVar3 == 0) goto LAB_034f2504;
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar2 = FUN_07a119fc(uVar4);
        if ((uVar2 & 1) != 0) {
          return lVar3;
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + 0x10);
      if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a119fc(uVar4);
      lVar5 = 0;
      if ((uVar2 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x68);
      }
      return lVar5;
    }
  }
LAB_034f2504:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


