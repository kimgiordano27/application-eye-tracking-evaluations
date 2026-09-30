/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 05756900
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SendVirtualKeyboardInput(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long lVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  long in_stack_00000048;
  
  lVar10 = *(long *)(unaff_x19 + 0x38);
  uStack0000000000000040 = param_1;
  if (*(int *)(unaff_x19 + 0x10) == 1) goto LAB_05756c40;
  if (*(int *)(unaff_x19 + 0x10) != 0) {
    return 0;
  }
  plVar9 = *(long **)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d581b0) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0575697c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d581b0,0);
LAB_0575697c:
  uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  *(undefined8 *)(in_stack_00000048 + 0x40) = uVar4;
  thunk_FUN_02f411dc();
  *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffd;
LAB_05756b14:
  plVar9 = *(long **)(in_stack_00000048 + 0x40);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d02048) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05756b70;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d02048,0);
LAB_05756b70:
  uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if ((uVar7 & 1) == 0) {
    FUN_05756dc8();
    *(undefined8 *)(in_stack_00000048 + 0x40) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x40),0);
    return 0;
  }
  plVar9 = *(long **)(in_stack_00000048 + 0x40);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d3b610) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05756a18;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d3b610,0);
LAB_05756a18:
  uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  *(undefined8 *)(in_stack_00000048 + 0x48) = uVar4;
  thunk_FUN_02f411dc();
  *(undefined8 *)(in_stack_00000048 + 0x50) = *(undefined8 *)(in_stack_00000048 + 0x48);
  thunk_FUN_02f411dc();
  do {
    plVar9 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar9 == (long *)0x0) {
LAB_05756a84:
      plVar9 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d58798 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_05756a84;
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d58798)
      {
        plVar9 = (long *)0x0;
      }
    }
    uVar4 = FUN_0575361c(*(undefined8 *)(in_stack_00000048 + 0x48),plVar9);
    *(undefined8 *)(in_stack_00000048 + 0x50) = uVar4;
    thunk_FUN_02f411dc();
    plVar6 = (long *)(in_stack_00000048 + 0x50);
    plVar9 = (long *)*plVar6;
    if (plVar9 == (long *)0x0) break;
    lVar5 = *(long *)PTR_DAT_06d58308;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if (*(byte *)(*plVar9 + 0x130) < bVar1) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = plVar9;
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar6 = (long *)0x0;
      }
    }
    *(long *)(in_stack_00000048 + 0x58) = (long)plVar6;
    if (*(byte *)(*plVar9 + 0x130) < bVar1) {
      plVar9 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
      plVar9 = (long *)0x0;
    }
    thunk_FUN_02f411dc((long *)(in_stack_00000048 + 0x58),plVar9);
    if (*(long *)(in_stack_00000048 + 0x58) != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar5 = *(long *)(lVar10 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_03fd16fc(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_06d08648);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      *(undefined8 *)(in_stack_00000048 + 0x70) = in_stack_00000018;
      *(undefined8 *)(in_stack_00000048 + 0x68) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000048 + 0x60) = in_stack_00000008;
      thunk_FUN_02f411dc(in_stack_00000048 + 0x60,0);
      unaff_x19 = in_stack_00000048;
LAB_05756c40:
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
      puVar2 = PTR_DAT_06d08628;
      while (uVar7 = FUN_04df6d30(unaff_x19 + 0x60,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
        if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar7 = thunk_FUN_05464b70(*(undefined8 *)(*(long *)(in_stack_00000048 + 0x58) + 0x60),
                                   *(undefined8 *)(in_stack_00000048 + 0x70),0);
        unaff_x19 = in_stack_00000048;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar4 = FUN_057308dc(*(long *)(in_stack_00000048 + 0x58),0);
          *(undefined8 *)(in_stack_00000048 + 0x18) = uVar4;
          thunk_FUN_02f411dc();
          *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
          return 1;
        }
      }
      FUN_05756d78();
      *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
      *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
      *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
    }
    *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x58),0);
  } while( true );
  *plVar6 = 0;
  thunk_FUN_02f411dc(plVar6,0);
  *(undefined8 *)(in_stack_00000048 + 0x48) = 0;
  thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x48),0);
  goto LAB_05756b14;
}


