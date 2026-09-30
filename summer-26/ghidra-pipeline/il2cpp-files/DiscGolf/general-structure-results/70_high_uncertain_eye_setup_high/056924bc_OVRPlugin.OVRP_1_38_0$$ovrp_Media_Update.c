/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 056924bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar3;
  
  FUN_056781b8();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04b1a3ec(*(long *)(unaff_x19 + 0x50),0,
                 *(undefined8 *)System_Collections_Generic_List<OvrAvatarPrimitive>_TypeInfo);
    puVar1 = PTR_DAT_069fb990;
    if ((unaff_x20 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar2 = FUN_0634eb94(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_063550b4(uVar3,0);
      }
      uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar2 = FUN_0634eb94(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0569262c;
        FUN_06324564(*(long *)(unaff_x19 + 0x40),0,0);
      }
      uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar2 = FUN_0634eb94(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_063550b4(uVar3,0);
      }
    }
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x28),0);
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x30),0);
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x38),0);
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x40),0);
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x48),0);
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x68),0);
    return;
  }
LAB_0569262c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


