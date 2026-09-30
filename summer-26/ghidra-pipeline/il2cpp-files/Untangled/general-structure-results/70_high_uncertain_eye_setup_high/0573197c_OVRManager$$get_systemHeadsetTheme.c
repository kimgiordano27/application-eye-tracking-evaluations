/*
FUNCTION_NAME: OVRManager$$get_systemHeadsetTheme
ENTRY_POINT: 0573197c
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


undefined8 OVRManager__get_systemHeadsetTheme(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long *plVar7;
  long *unaff_x21;
  long in_stack_00000018;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02eea86c();
      goto LAB_057319a4;
    }
    plVar7 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar7 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
LAB_057319a4:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
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
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05731a8c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c(plVar7,*unaff_x21,0);
LAB_05731a8c:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar2 & 1) == 0) {
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
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3b610) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05731b1c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d3b610,0);
LAB_05731b1c:
    uVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar3;
    thunk_FUN_02f411dc();
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x38);
    thunk_FUN_02f411dc();
    uVar5 = 2;
  }
  else {
    plVar7 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3b610) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05731b60;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d3b610,0);
LAB_05731b60:
    uVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x18) = uVar3;
    thunk_FUN_02f411dc();
    uVar5 = 3;
  }
  *(undefined4 *)(in_stack_00000018 + 0x10) = uVar5;
  return 1;
}


