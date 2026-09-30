/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 05d05914
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  
  FUN_02fe925c(PTR_DAT_06f6e930);
  *(undefined1 *)(unaff_x20 + 0x7c2) = 1;
  puVar1 = PTR_DAT_06fb8360;
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (plVar9 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x128), plVar9 != (long *)0x0)) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06fb8360) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05d0598c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar9,*(long *)PTR_DAT_06fb8360,0);
LAB_05d0598c:
    uVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    plVar9 = (long *)(unaff_x19 + 0x30);
    uVar6 = (ulong)uVar2;
    if ((*plVar9 == 0) || (uVar2 != *(uint *)(*plVar9 + 0x18))) {
      uVar4 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6e930,uVar6);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
      thunk_FUN_03048534(plVar9,uVar4);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05d05ac4;
      FUN_068cb95c(*(long *)(unaff_x19 + 0x28),uVar6,0);
    }
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x128), plVar11 == (long *)0x0))
        goto LAB_05d05ac4;
        lVar5 = *plVar11;
        lVar12 = *(long *)(unaff_x19 + 0x30);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_05d05a64;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)puVar1,1);
LAB_05d05a64:
        uVar13 = (*(code *)*puVar3)(plVar11,uVar10 & 0xffffffff,puVar3[1]);
        if (lVar12 == 0) goto LAB_05d05ac4;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar12 = lVar12 + uVar10 * 0xc;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar12 + 0x20) = uVar13;
        *(undefined4 *)(lVar12 + 0x24) = param_2;
        *(undefined4 *)(lVar12 + 0x28) = param_3;
      } while (uVar10 != uVar6);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_068cbe14(*(long *)(unaff_x19 + 0x28),*plVar9,0);
      return;
    }
  }
LAB_05d05ac4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


