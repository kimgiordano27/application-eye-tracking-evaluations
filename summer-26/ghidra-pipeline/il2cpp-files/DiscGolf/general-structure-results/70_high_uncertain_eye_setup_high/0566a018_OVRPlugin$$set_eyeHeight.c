/*
FUNCTION_NAME: OVRPlugin$$set_eyeHeight
ENTRY_POINT: 0566a018
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_eyeHeight(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 *unaff_x22;
  
  FUN_0494d298();
  puVar1 = System_IO_Enumeration_FileSystemEnumerable_FindTransform<FileSystemInfo>_TypeInfo;
  if (unaff_x20 != 0) {
    FUN_049503d0();
    lVar3 = *(long *)(unaff_x19 + 0x1d0);
    uVar2 = thunk_FUN_02dd3144(*unaff_x22);
    FUN_0494d298();
    if (lVar3 != 0) {
      FUN_049503d0(lVar3,uVar2,*(undefined8 *)puVar1);
      lVar3 = *(long *)(unaff_x19 + 0x1c8);
      uVar2 = thunk_FUN_02dd3144(*unaff_x22);
      FUN_0494d298();
      if (lVar3 != 0) {
        FUN_049503d0(lVar3,uVar2,*(undefined8 *)puVar1);
        lVar3 = *(long *)(unaff_x19 + 0x1c8);
        uVar2 = thunk_FUN_02dd3144(*unaff_x22);
        FUN_0494d298();
        if (lVar3 != 0) {
          FUN_049503d0(lVar3,uVar2,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


