/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetBoundsFaceCenters
ENTRY_POINT: 04829ad8
PROGRAM: vrfs-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetBoundsFaceCenters(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000000;
  lVar3 = thunk_FUN_015d056c(*unaff_x20);
  puVar2 = PTR_DAT_06e12398;
  if (lVar3 != 0) {
    FUN_043c1c48(lVar3,10,*(undefined8 *)PTR_DAT_06e0bed0);
    *(long *)(unaff_x19 + 0x48) = lVar3;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x48),lVar3);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_06dc8c78;
    if (lVar3 != 0) {
      System_Collections_ObjectModel_ReadOnlyCollection<UnitySynchronizationContext_WorkRequest>__CopyTo
                (lVar3,10,*(undefined8 *)PTR_DAT_06dc8c78);
      *(long *)(unaff_x19 + 0x50) = lVar3;
      thunk_FUN_01656ef8((long *)(unaff_x19 + 0x50),lVar3);
      lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_06dc9658;
      if (lVar3 != 0) {
        System_Collections_ObjectModel_ReadOnlyCollection<UnitySynchronizationContext_WorkRequest>__CopyTo
                  (lVar3,10,*(undefined8 *)puVar1);
        *(long *)(unaff_x19 + 0x58) = lVar3;
        thunk_FUN_01656ef8((long *)(unaff_x19 + 0x58),lVar3);
        lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
        if (lVar3 != 0) {
          FUN_04265c90(lVar3,10,*(undefined8 *)PTR_DAT_06e4f238);
          *(long *)(unaff_x19 + 0x60) = lVar3;
          thunk_FUN_01656ef8((long *)(unaff_x19 + 0x60),lVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


