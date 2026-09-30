/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 063af524
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063af91c) */
/* WARNING: Removing unreachable block (ram,0x063af9ec) */

void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar6 = *(long **)(unaff_x19 + 0x10);
    uVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4(uVar3,uVar3 & 0xffffffff);
    }
    (**(code **)(*plVar6 + 0x1d8))(plVar6,uVar3 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x1e0));
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar2 = *(long **)(lVar4 + 0x20);
    if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)(unaff_x25 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar2,*(long *)(unaff_x25 + 0x90),*(undefined4 *)(lVar4 + 0x2c));
    }
    FUN_063afd0c();
    FUN_063aedc8();
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_063af4bc;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_063af4bc:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_063af8e8;
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_063af814;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_063af518;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_063af518:
    param_1 = (*(code *)*puVar1)();
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_063af8dc;
    }
  }
LAB_063af814:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063af8dc:
  (*(code *)*puVar1)();
LAB_063af8e8:
  plVar2 = *(long **)(unaff_x19 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


