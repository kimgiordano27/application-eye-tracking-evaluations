/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetType
ENTRY_POINT: 0573192c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_systemHeadsetType(code *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *unaff_x21;
  long in_stack_00000018;
  
  uVar1 = (*param_1)();
  *(undefined8 *)(in_stack_00000018 + 0x40) = uVar1;
  thunk_FUN_02f411dc();
  plVar7 = *(long **)(in_stack_00000018 + 0x40);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_057319a4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*unaff_x21,0);
LAB_057319a4:
  uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  if ((uVar5 & 1) == 0) {
    FUN_05731c44();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x40),0);
    *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x38),0);
    plVar7 = *(long **)(in_stack_00000018 + 0x30);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05731a8c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*unaff_x21,0);
LAB_05731a8c:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      FUN_05731cf4();
      *(undefined8 *)(in_stack_00000018 + 0x30) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x30),0);
      return 0;
    }
    plVar7 = *(long **)(in_stack_00000018 + 0x30);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3b610) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05731b1c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d3b610,0);
LAB_05731b1c:
    uVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar1;
    thunk_FUN_02f411dc();
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x38);
    thunk_FUN_02f411dc();
    uVar4 = 2;
  }
  else {
    plVar7 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3b610) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05731b60;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d3b610,0);
LAB_05731b60:
    uVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(in_stack_00000018 + 0x18) = uVar1;
    thunk_FUN_02f411dc();
    uVar4 = 3;
  }
  *(undefined4 *)(in_stack_00000018 + 0x10) = uVar4;
  return 1;
}


