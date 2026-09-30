/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 0717d5b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__get_Item
               (long param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= param_2) goto LAB_0717d6ac;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar6 = (uint)param_3;
      FUN_086f60a4(*(long *)(param_1 + 0x18),
                   *(undefined8 *)(lVar8 + (long)(int)param_2 * 0x10 + 0x28),param_3,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38));
      lVar8 = *(long *)(param_1 + 0x10);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_0717d6ac:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar9 = (long)(int)uVar6;
          FUN_086f60a4(*(long *)(param_1 + 0x18),*(undefined8 *)(lVar8 + lVar9 * 0x10 + 0x28),
                       param_2,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38));
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 != 0) {
            if ((param_2 < *(uint *)(lVar8 + 0x18)) && (uVar6 < *(uint *)(lVar8 + 0x18))) {
              lVar1 = lVar8 + 0x20;
              puVar7 = (undefined8 *)(lVar1 + (long)(int)param_2 * 0x10);
              puVar5 = (undefined8 *)(lVar1 + lVar9 * 0x10);
              uVar10 = *puVar5;
              uVar2 = *puVar7;
              uVar3 = puVar7[1];
              puVar7[1] = puVar5[1];
              *puVar7 = uVar10;
              thunk_FUN_049ee3d8(puVar7 + 1,0);
              if (uVar6 < *(uint *)(lVar8 + 0x18)) {
                puVar7 = (undefined8 *)(lVar1 + lVar9 * 0x10 + 8);
                *puVar7 = uVar3;
                uVar4 = *(uint *)(lVar8 + 0x18);
                *(undefined8 *)(lVar1 + lVar9 * 0x10) = uVar2;
                if (uVar6 < uVar4) {
                  thunk_FUN_049ee3d8(puVar7,0);
                  return;
                }
              }
            }
            goto LAB_0717d6ac;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


