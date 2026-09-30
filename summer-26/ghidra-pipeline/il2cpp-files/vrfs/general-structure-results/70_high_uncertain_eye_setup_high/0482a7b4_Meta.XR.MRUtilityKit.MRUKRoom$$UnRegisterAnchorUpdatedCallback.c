/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$UnRegisterAnchorUpdatedCallback
ENTRY_POINT: 0482a7b4
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__UnRegisterAnchorUpdatedCallback(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  thunk_FUN_01656ef8();
  lVar2 = thunk_FUN_015d056c(*unaff_x21);
  puVar1 = PTR_DAT_06da4560;
  if (lVar2 != 0) {
    FUN_0281ef70(lVar2,0x10,*(undefined8 *)PTR_DAT_06da3c88);
    *(long *)(unaff_x19 + 0x10) = lVar2;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10),lVar2);
    lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_06d8f7a8;
    if (lVar2 != 0) {
      FUN_043c1c48(lVar2,0x10,*(undefined8 *)PTR_DAT_06de2c80);
      *(long *)(unaff_x19 + 0x18) = lVar2;
      thunk_FUN_01656ef8((long *)(unaff_x19 + 0x18),lVar2);
      lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_06d96418;
      if (lVar2 != 0) {
        FUN_0281c204(lVar2,0x10,*(undefined8 *)PTR_DAT_06e02128);
        *(long *)(unaff_x19 + 0x20) = lVar2;
        thunk_FUN_01656ef8((long *)(unaff_x19 + 0x20),lVar2);
        lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_043c1c48(lVar2,0x10,*(undefined8 *)PTR_DAT_06dd04b0);
          *(long *)(unaff_x19 + 0x28) = lVar2;
          thunk_FUN_01656ef8((long *)(unaff_x19 + 0x28),lVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


