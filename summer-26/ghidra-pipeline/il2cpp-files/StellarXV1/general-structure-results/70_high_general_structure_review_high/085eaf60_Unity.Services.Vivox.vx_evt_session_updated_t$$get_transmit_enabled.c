/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$get_transmit_enabled
ENTRY_POINT: 085eaf60
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_session_updated_t__get_transmit_enabled(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000018;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_09285a68);
  FUN_04077588(PTR_DAT_093322c0);
  FUN_04077588(PTR_DAT_093322c8);
  FUN_04077588(PTR_DAT_093322d0);
  *(undefined1 *)(unaff_x20 + 0xf7a) = 1;
  puVar2 = PTR_DAT_09285a68;
  lVar6 = *(long *)(unaff_x19 + 8);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar1 = *(int *)(lVar6 + 0x88);
    if (iVar1 != 1) {
      lVar5 = *(long *)(lVar6 + 0xd8);
      *(undefined4 *)(lVar6 + 0x88) = 1;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),iVar1,1,*(undefined8 *)(lVar5 + 0x28));
      }
    }
    lVar5 = *(long *)(unaff_x19 + 10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
    ;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_06649f2c(lVar5,*(undefined8 *)PTR_DAT_093322d0);
    uVar3 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_093322c8);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e411d8(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar4 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_093322c0);
  if (lVar6 != 0) {
    FUN_085e8568(lVar6,uVar4,(char)unaff_x19[0xc]);
    lVar6 = *(long *)puVar2;
    *unaff_x19 = -2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830(uVar4,uVar4);
}


