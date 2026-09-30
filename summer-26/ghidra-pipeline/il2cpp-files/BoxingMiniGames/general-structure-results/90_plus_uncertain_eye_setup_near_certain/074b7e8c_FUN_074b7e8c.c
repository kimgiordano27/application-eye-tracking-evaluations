/*
FUNCTION_NAME: FUN_074b7e8c
ENTRY_POINT: 074b7e8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_074b7e8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_07ef4368 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4d88);
    FUN_03642964(PTR_DAT_07a2abf8);
    FUN_03642964(PTR_DAT_07a00ff8);
    FUN_03642964(
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                );
    DAT_07ef4368 = 1;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (lVar2 != 0) {
        lVar1 = *(long *)(param_1 + 0x28);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar1 != 0) {
          lVar2 = *(long *)(param_1 + 0x30);
          *(undefined4 *)(lVar1 + 0x18) = 0;
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
          if (lVar2 != 0) {
            lVar1 = *(long *)(param_1 + 0x38);
            *(undefined4 *)(lVar2 + 0x18) = 0;
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar1 != 0) {
              lVar2 = *(long *)(param_1 + 0x40);
              *(undefined4 *)(lVar1 + 0x18) = 0;
              *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
              if (lVar2 != 0) {
                lVar1 = *(long *)(param_1 + 0x48);
                *(undefined4 *)(lVar2 + 0x18) = 0;
                *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                if (lVar1 != 0) {
                  lVar2 = *(long *)(param_1 + 0x50);
                  *(undefined4 *)(lVar1 + 0x18) = 0;
                  *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
                  if (lVar2 != 0) {
                    *(undefined4 *)(lVar2 + 0x18) = 0;
                    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


