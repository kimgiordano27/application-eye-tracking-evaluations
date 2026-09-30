/*
FUNCTION_NAME: OVRManager$$remove_SceneCaptureComplete
ENTRY_POINT: 0572eea8
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SceneCaptureComplete(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined *puVar9;
  
  FUN_02f07e70(PTR_DAT_06d587c8);
  FUN_02f07e70(PTR_DAT_06d3aef0);
  FUN_02f07e70(PTR_DAT_06d58898);
  *(undefined1 *)(unaff_x21 + 0x8b7) = 1;
  plVar3 = (long *)(**(code **)(*unaff_x19 + 0x5e8))();
  puVar9 = PTR_DAT_06d56470;
  if (unaff_w20 < 0) {
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar6 = thunk_FUN_02ef1808();
    uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d030f0);
    puVar9 = PTR_DAT_06d588a8;
LAB_0572f35c:
    uVar8 = thunk_FUN_02f239f0(puVar9);
    FUN_0555b650(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d588c0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar6,uVar7);
  }
  if (plVar3 != (long *)0x0) {
    lVar10 = *plVar3;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06d56470) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0572ef48;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d56470,0);
LAB_0572ef48:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = PTR_DAT_06d587c8;
    if (iVar2 <= unaff_w20) {
      thunk_FUN_02f239f0(PTR_DAT_06d0e378);
      uVar6 = thunk_FUN_02ef1808();
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d030f0);
      puVar9 = PTR_DAT_06d588b0;
      goto LAB_0572f35c;
    }
    lVar10 = *plVar3;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06d587c8) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0572efb0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d587c8,0);
LAB_0572efb0:
    lVar10 = (*(code *)*puVar4)(plVar3,unaff_w20,puVar4[1]);
    uVar13 = FUN_0572f38c();
    if ((uVar13 & 1) != 0) {
      return;
    }
    FUN_0572dbd8();
    lVar5 = FUN_0572e384();
    (**(code **)(*unaff_x19 + 0x6d8))();
    if (unaff_w20 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar3;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0572f068;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_0572f068:
      lVar11 = (*(code *)*puVar4)(plVar3,unaff_w20 + -1,puVar4[1]);
    }
    lVar12 = *plVar3;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar9) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0572f0c8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar9,0);
LAB_0572f0c8:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 + -1 == unaff_w20) {
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0572f138;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_0572f138:
      lVar12 = (*(code *)*puVar4)(plVar3,unaff_w20 + 1,puVar4[1]);
    }
    if (lVar5 != 0) {
      *(long **)(lVar5 + 0x10) = unaff_x19;
      thunk_FUN_02f411dc();
      *(long *)(lVar5 + 0x18) = lVar11;
      thunk_FUN_02f411dc((long *)(lVar5 + 0x18),lVar11);
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x20) = lVar5;
        thunk_FUN_02f411dc((long *)(lVar11 + 0x20),lVar5);
      }
      *(long *)(lVar5 + 0x20) = lVar12;
      thunk_FUN_02f411dc((long *)(lVar5 + 0x20),lVar12);
      if (lVar12 != 0) {
        *(long *)(lVar12 + 0x18) = lVar5;
        thunk_FUN_02f411dc((long *)(lVar12 + 0x18),lVar5);
      }
      lVar11 = *plVar3;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0572f1f8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,1);
LAB_0572f1f8:
      (*(code *)*puVar4)(plVar3,unaff_w20,lVar5,puVar4[1]);
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x10),0);
        *(undefined8 *)(lVar10 + 0x18) = 0;
        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x18),0);
        *(undefined8 *)(lVar10 + 0x20) = 0;
        thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20),0);
        if (unaff_x19[6] != 0) {
          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
          FUN_05fcf3e0(uVar6,4,unaff_w20,0);
          (**(code **)(*unaff_x19 + 0x618))();
        }
        if (unaff_x19[8] == 0) {
          return;
        }
        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
        FUN_06016ea8(uVar6,2,lVar5,lVar10,unaff_w20,0);
                    /* WARNING: Could not recover jumptable at 0x0572f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x628))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


