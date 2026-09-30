/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_cursor_set
ENTRY_POINT: 0846f948
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_cursor_set
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xbc8));
  FUN_03d2d2b0(PTR_DAT_091a4fc0);
  FUN_03d2d2b0(PTR_StringLiteral_52145_091a4e98);
  *(undefined1 *)(unaff_x20 + 0xf48) = 1;
  puVar1 = PTR_StringLiteral_52145_091a4e98;
  in_stack_00000008 = 0;
  lVar6 = *(long *)(unaff_x19 + 8);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = FUN_0846e2c8(lVar6,*(undefined8 *)(*(long *)(lVar6 + 0x58) + 0x20));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_071f1150(lVar3,0);
    uVar4 = FUN_0708cd2c(&stack0x00000008,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b95900(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  FUN_0708cdf8(&stack0x00000008,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(long *)(lVar6 + 0x20) != 0) {
    uVar5 = FUN_0845f428(*(long *)(lVar6 + 0x20),0);
    *unaff_x19 = -2;
    puVar2 = PTR_DAT_091a4fc0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


