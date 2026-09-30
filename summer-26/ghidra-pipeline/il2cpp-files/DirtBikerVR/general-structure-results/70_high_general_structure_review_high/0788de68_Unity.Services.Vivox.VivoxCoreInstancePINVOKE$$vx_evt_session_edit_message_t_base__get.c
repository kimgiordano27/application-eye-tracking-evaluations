/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_base__get
ENTRY_POINT: 0788de68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0788e2b4) */
/* WARNING: Removing unreachable block (ram,0x0788e0b8) */
/* WARNING: Removing unreachable block (ram,0x0788e344) */
/* WARNING: Removing unreachable block (ram,0x0788e33c) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_base__get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  undefined1 auVar10 [16];
  ulong in_stack_00000018;
  long *in_stack_00000028;
  
  FUN_0788dcb0();
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    *(long *)(param_1 + 0x10) = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_03afed3c();
  }
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a12f0);
  FUN_05f9f7c4(lVar4,*(undefined8 *)PTR_DAT_084a12e8);
  plVar9 = *(long **)(unaff_x19 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084c3f08) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0788df20;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084c3f08,0);
LAB_0788df20:
    in_stack_00000028 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
    puVar3 = PTR_DAT_084c3f10;
    puVar2 = PTR_DAT_084b7750;
    puVar1 = PTR_DAT_08488568;
    do {
      plVar9 = in_stack_00000028;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *in_stack_00000028;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0788dfa4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar1,0);
LAB_0788dfa4:
      uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      plVar9 = in_stack_00000028;
      if ((uVar7 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) break;
        lVar6 = *in_stack_00000028;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0788e084;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0788e06c;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *in_stack_00000028;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0788e008;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar3,0);
LAB_0788e008:
      auVar10 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05fa052c(lVar4,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar2);
    } while( true );
  }
  goto LAB_0788e0bc;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0788e29c;
    }
  }
LAB_0788e280:
  puVar5 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_0788e29c:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
  goto LAB_0788e2b8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0788e06c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0788e0a0;
    }
  }
LAB_0788e084:
  puVar5 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_0788e0a0:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
LAB_0788e0bc:
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084c3f08) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0788e11c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_084c3f08,0);
LAB_0788e11c:
    in_stack_00000028 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
    puVar3 = PTR_DAT_084c3f10;
    puVar2 = PTR_DAT_084b7750;
    puVar1 = PTR_DAT_08488568;
    do {
      plVar9 = in_stack_00000028;
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *in_stack_00000028;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0788e1a0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar1,0);
LAB_0788e1a0:
      uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      plVar9 = in_stack_00000028;
      if ((uVar7 & 1) == 0) {
        if (in_stack_00000028 == (long *)0x0) break;
        lVar6 = *in_stack_00000028;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0788e280;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set
        ;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *in_stack_00000028;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0788e204;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)puVar3,0);
LAB_0788e204:
      auVar10 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05fa052c(lVar4,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar2);
    } while( true );
  }
LAB_0788e2b8:
  *(long *)(param_1 + 0x28) = lVar4;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x28),lVar4);
  in_stack_00000018 = *(ulong *)(param_1 + 0x18);
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(param_1 + 0x18) & 0xff) != 0) {
    puVar5 = &stack0x00000018;
  }
  in_stack_00000018 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *puVar5;
  puVar5 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(param_1 + 0x20) & 0xff) != 0) {
    puVar5 = &stack0x00000018;
  }
  *(undefined8 *)(param_1 + 0x20) = *puVar5;
  return param_1;
}


