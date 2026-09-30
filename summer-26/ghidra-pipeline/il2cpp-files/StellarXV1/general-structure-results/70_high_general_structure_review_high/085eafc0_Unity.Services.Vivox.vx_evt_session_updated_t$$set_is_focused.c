/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$set_is_focused
ENTRY_POINT: 085eafc0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_session_updated_t__set_is_focused
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000018;
  
  if ((int)param_2 != 1) {
    lVar3 = *(long *)(unaff_x20 + 0xd8);
    *(undefined4 *)(unaff_x20 + 0x88) = 1;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_2,1,*(undefined8 *)(lVar3 + 0x28));
    }
  }
  lVar3 = *(long *)(unaff_x19 + 10);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_06649f2c(lVar3,*(undefined8 *)PTR_DAT_093322d0);
    uVar1 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_093322c8);
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e411d8(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_093322c0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(uVar2,uVar2);
      }
      FUN_085e8568();
      lVar3 = *unaff_x21;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


