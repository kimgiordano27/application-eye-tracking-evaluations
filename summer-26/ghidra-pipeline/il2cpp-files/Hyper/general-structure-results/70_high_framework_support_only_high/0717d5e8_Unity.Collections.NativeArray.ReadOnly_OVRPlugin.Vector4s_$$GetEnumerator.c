/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 0717d5e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__GetEnumerator
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_x9;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  undefined8 uVar9;
  
  FUN_086f60a4(param_2,*(undefined8 *)(param_1 + 0x28),param_4,
               *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x38));
  lVar7 = *(long *)(unaff_x21 + 0x10);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) {
LAB_0717d6ac:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      lVar8 = (long)(int)unaff_w19;
      FUN_086f60a4(*(long *)(unaff_x21 + 0x18),*(undefined8 *)(lVar7 + lVar8 * 0x10 + 0x28),
                   unaff_w20,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x38));
      lVar7 = *(long *)(unaff_x21 + 0x10);
      if (lVar7 != 0) {
        if ((unaff_w20 < *(uint *)(lVar7 + 0x18)) && (unaff_w19 < *(uint *)(lVar7 + 0x18))) {
          lVar1 = lVar7 + 0x20;
          puVar6 = (undefined8 *)(lVar1 + unaff_x23 * 0x10);
          puVar5 = (undefined8 *)(lVar1 + lVar8 * 0x10);
          uVar9 = *puVar5;
          uVar2 = *puVar6;
          uVar3 = puVar6[1];
          puVar6[1] = puVar5[1];
          *puVar6 = uVar9;
          thunk_FUN_049ee3d8(puVar6 + 1,0);
          if (unaff_w19 < *(uint *)(lVar7 + 0x18)) {
            puVar6 = (undefined8 *)(lVar1 + lVar8 * 0x10 + 8);
            *puVar6 = uVar3;
            uVar4 = *(uint *)(lVar7 + 0x18);
            *(undefined8 *)(lVar1 + lVar8 * 0x10) = uVar2;
            if (unaff_w19 < uVar4) {
              thunk_FUN_049ee3d8(puVar6,0);
              return;
            }
          }
        }
        goto LAB_0717d6ac;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


