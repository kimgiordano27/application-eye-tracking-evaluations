/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$get_Value
ENTRY_POINT: 056ef468
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager_Observable<Int32Enum>__get_Value(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000000;
  long in_stack_00000008;
  
  FUN_03cf1244();
  uVar3 = FUN_068e6ae8();
  if ((uVar3 & 1) != 0) {
    if (in_stack_00000008 == 0) goto LAB_056ef578;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    (**(code **)(in_stack_00000008 + 0x18))
              (*(undefined8 *)(in_stack_00000008 + 0x40),uVar1,uVar2,
               *(undefined8 *)(in_stack_00000008 + 0x28));
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03cf1244();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03cf1244();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03cf1244();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03cf1244();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
  if (lVar4 != 0) {
    uVar3 = FUN_068e6ae8(lVar4,*unaff_x19,unaff_x19[1]);
    if ((uVar3 & 1) != 0) {
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


