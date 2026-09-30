/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 0586e22c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint in_w8;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_4 < in_w8) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar1 = unaff_x20 + (long)(int)unaff_w21 * 0x10;
    lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
    puVar5 = (undefined8 *)(lVar1 + 0x20);
    uVar7 = *puVar5;
    uVar9 = *(undefined8 *)(lVar1 + 0x28);
    puVar6 = (undefined8 *)(lVar2 + 0x20);
    uVar8 = *puVar6;
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    iVar4 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),uVar7,uVar9,uVar8,uVar3,
                       *(undefined8 *)(param_2 + 0x28));
    if (iVar4 < 1) {
      return;
    }
    if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
      uVar9 = *puVar6;
      uVar8 = *(undefined8 *)(lVar1 + 0x28);
      uVar7 = *puVar5;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *puVar5 = uVar9;
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar8;
        *puVar6 = uVar7;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


