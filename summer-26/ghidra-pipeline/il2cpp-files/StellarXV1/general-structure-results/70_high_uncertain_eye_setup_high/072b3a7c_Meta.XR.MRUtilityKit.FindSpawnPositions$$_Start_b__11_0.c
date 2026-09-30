/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.FindSpawnPositions$$<Start>b__11_0
ENTRY_POINT: 072b3a7c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_FindSpawnPositions__<Start>b__11_0(long param_1)

{
  undefined8 uVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  uVar1 = thunk_FUN_040b4efc(**(undefined8 **)(in_x9 + 0xa08));
  FUN_0678ae68();
  if (lVar2 != 0) {
    FUN_067910d4(lVar2,uVar1,*(undefined8 *)PTR_DAT_092c2b38);
    if ((*(long *)(unaff_x19 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38), lVar2 != 0)) {
      lVar2 = *(long *)(lVar2 + 0x40);
      uVar1 = thunk_FUN_040b4efc(*unaff_x23);
      FUN_0678a1dc();
      if (lVar2 != 0) {
        FUN_0678cdc4(lVar2,uVar1,*unaff_x24);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_05ebb9c8();
        FUN_072b37ac();
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_072b2174();
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_065f2c5c(*(long *)(unaff_x19 + 0x28),1,*(undefined8 *)PTR_DAT_092a2570);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


