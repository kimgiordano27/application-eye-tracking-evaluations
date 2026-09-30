/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 07c72820
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined1 param_14 [16])

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *param_9;
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x10) = 0;
    uVar3 = FUN_07c728cc();
    *(undefined4 *)(lVar2 + 0x3c) = uVar3;
    *(undefined4 *)(lVar2 + 0x40) = param_2;
    *(undefined4 *)(lVar2 + 0x44) = param_3;
    lVar2 = *param_9;
    FUN_07c1d8a4(param_7,&stack0x00000040,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x34) = param_14._4_8_;
      *(ulong *)(lVar2 + 0x2c) = CONCAT44(param_14._0_4_,param_13._4_4_);
      *(undefined8 *)(lVar2 + 0x28) = param_13;
      *(undefined8 *)(lVar2 + 0x20) = param_12;
      if ((*(char *)(param_4 + 0x38) == '\0') || (lVar2 = *(long *)(param_4 + 0x48), lVar2 == 0)) {
        return;
      }
      lVar1 = *param_9;
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x10) = 1;
        if (*(long *)(lVar1 + 0x18) != 0) {
          FUN_07c6c6cc(*(long *)(lVar1 + 0x18),lVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


