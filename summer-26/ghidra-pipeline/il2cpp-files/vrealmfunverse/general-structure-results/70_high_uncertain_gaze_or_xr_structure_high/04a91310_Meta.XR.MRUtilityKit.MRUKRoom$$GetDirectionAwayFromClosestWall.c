/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetDirectionAwayFromClosestWall
ENTRY_POINT: 04a91310
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetDirectionAwayFromClosestWall
               (long param_1,long param_2,long param_3)

{
  long *plVar1;
  
  if (param_1 != 0) {
    if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    if (param_2 != 0) {
      plVar1 = *(long **)(param_1 + 0x30);
      if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04a91374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x138))
                  (plVar1,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(*plVar1 + 0x140));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


