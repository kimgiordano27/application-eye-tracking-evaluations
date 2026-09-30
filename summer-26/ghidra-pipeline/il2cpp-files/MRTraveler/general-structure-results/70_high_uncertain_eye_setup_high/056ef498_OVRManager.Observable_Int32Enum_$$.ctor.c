/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$.ctor
ENTRY_POINT: 056ef498
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


undefined8 OVRManager_Observable<Int32Enum>___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long in_stack_00000000;
  
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  (**(code **)(unaff_x23 + 0x18))
            (*(undefined8 *)(unaff_x23 + 0x40),uVar1,uVar2,*(undefined8 *)(unaff_x23 + 0x28));
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
  if (lVar3 != 0) {
    uVar4 = FUN_068e6ae8(lVar3,*unaff_x19,unaff_x19[1]);
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000000 == 0) goto LAB_056ef578;
      (**(code **)(in_stack_00000000 + 0x18))
                (*(undefined8 *)(in_stack_00000000 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000000 + 0x28));
    }
    return 1;
  }
LAB_056ef578:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


