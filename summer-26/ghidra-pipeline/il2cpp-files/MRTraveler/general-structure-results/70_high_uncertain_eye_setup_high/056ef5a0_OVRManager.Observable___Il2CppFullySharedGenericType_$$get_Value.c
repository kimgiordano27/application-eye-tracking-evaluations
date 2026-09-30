/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$get_Value
ENTRY_POINT: 056ef5a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined1 *)(unaff_x21 + 0x6ed) = 1;
  in_stack_00000008 = 0;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  if (lVar2 != 0) {
    uVar1 = FUN_068e6ae8(lVar2,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_08e851a8);
    if ((uVar1 & 1) != 0) {
      if (in_stack_00000008 == 0) goto LAB_056ef660;
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*(undefined8 *)(in_stack_00000008 + 0x28)
                );
    }
    return uVar1 & 1;
  }
LAB_056ef660:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


