/*
FUNCTION_NAME: Unity.Serialization.Json.UnsafeSerializedObjectReader$$Dispose
ENTRY_POINT: 066b2a80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Serialization_Json_UnsafeSerializedObjectReader__Dispose(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if ((*(byte *)(unaff_x20 + 0xffe) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d618);
    *(undefined1 *)(unaff_x20 + 0xffe) = 1;
  }
  puVar1 = PTR_DAT_06f6d618;
  if (*(long *)(param_1 + 0x68) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x68) + 0x120) != '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar2 = FUN_068f9b78(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_066b2b3c;
        uVar3 = FUN_066afc8c();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar1);
        }
        uVar2 = FUN_068f9b78(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return uVar3;
        }
      }
    }
    uVar3 = FUN_066ba100(param_1,0);
    return uVar3;
  }
LAB_066b2b3c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


