/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 0572e8f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceEraseComplete(ulong param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int unaff_w20;
  long unaff_x21;
  undefined *puVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d56470);
    FUN_02f07e70(PTR_DAT_06d587c8);
    FUN_02f07e70(PTR_DAT_06d3aef0);
    FUN_02f07e70(PTR_DAT_06d58898);
    *(undefined1 *)(unaff_x21 + 0x8b5) = 1;
  }
  plVar3 = (long *)(**(code **)(*param_2 + 0x5e8))(param_2,*(undefined8 *)(*param_2 + 0x5f0));
  puVar8 = PTR_DAT_06d56470;
  if (unaff_w20 < 0) {
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar5 = thunk_FUN_02ef1808();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d030f0);
    puVar8 = PTR_DAT_06d588a8;
LAB_0572ed38:
    uVar7 = thunk_FUN_02f239f0(puVar8);
    FUN_0555b650(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d588b8);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,uVar6);
  }
  if (plVar3 != (long *)0x0) {
    lVar9 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06d56470) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0572e9a4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d56470,0);
LAB_0572e9a4:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = PTR_DAT_06d587c8;
    if (iVar2 <= unaff_w20) {
      thunk_FUN_02f239f0(PTR_DAT_06d0e378);
      uVar5 = thunk_FUN_02ef1808();
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d030f0);
      puVar8 = PTR_DAT_06d588b0;
      goto LAB_0572ed38;
    }
    FUN_0572dbd8(param_2);
    lVar9 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0572ea14;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_0572ea14:
    lVar9 = (*(code *)*puVar4)(plVar3,unaff_w20,puVar4[1]);
    if (unaff_w20 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar3;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0572ea84;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_0572ea84:
      lVar10 = (*(code *)*puVar4)(plVar3,unaff_w20 + -1,puVar4[1]);
    }
    lVar11 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar8) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0572eae4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar8,0);
LAB_0572eae4:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 + -1 == unaff_w20) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0572eb58;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_0572eb58:
      lVar11 = (*(code *)*puVar4)(plVar3,unaff_w20 + 1,puVar4[1]);
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x20) = lVar11;
      thunk_FUN_02f411dc((long *)(lVar10 + 0x20),lVar11);
    }
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x18) = lVar10;
      thunk_FUN_02f411dc((long *)(lVar11 + 0x18),lVar10);
    }
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x10),0);
      *(undefined8 *)(lVar9 + 0x18) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x18),0);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x20),0);
      lVar10 = *plVar3;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_0572ec18;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,4);
LAB_0572ec18:
      (*(code *)*puVar4)(plVar3,unaff_w20,puVar4[1]);
      if (param_2[6] != 0) {
        uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
        FUN_05fcf3e0(uVar5,2,unaff_w20,0);
        (**(code **)(*param_2 + 0x618))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x620));
      }
      if (param_2[8] != 0) {
        uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
        FUN_06016cb8(uVar5,1,lVar9,unaff_w20,0);
                    /* WARNING: Could not recover jumptable at 0x0572ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x628))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x630));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


