/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$RequestMove
ENTRY_POINT: 08a7e20c
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor__RequestMove(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x23;
  
  lVar3 = *(long *)(unaff_x19 + 0x60);
  uVar1 = thunk_FUN_04983f60();
  FUN_08d61d18();
  if (lVar3 != 0) {
    FUN_08a42058(lVar3,uVar1,0);
    lVar3 = *(long *)(unaff_x19 + 0x60);
    uVar1 = thunk_FUN_04983f60(*unaff_x23);
    FUN_08d61d18();
    if (lVar3 != 0) {
      FUN_08a42400(lVar3,uVar1,0);
      plVar2 = *(long **)(unaff_x19 + 0x60);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08a7e298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


