/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_sessiongroup_handle_set
ENTRY_POINT: 0788dee4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0788e2b4) */
/* WARNING: Removing unreachable block (ram,0x0788e0b8) */
/* WARNING: Removing unreachable block (ram,0x0788e344) */
/* WARNING: Removing unreachable block (ram,0x0788e33c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_sessiongroup_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  ulong in_stack_00000018;
  long *in_stack_00000028;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_03ac43c4();
      goto LAB_0788df20;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0788df20:
  in_stack_00000028 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_084c3f10;
  puVar1 = PTR_DAT_08488568;
  do {
    plVar7 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *in_stack_00000028;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0788dfa4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar1,0);
LAB_0788dfa4:
    uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    plVar7 = in_stack_00000028;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000028 == (long *)0x0) goto LAB_0788e0ac;
      lVar4 = *in_stack_00000028;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_0788e084;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *in_stack_00000028;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0788e008;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar2,0);
LAB_0788e008:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa052c();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08488550) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0788e0a0;
    }
  }
LAB_0788e084:
  puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_0788e0a0:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
LAB_0788e0ac:
  plVar7 = *(long **)(unaff_x20 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_084c3f08) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0788e11c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)PTR_DAT_084c3f08,0);
LAB_0788e11c:
    in_stack_00000028 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    puVar2 = PTR_DAT_084c3f10;
    puVar1 = PTR_DAT_08488568;
    do {
      plVar7 = in_stack_00000028;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *in_stack_00000028;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0788e1a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar1,0);
LAB_0788e1a0:
      uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      plVar7 = in_stack_00000028;
      if ((uVar5 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) break;
        lVar4 = *in_stack_00000028;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_0788e280;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set
        ;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *in_stack_00000028;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0788e204;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar2,0);
LAB_0788e204:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05fa052c();
    } while( true );
  }
  goto LAB_0788e2b8;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08488550) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0788e29c;
    }
  }
LAB_0788e280:
  puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_0788e29c:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
LAB_0788e2b8:
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x28));
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x18);
  puVar3 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(unaff_x20 + 0x18) & 0xff) != 0) {
    puVar3 = &stack0x00000018;
  }
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *puVar3;
  puVar3 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    puVar3 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *puVar3;
  return;
}


