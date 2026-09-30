/*
FUNCTION_NAME: UnityEditor.Analytics.AssetImportAnalytic$$CreateAssetImportAnalytic
ENTRY_POINT: 07ec0f84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEditor_Analytics_AssetImportAnalytic__CreateAssetImportAnalytic(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
  *(undefined1 *)(unaff_x21 + 0xcab) = 1;
  lVar4 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_0679343c(lVar4,0);
  puVar3 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  puVar2 = Method_UnityEngine_UIElements_BaseSlider<int>__ctor__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined4 *)(lVar4 + 0x10) = unaff_w19;
  uVar5 = FUN_07ebfa24();
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_04962b78(uVar6,lVar4,*(undefined8 *)puVar3,0);
  plVar7 = (long *)FUN_044c97ac(uVar5,uVar6,*(undefined8 *)puVar1);
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07ec1024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    return;
  }
  return;
}


