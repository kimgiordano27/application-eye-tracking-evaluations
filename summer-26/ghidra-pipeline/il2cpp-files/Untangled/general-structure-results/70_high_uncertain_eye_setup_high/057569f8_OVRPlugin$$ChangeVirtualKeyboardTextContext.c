/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 057569f8
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


undefined8 OVRPlugin__ChangeVirtualKeyboardTextContext(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  long *unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
code_r0x057569f8:
  if (!(bool)in_ZR) goto LAB_057569e4;
LAB_057569fc:
  puVar3 = (undefined8 *)FUN_02eea86c(unaff_x19,param_3,0);
LAB_05756a18:
  uVar4 = (*(code *)*puVar3)(unaff_x19,puVar3[1]);
  *(undefined8 *)(in_stack_00000048 + 0x48) = uVar4;
  thunk_FUN_02f411dc();
  *(undefined8 *)(in_stack_00000048 + 0x50) = *(undefined8 *)(in_stack_00000048 + 0x48);
  thunk_FUN_02f411dc();
  do {
    plVar6 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar6 == (long *)0x0) {
LAB_05756a84:
      plVar6 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d58798 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_05756a84;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d58798)
      {
        plVar6 = (long *)0x0;
      }
    }
    uVar4 = FUN_0575361c(*(undefined8 *)(in_stack_00000048 + 0x48),plVar6);
    *(undefined8 *)(in_stack_00000048 + 0x50) = uVar4;
    thunk_FUN_02f411dc();
    plVar7 = (long *)(in_stack_00000048 + 0x50);
    plVar6 = (long *)*plVar7;
    if (plVar6 == (long *)0x0) break;
    lVar8 = *(long *)PTR_DAT_06d58308;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar1) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = plVar6;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
        plVar7 = (long *)0x0;
      }
    }
    *(long *)(in_stack_00000048 + 0x58) = (long)plVar7;
    if (*(byte *)(*plVar6 + 0x130) < bVar1) {
      plVar6 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
      plVar6 = (long *)0x0;
    }
    thunk_FUN_02f411dc((long *)(in_stack_00000048 + 0x58),plVar6);
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
      while (uVar5 = FUN_04df6d30(in_stack_00000048 + 0x60,*(undefined8 *)puVar2), (uVar5 & 1) != 0)
      {
        if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar5 = thunk_FUN_05464b70(*(undefined8 *)(*(long *)(in_stack_00000048 + 0x58) + 0x60),
                                   *(undefined8 *)(in_stack_00000048 + 0x70),0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(in_stack_00000048 + 0x58) != 0) {
            uVar4 = FUN_057308dc(*(long *)(in_stack_00000048 + 0x58),0);
            *(undefined8 *)(in_stack_00000048 + 0x18) = uVar4;
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
  } while( true );
  *plVar7 = 0;
  thunk_FUN_02f411dc(plVar7,0);
  *(undefined8 *)(in_stack_00000048 + 0x48) = 0;
  thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x48),0);
  plVar6 = *(long **)(in_stack_00000048 + 0x40);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar8 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d02048) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05756b70;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d02048,0);
LAB_05756b70:
  uVar5 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  if ((uVar5 & 1) == 0) {
    FUN_05756dc8();
    *(undefined8 *)(in_stack_00000048 + 0x40) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x40),0);
    return 0;
  }
  unaff_x19 = *(long **)(in_stack_00000048 + 0x40);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  param_1 = *unaff_x19;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_06d3b610;
  if (in_x9 == 0) goto LAB_057569fc;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_057569e4:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
    goto code_r0x057569f8;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_05756a18;
}


