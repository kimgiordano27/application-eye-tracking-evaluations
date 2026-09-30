/*
FUNCTION_NAME: UnityEditor.Analytics.AssetImportStatusAnalytic$$CreateAssetImportStatusAnalytic
ENTRY_POINT: 073dd47c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd32c) */
/* WARNING: Removing unreachable block (ram,0x073dd334) */

void UnityEditor_Analytics_AssetImportStatusAnalytic__CreateAssetImportStatusAnalytic(void)

{
  long *plVar1;
  long lVar2;
  int unaff_w21;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_0315ede8(&stack0x00000008);
  if (unaff_w21 != 1) {
    FUN_0362e544(&stack0x00000020);
                    /* WARNING: Subroutine does not return */
    FUN_03732a6c();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  in_stack_00000020 = lVar2;
  __cxa_end_catch();
  FUN_04b15ef4(in_stack_00000028,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
              );
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00(lVar2);
  }
  FUN_073dd74c();
  return;
}


