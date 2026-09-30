/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 07ca1ee0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__DestroyMarkerHandle(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_04447ba8(PTR_DAT_09f50ea8);
  FUN_04447ba8(PTR_DAT_09f50eb0);
  FUN_04447ba8(PTR_DAT_09f50eb8);
  FUN_04447ba8(PTR_DAT_09f50ec0);
  *(undefined1 *)(unaff_x20 + 0x9f3) = 1;
  puVar2 = PTR_DAT_09f50eb0;
  puVar1 = PTR_DAT_09f50ea8;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_05bae95c(&stack0x00000008,*(long *)(unaff_x19 + 0x68),*(undefined8 *)PTR_DAT_09f50ec0);
  while( true ) {
    uVar3 = FUN_0768d020(&stack0x00000008,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_0768d01c(&stack0x00000008,*(undefined8 *)puVar1);
      return;
    }
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar4 = *(long *)(in_stack_00000018 + 0x20);
    FUN_07ca36c8(*(long *)(unaff_x19 + 0x40),*(undefined4 *)(in_stack_00000018 + 0x10),0);
    if (lVar4 == 0) break;
    FUN_095ae4c0(lVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


