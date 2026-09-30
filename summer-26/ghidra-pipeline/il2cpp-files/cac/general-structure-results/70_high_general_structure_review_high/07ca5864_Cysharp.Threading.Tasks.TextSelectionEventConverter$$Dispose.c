/*
FUNCTION_NAME: Cysharp.Threading.Tasks.TextSelectionEventConverter$$Dispose
ENTRY_POINT: 07ca5864
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Cysharp_Threading_Tasks_TextSelectionEventConverter__Dispose(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0xaa8));
  *(undefined1 *)(unaff_x19 + 0x2db) = 1;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0911ff78) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_07ca58d0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f4b594();
LAB_07ca58d0:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_0915caa8 + 0x130);
  if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0915caa8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f139ac(plVar4);
  }
  if (plVar4[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  plVar5 = *(long **)(plVar4[2] + 0x20);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    bVar1 = *(byte *)(*(long *)PTR_DAT_091150c8 + 0x130);
    if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_091150c8)) {
      uVar2 = FUN_07c99fd0();
      FUN_06121f44(plVar4,uVar2,*(undefined8 *)PTR_DAT_0915cf48);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f139ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


