/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0717d648
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint in_w8;
  uint unaff_w19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar7;
  
  if (unaff_w19 < in_w8) {
    lVar1 = unaff_x21 + 0x20;
    puVar6 = (undefined8 *)(lVar1 + unaff_x23 * 0x10);
    puVar5 = (undefined8 *)(lVar1 + unaff_x24 * 0x10);
    uVar7 = *puVar5;
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    puVar6[1] = puVar5[1];
    *puVar6 = uVar7;
    thunk_FUN_049ee3d8(puVar6 + 1,0);
    if (unaff_w19 < *(uint *)(unaff_x21 + 0x18)) {
      puVar6 = (undefined8 *)(lVar1 + unaff_x24 * 0x10 + 8);
      *puVar6 = uVar3;
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      *(undefined8 *)(lVar1 + unaff_x24 * 0x10) = uVar2;
      if (unaff_w19 < uVar4) {
        thunk_FUN_049ee3d8(puVar6,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


