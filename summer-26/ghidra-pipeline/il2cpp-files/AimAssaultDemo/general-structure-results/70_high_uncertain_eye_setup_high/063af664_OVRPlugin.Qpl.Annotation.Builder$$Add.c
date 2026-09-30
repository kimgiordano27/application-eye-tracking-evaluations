/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 063af664
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063af91c) */
/* WARNING: Removing unreachable block (ram,0x063af9ec) */

void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long in_stack_00000028;
  
  puVar3 = PTR_DAT_07db6fa0;
  puVar2 = PTR_DAT_07d89700;
  puVar1 = PTR_DAT_07d88078;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_063af6cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
FUN_063af6cc:
    uVar8 = (*(code *)*puVar4)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_063af910;
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_063af868;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_063af728;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063af728:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar10 = *(long **)(unaff_x19 + 0x10);
    uVar8 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4(uVar8,uVar8 & 0xffffffff);
    }
    (**(code **)(*plVar10 + 0x1d8))(plVar10,uVar8 & 0xffffffff,*(undefined8 *)(*plVar10 + 0x1e0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_061d52c8(0);
    FUN_06260640(&stack0x00000028,uVar6,0);
    FUN_0632e3c8(in_stack_00000028,0);
    FUN_063afd0c();
    FUN_063aedc8();
    in_stack_00000028 = in_stack_00000028 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_063af904;
    }
  }
LAB_063af868:
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063af904:
  (*(code *)*puVar4)();
LAB_063af910:
  plVar5 = *(long **)(unaff_x19 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  (**(code **)(*plVar5 + 0x1c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0));
  return;
}


