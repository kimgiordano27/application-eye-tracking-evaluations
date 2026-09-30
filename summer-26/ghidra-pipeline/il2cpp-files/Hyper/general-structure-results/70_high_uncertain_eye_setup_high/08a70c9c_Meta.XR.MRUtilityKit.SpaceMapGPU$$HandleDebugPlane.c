/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$HandleDebugPlane
ENTRY_POINT: 08a70c9c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__HandleDebugPlane(long param_1)

{
  int in_w9;
  long unaff_x19;
  long lVar1;
  long lVar2;
  long lVar3;
  
  (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  lVar2 = *(long *)(unaff_x19 + 0x28);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
    FUN_08cc3ad0();
    *(long *)(unaff_x19 + 0x28) = lVar2;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x28),lVar2);
  }
  lVar3 = *(long *)(unaff_x19 + 0x30);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac524a0);
    FUN_089c54f8();
    *(long *)(unaff_x19 + 0x30) = lVar3;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x30),lVar3);
  }
  if (lVar1 != 0) {
    FUN_08a6d3d4(lVar1,lVar2,lVar3);
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x08a70d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),2,0,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


