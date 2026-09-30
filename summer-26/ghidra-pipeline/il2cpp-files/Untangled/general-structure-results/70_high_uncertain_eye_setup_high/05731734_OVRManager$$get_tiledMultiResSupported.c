/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResSupported
ENTRY_POINT: 05731734
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_tiledMultiResSupported(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d581b0);
    FUN_02f07e70(PTR_DAT_06d3b610);
    FUN_02f07e70(PTR_DAT_06d02048);
    FUN_02f07e70(PTR_DAT_06d58798);
    *(undefined1 *)(unaff_x20 + 0x8cd) = 1;
  }
  puVar2 = PTR_DAT_06d02048;
  if (3 < *(uint *)(unaff_x19 + 0x10)) {
    return 0;
  }
  plVar6 = *(long **)(unaff_x19 + 0x28);
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(char *)(unaff_x19 + 0x24) != '\0') {
      *(long *)(unaff_x19 + 0x18) = (long)plVar6;
      thunk_FUN_02f411dc((long *)(unaff_x19 + 0x18),plVar6);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    break;
  case 2:
    plVar6 = *(long **)(unaff_x19 + 0x38);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d58798 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d58798))
      {
        plVar6 = (long *)FUN_0572e1d4(plVar6,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d581b0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05731928;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d581b0,0);
LAB_05731928:
        uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
        *(undefined8 *)(in_stack_00000018 + 0x40) = uVar4;
        thunk_FUN_02f411dc();
        unaff_x19 = in_stack_00000018;
        goto switchD_057317a4_caseD_3;
      }
    }
    goto LAB_05731a24;
  case 3:
switchD_057317a4_caseD_3:
    plVar6 = *(long **)(unaff_x19 + 0x40);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar7 = *plVar6;
    lVar5 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_057319a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar6,lVar5,0);
LAB_057319a4:
    uVar9 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    if ((uVar9 & 1) != 0) {
      plVar6 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d3b610) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05731b60;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d3b610,0);
LAB_05731b60:
      uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      *(undefined8 *)(in_stack_00000018 + 0x18) = uVar4;
      thunk_FUN_02f411dc();
      uVar8 = 3;
      goto LAB_05731b84;
    }
    FUN_05731c44();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x40),0);
    unaff_x19 = in_stack_00000018;
LAB_05731a24:
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x38),0);
    goto LAB_05731a38;
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x5e8))(plVar6,*(undefined8 *)(*plVar6 + 0x5f0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar6;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d581b0) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_057318f0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d581b0,0);
LAB_057318f0:
  uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  *(undefined8 *)(in_stack_00000018 + 0x30) = uVar4;
  thunk_FUN_02f411dc();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
LAB_05731a38:
  plVar6 = *(long **)(in_stack_00000018 + 0x30);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar7 = *plVar6;
  lVar5 = *(long *)puVar2;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05731a8c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar6,lVar5,0);
LAB_05731a8c:
  uVar9 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  if ((uVar9 & 1) == 0) {
    FUN_05731cf4();
    *(undefined8 *)(in_stack_00000018 + 0x30) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x30),0);
    return 0;
  }
  plVar6 = *(long **)(in_stack_00000018 + 0x30);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar6;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d3b610) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05731b1c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d3b610,0);
LAB_05731b1c:
  uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  *(undefined8 *)(in_stack_00000018 + 0x38) = uVar4;
  thunk_FUN_02f411dc();
  *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x38);
  thunk_FUN_02f411dc();
  uVar8 = 2;
LAB_05731b84:
  *(undefined4 *)(in_stack_00000018 + 0x10) = uVar8;
  return 1;
}


