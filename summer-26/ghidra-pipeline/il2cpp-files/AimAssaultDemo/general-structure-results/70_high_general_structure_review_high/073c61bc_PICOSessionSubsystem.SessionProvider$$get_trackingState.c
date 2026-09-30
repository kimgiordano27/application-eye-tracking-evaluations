/*
FUNCTION_NAME: PICOSessionSubsystem.SessionProvider$$get_trackingState
ENTRY_POINT: 073c61bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_8
*/


void PICOSessionSubsystem_SessionProvider__get_trackingState(void)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  uVar1 = FUN_075ac5e0();
  if ((uVar1 & 1) == 0) {
    if ((unaff_x21 == 0) || (lVar2 = FUN_075a7484(), lVar2 == 0)) goto LAB_073c6310;
    uVar1 = FUN_075aacd4(lVar2,0);
    if ((uVar1 & 1) != 0) goto PICOSessionSubsystem_SessionProvider__get_notTrackingReason;
  }
  else {
PICOSessionSubsystem_SessionProvider__get_notTrackingReason:
    FUN_073c63b8();
  }
  lVar2 = thunk_FUN_037787d0();
  if (lVar2 != 0) {
    (**(code **)(*unaff_x19 + 0x348))();
  }
  lVar2 = thunk_FUN_037787d0();
  if (lVar2 != 0) {
    (**(code **)(*unaff_x19 + 0x378))();
  }
  if ((long *)unaff_x19[0x13] != (long *)0x0) {
    uVar1 = (**(code **)(*(long *)unaff_x19[0x13] + 0x1a8))();
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (unaff_x19[0x1b] != 0) {
      FUN_045b9744();
      if (unaff_x19[0x28] != 0) {
        _in_stack_00000008 =
             FUN_0480eb20(unaff_x19[0x28],&stack0x00000018,
                          *(undefined8 *)
                           System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo)
        ;
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(long **)(in_stack_00000018 + 0x10) = unaff_x19;
        thunk_FUN_037aeb94();
        if (in_stack_00000018 != 0) {
          *(undefined8 *)(in_stack_00000018 + 0x18) = unaff_x20;
          thunk_FUN_037aeb94();
          (**(code **)(*unaff_x19 + 0x2c8))();
          FUN_04fafd58(&stack0x00000008,
                       *(undefined8 *)
                        System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo)
          ;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
  }
LAB_073c6310:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


