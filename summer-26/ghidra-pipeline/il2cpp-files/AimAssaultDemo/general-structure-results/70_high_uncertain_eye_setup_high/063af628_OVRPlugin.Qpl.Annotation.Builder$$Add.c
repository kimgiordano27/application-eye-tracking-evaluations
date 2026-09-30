/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 063af628
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063af91c) */
/* WARNING: Removing unreachable block (ram,0x063af9ec) */

void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long in_stack_00000028;
  
  if (*(long *)(param_1 + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
                    /* try { // try from 063af638 to 064af717 has its CatchHandler @ 063af71c */
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 600))
              (plVar4,*(undefined4 *)(unaff_x20 + 0x18),*(undefined8 *)(*plVar4 + 0x260));
    in_stack_00000028 = 0;
    plVar4 = (long *)FUN_063afdb0();
    puVar3 = PTR_DAT_07db6fa0;
    puVar2 = PTR_DAT_07d89700;
    puVar1 = PTR_DAT_07d88078;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    do {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto FUN_063af6cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar2,0);
FUN_063af6cc:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_063af910;
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_063af868;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_063af850;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_063af728;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar3,0);
LAB_063af728:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar11 = *(long **)(unaff_x19 + 0x10);
      uVar9 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4(uVar9,uVar9 & 0xffffffff);
      }
      (**(code **)(*plVar11 + 0x1d8))(plVar11,uVar9 & 0xffffffff,*(undefined8 *)(*plVar11 + 0x1e0));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = FUN_061d52c8(0);
      FUN_06260640(&stack0x00000028,uVar7,0);
      FUN_0632e3c8(in_stack_00000028,0);
      FUN_063afd0c();
      FUN_063aedc8();
      in_stack_00000028 = in_stack_00000028 + 1;
    } while( true );
  }
  goto LAB_063af9d4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_063af850:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_063af904;
    }
  }
LAB_063af868:
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d896f8,0);
LAB_063af904:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_063af910:
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x1c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x1d0));
    return;
  }
LAB_063af9d4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


