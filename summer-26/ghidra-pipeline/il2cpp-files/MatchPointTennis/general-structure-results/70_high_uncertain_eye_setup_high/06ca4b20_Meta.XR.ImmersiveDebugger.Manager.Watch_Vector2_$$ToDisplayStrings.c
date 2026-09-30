/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ToDisplayStrings
ENTRY_POINT: 06ca4b20
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ToDisplayStrings
               (ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e5f0);
    FUN_04447ba8(PTR_DAT_09f21278);
    FUN_04447ba8(PTR_DAT_09f28f78);
    FUN_04447ba8(PTR_DAT_09f21930);
    *(undefined1 *)(unaff_x19 + 0x142) = 1;
  }
  lVar2 = FUN_04447c90(*unaff_x22,7);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_09f28f78;
      thunk_FUN_044bb4b4();
      if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uVar3 = FUN_0614c210(param_2,0,0,0);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar3;
        thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x28),uVar3);
        puVar1 = PTR_DAT_09f21278;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_09f21278;
          thunk_FUN_044bb4b4();
          if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          uVar3 = FUN_0614c210(param_2 + 0x10,0,0,0);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = uVar3;
            thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x38),uVar3);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)puVar1;
              thunk_FUN_044bb4b4();
              if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
                FUN_04481fb8();
              }
              uVar3 = FUN_0614c210(param_2 + 0x20,0,0,0);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = uVar3;
                thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x48),uVar3);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_09f21930;
                  thunk_FUN_044bb4b4();
                  FUN_078b57fc(lVar2,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


