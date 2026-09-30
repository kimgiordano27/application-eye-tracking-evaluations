/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_loop_mode_duration_seconds_get
ENTRY_POINT: 09016690
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_loop_mode_duration_seconds_get
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  long unaff_x21;
  long *plVar9;
  undefined4 uVar10;
  int in_stack_00000018;
  
  uVar1 = thunk_FUN_044a9a40();
  if ((uVar1 & 1) == 0) {
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f273d8);
    uVar1 = thunk_FUN_044a9a40(uVar2,*(undefined8 *)*unaff_x20);
    if ((uVar1 & 1) == 0) {
      uVar2 = thunk_FUN_044adef4(PTR_DAT_09fbffc8);
      uVar1 = thunk_FUN_044a9a40(uVar2,*(undefined8 *)*unaff_x20);
      if ((uVar1 & 1) == 0) {
        uVar2 = thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
        uVar1 = thunk_FUN_044a9a40(uVar2,*(undefined8 *)*unaff_x20);
        if ((uVar1 & 1) == 0) {
          puVar4 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar4 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&PTR_PTR_0991e038,0);
        }
        uVar10 = 0xd;
      }
      else {
        uVar10 = 0xc;
      }
    }
    else {
      uVar10 = 0xb;
    }
  }
  else {
    uVar10 = 10;
  }
  *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = *unaff_x20;
  in_stack_00000018 = in_stack_00000018 + 1;
  __cxa_end_catch();
  switch(uVar10) {
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
    uVar2 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar3 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar6 = *plVar8;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_09016a44;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar8,lVar3,1);
LAB_09016a44:
    uVar2 = (*(code *)*puVar4)(plVar8,uVar2,puVar4[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2,uVar5);
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
    uVar2 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar3 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar6 = *plVar8;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_09016a8c;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar8,lVar3,3);
LAB_09016a8c:
    uVar2 = (*(code *)*puVar4)(plVar8,uVar2,puVar4[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2,uVar5);
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
    uVar2 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar3 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar6 = *plVar8;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_09016ad4;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar8,lVar3,4);
LAB_09016ad4:
    uVar2 = (*(code *)*puVar4)(plVar8,uVar2,puVar4[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2,uVar5);
  case 0xd:
    plVar8 = *(long **)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
    lVar3 = thunk_FUN_044adef4(PTR_DAT_09f5cdd8);
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
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
    lVar3 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
    lVar6 = *plVar9;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_09016b1c;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar9,lVar3,5);
LAB_09016b1c:
    uVar2 = (*(code *)*puVar4)(plVar9,plVar8,puVar4[1]);
    in_stack_00000018 = in_stack_00000018 + -1;
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2,uVar5);
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
  uVar2 = *(undefined8 *)(&stack0x00000008 + (long)(in_stack_00000018 + -1) * 8);
  lVar3 = thunk_FUN_044adef4(PTR_DAT_09fbffb0);
  lVar6 = *plVar8;
  uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar1 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_alias_username_get
        ;
      }
      uVar1 = uVar1 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar1 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac(plVar8,lVar3,2);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_alias_username_get:
  uVar2 = (*(code *)*puVar4)(plVar8,uVar2,puVar4[1]);
  in_stack_00000018 = in_stack_00000018 + -1;
  uVar5 = thunk_FUN_044adef4(PTR_DAT_09fbffb8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,uVar5);
}


