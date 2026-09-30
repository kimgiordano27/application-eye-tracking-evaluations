/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_message_id_get
ENTRY_POINT: 0788e1d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0788e2b4) */
/* WARNING: Removing unreachable block (ram,0x0788e344) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_message_id_get
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong in_stack_00000018;
  long *in_stack_00000028;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0788e204;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_03ac43c4(unaff_x23,param_3,0);
LAB_0788e204:
        (*(code *)*puVar2)(unaff_x23,puVar2[1]);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05fa052c();
        plVar1 = in_stack_00000028;
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar3 = *in_stack_00000028;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0788e1a0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x24,0);
LAB_0788e1a0:
        uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
        plVar1 = in_stack_00000028;
        if ((uVar4 & 1) == 0) {
          if (in_stack_00000028 == (long *)0x0) goto LAB_0788e2a8;
          lVar3 = *in_stack_00000028;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_0788e280;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set
          ;
        }
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        param_1 = *in_stack_00000028;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x23 = in_stack_00000028;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_new_message_set:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0788e29c;
    }
  }
LAB_0788e280:
  puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_0788e29c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_0788e2a8:
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  thunk_FUN_03afed3c();
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x18);
  puVar2 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(unaff_x20 + 0x18) & 0xff) != 0) {
    puVar2 = &stack0x00000018;
  }
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *puVar2;
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    puVar2 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *puVar2;
  return;
}


