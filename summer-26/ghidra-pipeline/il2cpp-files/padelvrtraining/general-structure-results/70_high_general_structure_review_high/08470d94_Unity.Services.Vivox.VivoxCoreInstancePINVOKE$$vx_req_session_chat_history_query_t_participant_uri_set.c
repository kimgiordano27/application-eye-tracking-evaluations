/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_participant_uri_set
ENTRY_POINT: 08470d94
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_participant_uri_set
               (long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w9;
  ulong uVar5;
  int *piVar6;
  char cVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  long *plVar9;
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
  
code_r0x08470d94:
  *(int *)(param_2 + 0x18) = in_w9;
  *(long *)(param_1 + 0x20) = unaff_x21;
  thunk_FUN_03d1023c((long *)(param_1 + 0x20),unaff_x21);
  do {
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d2c850(*(long *)(unaff_x20 + 0x48),unaff_x21,*unaff_x28);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06ad67c8(*(long *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x21 + 0x20),*unaff_x23);
    lVar4 = *(long *)(unaff_x20 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(lVar4 + 0x30) < 1) {
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
        uVar5 = FUN_06daab3c(&stack0x00000020,*unaff_x24);
        if ((uVar5 & 1) == 0) {
          FUN_06daab38(&stack0x00000020,*(undefined8 *)PTR_DAT_0927dca8);
          if (in_stack_00000038._4_1_ != '\0') {
            thunk_FUN_03d180a8(in_stack_00000000,0);
          }
          return;
        }
        if (in_stack_00000030 == 0) break;
        lVar4 = *(long *)(in_stack_00000030 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = FUN_05d2bf14(lVar4,*unaff_x26);
    if (lVar4 == 0) {
      uVar8 = 0;
      cVar7 = '\0';
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      _cStack0000000000000008 = 0;
      in_stack_00000010 = 0;
      FUN_05ed1838(&stack0x00000008,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_091af0f0);
      uVar8 = in_stack_00000010;
      cVar7 = cStack0000000000000008;
    }
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get
          ;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar9,*unaff_x27,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get:
    uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if (cVar7 == '\0') goto LAB_08470df0;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar5 = FUN_0715ac7c(uVar8,uVar3,0);
    if ((uVar5 & 1) == 0) goto LAB_08470df0;
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    unaff_x21 = FUN_05d2ca4c(*(long *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_0927dcd8);
    param_2 = *(long *)(unaff_x20 + 0x58);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    param_1 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)PTR_DAT_0927dcc0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) break;
    FUN_05a39734(param_2,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                );
  } while( true );
  in_w9 = uVar1 + 1;
  param_1 = param_1 + (long)(int)uVar1 * 8;
  goto code_r0x08470d94;
}


