/*
FUNCTION_NAME: OVRPlugin$$ShutdownMixedReality
ENTRY_POINT: 05d18754
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__ShutdownMixedReality(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  FUN_068f8d14();
  if ((unaff_x20 != 0) && (lVar2 = FUN_068f8a88(), lVar2 != 0)) {
    FUN_06904d10();
    FUN_068f8b44();
    lVar2 = FUN_03c732ac();
    if ((unaff_x19 != 0) && (uVar3 = FUN_03bbec8c(), puVar1 = PTR_DAT_06fb5be8, lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 200) = uVar3;
      thunk_FUN_03048534();
      uVar3 = FUN_03bbec8c();
      System_Collections_ObjectModel_ReadOnlyCollection<JsonPosition>__System_Collections_ICollection_get_SyncRoot
                (lVar2,uVar3,*(undefined8 *)puVar1);
      FUN_068f8b44();
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


