/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$get_RoomUpdatedEvent
ENTRY_POINT: 02a18f00
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUK__get_RoomUpdatedEvent(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  
  puVar1 = PTR_DAT_06df64a8;
  if (in_w8 == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_02a18f7c;
    FUN_02a18a74();
  }
  else if (in_w8 == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      FUN_051de42c(DAT_0534c250,lVar2,0);
      *(long *)(unaff_x19 + 0x18) = lVar2;
      thunk_FUN_01656ef8((long *)(unaff_x19 + 0x18),lVar2);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return 1;
    }
LAB_02a18f7c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  return 0;
}


