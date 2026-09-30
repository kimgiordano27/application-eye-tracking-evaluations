/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 06930b00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationQuit(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  puVar3 = PTR_DAT_084b5bf8;
  puVar2 = PTR_DAT_084b5bf0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  if ((*unaff_x20 != 0) && (lVar4 = *(long *)(*unaff_x20 + 0x60), lVar4 != 0)) {
    FUN_04de90b8(&stack0x00000018,lVar4,*(undefined8 *)PTR_DAT_084b5c10);
    while (uVar5 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      FUN_0693014c();
    }
    FUN_061c1960(&stack0x00000018,*(undefined8 *)puVar2);
    if ((*unaff_x20 != 0) && (lVar4 = *(long *)(*unaff_x20 + 0x60), lVar4 != 0)) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      FUN_0692f7b4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


