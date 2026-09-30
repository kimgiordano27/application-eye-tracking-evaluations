/*
FUNCTION_NAME: OVRPlugin$$set_useIPDInPositionTracking
ENTRY_POINT: 05669024
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_useIPDInPositionTracking(undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int in_w8;
  long lVar5;
  long unaff_x20;
  undefined8 *puVar6;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  
  lStack0000000000000028 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  puVar6 = *(undefined8 **)(unaff_x20 + 0xaa8);
  uStack0000000000000020 = uStack0000000000000010;
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
    param_2 = *unaff_x21;
  }
  lVar5 = **(long **)(param_2 + 0xb8);
  uVar3 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_04d95918(uVar3,*puVar6);
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar3;
  LeanTween__value(*(undefined8 *)(*unaff_x21 + 0xb8),uVar3);
  puVar2 = System_Collections_Generic_List<ERConnectionVecs>_TypeInfo;
  puVar1 = System_Collections_Generic_List<ERConnectionSibling>_TypeInfo;
  if (lVar5 != 0) {
    FUN_04d96af4(&stack0x00000010,lVar5,
                 *(undefined8 *)System_Collections_Generic_List<ERCell>_TypeInfo);
    while( true ) {
      uVar4 = FUN_0520e87c(&stack0x00000010,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        FUN_0520e9a0(&stack0x00000010,*(undefined8 *)puVar1);
        return;
      }
      if (lStack0000000000000028 == 0) break;
      FUN_05669144();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


