/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 02768184
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom
               (undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint in_w8;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_3 < in_w8) {
    lVar1 = unaff_x19 + (long)(int)param_3 * 0x10;
    puVar9 = (undefined8 *)(lVar1 + 0x20);
    uVar4 = *puVar9;
    if (param_4 < in_w8) {
      lVar2 = unaff_x19 + (long)(int)param_4 * 0x10;
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      puVar8 = (undefined8 *)(lVar2 + 0x20);
      uVar6 = *puVar8;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      iVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),uVar4,uVar5,uVar6,uVar7,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar3 < 1) {
        return;
      }
      if ((param_3 < *(uint *)(unaff_x19 + 0x18)) && (param_4 < *(uint *)(unaff_x19 + 0x18))) {
        uVar4 = *puVar8;
        uVar6 = *(undefined8 *)(lVar1 + 0x28);
        uVar5 = *puVar9;
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *puVar9 = uVar4;
        thunk_FUN_0188fd20(unaff_x19 + (long)(int)param_3 * 0x10 + 0x20,0);
        if (param_4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = uVar6;
          *puVar8 = uVar5;
          thunk_FUN_0188fd20(unaff_x19 + (long)(int)param_4 * 0x10 + 0x20,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


