/*
FUNCTION_NAME: UnityEditor.Analytics.BuildAssetBundleAnalytic$$CreateBuildAssetBundleAnalytic
ENTRY_POINT: 07ec037c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEditor_Analytics_BuildAssetBundleAnalytic__CreateBuildAssetBundleAnalytic(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  float unaff_s8;
  float fVar5;
  
  FUN_03a8a718(PTR_DAT_08486c60);
  *(undefined1 *)(unaff_x20 + 0xca4) = 1;
  puVar1 = PTR_DAT_08486c60;
  if (unaff_s8 < 0.0) {
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar2 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(
                              Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__
                              );
    uVar4 = thunk_FUN_03af1434(Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_03af1434(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar2,uVar3);
  }
  fVar5 = *(float *)(unaff_x19 + 0x33c);
  *(undefined1 *)(unaff_x19 + 0x340) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (1.4013e-45 < ABS(fVar5 - unaff_s8)) {
    *(float *)(unaff_x19 + 0x33c) = unaff_s8;
    FUN_07ebd704();
    if (*(int *)(*(long *)PTR_DAT_08493c18 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07f32f5c();
    return;
  }
  return;
}


