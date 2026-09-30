/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboardSpace
ENTRY_POINT: 05756abc
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreateVirtualKeyboardSpace(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  do {
    plVar6 = (long *)(param_1 + 0x50);
    plVar8 = (long *)*plVar6;
    if (plVar8 == (long *)0x0) {
      *plVar6 = 0;
      thunk_FUN_02f411dc(plVar6,0);
      *(undefined8 *)(in_stack_00000048 + 0x48) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x48),0);
      plVar8 = *(long **)(in_stack_00000048 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar7 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d02048) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05756b70;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d02048,0);
LAB_05756b70:
      uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        FUN_05756dc8();
        *(undefined8 *)(in_stack_00000048 + 0x40) = 0;
        thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x40),0);
        return 0;
      }
      plVar8 = *(long **)(in_stack_00000048 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar7 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d3b610) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05756a18;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d3b610,0);
LAB_05756a18:
      uVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      *(undefined8 *)(in_stack_00000048 + 0x48) = uVar5;
      thunk_FUN_02f411dc();
      *(undefined8 *)(in_stack_00000048 + 0x50) = *(undefined8 *)(in_stack_00000048 + 0x48);
      thunk_FUN_02f411dc();
    }
    else {
      lVar7 = *(long *)PTR_DAT_06d58308;
      bVar1 = *(byte *)(lVar7 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = plVar8;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
          plVar6 = (long *)0x0;
        }
      }
      *(long *)(param_1 + 0x58) = (long)plVar6;
      if (*(byte *)(*plVar8 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
        plVar8 = (long *)0x0;
      }
      thunk_FUN_02f411dc((long *)(param_1 + 0x58),plVar8);
      if (*(long *)(in_stack_00000048 + 0x58) != 0) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_03fd16fc(&stack0x00000008,*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_06d08648);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        *(undefined8 *)(in_stack_00000048 + 0x70) = in_stack_00000018;
        *(undefined8 *)(in_stack_00000048 + 0x68) = in_stack_00000010;
        *(undefined8 *)(in_stack_00000048 + 0x60) = in_stack_00000008;
        thunk_FUN_02f411dc(in_stack_00000048 + 0x60,0);
        *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffc;
        puVar2 = PTR_DAT_06d08628;
        while (uVar4 = FUN_04df6d30(in_stack_00000048 + 0x60,*(undefined8 *)puVar2),
              (uVar4 & 1) != 0) {
          if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar4 = thunk_FUN_05464b70(*(undefined8 *)(*(long *)(in_stack_00000048 + 0x58) + 0x60),
                                     *(undefined8 *)(in_stack_00000048 + 0x70),0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(in_stack_00000048 + 0x58) != 0) {
              uVar5 = FUN_057308dc(*(long *)(in_stack_00000048 + 0x58),0);
              *(undefined8 *)(in_stack_00000048 + 0x18) = uVar5;
              thunk_FUN_02f411dc();
              *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
              return 1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
        }
        FUN_05756d78();
        *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
        *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
        *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
      }
      *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x58),0);
    }
    plVar8 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar8 == (long *)0x0) {
LAB_05756a84:
      plVar8 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d58798 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_05756a84;
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d58798)
      {
        plVar8 = (long *)0x0;
      }
    }
    uVar5 = FUN_0575361c(*(undefined8 *)(in_stack_00000048 + 0x48),plVar8);
    *(undefined8 *)(in_stack_00000048 + 0x50) = uVar5;
    thunk_FUN_02f411dc();
    param_1 = in_stack_00000048;
  } while( true );
}


