/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$CreateAnchorFromRoomObject
ENTRY_POINT: 06dd72c4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__CreateAnchorFromRoomObject(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined8 *unaff_x23;
  
  puVar1 = PTR_DAT_08e90a50;
  if (unaff_x21 != 0) {
    FUN_05d68e9c();
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x40) + 0x30);
      uVar2 = thunk_FUN_03cf5234(*unaff_x23);
      FUN_05d60b38();
      if (lVar3 != 0) {
        FUN_05d68e9c(lVar3,uVar2,*(undefined8 *)puVar1);
        if (*(long *)(unaff_x20 + 0x40) != 0) {
          lVar3 = *(long *)(*(long *)(unaff_x20 + 0x40) + 0x38);
          uVar2 = thunk_FUN_03cf5234(*unaff_x23);
          FUN_05d60b38();
          if (lVar3 != 0) {
            FUN_05d68e9c(lVar3,uVar2,*(undefined8 *)puVar1);
            if (*(long *)(unaff_x20 + 0x40) != 0) {
              lVar3 = *(long *)(*(long *)(unaff_x20 + 0x40) + 0x40);
              uVar2 = thunk_FUN_03cf5234(*unaff_x23);
              FUN_05d60b38();
              if (lVar3 != 0) {
                FUN_05d68e9c(lVar3,uVar2,*(undefined8 *)puVar1);
                if ((*(long *)(unaff_x20 + 0x38) != 0) && (*(long *)(unaff_x19 + 0x90) != 0)) {
                  FUN_0675af18(*(long *)(unaff_x19 + 0x90),
                               *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10),&stack0x00000008,
                               *(undefined8 *)PTR_DAT_08e91428);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


