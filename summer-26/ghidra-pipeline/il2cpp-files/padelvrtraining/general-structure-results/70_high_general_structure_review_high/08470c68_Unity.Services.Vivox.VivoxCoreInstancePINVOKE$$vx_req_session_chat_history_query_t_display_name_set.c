/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_display_name_set
ENTRY_POINT: 08470c68
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08470f38) */
/* WARNING: Removing unreachable block (ram,0x08470f48) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_set
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  char cVar10;
  long unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  char cStack0000000000000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    lVar2 = FUN_05d2bf14(param_1,param_2);
    if (lVar2 == 0) {
      uVar11 = 0;
      cVar10 = '\0';
    }
    else {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      _cStack0000000000000008 = 0;
      in_stack_00000010 = 0;
      FUN_05ed1838(&stack0x00000008,*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)PTR_DAT_091af0f0);
      uVar11 = in_stack_00000010;
      cVar10 = cStack0000000000000008;
    }
    plVar12 = *(long **)(unaff_x20 + 0x38);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar2 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get
          ;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar12,*unaff_x27,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get:
    uVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if (cVar10 == '\0') {
LAB_08470df0:
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_05a3a290(&stack0x00000008,*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0927dcd0);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = _cStack0000000000000008;
      in_stack_00000030 = in_stack_00000018;
      while( true ) {
        uVar7 = FUN_06daab3c(&stack0x00000020,*unaff_x24);
        if ((uVar7 & 1) == 0) {
          FUN_06daab38(&stack0x00000020,*(undefined8 *)PTR_DAT_0927dca8);
          if (in_stack_00000038._4_1_ != '\0') {
            thunk_FUN_03d180a8(in_stack_00000000,0);
          }
          return;
        }
        if (in_stack_00000030 == 0) break;
        lVar2 = *(long *)(in_stack_00000030 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar7 = FUN_0715ac7c(uVar11,uVar4,0);
    if ((uVar7 & 1) == 0) goto LAB_08470df0;
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar2 = FUN_05d2ca4c(*(long *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_0927dcd8);
    lVar5 = *(long *)(unaff_x20 + 0x58);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)PTR_DAT_0927dcc0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar12 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *plVar12 = lVar2;
      thunk_FUN_03d1023c(plVar12,lVar2);
    }
    else {
      FUN_05a39734(lVar5,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d2c850(*(long *)(unaff_x20 + 0x48),lVar2,*unaff_x28);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06ad67c8(*(long *)(unaff_x20 + 0x50),*(undefined8 *)(lVar2 + 0x20),*unaff_x23);
    param_1 = *(long *)(unaff_x20 + 0x48);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(param_1 + 0x30) < 1) goto LAB_08470df0;
    param_2 = *unaff_x26;
  } while( true );
}


