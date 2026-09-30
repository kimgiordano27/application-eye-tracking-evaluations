/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 0234637c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose
               (long param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint in_w8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (in_w8 < param_2) {
    FUN_033b3224(0xd,0x1b,0);
    in_w8 = *(uint *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (in_w8 == *(uint *)(*(long *)(param_1 + 0x10) + 0x18)) {
      FUN_02345b00(param_1,in_w8 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      in_w8 = *(uint *)(param_1 + 0x18);
    }
    if (in_w8 - param_2 != 0 && (int)param_2 <= (int)in_w8) {
      FUN_033b4f38(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10),
                   param_2 + 1,in_w8 - param_2,0);
    }
    uVar2 = param_3[4];
    uVar4 = param_3[7];
    uVar3 = param_3[6];
    uVar6 = param_3[1];
    uVar5 = *param_3;
    uVar8 = param_3[3];
    uVar7 = param_3[2];
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)param_2 * 0x40;
        *(undefined8 *)(lVar1 + 0x48) = param_3[5];
        *(undefined8 *)(lVar1 + 0x40) = uVar2;
        *(undefined8 *)(lVar1 + 0x58) = uVar4;
        *(undefined8 *)(lVar1 + 0x50) = uVar3;
        *(undefined8 *)(lVar1 + 0x28) = uVar6;
        *(undefined8 *)(lVar1 + 0x20) = uVar5;
        *(undefined8 *)(lVar1 + 0x38) = uVar8;
        *(undefined8 *)(lVar1 + 0x30) = uVar7;
        thunk_FUN_01e10808(lVar1 + 0x20,0);
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


