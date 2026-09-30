/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 047aada4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long param_1,uint param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    FUN_05e39590(0xd,0x1b,0);
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (uVar2 == *(uint *)(lVar1 + 0x18)) {
      FUN_047aa524(param_1,uVar2 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      uVar2 = *(uint *)(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (uVar2 - param_2 != 0 && (int)param_2 <= (int)uVar2) {
      FUN_05e3b3a4(lVar1,param_2,lVar1,param_2 + 1,uVar2 - param_2,0);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x18)) {
        uVar5 = *param_3;
        uVar4 = param_3[3];
        uVar3 = param_3[2];
        lVar1 = lVar1 + (long)(int)param_2 * 0x20;
        *(undefined8 *)(lVar1 + 0x28) = param_3[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar5;
        *(undefined8 *)(lVar1 + 0x38) = uVar4;
        *(undefined8 *)(lVar1 + 0x30) = uVar3;
        thunk_FUN_036b7ad0(lVar1 + 0x20,0);
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


