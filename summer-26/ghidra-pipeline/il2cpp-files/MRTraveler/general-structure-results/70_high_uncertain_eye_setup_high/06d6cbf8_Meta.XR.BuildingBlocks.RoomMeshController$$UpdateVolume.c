/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController$$UpdateVolume
ENTRY_POINT: 06d6cbf8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController__UpdateVolume(float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((DAT_0941996d & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e68f00);
    DAT_0941996d = 1;
  }
  lVar4 = *(long *)(param_2 + 0x30);
  if (DAT_0940fefb == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fefb = '\x01';
  }
  puVar1 = PTR_DAT_08e68f00;
  if (lVar4 != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    FUN_085ea6e8(*(float *)(lVar3 + 0x18) * param_1,*(float *)(lVar3 + 0x1c) * param_1,
                 *(float *)(lVar3 + 0x20) * param_1,lVar4,0);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_085e285c(uVar5,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      uVar6 = FUN_085eb894(*(long *)(param_2 + 0x38),0);
      if (*(long *)(param_2 + 0x38) != 0) {
        FUN_085eb934(uVar6,1.0 - *(float *)(param_2 + 0x40) * param_1,*(long *)(param_2 + 0x38),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


