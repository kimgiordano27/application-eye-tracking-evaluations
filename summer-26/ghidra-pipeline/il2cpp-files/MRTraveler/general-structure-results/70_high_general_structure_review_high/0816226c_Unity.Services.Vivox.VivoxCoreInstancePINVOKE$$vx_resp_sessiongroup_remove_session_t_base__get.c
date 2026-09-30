/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_remove_session_t_base__get
ENTRY_POINT: 0816226c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_remove_session_t_base__get
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  bVar1 = *(byte *)(*unaff_x22 + 0x130);
  if ((*(byte *)(param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc();
  }
  if ((int)unaff_x21[0x12] == 0x3e83) {
    if (*(long *)(unaff_x19 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 8) + 0x10);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(param_2,uVar5);
    }
    lVar3 = FUN_0815d4dc();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar3,*(undefined8 *)PTR_DAT_08e7c320);
    uVar4 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08e7c318);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0418307c(unaff_x19 + 2,&stack0x00000008);
      return;
    }
    lVar3 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e7c310);
    if (lVar3 != 0) {
      if (unaff_x20 != 0) {
        FUN_0815da00();
        *unaff_x19 = 0xfffffffe;
        puVar2 = PTR_DAT_08e7c2e8;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_063c7630(unaff_x19 + 2,lVar3,*(undefined8 *)puVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x21 = *(long **)(unaff_x19 + 0xc);
    if (unaff_x21 == (long *)0x0) goto LAB_08162188;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08e695a0))
  {
    lVar3 = FUN_0701b8d8(unaff_x21,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0701b998(lVar3,0);
  }
LAB_08162188:
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f04c78);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(unaff_x21,uVar5);
}


