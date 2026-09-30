/*
FUNCTION_NAME: OVRManager$$remove_TrackingOriginChangePending
ENTRY_POINT: 0572f460
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0572f7c8) */

void OVRManager__remove_TrackingOriginChangePending(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x470));
  FUN_02f07e70(PTR_DAT_06d01f60);
  FUN_02f07e70(PTR_DAT_06d581b0);
  FUN_02f07e70(PTR_DAT_06d3b610);
  FUN_02f07e70(PTR_DAT_06d02048);
  FUN_02f07e70(PTR_DAT_06d3aef0);
  FUN_02f07e70(PTR_DAT_06d58898);
  *(undefined1 *)(unaff_x20 + 0x8b8) = 1;
  FUN_0572dbd8();
  plVar4 = (long *)(**(code **)(*unaff_x19 + 0x5e8))();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar8 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d581b0) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0572f530;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d581b0,0);
LAB_0572f530:
  puVar1 = PTR_DAT_06d01f60;
  plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar3 = PTR_DAT_06d3b610;
  puVar2 = PTR_DAT_06d02048;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0572f5a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_0572f5a8:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_0572f6ac;
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0572f684;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0572f604;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar3,0);
LAB_0572f604:
    lVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined8 *)(lVar8 + 0x10) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x10),0);
    *(undefined8 *)(lVar8 + 0x18) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x18),0);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20),0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0572f6a0;
    }
  }
LAB_0572f684:
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar1,0);
LAB_0572f6a0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_0572f6ac:
  lVar8 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d56470) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_0572f708;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d56470,3);
LAB_0572f708:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  if (unaff_x19[6] != 0) {
    uVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
    FUN_05fcf3e0(uVar7,0,0xffffffff,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
    FUN_06016b0c(uVar7,4,0);
                    /* WARNING: Could not recover jumptable at 0x0572f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


