/*
FUNCTION_NAME: OVRPlugin$$.cctor
ENTRY_POINT: 073f41b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (lVar2 = FUN_06807d00(param_1,*(undefined8 *)PTR_DAT_08eb5f90), lVar2 != 0))
  {
    lVar3 = *(long *)(lVar2 + 0x78);
    lVar2 = FUN_073f3f80();
    if ((lVar3 != 0) && (lVar2 != 0)) {
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
      lVar2 = FUN_073f3f80();
      puVar1 = PTR_DAT_08eb1b58;
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
        thunk_FUN_03d233cc();
        lVar2 = FUN_073f3f80();
        uVar4 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)puVar1);
        }
        uVar4 = FUN_073f4254(uVar4);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x20) = uVar4;
          thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x20),uVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


