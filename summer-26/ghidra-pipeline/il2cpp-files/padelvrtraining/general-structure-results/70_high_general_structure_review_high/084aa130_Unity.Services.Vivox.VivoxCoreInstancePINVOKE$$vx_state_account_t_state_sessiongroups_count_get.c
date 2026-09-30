/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_account_t_state_sessiongroups_count_get
ENTRY_POINT: 084aa130
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_account_t_state_sessiongroups_count_get
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long in_x9;
  uint in_w10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x25;
  
  if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4();
  }
  if ((int)unaff_x21[0x12] == 0x3e83) {
    if (*(long *)(unaff_x19 + 10) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(param_2,uVar5);
    }
    lVar3 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_participant_t_is_text_muted_for_me_get
                      ();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar5 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_091a8450);
    uVar4 = FUN_062f9900();
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x12) = uVar5;
      thunk_FUN_03d1023c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b8f2dc(unaff_x19 + 2);
      return;
    }
    lVar3 = FUN_062f9944();
    if (lVar3 != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_084a760c();
      goto LAB_084a9f44;
    }
    unaff_x21 = *(long **)(unaff_x19 + 0xe);
    if (unaff_x21 == (long *)0x0) goto LAB_084a9fdc;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_091a4f90 + 0x130);
  if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_091a4f90))
  {
LAB_084a9fdc:
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_0927f8d8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(unaff_x21,uVar5);
  }
  lVar3 = FUN_0708b084(unaff_x21,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_0708b144(lVar3,0);
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
  lVar3 = 0;
LAB_084a9f44:
  *unaff_x19 = 0xfffffffe;
  puVar2 = PTR_DAT_0927f748;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,lVar3,*(undefined8 *)puVar2);
  return;
}


