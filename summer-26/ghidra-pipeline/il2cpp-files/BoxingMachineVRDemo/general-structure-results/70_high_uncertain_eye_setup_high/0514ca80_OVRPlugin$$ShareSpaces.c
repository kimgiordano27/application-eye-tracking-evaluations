/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 0514ca80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__ShareSpaces(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  do {
    thunk_FUN_02dd37b4(param_1,param_2);
    plVar7 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0514c91c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d8,0);
LAB_0514c91c:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      FUN_0514cb80();
      *(undefined8 *)(in_stack_00000048 + 0x50) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000048 + 0x50),0);
      return 0;
    }
    plVar7 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0676aab8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0514c990;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0676aab8,0);
LAB_0514c990:
    uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(in_stack_00000048 + 0x58) = uVar3;
    thunk_FUN_02dd37b4();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_03a38cc8(&stack0x00000008,*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_06762028);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    *(undefined8 *)(in_stack_00000048 + 0x70) = in_stack_00000018;
    *(undefined8 *)(in_stack_00000048 + 0x68) = in_stack_00000010;
    *(undefined8 *)(in_stack_00000048 + 0x60) = in_stack_00000008;
    thunk_FUN_02dd37b4(in_stack_00000048 + 0x60,0);
    *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffc;
    puVar1 = PTR_DAT_06761ff8;
    while (uVar5 = FUN_04a68d14(in_stack_00000048 + 0x60,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
      lVar4 = FUN_0514c0a8(*(undefined8 *)(in_stack_00000048 + 0x58),
                           *(undefined8 *)(in_stack_00000048 + 0x40),
                           *(undefined4 *)(in_stack_00000048 + 0x70));
      if (lVar4 != 0) {
        *(long *)(in_stack_00000048 + 0x18) = lVar4;
        thunk_FUN_02dd37b4((long *)(in_stack_00000048 + 0x18));
        *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
        return 1;
      }
    }
    FUN_0514cb30();
    param_1 = (undefined8 *)(in_stack_00000048 + 0x58);
    *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
    *param_1 = 0;
    *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
    param_2 = 0;
  } while( true );
}


