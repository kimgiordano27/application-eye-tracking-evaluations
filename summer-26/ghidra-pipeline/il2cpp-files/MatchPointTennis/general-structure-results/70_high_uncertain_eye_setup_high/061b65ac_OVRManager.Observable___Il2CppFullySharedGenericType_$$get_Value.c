/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$get_Value
ENTRY_POINT: 061b65ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value(code *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  
  (*param_1)();
  lVar1 = *unaff_x20;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar1 = *unaff_x20;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_072cbc60(lVar1,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_09f29470);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar1 = *unaff_x20;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar1 = *unaff_x20;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
    if ((lVar1 != 0) &&
       (FUN_072cb648(lVar1,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_09f29460),
       in_stack_00000008 != 0)) {
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


