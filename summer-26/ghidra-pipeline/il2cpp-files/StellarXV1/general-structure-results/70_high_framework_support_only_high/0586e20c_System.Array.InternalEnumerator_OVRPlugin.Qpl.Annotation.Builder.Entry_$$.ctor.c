/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.ctor
ENTRY_POINT: 0586e20c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor
               (long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  bool in_ZR;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (in_ZR) {
    return;
  }
  if (param_1 != 0) {
    if ((param_3 < *(uint *)(param_1 + 0x18)) && (param_4 < *(uint *)(param_1 + 0x18))) {
      if (param_2 == 0) goto LAB_0586e2d8;
      lVar1 = param_1 + (long)(int)param_3 * 0x10;
      lVar2 = param_1 + (long)(int)param_4 * 0x10;
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
      if ((param_3 < *(uint *)(param_1 + 0x18)) && (param_4 < *(uint *)(param_1 + 0x18))) {
        uVar9 = *puVar6;
        uVar8 = *(undefined8 *)(lVar1 + 0x28);
        uVar7 = *puVar5;
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *puVar5 = uVar9;
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = uVar8;
          *puVar6 = uVar7;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0586e2d8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


