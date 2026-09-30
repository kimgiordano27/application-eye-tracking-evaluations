/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_capture_device_id_set
ENTRY_POINT: 0901670c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_capture_device_id_set
               (undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long unaff_x21;
  long *plVar9;
  undefined4 unaff_w22;
  int in_stack_00000018;
  
  *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = param_1;
  in_stack_00000018 = in_stack_00000018 + 1;
  __cxa_end_catch();
  switch(unaff_w22) {
  case 9:
    break;
  case 10:
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar8 = *(long **)(unaff_x21 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar3 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar1 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_09016a44;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar8,lVar1,1);
LAB_09016a44:
    uVar3 = (*(code *)*puVar2)(plVar8,uVar3,puVar2[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  case 0xb:
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar8 = *(long **)(unaff_x21 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar3 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar1 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_09016a8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar8,lVar1,3);
LAB_09016a8c:
    uVar3 = (*(code *)*puVar2)(plVar8,uVar3,puVar2[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  case 0xc:
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar8 = *(long **)(unaff_x21 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar3 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar1 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_09016ad4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar8,lVar1,4);
LAB_09016ad4:
    uVar3 = (*(code *)*puVar2)(plVar8,uVar3,puVar2[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  case 0xd:
    plVar8 = *(long **)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar1 = thunk_FUN_044adef4(PTR_DAT_09f5cdd8);
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1))
      {
        in_stack_00000018 = in_stack_00000018 + -1;
                    /* WARNING: Subroutine does not return */
        FUN_04447e3c(*(undefined8 *)(&stack0x00000008 + (long)in_stack_00000018 * 8));
      }
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar9 = *(long **)(unaff_x21 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar1 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_09016b1c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar9,lVar1,5);
LAB_09016b1c:
    uVar3 = (*(code *)*puVar2)(plVar9,plVar8,puVar2[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  default:
    return;
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar8 = *(long **)(unaff_x21 + 0x18);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar3 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
  lVar1 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_alias_username_get
        ;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac(plVar8,lVar1,2);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_alias_username_get:
  uVar3 = (*(code *)*puVar2)(plVar8,uVar3,puVar2[1]);
  in_stack_00000018 = in_stack_00000018 + -1;
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar3,uVar4);
}


